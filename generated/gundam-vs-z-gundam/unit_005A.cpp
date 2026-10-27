#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_005A[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0,
    0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 11, 0, 12, 0, 0, 0,
    13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0,
    16, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    19, 0, 20, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0,
    0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    29, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 35, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0,
    0, 0, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 43, 0, 0, 44, 0, 0, 0,
    45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0,
    0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 53, 0, 0, 0, 0, 0, 0, 54, 0, 0, 55,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57,
    0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64,
    0, 65, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 68, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 74, 0, 0, 0, 0,
    75, 0, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80,
    0, 0, 81, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 89, 0, 0, 90, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 93, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 95, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0,
    99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 104, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 110, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0,
    0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0,
    0, 119, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 130, 0, 0, 0, 131, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0,
    139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 0,
    0, 0, 0, 0, 144, 0, 145, 0, 146, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 149, 0, 0, 0, 150, 0, 151, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 154, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0,
    0, 157, 0, 0, 0, 158, 0, 159, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 162, 0, 163, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0,
    0, 166, 0, 167, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 169, 0, 0, 170, 0, 171, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0,
    0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0,
    0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0,
    0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 0, 197, 0, 198, 0, 0, 0,
    0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 201, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204,
    0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0,
    0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 209, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 212, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 222, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 228, 0, 0, 0, 0, 229, 0, 230, 0, 231, 0, 0, 232,
    0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0,
    235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 237, 0, 0, 238, 0, 239, 0, 0, 240,
    0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0,
    246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0,
    0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 252, 0, 0, 0, 0, 0, 253, 0, 0,
    254, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 257,
    0, 0, 258, 0, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 271, 0, 0, 272, 0, 0, 0, 273, 0,
    274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 280,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 284, 0, 285, 0, 0, 286, 0, 287, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0,
    291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0,
    305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 309, 0, 0, 0, 0, 0,
    0, 0, 310, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 313, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 316, 0, 317, 0, 0, 0, 0, 318, 0,
    0, 0, 319, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0,
    0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 324, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 326, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 343, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0,
};

void unit_005A(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00268000;
    case 2u: goto L_00268060;
    case 3u: goto L_00268068;
    case 4u: goto L_002680B8;
    case 5u: goto L_0026816C;
    case 6u: goto L_0026818C;
    case 7u: goto L_002681B4;
    case 8u: goto L_002681DC;
    case 9u: goto L_00268204;
    case 10u: goto L_00268264;
    case 11u: goto L_00268268;
    case 12u: goto L_00268270;
    case 13u: goto L_00268280;
    case 14u: goto L_002682D0;
    case 15u: goto L_002682DC;
    case 16u: goto L_00268300;
    case 17u: goto L_00268310;
    case 18u: goto L_00268324;
    case 19u: goto L_00268380;
    case 20u: goto L_00268388;
    case 21u: goto L_00268394;
    case 22u: goto L_002683A8;
    case 23u: goto L_002683B8;
    case 24u: goto L_002683C8;
    case 25u: goto L_002683E0;
    case 26u: goto L_002683F8;
    case 27u: goto L_00268410;
    case 28u: goto L_00268420;
    case 29u: goto L_00268480;
    case 30u: goto L_00268490;
    case 31u: goto L_002684C0;
    case 32u: goto L_002684D0;
    case 33u: goto L_002684E8;
    case 34u: goto L_0026856C;
    case 35u: goto L_00268594;
    case 36u: goto L_002685A0;
    case 37u: goto L_00268680;
    case 38u: goto L_00268748;
    case 39u: goto L_00268778;
    case 40u: goto L_00268790;
    case 41u: goto L_002687A4;
    case 42u: goto L_002687C8;
    case 43u: goto L_002687E4;
    case 44u: goto L_002687F0;
    case 45u: goto L_00268800;
    case 46u: goto L_0026881C;
    case 47u: goto L_00268828;
    case 48u: goto L_00268854;
    case 49u: goto L_00268880;
    case 50u: goto L_002688F0;
    case 51u: goto L_00268908;
    case 52u: goto L_0026894C;
    case 53u: goto L_00268954;
    case 54u: goto L_00268970;
    case 55u: goto L_0026897C;
    case 56u: goto L_002689A8;
    case 57u: goto L_002689FC;
    case 58u: goto L_00268A08;
    case 59u: goto L_00268A3C;
    case 60u: goto L_00268AB0;
    case 61u: goto L_00268B20;
    case 62u: goto L_00268B2C;
    case 63u: goto L_00268B48;
    case 64u: goto L_00268B7C;
    case 65u: goto L_00268B84;
    case 66u: goto L_00268B98;
    case 67u: goto L_00268BCC;
    case 68u: goto L_00268BD4;
    case 69u: goto L_00268BE4;
    case 70u: goto L_00268C20;
    case 71u: goto L_00268D1C;
    case 72u: goto L_00268D30;
    case 73u: goto L_00268D60;
    case 74u: goto L_00268D6C;
    case 75u: goto L_00268D80;
    case 76u: goto L_00268D9C;
    case 77u: goto L_00268DA8;
    case 78u: goto L_00268DD4;
    case 79u: goto L_00268E44;
    case 80u: goto L_00268E7C;
    case 81u: goto L_00268E88;
    case 82u: goto L_00268E94;
    case 83u: goto L_00268EF0;
    case 84u: goto L_00268F3C;
    case 85u: goto L_00268FA4;
    case 86u: goto L_00268FDC;
    case 87u: goto L_00269008;
    case 88u: goto L_0026905C;
    case 89u: goto L_00269068;
    case 90u: goto L_00269074;
    case 91u: goto L_002690D0;
    case 92u: goto L_00269140;
    case 93u: goto L_0026914C;
    case 94u: goto L_00269158;
    case 95u: goto L_0026918C;
    case 96u: goto L_00269194;
    case 97u: goto L_002691A4;
    case 98u: goto L_002691E0;
    case 99u: goto L_00269200;
    case 100u: goto L_00269230;
    case 101u: goto L_002692C0;
    case 102u: goto L_002692D0;
    case 103u: goto L_002692E4;
    case 104u: goto L_00269318;
    case 105u: goto L_00269320;
    case 106u: goto L_00269344;
    case 107u: goto L_0026935C;
    case 108u: goto L_00269370;
    case 109u: goto L_002693A4;
    case 110u: goto L_002693AC;
    case 111u: goto L_002693BC;
    case 112u: goto L_002693F0;
    case 113u: goto L_00269464;
    case 114u: goto L_00269474;
    case 115u: goto L_00269488;
    case 116u: goto L_002694BC;
    case 117u: goto L_002694C8;
    case 118u: goto L_002694EC;
    case 119u: goto L_00269504;
    case 120u: goto L_00269518;
    case 121u: goto L_0026954C;
    case 122u: goto L_00269554;
    case 123u: goto L_00269564;
    case 124u: goto L_002695A0;
    case 125u: goto L_002695D0;
    case 126u: goto L_002695D8;
    case 127u: goto L_002695F0;
    case 128u: goto L_00269620;
    case 129u: goto L_00269658;
    case 130u: goto L_00269660;
    case 131u: goto L_00269670;
    case 132u: goto L_00269728;
    case 133u: goto L_00269738;
    case 134u: goto L_00269748;
    case 135u: goto L_00269760;
    case 136u: goto L_00269770;
    case 137u: goto L_002697D0;
    case 138u: goto L_002697E0;
    case 139u: goto L_00269800;
    case 140u: goto L_00269828;
    case 141u: goto L_00269848;
    case 142u: goto L_0026985C;
    case 143u: goto L_00269870;
    case 144u: goto L_00269890;
    case 145u: goto L_00269898;
    case 146u: goto L_002698A0;
    case 147u: goto L_002698C0;
    case 148u: goto L_002698E0;
    case 149u: goto L_00269908;
    case 150u: goto L_00269918;
    case 151u: goto L_00269920;
    case 152u: goto L_00269928;
    case 153u: goto L_002699A8;
    case 154u: goto L_002699B4;
    case 155u: goto L_002699BC;
    case 156u: goto L_002699E0;
    case 157u: goto L_00269A04;
    case 158u: goto L_00269A14;
    case 159u: goto L_00269A1C;
    case 160u: goto L_00269A24;
    case 161u: goto L_00269AA0;
    case 162u: goto L_00269AAC;
    case 163u: goto L_00269AB4;
    case 164u: goto L_00269AD0;
    case 165u: goto L_00269AF4;
    case 166u: goto L_00269B04;
    case 167u: goto L_00269B0C;
    case 168u: goto L_00269B14;
    case 169u: goto L_00269B90;
    case 170u: goto L_00269B9C;
    case 171u: goto L_00269BA4;
    case 172u: goto L_00269BC0;
    case 173u: goto L_00269C08;
    case 174u: goto L_00269C18;
    case 175u: goto L_00269C40;
    case 176u: goto L_00269C54;
    case 177u: goto L_00269C70;
    case 178u: goto L_00269CB8;
    case 179u: goto L_00269CC8;
    case 180u: goto L_00269CF0;
    case 181u: goto L_00269D04;
    case 182u: goto L_00269D20;
    case 183u: goto L_00269D68;
    case 184u: goto L_00269D8C;
    case 185u: goto L_00269D9C;
    case 186u: goto L_00269DB0;
    case 187u: goto L_00269DD0;
    case 188u: goto L_00269E18;
    case 189u: goto L_00269E60;
    case 190u: goto L_00269E74;
    case 191u: goto L_00269E90;
    case 192u: goto L_00269EBC;
    case 193u: goto L_00269F0C;
    case 194u: goto L_00269F20;
    case 195u: goto L_00269F40;
    case 196u: goto L_00269F60;
    case 197u: goto L_00269F68;
    case 198u: goto L_00269F70;
    case 199u: goto L_00269F90;
    case 200u: goto L_00269FDC;
    case 201u: goto L_00269FE8;
    case 202u: goto L_0026A010;
    case 203u: goto L_0026A034;
    case 204u: goto L_0026A07C;
    case 205u: goto L_0026A088;
    case 206u: goto L_0026A0F0;
    case 207u: goto L_0026A114;
    case 208u: goto L_0026A15C;
    case 209u: goto L_0026A168;
    case 210u: goto L_0026A1A0;
    case 211u: goto L_0026A1CC;
    case 212u: goto L_0026A210;
    case 213u: goto L_0026A21C;
    case 214u: goto L_0026A240;
    case 215u: goto L_0026A280;
    case 216u: goto L_0026A2C8;
    case 217u: goto L_0026A2D4;
    case 218u: goto L_0026A2E4;
    case 219u: goto L_0026A334;
    case 220u: goto L_0026A360;
    case 221u: goto L_0026A3A8;
    case 222u: goto L_0026A3B4;
    case 223u: goto L_0026A3C0;
    case 224u: goto L_0026A3F0;
    case 225u: goto L_0026A448;
    case 226u: goto L_0026A47C;
    case 227u: goto L_0026A4C0;
    case 228u: goto L_0026A4CC;
    case 229u: goto L_0026A4E0;
    case 230u: goto L_0026A4E8;
    case 231u: goto L_0026A4F0;
    case 232u: goto L_0026A4FC;
    case 233u: goto L_0026A50C;
    case 234u: goto L_0026A55C;
    case 235u: goto L_0026A580;
    case 236u: goto L_0026A5D0;
    case 237u: goto L_0026A5DC;
    case 238u: goto L_0026A5E8;
    case 239u: goto L_0026A5F0;
    case 240u: goto L_0026A5FC;
    case 241u: goto L_0026A620;
    case 242u: goto L_0026A770;
    case 243u: goto L_0026A79C;
    case 244u: goto L_0026A7A8;
    case 245u: goto L_0026A7E0;
    case 246u: goto L_0026A800;
    case 247u: goto L_0026A834;
    case 248u: goto L_0026A840;
    case 249u: goto L_0026A870;
    case 250u: goto L_0026A890;
    case 251u: goto L_0026A8D4;
    case 252u: goto L_0026A8DC;
    case 253u: goto L_0026A8F4;
    case 254u: goto L_0026A900;
    case 255u: goto L_0026A920;
    case 256u: goto L_0026A964;
    case 257u: goto L_0026A97C;
    case 258u: goto L_0026A988;
    case 259u: goto L_0026A99C;
    case 260u: goto L_0026A9B0;
    case 261u: goto L_0026AAF8;
    case 262u: goto L_0026AB88;
    case 263u: goto L_0026AC34;
    case 264u: goto L_0026AC60;
    case 265u: goto L_0026AD30;
    case 266u: goto L_0026AD70;
    case 267u: goto L_0026AE9C;
    case 268u: goto L_0026AEB0;
    case 269u: goto L_0026AEC0;
    case 270u: goto L_0026AED4;
    case 271u: goto L_0026AEDC;
    case 272u: goto L_0026AEE8;
    case 273u: goto L_0026AEF8;
    case 274u: goto L_0026AF00;
    case 275u: goto L_0026AF28;
    case 276u: goto L_0026AF34;
    case 277u: goto L_0026AFB0;
    case 278u: goto L_0026AFC0;
    case 279u: goto L_0026AFD8;
    case 280u: goto L_0026AFFC;
    case 281u: goto L_0026B030;
    case 282u: goto L_0026B088;
    case 283u: goto L_0026B0C8;
    case 284u: goto L_0026B0D0;
    case 285u: goto L_0026B0D8;
    case 286u: goto L_0026B0E4;
    case 287u: goto L_0026B0EC;
    case 288u: goto L_0026B130;
    case 289u: goto L_0026B1AC;
    case 290u: goto L_0026B1E0;
    case 291u: goto L_0026B200;
    case 292u: goto L_0026B230;
    case 293u: goto L_0026B29C;
    case 294u: goto L_0026B2D8;
    case 295u: goto L_0026B314;
    case 296u: goto L_0026B324;
    case 297u: goto L_0026B334;
    case 298u: goto L_0026B344;
    case 299u: goto L_0026B354;
    case 300u: goto L_0026B390;
    case 301u: goto L_0026B3A0;
    case 302u: goto L_0026B3B0;
    case 303u: goto L_0026B3C0;
    case 304u: goto L_0026B3E0;
    case 305u: goto L_0026B400;
    case 306u: goto L_0026B430;
    case 307u: goto L_0026B448;
    case 308u: goto L_0026B458;
    case 309u: goto L_0026B468;
    case 310u: goto L_0026B488;
    case 311u: goto L_0026B49C;
    case 312u: goto L_0026B4B8;
    case 313u: goto L_0026B4C8;
    case 314u: goto L_0026B4E0;
    case 315u: goto L_0026B554;
    case 316u: goto L_0026B55C;
    case 317u: goto L_0026B564;
    case 318u: goto L_0026B578;
    case 319u: goto L_0026B588;
    case 320u: goto L_0026B594;
    case 321u: goto L_0026B5F8;
    case 322u: goto L_0026B610;
    case 323u: goto L_0026B664;
    case 324u: goto L_0026B670;
    case 325u: goto L_0026B85C;
    case 326u: goto L_0026B868;
    case 327u: goto L_0026B9DC;
    case 328u: goto L_0026BA50;
    case 329u: goto L_0026BA94;
    case 330u: goto L_0026BAA4;
    case 331u: goto L_0026BAB0;
    case 332u: goto L_0026BB50;
    case 333u: goto L_0026BB5C;
    case 334u: goto L_0026BBC0;
    case 335u: goto L_0026BC1C;
    case 336u: goto L_0026BD90;
    case 337u: goto L_0026BEA0;
    case 338u: goto L_0026BEF8;
    case 339u: goto L_0026BF28;
    case 340u: goto L_0026BF40;
    case 341u: goto L_0026BF90;
    case 342u: goto L_0026BFB8;
    case 343u: goto L_0026BFD0;
    case 344u: goto L_0026BFE0;
    default: bad_entry(c, 0x00268000u); return;
    }
