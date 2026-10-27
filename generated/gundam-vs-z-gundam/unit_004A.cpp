#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_004A[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 7, 0, 8, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 10, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 30, 0, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0,
    45, 0, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 58,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0,
    0, 62, 0, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0,
    0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 77, 0, 0, 78, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0,
    0, 83, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0,
    0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 89, 0,
    0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 100, 0, 101, 0,
    0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 0,
    0, 0, 0, 106, 0, 0, 107, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113,
    0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 119, 0, 0,
    0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 123, 0, 124, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0,
    0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0,
    0, 0, 0, 0, 145, 0, 0, 146, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0,
    0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0,
    158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0,
    0, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 167, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 170, 0, 171, 0, 0, 0, 0, 0, 0, 0, 172, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 176, 0, 0, 0, 0,
    0, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0, 179, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 183, 0, 184, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 186,
    0, 187, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0,
    0, 190, 0, 0, 0, 0, 0, 0, 0, 191, 0, 192, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 195, 0, 0, 0, 0, 0,
    0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 200,
    0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 202, 0, 203, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 208, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0,
    0, 0, 0, 210, 0, 211, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0,
    0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 216, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 218, 0, 219, 0,
    0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0,
    0, 223, 0, 224, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 227, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 232, 0, 0, 0, 0, 0, 0,
    0, 233, 0, 0, 0, 0, 0, 234, 0, 235, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 237, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 239, 0, 240, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0,
    0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 244, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 249, 0, 250, 0, 0, 0, 0,
    0, 0, 251, 0, 0, 0, 0, 0, 252, 0, 253, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    255, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 257, 0, 258, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0, 261,
    0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 264, 0, 0,
    0, 0, 0, 265, 0, 266, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 268, 0, 269, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 273, 0, 274, 0, 0,
    0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 276, 0, 277, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 282, 0, 283, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 286, 0, 287, 0, 0, 0, 0, 0, 0, 288, 0, 0,
    0, 0, 0, 0, 0, 289, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292,
    0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0,
    0, 0, 0, 0, 305, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 308, 0, 0, 0, 309, 0, 310, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 317, 0,
    0, 0, 318, 0, 319, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0,
    0, 0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 0, 327, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 330, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 334,
    335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 338, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340,
    0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 345, 0, 346, 0, 0, 0, 0, 0, 0, 347, 0, 348, 0, 0, 0, 0, 349, 0, 0, 0,
    0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 352, 0, 353, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 356, 0,
    0, 0, 0, 0, 357, 0, 0, 0, 0, 358, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 367, 0, 0, 0, 368, 0, 0, 0, 0, 0, 369, 0, 0, 0, 370, 0, 0, 0, 371, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0, 0, 374, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 379, 0, 0, 0,
    380, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 382, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0,
    0, 0, 385, 0, 0, 0, 386, 0, 0, 0, 387, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 392, 0, 0, 0, 393, 0, 0, 0, 394, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_004A(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00228000;
    case 2u: goto L_00228024;
    case 3u: goto L_00228030;
    case 4u: goto L_002280C8;
    case 5u: goto L_002280E0;
    case 6u: goto L_002281B0;
    case 7u: goto L_0022820C;
    case 8u: goto L_00228214;
    case 9u: goto L_0022822C;
    case 10u: goto L_00228284;
    case 11u: goto L_002282A0;
    case 12u: goto L_002282CC;
    case 13u: goto L_002282D4;
    case 14u: goto L_002282F0;
    case 15u: goto L_00228330;
    case 16u: goto L_00228418;
    case 17u: goto L_00228450;
    case 18u: goto L_002284B0;
    case 19u: goto L_002284F4;
    case 20u: goto L_0022854C;
    case 21u: goto L_002285B4;
    case 22u: goto L_002285C0;
    case 23u: goto L_002285E0;
    case 24u: goto L_00228620;
    case 25u: goto L_00228688;
    case 26u: goto L_00228698;
    case 27u: goto L_002286D0;
    case 28u: goto L_00228710;
    case 29u: goto L_00228720;
    case 30u: goto L_00228728;
    case 31u: goto L_00228734;
    case 32u: goto L_00228750;
    case 33u: goto L_002287AC;
    case 34u: goto L_00228840;
    case 35u: goto L_002288B0;
    case 36u: goto L_002288B8;
    case 37u: goto L_00228900;
    case 38u: goto L_00228928;
    case 39u: goto L_00228940;
    case 40u: goto L_00228988;
    case 41u: goto L_002289A0;
    case 42u: goto L_002289A8;
    case 43u: goto L_002289D0;
    case 44u: goto L_002289DC;
    case 45u: goto L_00228A00;
    case 46u: goto L_00228A14;
    case 47u: goto L_00228A28;
    case 48u: goto L_00228A48;
    case 49u: goto L_00228A58;
    case 50u: goto L_00228A90;
    case 51u: goto L_00228AD4;
    case 52u: goto L_00228AE4;
    case 53u: goto L_00228B14;
    case 54u: goto L_00228B24;
    case 55u: goto L_00228B30;
    case 56u: goto L_00228B9C;
    case 57u: goto L_00228BF0;
    case 58u: goto L_00228BFC;
    case 59u: goto L_00228C70;
    case 60u: goto L_00228CD4;
    case 61u: goto L_00228CE0;
    case 62u: goto L_00228D04;
    case 63u: goto L_00228D10;
    case 64u: goto L_00228D2C;
    case 65u: goto L_00228D38;
    case 66u: goto L_00228D50;
    case 67u: goto L_00228D98;
    case 68u: goto L_00228DAC;
    case 69u: goto L_00228DC0;
    case 70u: goto L_00228DE0;
    case 71u: goto L_00228DF0;
    case 72u: goto L_00228E08;
    case 73u: goto L_00228E44;
    case 74u: goto L_00228E64;
    case 75u: goto L_00228E94;
    case 76u: goto L_00228EA4;
    case 77u: goto L_00228EB0;
    case 78u: goto L_00228EBC;
    case 79u: goto L_00228ED8;
    case 80u: goto L_00228F34;
    case 81u: goto L_00228FD8;
    case 82u: goto L_00229070;
    case 83u: goto L_00229084;
    case 84u: goto L_00229090;
    case 85u: goto L_002290D0;
    case 86u: goto L_002290F8;
    case 87u: goto L_00229110;
    case 88u: goto L_0022926C;
    case 89u: goto L_00229278;
    case 90u: goto L_00229290;
    case 91u: goto L_002292A0;
    case 92u: goto L_002292B0;
    case 93u: goto L_002292C0;
    case 94u: goto L_002292D0;
    case 95u: goto L_002292E0;
    case 96u: goto L_00229310;
    case 97u: goto L_002293A4;
    case 98u: goto L_002293AC;
    case 99u: goto L_002293E8;
    case 100u: goto L_002293F0;
    case 101u: goto L_002293F8;
    case 102u: goto L_00229408;
    case 103u: goto L_002294CC;
    case 104u: goto L_002294D8;
    case 105u: goto L_002294F0;
    case 106u: goto L_0022950C;
    case 107u: goto L_00229518;
    case 108u: goto L_00229524;
    case 109u: goto L_00229538;
    case 110u: goto L_00229548;
    case 111u: goto L_00229550;
    case 112u: goto L_00229560;
    case 113u: goto L_0022957C;
    case 114u: goto L_0022958C;
    case 115u: goto L_002295A8;
    case 116u: goto L_002295BC;
    case 117u: goto L_002295D8;
    case 118u: goto L_002295E8;
    case 119u: goto L_002295F4;
    case 120u: goto L_00229610;
    case 121u: goto L_00229620;
    case 122u: goto L_00229638;
    case 123u: goto L_00229648;
    case 124u: goto L_00229650;
    case 125u: goto L_00229670;
    case 126u: goto L_002296D0;
    case 127u: goto L_002296D8;
    case 128u: goto L_00229728;
    case 129u: goto L_00229734;
    case 130u: goto L_002297B0;
    case 131u: goto L_002297B8;
    case 132u: goto L_00229824;
    case 133u: goto L_00229834;
    case 134u: goto L_00229840;
    case 135u: goto L_00229860;
    case 136u: goto L_002298DC;
    case 137u: goto L_00229AF8;
    case 138u: goto L_00229B04;
    case 139u: goto L_00229B2C;
    case 140u: goto L_00229B5C;
    case 141u: goto L_00229B88;
    case 142u: goto L_00229BC0;
    case 143u: goto L_00229BD4;
    case 144u: goto L_00229BF0;
    case 145u: goto L_00229C10;
    case 146u: goto L_00229C1C;
    case 147u: goto L_00229C28;
    case 148u: goto L_00229C48;
    case 149u: goto L_00229CF8;
    case 150u: goto L_00229D04;
    case 151u: goto L_00229D2C;
    case 152u: goto L_00229D50;
    case 153u: goto L_00229D70;
    case 154u: goto L_00229DF0;
    case 155u: goto L_00229EB0;
    case 156u: goto L_00229ECC;
    case 157u: goto L_00229EE8;
    case 158u: goto L_00229F00;
    case 159u: goto L_00229FF0;
    case 160u: goto L_0022A014;
    case 161u: goto L_0022A024;
    case 162u: goto L_0022A048;
    case 163u: goto L_0022A058;
    case 164u: goto L_0022A06C;
    case 165u: goto L_0022A098;
    case 166u: goto L_0022A0BC;
    case 167u: goto L_0022A114;
    case 168u: goto L_0022A11C;
    case 169u: goto L_0022A138;
    case 170u: goto L_0022A150;
    case 171u: goto L_0022A158;
    case 172u: goto L_0022A178;
    case 173u: goto L_0022A1B0;
    case 174u: goto L_0022A1CC;
    case 175u: goto L_0022A1E4;
    case 176u: goto L_0022A1EC;
    case 177u: goto L_0022A20C;
    case 178u: goto L_0022A224;
    case 179u: goto L_0022A22C;
    case 180u: goto L_0022A24C;
    case 181u: goto L_0022A288;
    case 182u: goto L_0022A2A4;
    case 183u: goto L_0022A2BC;
    case 184u: goto L_0022A2C4;
    case 185u: goto L_0022A2E4;
    case 186u: goto L_0022A2FC;
    case 187u: goto L_0022A304;
    case 188u: goto L_0022A324;
    case 189u: goto L_0022A364;
    case 190u: goto L_0022A384;
    case 191u: goto L_0022A3A4;
    case 192u: goto L_0022A3AC;
    case 193u: goto L_0022A3C8;
    case 194u: goto L_0022A3E0;
    case 195u: goto L_0022A3E8;
    case 196u: goto L_0022A408;
    case 197u: goto L_0022A440;
    case 198u: goto L_0022A45C;
    case 199u: goto L_0022A474;
    case 200u: goto L_0022A47C;
    case 201u: goto L_0022A49C;
    case 202u: goto L_0022A4B4;
    case 203u: goto L_0022A4BC;
    case 204u: goto L_0022A4DC;
    case 205u: goto L_0022A518;
    case 206u: goto L_0022A534;
    case 207u: goto L_0022A54C;
    case 208u: goto L_0022A554;
    case 209u: goto L_0022A574;
    case 210u: goto L_0022A58C;
    case 211u: goto L_0022A594;
    case 212u: goto L_0022A5B4;
    case 213u: goto L_0022A5F4;
    case 214u: goto L_0022A614;
    case 215u: goto L_0022A634;
    case 216u: goto L_0022A63C;
    case 217u: goto L_0022A658;
    case 218u: goto L_0022A670;
    case 219u: goto L_0022A678;
    case 220u: goto L_0022A698;
    case 221u: goto L_0022A6D0;
    case 222u: goto L_0022A6EC;
    case 223u: goto L_0022A704;
    case 224u: goto L_0022A70C;
    case 225u: goto L_0022A72C;
    case 226u: goto L_0022A744;
    case 227u: goto L_0022A74C;
    case 228u: goto L_0022A76C;
    case 229u: goto L_0022A7A8;
    case 230u: goto L_0022A7C4;
    case 231u: goto L_0022A7DC;
    case 232u: goto L_0022A7E4;
    case 233u: goto L_0022A804;
    case 234u: goto L_0022A81C;
    case 235u: goto L_0022A824;
    case 236u: goto L_0022A844;
    case 237u: goto L_0022A884;
    case 238u: goto L_0022A8A4;
    case 239u: goto L_0022A8BC;
    case 240u: goto L_0022A8C4;
    case 241u: goto L_0022A8E4;
    case 242u: goto L_0022A904;
    case 243u: goto L_0022A928;
    case 244u: goto L_0022A944;
    case 245u: goto L_0022A950;
    case 246u: goto L_0022A970;
    case 247u: goto L_0022A9A8;
    case 248u: goto L_0022A9C4;
    case 249u: goto L_0022A9E4;
    case 250u: goto L_0022A9EC;
    case 251u: goto L_0022AA08;
    case 252u: goto L_0022AA20;
    case 253u: goto L_0022AA28;
    case 254u: goto L_0022AA48;
    case 255u: goto L_0022AA80;
    case 256u: goto L_0022AA9C;
    case 257u: goto L_0022AAB4;
    case 258u: goto L_0022AABC;
    case 259u: goto L_0022AADC;
    case 260u: goto L_0022AAF4;
    case 261u: goto L_0022AAFC;
    case 262u: goto L_0022AB1C;
    case 263u: goto L_0022AB58;
    case 264u: goto L_0022AB74;
    case 265u: goto L_0022AB8C;
    case 266u: goto L_0022AB94;
    case 267u: goto L_0022ABB4;
    case 268u: goto L_0022ABCC;
    case 269u: goto L_0022ABD4;
    case 270u: goto L_0022ABF4;
    case 271u: goto L_0022AC34;
    case 272u: goto L_0022AC54;
    case 273u: goto L_0022AC6C;
    case 274u: goto L_0022AC74;
    case 275u: goto L_0022AC94;
    case 276u: goto L_0022ACAC;
    case 277u: goto L_0022ACB4;
    case 278u: goto L_0022ACD4;
    case 279u: goto L_0022AD10;
    case 280u: goto L_0022AD2C;
    case 281u: goto L_0022AD48;
    case 282u: goto L_0022AD84;
    case 283u: goto L_0022AD8C;
    case 284u: goto L_0022ADA0;
    case 285u: goto L_0022ADBC;
    case 286u: goto L_0022ADD0;
    case 287u: goto L_0022ADD8;
    case 288u: goto L_0022ADF4;
    case 289u: goto L_0022AE14;
    case 290u: goto L_0022AE1C;
    case 291u: goto L_0022AE54;
    case 292u: goto L_0022AE7C;
    case 293u: goto L_0022AE9C;
    case 294u: goto L_0022AEB0;
    case 295u: goto L_0022AED0;
    case 296u: goto L_0022AEEC;
    case 297u: goto L_0022AF24;
    case 298u: goto L_0022AF4C;
    case 299u: goto L_0022AF60;
    case 300u: goto L_0022AFA0;
    case 301u: goto L_0022B008;
    case 302u: goto L_0022B02C;
    case 303u: goto L_0022B040;
    case 304u: goto L_0022B070;
    case 305u: goto L_0022B090;
    case 306u: goto L_0022B0A4;
    case 307u: goto L_0022B0BC;
    case 308u: goto L_0022B0D0;
    case 309u: goto L_0022B0E0;
    case 310u: goto L_0022B0E8;
    case 311u: goto L_0022B110;
    case 312u: goto L_0022B1AC;
    case 313u: goto L_0022B1C0;
    case 314u: goto L_0022B1D0;
    case 315u: goto L_0022B238;
    case 316u: goto L_0022B268;
    case 317u: goto L_0022B278;
    case 318u: goto L_0022B288;
    case 319u: goto L_0022B290;
    case 320u: goto L_0022B2A4;
    case 321u: goto L_0022B31C;
    case 322u: goto L_0022B350;
    case 323u: goto L_0022B360;
    case 324u: goto L_0022B370;
    case 325u: goto L_0022B390;
    case 326u: goto L_0022B3A0;
    case 327u: goto L_0022B3B0;
    case 328u: goto L_0022B3B8;
    case 329u: goto L_0022B3E8;
    case 330u: goto L_0022B3F8;
    case 331u: goto L_0022B424;
    case 332u: goto L_0022B42C;
    case 333u: goto L_0022B468;
    case 334u: goto L_0022B47C;
    case 335u: goto L_0022B480;
    case 336u: goto L_0022B4B0;
    case 337u: goto L_0022B4DC;
    case 338u: goto L_0022B504;
    case 339u: goto L_0022B51C;
    case 340u: goto L_0022B57C;
    case 341u: goto L_0022B58C;
    case 342u: goto L_0022B5B4;
    case 343u: goto L_0022B5FC;
    case 344u: goto L_0022B628;
    case 345u: goto L_0022B630;
    case 346u: goto L_0022B638;
    case 347u: goto L_0022B654;
    case 348u: goto L_0022B65C;
    case 349u: goto L_0022B670;
    case 350u: goto L_0022B68C;
    case 351u: goto L_0022B6C0;
    case 352u: goto L_0022B710;
    case 353u: goto L_0022B718;
    case 354u: goto L_0022B738;
    case 355u: goto L_0022B7E8;
    case 356u: goto L_0022B7F8;
    case 357u: goto L_0022B810;
    case 358u: goto L_0022B824;
    case 359u: goto L_0022B834;
    case 360u: goto L_0022B860;
    case 361u: goto L_0022B890;
    case 362u: goto L_0022B8BC;
    case 363u: goto L_0022B940;
    case 364u: goto L_0022B9D0;
    case 365u: goto L_0022B9E0;
    case 366u: goto L_0022BA18;
    case 367u: goto L_0022BA28;
    case 368u: goto L_0022BA38;
    case 369u: goto L_0022BA50;
    case 370u: goto L_0022BA60;
    case 371u: goto L_0022BA70;
    case 372u: goto L_0022BAA8;
    case 373u: goto L_0022BAB8;
    case 374u: goto L_0022BAC8;
    case 375u: goto L_0022BAE0;
    case 376u: goto L_0022BB20;
    case 377u: goto L_0022BB30;
    case 378u: goto L_0022BB68;
    case 379u: goto L_0022BB70;
    case 380u: goto L_0022BB80;
    case 381u: goto L_0022BBA0;
    case 382u: goto L_0022BBB0;
    case 383u: goto L_0022BBC0;
    case 384u: goto L_0022BBF8;
    case 385u: goto L_0022BC08;
    case 386u: goto L_0022BC18;
    case 387u: goto L_0022BC28;
    case 388u: goto L_0022BC40;
    case 389u: goto L_0022BCD0;
    case 390u: goto L_0022BCE0;
    case 391u: goto L_0022BD18;
    case 392u: goto L_0022BD28;
    case 393u: goto L_0022BD38;
    case 394u: goto L_0022BD48;
    case 395u: goto L_0022BD60;
    default: bad_entry(c, 0x00228000u); return;
    }