L_00268000:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_00268178; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_002680C0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_00268060; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00268030; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002682E8; } }
    c.budget -= 1;
L_00268030:
    set32(c.r[2], c.r[6].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[12] = 0u;
    st32((c.r[16].w[0] + 276u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[16].w[0] + 280u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(0u));
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 728u), c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268060u); set32(c.r[7], 0u + 10u);  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x00268060u) [[unlikely]] return; }
L_00268060:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268068u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x00268068u) [[unlikely]] return; }
L_00268068:
    c.f[2] = ld32((c.r[16].w[0] + 728u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 728u), c.f[1]);  if (t) { goto L_002682E8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[5], 0u + 5u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 799u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 747u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002680B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002680B8u);  if (depth < kMaxDepth) unit_000D(c, 223u, depth + 1u); else { c.pc = 0x001371F0u; return; } if (c.pc != 0x002680B8u) [[unlikely]] return; }
L_002680B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 799u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002682E8; } }
L_002680C0:
    set32(c.r[3], c.r[6].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u - 389u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 768u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == c.r[5].d[0]; set32(c.r[3], 0u + 26u);  if (t) { goto L_00268108; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00268108; } }
    set32(c.r[3], 0u + 29u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 49u);  if (t) { goto L_00268108; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00268118; } }
L_00268108:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 767u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002682E8; } }
    c.budget -= 1;
L_00268118:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] - 7456u);
    set32(c.r[2], c.r[2].w[0] + 18288u);
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st32((c.r[16].w[0] + 96u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026816Cu); set32(c.r[6], 0u + 21u);  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x0026816Cu) [[unlikely]] return; }
L_0026816C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002682E8; } }
    c.budget -= 1;
L_00268178:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_002681A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026818Cu);  if (depth < kMaxDepth) unit_0033(c, 286u, depth + 1u); else { c.pc = 0x001CF310u; return; } if (c.pc != 0x0026818Cu) [[unlikely]] return; }
L_0026818C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00268210; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002682E8; } }
    c.budget -= 1;
L_002681A0:
    set32(c.r[2], 0u + 26u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002681C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002681B4u);  if (depth < kMaxDepth) unit_0033(c, 296u, depth + 1u); else { c.pc = 0x001CF520u; return; } if (c.pc != 0x002681B4u) [[unlikely]] return; }
L_002681B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00268210; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002682E8; } }
    c.budget -= 1;
L_002681C8:
    set32(c.r[2], 0u + 29u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002681F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002681DCu);  if (depth < kMaxDepth) unit_0033(c, 300u, depth + 1u); else { c.pc = 0x001CF5F0u; return; } if (c.pc != 0x002681DCu) [[unlikely]] return; }
L_002681DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00268210; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002682E8; } }
    c.budget -= 1;
L_002681F0:
    set32(c.r[2], 0u + 49u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00268210; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268204u);  if (depth < kMaxDepth) unit_0033(c, 300u, depth + 1u); else { c.pc = 0x001CF5F0u; return; } if (c.pc != 0x00268204u) [[unlikely]] return; }
L_00268204:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002682E8; } }
    c.budget -= 1;
L_00268210:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] - 7456u);
    set32(c.r[2], c.r[2].w[0] + 18288u);
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st32((c.r[16].w[0] + 96u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268264u); set32(c.r[6], 0u + 21u);  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x00268264u) [[unlikely]] return; }
L_00268264:
    c.budget -= 1;
L_00268268:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268270u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x00268270u) [[unlikely]] return; }
L_00268270:
    set32(c.r[6], ld32((c.r[16].w[0] + 96u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268280u); set32(c.r[5], c.r[16].w[0] + 1296u);  if (depth < kMaxDepth) unit_005A(c, 177u, depth + 1u); else { c.pc = 0x00269C70u; return; } if (c.pc != 0x00268280u) [[unlikely]] return; }
L_00268280:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002682E8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8325u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002682E8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 747u)));
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002682E8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 17u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 1264u), 0u);
    st32((c.r[16].w[0] + 1260u), 0u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002682D0u); st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003A(c, 69u, depth + 1u); else { c.pc = 0x001E9EF0u; return; } if (c.pc != 0x002682D0u) [[unlikely]] return; }
L_002682D0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002682DCu); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_000D(c, 223u, depth + 1u); else { c.pc = 0x001371F0u; return; } if (c.pc != 0x002682DCu) [[unlikely]] return; }
L_002682DC:
    st32((c.r[16].w[0] + 980u), 0u);
    st32((c.r[16].w[0] + 976u), 0u);
    c.budget -= 3;
L_002682E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00268300:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00268310:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268324u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x00268324u) [[unlikely]] return; }
L_00268324:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], 0u + 32u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 49u);  if (t) { goto L_002683C0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002683B0; } }
    set32(c.r[2], 0u + 29u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 26u);  if (t) { goto L_002683B0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002683A0; } }
    set32(c.r[2], 0u + 17u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00268368; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002683D0; } }
    c.budget -= 1;
L_00268368:
    st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 2u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 759u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268380u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 263u, depth + 1u); else { c.pc = 0x001CEE00u; return; } if (c.pc != 0x00268380u) [[unlikely]] return; }
L_00268380:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268388u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 290u, depth + 1u); else { c.pc = 0x001CF3E0u; return; } if (c.pc != 0x00268388u) [[unlikely]] return; }
L_00268388:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268394u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005A(c, 304u, depth + 1u); else { c.pc = 0x0026B3E0u; return; } if (c.pc != 0x00268394u) [[unlikely]] return; }
L_00268394:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002683E0; } }
    c.budget -= 1;
L_002683A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002683A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 225u, depth + 1u); else { c.pc = 0x001CE600u; return; } if (c.pc != 0x002683A8u) [[unlikely]] return; }
L_002683A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002683E0; } }
L_002683B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002683B8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 231u, depth + 1u); else { c.pc = 0x001CE6E0u; return; } if (c.pc != 0x002683B8u) [[unlikely]] return; }
L_002683B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002683E0; } }
L_002683C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002683C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 237u, depth + 1u); else { c.pc = 0x001CE7C0u; return; } if (c.pc != 0x002683C8u) [[unlikely]] return; }
L_002683C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002683E0; } }
L_002683D0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002683E0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005A(c, 292u, depth + 1u); else { c.pc = 0x0026B230u; return; } if (c.pc != 0x002683E0u) [[unlikely]] return; }
L_002683E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002683F8u); set32(c.r[5], c.r[16].w[0] + 1296u);  if (depth < kMaxDepth) unit_005A(c, 172u, depth + 1u); else { c.pc = 0x00269BC0u; return; } if (c.pc != 0x002683F8u) [[unlikely]] return; }
L_002683F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00268410:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00268420:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 708u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00268488; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00268450; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002684C0; } }
    c.budget -= 1;
L_00268450:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[12] = 0u;
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 18289u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268480u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x00268480u) [[unlikely]] return; }
L_00268480:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002684C0; } }
L_00268488:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268490u);  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x00268490u) [[unlikely]] return; }
L_00268490:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8326u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002684C0; } }
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u - 33u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002684C0u); st8((c.r[16].w[0] + 764u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_003A(c, 78u, depth + 1u); else { c.pc = 0x001EA120u; return; } if (c.pc != 0x002684C0u) [[unlikely]] return; }
L_002684C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002684D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002684E8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 121u, depth + 1u); else { c.pc = 0x001E5710u; return; } if (c.pc != 0x002684E8u) [[unlikely]] return; }
L_002684E8:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 792u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_002687B0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00268680; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00268518; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00268828; } }
    c.budget -= 1;
L_00268518:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 744u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u - 1u);
    st8((c.r[16].w[0] + 745u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 19u);
    st8((c.r[16].w[0] + 849u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] | 4104ull;
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 793u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 786u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    c.r[5].d[0] = ld16((c.r[16].w[0] + 680u));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026856Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 47u, depth + 1u); else { c.pc = 0x001E4870u; return; } if (c.pc != 0x0026856Cu) [[unlikely]] return; }
L_0026856C:
    c.f[1] = ld32((c.r[16].w[0] + 1124u));
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00268588; } }
    st32((c.r[16].w[0] + 104u), c.f[1]);
    c.budget -= 2;
L_00268588:
    set32(c.r[4], c.r[16].w[0] + 1392u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268594u); set32(c.r[5], c.r[16].w[0] + 1376u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00268594u) [[unlikely]] return; }
L_00268594:
    set32(c.r[4], c.r[16].w[0] + 1408u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002685A0u); set32(c.r[5], c.r[16].w[0] + 1376u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002685A0u) [[unlikely]] return; }
L_002685A0:
    c.f[0] = ld32((c.r[16].w[0] + 1056u));
    set32(c.r[2], 0u + 45u);
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002685F8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 767u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002685D8; } }
    st8((c.r[16].w[0] + 767u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 757u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 838u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 839u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002685F8; } }
L_002685D8:
    set32(c.r[2], 0u + 27u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002685F8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = 0ull | 33306ull;
    c.r[3].d[0] = c.r[3].d[0] | 32230ull;
    st32((c.r[16].w[0] + 5296u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 5344u), c.r[2].w[0]);
    c.budget -= 5;
L_002685F8:
    c.r[7].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[9], c.r[9].w[0] + 18400u);
    set32(c.r[3], c.r[3].w[0] + 18401u);
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[7].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[9].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 728u), c.f[0]);
    c.r[8].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], ld32((c.r[16].w[0] + 1260u)));
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st16((c.r[16].w[0] + 862u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[9].w[0] + c.r[2].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268680u); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x00268680u) [[unlikely]] return; }
L_00268680:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 792u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], 0u + 27u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00268740; } }
    c.f[1] = ld32((c.r[16].w[0] + 728u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00268740; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 5296u)));
    c.r[2].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u - c.r[3].w[0]);  if (t) { goto L_002686C8; } }
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 2;
L_002686C8:
    set32(c.r[2], ld32((c.r[16].w[0] + 5296u)));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 5296u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 5344u)));
    c.r[2].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - c.r[3].w[0]);  if (t) { goto L_00268710; } }
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 2;
L_00268710:
    set32(c.r[2], ld32((c.r[16].w[0] + 5344u)));
    c.f[1] = c.r[3].w[0];
    c.f[0] = ld32((c.r[16].w[0] + 728u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 5344u), c.r[2].w[0]);
    c.budget -= 12;
L_00268740:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268748u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x00268748u) [[unlikely]] return; }
L_00268748:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8326u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00268828; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8296u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8298u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268778u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x00268778u) [[unlikely]] return; }
L_00268778:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 851u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00268798; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268790u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0039(c, 251u, depth + 1u); else { c.pc = 0x001E7BE0u; return; } if (c.pc != 0x00268790u) [[unlikely]] return; }
L_00268790:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00268828; } }
L_00268798:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002687A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 251u, depth + 1u); else { c.pc = 0x001E7BE0u; return; } if (c.pc != 0x002687A4u) [[unlikely]] return; }
L_002687A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00268828; } }
    c.budget -= 1;
L_002687B0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 851u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002687F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002687C8u); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_003A(c, 27u, depth + 1u); else { c.pc = 0x001E89E0u; return; } if (c.pc != 0x002687C8u) [[unlikely]] return; }
L_002687C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00268828; } }
    set32(c.r[2], 0u + 20u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 851u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002687E4u); set32(c.r[5], 0u + 36u);  if (depth < kMaxDepth) unit_003A(c, 69u, depth + 1u); else { c.pc = 0x001E9EF0u; return; } if (c.pc != 0x002687E4u) [[unlikely]] return; }
L_002687E4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002687F0u); set32(c.r[5], 0u + 36u);  if (depth < kMaxDepth) unit_003A(c, 68u, depth + 1u); else { c.pc = 0x001E9DF0u; return; } if (c.pc != 0x002687F0u) [[unlikely]] return; }
L_002687F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00268828; } }
L_002687F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268800u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 258u, depth + 1u); else { c.pc = 0x001E7EA0u; return; } if (c.pc != 0x00268800u) [[unlikely]] return; }
L_00268800:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00268828; } }
    set32(c.r[2], 0u + 17u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 851u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026881Cu); set32(c.r[5], 0u + 36u);  if (depth < kMaxDepth) unit_003A(c, 69u, depth + 1u); else { c.pc = 0x001E9EF0u; return; } if (c.pc != 0x0026881Cu) [[unlikely]] return; }
L_0026881C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268828u); set32(c.r[5], 0u + 36u);  if (depth < kMaxDepth) unit_003A(c, 68u, depth + 1u); else { c.pc = 0x001E9DF0u; return; } if (c.pc != 0x00268828u) [[unlikely]] return; }
L_00268828:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 862u)));
    c.f[0] = ld32((c.r[16].w[0] + 1016u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268854u); set32(c.r[5], c.r[16].w[0] + 1376u);  if (depth < kMaxDepth) unit_005A(c, 187u, depth + 1u); else { c.pc = 0x00269DD0u; return; } if (c.pc != 0x00268854u) [[unlikely]] return; }
L_00268854:
    c.f[2] = ld32((c.r[16].w[0] + 1016u));
    c.f[1] = ld32((c.r[16].w[0] + 728u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 728u), c.f[1]);  if (t) { goto L_002688E0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268880u); set32(c.r[5], c.r[16].w[0] + 1392u);  if (depth < kMaxDepth) unit_005A(c, 206u, depth + 1u); else { c.pc = 0x0026A0F0u; return; } if (c.pc != 0x00268880u) [[unlikely]] return; }
L_00268880:
    c.f[2] = ld32((c.r[16].w[0] + 1064u));
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002688B8; } }
    c.f[1] = ld32((c.r[16].w[0] + 108u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002688E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 104u), c.f[2]);  if (t) { goto L_002688E0; } }
    c.budget -= 1;
L_002688B8:
    c.f[1] = ld32((c.r[16].w[0] + 108u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002688E0; } }
    st32((c.r[16].w[0] + 104u), c.f[2]);
    c.f[0] = ld32((c.r[16].w[0] + 1056u));
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.budget -= 4;
L_002688E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002688F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 5u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268908u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 121u, depth + 1u); else { c.pc = 0x001E5710u; return; } if (c.pc != 0x00268908u) [[unlikely]] return; }
L_00268908:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[2].w[0] + 1u);  if (t) { goto L_00268940; } }
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 786u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 20u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x04000000u);
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 280u), 0u);
    st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
L_00268940:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 680u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026894Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 47u, depth + 1u); else { c.pc = 0x001E4870u; return; } if (c.pc != 0x0026894Cu) [[unlikely]] return; }
L_0026894C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268954u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 255u, depth + 1u); else { c.pc = 0x001E7CF0u; return; } if (c.pc != 0x00268954u) [[unlikely]] return; }
L_00268954:
    set32(c.r[2], ld32((c.r[16].w[0] + 1036u)));
    c.f[0] = ld32((c.r[16].w[0] + 1016u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 1376u);
    c.f[1] = ld32((c.r[2].w[0] + 12u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268970u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_005A(c, 182u, depth + 1u); else { c.pc = 0x00269D20u; return; } if (c.pc != 0x00268970u) [[unlikely]] return; }
L_00268970:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026897Cu); set32(c.r[5], c.r[16].w[0] + 8624u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0026897Cu) [[unlikely]] return; }
L_0026897C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] + 29024u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002689A8u); set32(c.r[4], c.r[2].w[0] + 144u);  if (depth < kMaxDepth) unit_002E(c, 126u, depth + 1u); else { c.pc = 0x001B9B80u; return; } if (c.pc != 0x002689A8u) [[unlikely]] return; }
L_002689A8:
    set32(c.r[2], c.r[29].w[0] + 36u);
    st32((c.r[2].w[0]), 0u);
    c.f[2] = 0u;
    c.f[1] = ld32((c.r[29].w[0] + 32u));
    c.f[3] = ld32((c.r[29].w[0] + 40u));
    c.f[0] = fp::mul(c.f[2], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00268A30; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[2], c.r[2].w[0] + 29024u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002689FCu); set32(c.r[4], c.r[2].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002689FCu) [[unlikely]] return; }
L_002689FC:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268A08u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x00268A08u) [[unlikely]] return; }
L_00268A08:
    set32(c.r[2], c.r[29].w[0] + 32u);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[16].w[0] + 1392u), c.f[3]);
    st32((c.r[16].w[0] + 1396u), c.f[2]);
    st32((c.r[16].w[0] + 1400u), c.f[1]);
    st32((c.r[16].w[0] + 1404u), c.f[0]);
    c.budget -= 10;
L_00268A30:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268A3Cu); set32(c.r[5], c.r[16].w[0] + 1392u);  if (depth < kMaxDepth) unit_005A(c, 206u, depth + 1u); else { c.pc = 0x0026A0F0u; return; } if (c.pc != 0x00268A3Cu) [[unlikely]] return; }
L_00268A3C:
    c.f[2] = ld32((c.r[16].w[0] + 1064u));
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00268A70; } }
    c.f[1] = ld32((c.r[16].w[0] + 108u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00268A98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 104u), c.f[2]);  if (t) { goto L_00268A98; } }
L_00268A70:
    c.f[1] = ld32((c.r[16].w[0] + 108u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00268A98; } }
    st32((c.r[16].w[0] + 104u), c.f[2]);
    c.f[0] = ld32((c.r[16].w[0] + 1056u));
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.budget -= 4;
L_00268A98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00268AB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 708u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00268B30; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00268AE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00268BD8; } }
    c.budget -= 1;
L_00268AE0:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 21u);
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 1264u), 0u);
    st32((c.r[16].w[0] + 1260u), 0u);
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = ld32((c.r[16].w[0] + 1060u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 276u), 0u);
    st32((c.r[16].w[0] + 280u), 0u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268B20u); st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000D(c, 223u, depth + 1u); else { c.pc = 0x001371F0u; return; } if (c.pc != 0x00268B20u) [[unlikely]] return; }
L_00268B20:
    set32(c.r[4], c.r[16].w[0] + 1376u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268B2Cu); set32(c.r[5], c.r[16].w[0] + 8624u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00268B2Cu) [[unlikely]] return; }
L_00268B2C:
    c.budget -= 1;
L_00268B30:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 851u)));
    set32(c.r[2], 0u + 20u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00268B90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268B48u); set32(c.r[5], 0u + 34u);  if (depth < kMaxDepth) unit_003A(c, 27u, depth + 1u); else { c.pc = 0x001E89E0u; return; } if (c.pc != 0x00268B48u) [[unlikely]] return; }
L_00268B48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 34u);  if (t) { goto L_00268BD8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st8((c.r[16].w[0] + 851u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] + 18402u);
    st8((c.r[16].w[0] + 744u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268B7Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 250u, depth + 1u); else { c.pc = 0x0026A890u; return; } if (c.pc != 0x00268B7Cu) [[unlikely]] return; }
L_00268B7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268B84u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 242u, depth + 1u); else { c.pc = 0x0026A770u; return; } if (c.pc != 0x00268B84u) [[unlikely]] return; }
L_00268B84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00268BD8; } }
    c.budget -= 1;
L_00268B90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268B98u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 8u, depth + 1u); else { c.pc = 0x001E8260u; return; } if (c.pc != 0x00268B98u) [[unlikely]] return; }
L_00268B98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00268BD8; } }
    st8((c.r[16].w[0] + 851u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st8((c.r[16].w[0] + 744u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + 18402u);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268BCCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 250u, depth + 1u); else { c.pc = 0x0026A890u; return; } if (c.pc != 0x00268BCCu) [[unlikely]] return; }
L_00268BCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268BD4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 242u, depth + 1u); else { c.pc = 0x0026A770u; return; } if (c.pc != 0x00268BD4u) [[unlikely]] return; }
L_00268BD4:
    c.budget -= 1;
L_00268BD8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268BE4u); set32(c.r[5], c.r[16].w[0] + 1392u);  if (depth < kMaxDepth) unit_005A(c, 206u, depth + 1u); else { c.pc = 0x0026A0F0u; return; } if (c.pc != 0x00268BE4u) [[unlikely]] return; }
L_00268BE4:
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00268C08; } }
    st32((c.r[16].w[0] + 108u), c.f[0]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.budget -= 3;
L_00268C08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00268C20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], 0u + 2u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 773u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 792u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 708u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00268D78; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_00268D20; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00268C60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00268DA8; } }
L_00268C60:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 744u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u - 1u);
    st8((c.r[16].w[0] + 745u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 19u);
    st8((c.r[16].w[0] + 849u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] | 4104ull;
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 793u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 786u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 767u)));
    c.budget -= 21;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00268CC8; } }
    st8((c.r[16].w[0] + 767u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 757u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 838u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 839u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_00268CC8:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] + 18400u);
    c.r[5].d[0] = 0ull + 0ull;
    c.f[12] = 0u;
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 728u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268D1Cu); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x00268D1Cu) [[unlikely]] return; }
L_00268D1C:
    c.budget -= 1;
L_00268D20:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 792u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268D30u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x00268D30u) [[unlikely]] return; }
L_00268D30:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8326u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00268DA8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 32u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268D60u); st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x00268D60u) [[unlikely]] return; }
L_00268D60:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268D6Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 251u, depth + 1u); else { c.pc = 0x001E7BE0u; return; } if (c.pc != 0x00268D6Cu) [[unlikely]] return; }
L_00268D6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00268DA8; } }
    c.budget -= 1;
L_00268D78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268D80u);  if (depth < kMaxDepth) unit_0039(c, 258u, depth + 1u); else { c.pc = 0x001E7EA0u; return; } if (c.pc != 0x00268D80u) [[unlikely]] return; }
L_00268D80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00268DA8; } }
    set32(c.r[2], 0u + 17u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 851u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268D9Cu); set32(c.r[5], 0u + 36u);  if (depth < kMaxDepth) unit_003A(c, 69u, depth + 1u); else { c.pc = 0x001E9EF0u; return; } if (c.pc != 0x00268D9Cu) [[unlikely]] return; }
L_00268D9C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268DA8u); set32(c.r[5], 0u + 36u);  if (depth < kMaxDepth) unit_003A(c, 68u, depth + 1u); else { c.pc = 0x001E9DF0u; return; } if (c.pc != 0x00268DA8u) [[unlikely]] return; }
L_00268DA8:
    c.f[2] = ld32((c.r[16].w[0] + 1016u));
    c.f[1] = ld32((c.r[16].w[0] + 728u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 728u), c.f[1]);  if (t) { goto L_00268EE0; } }
    c.r[5].d[0] = ld16((c.r[16].w[0] + 680u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268DD4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 47u, depth + 1u); else { c.pc = 0x001E4870u; return; } if (c.pc != 0x00268DD4u) [[unlikely]] return; }
L_00268DD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00268E50; } }
    c.f[0] = ld32((c.r[16].w[0] + 1056u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] + 18401u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.r[7].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], ld32((c.r[16].w[0] + 1260u)));
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st16((c.r[16].w[0] + 862u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 862u)));
    c.f[0] = ld32((c.r[16].w[0] + 1016u));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268E44u); set32(c.r[5], c.r[16].w[0] + 1376u);  if (depth < kMaxDepth) unit_005A(c, 187u, depth + 1u); else { c.pc = 0x00269DD0u; return; } if (c.pc != 0x00268E44u) [[unlikely]] return; }
L_00268E44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00268E70; } }
    c.budget -= 1;
L_00268E50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = ld32((c.r[16].w[0] + 1056u));
    c.f[0] = c.r[2].w[0];
    c.f[1] = c.f[1] ^ fp::kSign;
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.budget -= 8;
L_00268E70:
    set32(c.r[4], c.r[16].w[0] + 1392u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268E7Cu); set32(c.r[5], c.r[16].w[0] + 8624u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00268E7Cu) [[unlikely]] return; }
L_00268E7C:
    set32(c.r[4], c.r[16].w[0] + 1408u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268E88u); set32(c.r[5], c.r[16].w[0] + 8608u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00268E88u) [[unlikely]] return; }
L_00268E88:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268E94u); set32(c.r[5], c.r[16].w[0] + 1392u);  if (depth < kMaxDepth) unit_005A(c, 206u, depth + 1u); else { c.pc = 0x0026A0F0u; return; } if (c.pc != 0x00268E94u) [[unlikely]] return; }
L_00268E94:
    c.f[0] = ld32((c.r[16].w[0] + 108u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00268EC8; } }
    c.f[1] = ld32((c.r[16].w[0] + 1064u));
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00268EE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 104u), c.f[1]);  if (t) { goto L_00268EE0; } }
L_00268EC8:
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00268EE0; } }
    st32((c.r[16].w[0] + 104u), c.f[1]);
    c.budget -= 2;
L_00268EE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00268EF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 708u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00268F30; } }
    set32(c.r[3], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 786u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 20u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x04000000u);
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 280u), 0u);
    st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(0u));
    c.budget -= 10;
L_00268F30:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 680u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268F3Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 47u, depth + 1u); else { c.pc = 0x001E4870u; return; } if (c.pc != 0x00268F3Cu) [[unlikely]] return; }
L_00268F3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00268FB0; } }
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] + 18401u);
    c.f[0] = ld32((c.r[16].w[0] + 1056u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 1376u);
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.r[7].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], ld32((c.r[16].w[0] + 1260u)));
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st16((c.r[16].w[0] + 862u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 1036u)));
    c.f[0] = ld32((c.r[16].w[0] + 1016u));
    c.f[1] = ld32((c.r[2].w[0] + 12u));
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268FA4u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_005A(c, 182u, depth + 1u); else { c.pc = 0x00269D20u; return; } if (c.pc != 0x00268FA4u) [[unlikely]] return; }
L_00268FA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00268FD0; } }
    c.budget -= 1;
L_00268FB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.f[0] = ld32((c.r[16].w[0] + 1056u));
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.budget -= 8;
L_00268FD0:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268FDCu); set32(c.r[5], c.r[16].w[0] + 8624u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00268FDCu) [[unlikely]] return; }
L_00268FDC:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] + 29024u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269008u); set32(c.r[4], c.r[2].w[0] + 144u);  if (depth < kMaxDepth) unit_002E(c, 126u, depth + 1u); else { c.pc = 0x001B9B80u; return; } if (c.pc != 0x00269008u) [[unlikely]] return; }
L_00269008:
    set32(c.r[2], c.r[29].w[0] + 36u);
    st32((c.r[2].w[0]), 0u);
    c.f[2] = 0u;
    c.f[1] = ld32((c.r[29].w[0] + 32u));
    c.f[3] = ld32((c.r[29].w[0] + 40u));
    c.f[0] = fp::mul(c.f[2], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00269068; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[2], c.r[2].w[0] + 29024u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026905Cu); set32(c.r[4], c.r[2].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0026905Cu) [[unlikely]] return; }
L_0026905C:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269068u); set32(c.r[5], c.r[16].w[0] + 1392u);  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x00269068u) [[unlikely]] return; }
L_00269068:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269074u); set32(c.r[5], c.r[16].w[0] + 1392u);  if (depth < kMaxDepth) unit_005A(c, 206u, depth + 1u); else { c.pc = 0x0026A0F0u; return; } if (c.pc != 0x00269074u) [[unlikely]] return; }
L_00269074:
    c.f[0] = ld32((c.r[16].w[0] + 108u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002690A8; } }
    c.f[1] = ld32((c.r[16].w[0] + 1064u));
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002690C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 104u), c.f[1]);  if (t) { goto L_002690C0; } }
L_002690A8:
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002690C0; } }
    st32((c.r[16].w[0] + 104u), c.f[1]);
    c.budget -= 2;
L_002690C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002690D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 708u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00269150; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00269100; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00269198; } }
    c.budget -= 1;
L_00269100:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 21u);
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 1264u), 0u);
    st32((c.r[16].w[0] + 1260u), 0u);
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = ld32((c.r[16].w[0] + 1060u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 276u), 0u);
    st32((c.r[16].w[0] + 280u), 0u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269140u); st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000D(c, 223u, depth + 1u); else { c.pc = 0x001371F0u; return; } if (c.pc != 0x00269140u) [[unlikely]] return; }
L_00269140:
    set32(c.r[4], c.r[16].w[0] + 1376u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026914Cu); set32(c.r[5], c.r[16].w[0] + 8624u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0026914Cu) [[unlikely]] return; }
L_0026914C:
    c.budget -= 1;
L_00269150:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269158u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 8u, depth + 1u); else { c.pc = 0x001E8260u; return; } if (c.pc != 0x00269158u) [[unlikely]] return; }
L_00269158:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00269198; } }
    st8((c.r[16].w[0] + 851u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st8((c.r[16].w[0] + 744u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + 18402u);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026918Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 250u, depth + 1u); else { c.pc = 0x0026A890u; return; } if (c.pc != 0x0026918Cu) [[unlikely]] return; }
L_0026918C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269194u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 242u, depth + 1u); else { c.pc = 0x0026A770u; return; } if (c.pc != 0x00269194u) [[unlikely]] return; }
L_00269194:
    c.budget -= 1;