L_00228000:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002280C8; } }
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 10u);
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228024u); st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_004A(c, 6u, depth + 1u); else { c.pc = 0x002281B0u; return; } if (c.pc != 0x00228024u) [[unlikely]] return; }
L_00228024:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002280C8; } }
    c.budget -= 1;
L_00228030:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[3].d[0] = c.r[6].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00228068; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 6u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_002280C8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; set32(c.r[3], 0u - 5u);  if (t) { goto L_002280C8; } }
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002280C8; } }
L_00228068:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 6u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00228088; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00228098; } }
    c.budget -= 1;
L_00228088:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002280C8; } }
L_00228098:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_002280A8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002280C0; } }
L_002280A8:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_002280C8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002280C8; } }
    c.budget -= 1;
L_002280C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002280C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004A(c, 11u, depth + 1u); else { c.pc = 0x002282A0u; return; } if (c.pc != 0x002280C8u) [[unlikely]] return; }
L_002280C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002280E0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 55u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002281A8; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    set32(c.r[8], 0u + 1u);
    set32(c.r[3], c.r[8].w[0] << (c.r[5].w[0] & 31u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002281A8; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[3].d[0] = c.r[7].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00228148; } }
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_002281A8; } }
    c.r[3].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00228140; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002281A8; } }
L_00228140:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002281A8; } }
L_00228148:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[6], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + 9604u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_002281A8; } }
    c.r[3].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00228188; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] + c.r[4].w[0]);  if (t) { goto L_002281A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002281A8; } }
L_00228188:
    set32(c.r[3], c.r[8].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[6], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[6].d[0]; set32(c.r[3], c.r[5].w[0] + c.r[4].w[0]);  if (t) { goto L_002281A8; } }
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 2;
L_002281A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002281B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 13u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 45u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 14u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 14u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 15u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 24u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 25u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 26u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 43u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 48u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 57u)));
    c.budget -= 21;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00228218; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022820Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 65u, depth + 1u); else { c.pc = 0x00238A00u; return; } if (c.pc != 0x0022820Cu) [[unlikely]] return; }
L_0022820C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228214u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 173u, depth + 1u); else { c.pc = 0x0023A570u; return; } if (c.pc != 0x00228214u) [[unlikely]] return; }
L_00228214:
    c.budget -= 1;
L_00228218:
    set32(c.r[2], 0u + 18000u);
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 10u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022822Cu); st16((c.r[16].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0049(c, 399u, depth + 1u); else { c.pc = 0x00227C40u; return; } if (c.pc != 0x0022822Cu) [[unlikely]] return; }
L_0022822C:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00228258; } }
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 14u)));
    set32(c.r[2], c.r[2].w[0] + 8u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 15u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00228278; } }
    c.budget -= 1;
L_00228258:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00228278; } }
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 14u)));
    set32(c.r[2], c.r[2].w[0] + 8u);
    st8((c.r[16].w[0] + 15u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_00228278:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228284u); set32(c.r[5], 0u + 165u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x00228284u) [[unlikely]] return; }
L_00228284:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002282A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 57u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002282D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002282CCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 65u, depth + 1u); else { c.pc = 0x00238A00u; return; } if (c.pc != 0x002282CCu) [[unlikely]] return; }
L_002282CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002282D4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 173u, depth + 1u); else { c.pc = 0x0023A570u; return; } if (c.pc != 0x002282D4u) [[unlikely]] return; }
L_002282D4:
    c.budget -= 1;
L_002282D8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002282F0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[20], c.r[20].w[0] - 8624u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[18], c.r[18].w[0] - 8912u);
    set32(c.r[17], c.r[17].w[0] + 11024u);
    c.r[16].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 16;
L_00228330:
    set32(c.r[2], 0u + 10u);
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BE0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[19].w[0]));
    st8((c.r[18].w[0] + 22u), static_cast<std::uint8_t>(0u));
    c.f[12] = c.r[2].w[0];
    st8((c.r[18].w[0] + 23u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[18].w[0] + 24u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 8u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> (c.r[19].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 28u));
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    st16((c.r[18].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 30u));
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    st16((c.r[18].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 32u));
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    st16((c.r[18].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 34u));
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    st16((c.r[18].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 36u));
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    st16((c.r[18].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 38u));
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    st16((c.r[18].w[0] + 14u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 40u));
    st8((c.r[17].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    st16((c.r[18].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 42u));
    st8((c.r[17].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    st16((c.r[18].w[0] + 18u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[1].w[0] - 5892u)));
    set32(c.r[5], c.r[2].w[0] + 5760u);
    c.budget -= 58;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228418u); set32(c.r[6], c.r[2].w[0] + 6000u);  if (depth < kMaxDepth) unit_00AC(c, 54u, depth + 1u); else { c.pc = 0x003B0700u; return; } if (c.pc != 0x00228418u) [[unlikely]] return; }
L_00228418:
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 40u);
    c.r[3].d[0] = c.r[19].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 9u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00228330u | kUnwind; return; } goto L_00228330; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00228450:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 24u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 12u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00228510; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002284E8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002284B0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00228498; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002285A8; } }
L_00228498:
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st8((c.r[17].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] + 11008u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002284B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x002284B0u) [[unlikely]] return; }
L_002284B0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 10u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002284D0; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[17].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 10u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002285A8; } }
L_002284D0:
    st16((c.r[17].w[0] + 16u), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0] + 10u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_002284E8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002284F4u); set32(c.r[4], c.r[4].w[0] + 11008u);  if (depth < kMaxDepth) unit_00AC(c, 65u, depth + 1u); else { c.pc = 0x003B0AD0u; return; } if (c.pc != 0x002284F4u) [[unlikely]] return; }
L_002284F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002285A8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002285A8; } }
    c.budget -= 1;
L_00228510:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00228528; } }
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_00228528:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 13u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 15488u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0022854Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0022854Cu) [[unlikely]] return; }
L_0022854C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], c.r[16].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 9600u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00228578; } }
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 18000u);
    st16((c.r[17].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00228578:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00228590; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002285A8; } }
L_00228590:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 2u));
    set32(c.r[2], 0u + 20u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_002285A8; } }
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002285A8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00230000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002285B4u); set32(c.r[4], c.r[4].w[0] - 25104u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x002285B4u) [[unlikely]] return; }
L_002285B4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00230000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002285C0u); set32(c.r[4], c.r[4].w[0] - 24832u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x002285C0u) [[unlikely]] return; }
L_002285C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002285E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 45u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00228928; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + 17360u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00228000u < 16384u) { entry = entries_004A[(t - 0x00228000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00228620:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[16], c.r[5].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 9612u);
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = ld16((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 14u)));  if (t) { goto L_00228648; } }
    set32(c.r[2], c.r[4].w[0] - 1u);
    st8((c.r[17].w[0] + 14u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00228648:
    c.r[2].d[0] = ld16((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00228668; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 14u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 14u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00228668:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 14u)));
    c.r[3].d[0] = c.r[4].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00228698; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228688u); set32(c.r[5], 0u + 166u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x00228688u) [[unlikely]] return; }
L_00228688:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228698u); set32(c.r[4], c.r[4].w[0] + 11008u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x00228698u) [[unlikely]] return; }
L_00228698:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 14u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[2], 0u + 3u);
    set32(c.r[4], c.r[4].w[0] + 11008u);
    set32(c.r[3], c.r[3].w[0] + 3u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    st8((c.r[17].w[0] + 14u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 14u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002286D0u); st8((c.r[17].w[0] + 15u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AC(c, 62u, depth + 1u); else { c.pc = 0x003B0A00u; return; } if (c.pc != 0x002286D0u) [[unlikely]] return; }
L_002286D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], c.r[3].w[0] + 9604u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00228928; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 45u)));
    set32(c.r[2], 0u + 32u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 165u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 45u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 46u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228710u); st8((c.r[17].w[0] + 43u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x00228710u) [[unlikely]] return; }
L_00228710:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228720u); set32(c.r[4], c.r[4].w[0] + 11008u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x00228720u) [[unlikely]] return; }
L_00228720:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00228928; } }
L_00228728:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228734u); set32(c.r[4], c.r[4].w[0] + 11008u);  if (depth < kMaxDepth) unit_00AC(c, 64u, depth + 1u); else { c.pc = 0x003B0A80u; return; } if (c.pc != 0x00228734u) [[unlikely]] return; }
L_00228734:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00228928; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 45u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 45u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00228928; } }
    c.budget -= 1;
L_00228750:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 43u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 11008u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[17].w[0] + 43u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 14u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << (c.r[5].w[0] & 31u));
    c.r[3].d[0] = ~(c.r[3].d[0] | 0ull);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st32((c.r[17].w[0] + 48u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 43u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 14u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    c.r[5].d[0] = c.r[5].d[0] & 4ull;
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 2));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[3], c.r[5].w[0] << (c.r[3].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002287ACu); st32((c.r[17].w[0] + 48u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B0B20u; return; } if (c.pc != 0x002287ACu) [[unlikely]] return; }
L_002287AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00228928; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 14u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[5], c.r[6].w[0] << (c.r[5].w[0] & 31u));
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st32((c.r[17].w[0] + 48u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 14u)));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00228828; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[6].d[0];  if (t) { goto L_00228810; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002287F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00228928; } }
L_002287F8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 45u)));
    set32(c.r[3], c.r[3].w[0] + 3u);
    st8((c.r[17].w[0] + 45u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 10u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00228928; } }
    c.budget -= 1;
L_00228810:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 45u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 45u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 10u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00228928; } }
    c.budget -= 1;
L_00228828:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 45u)));
    set32(c.r[3], c.r[3].w[0] + 2u);
    st8((c.r[17].w[0] + 45u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 16u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00228928; } }
    c.budget -= 1;
L_00228840:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 14u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00228858; } }
    st8((c.r[17].w[0] + 45u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00228858:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 10u)));
    set32(c.r[4], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00228880; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[17].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 10u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 16u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00228928; } }
    c.budget -= 1;
L_00228880:
    st8((c.r[17].w[0] + 45u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 18000u);
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 12u), static_cast<std::uint8_t>(0u));
    st16((c.r[17].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[17].w[0] + 10u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[17].w[0] + 16u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[17].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002288B0u); st8((c.r[17].w[0] + 26u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_004A(c, 14u, depth + 1u); else { c.pc = 0x002282F0u; return; } if (c.pc != 0x002288B0u) [[unlikely]] return; }
L_002288B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00228928; } }
L_002288B8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[17].w[0] + 16u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00228928; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 13u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[17].w[0] + 13u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[17].w[0] + 45u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 14u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 14u)));
    set32(c.r[3], c.r[3].w[0] + 5u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 15u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00228928; } }