L_00269198:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002691A4u); set32(c.r[5], c.r[16].w[0] + 1392u);  if (depth < kMaxDepth) unit_005A(c, 206u, depth + 1u); else { c.pc = 0x0026A0F0u; return; } if (c.pc != 0x002691A4u) [[unlikely]] return; }
L_002691A4:
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002691C8; } }
    st32((c.r[16].w[0] + 108u), c.f[0]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.budget -= 3;
L_002691C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002691E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 709u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 19472u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00268000u < 16384u) { entry = entries_005A[(t - 0x00268000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00269200:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 851u)));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_00269218; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 709u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00269220; } }
L_00269218:
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 709u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00269220:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00269230:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 792u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 710u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00269368; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00269318; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00269270; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002693B0; } }
    c.budget -= 1;
L_00269270:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 710u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u - 1u);
    st8((c.r[16].w[0] + 745u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 19u);
    st8((c.r[16].w[0] + 849u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 793u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 767u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002692B8; } }
    st8((c.r[16].w[0] + 767u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 757u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 838u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 839u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_002692B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002692C0u); c.f[12] = ld32((c.r[16].w[0] + 104u));  if (depth < kMaxDepth) unit_0005(c, 46u, depth + 1u); else { c.pc = 0x001158E0u; return; } if (c.pc != 0x002692C0u) [[unlikely]] return; }
L_002692C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002692D0u); c.r[5].d[0] = c.r[3].d[0] << 32;  if (depth < kMaxDepth) unit_0005(c, 75u, depth + 1u); else { c.pc = 0x00116060u; return; } if (c.pc != 0x002692D0u) [[unlikely]] return; }
L_002692D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    mmi::pcpyld(c.r[3], c.r[0], c.r[3]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002692E4u); c.r[4].d[0] = c.r[2].d[0] ^ c.r[3].d[0];  if (depth < kMaxDepth) unit_0005(c, 92u, depth + 1u); else { c.pc = 0x00116498u; return; } if (c.pc != 0x002692E4u) [[unlikely]] return; }
L_002692E4:
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[7].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], c.r[2].w[0] + 18400u);
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269318u); set32(c.r[6], 0u + 34u);  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x00269318u) [[unlikely]] return; }
L_00269318:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269320u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x00269320u) [[unlikely]] return; }
L_00269320:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8326u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002693B0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 710u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269344u); st8((c.r[16].w[0] + 710u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0039(c, 251u, depth + 1u); else { c.pc = 0x001E7BE0u; return; } if (c.pc != 0x00269344u) [[unlikely]] return; }
L_00269344:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 34u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026935Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x0026935Cu) [[unlikely]] return; }
L_0026935C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002693B0; } }
    c.budget -= 1;
L_00269368:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269370u); set32(c.r[5], 0u + 33u);  if (depth < kMaxDepth) unit_003A(c, 27u, depth + 1u); else { c.pc = 0x001E89E0u; return; } if (c.pc != 0x00269370u) [[unlikely]] return; }
L_00269370:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 33u);  if (t) { goto L_002693B0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st8((c.r[16].w[0] + 851u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] + 18402u);
    st8((c.r[16].w[0] + 744u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002693A4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 250u, depth + 1u); else { c.pc = 0x0026A890u; return; } if (c.pc != 0x002693A4u) [[unlikely]] return; }
L_002693A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002693ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 242u, depth + 1u); else { c.pc = 0x0026A770u; return; } if (c.pc != 0x002693ACu) [[unlikely]] return; }
L_002693AC:
    c.budget -= 1;
L_002693B0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002693BCu); set32(c.r[5], c.r[16].w[0] + 1392u);  if (depth < kMaxDepth) unit_005A(c, 206u, depth + 1u); else { c.pc = 0x0026A0F0u; return; } if (c.pc != 0x002693BCu) [[unlikely]] return; }
L_002693BC:
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002693E0; } }
    st32((c.r[16].w[0] + 108u), c.f[0]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.budget -= 3;
L_002693E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002693F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 792u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 710u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00269510; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002694C0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00269430; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00269558; } }
    c.budget -= 1;
L_00269430:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 710u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u - 1u);
    st8((c.r[16].w[0] + 745u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 19u);
    st8((c.r[16].w[0] + 849u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 793u), static_cast<std::uint8_t>(0u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269464u); c.f[12] = ld32((c.r[16].w[0] + 104u));  if (depth < kMaxDepth) unit_0005(c, 46u, depth + 1u); else { c.pc = 0x001158E0u; return; } if (c.pc != 0x00269464u) [[unlikely]] return; }
L_00269464:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269474u); c.r[5].d[0] = c.r[3].d[0] << 32;  if (depth < kMaxDepth) unit_0005(c, 75u, depth + 1u); else { c.pc = 0x00116060u; return; } if (c.pc != 0x00269474u) [[unlikely]] return; }
L_00269474:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    mmi::pcpyld(c.r[3], c.r[0], c.r[3]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269488u); c.r[4].d[0] = c.r[2].d[0] ^ c.r[3].d[0];  if (depth < kMaxDepth) unit_0005(c, 92u, depth + 1u); else { c.pc = 0x00116498u; return; } if (c.pc != 0x00269488u) [[unlikely]] return; }
L_00269488:
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[7].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], c.r[2].w[0] + 18400u);
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002694BCu); set32(c.r[6], 0u + 34u);  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x002694BCu) [[unlikely]] return; }
L_002694BC:
    c.budget -= 1;
L_002694C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002694C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x002694C8u) [[unlikely]] return; }
L_002694C8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8326u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00269558; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 710u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 16u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002694ECu); st8((c.r[16].w[0] + 710u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0039(c, 251u, depth + 1u); else { c.pc = 0x001E7BE0u; return; } if (c.pc != 0x002694ECu) [[unlikely]] return; }
L_002694EC:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 34u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269504u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x00269504u) [[unlikely]] return; }
L_00269504:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00269558; } }
    c.budget -= 1;
L_00269510:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269518u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 27u, depth + 1u); else { c.pc = 0x001E89E0u; return; } if (c.pc != 0x00269518u) [[unlikely]] return; }
L_00269518:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00269558; } }
    st8((c.r[16].w[0] + 851u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st8((c.r[16].w[0] + 744u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + 18402u);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026954Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 250u, depth + 1u); else { c.pc = 0x0026A890u; return; } if (c.pc != 0x0026954Cu) [[unlikely]] return; }
L_0026954C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269554u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 242u, depth + 1u); else { c.pc = 0x0026A770u; return; } if (c.pc != 0x00269554u) [[unlikely]] return; }
L_00269554:
    c.budget -= 1;
L_00269558:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269564u); set32(c.r[5], c.r[16].w[0] + 1392u);  if (depth < kMaxDepth) unit_005A(c, 206u, depth + 1u); else { c.pc = 0x0026A0F0u; return; } if (c.pc != 0x00269564u) [[unlikely]] return; }
L_00269564:
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00269588; } }
    st32((c.r[16].w[0] + 108u), c.f[0]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.budget -= 3;
L_00269588:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002695A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 708u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002695D0; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 1612u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002695D0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002695D0u) [[unlikely]] return; }
L_002695D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002695D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 261u, depth + 1u); else { c.pc = 0x00262650u; return; } if (c.pc != 0x002695D8u) [[unlikely]] return; }
L_002695D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002695F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 708u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00269658; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 1612u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00269620u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00269620u) [[unlikely]] return; }
L_00269620:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00269658; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00269658; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 321u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00269658; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269658u);  if (depth < kMaxDepth) unit_0072(c, 39u, depth + 1u); else { c.pc = 0x002C88A0u; return; } if (c.pc != 0x00269658u) [[unlikely]] return; }
L_00269658:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269660u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 27u, depth + 1u); else { c.pc = 0x00260190u; return; } if (c.pc != 0x00269660u) [[unlikely]] return; }
L_00269660:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00269670:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[3].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.f[0] = 0u;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[2] = ld32((c.r[5].w[0]));
    c.f[3] = ld32((c.r[5].w[0] + 8u));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[2] = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 19;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[20] = c.f[13];  if (t) { goto L_002696C0; } }
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    c.budget -= 1;
L_002696C0:
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[2] = ld32((c.r[16].w[0]));
    c.f[3] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[2] = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002696F8; } }
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    c.budget -= 2;
L_002696F8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00269768; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00269750; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00269720; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00269778; } }
    c.budget -= 1;
L_00269720:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269728u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x00269728u) [[unlikely]] return; }
L_00269728:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269738u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x00269738u) [[unlikely]] return; }
L_00269738:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269748u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x00269748u) [[unlikely]] return; }
L_00269748:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00269788; } }
L_00269750:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269760u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x00269760u) [[unlikely]] return; }
L_00269760:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00269788; } }
L_00269768:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269770u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x00269770u) [[unlikely]] return; }
L_00269770:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00269788; } }
L_00269778:
    c.f[0] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002697E8; } }
    c.budget -= 1;
L_00269788:
    c.f[0] = ld32((c.r[29].w[0] + 68u));
    c.f[1] = ld32((c.r[29].w[0] + 64u));
    c.f[2] = ld32((c.r[29].w[0] + 72u));
    c.f[20] = 0u;
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002697C8; } }
    st32((c.r[17].w[0] + 12u), c.f[20]);
    st32((c.r[17].w[0] + 8u), c.f[20]);
    st32((c.r[17].w[0] + 4u), c.f[20]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.f[20]);  if (t) { goto L_002697E0; } }
L_002697C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002697D0u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 211u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x002697D0u) [[unlikely]] return; }
L_002697D0:
    c.f[20] = c.f[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002697E0u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002697E0u) [[unlikely]] return; }
L_002697E0:
    c.f[0] = c.f[20];
    c.budget -= 2;
L_002697E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00269800:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[12] = ld32((c.r[16].w[0] + 104u));
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.f[13] = ld32((c.r[16].w[0] + 52u));
    set32(c.r[5], c.r[16].w[0] + 1392u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269828u); set32(c.r[6], c.r[16].w[0] + 1408u);  if (depth < kMaxDepth) unit_005A(c, 131u, depth + 1u); else { c.pc = 0x00269670u; return; } if (c.pc != 0x00269828u) [[unlikely]] return; }
L_00269828:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 104u), c.f[0]);  if (t) { goto L_00269850; } }
    set32(c.r[4], c.r[16].w[0] + 1392u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269848u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00269848u) [[unlikely]] return; }
L_00269848:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00269860; } }
L_00269850:
    set32(c.r[4], c.r[16].w[0] + 1392u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026985Cu); set32(c.r[5], c.r[16].w[0] + 8624u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0026985Cu) [[unlikely]] return; }
L_0026985C:
    c.budget -= 1;
L_00269860:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00269870:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], c.r[17].w[0] + 8592u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269890u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x00269890u) [[unlikely]] return; }
L_00269890:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269898u); set32(c.r[4], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x00269898u) [[unlikely]] return; }
L_00269898:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002698A0u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x002698A0u) [[unlikely]] return; }
L_002698A0:
    st32((c.r[16].w[0] + 44u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 28u), 0u);
    set32(c.r[4], c.r[16].w[0] + 48u);
    st32((c.r[16].w[0] + 12u), 0u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002698C0u); st32((c.r[17].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002698C0u) [[unlikely]] return; }
L_002698C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002698E0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269908u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 143u, depth + 1u); else { c.pc = 0x00269870u; return; } if (c.pc != 0x00269908u) [[unlikely]] return; }
L_00269908:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 8592u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269918u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_002E(c, 117u, depth + 1u); else { c.pc = 0x001B9AF0u; return; } if (c.pc != 0x00269918u) [[unlikely]] return; }
L_00269918:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269920u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 202u, depth + 1u); else { c.pc = 0x00127320u; return; } if (c.pc != 0x00269920u) [[unlikely]] return; }
L_00269920:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269928u); c.f[12] = ld32((c.r[29].w[0] + 104u));  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00125FA0u; return; } if (c.pc != 0x00269928u) [[unlikely]] return; }
L_00269928:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].d[0] = c.r[19].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_00269940; } }
    c.r[18].d[0] = c.r[19].d[0] + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00269940:
    set32(c.r[3], c.r[29].w[0] + 84u);
    c.f[1] = ld32((c.r[29].w[0] + 100u));
    set32(c.r[2], c.r[29].w[0] + 88u);
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    c.f[2] = 0u;
    c.f[1] = c.f[1] ^ fp::kSign;
    st32((c.r[29].w[0] + 80u), c.f[1]);
    st32((c.r[3].w[0]), c.f[0]);
    st32((c.r[2].w[0]), 0u);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 80u));
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 19;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002699A0; } }
    st32((c.r[2].w[0]), c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 80u), c.f[2]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 5;
L_002699A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002699A8u); set32(c.r[4], c.r[16].w[0] + 8592u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002699A8u) [[unlikely]] return; }
L_002699A8:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002699B4u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 183u, depth + 1u); else { c.pc = 0x00126930u; return; } if (c.pc != 0x002699B4u) [[unlikely]] return; }
L_002699B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002699BCu); set32(c.r[4], c.r[16].w[0] + 8592u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002699BCu) [[unlikely]] return; }
L_002699BC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002699E0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269A04u); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_005A(c, 143u, depth + 1u); else { c.pc = 0x00269870u; return; } if (c.pc != 0x00269A04u) [[unlikely]] return; }
L_00269A04:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 8592u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269A14u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_002E(c, 117u, depth + 1u); else { c.pc = 0x001B9AF0u; return; } if (c.pc != 0x00269A14u) [[unlikely]] return; }
L_00269A14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269A1Cu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 202u, depth + 1u); else { c.pc = 0x00127320u; return; } if (c.pc != 0x00269A1Cu) [[unlikely]] return; }
L_00269A1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269A24u); c.f[12] = ld32((c.r[29].w[0] + 88u));  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00125FA0u; return; } if (c.pc != 0x00269A24u) [[unlikely]] return; }
L_00269A24:
    c.f[2] = c.r[2].w[0];
    set32(c.r[3], c.r[29].w[0] + 68u);
    c.f[1] = ld32((c.r[29].w[0] + 84u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    set32(c.r[2], c.r[29].w[0] + 72u);
    c.f[1] = c.f[1] ^ fp::kSign;
    c.f[2] = fp::mul(c.f[20], c.f[2]);
    c.f[2] = fp::cvt_w_s(c.f[2]);
    set32(c.r[16], c.f[2]);
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    st32((c.r[29].w[0] + 64u), c.f[1]);
    c.f[2] = 0u;
    st32((c.r[3].w[0]), c.f[0]);
    st32((c.r[2].w[0]), 0u);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 64u));
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 24;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00269A98; } }
    st32((c.r[2].w[0]), c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 64u), c.f[2]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 5;