L_00228900:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 10u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[17].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00228928; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228928u); st8((c.r[17].w[0] + 45u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_004A(c, 11u, depth + 1u); else { c.pc = 0x002282A0u; return; } if (c.pc != 0x00228928u) [[unlikely]] return; }
L_00228928:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00228940:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 45u)));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00228D38; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 17392u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00228000u < 16384u) { entry = entries_004A[(t - 0x00228000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00228988:
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st8((c.r[17].w[0] + 45u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] + 11008u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002289A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x002289A0u) [[unlikely]] return; }
L_002289A0:
    set32(c.r[3], 0u + 10u);
    st16((c.r[17].w[0] + 16u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002289A8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002289C0; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 16u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00228D38; } }
L_002289C0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 45u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 45u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_002289D0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002289DCu); set32(c.r[4], c.r[4].w[0] + 11008u);  if (depth < kMaxDepth) unit_00AC(c, 65u, depth + 1u); else { c.pc = 0x003B0AD0u; return; } if (c.pc != 0x002289DCu) [[unlikely]] return; }
L_002289DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00228D38; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 45u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 45u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 46u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 16u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00228D38; } }
    c.budget -= 1;
L_00228A00:
    c.r[18].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 14u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << (c.r[16].w[0] & 31u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228A14u); c.r[4].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x00228A14u) [[unlikely]] return; }
L_00228A14:
    c.r[5].d[0] = c.r[18].d[0] << 56;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228A28u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0049(c, 389u, depth + 1u); else { c.pc = 0x002278E0u; return; } if (c.pc != 0x00228A28u) [[unlikely]] return; }
L_00228A28:
    st8((c.r[17].w[0] + 14u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = c.r[18].d[0] << 56;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 14u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00228A58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228A48u); set32(c.r[5], 0u + 166u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x00228A48u) [[unlikely]] return; }
L_00228A48:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228A58u); set32(c.r[4], c.r[4].w[0] + 11008u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x00228A58u) [[unlikely]] return; }
L_00228A58:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 14u)));
    set32(c.r[3], c.r[2].w[0] + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; c.r[2].d[0] = c.r[3].d[0] & 1ull;  if (t) { goto L_00228A74; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00228A74; } }
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.budget -= 1;
L_00228A74:
    st8((c.r[17].w[0] + 14u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 14u)));
    set32(c.r[4], c.r[4].w[0] + 11008u);
    set32(c.r[2], c.r[2].w[0] + 5u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228A90u); st8((c.r[17].w[0] + 15u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AC(c, 62u, depth + 1u); else { c.pc = 0x003B0A00u; return; } if (c.pc != 0x00228A90u) [[unlikely]] return; }
L_00228A90:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[4], c.r[16].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + 9604u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = ld16((c.r[3].w[0]));
    c.r[3].d[0] = c.r[4].d[0] & 32ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00228AF0; } }
    set32(c.r[2], 0u + 32u);
    st8((c.r[17].w[0] + 24u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 45u)));
    set32(c.r[5], 0u + 165u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 45u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228AD4u); st8((c.r[17].w[0] + 43u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x00228AD4u) [[unlikely]] return; }
L_00228AD4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228AE4u); set32(c.r[4], c.r[4].w[0] + 11008u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x00228AE4u) [[unlikely]] return; }
L_00228AE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00228D38; } }
    c.budget -= 1;
L_00228AF0:
    c.r[3].d[0] = c.r[4].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00228D38; } }
    set32(c.r[2], 0u + 5u);
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[17].w[0] + 45u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 167u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228B14u); st16((c.r[17].w[0] + 16u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x00228B14u) [[unlikely]] return; }
L_00228B14:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228B24u); set32(c.r[4], c.r[4].w[0] + 11008u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x00228B24u) [[unlikely]] return; }
L_00228B24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00228D38; } }
    c.budget -= 1;
L_00228B30:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 14u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00228B40; } }
    st8((c.r[17].w[0] + 24u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00228B40:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 43u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 11008u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[17].w[0] + 43u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 14u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[5], c.r[5].w[0] + 9u);
    set32(c.r[3], c.r[3].w[0] << (c.r[5].w[0] & 31u));
    c.r[3].d[0] = ~(c.r[3].d[0] | 0ull);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st32((c.r[17].w[0] + 48u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 43u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 14u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    c.r[5].d[0] = c.r[5].d[0] & 4ull;
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 2));
    set32(c.r[3], c.r[3].w[0] + 9u);
    set32(c.r[3], c.r[5].w[0] << (c.r[3].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228B9Cu); st32((c.r[17].w[0] + 48u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AC(c, 64u, depth + 1u); else { c.pc = 0x003B0A80u; return; } if (c.pc != 0x00228B9Cu) [[unlikely]] return; }
L_00228B9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00228D38; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 14u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[5], c.r[5].w[0] + 9u);
    set32(c.r[4], c.r[4].w[0] << (c.r[5].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st32((c.r[17].w[0] + 48u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 14u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 8u);  if (t) { goto L_00228BD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 45u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00228D38; } }
    c.budget -= 1;
L_00228BD8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 45u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 45u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 16u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00228D38; } }
    c.budget -= 1;
L_00228BF0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228BFCu); set32(c.r[4], c.r[4].w[0] + 11008u);  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B0B20u; return; } if (c.pc != 0x00228BFCu) [[unlikely]] return; }
L_00228BFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00228D38; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 45u)));
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 45u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != c.r[4].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_00228C38; } }
    st8((c.r[17].w[0] + 14u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 14u)));
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 15u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00228C68; } }
L_00228C38:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_00228C58; } }
    st8((c.r[17].w[0] + 14u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 14u)));
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 15u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00228C68; } }
L_00228C58:
    st8((c.r[17].w[0] + 14u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 14u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 15u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00228C68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 48u), 0u);  if (t) { goto L_00228D38; } }
L_00228C70:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 16u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00228D38; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_00228CA8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00228CB8; } }
L_00228CA8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 13u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00228CC0; } }
    c.budget -= 1;
L_00228CB8:
    st8((c.r[17].w[0] + 13u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00228CC0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[4], c.r[4].w[0] + 11008u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228CD4u); st8((c.r[17].w[0] + 45u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x00228CD4u) [[unlikely]] return; }
L_00228CD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00228D38; } }
    c.budget -= 1;
L_00228CE0:
    set32(c.r[4], 0u + 1u);
    st8((c.r[17].w[0] + 24u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 46u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00228D08; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228D04u); st8((c.r[17].w[0] + 46u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x00228D04u) [[unlikely]] return; }
L_00228D04:
    c.budget -= 1;
L_00228D08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228D10u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x00228D10u) [[unlikely]] return; }
L_00228D10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00228D38; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228D2Cu); st8((c.r[2].w[0] + 55u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_004A(c, 11u, depth + 1u); else { c.pc = 0x002282A0u; return; } if (c.pc != 0x00228D2Cu) [[unlikely]] return; }
L_00228D2C:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 97u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
L_00228D38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00228D50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 45u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002290F8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 17440u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00228000u < 16384u) { entry = entries_004A[(t - 0x00228000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00228D98:
    c.r[18].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 14u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << (c.r[16].w[0] & 31u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228DACu); c.r[4].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x00228DACu) [[unlikely]] return; }
L_00228DAC:
    c.r[5].d[0] = c.r[18].d[0] << 56;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228DC0u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0049(c, 388u, depth + 1u); else { c.pc = 0x002278D0u; return; } if (c.pc != 0x00228DC0u) [[unlikely]] return; }
L_00228DC0:
    st8((c.r[17].w[0] + 14u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = c.r[18].d[0] << 56;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 14u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00228DF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228DE0u); set32(c.r[5], 0u + 166u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x00228DE0u) [[unlikely]] return; }
L_00228DE0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228DF0u); set32(c.r[4], c.r[4].w[0] + 11008u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x00228DF0u) [[unlikely]] return; }
L_00228DF0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 14u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[4], c.r[4].w[0] + 11008u);
    set32(c.r[2], c.r[2].w[0] + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228E08u); st8((c.r[17].w[0] + 15u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AC(c, 62u, depth + 1u); else { c.pc = 0x003B0A00u; return; } if (c.pc != 0x00228E08u) [[unlikely]] return; }
L_00228E08:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[4], c.r[16].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + 9604u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002290F8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 196u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00228E70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228E44u);  if (depth < kMaxDepth) unit_0072(c, 57u, depth + 1u); else { c.pc = 0x002C8BA0u; return; } if (c.pc != 0x00228E44u) [[unlikely]] return; }
L_00228E44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00228E70; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 14u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00228E70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228E64u); set32(c.r[5], 0u + 171u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x00228E64u) [[unlikely]] return; }
L_00228E64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002290F8; } }
    c.budget -= 1;
L_00228E70:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 45u)));
    set32(c.r[2], 0u + 32u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 165u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 45u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 46u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228E94u); st8((c.r[17].w[0] + 43u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x00228E94u) [[unlikely]] return; }
L_00228E94:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228EA4u); set32(c.r[4], c.r[4].w[0] + 11008u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x00228EA4u) [[unlikely]] return; }
L_00228EA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002290F8; } }
    c.budget -= 1;
L_00228EB0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228EBCu); set32(c.r[4], c.r[4].w[0] + 11008u);  if (depth < kMaxDepth) unit_00AC(c, 64u, depth + 1u); else { c.pc = 0x003B0A80u; return; } if (c.pc != 0x00228EBCu) [[unlikely]] return; }
L_00228EBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002290F8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 45u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 45u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002290F8; } }
    c.budget -= 1;
L_00228ED8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 43u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 11008u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[17].w[0] + 43u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 14u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << (c.r[5].w[0] & 31u));
    c.r[3].d[0] = ~(c.r[3].d[0] | 0ull);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st32((c.r[17].w[0] + 48u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 43u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 14u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    c.r[5].d[0] = c.r[5].d[0] & 4ull;
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 2));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[3], c.r[5].w[0] << (c.r[3].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228F34u); st32((c.r[17].w[0] + 48u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B0B20u; return; } if (c.pc != 0x00228F34u) [[unlikely]] return; }
L_00228F34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002290F8; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 14u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[3], 0u + 3u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[5], c.r[6].w[0] << (c.r[5].w[0] & 31u));
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st32((c.r[17].w[0] + 48u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 14u)));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_00228FC0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00228FA8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[6].d[0];  if (t) { goto L_00228FA0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00228F88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002290F8; } }
L_00228F88:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 45u)));
    set32(c.r[3], c.r[3].w[0] + 3u);
    st8((c.r[17].w[0] + 45u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 10u), static_cast<std::uint16_t>(0u));  if (t) { goto L_002290F8; } }
    c.budget -= 1;
L_00228FA0:
    st32((c.r[17].w[0] + 48u), 0u);
    c.budget -= 2;
L_00228FA8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 45u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 45u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 10u), static_cast<std::uint16_t>(0u));  if (t) { goto L_002290F8; } }
    c.budget -= 1;
L_00228FC0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 45u)));
    set32(c.r[3], c.r[3].w[0] + 2u);
    st8((c.r[17].w[0] + 45u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 16u), static_cast<std::uint16_t>(0u));  if (t) { goto L_002290F8; } }
    c.budget -= 1;
L_00228FD8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 14u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_00228FF8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00228FF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 45u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002290F8; } }
L_00228FF8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 10u)));
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_00229020; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[17].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 10u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 16u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002290F8; } }
    c.budget -= 1;
L_00229020:
    st8((c.r[17].w[0] + 45u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], 0u + 18000u);
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 12u), static_cast<std::uint8_t>(0u));
    st16((c.r[17].w[0] + 8u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[17].w[0] + 10u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[17].w[0] + 16u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 14u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00229078; } }
    st8((c.r[17].w[0] + 44u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 4u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002290F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229070u);  if (depth < kMaxDepth) unit_004A(c, 90u, depth + 1u); else { c.pc = 0x00229290u; return; } if (c.pc != 0x00229070u) [[unlikely]] return; }
L_00229070:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002290F8; } }
L_00229078:
    st8((c.r[17].w[0] + 25u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229084u); st8((c.r[17].w[0] + 26u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_004A(c, 14u, depth + 1u); else { c.pc = 0x002282F0u; return; } if (c.pc != 0x00229084u) [[unlikely]] return; }
L_00229084:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002290F8; } }
    c.budget -= 1;
L_00229090:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[17].w[0] + 16u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002290F8; } }
    st8((c.r[17].w[0] + 13u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 45u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 14u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 14u)));
    set32(c.r[3], c.r[3].w[0] + 5u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 15u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002290F8; } }
    c.budget -= 1;
L_002290D0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 10u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[17].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002290F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002290F8u); st8((c.r[17].w[0] + 45u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_004A(c, 11u, depth + 1u); else { c.pc = 0x002282A0u; return; } if (c.pc != 0x002290F8u) [[unlikely]] return; }
L_002290F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00229110:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], 0u + 3u);
    st8((c.r[4].w[0] + 24u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 12u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_00229238; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00229210; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_00229170; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00229150; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00229260; } }
L_00229150:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 10u)));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] > 0; st16((c.r[4].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00229260; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00229260; } }
L_00229170:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00229180; } }
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_00229180:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 9604u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 33776ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002291B0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_002291B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[2].d[0] = ld16((c.r[1].w[0] + 9600u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);  if (t) { goto L_002291D0; } }
    c.r[2].d[0] = ld16((c.r[1].w[0] + 9616u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002291E0; } }
    c.budget -= 1;
L_002291D0:
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 18000u);
    st16((c.r[4].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_002291E0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002291F8; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00229260; } }
L_002291F8:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    set32(c.r[2], 0u + 20u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_00229260; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00229260; } }
L_00229210:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 10u)));
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.r[2].d[0] = c.r[2].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; st16((c.r[4].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00229260; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00229260; } }
    c.budget -= 1;
L_00229238:
    st8((c.r[4].w[0] + 44u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 18000u);
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 10u);
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 48u), 0u);
    st16((c.r[4].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 10;
L_00229260:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00230000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022926Cu); set32(c.r[4], c.r[4].w[0] - 25104u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x0022926Cu) [[unlikely]] return; }
L_0022926C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00230000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229278u); set32(c.r[4], c.r[4].w[0] - 18752u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x00229278u) [[unlikely]] return; }
L_00229278:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00229290:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002292A0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 39u, depth + 1u); else { c.pc = 0x003B03C0u; return; } if (c.pc != 0x002292A0u) [[unlikely]] return; }
L_002292A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002292B0u); st8((c.r[1].w[0] - 8832u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AC(c, 39u, depth + 1u); else { c.pc = 0x003B03C0u; return; } if (c.pc != 0x002292B0u) [[unlikely]] return; }
L_002292B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002292C0u); st8((c.r[1].w[0] - 8830u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AC(c, 39u, depth + 1u); else { c.pc = 0x003B03C0u; return; } if (c.pc != 0x002292C0u) [[unlikely]] return; }
L_002292C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002292D0u); st8((c.r[1].w[0] - 8829u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AC(c, 39u, depth + 1u); else { c.pc = 0x003B03C0u; return; } if (c.pc != 0x002292D0u) [[unlikely]] return; }
L_002292D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002292E0u); st8((c.r[1].w[0] - 8828u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AC(c, 39u, depth + 1u); else { c.pc = 0x003B03C0u; return; } if (c.pc != 0x002292E0u) [[unlikely]] return; }
L_002292E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);  if (t) { goto L_002292F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] - 8831u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00229300; } }
L_002292F0:
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 8831u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00229300:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00229310:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 24u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00229338; } }
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_00229338:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 12u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_00229490; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00229468; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002293B8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00229370; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002294C0; } }
    c.budget -= 1;
L_00229370:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 10u)));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] > 0; st16((c.r[16].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00229390; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00229390:
    c.r[4].d[0] = c.r[5].d[0] << 56;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BE0000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 5888u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002293A4u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);  if (depth < kMaxDepth) unit_00C1(c, 417u, depth + 1u); else { c.pc = 0x00407750u; return; } if (c.pc != 0x002293A4u) [[unlikely]] return; }
L_002293A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002293ACu);  if (depth < kMaxDepth) unit_00C1(c, 414u, depth + 1u); else { c.pc = 0x004076E0u; return; } if (c.pc != 0x002293ACu) [[unlikely]] return; }
L_002293AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002294C0; } }
    c.budget -= 1;
L_002293B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 9604u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[4].w[0] + 1u);  if (t) { goto L_00229400; } }
    set32(c.r[5], 0u + 167u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002293E8u); st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x002293E8u) [[unlikely]] return; }
L_002293E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002293F0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 309u, depth + 1u); else { c.pc = 0x004064A0u; return; } if (c.pc != 0x002293F0u) [[unlikely]] return; }
L_002293F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002293F8u);  if (depth < kMaxDepth) unit_004A(c, 105u, depth + 1u); else { c.pc = 0x002294F0u; return; } if (c.pc != 0x002293F8u) [[unlikely]] return; }
L_002293F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00229408; } }
L_00229400:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229408u);  if (depth < kMaxDepth) unit_00C1(c, 418u, depth + 1u); else { c.pc = 0x00407790u; return; } if (c.pc != 0x00229408u) [[unlikely]] return; }
L_00229408:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[2].d[0] = ld16((c.r[1].w[0] + 9600u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);  if (t) { goto L_00229428; } }
    c.r[2].d[0] = ld16((c.r[1].w[0] + 9616u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00229438; } }
    c.budget -= 1;
L_00229428:
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 18000u);
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00229438:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00229450; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002294C0; } }
L_00229450:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[2], 0u + 20u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_002294C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002294C0; } }
L_00229468:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 10u)));
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.r[2].d[0] = c.r[2].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; st16((c.r[16].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002294C0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002294C0; } }
    c.budget -= 1;
L_00229490:
    st8((c.r[16].w[0] + 44u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 18000u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 10u);
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 46u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 48u), 0u);
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 12;
L_002294C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002294CCu); set32(c.r[4], c.r[4].w[0] + 31264u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x002294CCu) [[unlikely]] return; }
L_002294CC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00230000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002294D8u); set32(c.r[4], c.r[4].w[0] - 25104u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x002294D8u) [[unlikely]] return; }
L_002294D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002294F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022950Cu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8832u)));  if (depth < kMaxDepth) unit_00AC(c, 42u, depth + 1u); else { c.pc = 0x003B0450u; return; } if (c.pc != 0x0022950Cu) [[unlikely]] return; }
L_0022950C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229518u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8830u)));  if (depth < kMaxDepth) unit_00AC(c, 43u, depth + 1u); else { c.pc = 0x003B0490u; return; } if (c.pc != 0x00229518u) [[unlikely]] return; }
L_00229518:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229524u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8831u)));  if (depth < kMaxDepth) unit_00AC(c, 40u, depth + 1u); else { c.pc = 0x003B03E0u; return; } if (c.pc != 0x00229524u) [[unlikely]] return; }
L_00229524:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8829u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229538u); c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8828u)));  if (depth < kMaxDepth) unit_00AC(c, 41u, depth + 1u); else { c.pc = 0x003B0430u; return; } if (c.pc != 0x00229538u) [[unlikely]] return; }
L_00229538:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[16].w[0] - 27856u);
    c.budget -= 4;
L_00229548:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229550u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_00AC(c, 39u, depth + 1u); else { c.pc = 0x003B03C0u; return; } if (c.pc != 0x00229550u) [[unlikely]] return; }
L_00229550:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002295B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229560u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 276u, depth + 1u); else { c.pc = 0x003C6520u; return; } if (c.pc != 0x00229560u) [[unlikely]] return; }
L_00229560:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    set32(c.r[6], 0u - 1u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[6].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00229580; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022957Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 273u, depth + 1u); else { c.pc = 0x003C6490u; return; } if (c.pc != 0x0022957Cu) [[unlikely]] return; }
L_0022957C:
    c.budget -= 1;
L_00229580:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022958Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B1(c, 276u, depth + 1u); else { c.pc = 0x003C6520u; return; } if (c.pc != 0x0022958Cu) [[unlikely]] return; }
L_0022958C:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    set32(c.r[6], 0u - 1u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[6].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00229620; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002295A8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B1(c, 273u, depth + 1u); else { c.pc = 0x003C6490u; return; } if (c.pc != 0x002295A8u) [[unlikely]] return; }
L_002295A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00229620; } }
L_002295B0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002295BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 276u, depth + 1u); else { c.pc = 0x003C6520u; return; } if (c.pc != 0x002295BCu) [[unlikely]] return; }
L_002295BC:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002295E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002295D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 269u, depth + 1u); else { c.pc = 0x003C6400u; return; } if (c.pc != 0x002295D8u) [[unlikely]] return; }
L_002295D8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002295E8u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00B1(c, 273u, depth + 1u); else { c.pc = 0x003C6490u; return; } if (c.pc != 0x002295E8u) [[unlikely]] return; }
L_002295E8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002295F4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B1(c, 276u, depth + 1u); else { c.pc = 0x003C6520u; return; } if (c.pc != 0x002295F4u) [[unlikely]] return; }
L_002295F4:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00229620; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229610u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B1(c, 269u, depth + 1u); else { c.pc = 0x003C6400u; return; } if (c.pc != 0x00229610u) [[unlikely]] return; }
L_00229610:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229620u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00B1(c, 273u, depth + 1u); else { c.pc = 0x003C6490u; return; } if (c.pc != 0x00229620u) [[unlikely]] return; }
L_00229620:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00229548u | kUnwind; return; } goto L_00229548; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229638u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_00AC(c, 39u, depth + 1u); else { c.pc = 0x003B03C0u; return; } if (c.pc != 0x00229638u) [[unlikely]] return; }
L_00229638:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00229650; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229648u);  if (depth < kMaxDepth) unit_0075(c, 6u, depth + 1u); else { c.pc = 0x002D4260u; return; } if (c.pc != 0x00229648u) [[unlikely]] return; }
L_00229648:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229650u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0075(c, 6u, depth + 1u); else { c.pc = 0x002D4260u; return; } if (c.pc != 0x00229650u) [[unlikely]] return; }
L_00229650:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00229670:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], 0u + 3u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 24u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 26u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002297F8; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002297A0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_00229718; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002296C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00229828; } }
L_002296C0:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] - 8912u);
    c.budget -= 4;
L_002296D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002296D8u); set32(c.r[4], c.r[17].w[0] + 24u);  if (depth < kMaxDepth) unit_00AC(c, 65u, depth + 1u); else { c.pc = 0x003B0AD0u; return; } if (c.pc != 0x002296D8u) [[unlikely]] return; }
L_002296D8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 40u);
    c.r[2].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002296D0u | kUnwind; return; } goto L_002296D0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 10u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00229708; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00229828; } }
    c.budget -= 1;
L_00229708:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 26u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 26u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00229828; } }
L_00229718:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[18], c.r[18].w[0] - 8912u);
    c.budget -= 4;
L_00229728:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229734u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_004A(c, 135u, depth + 1u); else { c.pc = 0x00229860u; return; } if (c.pc != 0x00229734u) [[unlikely]] return; }
L_00229734:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 40u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00229728u | kUnwind; return; } goto L_00229728; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[2].d[0] = ld16((c.r[1].w[0] + 9600u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);  if (t) { goto L_00229760; } }
    c.r[2].d[0] = ld16((c.r[1].w[0] + 9616u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00229770; } }
L_00229760:
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 18000u);
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00229770:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00229788; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00229828; } }
L_00229788:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[2], 0u + 20u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_00229828; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00229828; } }
L_002297A0:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[18], c.r[18].w[0] - 8912u);
    c.budget -= 4;
L_002297B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002297B8u); set32(c.r[4], c.r[18].w[0] + 24u);  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B0B20u; return; } if (c.pc != 0x002297B8u) [[unlikely]] return; }
L_002297B8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 40u);
    c.r[2].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002297B0u | kUnwind; return; } goto L_002297B0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 10u)));
    set32(c.r[2], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_002297E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00229828; } }
    c.budget -= 1;
L_002297E8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 26u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 26u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00229828; } }
L_002297F8:
    st8((c.r[16].w[0] + 25u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 18000u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 10u);
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 48u), 0u);
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229824u); st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_004A(c, 152u, depth + 1u); else { c.pc = 0x00229D50u; return; } if (c.pc != 0x00229824u) [[unlikely]] return; }
L_00229824:
    c.budget -= 1;
L_00229828:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00230000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229834u); set32(c.r[4], c.r[4].w[0] - 25104u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x00229834u) [[unlikely]] return; }
L_00229834:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00230000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229840u); set32(c.r[4], c.r[4].w[0] - 20336u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x00229840u) [[unlikely]] return; }
L_00229840:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00229860:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[6], c.r[6].w[0] + 9612u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 22u)));
    set32(c.r[5], c.r[7].w[0] << 4);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    c.budget -= 16;
    { const bool t = c.r[3].d[0] == 0ull; c.r[6].d[0] = ld16((c.r[5].w[0]));  if (t) { goto L_00229908; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 22u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002298E8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 8912u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002298DCu); set32(c.r[4], c.r[2].w[0] + 24u);  if (depth < kMaxDepth) unit_00AC(c, 64u, depth + 1u); else { c.pc = 0x003B0A80u; return; } if (c.pc != 0x002298DCu) [[unlikely]] return; }
L_002298DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00229D30; } }
    c.budget -= 1;
L_002298E8:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[3], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00229908; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 26u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 26u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00229D30; } }
L_00229908:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[17].d[0] = c.r[6].d[0] & 65535ull;
    c.r[2].d[0] = c.r[17].d[0] & 8192ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00229940; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[1].d[0] = c.r[2].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 8u);  if (t) { goto L_00229A90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00229A90; } }
    c.budget -= 1;
L_00229940:
    c.r[2].d[0] = c.r[17].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_00229958; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00229A90; } }
    c.budget -= 1;
L_00229958:
    c.r[2].d[0] = c.r[3].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] & 32ull;  if (t) { goto L_00229978; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00229978; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_00229A80; } }
L_00229978:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; c.r[4].d[0] = c.r[17].d[0] & 256ull;  if (t) { goto L_00229998; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00229998; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_00229A80; } }
    c.budget -= 1;
L_00229998:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; c.r[4].d[0] = c.r[17].d[0] & 64ull;  if (t) { goto L_002299B8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002299B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_00229A80; } }
    c.budget -= 1;
L_002299B8:
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; c.r[4].d[0] = c.r[17].d[0] & 512ull;  if (t) { goto L_002299D8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002299D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_00229A80; } }
    c.budget -= 1;
L_002299D8:
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; c.r[4].d[0] = c.r[17].d[0] & 128ull;  if (t) { goto L_002299F8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002299F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_00229A80; } }
    c.budget -= 1;
L_002299F8:
    set32(c.r[5], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; c.r[4].d[0] = c.r[17].d[0] & 16ull;  if (t) { goto L_00229A18; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00229A18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_00229A80; } }
    c.budget -= 1;
L_00229A18:
    set32(c.r[5], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; c.r[4].d[0] = c.r[17].d[0] & 8ull;  if (t) { goto L_00229A38; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00229A38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_00229A80; } }
    c.budget -= 1;
L_00229A38:
    set32(c.r[5], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; c.r[4].d[0] = c.r[17].d[0] & 4ull;  if (t) { goto L_00229A58; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00229A58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_00229A80; } }
    c.budget -= 1;
L_00229A58:
    c.r[4].d[0] = c.r[17].d[0] & 16384ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[4], 0u + 9u);  if (t) { goto L_00229A70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00229A80; } }
    c.budget -= 1;
L_00229A70:
    c.r[4].d[0] = c.r[17].d[0] & 32768ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[4], 0u + 10u);  if (t) { goto L_00229A80; } }
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 1;
L_00229A80:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_00229A90; } }
    set32(c.r[18], 0u + 2u);
    c.budget -= 1;
L_00229A90:
    c.r[2].d[0] = c.r[3].d[0] << 56;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[2].d[0] = c.r[18].d[0] << 56;  if (t) { goto L_00229B08; } }
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] + 8u);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00229AC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_00229AD0; } }
L_00229AC0:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00229AD0; } }
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00229AD0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - 8912u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229AF8u); set32(c.r[4], c.r[2].w[0] + 24u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x00229AF8u) [[unlikely]] return; }
L_00229AF8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229B04u); set32(c.r[5], 0u + 166u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x00229B04u) [[unlikely]] return; }
L_00229B04:
    c.budget -= 1;
L_00229B08:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 8912u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229B2Cu); set32(c.r[4], c.r[2].w[0] + 24u);  if (depth < kMaxDepth) unit_00AC(c, 62u, depth + 1u); else { c.pc = 0x003B0A00u; return; } if (c.pc != 0x00229B2Cu) [[unlikely]] return; }
L_00229B2C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[3].w[0] - 8912u);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] << (c.r[5].w[0] & 31u));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[5].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], c.r[4].w[0] << 3);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229B5Cu); set32(c.r[4], c.r[2].w[0] + 24u);  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B0950u; return; } if (c.pc != 0x00229B5Cu) [[unlikely]] return; }
L_00229B5C:
    st8((c.r[16].w[0] + 23u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(11ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_00229C50; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 17472u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00228000u < 16384u) { entry = entries_004A[(t - 0x00228000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00229B88:
    set32(c.r[3], 0u + 20u);
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[20], 0u + 9u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[3].w[0] + 15456u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[3].w[0] + 4u);  if (t) { goto L_00229C50; } }
    c.budget -= 1;
L_00229BC0:
    set32(c.r[2], 0u + 32u);
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229BD4u); set32(c.r[19], c.r[16].w[0] + 2u);  if (depth < kMaxDepth) unit_0049(c, 402u, depth + 1u); else { c.pc = 0x00227C70u; return; } if (c.pc != 0x00229BD4u) [[unlikely]] return; }
L_00229BD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], 0u + 2u);  if (t) { goto L_00229BE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00229C50; } }
    c.budget -= 1;
L_00229BE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], 0u - 1u);  if (t) { goto L_00229C50; } }
L_00229BF0:
    set32(c.r[3], 0u + 10u);
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[17].d[0] & 16384ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[20], 0u - 1u);  if (t) { goto L_00229C50; } }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229C10u); st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_006B(c, 129u, depth + 1u); else { c.pc = 0x002AD5D0u; return; } if (c.pc != 0x00229C10u) [[unlikely]] return; }
L_00229C10:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229C1Cu); set32(c.r[5], 0u + 165u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x00229C1Cu) [[unlikely]] return; }
L_00229C1C:
    set32(c.r[3], 0u + 32u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 22u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00229C50; } }