L_00269A98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269AA0u); set32(c.r[4], c.r[17].w[0] + 8592u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x00269AA0u) [[unlikely]] return; }
L_00269AA0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269AACu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 183u, depth + 1u); else { c.pc = 0x00126930u; return; } if (c.pc != 0x00269AACu) [[unlikely]] return; }
L_00269AAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269AB4u); set32(c.r[4], c.r[17].w[0] + 8592u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x00269AB4u) [[unlikely]] return; }
L_00269AB4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00269AD0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269AF4u); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_005A(c, 143u, depth + 1u); else { c.pc = 0x00269870u; return; } if (c.pc != 0x00269AF4u) [[unlikely]] return; }
L_00269AF4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 8592u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269B04u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_002E(c, 126u, depth + 1u); else { c.pc = 0x001B9B80u; return; } if (c.pc != 0x00269B04u) [[unlikely]] return; }
L_00269B04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269B0Cu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 202u, depth + 1u); else { c.pc = 0x00127320u; return; } if (c.pc != 0x00269B0Cu) [[unlikely]] return; }
L_00269B0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269B14u); c.f[12] = ld32((c.r[29].w[0] + 88u));  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00125FA0u; return; } if (c.pc != 0x00269B14u) [[unlikely]] return; }
L_00269B14:
    c.f[2] = c.r[2].w[0];
    set32(c.r[3], c.r[29].w[0] + 68u);
    c.f[1] = ld32((c.r[29].w[0] + 84u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    set32(c.r[2], c.r[29].w[0] + 72u);
    c.f[1] = c.f[1] ^ fp::kSign;
    c.f[2] = fp::mul(c.f[20], c.f[2]);
    c.f[2] = fp::cvt_w_s(c.f[2]);
    set32(c.r[16], c.f[2]);
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    st32((c.r[29].w[0] + 64u), c.f[1]);
    c.f[2] = 0u;
    st32((c.r[3].w[0]), c.f[0]);
    st32((c.r[2].w[0]), 0u);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 64u));
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 24;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00269B88; } }
    st32((c.r[2].w[0]), c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 64u), c.f[2]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 5;
L_00269B88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269B90u); set32(c.r[4], c.r[17].w[0] + 8592u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x00269B90u) [[unlikely]] return; }
L_00269B90:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269B9Cu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 183u, depth + 1u); else { c.pc = 0x00126930u; return; } if (c.pc != 0x00269B9Cu) [[unlikely]] return; }
L_00269B9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269BA4u); set32(c.r[4], c.r[17].w[0] + 8592u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x00269BA4u) [[unlikely]] return; }
L_00269BA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00269BC0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 29024u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8656u)));
    c.f[20] = c.f[12];
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269C08u); set32(c.r[18], c.r[2].w[0] + 144u);  if (depth < kMaxDepth) unit_005A(c, 143u, depth + 1u); else { c.pc = 0x00269870u; return; } if (c.pc != 0x00269C08u) [[unlikely]] return; }
L_00269C08:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269C18u); set32(c.r[6], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00269C18u) [[unlikely]] return; }
L_00269C18:
    c.f[0] = ld32((c.r[18].w[0] + 16u));
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    set32(c.r[6], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 20u));
    st32((c.r[29].w[0] + 164u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 24u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269C40u); st32((c.r[29].w[0] + 168u), c.f[0]);  if (depth < kMaxDepth) unit_002E(c, 159u, depth + 1u); else { c.pc = 0x001BA000u; return; } if (c.pc != 0x00269C40u) [[unlikely]] return; }
L_00269C40:
    set32(c.r[4], c.r[17].w[0] + 8592u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.f[12] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269C54u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 248u, depth + 1u); else { c.pc = 0x001BA910u; return; } if (c.pc != 0x00269C54u) [[unlikely]] return; }
L_00269C54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00269C70:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 29024u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8656u)));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269CB8u); set32(c.r[19], c.r[2].w[0] + 144u);  if (depth < kMaxDepth) unit_005A(c, 143u, depth + 1u); else { c.pc = 0x00269870u; return; } if (c.pc != 0x00269CB8u) [[unlikely]] return; }
L_00269CB8:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269CC8u); set32(c.r[6], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00269CC8u) [[unlikely]] return; }
L_00269CC8:
    c.f[0] = ld32((c.r[19].w[0] + 16u));
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    set32(c.r[6], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 20u));
    st32((c.r[29].w[0] + 164u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 24u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269CF0u); st32((c.r[29].w[0] + 168u), c.f[0]);  if (depth < kMaxDepth) unit_002E(c, 159u, depth + 1u); else { c.pc = 0x001BA000u; return; } if (c.pc != 0x00269CF0u) [[unlikely]] return; }
L_00269CF0:
    set32(c.r[4], c.r[18].w[0] + 8592u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269D04u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 270u, depth + 1u); else { c.pc = 0x001BABC0u; return; } if (c.pc != 0x00269D04u) [[unlikely]] return; }
L_00269D04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00269D20:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 29024u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8656u)));
    c.f[20] = c.f[12];
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269D68u); set32(c.r[18], c.r[2].w[0] + 144u);  if (depth < kMaxDepth) unit_005A(c, 143u, depth + 1u); else { c.pc = 0x00269870u; return; } if (c.pc != 0x00269D68u) [[unlikely]] return; }
L_00269D68:
    c.f[0] = ld32((c.r[18].w[0] + 16u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 144u);
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 20u));
    st32((c.r[29].w[0] + 164u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 24u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269D8Cu); st32((c.r[29].w[0] + 168u), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00269D8Cu) [[unlikely]] return; }
L_00269D8C:
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269D9Cu); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_002E(c, 159u, depth + 1u); else { c.pc = 0x001BA000u; return; } if (c.pc != 0x00269D9Cu) [[unlikely]] return; }
L_00269D9C:
    set32(c.r[4], c.r[17].w[0] + 8592u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.f[12] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269DB0u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 248u, depth + 1u); else { c.pc = 0x001BA910u; return; } if (c.pc != 0x00269DB0u) [[unlikely]] return; }
L_00269DB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00269DD0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 29024u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8656u)));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269E18u); set32(c.r[19], c.r[2].w[0] + 144u);  if (depth < kMaxDepth) unit_005A(c, 143u, depth + 1u); else { c.pc = 0x00269870u; return; } if (c.pc != 0x00269E18u) [[unlikely]] return; }
L_00269E18:
    c.f[0] = ld32((c.r[19].w[0] + 16u));
    set32(c.r[5], c.r[29].w[0] + 144u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[6], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 20u));
    st32((c.r[29].w[0] + 164u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 24u));
    st32((c.r[29].w[0] + 168u), c.f[0]);
    c.f[3] = ld32((c.r[17].w[0]));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    st32((c.r[5].w[0]), c.f[3]);
    st32((c.r[5].w[0] + 4u), c.f[2]);
    st32((c.r[5].w[0] + 8u), c.f[1]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269E60u); st32((c.r[5].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_002E(c, 159u, depth + 1u); else { c.pc = 0x001BA000u; return; } if (c.pc != 0x00269E60u) [[unlikely]] return; }
L_00269E60:
    set32(c.r[4], c.r[18].w[0] + 8592u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269E74u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 270u, depth + 1u); else { c.pc = 0x001BABC0u; return; } if (c.pc != 0x00269E74u) [[unlikely]] return; }
L_00269E74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00269E90:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269EBCu); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_005A(c, 143u, depth + 1u); else { c.pc = 0x00269870u; return; } if (c.pc != 0x00269EBCu) [[unlikely]] return; }
L_00269EBC:
    c.f[3] = ld32((c.r[16].w[0]));
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    set32(c.r[6], c.r[29].w[0] + 80u);
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[4].w[0]), c.f[3]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    st32((c.r[4].w[0] + 8u), c.f[1]);
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.f[3] = ld32((c.r[17].w[0]));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    st32((c.r[5].w[0]), c.f[3]);
    st32((c.r[5].w[0] + 4u), c.f[2]);
    st32((c.r[5].w[0] + 8u), c.f[1]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269F0Cu); st32((c.r[5].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_002E(c, 159u, depth + 1u); else { c.pc = 0x001BA000u; return; } if (c.pc != 0x00269F0Cu) [[unlikely]] return; }
L_00269F0C:
    set32(c.r[4], c.r[18].w[0] + 8592u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.f[12] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269F20u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 248u, depth + 1u); else { c.pc = 0x001BA910u; return; } if (c.pc != 0x00269F20u) [[unlikely]] return; }
L_00269F20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00269F40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269F60u); set32(c.r[4], c.r[17].w[0] + 8592u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x00269F60u) [[unlikely]] return; }
L_00269F60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269F68u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x00269F68u) [[unlikely]] return; }
L_00269F68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269F70u); set32(c.r[4], c.r[17].w[0] + 8592u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x00269F70u) [[unlikely]] return; }
L_00269F70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00269F90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[0] = 0u;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[2] = ld32((c.r[5].w[0]));
    c.f[3] = ld32((c.r[5].w[0] + 8u));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[2] = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00269FE8; } }
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.f[0] = ld32((c.r[16].w[0] + 8292u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269FDCu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x00269FDCu) [[unlikely]] return; }
L_00269FDC:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269FE8u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x00269FE8u) [[unlikely]] return; }
L_00269FE8:
    c.f[2] = ld32((c.r[16].w[0] + 108u));
    c.f[1] = ld32((c.r[16].w[0] + 8292u));
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026A010:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A034u); set32(c.r[5], c.r[17].w[0] + 8624u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0026A034u) [[unlikely]] return; }
L_0026A034:
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[2] = ld32((c.r[16].w[0]));
    c.f[3] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[2] = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026A088; } }
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[17].w[0] + 8292u));
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A07Cu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x0026A07Cu) [[unlikely]] return; }
L_0026A07C:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A088u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x0026A088u) [[unlikely]] return; }
L_0026A088:
    c.f[3] = ld32((c.r[17].w[0] + 108u));
    c.f[2] = ld32((c.r[17].w[0] + 8292u));
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.f[0] = 0u;
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.f[2] = fp::add(c.f[1], c.f[2]);
    st32((c.r[17].w[0] + 104u), c.f[2]);
    c.f[1] = ld32((c.r[17].w[0] + 108u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026A0C8; } }
    st32((c.r[17].w[0] + 104u), c.f[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 108u), c.f[0]);  if (t) { goto L_0026A0D0; } }
L_0026A0C8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0026A0D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0026A0F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A114u); set32(c.r[5], c.r[17].w[0] + 8624u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0026A114u) [[unlikely]] return; }
L_0026A114:
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[2] = ld32((c.r[16].w[0]));
    c.f[3] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[2] = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026A168; } }
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[17].w[0] + 1016u));
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A15Cu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x0026A15Cu) [[unlikely]] return; }
L_0026A15C:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A168u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x0026A168u) [[unlikely]] return; }
L_0026A168:
    c.f[2] = ld32((c.r[17].w[0] + 108u));
    c.f[1] = ld32((c.r[17].w[0] + 1016u));
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0026A1A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.f[20] = c.f[12];
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A1CCu); set32(c.r[5], c.r[17].w[0] + 8624u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0026A1CCu) [[unlikely]] return; }
L_0026A1CC:
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[2] = ld32((c.r[16].w[0]));
    c.f[3] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[2] = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026A220; } }
    c.f[0] = ld32((c.r[17].w[0] + 1016u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A210u); c.f[12] = fp::mul(c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x0026A210u) [[unlikely]] return; }
L_0026A210:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A21Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x0026A21Cu) [[unlikely]] return; }
L_0026A21C:
    c.budget -= 1;
L_0026A220:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0026A240:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 128u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[6], c.r[2].w[0] + 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A280u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0026A280u) [[unlikely]] return; }
L_0026A280:
    set32(c.r[17], c.r[29].w[0] + 132u);
    set32(c.r[16], c.r[29].w[0] + 136u);
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[2] = ld32((c.r[29].w[0] + 128u));
    c.f[3] = ld32((c.r[16].w[0]));
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[2] = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0026A2C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026A3C8; } }
L_0026A2C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A2C8u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 211u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x0026A2C8u) [[unlikely]] return; }
L_0026A2C8:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A2D4u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 211u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x0026A2D4u) [[unlikely]] return; }
L_0026A2D4:
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A2E4u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x0026A2E4u) [[unlikely]] return; }
L_0026A2E4:
    fpu_div(c, 12u, c.f[0], c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);  if (t) { goto L_0026A310; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = c.f[0];  if (t) { goto L_0026A32C; } }
L_0026A310:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026A32C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = c.f[0];  if (t) { goto L_0026A32C; } }
L_0026A32C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A334u);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00125FA0u; return; } if (c.pc != 0x0026A334u) [[unlikely]] return; }
L_0026A334:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].d[0] = c.r[20].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[18], 0u + 1u);  if (t) { goto L_0026A350; } }
    c.r[19].d[0] = c.r[20].d[0] + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_0026A350:
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A360u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 216u, depth + 1u); else { c.pc = 0x00127600u; return; } if (c.pc != 0x0026A360u) [[unlikely]] return; }
L_0026A360:
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[2] = ld32((c.r[29].w[0] + 128u));
    c.f[3] = ld32((c.r[16].w[0]));
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[2] = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026A3A0; } }
    st32((c.r[16].w[0]), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 128u), c.f[0]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_0026A3A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A3A8u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0026A3A8u) [[unlikely]] return; }
L_0026A3A8:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A3B4u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 183u, depth + 1u); else { c.pc = 0x00126930u; return; } if (c.pc != 0x0026A3B4u) [[unlikely]] return; }
L_0026A3B4:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A3C0u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x0026A3C0u) [[unlikely]] return; }
L_0026A3C0:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_0026A3C8:
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
L_0026A3F0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 29024u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[16], c.r[29].w[0] + 112u);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8656u)));
    c.f[20] = c.f[12];
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], c.r[2].w[0] + 144u);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A448u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 126u, depth + 1u); else { c.pc = 0x001B9B80u; return; } if (c.pc != 0x0026A448u) [[unlikely]] return; }
L_0026A448:
    st32((c.r[29].w[0] + 116u), 0u);
    c.f[2] = ld32((c.r[29].w[0] + 120u));
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[1] = 0u;
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0026A600; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A47Cu); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_002E(c, 126u, depth + 1u); else { c.pc = 0x001B9B80u; return; } if (c.pc != 0x0026A47Cu) [[unlikely]] return; }
L_0026A47C:
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    c.f[2] = ld32((c.r[29].w[0] + 104u));
    c.f[1] = 0u;
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 100u), 0u);  if (t) { goto L_0026A4B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026A4D8; } }
L_0026A4B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A4C0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0026A4C0u) [[unlikely]] return; }
L_0026A4C0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A4CCu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x0026A4CCu) [[unlikely]] return; }
L_0026A4CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026A600; } }
    c.budget -= 1;
L_0026A4D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A4E0u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x0026A4E0u) [[unlikely]] return; }
L_0026A4E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A4E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x0026A4E8u) [[unlikely]] return; }
L_0026A4E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A4F0u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 211u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x0026A4F0u) [[unlikely]] return; }
L_0026A4F0:
    c.f[21] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A4FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 211u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x0026A4FCu) [[unlikely]] return; }
L_0026A4FC:
    c.f[21] = fp::mul(c.f[21], c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A50Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x0026A50Cu) [[unlikely]] return; }
L_0026A50C:
    fpu_div(c, 12u, c.f[0], c.f[21]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);  if (t) { goto L_0026A538; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = c.f[0];  if (t) { goto L_0026A554; } }
L_0026A538:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026A554; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = c.f[0];  if (t) { goto L_0026A554; } }
L_0026A554:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A55Cu);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00125FA0u; return; } if (c.pc != 0x0026A55Cu) [[unlikely]] return; }
L_0026A55C:
    c.f[0] = c.r[2].w[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A580u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 216u, depth + 1u); else { c.pc = 0x00127600u; return; } if (c.pc != 0x0026A580u) [[unlikely]] return; }