L_00229C28:
    set32(c.r[3], 0u + 10u);
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[17].d[0] & 32768ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[20], 0u - 1u);  if (t) { goto L_00229C50; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229C48u); set32(c.r[5], 0u + 165u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x00229C48u) [[unlikely]] return; }
L_00229C48:
    set32(c.r[3], 0u + 32u);
    st8((c.r[16].w[0] + 22u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00229C50:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] <= 0;  if (t) { goto L_00229D30; } }
    c.r[3].d[0] = c.r[17].d[0] & 12288ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));  if (t) { goto L_00229C88; } }
    c.r[3].d[0] = c.r[17].d[0] & 2048ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] - 1u);  if (t) { goto L_00229C78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00229C88; } }
L_00229C78:
    c.r[3].d[0] = c.r[17].d[0] & 1024ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] + 1u);  if (t) { goto L_00229C88; } }
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00229C88:
    c.r[3].d[0] = c.r[18].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00229CC0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0; c.r[1].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;  if (t) { goto L_00229CC0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = c.r[17].d[0] & 1020ull;  if (t) { goto L_00229CC0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00229CC0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00229CC0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    mmi::div(c, 0, c.r[3].w[0], c.r[20].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00229D30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229CF8u);  if (depth < kMaxDepth) unit_004A(c, 152u, depth + 1u); else { c.pc = 0x00229D50u; return; } if (c.pc != 0x00229CF8u) [[unlikely]] return; }
L_00229CF8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229D04u); set32(c.r[5], 0u + 166u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x00229D04u) [[unlikely]] return; }
L_00229D04:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[3], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00229D30; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00229D30; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229D2Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0049(c, 397u, depth + 1u); else { c.pc = 0x00227BA0u; return; } if (c.pc != 0x00229D2Cu) [[unlikely]] return; }
L_00229D2C:
    c.budget -= 1;
L_00229D30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00229D50:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[8], c.r[8].w[0] - 8624u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 8616u), static_cast<std::uint16_t>(0u));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 8912u);
    c.r[5].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 8;
L_00229D70:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 2u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 8u)));
    set32(c.r[4], c.r[4].w[0] << (c.r[7].w[0] & 31u));
    c.r[4].d[0] = c.r[4].d[0] << 48;
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st16((c.r[8].w[0] + 8u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[3].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;
    c.r[4].d[0] = ld16((c.r[6].w[0] + 4u));
    st16((c.r[5].w[0] + 28u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[6].w[0] + 6u));
    st16((c.r[5].w[0] + 30u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[6].w[0] + 8u));
    st16((c.r[5].w[0] + 32u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[6].w[0] + 10u));
    st16((c.r[5].w[0] + 34u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[6].w[0] + 12u));
    st16((c.r[5].w[0] + 36u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[6].w[0] + 14u));
    st16((c.r[5].w[0] + 38u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[6].w[0] + 16u));
    st16((c.r[5].w[0] + 40u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[6].w[0] + 18u));
    st16((c.r[5].w[0] + 42u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[6], c.r[6].w[0] + 40u);
    c.budget -= 28;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00229D70u | kUnwind; return; } goto L_00229D70; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00229DF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[6], c.r[6].w[0] - 8816u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8816u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] - 1840u);  if (t) { goto L_00229EE8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.r[4].d[0] = ld8((c.r[6].w[0] + 2u));
    c.f[2] = c.r[2].w[0];
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 52u)));
    set32(c.r[3], 0u + 10u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], c.r[4].w[0] + 50u);
    c.f[4] = c.r[2].w[0];
    set32(c.r[2], c.r[3].w[0] - c.r[5].w[0]);
    c.f[3] = c.r[2].w[0];
    c.f[4] = fp::cvt_s_w(c.f[4]);
    c.f[3] = fp::cvt_s_w(c.f[3]);
    fpu_div(c, 2u, c.f[3], c.f[2]);
    c.f[20] = fp::mul(c.f[4], c.f[2]);
    fpu_div(c, 20u, c.f[20], c.f[1]);
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 23;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00229E80; } }
    c.f[20] = c.f[0];
    c.budget -= 1;
L_00229E80:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00229E98; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[6].w[0] + 52u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00229E98:
    c.r[4].d[0] = ld8((c.r[6].w[0] + 2u));
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], 0u + 5u);
    if (c.r[4].d[0] == 0) c.r[3].d[0] = c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229EB0u); c.r[17].d[0] = c.r[3].d[0] & 255ull;  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00229EB0u) [[unlikely]] return; }
L_00229EB0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] - 4056u)));
    c.f[12] = c.f[20];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229ECCu); set32(c.r[4], c.r[2].w[0] + 4560u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00229ECCu) [[unlikely]] return; }
L_00229ECC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] - 4056u)));
    c.f[12] = c.f[20];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229EE8u); set32(c.r[4], c.r[2].w[0] + 4560u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00229EE8u) [[unlikely]] return; }
L_00229EE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00229F00:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    set32(c.r[18], c.r[18].w[0] - 8816u);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 8806u)));
    c.budget -= 19;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] - 1840u);  if (t) { goto L_00229F68; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[19], 0u + 1u);
    c.f[23] = c.r[2].w[0];
    c.f[24] = c.f[23];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.f[22] = c.f[23];  if (t) { goto L_00229FA0; } }
L_00229F68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 10u)));
    set32(c.r[3], 0u + 10u);
    c.r[19].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[23] = c.r[2].w[0];
    c.f[24] = c.f[23];
    set32(c.r[2], c.r[3].w[0] - c.r[4].w[0]);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 22u, c.f[1], c.f[0]);
    c.budget -= 14;
L_00229FA0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_00229FC0; } }
    set32(c.r[16], 0u + 1u);
    c.f[23] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[21] = c.f[23];  if (t) { goto L_00229FE8; } }
    c.budget -= 1;
L_00229FC0:
    set32(c.r[2], 0u + 10u);
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    c.f[1] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 21u, c.f[1], c.f[0]);
    c.budget -= 10;
L_00229FE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229FF0u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00229FF0u) [[unlikely]] return; }
L_00229FF0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 15u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.f[12] = 0u;
    set32(c.r[2], c.r[2].w[0] + 15408u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[13] = ld32((c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A014u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022A014u) [[unlikely]] return; }
L_0022A014:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A024u); set32(c.r[4], c.r[4].w[0] + 11008u);  if (depth < kMaxDepth) unit_00AC(c, 67u, depth + 1u); else { c.pc = 0x003B0B80u; return; } if (c.pc != 0x0022A024u) [[unlikely]] return; }
L_0022A024:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0022AD38; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 13u)));
    c.f[20] = 0u;
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);  if (t) { goto L_0022A050; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A048u); set32(c.r[4], c.r[4].w[0] + 11008u);  if (depth < kMaxDepth) unit_00AC(c, 60u, depth + 1u); else { c.pc = 0x003B0940u; return; } if (c.pc != 0x0022A048u) [[unlikely]] return; }
L_0022A048:
    c.f[20] = c.f[0];
    c.budget -= 2;
L_0022A050:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A058u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0022A058u) [[unlikely]] return; }
L_0022A058:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42DC0000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A06Cu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022A06Cu) [[unlikely]] return; }
L_0022A06C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_0022A0A0; } }
    set32(c.r[5], 0u + 3u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[1].w[0] - 4056u)));
    c.r[19].d[0] = 0ull | 61480ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A098u); set32(c.r[4], c.r[2].w[0] + 240u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022A098u) [[unlikely]] return; }
L_0022A098:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022A0C0; } }
L_0022A0A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    set32(c.r[5], 0u + 3u);
    set32(c.r[4], ld32((c.r[1].w[0] - 4056u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A0BCu); c.r[19].d[0] = 0ull | 61480ull;  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022A0BCu) [[unlikely]] return; }
L_0022A0BC:
    c.budget -= 1;
L_0022A0C0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 4u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0022A9D0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0022A620; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_0022A390; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0022A100; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022A100; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022A390; } }
L_0022A100:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1F00000u);
    c.f[12] = 0u;
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A114u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022A114u) [[unlikely]] return; }
L_0022A114:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A11Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0022A11Cu) [[unlikely]] return; }
L_0022A11C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 14u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0022A138; } }
    c.f[12] = 0u;
    c.f[13] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A138u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022A138u) [[unlikely]] return; }
L_0022A138:
    set32(c.r[19], c.r[17].w[0] + c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A150u); set32(c.r[4], c.r[2].w[0] + 480u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022A150u) [[unlikely]] return; }
L_0022A150:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A158u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x0022A158u) [[unlikely]] return; }
L_0022A158:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 13u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_0022A180; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A178u); set32(c.r[4], c.r[2].w[0] + 4800u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022A178u) [[unlikely]] return; }
L_0022A178:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022A1D0; } }
L_0022A180:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 14u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0022A1B8; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0022A1B8; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A1B0u); set32(c.r[4], c.r[2].w[0] + 5040u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022A1B0u) [[unlikely]] return; }
L_0022A1B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022A1D0; } }
L_0022A1B8:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A1CCu); set32(c.r[4], c.r[2].w[0] + 4800u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022A1CCu) [[unlikely]] return; }
L_0022A1CC:
    c.budget -= 1;
L_0022A1D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1F00000u);
    c.f[12] = 0u;
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A1E4u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022A1E4u) [[unlikely]] return; }
L_0022A1E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A1ECu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0022A1ECu) [[unlikely]] return; }
L_0022A1EC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 14u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0022A210; } }
    c.f[12] = 0u;
    c.f[13] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A20Cu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022A20Cu) [[unlikely]] return; }
L_0022A20C:
    c.budget -= 1;
L_0022A210:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A224u); set32(c.r[4], c.r[2].w[0] + 720u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022A224u) [[unlikely]] return; }
L_0022A224:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A22Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x0022A22Cu) [[unlikely]] return; }
L_0022A22C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 13u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_0022A258; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A24Cu); set32(c.r[4], c.r[2].w[0] + 4800u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022A24Cu) [[unlikely]] return; }
L_0022A24C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022A2A8; } }
    c.budget -= 1;
L_0022A258:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 14u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_0022A290; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0022A290; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A288u); set32(c.r[4], c.r[2].w[0] + 5040u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022A288u) [[unlikely]] return; }
L_0022A288:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022A2A8; } }
L_0022A290:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A2A4u); set32(c.r[4], c.r[2].w[0] + 4800u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022A2A4u) [[unlikely]] return; }
L_0022A2A4:
    c.budget -= 1;
L_0022A2A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1F00000u);
    c.f[12] = 0u;
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A2BCu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022A2BCu) [[unlikely]] return; }
L_0022A2BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A2C4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0022A2C4u) [[unlikely]] return; }
L_0022A2C4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 14u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0022A2E8; } }
    c.f[12] = 0u;
    c.f[13] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A2E4u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022A2E4u) [[unlikely]] return; }
L_0022A2E4:
    c.budget -= 1;
L_0022A2E8:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A2FCu); set32(c.r[4], c.r[2].w[0] + 960u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022A2FCu) [[unlikely]] return; }
L_0022A2FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A304u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x0022A304u) [[unlikely]] return; }
L_0022A304:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 13u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_0022A330; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A324u); set32(c.r[4], c.r[2].w[0] + 4800u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022A324u) [[unlikely]] return; }
L_0022A324:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022A388; } }
    c.budget -= 1;
L_0022A330:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 14u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0022A370; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0022A370; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A364u); set32(c.r[4], c.r[2].w[0] + 5040u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022A364u) [[unlikely]] return; }
L_0022A364:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022A388; } }
    c.budget -= 1;
L_0022A370:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A384u); set32(c.r[4], c.r[2].w[0] + 4800u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022A384u) [[unlikely]] return; }
L_0022A384:
    c.budget -= 1;
L_0022A388:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], 0u + 3u);  if (t) { goto L_0022AD38; } }
L_0022A390:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1F00000u);
    c.f[12] = 0u;
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A3A4u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022A3A4u) [[unlikely]] return; }
L_0022A3A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A3ACu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0022A3ACu) [[unlikely]] return; }
L_0022A3AC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 14u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0022A3C8; } }
    c.f[12] = 0u;
    c.f[13] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A3C8u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022A3C8u) [[unlikely]] return; }
L_0022A3C8:
    set32(c.r[19], c.r[17].w[0] + c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A3E0u); set32(c.r[4], c.r[2].w[0] + 480u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022A3E0u) [[unlikely]] return; }
L_0022A3E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A3E8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x0022A3E8u) [[unlikely]] return; }
L_0022A3E8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 13u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_0022A410; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A408u); set32(c.r[4], c.r[2].w[0] + 4800u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022A408u) [[unlikely]] return; }
L_0022A408:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022A460; } }
L_0022A410:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 14u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0022A448; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0022A448; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A440u); set32(c.r[4], c.r[2].w[0] + 5040u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022A440u) [[unlikely]] return; }
L_0022A440:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022A460; } }
L_0022A448:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A45Cu); set32(c.r[4], c.r[2].w[0] + 4800u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022A45Cu) [[unlikely]] return; }
L_0022A45C:
    c.budget -= 1;
L_0022A460:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1F00000u);
    c.f[12] = 0u;
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A474u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022A474u) [[unlikely]] return; }
L_0022A474:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A47Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0022A47Cu) [[unlikely]] return; }
L_0022A47C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 14u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0022A4A0; } }
    c.f[12] = 0u;
    c.f[13] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A49Cu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022A49Cu) [[unlikely]] return; }
L_0022A49C:
    c.budget -= 1;
L_0022A4A0:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A4B4u); set32(c.r[4], c.r[2].w[0] + 720u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022A4B4u) [[unlikely]] return; }
L_0022A4B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A4BCu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x0022A4BCu) [[unlikely]] return; }
L_0022A4BC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 13u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_0022A4E8; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A4DCu); set32(c.r[4], c.r[2].w[0] + 4800u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022A4DCu) [[unlikely]] return; }
L_0022A4DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022A538; } }
    c.budget -= 1;
L_0022A4E8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 14u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_0022A520; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0022A520; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A518u); set32(c.r[4], c.r[2].w[0] + 5040u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022A518u) [[unlikely]] return; }
L_0022A518:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022A538; } }
L_0022A520:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A534u); set32(c.r[4], c.r[2].w[0] + 4800u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022A534u) [[unlikely]] return; }
L_0022A534:
    c.budget -= 1;
L_0022A538:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1F00000u);
    c.f[12] = 0u;
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A54Cu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022A54Cu) [[unlikely]] return; }
L_0022A54C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A554u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0022A554u) [[unlikely]] return; }
L_0022A554:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 14u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0022A578; } }
    c.f[12] = 0u;
    c.f[13] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A574u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022A574u) [[unlikely]] return; }
L_0022A574:
    c.budget -= 1;