L_0026A580:
    set32(c.r[3], c.r[29].w[0] + 84u);
    set32(c.r[2], c.r[29].w[0] + 88u);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[29].w[0] + 80u));
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[2] = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026A5C8; } }
    st32((c.r[2].w[0]), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_0026A5C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A5D0u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0026A5D0u) [[unlikely]] return; }
L_0026A5D0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A5DCu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 183u, depth + 1u); else { c.pc = 0x00126930u; return; } if (c.pc != 0x0026A5DCu) [[unlikely]] return; }
L_0026A5DC:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A5E8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x0026A5E8u) [[unlikely]] return; }
L_0026A5E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A5F0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0026A5F0u) [[unlikely]] return; }
L_0026A5F0:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A5FCu); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x0026A5FCu) [[unlikely]] return; }
L_0026A5FC:
    c.budget -= 1;
L_0026A600:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0026A620:
    c.r[6].d[0] = c.r[5].d[0] & 65535ull;
    c.r[3].d[0] = c.r[6].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0026A658; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 1264u)));
    set32(c.r[3], c.r[3].w[0] + 512u);
    st32((c.r[4].w[0] + 1264u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 1264u)));
    c.r[1].d[0] = c.r[3].sd[0] < 8193ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 8192u);  if (t) { goto L_0026A650; } }
    st32((c.r[4].w[0] + 1264u), c.r[3].w[0]);
    c.budget -= 1;
L_0026A650:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 1ull;  if (t) { goto L_0026A6C0; } }
L_0026A658:
    c.r[3].d[0] = c.r[6].d[0] & 1024ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026A690; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 1264u)));
    set32(c.r[3], c.r[3].w[0] - 512u);
    st32((c.r[4].w[0] + 1264u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 1264u)));
    c.r[1].d[0] = c.r[3].sd[0] < -8192ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u - 8192u);  if (t) { goto L_0026A688; } }
    st32((c.r[4].w[0] + 1264u), c.r[3].w[0]);
    c.budget -= 2;
L_0026A688:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 1ull;  if (t) { goto L_0026A6C0; } }
L_0026A690:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F730000u);
    c.f[1] = ld32((c.r[4].w[0] + 1264u));
    c.r[3].d[0] = c.r[3].d[0] | 13107ull;
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[4].w[0] + 1264u), c.r[3].w[0]);
    c.budget -= 12;
L_0026A6C0:
    set32(c.r[5], ld32((c.r[4].w[0] + 1264u)));
    c.r[3].d[0] = c.r[6].d[0] & 8192ull;
    st32((c.r[4].w[0] + 1260u), c.r[5].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0] + 1256u), c.r[5].w[0]);  if (t) { goto L_0026A700; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[3], c.r[3].w[0] + 512u);
    st32((c.r[4].w[0] + 92u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 92u)));
    c.r[1].d[0] = c.r[3].sd[0] < 8193ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 8192u);  if (t) { goto L_0026A6F8; } }
    st32((c.r[4].w[0] + 92u), c.r[3].w[0]);
    c.budget -= 2;
L_0026A6F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 2ull;  if (t) { goto L_0026A768; } }
L_0026A700:
    c.r[3].d[0] = c.r[6].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026A738; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[3], c.r[3].w[0] - 512u);
    st32((c.r[4].w[0] + 92u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 92u)));
    c.r[1].d[0] = c.r[3].sd[0] < -8192ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u - 8192u);  if (t) { goto L_0026A730; } }
    st32((c.r[4].w[0] + 92u), c.r[3].w[0]);
    c.budget -= 2;
L_0026A730:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 2ull;  if (t) { goto L_0026A768; } }
L_0026A738:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.f[1] = ld32((c.r[4].w[0] + 92u));
    c.r[3].d[0] = c.r[3].d[0] | 26214ull;
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[4].w[0] + 92u), c.r[3].w[0]);
    c.budget -= 12;
L_0026A768:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026A770:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[12] = 0u;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8327u)));
    st8((c.r[4].w[0] + 8287u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8326u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A79Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x0026A79Cu) [[unlikely]] return; }
L_0026A79C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A7A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 68u, depth + 1u); else { c.pc = 0x001E9DF0u; return; } if (c.pc != 0x0026A7A8u) [[unlikely]] return; }
L_0026A7A8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026A7D8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8326u)));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 792u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026A7D8; } }
    st8((c.r[16].w[0] + 792u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0026A7D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A7E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 11u, depth + 1u); else { c.pc = 0x001EC290u; return; } if (c.pc != 0x0026A7E0u) [[unlikely]] return; }
L_0026A7E0:
    st16((c.r[16].w[0] + 818u), static_cast<std::uint16_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026A800:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[12] = 0u;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8327u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A834u); st8((c.r[4].w[0] + 8287u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x0026A834u) [[unlikely]] return; }
L_0026A834:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A840u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 68u, depth + 1u); else { c.pc = 0x001E9DF0u; return; } if (c.pc != 0x0026A840u) [[unlikely]] return; }
L_0026A840:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026A868; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 792u));
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026A868; } }
    st8((c.r[17].w[0] + 792u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0026A868:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A870u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 11u, depth + 1u); else { c.pc = 0x001EC290u; return; } if (c.pc != 0x0026A870u) [[unlikely]] return; }
L_0026A870:
    st16((c.r[17].w[0] + 818u), static_cast<std::uint16_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026A890:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 68u), 0u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[4].w[0] + 52u), 0u);
    set32(c.r[5], 0u + 1u);
    st32((c.r[4].w[0] + 108u), 0u);
    st32((c.r[4].w[0] + 104u), 0u);
    st8((c.r[4].w[0] + 749u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 3587ull;
    st16((c.r[4].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A8D4u); st8((c.r[4].w[0] + 787u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000D(c, 223u, depth + 1u); else { c.pc = 0x001371F0u; return; } if (c.pc != 0x0026A8D4u) [[unlikely]] return; }
L_0026A8D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A8DCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 11u, depth + 1u); else { c.pc = 0x001EC290u; return; } if (c.pc != 0x0026A8DCu) [[unlikely]] return; }
L_0026A8DC:
    c.f[12] = 0u;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A8F4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x0026A8F4u) [[unlikely]] return; }
L_0026A8F4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A900u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 69u, depth + 1u); else { c.pc = 0x001E9EF0u; return; } if (c.pc != 0x0026A900u) [[unlikely]] return; }
L_0026A900:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026A920:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0026A950; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 792u));
    c.r[1].d[0] = c.r[2].sd[0] < 40ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 40u);  if (t) { goto L_0026A950; } }
    st8((c.r[16].w[0] + 792u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0026A950:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 7680ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A964u); st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003B(c, 11u, depth + 1u); else { c.pc = 0x001EC290u; return; } if (c.pc != 0x0026A964u) [[unlikely]] return; }
L_0026A964:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0026A990; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A97Cu); set32(c.r[5], 0u + 36u);  if (depth < kMaxDepth) unit_003A(c, 69u, depth + 1u); else { c.pc = 0x001E9EF0u; return; } if (c.pc != 0x0026A97Cu) [[unlikely]] return; }
L_0026A97C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A988u); set32(c.r[5], 0u + 36u);  if (depth < kMaxDepth) unit_003A(c, 68u, depth + 1u); else { c.pc = 0x001E9DF0u; return; } if (c.pc != 0x0026A988u) [[unlikely]] return; }
L_0026A988:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026A9A0; } }
L_0026A990:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A99Cu); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_005A(c, 250u, depth + 1u); else { c.pc = 0x0026A890u; return; } if (c.pc != 0x0026A99Cu) [[unlikely]] return; }
L_0026A99C:
    c.budget -= 1;
L_0026A9A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026A9B0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0026AA78; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8693u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026AA38; } }
    c.r[5].d[0] = ld8((c.r[18].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00690000u);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 755u));
    set32(c.r[4], c.r[4].w[0] - 25776u);
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[5], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.budget -= 15;
    { const bool t = 0ull == 0ull; c.f[20] = fp::mul(c.f[1], c.f[0]);  if (t) { goto L_0026AAC8; } }
    c.budget -= 1;
L_0026AA38:
    c.r[5].d[0] = ld8((c.r[18].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 755u));
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], c.r[4].w[0] - 14768u);
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[5], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.budget -= 15;
    { const bool t = 0ull == 0ull; c.f[20] = fp::mul(c.f[1], c.f[0]);  if (t) { goto L_0026AAC8; } }
    c.budget -= 1;
L_0026AA78:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0026AAC8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8693u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026AAB0; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00690000u);
    set32(c.r[2], c.r[2].w[0] - 20192u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.f[20] = ld32((c.r[2].w[0]));  if (t) { goto L_0026AAC8; } }
L_0026AAB0:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] - 9184u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[20] = ld32((c.r[2].w[0]));
    c.budget -= 6;
L_0026AAC8:
    set32(c.r[2], ld32((c.r[18].w[0] + 504u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026AB40; } }
    c.f[0] = ld32((c.r[18].w[0] + 2096u));
    set32(c.r[4], c.r[2].w[0] + 64u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 2100u));
    st32((c.r[29].w[0] + 164u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 2104u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AAF8u); st32((c.r[29].w[0] + 168u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x0026AAF8u) [[unlikely]] return; }
L_0026AAF8:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026AB40; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 1488u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 1504u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 504u)));
    st32((c.r[18].w[0] + 1516u), c.r[3].w[0]);
    c.f[3] = ld32((c.r[18].w[0] + 1296u));
    c.f[2] = ld32((c.r[18].w[0] + 1300u));
    c.f[1] = ld32((c.r[18].w[0] + 1304u));
    c.f[0] = ld32((c.r[18].w[0] + 1308u));
    st32((c.r[18].w[0] + 1344u), c.f[3]);
    st32((c.r[18].w[0] + 1348u), c.f[2]);
    st32((c.r[18].w[0] + 1352u), c.f[1]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 1356u), c.f[0]);  if (t) { goto L_0026AD40; } }
    c.budget -= 1;
L_0026AB40:
    st32((c.r[18].w[0] + 1504u), 0u);
    st32((c.r[18].w[0] + 1516u), 0u);
    set32(c.r[2], c.r[28].w[0] - 23808u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23836u)));
    c.r[17].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[3].d[0] ^ 1ull;
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[20], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[20].w[0]));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0026AD10; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[3], c.r[4].w[0] << 10);
    set32(c.r[2], c.r[2].w[0] + 24928u);
    set32(c.r[22], c.r[29].w[0] + 164u);
    set32(c.r[21], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[23], c.r[29].w[0] + 168u);
    c.budget -= 6;
L_0026AB88:
    set32(c.r[19], ld32((c.r[21].w[0])));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0026ACF8; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0026ACF8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026ACF8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    set32(c.r[2], 0u + 17u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0026ACF8; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[5].d[0];  if (t) { goto L_0026ACF8; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 515u));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 515u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 255u);  if (t) { goto L_0026ACF8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[1].d[0] = c.r[4].sd[0] < 3ll ? 1ull : 0ull;  if (t) { goto L_0026ACF8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026ABF8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026ACF8; } }
    c.budget -= 1;
L_0026ABF8:
    set32(c.r[2], ld32((c.r[19].w[0] + 56u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026ACF8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0026AC28; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026ACF8; } }
    c.budget -= 1;
L_0026AC28:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AC34u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 145u, depth + 1u); else { c.pc = 0x001EB3E0u; return; } if (c.pc != 0x0026AC34u) [[unlikely]] return; }
L_0026AC34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026ACF8; } }
    c.f[0] = ld32((c.r[18].w[0] + 2096u));
    set32(c.r[4], c.r[19].w[0] + 64u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 2100u));
    st32((c.r[22].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 2104u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AC60u); st32((c.r[23].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x0026AC60u) [[unlikely]] return; }
L_0026AC60:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026ACF8; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0026ACF0; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_0026ACF0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 503u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 503u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026ACF8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0026ACF0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026ACF0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026ACF0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 16384ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026ACD8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 16384ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026ACF8; } }
L_0026ACD8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026ACF0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026ACF8; } }
L_0026ACF0:
    c.r[17].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 2;
L_0026ACF8:
    c.r[2].d[0] = ld16((c.r[20].w[0]));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026AB88u | kUnwind; return; } goto L_0026AB88; } }
    c.budget -= 1;
L_0026AD10:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0026AD38; } }
    st32((c.r[18].w[0] + 1516u), c.r[17].w[0]);
    set32(c.r[4], c.r[18].w[0] + 1344u);
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[5], c.r[17].w[0] + 64u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AD30u); st32((c.r[18].w[0] + 1504u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0026AD30u) [[unlikely]] return; }
L_0026AD30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0026AD40; } }
L_0026AD38:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0026AD40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0026AD70:
    set32(c.r[29], c.r[29].w[0] - 272u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 15;
    { const bool t = c.r[20].d[0] == c.r[2].d[0]; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0026AF40; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[3].d[0];  if (t) { goto L_0026AF40; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 1488u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026ADD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026B0F8; } }
    c.budget -= 1;
L_0026ADD0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 1626u)));
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0026ADE8; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 2;
L_0026ADE8:
    c.r[8].d[0] = ld8((c.r[21].w[0] + 8658u));
    set32(c.r[2], c.r[3].w[0] << 4);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    c.r[6].d[0] = ld8((c.r[21].w[0] + 755u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[5], c.r[3].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + 20496u);
    set32(c.r[2], c.r[2].w[0] - 32480u);
    c.r[4].d[0] = ld8((c.r[21].w[0] + 8565u));
    c.f[3] = ld32((c.r[21].w[0] + 1296u));
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[3], c.r[29].w[0] + 256u);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.f[2] = ld32((c.r[21].w[0] + 1300u));
    set32(c.r[16], ld32((c.r[7].w[0])));
    c.f[1] = ld32((c.r[21].w[0] + 1304u));
    c.f[0] = ld32((c.r[21].w[0] + 1308u));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[22], c.r[29].w[0] + 244u);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[23], c.r[29].w[0] + 248u);
    set32(c.r[4], c.r[5].w[0] << 2);
    c.r[2].d[0] = c.r[19].d[0] & 128ull;
    set32(c.r[17], c.r[17].w[0] + c.r[4].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), c.f[3]);
    st32((c.r[3].w[0] + 4u), c.f[2]);
    st32((c.r[3].w[0] + 8u), c.f[1]);
    st32((c.r[3].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 8624u));
    st32((c.r[29].w[0] + 240u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 8628u));
    st32((c.r[22].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 8632u));
    c.budget -= 40;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[23].w[0]), c.f[0]);  if (t) { goto L_0026AEA0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AE9Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0026AE9Cu) [[unlikely]] return; }
L_0026AE9C:
    c.budget -= 1;