L_0022A578:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A58Cu); set32(c.r[4], c.r[2].w[0] + 1200u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022A58Cu) [[unlikely]] return; }
L_0022A58C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A594u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x0022A594u) [[unlikely]] return; }
L_0022A594:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 13u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_0022A5C0; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A5B4u); set32(c.r[4], c.r[2].w[0] + 4800u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022A5B4u) [[unlikely]] return; }
L_0022A5B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022A618; } }
    c.budget -= 1;
L_0022A5C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 14u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0022A600; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0022A600; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A5F4u); set32(c.r[4], c.r[2].w[0] + 5040u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022A5F4u) [[unlikely]] return; }
L_0022A5F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022A618; } }
    c.budget -= 1;
L_0022A600:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A614u); set32(c.r[4], c.r[2].w[0] + 4800u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022A614u) [[unlikely]] return; }
L_0022A614:
    c.budget -= 1;
L_0022A618:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], 0u + 3u);  if (t) { goto L_0022AD38; } }
L_0022A620:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1F00000u);
    c.f[12] = 0u;
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A634u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022A634u) [[unlikely]] return; }
L_0022A634:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A63Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0022A63Cu) [[unlikely]] return; }
L_0022A63C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 14u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0022A658; } }
    c.f[12] = 0u;
    c.f[13] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A658u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022A658u) [[unlikely]] return; }
L_0022A658:
    set32(c.r[19], c.r[17].w[0] + c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A670u); set32(c.r[4], c.r[2].w[0] + 1440u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022A670u) [[unlikely]] return; }
L_0022A670:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A678u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x0022A678u) [[unlikely]] return; }
L_0022A678:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 13u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_0022A6A0; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A698u); set32(c.r[4], c.r[2].w[0] + 4800u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022A698u) [[unlikely]] return; }
L_0022A698:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022A6F0; } }
L_0022A6A0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 14u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0022A6D8; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0022A6D8; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A6D0u); set32(c.r[4], c.r[2].w[0] + 5040u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022A6D0u) [[unlikely]] return; }
L_0022A6D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022A6F0; } }
L_0022A6D8:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A6ECu); set32(c.r[4], c.r[2].w[0] + 4800u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022A6ECu) [[unlikely]] return; }
L_0022A6EC:
    c.budget -= 1;
L_0022A6F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1F00000u);
    c.f[12] = 0u;
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A704u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022A704u) [[unlikely]] return; }
L_0022A704:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A70Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0022A70Cu) [[unlikely]] return; }
L_0022A70C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 14u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0022A730; } }
    c.f[12] = 0u;
    c.f[13] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A72Cu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022A72Cu) [[unlikely]] return; }
L_0022A72C:
    c.budget -= 1;
L_0022A730:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A744u); set32(c.r[4], c.r[2].w[0] + 1680u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022A744u) [[unlikely]] return; }
L_0022A744:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A74Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x0022A74Cu) [[unlikely]] return; }
L_0022A74C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 13u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_0022A778; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A76Cu); set32(c.r[4], c.r[2].w[0] + 4800u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022A76Cu) [[unlikely]] return; }
L_0022A76C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022A7C8; } }
    c.budget -= 1;
L_0022A778:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 14u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_0022A7B0; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0022A7B0; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A7A8u); set32(c.r[4], c.r[2].w[0] + 5040u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022A7A8u) [[unlikely]] return; }
L_0022A7A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022A7C8; } }
L_0022A7B0:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A7C4u); set32(c.r[4], c.r[2].w[0] + 4800u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022A7C4u) [[unlikely]] return; }
L_0022A7C4:
    c.budget -= 1;
L_0022A7C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1F00000u);
    c.f[12] = 0u;
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A7DCu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022A7DCu) [[unlikely]] return; }
L_0022A7DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A7E4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0022A7E4u) [[unlikely]] return; }
L_0022A7E4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 14u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0022A808; } }
    c.f[12] = 0u;
    c.f[13] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A804u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022A804u) [[unlikely]] return; }
L_0022A804:
    c.budget -= 1;
L_0022A808:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A81Cu); set32(c.r[4], c.r[2].w[0] + 720u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022A81Cu) [[unlikely]] return; }
L_0022A81C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A824u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x0022A824u) [[unlikely]] return; }
L_0022A824:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 13u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_0022A850; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A844u); set32(c.r[4], c.r[2].w[0] + 4800u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022A844u) [[unlikely]] return; }
L_0022A844:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022A8A8; } }
    c.budget -= 1;
L_0022A850:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 14u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0022A890; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0022A890; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A884u); set32(c.r[4], c.r[2].w[0] + 5040u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022A884u) [[unlikely]] return; }
L_0022A884:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022A8A8; } }
    c.budget -= 1;
L_0022A890:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A8A4u); set32(c.r[4], c.r[2].w[0] + 4800u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022A8A4u) [[unlikely]] return; }
L_0022A8A4:
    c.budget -= 1;
L_0022A8A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1F00000u);
    c.f[12] = 0u;
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A8BCu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022A8BCu) [[unlikely]] return; }
L_0022A8BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A8C4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0022A8C4u) [[unlikely]] return; }
L_0022A8C4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 14u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0022A8E8; } }
    c.f[12] = 0u;
    c.f[13] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A8E4u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022A8E4u) [[unlikely]] return; }
L_0022A8E4:
    c.budget -= 1;
L_0022A8E8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 196u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0022A930; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A904u);  if (depth < kMaxDepth) unit_0072(c, 57u, depth + 1u); else { c.pc = 0x002C8BA0u; return; } if (c.pc != 0x0022A904u) [[unlikely]] return; }
L_0022A904:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0022A930; } }
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    set32(c.r[5], 0u + 3u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A928u); set32(c.r[4], c.r[3].w[0] + 1920u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0022A928u) [[unlikely]] return; }
L_0022A928:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022A948; } }
L_0022A930:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A944u); set32(c.r[4], c.r[2].w[0] + 1920u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022A944u) [[unlikely]] return; }
L_0022A944:
    c.budget -= 1;
L_0022A948:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A950u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x0022A950u) [[unlikely]] return; }
L_0022A950:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 13u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_0022A978; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A970u); set32(c.r[4], c.r[2].w[0] + 4800u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022A970u) [[unlikely]] return; }
L_0022A970:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022A9C8; } }
L_0022A978:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 14u)));
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0022A9B0; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0022A9B0; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A9A8u); set32(c.r[4], c.r[2].w[0] + 5040u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022A9A8u) [[unlikely]] return; }
L_0022A9A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022A9C8; } }
L_0022A9B0:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A9C4u); set32(c.r[4], c.r[2].w[0] + 4800u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022A9C4u) [[unlikely]] return; }
L_0022A9C4:
    c.budget -= 1;
L_0022A9C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], 0u + 4u);  if (t) { goto L_0022AD38; } }
L_0022A9D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1F00000u);
    c.f[12] = 0u;
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A9E4u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022A9E4u) [[unlikely]] return; }
L_0022A9E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A9ECu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0022A9ECu) [[unlikely]] return; }
L_0022A9EC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 14u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0022AA08; } }
    c.f[12] = 0u;
    c.f[13] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AA08u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022AA08u) [[unlikely]] return; }
L_0022AA08:
    set32(c.r[19], c.r[17].w[0] + c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AA20u); set32(c.r[4], c.r[2].w[0] + 1440u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022AA20u) [[unlikely]] return; }
L_0022AA20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AA28u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x0022AA28u) [[unlikely]] return; }
L_0022AA28:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 13u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_0022AA50; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AA48u); set32(c.r[4], c.r[2].w[0] + 4800u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022AA48u) [[unlikely]] return; }
L_0022AA48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022AAA0; } }
L_0022AA50:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 14u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0022AA88; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0022AA88; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AA80u); set32(c.r[4], c.r[2].w[0] + 5040u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022AA80u) [[unlikely]] return; }
L_0022AA80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022AAA0; } }
L_0022AA88:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AA9Cu); set32(c.r[4], c.r[2].w[0] + 4800u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022AA9Cu) [[unlikely]] return; }
L_0022AA9C:
    c.budget -= 1;
L_0022AAA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1F00000u);
    c.f[12] = 0u;
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AAB4u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022AAB4u) [[unlikely]] return; }
L_0022AAB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AABCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0022AABCu) [[unlikely]] return; }
L_0022AABC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 14u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0022AAE0; } }
    c.f[12] = 0u;
    c.f[13] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AADCu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022AADCu) [[unlikely]] return; }
L_0022AADC:
    c.budget -= 1;
L_0022AAE0:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AAF4u); set32(c.r[4], c.r[2].w[0] + 1680u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022AAF4u) [[unlikely]] return; }
L_0022AAF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AAFCu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x0022AAFCu) [[unlikely]] return; }
L_0022AAFC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 13u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_0022AB28; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AB1Cu); set32(c.r[4], c.r[2].w[0] + 4800u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022AB1Cu) [[unlikely]] return; }
L_0022AB1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022AB78; } }
    c.budget -= 1;
L_0022AB28:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 14u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_0022AB60; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0022AB60; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AB58u); set32(c.r[4], c.r[2].w[0] + 5040u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022AB58u) [[unlikely]] return; }
L_0022AB58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022AB78; } }
L_0022AB60:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AB74u); set32(c.r[4], c.r[2].w[0] + 4800u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022AB74u) [[unlikely]] return; }
L_0022AB74:
    c.budget -= 1;
L_0022AB78:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1F00000u);
    c.f[12] = 0u;
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AB8Cu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022AB8Cu) [[unlikely]] return; }
L_0022AB8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AB94u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0022AB94u) [[unlikely]] return; }
L_0022AB94:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 14u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0022ABB8; } }
    c.f[12] = 0u;
    c.f[13] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022ABB4u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022ABB4u) [[unlikely]] return; }
L_0022ABB4:
    c.budget -= 1;
L_0022ABB8:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022ABCCu); set32(c.r[4], c.r[2].w[0] + 720u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022ABCCu) [[unlikely]] return; }
L_0022ABCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022ABD4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x0022ABD4u) [[unlikely]] return; }
L_0022ABD4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 13u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_0022AC00; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022ABF4u); set32(c.r[4], c.r[2].w[0] + 4800u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022ABF4u) [[unlikely]] return; }
L_0022ABF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022AC58; } }
    c.budget -= 1;
L_0022AC00:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 14u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0022AC40; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0022AC40; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AC34u); set32(c.r[4], c.r[2].w[0] + 5040u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022AC34u) [[unlikely]] return; }
L_0022AC34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022AC58; } }
    c.budget -= 1;
L_0022AC40:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AC54u); set32(c.r[4], c.r[2].w[0] + 4800u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022AC54u) [[unlikely]] return; }
L_0022AC54:
    c.budget -= 1;
L_0022AC58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1F00000u);
    c.f[12] = 0u;
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AC6Cu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022AC6Cu) [[unlikely]] return; }
L_0022AC6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AC74u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0022AC74u) [[unlikely]] return; }
L_0022AC74:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 14u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0022AC98; } }
    c.f[12] = 0u;
    c.f[13] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AC94u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022AC94u) [[unlikely]] return; }
L_0022AC94:
    c.budget -= 1;
L_0022AC98:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022ACACu); set32(c.r[4], c.r[2].w[0] + 1920u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022ACACu) [[unlikely]] return; }
L_0022ACAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022ACB4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x0022ACB4u) [[unlikely]] return; }
L_0022ACB4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 13u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_0022ACE0; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022ACD4u); set32(c.r[4], c.r[2].w[0] + 4800u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022ACD4u) [[unlikely]] return; }
L_0022ACD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022AD30; } }
    c.budget -= 1;
L_0022ACE0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 14u)));
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0022AD18; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0022AD18; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AD10u); set32(c.r[4], c.r[2].w[0] + 5040u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022AD10u) [[unlikely]] return; }
L_0022AD10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022AD30; } }
L_0022AD18:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AD2Cu); set32(c.r[4], c.r[2].w[0] + 4800u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022AD2Cu) [[unlikely]] return; }
L_0022AD2C:
    c.budget -= 1;
L_0022AD30:
    set32(c.r[20], 0u + 4u);
    c.budget -= 2;
L_0022AD38:
    c.r[4].d[0] = 0ull + 0ull;
    c.f[12] = c.f[24];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AD48u); c.f[13] = c.f[22];  if (depth < kMaxDepth) unit_004A(c, 300u, depth + 1u); else { c.pc = 0x0022AFA0u; return; } if (c.pc != 0x0022AD48u) [[unlikely]] return; }
L_0022AD48:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 13u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_0022AF60; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 48u)));
    c.r[4].d[0] = c.r[20].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[4], c.r[5].w[0] << (c.r[4].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022AF60; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);  if (t) { goto L_0022AF50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AD84u); set32(c.r[4], c.r[4].w[0] + 11008u);  if (depth < kMaxDepth) unit_00AC(c, 60u, depth + 1u); else { c.pc = 0x003B0940u; return; } if (c.pc != 0x0022AD84u) [[unlikely]] return; }
L_0022AD84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AD8Cu); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0022AD8Cu) [[unlikely]] return; }
L_0022AD8C:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2700000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022ADA0u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022ADA0u) [[unlikely]] return; }
L_0022ADA0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[1].w[0] - 4056u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022ADBCu); set32(c.r[4], c.r[2].w[0] + 2160u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022ADBCu) [[unlikely]] return; }
L_0022ADBC:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1F00000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022ADD0u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022ADD0u) [[unlikely]] return; }
L_0022ADD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022ADD8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0022ADD8u) [[unlikely]] return; }
L_0022ADD8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 14u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0022ADF8; } }
    c.f[12] = 0u;
    c.f[13] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022ADF4u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022ADF4u) [[unlikely]] return; }
L_0022ADF4:
    c.budget -= 1;
L_0022ADF8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    set32(c.r[5], 0u + 3u);
    set32(c.r[2], ld32((c.r[1].w[0] - 4056u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AE14u); set32(c.r[4], c.r[2].w[0] + 2400u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022AE14u) [[unlikely]] return; }
L_0022AE14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AE1Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x0022AE1Cu) [[unlikely]] return; }
L_0022AE1C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 14u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0022AE60; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_0022AE60; } }
    set32(c.r[5], 0u + 3u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[1].w[0] - 4056u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AE54u); set32(c.r[4], c.r[2].w[0] + 5040u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022AE54u) [[unlikely]] return; }
L_0022AE54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022AE80; } }
    c.budget -= 1;
L_0022AE60:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    set32(c.r[5], 0u + 3u);
    set32(c.r[2], ld32((c.r[1].w[0] - 4056u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AE7Cu); set32(c.r[4], c.r[2].w[0] + 4800u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022AE7Cu) [[unlikely]] return; }
L_0022AE7C:
    c.budget -= 1;
L_0022AE80:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    set32(c.r[5], 0u + 3u);
    set32(c.r[2], ld32((c.r[1].w[0] - 4056u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AE9Cu); set32(c.r[4], c.r[2].w[0] + 4800u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022AE9Cu) [[unlikely]] return; }
L_0022AE9C:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1F00000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AEB0u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022AEB0u) [[unlikely]] return; }
L_0022AEB0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 14u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0022AED0; } }
    c.f[12] = 0u;
    c.f[13] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AED0u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022AED0u) [[unlikely]] return; }
L_0022AED0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    set32(c.r[5], 0u + 3u);
    set32(c.r[2], ld32((c.r[1].w[0] - 4056u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AEECu); set32(c.r[4], c.r[2].w[0] + 2640u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022AEECu) [[unlikely]] return; }
L_0022AEEC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 14u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_0022AF30; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_0022AF30; } }
    set32(c.r[5], 0u + 3u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] - 4056u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AF24u); set32(c.r[4], c.r[2].w[0] + 5040u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022AF24u) [[unlikely]] return; }
L_0022AF24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022AF50; } }
    c.budget -= 1;
L_0022AF30:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    set32(c.r[5], 0u + 3u);
    set32(c.r[2], ld32((c.r[1].w[0] - 4056u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AF4Cu); set32(c.r[4], c.r[2].w[0] + 4800u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022AF4Cu) [[unlikely]] return; }
L_0022AF4C:
    c.budget -= 1;
L_0022AF50:
    set32(c.r[4], 0u + 1u);
    c.f[12] = c.f[23];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AF60u); c.f[13] = c.f[21];  if (depth < kMaxDepth) unit_004A(c, 300u, depth + 1u); else { c.pc = 0x0022AFA0u; return; } if (c.pc != 0x0022AF60u) [[unlikely]] return; }
L_0022AF60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0022AFA0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[17], c.r[17].w[0] - 1840u);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[21] = c.f[12];
    c.budget -= 13;
    { const bool t = c.r[18].d[0] != 0ull; c.f[20] = c.f[13];  if (t) { goto L_0022AFF8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_0022AFF0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0022AFF8; } }
L_0022AFF0:
    set32(c.r[18], c.r[18].w[0] + 2u);
    c.budget -= 2;
L_0022AFF8:
    set32(c.r[2], c.r[28].w[0] - 31072u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B008u); c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0022B008u) [[unlikely]] return; }
L_0022B008:
    set32(c.r[2], c.r[28].w[0] - 31068u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.f[12] = 0u;
    c.f[14] = c.f[12];
    c.f[0] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B02Cu); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022B02Cu) [[unlikely]] return; }
L_0022B02C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.f[13] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B040u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0022B040u) [[unlikely]] return; }
L_0022B040:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[4].d[0] = c.r[16].d[0] << 56;
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[2], ld32((c.r[1].w[0] - 4056u)));
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[5], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.f[12] = c.f[21];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B070u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0022B070u) [[unlikely]] return; }
L_0022B070:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0022B090:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B0A4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0022B0A4u) [[unlikely]] return; }
L_0022B0A4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BE0000u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[2], ld32((c.r[1].w[0] - 5892u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B0BCu); set32(c.r[4], c.r[2].w[0] + 240u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022B0BCu) [[unlikely]] return; }
L_0022B0BC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BE0000u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[4], ld32((c.r[1].w[0] - 5892u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B0D0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022B0D0u) [[unlikely]] return; }
L_0022B0D0:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[16].w[0] - 8912u);
    c.budget -= 4;
L_0022B0E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B0E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004A(c, 311u, depth + 1u); else { c.pc = 0x0022B110u; return; } if (c.pc != 0x0022B0E8u) [[unlikely]] return; }
L_0022B0E8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 40u);
    c.r[3].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022B0E0u | kUnwind; return; } goto L_0022B0E0; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0022B110:
    set32(c.r[29], c.r[29].w[0] - 208u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3660000u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x439E0000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[0] = c.r[2].w[0];
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    set32(c.r[6], 0u + 2u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[7], c.r[7].w[0] + 11024u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[1] = c.r[3].w[0];
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[16], c.r[29].w[0] + 192u);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    set32(c.r[20], c.r[20].w[0] - 1840u);
    set32(c.r[2], c.r[8].w[0] << 3);
    st32((c.r[29].w[0] + 144u), c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    st32((c.r[29].w[0] + 180u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 184u), c.r[5].w[0]);
    set32(c.r[19], c.r[7].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 188u), c.r[5].w[0]);
    st32((c.r[16].w[0]), c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.f[2] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.budget -= 39;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B1ACu); c.f[20] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0022B1ACu) [[unlikely]] return; }
L_0022B1AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42EC0000u);
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B1C0u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022B1C0u) [[unlikely]] return; }
L_0022B1C0:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] + 15456u);
    set32(c.r[22], c.r[29].w[0] + 196u);
    c.budget -= 4;
L_0022B1D0:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[20].w[0] + c.r[1].w[0]);
    set32(c.r[5], c.r[5].w[0] + 15520u);
    set32(c.r[4], ld32((c.r[1].w[0] - 4052u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    set32(c.r[6], c.r[2].w[0] << 1);
    set32(c.r[7], c.r[21].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = ld16((c.r[7].w[0] + 4u));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[5], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[22].w[0]), c.r[4].w[0]);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    c.r[2].d[0] = ld16((c.r[7].w[0] + 4u));
    c.budget -= 23;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0022B230; } }
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_0022B230:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B238u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0022B238u) [[unlikely]] return; }
L_0022B238:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { goto L_0022B278; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 1u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 8912u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B268u); set32(c.r[4], c.r[2].w[0] + 24u);  if (depth < kMaxDepth) unit_00AC(c, 60u, depth + 1u); else { c.pc = 0x003B0940u; return; } if (c.pc != 0x0022B268u) [[unlikely]] return; }
L_0022B268:
    c.f[12] = 0u;
    c.f[13] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B278u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022B278u) [[unlikely]] return; }
L_0022B278:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B288u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0022B288u) [[unlikely]] return; }
L_0022B288:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B290u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x0022B290u) [[unlikely]] return; }
L_0022B290:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2000000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B2A4u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022B2A4u) [[unlikely]] return; }
L_0022B2A4:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022B1D0u | kUnwind; return; } goto L_0022B1D0; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 2u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], c.r[4].w[0] + 15529u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[20].w[0] + c.r[1].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 4052u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[4], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[22].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 2u)));
    c.budget -= 19;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0022B308; } }
    st32((c.r[16].w[0]), 0u);
    c.budget -= 2;
L_0022B308:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B31Cu); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022B31Cu) [[unlikely]] return; }
L_0022B31C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0022B360; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 1u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 8912u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B350u); set32(c.r[4], c.r[2].w[0] + 24u);  if (depth < kMaxDepth) unit_00AC(c, 60u, depth + 1u); else { c.pc = 0x003B0940u; return; } if (c.pc != 0x0022B350u) [[unlikely]] return; }
L_0022B350:
    c.f[12] = 0u;
    c.f[13] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B360u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022B360u) [[unlikely]] return; }
L_0022B360:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B370u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0022B370u) [[unlikely]] return; }
L_0022B370:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 1u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x439E0000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B390u); c.f[20] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0022B390u) [[unlikely]] return; }
L_0022B390:
    c.f[13] = 0u;
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B3A0u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022B3A0u) [[unlikely]] return; }
L_0022B3A0:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] + 15504u);
    c.budget -= 4;
L_0022B3B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B3B8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0022B3B8u) [[unlikely]] return; }
L_0022B3B8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_0022B3F8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 1u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 8912u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B3E8u); set32(c.r[4], c.r[2].w[0] + 24u);  if (depth < kMaxDepth) unit_00AC(c, 60u, depth + 1u); else { c.pc = 0x003B0940u; return; } if (c.pc != 0x0022B3E8u) [[unlikely]] return; }
L_0022B3E8:
    c.f[12] = 0u;
    c.f[13] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B3F8u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022B3F8u) [[unlikely]] return; }
L_0022B3F8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[1], c.r[20].w[0] + c.r[1].w[0]);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[1].w[0] - 4052u)));
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B424u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022B424u) [[unlikely]] return; }
L_0022B424:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B42Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x0022B42Cu) [[unlikely]] return; }
L_0022B42C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022B3B0u | kUnwind; return; } goto L_0022B3B0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 1u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x439E0000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC31E0000u);
    c.f[0] = c.r[2].w[0];
    c.f[2] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B468u); c.f[20] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0022B468u) [[unlikely]] return; }
L_0022B468:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42EC0000u);
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B47Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022B47Cu) [[unlikely]] return; }
L_0022B47C:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0022B480:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_0022B4E8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 1u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 8912u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B4B0u); set32(c.r[4], c.r[2].w[0] + 24u);  if (depth < kMaxDepth) unit_00AC(c, 60u, depth + 1u); else { c.pc = 0x003B0940u; return; } if (c.pc != 0x0022B4B0u) [[unlikely]] return; }
L_0022B4B0:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_0022B4E8; } }
    set32(c.r[5], 0u + 4u);
    set32(c.r[1], c.r[20].w[0] + c.r[1].w[0]);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[1].w[0] - 4052u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B4DCu); set32(c.r[4], c.r[2].w[0] + 6480u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022B4DCu) [[unlikely]] return; }
L_0022B4DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022B508; } }
    c.budget -= 1;
L_0022B4E8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[20].w[0] + c.r[1].w[0]);
    set32(c.r[5], 0u + 4u);
    set32(c.r[2], ld32((c.r[1].w[0] - 4052u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B504u); set32(c.r[4], c.r[2].w[0] + 6240u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022B504u) [[unlikely]] return; }
L_0022B504:
    c.budget -= 1;
L_0022B508:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2000000u);
    c.f[12] = 0u;
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B51Cu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022B51Cu) [[unlikely]] return; }
L_0022B51C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022B480u | kUnwind; return; } goto L_0022B480; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 1u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x439E0000u);
    c.f[3] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2000000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));
    c.f[1] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC31E0000u);
    c.f[2] = c.r[2].w[0];
    c.f[4] = c.r[5].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42EC0000u);
    c.f[0] = c.r[2].w[0];
    c.f[4] = fp::cvt_s_w(c.f[4]);
    c.f[3] = fp::mul(c.f[3], c.f[4]);
    c.f[20] = fp::add(c.f[2], c.f[3]);
    c.f[2] = c.r[4].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B57Cu); c.f[21] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0022B57Cu) [[unlikely]] return; }
L_0022B57C:
    c.f[14] = 0u;
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B58Cu); c.f[13] = c.f[21];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022B58Cu) [[unlikely]] return; }
L_0022B58C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 1u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 8912u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B5B4u); set32(c.r[4], c.r[2].w[0] + 24u);  if (depth < kMaxDepth) unit_00AC(c, 67u, depth + 1u); else { c.pc = 0x003B0B80u; return; } if (c.pc != 0x0022B5B4u) [[unlikely]] return; }
L_0022B5B4:
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));
    c.r[1].d[0] = c.r[16].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0022B690; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 23u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022B690; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 1u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x439E0000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1300000u);
    c.f[0] = c.r[2].w[0];
    c.f[2] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B5FCu); c.f[20] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0022B5FCu) [[unlikely]] return; }
L_0022B5FC:
    c.f[0] = c.r[16].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2000000u);
    c.f[1] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42F00000u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.f[14] = 0u;
    c.f[13] = fp::add(c.f[0], c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B628u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022B628u) [[unlikely]] return; }
L_0022B628:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B630u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0022B630u) [[unlikely]] return; }
L_0022B630:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B638u); c.r[4].d[0] = 0ull | 32768ull;  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x0022B638u) [[unlikely]] return; }
L_0022B638:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[1], c.r[20].w[0] + c.r[1].w[0]);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[1].w[0] - 4052u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B654u); set32(c.r[4], c.r[2].w[0] + 6720u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022B654u) [[unlikely]] return; }
L_0022B654:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B65Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x0022B65Cu) [[unlikely]] return; }
L_0022B65C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3930000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B670u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0022B670u) [[unlikely]] return; }
L_0022B670:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[1], c.r[20].w[0] + c.r[1].w[0]);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[1].w[0] - 4052u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B68Cu); set32(c.r[4], c.r[2].w[0] + 6720u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022B68Cu) [[unlikely]] return; }
L_0022B68C:
    c.budget -= 1;
L_0022B690:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_0022B6C0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[3], c.r[29].w[0] + 156u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    set32(c.r[2], c.r[29].w[0] + 152u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[19], c.r[19].w[0] - 1840u);
    c.f[0] = ld32((c.r[28].w[0] - 31064u));
    set32(c.r[18], c.r[18].w[0] - 20464u);
    set32(c.r[17], c.r[17].w[0] - 8816u);
    st32((c.r[3].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[28].w[0] - 31060u));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B710u); st32((c.r[2].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0072(c, 36u, depth + 1u); else { c.pc = 0x002C87E0u; return; } if (c.pc != 0x0022B710u) [[unlikely]] return; }
L_0022B710:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B718u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0022B718u) [[unlikely]] return; }
L_0022B718:
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + c.r[29].w[0]);
    st32((c.r[29].w[0] + 132u), c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 156u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B738u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0072(c, 127u, depth + 1u); else { c.pc = 0x002C9320u; return; } if (c.pc != 0x0022B738u) [[unlikely]] return; }
L_0022B738:
    set32(c.r[2], c.r[16].w[0] + c.r[29].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 152u)));
    set32(c.r[16], c.r[29].w[0] + 148u);
    set32(c.r[3], c.r[4].w[0] << 4);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 8806u)));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0022B778; } }
    c.f[20] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0022B7A0; } }
L_0022B778:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[3], 0u + 10u);
    set32(c.r[2], c.r[3].w[0] - c.r[4].w[0]);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 20u, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 10;
L_0022B7A0:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0022B7B8; } }
    c.f[20] = c.f[0];
    c.budget -= 1;
L_0022B7B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F7A0000u);
    c.r[2].d[0] = c.r[2].d[0] | 57672ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_0022B810; } }
    set32(c.r[5], 0u + 3u);
    set32(c.r[1], c.r[19].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] - 4048u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B7E8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022B7E8u) [[unlikely]] return; }
L_0022B7E8:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B7F8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0022B7F8u) [[unlikely]] return; }
L_0022B7F8:
    set32(c.r[2], c.r[18].w[0] + 7920u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[5], 0u + 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B810u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0022B810u) [[unlikely]] return; }
L_0022B810:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.f[13] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B824u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0022B824u) [[unlikely]] return; }
L_0022B824:
    set32(c.r[4], c.r[18].w[0] + 7440u);
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B834u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0022B834u) [[unlikely]] return; }
L_0022B834:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0022B860:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    set32(c.r[17], c.r[17].w[0] + 23008u);
    set32(c.r[16], c.r[16].w[0] + 23088u);
    c.budget -= 12;
L_0022B890:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022B8F8; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 60u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] + 15536u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B8BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0022B8BCu) [[unlikely]] return; }
L_0022B8BC:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 60u));
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0022B8D8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0022B8D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 23008u)));
    set32(c.r[3], c.r[18].w[0] + 1u);
    c.r[18].d[0] = c.r[3].d[0] << 48;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    c.r[1].d[0] = c.r[18].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0022B918; } }