L_0026AEA0:
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[5], c.r[29].w[0] + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AEB0u); set32(c.r[6], c.r[21].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0026AEB0u) [[unlikely]] return; }
L_0026AEB0:
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], c.r[29].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AEC0u); set32(c.r[6], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_002E(c, 322u, depth + 1u); else { c.pc = 0x001BB280u; return; } if (c.pc != 0x0026AEC0u) [[unlikely]] return; }
L_0026AEC0:
    set32(c.r[5], c.r[29].w[0] + 208u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[21].w[0] + 8592u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AED4u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 126u, depth + 1u); else { c.pc = 0x001B9B80u; return; } if (c.pc != 0x0026AED4u) [[unlikely]] return; }
L_0026AED4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AEDCu); set32(c.r[4], c.r[21].w[0] + 8592u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0026AEDCu) [[unlikely]] return; }
L_0026AEDC:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AEE8u); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0009(c, 183u, depth + 1u); else { c.pc = 0x00126930u; return; } if (c.pc != 0x0026AEE8u) [[unlikely]] return; }
L_0026AEE8:
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AEF8u); set32(c.r[4], c.r[2].w[0] << 12);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x0026AEF8u) [[unlikely]] return; }
L_0026AEF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AF00u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0026AF00u) [[unlikely]] return; }
L_0026AF00:
    c.f[1] = ld32((c.r[29].w[0] + 160u));
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.f[0] = ld32((c.r[29].w[0] + 164u));
    st32((c.r[29].w[0] + 240u), c.f[1]);
    st32((c.r[22].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 168u));
    st32((c.r[23].w[0]), c.f[0]);
    c.f[12] = ld32((c.r[17].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AF28u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0026AF28u) [[unlikely]] return; }
L_0026AF28:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AF34u); set32(c.r[5], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x0026AF34u) [[unlikely]] return; }
L_0026AF34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026AF68; } }
    c.budget -= 1;
L_0026AF40:
    set32(c.r[2], c.r[29].w[0] + 256u);
    c.f[3] = ld32((c.r[21].w[0] + 1360u));
    c.f[2] = ld32((c.r[21].w[0] + 1364u));
    c.f[1] = ld32((c.r[21].w[0] + 1368u));
    c.f[0] = ld32((c.r[21].w[0] + 1372u));
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.budget -= 10;
L_0026AF68:
    c.r[6].d[0] = ld8((c.r[21].w[0] + 8658u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[2].d[0] = c.r[20].d[0] & 127ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 5168u);
    c.r[2].d[0] = c.r[19].d[0] & 128ull;
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0026AFC0; } }
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], c.r[21].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AFB0u); set32(c.r[6], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0026AFB0u) [[unlikely]] return; }
L_0026AFB0:
    set32(c.r[4], c.r[29].w[0] + 256u);
    set32(c.r[5], c.r[21].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AFC0u); set32(c.r[6], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x0026AFC0u) [[unlikely]] return; }
L_0026AFC0:
    c.r[2].d[0] = c.r[19].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0026AFE0; } }
    set32(c.r[5], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AFD8u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 148u, depth + 1u); else { c.pc = 0x002698E0u; return; } if (c.pc != 0x0026AFD8u) [[unlikely]] return; }
L_0026AFD8:
    c.r[17].d[0] = c.r[17].d[0] | c.r[2].d[0];
    c.budget -= 2;
L_0026AFE0:
    c.r[2].d[0] = c.r[19].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0026B000; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[21].w[0] + 1392u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AFFCu); set32(c.r[6], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_005A(c, 214u, depth + 1u); else { c.pc = 0x0026A240u; return; } if (c.pc != 0x0026AFFCu) [[unlikely]] return; }
L_0026AFFC:
    c.r[17].d[0] = c.r[17].d[0] | c.r[2].d[0];
    c.budget -= 1;
L_0026B000:
    set32(c.r[16], ld32((c.r[21].w[0] + 1488u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0026B0F0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026B0F0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 787u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[21].w[0] + 32u);  if (t) { goto L_0026B0F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B030u); set32(c.r[5], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x0026B030u) [[unlikely]] return; }
L_0026B030:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026B0F0; } }
    c.f[0] = ld32((c.r[21].w[0] + 8608u));
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], c.r[29].w[0] + 224u);
    set32(c.r[6], c.r[29].w[0] + 208u);
    st32((c.r[29].w[0] + 240u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 8612u));
    st32((c.r[29].w[0] + 244u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 8616u));
    st32((c.r[29].w[0] + 248u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8608u));
    st32((c.r[29].w[0] + 224u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8612u));
    st32((c.r[29].w[0] + 228u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8616u));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B088u); st32((c.r[29].w[0] + 232u), c.f[0]);  if (depth < kMaxDepth) unit_002E(c, 322u, depth + 1u); else { c.pc = 0x001BB280u; return; } if (c.pc != 0x0026B088u) [[unlikely]] return; }
L_0026B088:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { goto L_0026B0A8; } }
    c.r[2].d[0] = c.r[16].sd[0] < 192ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026B0B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 192u);  if (t) { goto L_0026B0B8; } }
L_0026B0A8:
    c.r[1].d[0] = c.r[16].sd[0] < -191ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026B0B8; } }
    set32(c.r[16], 0u - 192u);
    c.budget -= 1;
L_0026B0B8:
    set32(c.r[5], c.r[29].w[0] + 208u);
    set32(c.r[4], c.r[21].w[0] + 8592u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B0C8u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 126u, depth + 1u); else { c.pc = 0x001B9B80u; return; } if (c.pc != 0x0026B0C8u) [[unlikely]] return; }
L_0026B0C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B0D0u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0026B0D0u) [[unlikely]] return; }
L_0026B0D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B0D8u); set32(c.r[4], c.r[21].w[0] + 8592u);  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x0026B0D8u) [[unlikely]] return; }
L_0026B0D8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B0E4u); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0009(c, 183u, depth + 1u); else { c.pc = 0x00126930u; return; } if (c.pc != 0x0026B0E4u) [[unlikely]] return; }
L_0026B0E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B0ECu); set32(c.r[4], c.r[21].w[0] + 8592u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0026B0ECu) [[unlikely]] return; }
L_0026B0EC:
    c.budget -= 1;
L_0026B0F0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_0026B0F8:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_0026B130:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0] + 1488u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_0026B168; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026B168; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026B170; } }
L_0026B168:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0026B1C8; } }
L_0026B170:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0026B188; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0026B1A0; } }
L_0026B188:
    c.r[2].d[0] = ld8((c.r[5].w[0] + 514u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0026B1A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026B1C8; } }
L_0026B1A0:
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B1ACu); set32(c.r[5], c.r[5].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x0026B1ACu) [[unlikely]] return; }
L_0026B1AC:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_0026B1C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026B1C8; } }
L_0026B1C0:
    set32(c.r[2], 0u + 2u);
    c.budget -= 2;
L_0026B1C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026B1E0:
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 744u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 7u);
    st8((c.r[4].w[0] + 749u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0026B200:
    st8((c.r[4].w[0] + 744u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u - 9u);
    st8((c.r[4].w[0] + 849u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 749u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st16((c.r[4].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 814u)));
    st16((c.r[4].w[0] + 816u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 814u), static_cast<std::uint16_t>(0u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 284u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_0026B230:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 758u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0026B290; } }
    c.r[2].d[0] = c.r[17].d[0] ^ 1ull;
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    st32((c.r[3].w[0] + 8456u), 0u);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    st32((c.r[3].w[0] + 8452u), 0u);
    st32((c.r[3].w[0] + 8448u), 0u);
    st32((c.r[3].w[0] + 8488u), 0u);
    st32((c.r[3].w[0] + 8484u), 0u);
    st32((c.r[3].w[0] + 8480u), 0u);
    st32((c.r[2].w[0] + 8404u), 0u);
    st32((c.r[2].w[0] + 8400u), 0u);
    c.budget -= 14;
L_0026B290:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B29Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_005A(c, 314u, depth + 1u); else { c.pc = 0x0026B4E0u; return; } if (c.pc != 0x0026B29Cu) [[unlikely]] return; }
L_0026B29C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0026B380; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 8564u));
    c.r[2].d[0] = c.r[2].d[0] & 31ull;
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026B380; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 781u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);  if (t) { goto L_0026B2E0; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B2D8u); set32(c.r[5], 0u + 255u);  if (depth < kMaxDepth) unit_003C(c, 71u, depth + 1u); else { c.pc = 0x001F0680u; return; } if (c.pc != 0x0026B2D8u) [[unlikely]] return; }
L_0026B2D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026B378; } }
L_0026B2E0:
    set32(c.r[2], c.r[29].w[0] + 64u);
    c.f[3] = ld32((c.r[18].w[0] + 1360u));
    set32(c.r[5], c.r[18].w[0] + 1360u);
    c.f[2] = ld32((c.r[18].w[0] + 1364u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[1] = ld32((c.r[18].w[0] + 1368u));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = ld32((c.r[18].w[0] + 1372u));
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B314u); st32((c.r[2].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_005B(c, 24u, depth + 1u); else { c.pc = 0x0026C390u; return; } if (c.pc != 0x0026B314u) [[unlikely]] return; }
L_0026B314:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B324u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 328u, depth + 1u); else { c.pc = 0x0026BA50u; return; } if (c.pc != 0x0026B324u) [[unlikely]] return; }
L_0026B324:
    c.r[6].d[0] = c.r[16].d[0] | 128ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B334u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 72u, depth + 1u); else { c.pc = 0x001ECFC0u; return; } if (c.pc != 0x0026B334u) [[unlikely]] return; }
L_0026B334:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B344u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 102u, depth + 1u); else { c.pc = 0x001ED430u; return; } if (c.pc != 0x0026B344u) [[unlikely]] return; }
L_0026B344:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B354u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 130u, depth + 1u); else { c.pc = 0x001ED7D0u; return; } if (c.pc != 0x0026B354u) [[unlikely]] return; }
L_0026B354:
    set32(c.r[3], c.r[29].w[0] + 64u);
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[18].w[0] + 1360u), c.f[3]);
    st32((c.r[18].w[0] + 1364u), c.f[2]);
    st32((c.r[18].w[0] + 1368u), c.f[1]);
    st32((c.r[18].w[0] + 1372u), c.f[0]);
    c.budget -= 9;
L_0026B378:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026B3C0; } }
L_0026B380:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B390u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 328u, depth + 1u); else { c.pc = 0x0026BA50u; return; } if (c.pc != 0x0026B390u) [[unlikely]] return; }
L_0026B390:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B3A0u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 72u, depth + 1u); else { c.pc = 0x001ECFC0u; return; } if (c.pc != 0x0026B3A0u) [[unlikely]] return; }
L_0026B3A0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B3B0u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 102u, depth + 1u); else { c.pc = 0x001ED430u; return; } if (c.pc != 0x0026B3B0u) [[unlikely]] return; }
L_0026B3B0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B3C0u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 130u, depth + 1u); else { c.pc = 0x001ED7D0u; return; } if (c.pc != 0x0026B3C0u) [[unlikely]] return; }
L_0026B3C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0026B3E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B400u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_005A(c, 314u, depth + 1u); else { c.pc = 0x0026B4E0u; return; } if (c.pc != 0x0026B400u) [[unlikely]] return; }
L_0026B400:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0026B438; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F330000u);  if (t) { goto L_0026B41C; } }
    c.f[12] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0026B428; } }
L_0026B41C:
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
L_0026B428:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B430u); set32(c.r[5], 0u + 63u);  if (depth < kMaxDepth) unit_003C(c, 71u, depth + 1u); else { c.pc = 0x001F0680u; return; } if (c.pc != 0x0026B430u) [[unlikely]] return; }
L_0026B430:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026B4C8; } }
L_0026B438:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B448u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 328u, depth + 1u); else { c.pc = 0x0026BA50u; return; } if (c.pc != 0x0026B448u) [[unlikely]] return; }
L_0026B448:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B458u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 72u, depth + 1u); else { c.pc = 0x001ECFC0u; return; } if (c.pc != 0x0026B458u) [[unlikely]] return; }
L_0026B458:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B468u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 72u, depth + 1u); else { c.pc = 0x001ECFC0u; return; } if (c.pc != 0x0026B468u) [[unlikely]] return; }
L_0026B468:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], 0u + 17u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);  if (t) { goto L_0026B4A8; } }
    set32(c.r[4], c.r[16].w[0] + 8480u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B488u); set32(c.r[5], c.r[16].w[0] + 8448u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0026B488u) [[unlikely]] return; }
L_0026B488:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[4], c.r[16].w[0] + 8496u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B49Cu); set32(c.r[5], c.r[16].w[0] + 8464u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0026B49Cu) [[unlikely]] return; }
L_0026B49C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026B4C8; } }
    c.budget -= 1;
L_0026B4A8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B4B8u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 102u, depth + 1u); else { c.pc = 0x001ED430u; return; } if (c.pc != 0x0026B4B8u) [[unlikely]] return; }
L_0026B4B8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B4C8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003B(c, 102u, depth + 1u); else { c.pc = 0x001ED430u; return; } if (c.pc != 0x0026B4C8u) [[unlikely]] return; }
L_0026B4C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026B4E0:
    set32(c.r[29], c.r[29].w[0] - 240u);
    set32(c.r[2], 0u + 10u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 749u));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0026B570; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026B570; } }
    c.f[0] = ld32((c.r[18].w[0] + 2064u));
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[18].w[0] + 1376u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    st32((c.r[29].w[0] + 144u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 2068u));
    st32((c.r[29].w[0] + 148u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 2072u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B554u); st32((c.r[29].w[0] + 152u), c.f[0]);  if (depth < kMaxDepth) unit_002E(c, 159u, depth + 1u); else { c.pc = 0x001BA000u; return; } if (c.pc != 0x0026B554u) [[unlikely]] return; }
L_0026B554:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B55Cu); set32(c.r[4], c.r[18].w[0] + 2048u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0026B55Cu) [[unlikely]] return; }
L_0026B55C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B564u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x0026B564u) [[unlikely]] return; }
L_0026B564:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026B578; } }
    c.budget -= 1;
L_0026B570:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B578u); set32(c.r[4], c.r[18].w[0] + 2048u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0026B578u) [[unlikely]] return; }
L_0026B578:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B588u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x0026B588u) [[unlikely]] return; }
L_0026B588:
    set32(c.r[4], c.r[18].w[0] + 1360u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B594u); set32(c.r[5], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0026B594u) [[unlikely]] return; }
L_0026B594:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8659u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 851u)));
    set32(c.r[4], c.r[4].w[0] + 2272u);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 8658u));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], ld32((c.r[3].w[0])));  if (t) { goto L_0026B5D0; } }
    set32(c.r[16], c.r[16].w[0] + 128u);
    c.budget -= 2;
L_0026B5D0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026B5E8; } }
    set32(c.r[16], c.r[16].w[0] + 64u);
    c.budget -= 2;
L_0026B5E8:
    set32(c.r[23], c.r[29].w[0] + 232u);
    c.f[13] = ld32((c.r[23].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B5F8u); c.f[12] = ld32((c.r[29].w[0] + 224u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x0026B5F8u) [[unlikely]] return; }
L_0026B5F8:
    set32(c.r[19], c.r[29].w[0] + 228u);
    c.r[21].d[0] = c.r[2].d[0] << 48;
    c.f[12] = ld32((c.r[29].w[0] + 224u));
    c.f[13] = ld32((c.r[19].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B610u); c.r[21].d[0] = static_cast<std::uint64_t>(c.r[21].sd[0] >> 48);  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x0026B610u) [[unlikely]] return; }
L_0026B610:
    c.r[20].d[0] = c.r[2].d[0] << 48;
    set32(c.r[2], 0u - 3u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);  if (t) { goto L_0026B9D0; } }
    set32(c.r[2], 0u - 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 4u);  if (t) { goto L_0026B9A0; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0026B848; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0026B650; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0026B650; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026BA08; } }
L_0026B650:
    c.f[0] = ld32((c.r[29].w[0] + 224u));
    c.f[1] = ld32((c.r[23].w[0]));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B664u); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x0026B664u) [[unlikely]] return; }
L_0026B664:
    c.f[12] = ld32((c.r[19].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B670u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x0026B670u) [[unlikely]] return; }
L_0026B670:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026B728; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 8658u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026B6E0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[3].d[0] = c.r[20].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[22], 0u - c.r[17].w[0]);  if (t) { goto L_0026B6B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026BA08; } }
    c.budget -= 1;
L_0026B6B8:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u - c.r[17].w[0]);  if (t) { goto L_0026B6D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[2].w[0] << 1);  if (t) { goto L_0026BA08; } }
L_0026B6D0:
    set32(c.r[2], c.r[17].w[0] << 2);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[17].w[0] - c.r[2].w[0]);  if (t) { goto L_0026BA08; } }
    c.budget -= 1;
L_0026B6E0:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.r[3].d[0] = c.r[21].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[22], 0u - c.r[17].w[0]);  if (t) { goto L_0026B700; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026BA08; } }
L_0026B700:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u - c.r[17].w[0]);  if (t) { goto L_0026B718; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[2].w[0] << 1);  if (t) { goto L_0026BA08; } }
L_0026B718:
    set32(c.r[2], c.r[17].w[0] << 2);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[17].w[0] - c.r[2].w[0]);  if (t) { goto L_0026BA08; } }
    c.budget -= 1;
L_0026B728:
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026B7D8; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 8658u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026B790; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.r[3].d[0] = c.r[20].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[22], 0u - c.r[17].w[0]);  if (t) { goto L_0026B768; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026BA08; } }
    c.budget -= 1;
L_0026B768:
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - c.r[17].w[0]);  if (t) { goto L_0026B780; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[2].w[0] << 1);  if (t) { goto L_0026BA08; } }
L_0026B780:
    set32(c.r[2], 0u - c.r[17].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[2].w[0] << 2);  if (t) { goto L_0026BA08; } }
    c.budget -= 1;
L_0026B790:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.r[3].d[0] = c.r[21].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[22], 0u - c.r[17].w[0]);  if (t) { goto L_0026B7B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026BA08; } }
L_0026B7B0:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u - c.r[17].w[0]);  if (t) { goto L_0026B7C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[2].w[0] << 1);  if (t) { goto L_0026BA08; } }
L_0026B7C8:
    set32(c.r[2], c.r[17].w[0] << 2);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[17].w[0] - c.r[2].w[0]);  if (t) { goto L_0026BA08; } }
    c.budget -= 1;
L_0026B7D8:
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.r[3].d[0] = c.r[21].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[22], 0u - c.r[17].w[0]);  if (t) { goto L_0026B7F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026BA08; } }
L_0026B7F8:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u - c.r[17].w[0]);  if (t) { goto L_0026B810; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[2].w[0] << 1);  if (t) { goto L_0026BA08; } }
L_0026B810:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[22], 0u + 1u);  if (t) { goto L_0026B828; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026BA08; } }
L_0026B828:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[22], 0u + 2u);  if (t) { goto L_0026B840; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026BA08; } }
L_0026B840:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_0026BA08; } }
L_0026B848:
    c.f[0] = ld32((c.r[29].w[0] + 224u));
    c.f[1] = ld32((c.r[23].w[0]));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B85Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x0026B85Cu) [[unlikely]] return; }
L_0026B85C:
    c.f[12] = ld32((c.r[19].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B868u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x0026B868u) [[unlikely]] return; }
L_0026B868:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0026B890; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026B8D0; } }
L_0026B890:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.r[3].d[0] = c.r[21].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[22], 0u + 1u);  if (t) { goto L_0026B8B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026BA08; } }
L_0026B8B0:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[22], 0u + 2u);  if (t) { goto L_0026B8C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026BA08; } }
L_0026B8C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_0026BA08; } }
L_0026B8D0:
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.r[4].d[0] = c.r[21].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026B928; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 8658u));
    set32(c.r[2], 0u + 24u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0026B920; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[4].sd[0] < 16384ll ? 1ull : 0ull;  if (t) { goto L_0026B920; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[4].sd[0] < 30720ll ? 1ull : 0ull;  if (t) { goto L_0026B920; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[22], 0u + 2u);  if (t) { goto L_0026B920; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026BA08; } }
L_0026B920:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[22], 0u + 1u);  if (t) { goto L_0026BA08; } }
L_0026B928:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026B968; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 8658u));
    set32(c.r[2], 0u + 24u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0026B960; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[22], 0u + 1u);  if (t) { goto L_0026B960; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026BA08; } }
L_0026B960:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[22], 0u + 2u);  if (t) { goto L_0026BA08; } }
L_0026B968:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[22], 0u + 1u);  if (t) { goto L_0026B980; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026BA08; } }
L_0026B980:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[22], 0u + 2u);  if (t) { goto L_0026B998; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026BA08; } }
L_0026B998:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_0026BA08; } }
L_0026B9A0:
    c.r[2].d[0] = c.r[21].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; st8((c.r[18].w[0] + 783u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0026B9C8; } }
    c.r[1].d[0] = 0ull | 32768ull;
    c.r[1].d[0] = c.r[2].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_0026B9C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026BA08; } }
L_0026B9C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[22], 0u + 1u);  if (t) { goto L_0026BA08; } }
L_0026B9D0:
    c.f[13] = ld32((c.r[23].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B9DCu); c.f[12] = ld32((c.r[19].w[0]));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x0026B9DCu) [[unlikely]] return; }
L_0026B9DC:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; c.r[1].d[0] = 0ull | 32768ull;  if (t) { goto L_0026BA00; } }
    c.r[1].d[0] = c.r[2].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_0026BA00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026BA08; } }
L_0026BA00:
    set32(c.r[22], 0u + 1u);
    c.budget -= 2;
L_0026BA08:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 2u);  if (t) { goto L_0026BA20; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0026BA20; } }
    st8((c.r[18].w[0] + 783u), static_cast<std::uint8_t>(c.r[22].w[0]));
    c.budget -= 1;
L_0026BA20:
    c.r[2].d[0] = c.r[22].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
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
L_0026BA50:
    set32(c.r[29], c.r[29].w[0] - 176u);
    set32(c.r[2], c.r[5].w[0] << 6);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[4], c.r[2].w[0] + 1984u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BA94u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0026BA94u) [[unlikely]] return; }
L_0026BA94:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BAA4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x0026BAA4u) [[unlikely]] return; }
L_0026BAA4:
    set32(c.r[4], c.r[20].w[0] + 1360u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BAB0u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0026BAB0u) [[unlikely]] return; }
L_0026BAB0:
    c.r[5].d[0] = ld8((c.r[20].w[0] + 8658u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8659u)));
    set32(c.r[3], c.r[3].w[0] + 2272u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 851u)));
    set32(c.r[6], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = c.r[2].d[0] & 32ull;
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.budget -= 13;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], ld32((c.r[2].w[0])));  if (t) { goto L_0026BAE8; } }
    set32(c.r[19], c.r[19].w[0] + 128u);
    c.budget -= 1;
L_0026BAE8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026BB00; } }
    set32(c.r[19], c.r[19].w[0] + 64u);
    c.budget -= 2;
L_0026BB00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + 3968u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[18], ld32((c.r[2].w[0])));  if (t) { goto L_0026BB20; } }
    set32(c.r[18], c.r[18].w[0] + 32u);
    c.budget -= 1;
L_0026BB20:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 8564u));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026BB38; } }
    set32(c.r[18], c.r[18].w[0] + 16u);
    c.budget -= 2;
L_0026BB38:
    set32(c.r[30], c.r[29].w[0] + 168u);
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    c.f[1] = ld32((c.r[30].w[0]));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BB50u); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x0026BB50u) [[unlikely]] return; }
L_0026BB50:
    c.f[12] = ld32((c.r[29].w[0] + 164u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BB5Cu); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x0026BB5Cu) [[unlikely]] return; }
L_0026BB5C:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_0026BB78; } }
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 48u)));  if (t) { goto L_0026BB80; } }
L_0026BB78:
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 52u)));
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 14u)));
    c.budget -= 2;
L_0026BB80:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0026BC08; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 783u)));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026BC08; } }
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[17].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BBC0u);  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x0026BBC0u) [[unlikely]] return; }
L_0026BBC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026BBE0; } }
    c.f[0] = c.f[1];
    c.budget -= 2;
L_0026BBE0:
    c.f[1] = c.r[16].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.r[21].d[0] = c.r[2].d[0] << 48;
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = static_cast<std::uint64_t>(c.r[21].sd[0] >> 48);  if (t) { goto L_0026BC10; } }
L_0026BC08:
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0026BC10:
    c.f[12] = ld32((c.r[29].w[0] + 160u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BC1Cu); c.f[13] = ld32((c.r[30].w[0]));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x0026BC1Cu) [[unlikely]] return; }
L_0026BC1C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 783u)));
    c.r[4].d[0] = c.r[2].d[0] << 48;
    set32(c.r[5], 0u + 4u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (t) { goto L_0026BD50; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[5], 0u + 2u);  if (t) { goto L_0026BD50; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_0026BCF0; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_0026BC90; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026BC60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026BD58; } }
L_0026BC60:
    c.r[5].d[0] = c.r[4].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] < 0; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_0026BC80; } }
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 40u)));  if (t) { goto L_0026BD58; } }
    c.budget -= 1;
L_0026BC80:
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 44u)));  if (t) { goto L_0026BD58; } }
    c.budget -= 1;
L_0026BC90:
    set32(c.r[7], ld32((c.r[19].w[0] + 40u)));
    c.r[5].d[0] = c.r[4].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.r[1].d[0] = c.r[5].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026BCB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0026BCC8; } }
L_0026BCB0:
    c.r[5].d[0] = c.r[7].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 6;
L_0026BCC8:
    set32(c.r[6], ld32((c.r[19].w[0] + 56u)));
    c.r[22].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 6u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 4u)));
    set32(c.r[6], c.r[6].w[0] - c.r[7].w[0]);
    c.r[17].d[0] = c.r[6].d[0] << 48;
    set32(c.r[5], c.r[5].w[0] - c.r[22].w[0]);
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    c.r[16].d[0] = c.r[5].d[0] << 48;
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (t) { goto L_0026BD58; } }
L_0026BCF0:
    set32(c.r[7], ld32((c.r[19].w[0] + 44u)));
    c.r[5].d[0] = c.r[4].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.r[1].d[0] = c.r[7].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026BD10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0026BD28; } }
L_0026BD10:
    c.r[5].d[0] = c.r[7].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 6;
L_0026BD28:
    set32(c.r[6], ld32((c.r[19].w[0] + 60u)));
    c.r[22].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 8u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 10u)));
    set32(c.r[6], c.r[6].w[0] - c.r[7].w[0]);
    c.r[17].d[0] = c.r[6].d[0] << 48;
    set32(c.r[5], c.r[5].w[0] - c.r[22].w[0]);
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    c.r[16].d[0] = c.r[5].d[0] << 48;
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (t) { goto L_0026BD58; } }
L_0026BD50:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0026BD58:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;  if (t) { goto L_0026BDE0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026BDE0; } }
    c.f[1] = c.r[4].w[0];
    c.f[0] = c.r[17].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BD90u);  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x0026BD90u) [[unlikely]] return; }
L_0026BD90:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026BDB0; } }
    c.f[0] = c.f[1];
    c.budget -= 2;
L_0026BDB0:
    c.r[3].d[0] = c.r[22].d[0] << 48;
    c.f[1] = c.r[16].w[0];
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = c.r[3].d[0] << 48;
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (t) { goto L_0026BDE8; } }
L_0026BDE0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0026BDE8:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_0026BE50; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 8440u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026BE50; } }
    c.f[0] = c.r[3].w[0];
    c.f[2] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[3] = ld32((c.r[20].w[0] + 8264u));
    c.f[0] = fp::cvt_s_w(c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.f[0] = c.r[21].w[0];
    c.r[4].d[0] = c.r[3].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[21].d[0] = c.r[3].d[0] << 48;
    c.r[21].d[0] = static_cast<std::uint64_t>(c.r[21].sd[0] >> 48);
    c.budget -= 21;
L_0026BE50:
    c.r[3].d[0] = c.r[4].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    st32((c.r[20].w[0] + 8428u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[21].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[3], 0u - c.r[3].w[0]);
    st32((c.r[20].w[0] + 8424u), c.r[3].w[0]);
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
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0026BEA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 770u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0026BED8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 821u)));
    c.r[2].d[0] = c.r[2].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0026BED8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026BF70; } }
    c.budget -= 1;
L_0026BED8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8258u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 759u)));
    set32(c.r[17], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[5], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0026BF20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BEF8u);  if (depth < kMaxDepth) unit_005A(c, 314u, depth + 1u); else { c.pc = 0x0026B4E0u; return; } if (c.pc != 0x0026BEF8u) [[unlikely]] return; }
L_0026BEF8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0026BF08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0026BF30; } }
L_0026BF08:
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 36ull;  if (t) { goto L_0026BF30; } }
L_0026BF20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BF28u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 314u, depth + 1u); else { c.pc = 0x0026B4E0u; return; } if (c.pc != 0x0026BF28u) [[unlikely]] return; }
L_0026BF28:
    c.r[2].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 2;
L_0026BF30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0026BF68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BF40u);  if (depth < kMaxDepth) unit_005A(c, 344u, depth + 1u); else { c.pc = 0x0026BFE0u; return; } if (c.pc != 0x0026BF40u) [[unlikely]] return; }
L_0026BF40:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 759u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_0026BF58; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0026BF60; } }
L_0026BF58:
    st8((c.r[16].w[0] + 783u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0026BF60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0026BF70; } }
L_0026BF68:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0026BF70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026BF90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 192ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0026BFB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0026BFBC; } }
L_0026BFB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BFB8u);  if (depth < kMaxDepth) unit_005A(c, 337u, depth + 1u); else { c.pc = 0x0026BEA0u; return; } if (c.pc != 0x0026BFB8u) [[unlikely]] return; }
L_0026BFB8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0026BFBC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0026BFD0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0026BEA0u | kUnwind; return; } goto L_0026BEA0; }
L_0026BFE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] + 19488u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C000u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009B(c, 300u, depth + 1u); else { c.pc = 0x0036FB90u; return; } if (c.pc != 0x0026C000u) [[unlikely]] return; }
    [[clang::musttail]] return unit_005B(c, 1u, depth);
}

}