L_0022B8F8:
    set32(c.r[3], c.r[19].w[0] + 1u);
    c.r[19].d[0] = c.r[3].d[0] << 48;
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);
    c.r[3].d[0] = c.r[19].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 128u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022B890u | kUnwind; return; } goto L_0022B890; } }
    c.budget -= 1;
L_0022B918:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0022B940:
    c.r[5].d[0] = ld8((c.r[4].w[0] + 5u));
    set32(c.r[3], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[6], c.r[4].w[0] + 16u);  if (t) { goto L_0022B990; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0022B960; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022B9C8; } }
L_0022B960:
    c.f[1] = ld32((c.r[6].w[0] + 16u));
    c.f[0] = ld32((c.r[6].w[0] + 32u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[6].w[0] + 32u), c.f[0]);
    c.f[1] = ld32((c.r[6].w[0] + 20u));
    c.f[0] = ld32((c.r[6].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0022B9C8; } }
    st32((c.r[6].w[0] + 32u), c.f[1]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0022B9C8; } }
L_0022B990:
    c.f[1] = ld32((c.r[6].w[0] + 24u));
    c.f[0] = ld32((c.r[6].w[0] + 32u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[6].w[0] + 32u), c.f[0]);
    c.f[1] = ld32((c.r[6].w[0] + 28u));
    c.f[0] = ld32((c.r[6].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022B9C8; } }
    st32((c.r[6].w[0] + 32u), c.f[1]);
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
L_0022B9C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0022B9D0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0022B9E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 4u));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0022BA30; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0022BA20; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0022BA10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022BA40; } }
L_0022BA10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BA18u);  if (depth < kMaxDepth) unit_004A(c, 364u, depth + 1u); else { c.pc = 0x0022B9D0u; return; } if (c.pc != 0x0022BA18u) [[unlikely]] return; }
L_0022BA18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022BA40; } }
L_0022BA20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BA28u);  if (depth < kMaxDepth) unit_004A(c, 363u, depth + 1u); else { c.pc = 0x0022B940u; return; } if (c.pc != 0x0022BA28u) [[unlikely]] return; }
L_0022BA28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022BA40; } }
L_0022BA30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BA38u);  if (depth < kMaxDepth) unit_004B(c, 46u, depth + 1u); else { c.pc = 0x0022C900u; return; } if (c.pc != 0x0022BA38u) [[unlikely]] return; }
L_0022BA38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022BA40; } }
L_0022BA40:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0022BA50:
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0022BA60:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0022BA70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 4u));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0022BAC0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0022BAB0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0022BAA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022BAD0; } }
L_0022BAA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BAA8u);  if (depth < kMaxDepth) unit_004A(c, 370u, depth + 1u); else { c.pc = 0x0022BA60u; return; } if (c.pc != 0x0022BAA8u) [[unlikely]] return; }
L_0022BAA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022BAD0; } }
L_0022BAB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BAB8u);  if (depth < kMaxDepth) unit_004A(c, 369u, depth + 1u); else { c.pc = 0x0022BA50u; return; } if (c.pc != 0x0022BAB8u) [[unlikely]] return; }
L_0022BAB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022BAD0; } }
L_0022BAC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BAC8u);  if (depth < kMaxDepth) unit_004B(c, 46u, depth + 1u); else { c.pc = 0x0022C900u; return; } if (c.pc != 0x0022BAC8u) [[unlikely]] return; }
L_0022BAC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022BAD0; } }
L_0022BAD0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0022BAE0:
    set32(c.r[6], ld32((c.r[4].w[0] + 112u)));
    set32(c.r[3], 0u + 2u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0022BB00; } }
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0022BB18; } }
L_0022BB00:
    c.f[0] = ld32((c.r[6].w[0] + 32u));
    st32((c.r[4].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 36u));
    st32((c.r[4].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 40u));
    st32((c.r[4].w[0] + 72u), c.f[0]);
    c.budget -= 6;
L_0022BB18:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0022BB20:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0022BB30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 4u));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0022BB78; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0022BB68; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0022BB60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022BB88; } }
L_0022BB60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BB68u);  if (depth < kMaxDepth) unit_004A(c, 376u, depth + 1u); else { c.pc = 0x0022BB20u; return; } if (c.pc != 0x0022BB68u) [[unlikely]] return; }
L_0022BB68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BB70u);  if (depth < kMaxDepth) unit_004A(c, 375u, depth + 1u); else { c.pc = 0x0022BAE0u; return; } if (c.pc != 0x0022BB70u) [[unlikely]] return; }
L_0022BB70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022BB88; } }
L_0022BB78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BB80u);  if (depth < kMaxDepth) unit_004B(c, 46u, depth + 1u); else { c.pc = 0x0022C900u; return; } if (c.pc != 0x0022BB80u) [[unlikely]] return; }
L_0022BB80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022BB88; } }
L_0022BB88:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0022BBA0:
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0022BBB0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0022BBC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 4u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0022BC10; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0022BC00; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022BBF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022BC20; } }
L_0022BBF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BBF8u);  if (depth < kMaxDepth) unit_004A(c, 382u, depth + 1u); else { c.pc = 0x0022BBB0u; return; } if (c.pc != 0x0022BBF8u) [[unlikely]] return; }
L_0022BBF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022BC20; } }
L_0022BC00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BC08u);  if (depth < kMaxDepth) unit_004A(c, 381u, depth + 1u); else { c.pc = 0x0022BBA0u; return; } if (c.pc != 0x0022BC08u) [[unlikely]] return; }
L_0022BC08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022BC20; } }
L_0022BC10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BC18u);  if (depth < kMaxDepth) unit_004B(c, 46u, depth + 1u); else { c.pc = 0x0022C900u; return; } if (c.pc != 0x0022BC18u) [[unlikely]] return; }
L_0022BC18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022BC28; } }
L_0022BC20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BC28u);  if (depth < kMaxDepth) unit_004B(c, 14u, depth + 1u); else { c.pc = 0x0022C100u; return; } if (c.pc != 0x0022BC28u) [[unlikely]] return; }
L_0022BC28:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0022BC40:
    c.r[5].d[0] = ld8((c.r[4].w[0] + 5u));
    set32(c.r[3], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[6], c.r[4].w[0] + 16u);  if (t) { goto L_0022BC90; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0022BC60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022BCC8; } }
L_0022BC60:
    c.f[1] = ld32((c.r[6].w[0] + 16u));
    c.f[0] = ld32((c.r[6].w[0] + 32u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[6].w[0] + 32u), c.f[0]);
    c.f[1] = ld32((c.r[6].w[0] + 20u));
    c.f[0] = ld32((c.r[6].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0022BCC8; } }
    st32((c.r[6].w[0] + 32u), c.f[1]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0022BCC8; } }
L_0022BC90:
    c.f[1] = ld32((c.r[6].w[0] + 24u));
    c.f[0] = ld32((c.r[6].w[0] + 32u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[6].w[0] + 32u), c.f[0]);
    c.f[1] = ld32((c.r[6].w[0] + 28u));
    c.f[0] = ld32((c.r[6].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022BCC8; } }
    st32((c.r[6].w[0] + 32u), c.f[1]);
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
L_0022BCC8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0022BCD0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0022BCE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 4u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0022BD30; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0022BD20; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022BD10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022BD40; } }
L_0022BD10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BD18u);  if (depth < kMaxDepth) unit_004A(c, 389u, depth + 1u); else { c.pc = 0x0022BCD0u; return; } if (c.pc != 0x0022BD18u) [[unlikely]] return; }
L_0022BD18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022BD40; } }
L_0022BD20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BD28u);  if (depth < kMaxDepth) unit_004A(c, 388u, depth + 1u); else { c.pc = 0x0022BC40u; return; } if (c.pc != 0x0022BD28u) [[unlikely]] return; }
L_0022BD28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022BD40; } }
L_0022BD30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BD38u);  if (depth < kMaxDepth) unit_004B(c, 46u, depth + 1u); else { c.pc = 0x0022C900u; return; } if (c.pc != 0x0022BD38u) [[unlikely]] return; }
L_0022BD38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022BD48; } }
L_0022BD40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BD48u);  if (depth < kMaxDepth) unit_004B(c, 14u, depth + 1u); else { c.pc = 0x0022C100u; return; } if (c.pc != 0x0022BD48u) [[unlikely]] return; }
L_0022BD48:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0022BD60:
    c.r[6].d[0] = ld8((c.r[4].w[0] + 10u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[3].w[0] - 27856u);
    set32(c.r[5], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 9);
    set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0022BDA0; } }
    c.r[3].d[0] = ld8((c.r[6].w[0] + 750u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_0022BDA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_004B(c, 7u, depth); } }
L_0022BDA0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 838u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022BDC8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_0022BDC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0022BDD0; } }
    c.budget -= 1;
L_0022BDC8:
    set32(c.r[3], 0u + 2u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0022BDD0:
    c.r[5].d[0] = ld8((c.r[6].w[0] + 8658u));
    set32(c.r[3], 0u + 37u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[7], 0u + 27u);  if (t) { [[clang::musttail]] return unit_004B(c, 6u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[7].d[0];  if (t) { [[clang::musttail]] return unit_004B(c, 6u, depth); } }
    set32(c.r[7], 0u + 54u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[7].d[0]; set32(c.r[7], 0u + 45u);  if (t) { [[clang::musttail]] return unit_004B(c, 6u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[7].d[0];  if (t) { [[clang::musttail]] return unit_004B(c, 5u, depth); } }
    set32(c.r[7], 0u + 38u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[7].d[0]; set32(c.r[8], 0u + 34u);  if (t) { [[clang::musttail]] return unit_004B(c, 5u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[8].d[0]; set32(c.r[7], 0u + 48u);  if (t) { [[clang::musttail]] return unit_004B(c, 5u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[7].d[0];  if (t) { [[clang::musttail]] return unit_004B(c, 5u, depth); } }
    set32(c.r[7], 0u + 23u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[7].d[0]; set32(c.r[7], 0u + 43u);  if (t) { [[clang::musttail]] return unit_004B(c, 5u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[7].d[0];  if (t) { [[clang::musttail]] return unit_004B(c, 4u, depth); } }
    set32(c.r[7], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[7].d[0]; set32(c.r[7], 0u + 52u);  if (t) { [[clang::musttail]] return unit_004B(c, 4u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[7].d[0];  if (t) { [[clang::musttail]] return unit_004B(c, 4u, depth); } }
    set32(c.r[7], 0u + 21u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[7].d[0]; set32(c.r[7], 0u + 53u);  if (t) { [[clang::musttail]] return unit_004B(c, 3u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[7].d[0];  if (t) { [[clang::musttail]] return unit_004B(c, 3u, depth); } }
    set32(c.r[7], 0u + 46u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[7].d[0]; set32(c.r[7], 0u + 44u);  if (t) { [[clang::musttail]] return unit_004B(c, 3u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[7].d[0];  if (t) { [[clang::musttail]] return unit_004B(c, 2u, depth); } }
    set32(c.r[7], 0u + 26u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[7].d[0]; set32(c.r[7], 0u + 24u);  if (t) { [[clang::musttail]] return unit_004B(c, 2u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[7].d[0];  if (t) { [[clang::musttail]] return unit_004B(c, 2u, depth); } }
    set32(c.r[7], 0u + 22u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[7].d[0]; set32(c.r[7], 0u + 36u);  if (t) { [[clang::musttail]] return unit_004B(c, 2u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[7].d[0]; set32(c.r[9], 0u + 31u);  if (t) { [[clang::musttail]] return unit_004B(c, 1u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[9].d[0]; set32(c.r[7], 0u + 49u);  if (t) { [[clang::musttail]] return unit_004B(c, 1u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[7].d[0];  if (t) { [[clang::musttail]] return unit_004B(c, 1u, depth); } }
    set32(c.r[7], 0u + 29u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[7].d[0]; set32(c.r[7], 0u + 25u);  if (t) { [[clang::musttail]] return unit_004B(c, 1u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[7].d[0];  if (t) { [[clang::musttail]] return unit_004B(c, 1u, depth); } }
    set32(c.r[7], 0u + 41u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[7].d[0]; set32(c.r[7], 0u + 47u);  if (t) { goto L_0022BFF8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[7].d[0];  if (t) { goto L_0022BFE8; } }
    set32(c.r[7], 0u + 42u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[7].d[0]; set32(c.r[8], 0u + 39u);  if (t) { goto L_0022BFE8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[8].d[0]; set32(c.r[7], 0u + 30u);  if (t) { goto L_0022BFE8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[7].d[0];  if (t) { goto L_0022BFE8; } }
    set32(c.r[7], 0u + 28u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[7].d[0]; set32(c.r[7], 0u + 20u);  if (t) { goto L_0022BFC0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[7].d[0];  if (t) { goto L_0022BFA0; } }
    set32(c.r[7], 0u + 19u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[7].d[0]; set32(c.r[7], 0u + 10u);  if (t) { goto L_0022BF80; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[7].d[0];  if (t) { goto L_0022BF58; } }
    set32(c.r[7], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[7].d[0];  if (t) { goto L_0022BF58; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0022BF28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_004B(c, 7u, depth); } }
L_0022BF28:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 8659u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[5], 0u + 3u);  if (t) { goto L_0022BF40; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_0022BF50; } }
L_0022BF40:
    set32(c.r[3], 0u + 38u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 97u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_004B(c, 7u, depth); } }
    c.budget -= 1;
L_0022BF50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 97u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_004B(c, 7u, depth); } }
L_0022BF58:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 317u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 6u);  if (t) { goto L_0022BF70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 97u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_004B(c, 7u, depth); } }
L_0022BF70:
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 97u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_004B(c, 7u, depth); } }
    c.budget -= 1;
L_0022BF80:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 8659u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_0022BF98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 97u), static_cast<std::uint8_t>(c.r[8].w[0]));  if (t) { [[clang::musttail]] return unit_004B(c, 7u, depth); } }
L_0022BF98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 97u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_004B(c, 7u, depth); } }
L_0022BFA0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 8659u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_0022BFB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 97u), static_cast<std::uint8_t>(c.r[8].w[0]));  if (t) { [[clang::musttail]] return unit_004B(c, 7u, depth); } }
L_0022BFB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 97u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_004B(c, 7u, depth); } }
L_0022BFC0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 304u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022BFD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 97u), static_cast<std::uint8_t>(c.r[9].w[0]));  if (t) { [[clang::musttail]] return unit_004B(c, 7u, depth); } }
L_0022BFD8:
    set32(c.r[3], 0u + 35u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 97u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_004B(c, 7u, depth); } }
    c.budget -= 1;
L_0022BFE8:
    set32(c.r[3], 0u + 33u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 97u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_004B(c, 7u, depth); } }
    c.budget -= 1;
L_0022BFF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 97u), static_cast<std::uint8_t>(c.r[8].w[0]));  if (t) { [[clang::musttail]] return unit_004B(c, 7u, depth); } }
    [[clang::musttail]] return unit_004B(c, 1u, depth);
}

}
