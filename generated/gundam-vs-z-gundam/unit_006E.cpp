#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_006E[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    20, 0, 0, 0, 0, 0, 21, 0, 22, 0, 23, 0, 24, 0, 25, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 29, 0,
    0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 33, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0,
    0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 41, 0, 42, 0,
    0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0,
    0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 55, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 60, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 66, 0, 0, 0,
    67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 75, 0, 76, 0, 77, 0, 0, 0, 0, 78, 0, 0, 79, 0, 0, 0, 80, 0, 81, 0, 82, 0,
    83, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 86, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0,
    0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    93, 0, 0, 0, 94, 0, 95, 0, 96, 0, 97, 0, 98, 0, 0, 0, 99, 0, 0, 0, 100, 0, 101, 0, 0, 102, 0, 0, 103, 0, 0, 104,
    0, 105, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 108, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 112, 0, 0, 0, 0, 0, 0, 0, 113, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 116, 0, 0, 0, 0,
    0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 122, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 127, 0, 128, 0, 0, 129, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 132, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 136, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 143, 0, 0,
    0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 154, 0, 155, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0,
    0, 0, 0, 0, 0, 157, 0, 0, 158, 0, 159, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 163, 0, 164, 0, 0, 165, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0,
    0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 179, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 191, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 194, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0,
    0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    215, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0,
    0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 229, 0, 230, 0,
    231, 0, 0, 0, 0, 0, 0, 0, 232, 0, 233, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 0,
    241, 0, 0, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 246, 0,
    0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0,
    262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0,
    0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0,
    0, 274, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0,
    278, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0,
    0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0,
    0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 291, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 306, 0,
    0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 311, 0, 312, 0, 0,
    313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 315, 0, 0, 316, 0, 317, 0, 0, 0, 318, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 320, 0, 321, 0, 0, 322, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 324, 0, 0,
    325, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 328, 0, 0, 329, 0, 330, 0, 0,
    0, 0, 0, 0, 331, 0, 0, 332, 0, 333, 0, 0, 0, 0, 334, 0, 0, 335, 0, 0, 0, 0, 336, 0, 0, 0, 0, 337, 0, 0, 338, 0,
    0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    342, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0,
    347, 0, 348, 0, 0, 349, 0, 0, 350, 0, 351, 0, 0, 0, 0, 0, 352, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 358, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 362, 0, 363, 0, 0, 0, 364, 0, 0, 365,
    0, 0, 366, 0, 367, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 369, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 373, 0, 0, 374, 0, 0, 375, 0, 0, 376, 0, 0, 0, 0, 0, 377, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 379, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_006E(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002B8000;
    case 2u: goto L_002B80E8;
    case 3u: goto L_002B8120;
    case 4u: goto L_002B814C;
    case 5u: goto L_002B8164;
    case 6u: goto L_002B819C;
    case 7u: goto L_002B8230;
    case 8u: goto L_002B8240;
    case 9u: goto L_002B8248;
    case 10u: goto L_002B8280;
    case 11u: goto L_002B82F0;
    case 12u: goto L_002B83D0;
    case 13u: goto L_002B8410;
    case 14u: goto L_002B843C;
    case 15u: goto L_002B8468;
    case 16u: goto L_002B84C0;
    case 17u: goto L_002B84E0;
    case 18u: goto L_002B8510;
    case 19u: goto L_002B8558;
    case 20u: goto L_002B8580;
    case 21u: goto L_002B8598;
    case 22u: goto L_002B85A0;
    case 23u: goto L_002B85A8;
    case 24u: goto L_002B85B0;
    case 25u: goto L_002B85B8;
    case 26u: goto L_002B85C0;
    case 27u: goto L_002B85D8;
    case 28u: goto L_002B85E8;
    case 29u: goto L_002B85F8;
    case 30u: goto L_002B861C;
    case 31u: goto L_002B8638;
    case 32u: goto L_002B8648;
    case 33u: goto L_002B8654;
    case 34u: goto L_002B865C;
    case 35u: goto L_002B8674;
    case 36u: goto L_002B8690;
    case 37u: goto L_002B86AC;
    case 38u: goto L_002B86C0;
    case 39u: goto L_002B86D4;
    case 40u: goto L_002B86E4;
    case 41u: goto L_002B86F0;
    case 42u: goto L_002B86F8;
    case 43u: goto L_002B8714;
    case 44u: goto L_002B8734;
    case 45u: goto L_002B8744;
    case 46u: goto L_002B875C;
    case 47u: goto L_002B8774;
    case 48u: goto L_002B878C;
    case 49u: goto L_002B87A0;
    case 50u: goto L_002B87B4;
    case 51u: goto L_002B87D0;
    case 52u: goto L_002B8808;
    case 53u: goto L_002B8834;
    case 54u: goto L_002B8864;
    case 55u: goto L_002B8910;
    case 56u: goto L_002B891C;
    case 57u: goto L_002B8948;
    case 58u: goto L_002B8960;
    case 59u: goto L_002B8970;
    case 60u: goto L_002B8978;
    case 61u: goto L_002B89B4;
    case 62u: goto L_002B8A0C;
    case 63u: goto L_002B8A2C;
    case 64u: goto L_002B8A4C;
    case 65u: goto L_002B8A68;
    case 66u: goto L_002B8A70;
    case 67u: goto L_002B8A80;
    case 68u: goto L_002B8AB8;
    case 69u: goto L_002B8AE0;
    case 70u: goto L_002B8B08;
    case 71u: goto L_002B8B1C;
    case 72u: goto L_002B8B50;
    case 73u: goto L_002B8B74;
    case 74u: goto L_002B8BA0;
    case 75u: goto L_002B8BA8;
    case 76u: goto L_002B8BB0;
    case 77u: goto L_002B8BB8;
    case 78u: goto L_002B8BCC;
    case 79u: goto L_002B8BD8;
    case 80u: goto L_002B8BE8;
    case 81u: goto L_002B8BF0;
    case 82u: goto L_002B8BF8;
    case 83u: goto L_002B8C00;
    case 84u: goto L_002B8C08;
    case 85u: goto L_002B8C20;
    case 86u: goto L_002B8C84;
    case 87u: goto L_002B8C8C;
    case 88u: goto L_002B8CA0;
    case 89u: goto L_002B8CE4;
    case 90u: goto L_002B8CF4;
    case 91u: goto L_002B8D10;
    case 92u: goto L_002B8D50;
    case 93u: goto L_002B8D80;
    case 94u: goto L_002B8D90;
    case 95u: goto L_002B8D98;
    case 96u: goto L_002B8DA0;
    case 97u: goto L_002B8DA8;
    case 98u: goto L_002B8DB0;
    case 99u: goto L_002B8DC0;
    case 100u: goto L_002B8DD0;
    case 101u: goto L_002B8DD8;
    case 102u: goto L_002B8DE4;
    case 103u: goto L_002B8DF0;
    case 104u: goto L_002B8DFC;
    case 105u: goto L_002B8E04;
    case 106u: goto L_002B8E10;
    case 107u: goto L_002B8E60;
    case 108u: goto L_002B8E88;
    case 109u: goto L_002B8E94;
    case 110u: goto L_002B8EB4;
    case 111u: goto L_002B8ED0;
    case 112u: goto L_002B8ED8;
    case 113u: goto L_002B8EF8;
    case 114u: goto L_002B8F30;
    case 115u: goto L_002B8F64;
    case 116u: goto L_002B8F6C;
    case 117u: goto L_002B8F8C;
    case 118u: goto L_002B8FCC;
    case 119u: goto L_002B8FEC;
    case 120u: goto L_002B9030;
    case 121u: goto L_002B9058;
    case 122u: goto L_002B9064;
    case 123u: goto L_002B90A0;
    case 124u: goto L_002B90B0;
    case 125u: goto L_002B90EC;
    case 126u: goto L_002B9150;
    case 127u: goto L_002B9190;
    case 128u: goto L_002B9198;
    case 129u: goto L_002B91A4;
    case 130u: goto L_002B91AC;
    case 131u: goto L_002B91C0;
    case 132u: goto L_002B9210;
    case 133u: goto L_002B9218;
    case 134u: goto L_002B9250;
    case 135u: goto L_002B9264;
    case 136u: goto L_002B9270;
    case 137u: goto L_002B92D8;
    case 138u: goto L_002B92E8;
    case 139u: goto L_002B9330;
    case 140u: goto L_002B9348;
    case 141u: goto L_002B9358;
    case 142u: goto L_002B936C;
    case 143u: goto L_002B9374;
    case 144u: goto L_002B9388;
    case 145u: goto L_002B93D0;
    case 146u: goto L_002B93FC;
    case 147u: goto L_002B9430;
    case 148u: goto L_002B9448;
    case 149u: goto L_002B9480;
    case 150u: goto L_002B94B8;
    case 151u: goto L_002B94C0;
    case 152u: goto L_002B94D8;
    case 153u: goto L_002B9528;
    case 154u: goto L_002B9548;
    case 155u: goto L_002B9550;
    case 156u: goto L_002B9570;
    case 157u: goto L_002B9594;
    case 158u: goto L_002B95A0;
    case 159u: goto L_002B95A8;
    case 160u: goto L_002B95B0;
    case 161u: goto L_002B95C8;
    case 162u: goto L_002B95E4;
    case 163u: goto L_002B960C;
    case 164u: goto L_002B9614;
    case 165u: goto L_002B9620;
    case 166u: goto L_002B9628;
    case 167u: goto L_002B9654;
    case 168u: goto L_002B966C;
    case 169u: goto L_002B9690;
    case 170u: goto L_002B96B4;
    case 171u: goto L_002B96BC;
    case 172u: goto L_002B96D0;
    case 173u: goto L_002B9718;
    case 174u: goto L_002B9744;
    case 175u: goto L_002B9770;
    case 176u: goto L_002B97BC;
    case 177u: goto L_002B9820;
    case 178u: goto L_002B9868;
    case 179u: goto L_002B9874;
    case 180u: goto L_002B98B0;
    case 181u: goto L_002B9964;
    case 182u: goto L_002B9994;
    case 183u: goto L_002B99A8;
    case 184u: goto L_002B99B4;
    case 185u: goto L_002B9A00;
    case 186u: goto L_002B9A28;
    case 187u: goto L_002B9A44;
    case 188u: goto L_002B9A60;
    case 189u: goto L_002B9AE8;
    case 190u: goto L_002B9B58;
    case 191u: goto L_002B9B60;
    case 192u: goto L_002B9B90;
    case 193u: goto L_002B9BD8;
    case 194u: goto L_002B9BE4;
    case 195u: goto L_002B9C40;
    case 196u: goto L_002B9CA0;
    case 197u: goto L_002B9CF8;
    case 198u: goto L_002B9E68;
    case 199u: goto L_002B9E78;
    case 200u: goto L_002B9EC8;
    case 201u: goto L_002B9F58;
    case 202u: goto L_002B9F6C;
    case 203u: goto L_002B9F94;
    case 204u: goto L_002B9FA4;
    case 205u: goto L_002BA060;
    case 206u: goto L_002BA088;
    case 207u: goto L_002BA0B0;
    case 208u: goto L_002BA118;
    case 209u: goto L_002BA128;
    case 210u: goto L_002BA200;
    case 211u: goto L_002BA2D4;
    case 212u: goto L_002BA2EC;
    case 213u: goto L_002BA308;
    case 214u: goto L_002BA350;
    case 215u: goto L_002BA380;
    case 216u: goto L_002BA394;
    case 217u: goto L_002BA3B0;
    case 218u: goto L_002BA3C4;
    case 219u: goto L_002BA410;
    case 220u: goto L_002BA428;
    case 221u: goto L_002BA434;
    case 222u: goto L_002BA44C;
    case 223u: goto L_002BA474;
    case 224u: goto L_002BA4B0;
    case 225u: goto L_002BA4B8;
    case 226u: goto L_002BA4F0;
    case 227u: goto L_002BA510;
    case 228u: goto L_002BA568;
    case 229u: goto L_002BA570;
    case 230u: goto L_002BA578;
    case 231u: goto L_002BA580;
    case 232u: goto L_002BA5A0;
    case 233u: goto L_002BA5A8;
    case 234u: goto L_002BA5C8;
    case 235u: goto L_002BA5D8;
    case 236u: goto L_002BA5E8;
    case 237u: goto L_002BA690;
    case 238u: goto L_002BA6D0;
    case 239u: goto L_002BA6D8;
    case 240u: goto L_002BA6E8;
    case 241u: goto L_002BA700;
    case 242u: goto L_002BA718;
    case 243u: goto L_002BA728;
    case 244u: goto L_002BA74C;
    case 245u: goto L_002BA768;
    case 246u: goto L_002BA778;
    case 247u: goto L_002BA798;
    case 248u: goto L_002BA7C0;
    case 249u: goto L_002BA850;
    case 250u: goto L_002BA868;
    case 251u: goto L_002BA910;
    case 252u: goto L_002BA984;
    case 253u: goto L_002BAA10;
    case 254u: goto L_002BAB54;
    case 255u: goto L_002BABE0;
    case 256u: goto L_002BAC40;
    case 257u: goto L_002BAC64;
    case 258u: goto L_002BACA0;
    case 259u: goto L_002BACC0;
    case 260u: goto L_002BACD0;
    case 261u: goto L_002BACF0;
    case 262u: goto L_002BAD00;
    case 263u: goto L_002BAD30;
    case 264u: goto L_002BAD48;
    case 265u: goto L_002BAD58;
    case 266u: goto L_002BADA0;
    case 267u: goto L_002BADC0;
    case 268u: goto L_002BADE0;
    case 269u: goto L_002BADF0;
    case 270u: goto L_002BAE10;
    case 271u: goto L_002BAE20;
    case 272u: goto L_002BAE50;
    case 273u: goto L_002BAE70;
    case 274u: goto L_002BAE84;
    case 275u: goto L_002BAEA0;
    case 276u: goto L_002BAEB4;
    case 277u: goto L_002BAEE0;
    case 278u: goto L_002BAF00;
    case 279u: goto L_002BAF20;
    case 280u: goto L_002BAF6C;
    case 281u: goto L_002BAF84;
    case 282u: goto L_002BAFC4;
    case 283u: goto L_002BAFF0;
    case 284u: goto L_002BB0F4;
    case 285u: goto L_002BB10C;
    case 286u: goto L_002BB13C;
    case 287u: goto L_002BB154;
    case 288u: goto L_002BB238;
    case 289u: goto L_002BB250;
    case 290u: goto L_002BB2DC;
    case 291u: goto L_002BB2F0;
    case 292u: goto L_002BB330;
    case 293u: goto L_002BB348;
    case 294u: goto L_002BB368;
    case 295u: goto L_002BB390;
    case 296u: goto L_002BB3DC;
    case 297u: goto L_002BB40C;
    case 298u: goto L_002BB434;
    case 299u: goto L_002BB44C;
    case 300u: goto L_002BB458;
    case 301u: goto L_002BB494;
    case 302u: goto L_002BB4A4;
    case 303u: goto L_002BB4B8;
    case 304u: goto L_002BB4E0;
    case 305u: goto L_002BB568;
    case 306u: goto L_002BB578;
    case 307u: goto L_002BB588;
    case 308u: goto L_002BB5A8;
    case 309u: goto L_002BB5B8;
    case 310u: goto L_002BB5E0;
    case 311u: goto L_002BB5EC;
    case 312u: goto L_002BB5F4;
    case 313u: goto L_002BB600;
    case 314u: goto L_002BB63C;
    case 315u: goto L_002BB644;
    case 316u: goto L_002BB650;
    case 317u: goto L_002BB658;
    case 318u: goto L_002BB668;
    case 319u: goto L_002BB6A0;
    case 320u: goto L_002BB6AC;
    case 321u: goto L_002BB6B4;
    case 322u: goto L_002BB6C0;
    case 323u: goto L_002BB6DC;
    case 324u: goto L_002BB6F4;
    case 325u: goto L_002BB700;
    case 326u: goto L_002BB720;
    case 327u: goto L_002BB744;
    case 328u: goto L_002BB760;
    case 329u: goto L_002BB76C;
    case 330u: goto L_002BB774;
    case 331u: goto L_002BB790;
    case 332u: goto L_002BB79C;
    case 333u: goto L_002BB7A4;
    case 334u: goto L_002BB7B8;
    case 335u: goto L_002BB7C4;
    case 336u: goto L_002BB7D8;
    case 337u: goto L_002BB7EC;
    case 338u: goto L_002BB7F8;
    case 339u: goto L_002BB810;
    case 340u: goto L_002BB830;
    case 341u: goto L_002BB880;
    case 342u: goto L_002BB980;
    case 343u: goto L_002BB9A0;
    case 344u: goto L_002BB9B8;
    case 345u: goto L_002BB9D0;
    case 346u: goto L_002BB9F4;
    case 347u: goto L_002BBA00;
    case 348u: goto L_002BBA08;
    case 349u: goto L_002BBA14;
    case 350u: goto L_002BBA20;
    case 351u: goto L_002BBA28;
    case 352u: goto L_002BBA40;
    case 353u: goto L_002BBA50;
    case 354u: goto L_002BBAA0;
    case 355u: goto L_002BBAF0;
    case 356u: goto L_002BBB30;
    case 357u: goto L_002BBBD8;
    case 358u: goto L_002BBBE8;
    case 359u: goto L_002BBC10;
    case 360u: goto L_002BBC3C;
    case 361u: goto L_002BBC4C;
    case 362u: goto L_002BBC58;
    case 363u: goto L_002BBC60;
    case 364u: goto L_002BBC70;
    case 365u: goto L_002BBC7C;
    case 366u: goto L_002BBC88;
    case 367u: goto L_002BBC90;
    case 368u: goto L_002BBCB0;
    case 369u: goto L_002BBCBC;
    case 370u: goto L_002BBCD0;
    case 371u: goto L_002BBD18;
    case 372u: goto L_002BBDA0;
    case 373u: goto L_002BBDB4;
    case 374u: goto L_002BBDC0;
    case 375u: goto L_002BBDCC;
    case 376u: goto L_002BBDD8;
    case 377u: goto L_002BBDF0;
    case 378u: goto L_002BBE90;
    case 379u: goto L_002BBF04;
    case 380u: goto L_002BBF14;
    case 381u: goto L_002BBF50;
    case 382u: goto L_002BBF58;
    case 383u: goto L_002BBF80;
    case 384u: goto L_002BBFC0;
    case 385u: goto L_002BBFD4;
    default: bad_entry(c, 0x002B8000u); return;
    }
L_002B8000:
    set32(c.r[3], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 92u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 38u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B8108; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 49u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B8108; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 116u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B8108; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 289u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B8108; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 182u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], c.r[4].w[0] + 182u);  if (t) { goto L_002B8108; } }
    set32(c.r[4], c.r[3].w[0] - 1u);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x88880000u);
    set32(c.r[7], ld32((c.r[28].w[0] - 23788u)));
    c.r[4].d[0] = c.r[3].d[0] | 34953ull;
    set32(c.r[3], 0u + 1859u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 182u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[6].w[0]);
    set32(c.r[5], c.r[6].w[0] >> 31);
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 5));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st16((c.r[7].w[0] + 180u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23788u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 182u)));
    c.budget -= 19;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002B8108; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 42u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B80C0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B8108; } }
    c.budget -= 1;
L_002B80C0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[2], c.r[2].w[0] - 27856u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 82u)));
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 9);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B80E8u); set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_004E(c, 177u, depth + 1u); else { c.pc = 0x0023A720u; return; } if (c.pc != 0x002B80E8u) [[unlikely]] return; }
L_002B80E8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8661u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 72u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 5u);  if (t) { goto L_002B8108; } }
    st8((c.r[4].w[0] + 84u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002B8108:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B8120:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[3].w[0] + 20u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B8158; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B814Cu);  if (depth < kMaxDepth) unit_0071(c, 28u, depth + 1u); else { c.pc = 0x002C46B0u; return; } if (c.pc != 0x002B814Cu) [[unlikely]] return; }
L_002B814C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B8210; } }
    c.budget -= 1;
L_002B8158:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8164u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0074(c, 336u, depth + 1u); else { c.pc = 0x002D37E0u; return; } if (c.pc != 0x002B8164u) [[unlikely]] return; }
L_002B8164:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B8190; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st8((c.r[4].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 98u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002B8210; } }
    c.budget -= 1;
L_002B8190:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B819Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0074(c, 336u, depth + 1u); else { c.pc = 0x002D37E0u; return; } if (c.pc != 0x002B819Cu) [[unlikely]] return; }
L_002B819C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B81C8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st8((c.r[4].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 98u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002B8210; } }
    c.budget -= 1;
L_002B81C8:
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 182u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 4u);  if (t) { goto L_002B8210; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    st16((c.r[2].w[0] + 182u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    st16((c.r[2].w[0] + 180u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[2].w[0] + 27u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    st32((c.r[2].w[0] + 12u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    st32((c.r[2].w[0] + 16u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[2].w[0] + 98u), static_cast<std::uint8_t>(0u));
    c.budget -= 14;
L_002B8210:
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B8230:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_002B8240:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8248u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 10u, depth + 1u); else { c.pc = 0x002B8280u; return; } if (c.pc != 0x002B8248u) [[unlikely]] return; }
L_002B8248:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B8260; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002B8270; } }
L_002B8260:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B8240u | kUnwind; return; } goto L_002B8240; } }
L_002B8270:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B8280:
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 5u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 196u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);  if (t) { goto L_002B82AC; } }
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 9604u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 33632ull;  if (t) { goto L_002B82E4; } }
L_002B82AC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 56u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << (c.r[4].w[0] & 31u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B82E4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 9540u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 33632ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
L_002B82E4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B82F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x02000000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = c.r[2].d[0] | 771ull;
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st32((c.r[29].w[0] + 12u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B83B0; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 88u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B83B0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 151u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B83B0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 27u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B83B0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 56u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 288u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B83B0; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] >= 0; c.r[4].d[0] = c.r[6].d[0] & 31ull;  if (t) { goto L_002B8370; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002B8374; } }
    set32(c.r[4], c.r[4].w[0] - 32u);
    c.budget -= 1;
L_002B8370:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_002B8374:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 5));
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] >= 0; set32(c.r[3], c.r[3].w[0] << (c.r[4].w[0] & 31u));  if (t) { goto L_002B8388; } }
    set32(c.r[2], c.r[6].w[0] + 31u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 2;
L_002B8388:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B83B0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 96u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002B83B8; } }
    c.budget -= 1;
L_002B83B0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[2].w[0] + 96u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_002B83B8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 96u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B83D0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B8408; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 88u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B8408; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 151u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B8408; } }
    st8((c.r[4].w[0] + 330u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_002B8408:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B8410:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[6], 0u + 124u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[4], c.r[4].w[0] + 18112u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B843Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x002B843Cu) [[unlikely]] return; }
L_002B843C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    st8((c.r[1].w[0] + 18112u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[7], c.r[7].w[0] + 18112u);
    st8((c.r[1].w[0] + 18113u), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[6], 0u - 1u);
    set32(c.r[5], 0u - 2u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 11;
L_002B8468:
    c.r[3].d[0] = c.r[8].sd[0] < 2ll ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[7].w[0] + 67u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[7].w[0] + 68u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[3].d[0] = c.r[8].sd[0] < 4ll ? 1ull : 0ull;
    st8((c.r[7].w[0] + 69u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[7].w[0] + 70u), static_cast<std::uint8_t>(0u));
    st8((c.r[7].w[0] + 71u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 6u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B8468u | kUnwind; return; } goto L_002B8468; } }
    set32(c.r[4], 0u + 125u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    st32((c.r[1].w[0] + 18228u), c.r[4].w[0]);
    set32(c.r[3], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    st8((c.r[1].w[0] + 18232u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B84C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.r[3].d[0] = c.r[4].d[0] << 56;
    st8((c.r[1].w[0] + 18232u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] + 18228u), c.r[3].w[0]);  c.pc = t; return; }
L_002B84E0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[2].w[0] - 24464u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002B8000u < 16384u) { entry = entries_006E[(t - 0x002B8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002B8510:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002B8688; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B8550; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B8AB8; } }
    c.budget -= 1;
L_002B8550:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8558u);  if (depth < kMaxDepth) unit_0046(c, 201u, depth + 1u); else { c.pc = 0x0021B4E0u; return; } if (c.pc != 0x002B8558u) [[unlikely]] return; }
L_002B8558:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], 0u + 7u);
    st8((c.r[3].w[0] + 54u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B8580; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8580u);  if (depth < kMaxDepth) unit_008C(c, 164u, depth + 1u); else { c.pc = 0x00332AE0u; return; } if (c.pc != 0x002B8580u) [[unlikely]] return; }
L_002B8580:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01170000u);
    c.r[4].d[0] = c.r[2].d[0] | 61440ull;
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[28].w[0] - 23336u), c.r[4].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8598u); set32(c.r[6], 0u + 1392u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x002B8598u) [[unlikely]] return; }
L_002B8598:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B85A0u);  if (depth < kMaxDepth) unit_006A(c, 292u, depth + 1u); else { c.pc = 0x002ABC40u; return; } if (c.pc != 0x002B85A0u) [[unlikely]] return; }
L_002B85A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B85A8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0043(c, 384u, depth + 1u); else { c.pc = 0x0020F700u; return; } if (c.pc != 0x002B85A8u) [[unlikely]] return; }
L_002B85A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B85B0u);  if (depth < kMaxDepth) unit_004D(c, 130u, depth + 1u); else { c.pc = 0x002362E0u; return; } if (c.pc != 0x002B85B0u) [[unlikely]] return; }
L_002B85B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B85B8u);  if (depth < kMaxDepth) unit_000A(c, 245u, depth + 1u); else { c.pc = 0x0012B850u; return; } if (c.pc != 0x002B85B8u) [[unlikely]] return; }
L_002B85B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B85C0u);  if (depth < kMaxDepth) unit_000B(c, 24u, depth + 1u); else { c.pc = 0x0012C850u; return; } if (c.pc != 0x002B85C0u) [[unlikely]] return; }
L_002B85C0:
    set32(c.r[4], ld32((c.r[28].w[0] - 23336u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01170000u);
    c.r[5].d[0] = c.r[2].d[0] | 62832ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x015A0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B85D8u); c.r[6].d[0] = c.r[2].d[0] | 61440ull;  if (depth < kMaxDepth) unit_0079(c, 141u, depth + 1u); else { c.pc = 0x002E6F00u; return; } if (c.pc != 0x002B85D8u) [[unlikely]] return; }
L_002B85D8:
    set32(c.r[6], ld32((c.r[28].w[0] - 23336u)));
    set32(c.r[5], 0u + 3146u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B85E8u); set32(c.r[4], c.r[6].w[0] + 12u);  if (depth < kMaxDepth) unit_0079(c, 151u, depth + 1u); else { c.pc = 0x002E7010u; return; } if (c.pc != 0x002B85E8u) [[unlikely]] return; }
L_002B85E8:
    set32(c.r[6], ld32((c.r[28].w[0] - 23336u)));
    set32(c.r[5], 0u + 3147u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B85F8u); set32(c.r[4], c.r[6].w[0] + 96u);  if (depth < kMaxDepth) unit_0079(c, 151u, depth + 1u); else { c.pc = 0x002E7010u; return; } if (c.pc != 0x002B85F8u) [[unlikely]] return; }
L_002B85F8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 4u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B8628; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 23336u)));
    set32(c.r[5], 0u + 3150u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B861Cu); set32(c.r[4], c.r[6].w[0] + 180u);  if (depth < kMaxDepth) unit_0079(c, 151u, depth + 1u); else { c.pc = 0x002E7010u; return; } if (c.pc != 0x002B861Cu) [[unlikely]] return; }
L_002B861C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B8638; } }
    c.budget -= 1;
L_002B8628:
    set32(c.r[6], ld32((c.r[28].w[0] - 23336u)));
    set32(c.r[5], 0u + 3149u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8638u); set32(c.r[4], c.r[6].w[0] + 180u);  if (depth < kMaxDepth) unit_0079(c, 151u, depth + 1u); else { c.pc = 0x002E7010u; return; } if (c.pc != 0x002B8638u) [[unlikely]] return; }
L_002B8638:
    set32(c.r[6], ld32((c.r[28].w[0] - 23336u)));
    set32(c.r[5], 0u + 3148u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8648u); set32(c.r[4], c.r[6].w[0] + 264u);  if (depth < kMaxDepth) unit_007C(c, 138u, depth + 1u); else { c.pc = 0x002F0F90u; return; } if (c.pc != 0x002B8648u) [[unlikely]] return; }
L_002B8648:
    set32(c.r[5], ld32((c.r[28].w[0] - 23336u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8654u); set32(c.r[4], c.r[5].w[0] + 512u);  if (depth < kMaxDepth) unit_007C(c, 72u, depth + 1u); else { c.pc = 0x002F0530u; return; } if (c.pc != 0x002B8654u) [[unlikely]] return; }
L_002B8654:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B865Cu);  if (depth < kMaxDepth) unit_0048(c, 276u, depth + 1u); else { c.pc = 0x00223E60u; return; } if (c.pc != 0x002B865Cu) [[unlikely]] return; }
L_002B865C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01630000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00060000u);
    c.r[4].d[0] = c.r[2].d[0] | 61440ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x018F0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8674u); c.r[6].d[0] = c.r[2].d[0] | 61440ull;  if (depth < kMaxDepth) unit_008B(c, 28u, depth + 1u); else { c.pc = 0x0032C230u; return; } if (c.pc != 0x002B8674u) [[unlikely]] return; }
L_002B8674:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002B8AB8; } }
L_002B8688:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8690u);  if (depth < kMaxDepth) unit_0045(c, 24u, depth + 1u); else { c.pc = 0x00214260u; return; } if (c.pc != 0x002B8690u) [[unlikely]] return; }
L_002B8690:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B8AB8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B86ACu); set32(c.r[4], c.r[2].w[0] + 12u);  if (depth < kMaxDepth) unit_0079(c, 155u, depth + 1u); else { c.pc = 0x002E7090u; return; } if (c.pc != 0x002B86ACu) [[unlikely]] return; }
L_002B86AC:
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B86C0u); set32(c.r[4], c.r[2].w[0] + 96u);  if (depth < kMaxDepth) unit_0079(c, 155u, depth + 1u); else { c.pc = 0x002E7090u; return; } if (c.pc != 0x002B86C0u) [[unlikely]] return; }
L_002B86C0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B86D4u); set32(c.r[4], c.r[2].w[0] + 180u);  if (depth < kMaxDepth) unit_0079(c, 155u, depth + 1u); else { c.pc = 0x002E7090u; return; } if (c.pc != 0x002B86D4u) [[unlikely]] return; }
L_002B86D4:
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B86E4u); set32(c.r[4], c.r[2].w[0] + 264u);  if (depth < kMaxDepth) unit_007C(c, 143u, depth + 1u); else { c.pc = 0x002F0FF0u; return; } if (c.pc != 0x002B86E4u) [[unlikely]] return; }
L_002B86E4:
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B86F0u); set32(c.r[4], c.r[2].w[0] + 512u);  if (depth < kMaxDepth) unit_007C(c, 76u, depth + 1u); else { c.pc = 0x002F05A0u; return; } if (c.pc != 0x002B86F0u) [[unlikely]] return; }
L_002B86F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B86F8u);  if (depth < kMaxDepth) unit_000B(c, 35u, depth + 1u); else { c.pc = 0x0012CB40u; return; } if (c.pc != 0x002B86F8u) [[unlikely]] return; }
L_002B86F8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 7u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B8718; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8714u);  if (depth < kMaxDepth) unit_008C(c, 166u, depth + 1u); else { c.pc = 0x00332B00u; return; } if (c.pc != 0x002B8714u) [[unlikely]] return; }
L_002B8714:
    c.budget -= 1;
L_002B8718:
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 15u);
    set32(c.r[2], ld32((c.r[2].w[0] + 296u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8734u); set32(c.r[6], c.r[2].w[0] + 6240u);  if (depth < kMaxDepth) unit_004B(c, 96u, depth + 1u); else { c.pc = 0x0022D4F0u; return; } if (c.pc != 0x002B8734u) [[unlikely]] return; }
L_002B8734:
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 44u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8744u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0082(c, 99u, depth + 1u); else { c.pc = 0x003088F0u; return; } if (c.pc != 0x002B8744u) [[unlikely]] return; }
L_002B8744:
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    st32((c.r[3].w[0] + 1008u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 44u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B875Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0082(c, 99u, depth + 1u); else { c.pc = 0x003088F0u; return; } if (c.pc != 0x002B875Cu) [[unlikely]] return; }
L_002B875C:
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    st32((c.r[3].w[0] + 1012u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 44u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8774u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0082(c, 99u, depth + 1u); else { c.pc = 0x003088F0u; return; } if (c.pc != 0x002B8774u) [[unlikely]] return; }
L_002B8774:
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    st32((c.r[3].w[0] + 1016u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 44u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B878Cu); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0082(c, 99u, depth + 1u); else { c.pc = 0x003088F0u; return; } if (c.pc != 0x002B878Cu) [[unlikely]] return; }
L_002B878C:
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    c.r[17].d[0] = 0ull + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[3].w[0] + 1020u), c.r[2].w[0]);
    c.budget -= 5;
L_002B87A0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    c.r[4].d[0] = c.r[18].d[0] << 56;
    set32(c.r[5], ld32((c.r[2].w[0] + 44u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B87B4u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);  if (depth < kMaxDepth) unit_0082(c, 392u, depth + 1u); else { c.pc = 0x0030B870u; return; } if (c.pc != 0x002B87B4u) [[unlikely]] return; }
L_002B87B4:
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0] + 1036u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B87D0u); set32(c.r[4], ld32((c.r[2].w[0] + 1036u)));  if (depth < kMaxDepth) unit_0083(c, 37u, depth + 1u); else { c.pc = 0x0030C7D0u; return; } if (c.pc != 0x002B87D0u) [[unlikely]] return; }
L_002B87D0:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B87E8; } }
    set32(c.r[17], 0u + 1u);
    c.budget -= 2;
L_002B87E8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B87A0u | kUnwind; return; } goto L_002B87A0; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002B8848; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002B8808:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18233u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << (c.r[16].w[0] & 31u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B8838; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8834u); set32(c.r[4], ld32((c.r[2].w[0] + 1036u)));  if (depth < kMaxDepth) unit_0083(c, 33u, depth + 1u); else { c.pc = 0x0030C700u; return; } if (c.pc != 0x002B8834u) [[unlikely]] return; }
L_002B8834:
    c.budget -= 1;
L_002B8838:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B8808u | kUnwind; return; } goto L_002B8808; } }
L_002B8848:
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    set32(c.r[6], 0u + 2u);
    set32(c.r[16], ld32((c.r[2].w[0] + 296u)));
    set32(c.r[17], c.r[2].w[0] + 1060u);
    set32(c.r[5], c.r[2].w[0] + 264u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8864u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_007C(c, 149u, depth + 1u); else { c.pc = 0x002F10C0u; return; } if (c.pc != 0x002B8864u) [[unlikely]] return; }
L_002B8864:
    st32((c.r[17].w[0] + 8u), c.r[16].w[0]);
    set32(c.r[2], c.r[16].w[0] + 240u);
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[2], c.r[16].w[0] + 480u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + 720u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + 960u);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + 1200u);
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + 1920u);
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + 2160u);
    st32((c.r[17].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + 2400u);
    st32((c.r[17].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + 2640u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + 2880u);
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + 3120u);
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + 3840u);
    st32((c.r[17].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + 4080u);
    st32((c.r[17].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + 4320u);
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + 4560u);
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + 3360u);
    st32((c.r[17].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + 3600u);
    st32((c.r[17].w[0] + 68u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18112u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 40;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002B8910; } }
    c.r[5].d[0] = 0ull | 33312ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8910u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_007C(c, 156u, depth + 1u); else { c.pc = 0x002F1160u; return; } if (c.pc != 0x002B8910u) [[unlikely]] return; }
L_002B8910:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B891Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_007C(c, 157u, depth + 1u); else { c.pc = 0x002F1170u; return; } if (c.pc != 0x002B891Cu) [[unlikely]] return; }
L_002B891C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18232u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B8948; } }
    c.r[2].d[0] = c.r[2].d[0] << 56;
    set32(c.r[3], 0u + 128u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[1].w[0] + 18228u), c.r[2].w[0]);
    c.budget -= 7;
L_002B8948:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18228u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18232u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8960u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_007C(c, 158u, depth + 1u); else { c.pc = 0x002F11D0u; return; } if (c.pc != 0x002B8960u) [[unlikely]] return; }
L_002B8960:
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.r[18].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[19], c.r[19].w[0] + 18112u);
    c.budget -= 4;
L_002B8970:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8978u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 69u)));  if (depth < kMaxDepth) unit_006E(c, 253u, depth + 1u); else { c.pc = 0x002BAA10u; return; } if (c.pc != 0x002B8978u) [[unlikely]] return; }
L_002B8978:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B8988; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 1u);  if (t) { goto L_002B8998; } }
L_002B8988:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 6u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B8970u | kUnwind; return; } goto L_002B8970; } }
L_002B8998:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B8948u | kUnwind; return; } goto L_002B8948; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 97u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B89B4u); st32((c.r[1].w[0] + 18228u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006E(c, 372u, depth + 1u); else { c.pc = 0x002BBDA0u; return; } if (c.pc != 0x002B89B4u) [[unlikely]] return; }
L_002B89B4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18112u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002B89D8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 1380u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002B89E0; } }
    c.budget -= 1;
L_002B89D8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    st8((c.r[2].w[0] + 1380u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_002B89E0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    st32((c.r[3].w[0] + 1308u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 44u)));
    set32(c.r[4], c.r[2].w[0] + 1312u);
    set32(c.r[5], c.r[3].w[0] + 15360u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8A0Cu); set32(c.r[6], c.r[3].w[0] + 15600u);  if (depth < kMaxDepth) unit_00AC(c, 54u, depth + 1u); else { c.pc = 0x003B0700u; return; } if (c.pc != 0x002B8A0Cu) [[unlikely]] return; }
L_002B8A0C:
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[4], c.r[3].w[0] + 1328u);
    set32(c.r[5], c.r[2].w[0] + 15360u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8A2Cu); set32(c.r[6], c.r[2].w[0] + 15600u);  if (depth < kMaxDepth) unit_00AC(c, 54u, depth + 1u); else { c.pc = 0x003B0700u; return; } if (c.pc != 0x002B8A2Cu) [[unlikely]] return; }
L_002B8A2C:
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[4], c.r[3].w[0] + 1344u);
    set32(c.r[5], c.r[2].w[0] + 15360u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8A4Cu); set32(c.r[6], c.r[2].w[0] + 15600u);  if (depth < kMaxDepth) unit_00AC(c, 54u, depth + 1u); else { c.pc = 0x003B0700u; return; } if (c.pc != 0x002B8A4Cu) [[unlikely]] return; }
L_002B8A4C:
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], 0u + 1u);
    st8((c.r[2].w[0] + 1385u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8A68u); st16((c.r[2].w[0] + 1382u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_006E(c, 272u, depth + 1u); else { c.pc = 0x002BAE50u; return; } if (c.pc != 0x002B8A68u) [[unlikely]] return; }
L_002B8A68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8A70u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_004E(c, 55u, depth + 1u); else { c.pc = 0x00238800u; return; } if (c.pc != 0x002B8A70u) [[unlikely]] return; }
L_002B8A70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 46u);  if (t) { goto L_002B8A80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8A80u);  if (depth < kMaxDepth) unit_004E(c, 35u, depth + 1u); else { c.pc = 0x002382B0u; return; } if (c.pc != 0x002B8A80u) [[unlikely]] return; }
L_002B8A80:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    st8((c.r[2].w[0] + 1376u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    st8((c.r[2].w[0] + 1377u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    st8((c.r[2].w[0] + 1379u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8AB8u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18113u)));  if (depth < kMaxDepth) unit_006E(c, 214u, depth + 1u); else { c.pc = 0x002BA350u; return; } if (c.pc != 0x002B8AB8u) [[unlikely]] return; }
L_002B8AB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002B8AE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[17], c.r[17].w[0] + 9536u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 10;
L_002B8B08:
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    c.r[5].d[0] = ld16((c.r[17].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8B1Cu); set32(c.r[4], c.r[2].w[0] + 1240u);  if (depth < kMaxDepth) unit_0049(c, 391u, depth + 1u); else { c.pc = 0x00227960u; return; } if (c.pc != 0x002B8B1Cu) [[unlikely]] return; }
L_002B8B1C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 16u);
    c.r[3].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B8B08u | kUnwind; return; } goto L_002B8B08; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002B8B50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 7u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B8BE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8B74u);  if (depth < kMaxDepth) unit_0084(c, 345u, depth + 1u); else { c.pc = 0x00312CE0u; return; } if (c.pc != 0x002B8B74u) [[unlikely]] return; }
L_002B8B74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_002B8BD0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002B8BC0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002B8B98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B8BD0; } }
L_002B8B98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8BA0u);  if (depth < kMaxDepth) unit_0046(c, 201u, depth + 1u); else { c.pc = 0x0021B4E0u; return; } if (c.pc != 0x002B8BA0u) [[unlikely]] return; }
L_002B8BA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8BA8u);  if (depth < kMaxDepth) unit_006E(c, 69u, depth + 1u); else { c.pc = 0x002B8AE0u; return; } if (c.pc != 0x002B8BA8u) [[unlikely]] return; }
L_002B8BA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8BB0u);  if (depth < kMaxDepth) unit_006E(c, 85u, depth + 1u); else { c.pc = 0x002B8C20u; return; } if (c.pc != 0x002B8BB0u) [[unlikely]] return; }
L_002B8BB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8BB8u);  if (depth < kMaxDepth) unit_006E(c, 93u, depth + 1u); else { c.pc = 0x002B8D80u; return; } if (c.pc != 0x002B8BB8u) [[unlikely]] return; }
L_002B8BB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B8BD0; } }
L_002B8BC0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8BCCu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 82u)));  if (depth < kMaxDepth) unit_0081(c, 193u, depth + 1u); else { c.pc = 0x00306A70u; return; } if (c.pc != 0x002B8BCCu) [[unlikely]] return; }
L_002B8BCC:
    c.budget -= 1;
L_002B8BD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8BD8u);  if (depth < kMaxDepth) unit_006E(c, 99u, depth + 1u); else { c.pc = 0x002B8DC0u; return; } if (c.pc != 0x002B8BD8u) [[unlikely]] return; }
L_002B8BD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B8C08; } }
L_002B8BE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8BE8u);  if (depth < kMaxDepth) unit_0046(c, 201u, depth + 1u); else { c.pc = 0x0021B4E0u; return; } if (c.pc != 0x002B8BE8u) [[unlikely]] return; }
L_002B8BE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8BF0u);  if (depth < kMaxDepth) unit_006E(c, 69u, depth + 1u); else { c.pc = 0x002B8AE0u; return; } if (c.pc != 0x002B8BF0u) [[unlikely]] return; }
L_002B8BF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8BF8u);  if (depth < kMaxDepth) unit_006E(c, 85u, depth + 1u); else { c.pc = 0x002B8C20u; return; } if (c.pc != 0x002B8BF8u) [[unlikely]] return; }
L_002B8BF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8C00u);  if (depth < kMaxDepth) unit_006E(c, 93u, depth + 1u); else { c.pc = 0x002B8D80u; return; } if (c.pc != 0x002B8C00u) [[unlikely]] return; }
L_002B8C00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8C08u);  if (depth < kMaxDepth) unit_006E(c, 99u, depth + 1u); else { c.pc = 0x002B8DC0u; return; } if (c.pc != 0x002B8C08u) [[unlikely]] return; }
L_002B8C08:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B8C20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[5], c.r[4].w[0] + 5u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_002B8D48; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002B8CC0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002B8C98; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B8C68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B8D70; } }
    c.budget -= 1;
L_002B8C68:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    set32(c.r[5], 0u + 8u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8C84u); st8((c.r[2].w[0] + 1304u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x002B8C84u) [[unlikely]] return; }
L_002B8C84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8C8Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0046(c, 199u, depth + 1u); else { c.pc = 0x0021B430u; return; } if (c.pc != 0x002B8C8Cu) [[unlikely]] return; }
L_002B8C8C:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 54u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002B8D70; } }
L_002B8C98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8CA0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0046(c, 199u, depth + 1u); else { c.pc = 0x0021B430u; return; } if (c.pc != 0x002B8CA0u) [[unlikely]] return; }
L_002B8CA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B8D70; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002B8D70; } }
    c.budget -= 1;
L_002B8CC0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[2].w[0] - 24448u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1376u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8CE4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B8CE4u) [[unlikely]] return; }
L_002B8CE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_002B8D28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8CF4u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x002B8CF4u) [[unlikely]] return; }
L_002B8CF4:
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], ld32((c.r[3].w[0] + 1388u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[6].d[0]; set32(c.r[4], 0u + 2u);  if (t) { goto L_002B8D10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8D10u); set32(c.r[5], 0u + 32u);  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x002B8D10u) [[unlikely]] return; }
L_002B8D10:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002B8D70; } }
    c.budget -= 1;
L_002B8D28:
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    set32(c.r[4], c.r[3].w[0] + 1382u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 1382u)));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_002B8D70; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002B8D70; } }
L_002B8D48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8D50u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0046(c, 199u, depth + 1u); else { c.pc = 0x0021B430u; return; } if (c.pc != 0x002B8D50u) [[unlikely]] return; }
L_002B8D50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B8D70; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 2u);
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_002B8D70:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B8D80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8D90u);  if (depth < kMaxDepth) unit_006E(c, 291u, depth + 1u); else { c.pc = 0x002BB2F0u; return; } if (c.pc != 0x002B8D90u) [[unlikely]] return; }
L_002B8D90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8D98u);  if (depth < kMaxDepth) unit_006B(c, 17u, depth + 1u); else { c.pc = 0x002AC350u; return; } if (c.pc != 0x002B8D98u) [[unlikely]] return; }
L_002B8D98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8DA0u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_006B(c, 9u, depth + 1u); else { c.pc = 0x002AC1A0u; return; } if (c.pc != 0x002B8DA0u) [[unlikely]] return; }
L_002B8DA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8DA8u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x002B8DA8u) [[unlikely]] return; }
L_002B8DA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8DB0u);  if (depth < kMaxDepth) unit_006E(c, 292u, depth + 1u); else { c.pc = 0x002BB330u; return; } if (c.pc != 0x002B8DB0u) [[unlikely]] return; }
L_002B8DB0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B8DC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8DD0u);  if (depth < kMaxDepth) unit_008B(c, 62u, depth + 1u); else { c.pc = 0x0032C500u; return; } if (c.pc != 0x002B8DD0u) [[unlikely]] return; }
L_002B8DD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8DD8u);  if (depth < kMaxDepth) unit_0046(c, 204u, depth + 1u); else { c.pc = 0x0021B570u; return; } if (c.pc != 0x002B8DD8u) [[unlikely]] return; }
L_002B8DD8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8DE4u); set32(c.r[4], c.r[4].w[0] - 15024u);  if (depth < kMaxDepth) unit_0043(c, 416u, depth + 1u); else { c.pc = 0x0020FEF0u; return; } if (c.pc != 0x002B8DE4u) [[unlikely]] return; }
L_002B8DE4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8DF0u); set32(c.r[4], c.r[4].w[0] - 19232u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x002B8DF0u) [[unlikely]] return; }
L_002B8DF0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00390000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8DFCu); set32(c.r[4], c.r[4].w[0] - 21072u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x002B8DFCu) [[unlikely]] return; }
L_002B8DFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8E04u);  if (depth < kMaxDepth) unit_008B(c, 22u, depth + 1u); else { c.pc = 0x0032C1B0u; return; } if (c.pc != 0x002B8E04u) [[unlikely]] return; }
L_002B8E04:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B8E10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23336u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1377u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002B8E70; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B8E48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B9010; } }
    c.budget -= 1;
L_002B8E48:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1380u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 3600u);  if (t) { goto L_002B8E58; } }
    st16((c.r[4].w[0] + 1382u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_002B8E58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8E60u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 272u, depth + 1u); else { c.pc = 0x002BAE50u; return; } if (c.pc != 0x002B8E60u) [[unlikely]] return; }
L_002B8E60:
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1377u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 1377u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_002B8E70:
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 1382u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B8E98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8E88u);  if (depth < kMaxDepth) unit_006E(c, 241u, depth + 1u); else { c.pc = 0x002BA700u; return; } if (c.pc != 0x002B8E88u) [[unlikely]] return; }
L_002B8E88:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8E94u); set32(c.r[5], 0u + 165u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x002B8E94u) [[unlikely]] return; }
L_002B8E94:
    c.budget -= 1;
L_002B8E98:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18112u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 16384u);  if (t) { goto L_002B8F28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8EB4u);  if (depth < kMaxDepth) unit_006E(c, 120u, depth + 1u); else { c.pc = 0x002B9030u; return; } if (c.pc != 0x002B8EB4u) [[unlikely]] return; }
L_002B8EB4:
    c.r[16].d[0] = c.r[2].d[0] << 56;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002B8F28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8ED0u); set32(c.r[5], 0u + 165u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x002B8ED0u) [[unlikely]] return; }
L_002B8ED0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8ED8u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_006E(c, 272u, depth + 1u); else { c.pc = 0x002BAE50u; return; } if (c.pc != 0x002B8ED8u) [[unlikely]] return; }
L_002B8ED8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    set32(c.r[2], c.r[16].w[0] << 4);
    set32(c.r[4], 0u + 1u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[3].w[0] + 212u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8EF8u); set32(c.r[7], c.r[2].w[0] + 1240u);  if (depth < kMaxDepth) unit_00C1(c, 307u, depth + 1u); else { c.pc = 0x004063E0u; return; } if (c.pc != 0x002B8EF8u) [[unlikely]] return; }
L_002B8EF8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    set32(c.r[4], 0u + 4u);
    st32((c.r[3].w[0] + 1056u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[3].w[0] + 1376u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    st8((c.r[3].w[0] + 1377u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 1384u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (t) { goto L_002B9018; } }
    c.budget -= 1;
L_002B8F28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8F30u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_006E(c, 120u, depth + 1u); else { c.pc = 0x002B9030u; return; } if (c.pc != 0x002B8F30u) [[unlikely]] return; }
L_002B8F30:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.r[16].d[0] = c.r[2].d[0] << 56;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18112u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);  if (t) { goto L_002B8FB0; } }
    c.r[17].d[0] = c.r[16].d[0] << 56;
    set32(c.r[2], 0u - 1u);
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002B8FB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8F64u); set32(c.r[5], 0u + 167u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x002B8F64u) [[unlikely]] return; }
L_002B8F64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8F6Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_006E(c, 272u, depth + 1u); else { c.pc = 0x002BAE50u; return; } if (c.pc != 0x002B8F6Cu) [[unlikely]] return; }
L_002B8F6C:
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    set32(c.r[2], c.r[17].w[0] << 4);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8F8Cu); set32(c.r[7], c.r[2].w[0] + 1240u);  if (depth < kMaxDepth) unit_00A0(c, 389u, depth + 1u); else { c.pc = 0x003837A0u; return; } if (c.pc != 0x002B8F8Cu) [[unlikely]] return; }
L_002B8F8C:
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    set32(c.r[4], 0u + 3u);
    st32((c.r[3].w[0] + 1052u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[3].w[0] + 1376u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 1377u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002B9018; } }
L_002B8FB0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    set32(c.r[2], 0u - 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1385u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_002B9010; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8FCCu);  if (depth < kMaxDepth) unit_006E(c, 272u, depth + 1u); else { c.pc = 0x002BAE50u; return; } if (c.pc != 0x002B8FCCu) [[unlikely]] return; }
L_002B8FCC:
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1385u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[2], c.r[6].w[0] << 4);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8FECu); set32(c.r[7], c.r[2].w[0] + 1240u);  if (depth < kMaxDepth) unit_00A0(c, 389u, depth + 1u); else { c.pc = 0x003837A0u; return; } if (c.pc != 0x002B8FECu) [[unlikely]] return; }
L_002B8FEC:
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    set32(c.r[4], 0u + 3u);
    st32((c.r[3].w[0] + 1052u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[3].w[0] + 1376u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 1377u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002B9018; } }
L_002B9010:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002B9018:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B9030:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 10;
L_002B9058:
    c.r[4].d[0] = c.r[16].d[0] << 56;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9064u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);  if (depth < kMaxDepth) unit_006E(c, 277u, depth + 1u); else { c.pc = 0x002BAEE0u; return; } if (c.pc != 0x002B9064u) [[unlikely]] return; }
L_002B9064:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B9080; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 1u);  if (t) { goto L_002B9090; } }
L_002B9080:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B9058u | kUnwind; return; } goto L_002B9058; } }
L_002B9090:
    c.r[16].d[0] = 0ull + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_002B90A0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B90B0u); set32(c.r[4], ld32((c.r[2].w[0] + 1036u)));  if (depth < kMaxDepth) unit_0083(c, 37u, depth + 1u); else { c.pc = 0x0030C7D0u; return; } if (c.pc != 0x002B90B0u) [[unlikely]] return; }
L_002B90B0:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 3u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B9108; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 1244u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[20].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B9108; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002B90F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B90ECu); set32(c.r[5], 0u + 171u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x002B90ECu) [[unlikely]] return; }
L_002B90EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B9120; } }
    c.budget -= 1;
L_002B90F8:
    c.r[2].d[0] = c.r[16].d[0] << 56;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);  if (t) { goto L_002B9128; } }
    c.budget -= 1;
L_002B9108:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B90A0u | kUnwind; return; } goto L_002B90A0; } }
    c.budget -= 1;
L_002B9120:
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_002B9128:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002B9150:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23336u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1377u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[16], c.r[4].w[0] + 1060u);  if (t) { goto L_002B9410; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 21888u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002B8000u < 16384u) { entry = entries_006E[(t - 0x002B8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002B9190:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9198u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1384u)));  if (depth < kMaxDepth) unit_006E(c, 226u, depth + 1u); else { c.pc = 0x002BA4F0u; return; } if (c.pc != 0x002B9198u) [[unlikely]] return; }
L_002B9198:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B91A4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007C(c, 155u, depth + 1u); else { c.pc = 0x002F1150u; return; } if (c.pc != 0x002B91A4u) [[unlikely]] return; }
L_002B91A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B91ACu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 258u, depth + 1u); else { c.pc = 0x002BACA0u; return; } if (c.pc != 0x002B91ACu) [[unlikely]] return; }
L_002B91AC:
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1377u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 1377u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002B9410; } }
L_002B91C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.f[2] = ld32((c.r[4].w[0] + 1308u));
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    st32((c.r[4].w[0] + 1308u), c.f[1]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    c.f[1] = ld32((c.r[2].w[0] + 1308u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], c.r[2].w[0] + 1308u);  if (t) { goto L_002B9410; } }
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1377u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 1377u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002B9410; } }
    c.budget -= 1;
L_002B9210:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9218u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007C(c, 187u, depth + 1u); else { c.pc = 0x002F1840u; return; } if (c.pc != 0x002B9218u) [[unlikely]] return; }
L_002B9218:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002B9410; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1377u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 1377u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1380u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1800u);  if (t) { goto L_002B9410; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 1382u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002B9410; } }
    c.budget -= 1;
L_002B9250:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 1382u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B9268; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9264u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007C(c, 184u, depth + 1u); else { c.pc = 0x002F17E0u; return; } if (c.pc != 0x002B9264u) [[unlikely]] return; }
L_002B9264:
    c.budget -= 1;
L_002B9268:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9270u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007C(c, 166u, depth + 1u); else { c.pc = 0x002F1350u; return; } if (c.pc != 0x002B9270u) [[unlikely]] return; }
L_002B9270:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B9410; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002B9310; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 97u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    st32((c.r[1].w[0] + 18228u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    st8((c.r[1].w[0] + 18232u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 96u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B92D0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 95u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 94u)));
    set32(c.r[2], c.r[4].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B92D0; } }
    set32(c.r[2], c.r[4].w[0] - c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[1].w[0] + 18232u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_002B92D0:
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002B92D8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B92E8u); set32(c.r[4], ld32((c.r[2].w[0] + 1008u)));  if (depth < kMaxDepth) unit_0082(c, 297u, depth + 1u); else { c.pc = 0x0030A410u; return; } if (c.pc != 0x002B92E8u) [[unlikely]] return; }
L_002B92E8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B92D8u | kUnwind; return; } goto L_002B92D8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1377u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 1377u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002B9410; } }
    c.budget -= 1;
L_002B9310:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);  if (t) { goto L_002B9410; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18228u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18232u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9330u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007C(c, 158u, depth + 1u); else { c.pc = 0x002F11D0u; return; } if (c.pc != 0x002B9330u) [[unlikely]] return; }
L_002B9330:
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1377u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 1377u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002B9410; } }
    c.budget -= 1;
L_002B9348:
    set32(c.r[2], 0u - 1u);
    st16((c.r[4].w[0] + 1382u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9358u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007C(c, 188u, depth + 1u); else { c.pc = 0x002F18A0u; return; } if (c.pc != 0x002B9358u) [[unlikely]] return; }
L_002B9358:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002B9410; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B936Cu);  if (depth < kMaxDepth) unit_007C(c, 157u, depth + 1u); else { c.pc = 0x002F1170u; return; } if (c.pc != 0x002B936Cu) [[unlikely]] return; }
L_002B936C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9374u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_006E(c, 258u, depth + 1u); else { c.pc = 0x002BACA0u; return; } if (c.pc != 0x002B9374u) [[unlikely]] return; }
L_002B9374:
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1377u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 1377u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002B9410; } }
L_002B9388:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.f[2] = ld32((c.r[4].w[0] + 1308u));
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[4].w[0] + 1308u), c.f[1]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    c.f[1] = ld32((c.r[2].w[0] + 1308u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], c.r[2].w[0] + 1308u);  if (t) { goto L_002B93C8; } }
    st32((c.r[3].w[0]), c.f[0]);
    c.budget -= 2;
L_002B93C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B93D0u);  if (depth < kMaxDepth) unit_006E(c, 263u, depth + 1u); else { c.pc = 0x002BAD30u; return; } if (c.pc != 0x002B93D0u) [[unlikely]] return; }
L_002B93D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B9410; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[3].w[0] + 1308u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], 0u + 1u);  if (t) { goto L_002B9410; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B93FCu);  if (depth < kMaxDepth) unit_006E(c, 267u, depth + 1u); else { c.pc = 0x002BADC0u; return; } if (c.pc != 0x002B93FCu) [[unlikely]] return; }
L_002B93FC:
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    st8((c.r[2].w[0] + 1376u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    st8((c.r[2].w[0] + 1377u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_002B9410:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B9430:
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 18112u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1384u)));
    c.budget -= 6;
L_002B9448:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_002B9460; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B9478; } }
    c.budget -= 1;
L_002B9460:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[3].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 6u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B9448u | kUnwind; return; } goto L_002B9448; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002B9478:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B9480:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23336u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1377u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_002B9758; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 21856u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002B8000u < 16384u) { entry = entries_006E[(t - 0x002B8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002B94B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B94C0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 258u, depth + 1u); else { c.pc = 0x002BACA0u; return; } if (c.pc != 0x002B94C0u) [[unlikely]] return; }
L_002B94C0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1377u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 1377u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002B9758; } }
    c.budget -= 1;
L_002B94D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.f[2] = ld32((c.r[4].w[0] + 1308u));
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    st32((c.r[4].w[0] + 1308u), c.f[1]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    c.f[1] = ld32((c.r[2].w[0] + 1308u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], c.r[2].w[0] + 1308u);  if (t) { goto L_002B9758; } }
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1377u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 1377u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002B9758; } }
    c.budget -= 1;
L_002B9528:
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1384u)));
    set32(c.r[5], c.r[29].w[0] + 44u);
    set32(c.r[4], 0u + 2u);
    st8((c.r[29].w[0] + 44u), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0] + 45u), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0] + 46u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9548u); st8((c.r[29].w[0] + 47u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0080(c, 275u, depth + 1u); else { c.pc = 0x00302D10u; return; } if (c.pc != 0x002B9548u) [[unlikely]] return; }
L_002B9548:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9550u);  if (depth < kMaxDepth) unit_006E(c, 147u, depth + 1u); else { c.pc = 0x002B9430u; return; } if (c.pc != 0x002B9550u) [[unlikely]] return; }
L_002B9550:
    set32(c.r[4], c.r[2].w[0] << 1);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 18179u);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9570u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0080(c, 284u, depth + 1u); else { c.pc = 0x00302F90u; return; } if (c.pc != 0x002B9570u) [[unlikely]] return; }
L_002B9570:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 18204u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], 0u + 12u);
    set32(c.r[7], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9594u); set32(c.r[6], 0u + 20u);  if (depth < kMaxDepth) unit_008D(c, 323u, depth + 1u); else { c.pc = 0x003374D0u; return; } if (c.pc != 0x002B9594u) [[unlikely]] return; }
L_002B9594:
    c.r[4].d[0] = c.r[16].d[0] << 56;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B95A0u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);  if (depth < kMaxDepth) unit_006E(c, 226u, depth + 1u); else { c.pc = 0x002BA4F0u; return; } if (c.pc != 0x002B95A0u) [[unlikely]] return; }
L_002B95A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B95A8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 338u, depth + 1u); else { c.pc = 0x0038AE70u; return; } if (c.pc != 0x002B95A8u) [[unlikely]] return; }
L_002B95A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B95B0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_00A2(c, 336u, depth + 1u); else { c.pc = 0x0038AE10u; return; } if (c.pc != 0x002B95B0u) [[unlikely]] return; }
L_002B95B0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1377u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 1377u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002B9758; } }
    c.budget -= 1;
L_002B95C8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[2], c.r[2].w[0] + 18204u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B95E4u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00A2(c, 326u, depth + 1u); else { c.pc = 0x0038AD10u; return; } if (c.pc != 0x002B95E4u) [[unlikely]] return; }
L_002B95E4:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B9758; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002B9658; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B960Cu); set32(c.r[6], 0u + 21u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x002B960Cu) [[unlikely]] return; }
L_002B960C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9614u);  if (depth < kMaxDepth) unit_00A2(c, 335u, depth + 1u); else { c.pc = 0x0038AE00u; return; } if (c.pc != 0x002B9614u) [[unlikely]] return; }
L_002B9614:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9620u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x002B9620u) [[unlikely]] return; }
L_002B9620:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9628u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 273u, depth + 1u); else { c.pc = 0x00302CA0u; return; } if (c.pc != 0x002B9628u) [[unlikely]] return; }
L_002B9628:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B9658; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[2], c.r[2].w[0] + 18204u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1384u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9654u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0080(c, 289u, depth + 1u); else { c.pc = 0x00303050u; return; } if (c.pc != 0x002B9654u) [[unlikely]] return; }
L_002B9654:
    c.budget -= 1;
L_002B9658:
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 12u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B966Cu); set32(c.r[6], 0u + 20u);  if (depth < kMaxDepth) unit_008D(c, 323u, depth + 1u); else { c.pc = 0x003374D0u; return; } if (c.pc != 0x002B966Cu) [[unlikely]] return; }
L_002B966C:
    set32(c.r[4], ld32((c.r[28].w[0] - 23336u)));
    set32(c.r[3], 0u + 10u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1377u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 1377u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 1378u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002B9758; } }
    c.budget -= 1;
L_002B9690:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1378u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[4].w[0] + 1378u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_002B9758; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B96B4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 336u, depth + 1u); else { c.pc = 0x0038AE10u; return; } if (c.pc != 0x002B96B4u) [[unlikely]] return; }
L_002B96B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B96BCu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_006E(c, 258u, depth + 1u); else { c.pc = 0x002BACA0u; return; } if (c.pc != 0x002B96BCu) [[unlikely]] return; }
L_002B96BC:
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1377u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 1377u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002B9758; } }
L_002B96D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.f[2] = ld32((c.r[4].w[0] + 1308u));
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[4].w[0] + 1308u), c.f[1]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    c.f[1] = ld32((c.r[2].w[0] + 1308u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], c.r[2].w[0] + 1308u);  if (t) { goto L_002B9710; } }
    st32((c.r[3].w[0]), c.f[0]);
    c.budget -= 2;
L_002B9710:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9718u);  if (depth < kMaxDepth) unit_006E(c, 263u, depth + 1u); else { c.pc = 0x002BAD30u; return; } if (c.pc != 0x002B9718u) [[unlikely]] return; }
L_002B9718:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B9758; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[3].w[0] + 1308u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], 0u + 1u);  if (t) { goto L_002B9758; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9744u);  if (depth < kMaxDepth) unit_006E(c, 267u, depth + 1u); else { c.pc = 0x002BADC0u; return; } if (c.pc != 0x002B9744u) [[unlikely]] return; }
L_002B9744:
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    st8((c.r[2].w[0] + 1376u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    st8((c.r[2].w[0] + 1377u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_002B9758:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B9770:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    set32(c.r[4], c.r[3].w[0] + 1377u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1377u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002B9860; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002B97B0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B97A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B9890; } }
L_002B97A8:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002B97B0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B97BCu); set32(c.r[4], ld32((c.r[2].w[0] + 1052u)));  if (depth < kMaxDepth) unit_00A0(c, 444u, depth + 1u); else { c.pc = 0x00383F10u; return; } if (c.pc != 0x002B97BCu) [[unlikely]] return; }
L_002B97BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B9890; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 23336u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[6].w[0] + 1052u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002B9830; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B97F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B9848; } }
    c.budget -= 1;
L_002B97F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002B9808; } }
    st32((c.r[6].w[0] + 1388u), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_002B9898; } }
    c.budget -= 1;
L_002B9808:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1385u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 1036u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9820u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0083(c, 29u, depth + 1u); else { c.pc = 0x0030C630u; return; } if (c.pc != 0x002B9820u) [[unlikely]] return; }
L_002B9820:
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 1385u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002B9848; } }
L_002B9830:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002B9848; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 1388u), c.r[3].w[0]);  if (t) { goto L_002B9898; } }
L_002B9848:
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1377u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 1377u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002B9890; } }
    c.budget -= 1;
L_002B9860:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9868u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 272u, depth + 1u); else { c.pc = 0x002BAE50u; return; } if (c.pc != 0x002B9868u) [[unlikely]] return; }
L_002B9868:
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9874u); set32(c.r[4], ld32((c.r[2].w[0] + 1052u)));  if (depth < kMaxDepth) unit_00A0(c, 445u, depth + 1u); else { c.pc = 0x00383F50u; return; } if (c.pc != 0x002B9874u) [[unlikely]] return; }
L_002B9874:
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    st32((c.r[2].w[0] + 1052u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    st8((c.r[2].w[0] + 1376u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    st8((c.r[2].w[0] + 1377u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
L_002B9890:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002B9898:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B98B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23336u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1377u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002B99A0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002B9940; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B98E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B99E8; } }
    c.budget -= 1;
L_002B98E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.f[2] = ld32((c.r[4].w[0] + 1308u));
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    st32((c.r[4].w[0] + 1308u), c.f[1]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    c.f[1] = ld32((c.r[2].w[0] + 1308u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], c.r[2].w[0] + 1308u);  if (t) { goto L_002B9930; } }
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1377u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 1377u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_002B9930:
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 1379u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002B99E8; } }
    c.budget -= 1;
L_002B9940:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1384u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 1244u));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B9978; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9964u); set32(c.r[4], 0u + 16384u);  if (depth < kMaxDepth) unit_006E(c, 120u, depth + 1u); else { c.pc = 0x002B9030u; return; } if (c.pc != 0x002B9964u) [[unlikely]] return; }
L_002B9964:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002B99E8; } }
L_002B9978:
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 167u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1377u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9994u); st8((c.r[3].w[0] + 1377u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x002B9994u) [[unlikely]] return; }
L_002B9994:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B99E8; } }
    c.budget -= 1;
L_002B99A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B99A8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 272u, depth + 1u); else { c.pc = 0x002BAE50u; return; } if (c.pc != 0x002B99A8u) [[unlikely]] return; }
L_002B99A8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B99B4u); set32(c.r[4], ld32((c.r[2].w[0] + 1056u)));  if (depth < kMaxDepth) unit_00C1(c, 309u, depth + 1u); else { c.pc = 0x004064A0u; return; } if (c.pc != 0x002B99B4u) [[unlikely]] return; }
L_002B99B4:
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 1308u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    st32((c.r[2].w[0] + 1056u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    st8((c.r[2].w[0] + 1376u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    st8((c.r[2].w[0] + 1377u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    st8((c.r[2].w[0] + 1379u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 13;
L_002B99E8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B9A00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 1388u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B9B78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9A28u);  if (depth < kMaxDepth) unit_006E(c, 192u, depth + 1u); else { c.pc = 0x002B9B90u; return; } if (c.pc != 0x002B9A28u) [[unlikely]] return; }
L_002B9A28:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 7u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B9AD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9A44u);  if (depth < kMaxDepth) unit_008C(c, 164u, depth + 1u); else { c.pc = 0x00332AE0u; return; } if (c.pc != 0x002B9A44u) [[unlikely]] return; }
L_002B9A44:
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 20u);
    set32(c.r[7], 0u + 4u);
    set32(c.r[3], 0u + 21u);
    set32(c.r[6], 0u + 5u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 7;
L_002B9A60:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], c.r[2].w[0] + c.r[10].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 291u)));
    c.budget -= 5;
    { const bool t = c.r[8].d[0] == c.r[7].d[0]; set32(c.r[9], c.r[2].w[0] + 291u);  if (t) { goto L_002B9A80; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_002B9AB8; } }
    c.budget -= 1;
L_002B9A80:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_002B9AB8; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != c.r[7].d[0];  if (t) { goto L_002B9A98; } }
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 1;
L_002B9A98:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], c.r[2].w[0] + c.r[10].w[0]);
    set32(c.r[8], c.r[2].w[0] + 291u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 291u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_002B9AB8; } }
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002B9AB8:
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.r[2].d[0] = c.r[10].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B9A60u | kUnwind; return; } goto L_002B9A60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B9B50; } }
L_002B9AD0:
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 20u);
    set32(c.r[7], 0u + 4u);
    set32(c.r[3], 0u + 21u);
    set32(c.r[6], 0u + 5u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 6;
L_002B9AE8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 291u)));
    c.budget -= 5;
    { const bool t = c.r[9].d[0] == c.r[7].d[0]; set32(c.r[10], c.r[2].w[0] + 291u);  if (t) { goto L_002B9B08; } }
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != c.r[6].d[0];  if (t) { goto L_002B9B40; } }
    c.budget -= 1;
L_002B9B08:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_002B9B40; } }
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != c.r[7].d[0];  if (t) { goto L_002B9B20; } }
    st8((c.r[10].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 1;
L_002B9B20:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[9], c.r[2].w[0] + 291u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 291u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_002B9B40; } }
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002B9B40:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[2].d[0] = c.r[8].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B9AE8u | kUnwind; return; } goto L_002B9AE8; } }
L_002B9B50:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002B9B58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9B60u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 270u, depth + 1u); else { c.pc = 0x00302BB0u; return; } if (c.pc != 0x002B9B60u) [[unlikely]] return; }
L_002B9B60:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B9B58u | kUnwind; return; } goto L_002B9B58; } }
    c.budget -= 1;
L_002B9B78:
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[2].w[0] + 1388u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B9B90:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[29].w[0] + 142u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[16], c.r[29].w[0] + 141u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[18], c.r[18].w[0] + 18112u);
    st8((c.r[29].w[0] + 140u), static_cast<std::uint8_t>(0u));
    c.budget -= 18;
L_002B9BD8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 69u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9BE4u); set32(c.r[19], c.r[18].w[0] + 67u);  if (depth < kMaxDepth) unit_006E(c, 253u, depth + 1u); else { c.pc = 0x002BAA10u; return; } if (c.pc != 0x002B9BE4u) [[unlikely]] return; }
L_002B9BE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B9BF8; } }
    set32(c.r[2], 0u - 2u);
    st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[19].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_002B9BF8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 6u);
    c.r[2].d[0] = c.r[20].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[4], c.r[3].w[0] + c.r[29].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 140u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[4].w[0] + 140u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B9BD8u | kUnwind; return; } goto L_002B9BD8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[6].sd[0] = static_cast<std::int32_t>(0x00BA0000u);  if (t) { goto L_002B9C80; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] + 18112u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 5;
L_002B9C40:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[6].w[0] + 67u);  if (t) { goto L_002B9C68; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[2], c.r[7].w[0] + 1u);
    c.r[7].d[0] = c.r[2].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.r[1].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002B9D28; } }
L_002B9C68:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 6u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B9C40u | kUnwind; return; } goto L_002B9C40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B9D28; } }
L_002B9C80:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 140u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[7].sd[0] = static_cast<std::int32_t>(0x00BA0000u);  if (t) { goto L_002B9CD8; } }
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] + 18112u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], 0u - 1u);
    c.budget -= 4;
L_002B9CA0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; set32(c.r[5], c.r[7].w[0] + 67u);  if (t) { goto L_002B9CC0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002B9CC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002B9D28; } }
L_002B9CC0:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 6u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B9CA0u | kUnwind; return; } goto L_002B9CA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B9D28; } }
L_002B9CD8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[6].sd[0] = static_cast<std::int32_t>(0x00BA0000u);  if (t) { goto L_002B9D28; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] + 18112u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
L_002B9CF8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[6].w[0] + 67u);  if (t) { goto L_002B9D18; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B9D18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_002B9D28; } }
L_002B9D18:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 6u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B9CF8u | kUnwind; return; } goto L_002B9CF8; } }
L_002B9D28:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], 0u - 1u);
    c.r[21].d[0] = 0ull << 56;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.r[21].d[0] = static_cast<std::uint64_t>(c.r[21].sd[0] >> 56);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    st8((c.r[3].w[0] + 136u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[3].w[0] + 128u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[3].w[0] + 120u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[3].w[0] + 116u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[3].w[0] + 270u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[3].w[0] + 266u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[3].w[0] + 291u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[3].w[0] + 284u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[3].w[0] + 138u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[3].w[0] + 130u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[3].w[0] + 122u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[3].w[0] + 117u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[3].w[0] + 271u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[3].w[0] + 267u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[3].w[0] + 292u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[3].w[0] + 285u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[3].w[0] + 140u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[3].w[0] + 132u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[3].w[0] + 124u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[3].w[0] + 118u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[3].w[0] + 272u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[3].w[0] + 268u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[3].w[0] + 293u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[3].w[0] + 286u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[3].w[0] + 142u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[3].w[0] + 134u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[3].w[0] + 126u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[3].w[0] + 119u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[3].w[0] + 273u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[3].w[0] + 269u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 294u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 287u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 13u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 12u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 314u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[1].w[0] + 18233u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 56u), static_cast<std::uint8_t>(0u));
    c.budget -= 80;
L_002B9E68:
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9E78u); set32(c.r[4], ld32((c.r[2].w[0] + 1036u)));  if (depth < kMaxDepth) unit_0083(c, 37u, depth + 1u); else { c.pc = 0x0030C7D0u; return; } if (c.pc != 0x002B9E78u) [[unlikely]] return; }
L_002B9E78:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[3], c.r[2].w[0] << (c.r[17].w[0] & 31u));  if (t) { goto L_002B9EA8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18233u)));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    st8((c.r[1].w[0] + 18233u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
L_002B9EA8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B9E68u | kUnwind; return; } goto L_002B9E68; } }
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[19], c.r[19].w[0] + 18112u);
    c.budget -= 4;
L_002B9EC8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 67u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[20], c.r[19].w[0] + 67u);  if (t) { goto L_002BA060; } }
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 1u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_002BA060; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 18112u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], c.r[4].w[0] + c.r[16].w[0]);
    st8((c.r[3].w[0] + 266u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st8((c.r[3].w[0] + 270u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st8((c.r[3].w[0] + 116u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], ld32((c.r[2].w[0] + 92u)));
    c.budget -= 19;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002B9F78; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[4], c.r[3].w[0] - c.r[16].w[0]);
    set32(c.r[6], 0u + 21u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[18], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9F58u); set32(c.r[4], c.r[2].w[0] + 161u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x002B9F58u) [[unlikely]] return; }
L_002B9F58:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[5], 0u + 2u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9F6Cu); set32(c.r[4], c.r[2].w[0] + 161u);  if (depth < kMaxDepth) unit_0080(c, 267u, depth + 1u); else { c.pc = 0x00302AD0u; return; } if (c.pc != 0x002B9F6Cu) [[unlikely]] return; }
L_002B9F6C:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st8((c.r[3].w[0] + 291u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002B9F78:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 2u)));
    c.r[1].d[0] = c.r[6].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002B9FB0; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 1u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9F94u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));  if (depth < kMaxDepth) unit_006E(c, 377u, depth + 1u); else { c.pc = 0x002BBDF0u; return; } if (c.pc != 0x002B9F94u) [[unlikely]] return; }
L_002B9F94:
    c.r[18].d[0] = c.r[2].d[0] << 56;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 56);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9FA4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 384u, depth + 1u); else { c.pc = 0x002BBFC0u; return; } if (c.pc != 0x002B9FA4u) [[unlikely]] return; }
L_002B9FA4:
    c.r[8].d[0] = c.r[2].d[0] << 56;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);  if (t) { goto L_002B9FB8; } }
L_002B9FB0:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 3u)));
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 2;
L_002B9FB8:
    set32(c.r[2], 0u + 52u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002B9FD8; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != c.r[2].d[0];  if (t) { goto L_002B9FD8; } }
    set32(c.r[18], 0u + 54u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_002B9FD8:
    set32(c.r[6], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << (c.r[16].w[0] & 31u));
    set32(c.r[4], c.r[18].w[0] << 7);
    set32(c.r[3], c.r[3].w[0] + 14384u);
    set32(c.r[7], c.r[16].w[0] << 1);
    set32(c.r[5], c.r[3].w[0] + c.r[4].w[0]);
    c.r[21].d[0] = c.r[21].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = c.r[16].d[0] << 56;
    set32(c.r[2], c.r[6].w[0] + c.r[7].w[0]);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    st8((c.r[2].w[0] + 120u), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    st8((c.r[2].w[0] + 128u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 120u)));
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    st8((c.r[2].w[0] + 136u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 56u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0] + 56u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], c.r[3].w[0] + c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 116u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA060u); st8((c.r[3].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0044(c, 200u, depth + 1u); else { c.pc = 0x002114E0u; return; } if (c.pc != 0x002BA060u) [[unlikely]] return; }
L_002BA060:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 6u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B9EC8u | kUnwind; return; } goto L_002B9EC8; } }
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.r[16].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[22], c.r[22].w[0] + 18112u);
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 6;
L_002BA088:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0] + 67u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[2], c.r[22].w[0] + 67u);  if (t) { goto L_002BA1A0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002BA0B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BA1A0; } }
L_002BA0B0:
    set32(c.r[19], c.r[19].w[0] + 2u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_002BA0B8:
    set32(c.r[3], 0u + 1u);
    set32(c.r[18], c.r[3].w[0] << (c.r[16].w[0] & 31u));
    c.r[3].d[0] = c.r[21].d[0] & c.r[18].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BA0B0u | kUnwind; return; } goto L_002BA0B0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st8((c.r[3].w[0] + 266u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st8((c.r[3].w[0] + 270u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st8((c.r[3].w[0] + 116u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.r[1].d[0] = c.r[6].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002BA138; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA118u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));  if (depth < kMaxDepth) unit_006E(c, 377u, depth + 1u); else { c.pc = 0x002BBDF0u; return; } if (c.pc != 0x002BA118u) [[unlikely]] return; }
L_002BA118:
    c.r[20].d[0] = c.r[2].d[0] << 56;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 56);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA128u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 384u, depth + 1u); else { c.pc = 0x002BBFC0u; return; } if (c.pc != 0x002BA128u) [[unlikely]] return; }
L_002BA128:
    c.r[5].d[0] = c.r[2].d[0] << 56;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);  if (t) { goto L_002BA140; } }
    c.budget -= 1;
L_002BA138:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 3u)));
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 2;
L_002BA140:
    set32(c.r[2], 0u + 52u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002BA160; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002BA160; } }
    set32(c.r[20], 0u + 54u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_002BA160:
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[3], c.r[20].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + 14384u);
    c.r[21].d[0] = c.r[21].d[0] | c.r[18].d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[19].w[0]);
    st8((c.r[3].w[0] + 120u), static_cast<std::uint8_t>(c.r[20].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    st8((c.r[3].w[0] + 128u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 120u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st8((c.r[2].w[0] + 136u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 16;
L_002BA1A0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[22], c.r[22].w[0] + 6u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BA088u | kUnwind; return; } goto L_002BA088; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18112u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);  if (t) { goto L_002BA1D8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18114u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 82u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002BA200; } }
    c.budget -= 1;
L_002BA1D8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], c.r[2].w[0] + 56u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 56u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);  if (t) { goto L_002BA1F8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18233u)));
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002BA1F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA200u);  if (depth < kMaxDepth) unit_005B(c, 79u, depth + 1u); else { c.pc = 0x0026CB60u; return; } if (c.pc != 0x002BA200u) [[unlikely]] return; }
L_002BA200:
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 13u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BA230; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1386u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002BA230; } }
    st8((c.r[4].w[0] + 314u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002BA230:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 120u)));
    st8((c.r[3].w[0] + 121u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 128u)));
    st8((c.r[3].w[0] + 129u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 136u)));
    st8((c.r[3].w[0] + 137u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 122u)));
    st8((c.r[3].w[0] + 123u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 130u)));
    st8((c.r[3].w[0] + 131u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 138u)));
    st8((c.r[3].w[0] + 139u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 124u)));
    st8((c.r[3].w[0] + 125u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 132u)));
    st8((c.r[3].w[0] + 133u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 140u)));
    st8((c.r[3].w[0] + 141u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 126u)));
    st8((c.r[3].w[0] + 127u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 134u)));
    st8((c.r[3].w[0] + 135u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 142u)));
    st8((c.r[3].w[0] + 143u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18228u)));
    c.budget -= 41;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA2D4u); set32(c.r[4], c.r[2].w[0] + 1060u);  if (depth < kMaxDepth) unit_007C(c, 161u, depth + 1u); else { c.pc = 0x002F1270u; return; } if (c.pc != 0x002BA2D4u) [[unlikely]] return; }
L_002BA2D4:
    c.r[16].d[0] = c.r[2].d[0] << 56;
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA2ECu); set32(c.r[4], c.r[2].w[0] + 1060u);  if (depth < kMaxDepth) unit_007C(c, 164u, depth + 1u); else { c.pc = 0x002F1330u; return; } if (c.pc != 0x002BA2ECu) [[unlikely]] return; }
L_002BA2EC:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[5].d[0] = c.r[16].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    st8((c.r[3].w[0] + 150u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA308u); set32(c.r[4], c.r[2].w[0] + 1060u);  if (depth < kMaxDepth) unit_007C(c, 165u, depth + 1u); else { c.pc = 0x002F1340u; return; } if (c.pc != 0x002BA308u) [[unlikely]] return; }
L_002BA308:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    st8((c.r[3].w[0] + 151u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[1].w[0] + 18234u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    st8((c.r[1].w[0] + 18234u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_002BA350:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[18], c.r[2].w[0] + 1060u);
    c.budget -= 12;
L_002BA380:
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 1036u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA394u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 29u, depth + 1u); else { c.pc = 0x0030C630u; return; } if (c.pc != 0x002BA394u) [[unlikely]] return; }
L_002BA394:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BA380u | kUnwind; return; } goto L_002BA380; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_002BA3B0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 1008u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA3C4u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 291u, depth + 1u); else { c.pc = 0x0030A350u; return; } if (c.pc != 0x002BA3C4u) [[unlikely]] return; }
L_002BA3C4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BA3B0u | kUnwind; return; } goto L_002BA3B0; } }
    c.r[3].d[0] = c.r[19].d[0] << 56;
    set32(c.r[5], 0u + 1u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_002BA420; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BA3F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BA4D0; } }
L_002BA3F8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[2].w[0] + 1376u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA410u); st8((c.r[2].w[0] + 1377u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_007C(c, 157u, depth + 1u); else { c.pc = 0x002F1170u; return; } if (c.pc != 0x002BA410u) [[unlikely]] return; }
L_002BA410:
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 1308u), c.r[4].w[0]);  if (t) { goto L_002BA4D0; } }
L_002BA420:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA428u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 226u, depth + 1u); else { c.pc = 0x002BA4F0u; return; } if (c.pc != 0x002BA428u) [[unlikely]] return; }
L_002BA428:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA434u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_007C(c, 155u, depth + 1u); else { c.pc = 0x002F1150u; return; } if (c.pc != 0x002BA434u) [[unlikely]] return; }
L_002BA434:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18114u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002BA450; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA44Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_007C(c, 154u, depth + 1u); else { c.pc = 0x002F1140u; return; } if (c.pc != 0x002BA44Cu) [[unlikely]] return; }
L_002BA44C:
    c.budget -= 1;
L_002BA450:
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], 0u + 3u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    st8((c.r[2].w[0] + 1376u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA474u); st8((c.r[2].w[0] + 1377u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_007C(c, 157u, depth + 1u); else { c.pc = 0x002F1170u; return; } if (c.pc != 0x002BA474u) [[unlikely]] return; }
L_002BA474:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 95u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 96u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 94u)));
    set32(c.r[2], c.r[4].w[0] - c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[4].w[0] - c.r[3].w[0]);  if (t) { goto L_002BA4A0; } }
    set32(c.r[3], 0u + 127u);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    st8((c.r[18].w[0] + 97u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_002BA4A0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA4B0u); st32((c.r[2].w[0] + 1308u), 0u);  if (depth < kMaxDepth) unit_006E(c, 267u, depth + 1u); else { c.pc = 0x002BADC0u; return; } if (c.pc != 0x002BA4B0u) [[unlikely]] return; }
L_002BA4B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA4B8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 272u, depth + 1u); else { c.pc = 0x002BAE50u; return; } if (c.pc != 0x002BA4B8u) [[unlikely]] return; }
L_002BA4B8:
    set32(c.r[4], ld32((c.r[28].w[0] - 23336u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1380u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1800u);  if (t) { goto L_002BA4D0; } }
    st16((c.r[4].w[0] + 1382u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002BA4D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002BA4F0:
    c.r[2].d[0] = c.r[4].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 1240u);  c.pc = t; return; }
L_002BA510:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[7].d[0] = c.r[4].d[0] << 56;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[6], c.r[7].w[0] << 2);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[1].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 1008u)));
    c.budget -= 15;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002BA668; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], c.r[3].w[0] - 21824u);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x002B8000u < 16384u) { entry = entries_006E[(t - 0x002B8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002BA568:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA570u);  if (depth < kMaxDepth) unit_0082(c, 301u, depth + 1u); else { c.pc = 0x0030A5C0u; return; } if (c.pc != 0x002BA570u) [[unlikely]] return; }
L_002BA570:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BA668; } }
L_002BA578:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA580u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 267u, depth + 1u); else { c.pc = 0x002BADC0u; return; } if (c.pc != 0x002BA580u) [[unlikely]] return; }
L_002BA580:
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 1384u), static_cast<std::uint8_t>(c.r[19].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    st8((c.r[3].w[0] + 1376u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 1377u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002BA668; } }
L_002BA5A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA5A8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 267u, depth + 1u); else { c.pc = 0x002BADC0u; return; } if (c.pc != 0x002BA5A8u) [[unlikely]] return; }
L_002BA5A8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    set32(c.r[4], 0u + 2u);
    st8((c.r[3].w[0] + 1384u), static_cast<std::uint8_t>(c.r[19].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    st8((c.r[3].w[0] + 1376u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 1377u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002BA668; } }
L_002BA5C8:
    set32(c.r[17], 0u + 1u);
    c.r[18].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_002BA5D8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA5E8u); set32(c.r[4], ld32((c.r[2].w[0] + 1036u)));  if (depth < kMaxDepth) unit_0083(c, 37u, depth + 1u); else { c.pc = 0x0030C7D0u; return; } if (c.pc != 0x002BA5E8u) [[unlikely]] return; }
L_002BA5E8:
    c.r[4].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002BA608; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002BA608; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002BA608:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BA5D8u | kUnwind; return; } goto L_002BA5D8; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002BA658; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23336u)));
    c.r[3].d[0] = c.r[19].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] << 4);
    st8((c.r[4].w[0] + 1385u), static_cast<std::uint8_t>(c.r[19].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23336u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 1240u));
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002BA668; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1386u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002BA668; } }
    c.budget -= 1;
L_002BA658:
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    set32(c.r[4], 0u - 1u);
    st8((c.r[3].w[0] + 1385u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
L_002BA668:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002BA690:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] << 56;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 1008u)));  if (t) { goto L_002BA6E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[2], c.r[2].w[0] - 21792u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002B8000u < 16384u) { entry = entries_006E[(t - 0x002B8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002BA6D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA6D8u);  if (depth < kMaxDepth) unit_0082(c, 307u, depth + 1u); else { c.pc = 0x0030A6E0u; return; } if (c.pc != 0x002BA6D8u) [[unlikely]] return; }
L_002BA6D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BA6E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002BA6F0; } }
L_002BA6E8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002BA6F0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BA700:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 6;
L_002BA718:
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA728u); set32(c.r[4], ld32((c.r[2].w[0] + 1008u)));  if (depth < kMaxDepth) unit_0082(c, 296u, depth + 1u); else { c.pc = 0x0030A3E0u; return; } if (c.pc != 0x002BA728u) [[unlikely]] return; }
L_002BA728:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002BA750; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA74Cu); set32(c.r[4], ld32((c.r[2].w[0] + 1008u)));  if (depth < kMaxDepth) unit_0082(c, 293u, depth + 1u); else { c.pc = 0x0030A3B0u; return; } if (c.pc != 0x002BA74Cu) [[unlikely]] return; }
L_002BA74C:
    c.budget -= 1;
L_002BA750:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BA718u | kUnwind; return; } goto L_002BA718; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002BA768:
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA778u); set32(c.r[4], ld32((c.r[2].w[0] + 1036u)));  if (depth < kMaxDepth) unit_0083(c, 37u, depth + 1u); else { c.pc = 0x0030C7D0u; return; } if (c.pc != 0x002BA778u) [[unlikely]] return; }
L_002BA778:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BA798; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA798u); set32(c.r[4], ld32((c.r[2].w[0] + 1036u)));  if (depth < kMaxDepth) unit_0083(c, 34u, depth + 1u); else { c.pc = 0x0030C770u; return; } if (c.pc != 0x002BA798u) [[unlikely]] return; }
L_002BA798:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BA768u | kUnwind; return; } goto L_002BA768; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002BA7C0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18112u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002BA7F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_002BA8E8; } }
    c.budget -= 1;
L_002BA7F8:
    c.r[3].d[0] = c.r[4].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BA828; } }
    st8((c.r[29].w[0] + 93u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 2u);
    st8((c.r[29].w[0] + 92u), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0] + 94u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 3u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 95u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002BA848; } }
    c.budget -= 1;
L_002BA828:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002BA848; } }
    st8((c.r[29].w[0] + 95u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 2u);
    st8((c.r[29].w[0] + 94u), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0] + 92u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 3u);
    st8((c.r[29].w[0] + 93u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_002BA848:
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[29].w[0] + 92u);
    c.budget -= 2;
L_002BA850:
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA868u); set32(c.r[4], ld32((c.r[2].w[0] + 1008u)));  if (depth < kMaxDepth) unit_0082(c, 296u, depth + 1u); else { c.pc = 0x0030A3E0u; return; } if (c.pc != 0x002BA868u) [[unlikely]] return; }
L_002BA868:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BA8B0; } }
    set32(c.r[2], c.r[17].w[0] << 1);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] + 18112u);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 68u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002BA8B0; } }
    c.r[19].d[0] = c.r[17].d[0] << 56;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 56);  if (t) { goto L_002BA8C8; } }
L_002BA8B0:
    set32(c.r[2], c.r[18].w[0] + 1u);
    c.r[18].d[0] = c.r[2].d[0] << 56;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 56);
    c.r[2].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BA850u | kUnwind; return; } goto L_002BA850; } }
L_002BA8C8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1376u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BA8E0; } }
    c.r[19].d[0] = c.r[19].d[0] | 128ull;
    c.budget -= 2;
L_002BA8E0:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 2;
L_002BA8E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002BA910:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 4u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] << 56;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    c.budget -= 9;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002BA940; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002BA9F0; } }
    c.budget -= 1;
L_002BA940:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002BA958; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BA9F0; } }
    c.budget -= 1;
L_002BA958:
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002BA970; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BA9F0; } }
    c.budget -= 1;
L_002BA970:
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA984u); set32(c.r[4], ld32((c.r[2].w[0] + 1008u)));  if (depth < kMaxDepth) unit_0082(c, 296u, depth + 1u); else { c.pc = 0x0030A3E0u; return; } if (c.pc != 0x002BA984u) [[unlikely]] return; }
L_002BA984:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002BA9A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002BA9F0; } }
L_002BA9A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18112u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[5].d[0] = c.r[17].d[0] << 56;  if (t) { goto L_002BA9E8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[4], c.r[4].w[0] + 18220u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[16].d[0] << 56;
    c.r[4].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[3], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BA9E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BA9F0; } }
L_002BA9E8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002BA9F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002BAA10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 127u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1157u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002BAA38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BABC8; } }
L_002BAA38:
    set32(c.r[2], 0u + 125u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002BAA50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BABC8; } }
    c.budget -= 1;
L_002BAA50:
    c.r[16].d[0] = c.r[4].d[0] << 56;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    c.r[1].d[0] = c.r[16].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002BAA70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BABC8; } }
    c.budget -= 1;
L_002BAA70:
    set32(c.r[2], 0u + 13u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 34u);  if (t) { goto L_002BAA88; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002BAAE8; } }
    c.budget -= 1;
L_002BAA88:
    set32(c.r[2], 0u + 76u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 72u);  if (t) { goto L_002BAAE0; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_002BAAE0; } }
    set32(c.r[2], 0u + 74u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 71u);  if (t) { goto L_002BAAE0; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_002BAAE0; } }
    set32(c.r[2], 0u + 69u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 68u);  if (t) { goto L_002BAAE0; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_002BAAE0; } }
    set32(c.r[2], 0u + 66u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 64u);  if (t) { goto L_002BAAE0; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_002BAAE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BAAE8; } }
L_002BAAE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002BABC8; } }
L_002BAAE8:
    set32(c.r[2], 0u + 67u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 126u);  if (t) { goto L_002BAB30; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BAB30; } }
    set32(c.r[2], 0u + 18u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 27u);  if (t) { goto L_002BAB30; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BAB30; } }
    set32(c.r[2], 0u + 15u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 21u);  if (t) { goto L_002BAB30; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BAB30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002BABC8; } }
    c.budget -= 1;
L_002BAB30:
    set32(c.r[2], 0u + 126u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002BAB48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BAB98; } }
    c.budget -= 1;
L_002BAB48:
    c.r[4].d[0] = c.r[3].d[0] << 56;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAB54u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);  if (depth < kMaxDepth) unit_004F(c, 68u, depth + 1u); else { c.pc = 0x0023D1E0u; return; } if (c.pc != 0x002BAB54u) [[unlikely]] return; }
L_002BAB54:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BAB70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002BAB98; } }
    c.budget -= 1;
L_002BAB70:
    set32(c.r[2], 0u + 70u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_002BAB90; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002BAB90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002BABC8; } }
    c.budget -= 1;
L_002BAB90:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_002BAB98:
    c.r[4].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[2], c.r[28].w[0] - 30320u);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[16].w[0] << 7);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[2], c.r[2].w[0] + 14492u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 12;
L_002BABC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BABE0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + 18180u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] << 56;
    c.r[16].d[0] = c.r[4].d[0] << 56;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    set32(c.r[4], c.r[17].w[0] << 1);
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != c.r[16].d[0];  if (t) { goto L_002BAC80; } }
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[19], c.r[19].w[0] + 18112u);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_002BAC40:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == c.r[17].d[0];  if (t) { goto L_002BAC68; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[16].d[0];  if (t) { goto L_002BAC68; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAC64u); set32(c.r[4], ld32((c.r[2].w[0] + 1008u)));  if (depth < kMaxDepth) unit_0082(c, 299u, depth + 1u); else { c.pc = 0x0030A480u; return; } if (c.pc != 0x002BAC64u) [[unlikely]] return; }
L_002BAC64:
    c.budget -= 1;
L_002BAC68:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[3].d[0] = c.r[20].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[19], c.r[19].w[0] + 6u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BAC40u | kUnwind; return; } goto L_002BAC40; } }
    c.budget -= 1;
L_002BAC80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002BACA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002BACE8; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_002BACC0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BACD0u); set32(c.r[4], ld32((c.r[2].w[0] + 1008u)));  if (depth < kMaxDepth) unit_0082(c, 292u, depth + 1u); else { c.pc = 0x0030A3A0u; return; } if (c.pc != 0x002BACD0u) [[unlikely]] return; }
L_002BACD0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BACC0u | kUnwind; return; } goto L_002BACC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BAD10; } }
L_002BACE8:
    c.r[16].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002BACF0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAD00u); set32(c.r[4], ld32((c.r[2].w[0] + 1008u)));  if (depth < kMaxDepth) unit_0082(c, 293u, depth + 1u); else { c.pc = 0x0030A3B0u; return; } if (c.pc != 0x002BAD00u) [[unlikely]] return; }
L_002BAD00:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BACF0u | kUnwind; return; } goto L_002BACF0; } }
L_002BAD10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002BAD30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 6;
L_002BAD48:
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAD58u); set32(c.r[4], ld32((c.r[2].w[0] + 1008u)));  if (depth < kMaxDepth) unit_0082(c, 294u, depth + 1u); else { c.pc = 0x0030A3C0u; return; } if (c.pc != 0x002BAD58u) [[unlikely]] return; }
L_002BAD58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BAD68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002BAD80; } }
L_002BAD68:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BAD48u | kUnwind; return; } goto L_002BAD48; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_002BAD80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002BADA0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    c.r[2].d[0] = c.r[4].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { set32(c.r[4], ld32((c.r[2].w[0] + 1008u)));  [[clang::musttail]] return unit_0082(c, 300u, depth); }
L_002BADC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002BAE08; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_002BADE0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BADF0u); set32(c.r[4], ld32((c.r[2].w[0] + 1036u)));  if (depth < kMaxDepth) unit_0083(c, 31u, depth + 1u); else { c.pc = 0x0030C690u; return; } if (c.pc != 0x002BADF0u) [[unlikely]] return; }
L_002BADF0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BADE0u | kUnwind; return; } goto L_002BADE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BAE30; } }
L_002BAE08:
    c.r[16].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002BAE10:
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAE20u); set32(c.r[4], ld32((c.r[2].w[0] + 1036u)));  if (depth < kMaxDepth) unit_0083(c, 32u, depth + 1u); else { c.pc = 0x0030C6C0u; return; } if (c.pc != 0x002BAE20u) [[unlikely]] return; }
L_002BAE20:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BAE10u | kUnwind; return; } goto L_002BAE10; } }
L_002BAE30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002BAE50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
L_002BAE70:
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 1036u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAE84u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 36u, depth + 1u); else { c.pc = 0x0030C7C0u; return; } if (c.pc != 0x002BAE84u) [[unlikely]] return; }
L_002BAE84:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BAE70u | kUnwind; return; } goto L_002BAE70; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_002BAEA0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 1008u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAEB4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 295u, depth + 1u); else { c.pc = 0x0030A3D0u; return; } if (c.pc != 0x002BAEB4u) [[unlikely]] return; }
L_002BAEB4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BAEA0u | kUnwind; return; } goto L_002BAEA0; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002BAEE0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    c.r[2].d[0] = c.r[4].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { set32(c.r[4], ld32((c.r[2].w[0] + 1036u)));  [[clang::musttail]] return unit_0083(c, 37u, depth); }
L_002BAF00:
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { set32(c.r[4], c.r[2].w[0] + 512u);  [[clang::musttail]] return unit_007C(c, 86u, depth); }
L_002BAF20:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].d[0] = c.r[4].d[0] << 48;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[1].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_002BAF78; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 44u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAF6Cu); set32(c.r[4], c.r[2].w[0] + 8880u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x002BAF6Cu) [[unlikely]] return; }
L_002BAF6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BAFC8; } }
    c.budget -= 1;
L_002BAF78:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAF84u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18228u)));  if (depth < kMaxDepth) unit_004F(c, 68u, depth + 1u); else { c.pc = 0x0023D1E0u; return; } if (c.pc != 0x002BAF84u) [[unlikely]] return; }
L_002BAF84:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BAFA0; } }
    c.r[2].d[0] = c.r[17].d[0] | 16ull;
    c.r[17].d[0] = c.r[2].d[0] << 56;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.budget -= 3;
L_002BAFA0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.f[13] = c.r[2].w[0];
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAFC4u); set32(c.r[4], c.r[3].w[0] + 512u);  if (depth < kMaxDepth) unit_007C(c, 82u, depth + 1u); else { c.pc = 0x002F0660u; return; } if (c.pc != 0x002BAFC4u) [[unlikely]] return; }
L_002BAFC4:
    c.budget -= 1;
L_002BAFC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002BAFF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].d[0] = c.r[4].d[0] << 56;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 76u);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.f[20] = c.f[12];  if (t) { goto L_002BB1E0; } }
    set32(c.r[2], 0u + 74u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 73u);  if (t) { goto L_002BB1D8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BB1D0; } }
    set32(c.r[2], 0u + 72u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 71u);  if (t) { goto L_002BB1C8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BB1C0; } }
    set32(c.r[2], 0u + 70u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 69u);  if (t) { goto L_002BB1B8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BB1B0; } }
    set32(c.r[2], 0u + 68u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 67u);  if (t) { goto L_002BB1A8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BB1A0; } }
    set32(c.r[2], 0u + 66u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 65u);  if (t) { goto L_002BB198; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BB190; } }
    set32(c.r[2], 0u + 64u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 53u);  if (t) { goto L_002BB188; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BB180; } }
    set32(c.r[2], 0u + 29u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 4u);  if (t) { goto L_002BB160; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BB118; } }
    set32(c.r[2], 0u - 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 2u);  if (t) { goto L_002BB118; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BB118; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BB0D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BB1E8; } }
    c.budget -= 1;
L_002BB0D0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::mul(c.f[0], c.f[20]);
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB0F4u); set32(c.r[4], c.r[2].w[0] + 20640u);  if (depth < kMaxDepth) unit_0076(c, 18u, depth + 1u); else { c.pc = 0x002D8380u; return; } if (c.pc != 0x002BB0F4u) [[unlikely]] return; }
L_002BB0F4:
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[2], ld32((c.r[2].w[0] + 44u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB10Cu); set32(c.r[4], c.r[2].w[0] + 9120u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x002BB10Cu) [[unlikely]] return; }
L_002BB10C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BB238; } }
    c.budget -= 1;
L_002BB118:
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::mul(c.f[0], c.f[20]);
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB13Cu); set32(c.r[4], c.r[2].w[0] + 8400u);  if (depth < kMaxDepth) unit_0076(c, 18u, depth + 1u); else { c.pc = 0x002D8380u; return; } if (c.pc != 0x002BB13Cu) [[unlikely]] return; }
L_002BB13C:
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[2], ld32((c.r[2].w[0] + 44u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB154u); set32(c.r[4], c.r[2].w[0] + 8640u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x002BB154u) [[unlikely]] return; }
L_002BB154:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BB238; } }
    c.budget -= 1;
L_002BB160:
    c.r[3].d[0] = c.r[5].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002BB1E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 54u);  if (t) { goto L_002BB1E8; } }
    c.budget -= 1;
L_002BB180:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 55u);  if (t) { goto L_002BB1E8; } }
L_002BB188:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 56u);  if (t) { goto L_002BB1E8; } }
L_002BB190:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 51u);  if (t) { goto L_002BB1E8; } }
L_002BB198:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 58u);  if (t) { goto L_002BB1E8; } }
L_002BB1A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 59u);  if (t) { goto L_002BB1E8; } }
L_002BB1A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 60u);  if (t) { goto L_002BB1E8; } }
L_002BB1B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 61u);  if (t) { goto L_002BB1E8; } }
L_002BB1B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 62u);  if (t) { goto L_002BB1E8; } }
L_002BB1C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 63u);  if (t) { goto L_002BB1E8; } }
L_002BB1C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 64u);  if (t) { goto L_002BB1E8; } }
L_002BB1D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 65u);  if (t) { goto L_002BB1E8; } }
L_002BB1D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 66u);  if (t) { goto L_002BB1E8; } }
L_002BB1E0:
    set32(c.r[4], 0u + 53u);
    c.budget -= 2;
L_002BB1E8:
    set32(c.r[5], ld32((c.r[28].w[0] - 23336u)));
    c.r[2].d[0] = c.r[4].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] - 1u);  if (t) { goto L_002BB210; } }
    c.r[4].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 3;
L_002BB210:
    set32(c.r[2], ld32((c.r[5].w[0] + 128u)));
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB238u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x002BB238u) [[unlikely]] return; }
L_002BB238:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002BB250:
    c.r[4].d[0] = c.r[4].d[0] << 56;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[3], 0u + 6u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[6], 0u - 1u);  if (t) { goto L_002BB298; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 4u);  if (t) { goto L_002BB290; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002BB288; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BB2A0; } }
L_002BB288:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002BB2A0; } }
L_002BB290:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_002BB2A0; } }
L_002BB298:
    set32(c.r[6], 0u + 2u);
    c.budget -= 2;
L_002BB2A0:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_002BB2E0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 1360u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23336u)));
    set32(c.r[3], c.r[6].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1363u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BB2E0; } }
    set32(c.r[2], c.r[6].w[0] << 4);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB2DCu); set32(c.r[4], c.r[2].w[0] + 1312u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x002BB2DCu) [[unlikely]] return; }
L_002BB2DC:
    c.budget -= 1;
L_002BB2E0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BB2F0:
    set32(c.r[4], ld32((c.r[28].w[0] - 23336u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1360u)));
    st8((c.r[4].w[0] + 1363u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    st8((c.r[3].w[0] + 1360u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 23336u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1361u)));
    st8((c.r[4].w[0] + 1364u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    st8((c.r[3].w[0] + 1361u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 23336u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1362u)));
    st8((c.r[4].w[0] + 1365u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 1362u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_002BB330:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 6;
L_002BB348:
    set32(c.r[4], ld32((c.r[28].w[0] - 23336u)));
    set32(c.r[3], c.r[4].w[0] + c.r[17].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1360u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BB368; } }
    set32(c.r[2], c.r[4].w[0] + c.r[16].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB368u); set32(c.r[4], c.r[2].w[0] + 1312u);  if (depth < kMaxDepth) unit_00AC(c, 62u, depth + 1u); else { c.pc = 0x003B0A00u; return; } if (c.pc != 0x002BB368u) [[unlikely]] return; }
L_002BB368:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BB348u | kUnwind; return; } goto L_002BB348; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002BB390:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] << 56;
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    set32(c.r[2], c.r[16].w[0] << 4);
    set32(c.r[19], ld32((c.r[3].w[0] + 44u)));
    c.f[20] = ld32((c.r[3].w[0] + 1308u));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[18], c.r[2].w[0] + 1312u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB3DCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 60u, depth + 1u); else { c.pc = 0x003B0940u; return; } if (c.pc != 0x002BB3DCu) [[unlikely]] return; }
L_002BB3DC:
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1360u)));
    set32(c.r[17], c.f[0]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BB460; } }
    c.f[0] = c.r[17].w[0];
    c.f[12] = 0u;
    c.f[13] = fp::cvt_s_w(c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB40Cu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002BB40Cu) [[unlikely]] return; }
L_002BB40C:
    set32(c.r[2], c.r[28].w[0] - 30316u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.f[12] = c.f[20];
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB434u); set32(c.r[4], c.r[19].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x002BB434u) [[unlikely]] return; }
L_002BB434:
    set32(c.r[2], 0u - c.r[17].w[0]);
    c.f[0] = c.r[2].w[0];
    c.f[12] = 0u;
    c.f[13] = fp::cvt_s_w(c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB44Cu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002BB44Cu) [[unlikely]] return; }
L_002BB44C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB458u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 67u, depth + 1u); else { c.pc = 0x003B0B80u; return; } if (c.pc != 0x002BB458u) [[unlikely]] return; }
L_002BB458:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BB4A8; } }
L_002BB460:
    set32(c.r[2], c.r[28].w[0] - 30316u);
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::mul(c.f[0], c.f[20]);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB494u); set32(c.r[4], c.r[19].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x002BB494u) [[unlikely]] return; }
L_002BB494:
    set32(c.r[4], c.r[19].w[0] + 14400u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB4A4u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x002BB4A4u) [[unlikely]] return; }
L_002BB4A4:
    c.budget -= 1;
L_002BB4A8:
    set32(c.r[4], c.r[19].w[0] + 14640u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB4B8u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x002BB4B8u) [[unlikely]] return; }
L_002BB4B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002BB4E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23336u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1304u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 296u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[17], ld32((c.r[4].w[0] + 44u)));  if (t) { goto L_002BB700; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1379u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BB700; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 7u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 196u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_002BB558; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BB550; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BB548; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BB558; } }
    c.budget -= 1;
L_002BB548:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[16].w[0] + 8880u);  if (t) { goto L_002BB560; } }
L_002BB550:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[16].w[0] + 9120u);  if (t) { goto L_002BB560; } }
L_002BB558:
    set32(c.r[18], c.r[17].w[0] + 1920u);
    c.budget -= 2;
L_002BB560:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB568u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002BB568u) [[unlikely]] return; }
L_002BB568:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB578u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002BB578u) [[unlikely]] return; }
L_002BB578:
    set32(c.r[4], c.r[17].w[0] + 240u);
    set32(c.r[5], 0u + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB588u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002BB588u) [[unlikely]] return; }
L_002BB588:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 7u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[17].w[0] + 1680u);  if (t) { goto L_002BB5B8; } }
    set32(c.r[5], 0u + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB5A8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002BB5A8u) [[unlikely]] return; }
L_002BB5A8:
    set32(c.r[4], c.r[16].w[0] + 9360u);
    set32(c.r[5], 0u + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB5B8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002BB5B8u) [[unlikely]] return; }
L_002BB5B8:
    set32(c.r[4], ld32((c.r[28].w[0] - 23336u)));
    set32(c.r[2], 0u + 3u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1376u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BB648; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 1382u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002BB648; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB5E0u);  if (depth < kMaxDepth) unit_00AA(c, 36u, depth + 1u); else { c.pc = 0x003A8430u; return; } if (c.pc != 0x002BB5E0u) [[unlikely]] return; }
L_002BB5E0:
    set32(c.r[4], 0u + 44u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB5ECu); set32(c.r[5], 0u + 22u);  if (depth < kMaxDepth) unit_00AA(c, 45u, depth + 1u); else { c.pc = 0x003A8700u; return; } if (c.pc != 0x002BB5ECu) [[unlikely]] return; }
L_002BB5EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB5F4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 48u, depth + 1u); else { c.pc = 0x003A8750u; return; } if (c.pc != 0x002BB5F4u) [[unlikely]] return; }
L_002BB5F4:
    set32(c.r[4], 0u + 298u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB600u); set32(c.r[5], 0u + 180u);  if (depth < kMaxDepth) unit_00AA(c, 46u, depth + 1u); else { c.pc = 0x003A8720u; return; } if (c.pc != 0x002BB600u) [[unlikely]] return; }
L_002BB600:
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x88880000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[2].d[0] = c.r[2].d[0] | 34953ull;
    set32(c.r[4], c.r[4].w[0] - 21768u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 1382u)));
    set32(c.r[5], c.r[3].w[0] + 59u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    set32(c.r[3], c.r[5].w[0] >> 31);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB63Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00AA(c, 51u, depth + 1u); else { c.pc = 0x003A87A0u; return; } if (c.pc != 0x002BB63Cu) [[unlikely]] return; }
L_002BB63C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB644u);  if (depth < kMaxDepth) unit_00AA(c, 78u, depth + 1u); else { c.pc = 0x003A8C50u; return; } if (c.pc != 0x002BB644u) [[unlikely]] return; }
L_002BB644:
    c.budget -= 1;
L_002BB648:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB650u); set32(c.r[4], 0u + 10u);  if (depth < kMaxDepth) unit_006E(c, 326u, depth + 1u); else { c.pc = 0x002BB720u; return; } if (c.pc != 0x002BB650u) [[unlikely]] return; }
L_002BB650:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB658u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002BB658u) [[unlikely]] return; }
L_002BB658:
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    set32(c.r[5], 0u + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB668u); set32(c.r[4], c.r[2].w[0] + 1060u);  if (depth < kMaxDepth) unit_007C(c, 190u, depth + 1u); else { c.pc = 0x002F1990u; return; } if (c.pc != 0x002BB668u) [[unlikely]] return; }
L_002BB668:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18112u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_002BB700; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1376u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);  if (t) { goto L_002BB700; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18114u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BB700; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB6A0u);  if (depth < kMaxDepth) unit_00AA(c, 36u, depth + 1u); else { c.pc = 0x003A8430u; return; } if (c.pc != 0x002BB6A0u) [[unlikely]] return; }
L_002BB6A0:
    set32(c.r[4], 0u + 18u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB6ACu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 45u, depth + 1u); else { c.pc = 0x003A8700u; return; } if (c.pc != 0x002BB6ACu) [[unlikely]] return; }
L_002BB6AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB6B4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 48u, depth + 1u); else { c.pc = 0x003A8750u; return; } if (c.pc != 0x002BB6B4u) [[unlikely]] return; }
L_002BB6B4:
    set32(c.r[4], 0u + 481u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB6C0u); set32(c.r[5], 0u + 276u);  if (depth < kMaxDepth) unit_00AA(c, 46u, depth + 1u); else { c.pc = 0x003A8720u; return; } if (c.pc != 0x002BB6C0u) [[unlikely]] return; }
L_002BB6C0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 1382u)));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_002BB6E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB6DCu); set32(c.r[4], c.r[4].w[0] - 21760u);  if (depth < kMaxDepth) unit_00AA(c, 51u, depth + 1u); else { c.pc = 0x003A87A0u; return; } if (c.pc != 0x002BB6DCu) [[unlikely]] return; }
L_002BB6DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BB6F8; } }
    c.budget -= 1;
L_002BB6E8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB6F4u); set32(c.r[4], c.r[4].w[0] - 21744u);  if (depth < kMaxDepth) unit_00AA(c, 51u, depth + 1u); else { c.pc = 0x003A87A0u; return; } if (c.pc != 0x002BB6F4u) [[unlikely]] return; }
L_002BB6F4:
    c.budget -= 1;
L_002BB6F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB700u);  if (depth < kMaxDepth) unit_00AA(c, 78u, depth + 1u); else { c.pc = 0x003A8C50u; return; } if (c.pc != 0x002BB700u) [[unlikely]] return; }
L_002BB700:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002BB720:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18112u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002BB7D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB744u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002BB744u) [[unlikely]] return; }
L_002BB744:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1A00000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB760u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002BB760u) [[unlikely]] return; }
L_002BB760:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB76Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 295u, depth + 1u); else { c.pc = 0x002BB390u; return; } if (c.pc != 0x002BB76Cu) [[unlikely]] return; }
L_002BB76C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB774u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002BB774u) [[unlikely]] return; }
L_002BB774:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1A00000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB790u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002BB790u) [[unlikely]] return; }
L_002BB790:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB79Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 295u, depth + 1u); else { c.pc = 0x002BB390u; return; } if (c.pc != 0x002BB79Cu) [[unlikely]] return; }
L_002BB79C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB7A4u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002BB7A4u) [[unlikely]] return; }
L_002BB7A4:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1A00000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB7B8u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002BB7B8u) [[unlikely]] return; }
L_002BB7B8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB7C4u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_006E(c, 295u, depth + 1u); else { c.pc = 0x002BB390u; return; } if (c.pc != 0x002BB7C4u) [[unlikely]] return; }
L_002BB7C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BB7F8; } }
    c.budget -= 1;
L_002BB7D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB7D8u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002BB7D8u) [[unlikely]] return; }
L_002BB7D8:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1A00000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB7ECu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002BB7ECu) [[unlikely]] return; }
L_002BB7EC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB7F8u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_006E(c, 295u, depth + 1u); else { c.pc = 0x002BB390u; return; } if (c.pc != 0x002BB7F8u) [[unlikely]] return; }
L_002BB7F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BB810:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 1052u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BB838; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB830u);  if (depth < kMaxDepth) unit_00A0(c, 445u, depth + 1u); else { c.pc = 0x00383F50u; return; } if (c.pc != 0x002BB830u) [[unlikely]] return; }
L_002BB830:
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    st32((c.r[3].w[0] + 1052u), 0u);
    c.budget -= 2;
L_002BB838:
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    set32(c.r[6], 0u - 1u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], 0u + 15u);
    st32((c.r[3].w[0] + 1308u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    st16((c.r[3].w[0] + 1382u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    st8((c.r[3].w[0] + 1366u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    st8((c.r[3].w[0] + 1367u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    st32((c.r[3].w[0] + 1368u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BB880:
    set32(c.r[5], ld32((c.r[28].w[0] - 23336u)));
    set32(c.r[2], 0u + 3u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1366u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_002BB960; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BB928; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BB8B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BB968; } }
L_002BB8B0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1367u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = c.r[2].w[0];
    c.f[2] = c.r[4].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    fpu_div(c, 0u, c.f[2], c.f[0]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[5].w[0] + 1368u), c.f[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1367u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[3].w[0] + 1367u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 19;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BB968; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    set32(c.r[3], 0u + 30u);
    st32((c.r[2].w[0] + 1368u), c.f[1]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23336u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1366u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 1366u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 1367u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002BB968; } }
    c.budget -= 1;
L_002BB928:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1367u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[5].w[0] + 1367u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BB968; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23336u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1366u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1366u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002BB970; } }
    c.budget -= 1;
L_002BB960:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002BB970; } }
L_002BB968:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002BB970:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BB980:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23336u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1366u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BBA28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB9A0u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002BB9A0u) [[unlikely]] return; }
L_002BB9A0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = ld32((c.r[2].w[0] + 1368u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB9B8u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x002BB9B8u) [[unlikely]] return; }
L_002BB9B8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23336u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[4], c.r[4].w[0] - 10624u);
    c.f[12] = ld32((c.r[2].w[0] + 1368u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB9D0u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x002BB9D0u) [[unlikely]] return; }
L_002BB9D0:
    set32(c.r[4], ld32((c.r[28].w[0] - 23336u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = ld32((c.r[4].w[0] + 1368u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BBA28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB9F4u);  if (depth < kMaxDepth) unit_00AA(c, 36u, depth + 1u); else { c.pc = 0x003A8430u; return; } if (c.pc != 0x002BB9F4u) [[unlikely]] return; }
L_002BB9F4:
    set32(c.r[4], 0u + 22u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBA00u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 45u, depth + 1u); else { c.pc = 0x003A8700u; return; } if (c.pc != 0x002BBA00u) [[unlikely]] return; }
L_002BBA00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBA08u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 48u, depth + 1u); else { c.pc = 0x003A8750u; return; } if (c.pc != 0x002BBA08u) [[unlikely]] return; }
L_002BBA08:
    set32(c.r[4], 0u + 210u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBA14u); set32(c.r[5], 0u + 202u);  if (depth < kMaxDepth) unit_00AA(c, 46u, depth + 1u); else { c.pc = 0x003A8720u; return; } if (c.pc != 0x002BBA14u) [[unlikely]] return; }
L_002BBA14:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBA20u); set32(c.r[4], c.r[4].w[0] - 21728u);  if (depth < kMaxDepth) unit_00AA(c, 51u, depth + 1u); else { c.pc = 0x003A87A0u; return; } if (c.pc != 0x002BBA20u) [[unlikely]] return; }
L_002BBA20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBA28u);  if (depth < kMaxDepth) unit_00AA(c, 78u, depth + 1u); else { c.pc = 0x003A8C50u; return; } if (c.pc != 0x002BBA28u) [[unlikely]] return; }
L_002BBA28:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BBA40:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B8DC0u | kUnwind; return; } goto L_002B8DC0; }
L_002BBA50:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] >= 0; c.r[7].d[0] = c.r[5].d[0] & 7ull;  if (t) { goto L_002BBA64; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_002BBA68; } }
    set32(c.r[7], c.r[7].w[0] - 8u);
    c.budget -= 1;
L_002BBA64:
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_002BBA68:
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 3));
    set32(c.r[6], c.r[6].w[0] << (c.r[7].w[0] & 31u));
    c.r[6].d[0] = c.r[6].d[0] << 56;
    c.budget -= 5;
    { const bool t = c.r[5].sd[0] >= 0; c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);  if (t) { goto L_002BBA84; } }
    set32(c.r[3], c.r[5].w[0] + 7u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    c.budget -= 2;
L_002BBA84:
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002BBAA0:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] >= 0; c.r[7].d[0] = c.r[5].d[0] & 7ull;  if (t) { goto L_002BBAB4; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_002BBAB8; } }
    set32(c.r[7], c.r[7].w[0] - 8u);
    c.budget -= 1;
L_002BBAB4:
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_002BBAB8:
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 3));
    set32(c.r[6], c.r[6].w[0] << (c.r[7].w[0] & 31u));
    c.r[6].d[0] = ~(c.r[6].d[0] | 0ull);
    c.r[6].d[0] = c.r[6].d[0] << 56;
    c.budget -= 6;
    { const bool t = c.r[5].sd[0] >= 0; c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);  if (t) { goto L_002BBAD8; } }
    set32(c.r[3], c.r[5].w[0] + 7u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    c.budget -= 2;
L_002BBAD8:
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002BBAF0:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] >= 0; c.r[6].d[0] = c.r[5].d[0] & 7ull;  if (t) { goto L_002BBB04; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002BBB08; } }
    set32(c.r[6], c.r[6].w[0] - 8u);
    c.budget -= 1;
L_002BBB04:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_002BBB08:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 3));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] >= 0; set32(c.r[3], c.r[3].w[0] << (c.r[6].w[0] & 31u));  if (t) { goto L_002BBB1C; } }
    set32(c.r[2], c.r[5].w[0] + 7u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    c.budget -= 2;
L_002BBB1C:
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];  c.pc = t; return; }
L_002BBB30:
    c.r[11].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[1].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_002BBBF8; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_002BBBB0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002BBBA0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002BBB90; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BBB80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BBBC0; } }
    c.budget -= 1;
L_002BBB80:
    c.r[10].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[10], c.r[10].w[0] - 24424u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 12u);  if (t) { goto L_002BBBC0; } }
L_002BBB90:
    c.r[10].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[10], c.r[10].w[0] - 24400u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 20u);  if (t) { goto L_002BBBC0; } }
L_002BBBA0:
    c.r[10].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[10], c.r[10].w[0] - 24376u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 10u);  if (t) { goto L_002BBBC0; } }
L_002BBBB0:
    c.r[10].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[10], c.r[10].w[0] - 24352u);
    set32(c.r[5], 0u + 25u);
    c.budget -= 4;
L_002BBBC0:
    c.r[8].d[0] = c.r[5].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.r[1].d[0] = 0ll < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_002BBBF8; } }
    c.budget -= 1;
L_002BBBD8:
    set32(c.r[3], c.r[10].w[0] + c.r[9].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBBE8u); c.r[4].d[0] = c.r[11].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 353u, depth + 1u); else { c.pc = 0x002BBA50u; return; } if (c.pc != 0x002BBBE8u) [[unlikely]] return; }
L_002BBBE8:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[3].d[0] = c.r[9].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BBBD8u | kUnwind; return; } goto L_002BBBD8; } }
L_002BBBF8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BBC10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18112u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002BBC80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBC3Cu);  if (depth < kMaxDepth) unit_00AF(c, 210u, depth + 1u); else { c.pc = 0x003BDAA0u; return; } if (c.pc != 0x002BBC3Cu) [[unlikely]] return; }
L_002BBC3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002BBC58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBC4Cu); set32(c.r[5], 0u + 35u);  if (depth < kMaxDepth) unit_006E(c, 354u, depth + 1u); else { c.pc = 0x002BBAA0u; return; } if (c.pc != 0x002BBC4Cu) [[unlikely]] return; }
L_002BBC4C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBC58u); set32(c.r[5], 0u + 40u);  if (depth < kMaxDepth) unit_006E(c, 354u, depth + 1u); else { c.pc = 0x002BBAA0u; return; } if (c.pc != 0x002BBC58u) [[unlikely]] return; }
L_002BBC58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBC60u);  if (depth < kMaxDepth) unit_00AF(c, 211u, depth + 1u); else { c.pc = 0x003BDAB0u; return; } if (c.pc != 0x002BBC60u) [[unlikely]] return; }
L_002BBC60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002BBC80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBC70u); set32(c.r[5], 0u + 52u);  if (depth < kMaxDepth) unit_006E(c, 354u, depth + 1u); else { c.pc = 0x002BBAA0u; return; } if (c.pc != 0x002BBC70u) [[unlikely]] return; }
L_002BBC70:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBC7Cu); set32(c.r[5], 0u + 53u);  if (depth < kMaxDepth) unit_006E(c, 354u, depth + 1u); else { c.pc = 0x002BBAA0u; return; } if (c.pc != 0x002BBC7Cu) [[unlikely]] return; }
L_002BBC7C:
    c.budget -= 1;
L_002BBC80:
    set32(c.r[5], 0u + 55u);
    c.budget -= 2;
L_002BBC88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBC90u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 354u, depth + 1u); else { c.pc = 0x002BBAA0u; return; } if (c.pc != 0x002BBC90u) [[unlikely]] return; }
L_002BBC90:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[5].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BBC88u | kUnwind; return; } goto L_002BBC88; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBCB0u); set32(c.r[5], 0u + 51u);  if (depth < kMaxDepth) unit_006E(c, 354u, depth + 1u); else { c.pc = 0x002BBAA0u; return; } if (c.pc != 0x002BBCB0u) [[unlikely]] return; }
L_002BBCB0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBCBCu); set32(c.r[5], 0u + 75u);  if (depth < kMaxDepth) unit_006E(c, 354u, depth + 1u); else { c.pc = 0x002BBAA0u; return; } if (c.pc != 0x002BBCBCu) [[unlikely]] return; }
L_002BBCBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BBCD0:
    c.r[7].d[0] = c.r[5].d[0] << 56;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.r[3].d[0] = c.r[6].d[0] << 56;
    set32(c.r[2], c.r[7].w[0] << 2);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[1].d[0] = c.r[5].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; c.r[8].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002BBD10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002BBD88; } }
L_002BBD10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBD18u); set32(c.r[4], ld32((c.r[8].w[0] + 32u)));  if (depth < kMaxDepth) unit_006E(c, 355u, depth + 1u); else { c.pc = 0x002BBAF0u; return; } if (c.pc != 0x002BBD18u) [[unlikely]] return; }
L_002BBD18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BBD80; } }
    set32(c.r[2], 0u + 22u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 21u);  if (t) { goto L_002BBD38; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002BBD78; } }
    c.budget -= 1;
L_002BBD38:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_002BBD58; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002BBD58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BBD88; } }
    c.budget -= 1;
L_002BBD58:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { goto L_002BBD80; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002BBD80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BBD88; } }
L_002BBD78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002BBD88; } }
L_002BBD80:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002BBD88:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BBDA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBDB4u); set32(c.r[4], c.r[4].w[0] + 18115u);  if (depth < kMaxDepth) unit_006E(c, 359u, depth + 1u); else { c.pc = 0x002BBC10u; return; } if (c.pc != 0x002BBDB4u) [[unlikely]] return; }
L_002BBDB4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBDC0u); set32(c.r[4], c.r[4].w[0] + 18131u);  if (depth < kMaxDepth) unit_006E(c, 359u, depth + 1u); else { c.pc = 0x002BBC10u; return; } if (c.pc != 0x002BBDC0u) [[unlikely]] return; }
L_002BBDC0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBDCCu); set32(c.r[4], c.r[4].w[0] + 18147u);  if (depth < kMaxDepth) unit_006E(c, 359u, depth + 1u); else { c.pc = 0x002BBC10u; return; } if (c.pc != 0x002BBDCCu) [[unlikely]] return; }
L_002BBDCC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBDD8u); set32(c.r[4], c.r[4].w[0] + 18163u);  if (depth < kMaxDepth) unit_006E(c, 359u, depth + 1u); else { c.pc = 0x002BBC10u; return; } if (c.pc != 0x002BBDD8u) [[unlikely]] return; }
L_002BBDD8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BBDF0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[3].d[0] = c.r[5].d[0] << 56;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[2], 0u - 1u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002BBE40; } }
    c.r[3].d[0] = c.r[4].d[0] << 56;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] + 18112u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[2].w[0] + 35u);  if (t) { goto L_002BBE5C; } }
L_002BBE40:
    c.r[3].d[0] = c.r[4].d[0] << 56;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] + 18112u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[19], c.r[2].w[0] + 3u);
    c.budget -= 7;
L_002BBE5C:
    c.r[16].d[0] = c.r[6].d[0] << 56;
    set32(c.r[2], 0u - 1u);
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_002BBE78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 77u);  if (t) { goto L_002BBE7C; } }
L_002BBE78:
    set32(c.r[18], 0u + 55u);
    c.budget -= 1;
L_002BBE7C:
    c.r[1].d[0] = 0ll < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_002BBF38; } }
    set32(c.r[17], c.r[29].w[0] + 112u);
    c.budget -= 2;
L_002BBE90:
    set32(c.r[2], 0u - 2u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 35u);  if (t) { goto L_002BBEB8; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == c.r[2].d[0];  if (t) { goto L_002BBF28; } }
    set32(c.r[2], 0u + 40u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != c.r[2].d[0];  if (t) { goto L_002BBEF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BBF28; } }
L_002BBEB8:
    set32(c.r[2], 0u - 3u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[21].sd[0] < 21ll ? 1ull : 0ull;  if (t) { goto L_002BBEE0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[21].sd[0] < 55ll ? 1ull : 0ull;  if (t) { goto L_002BBF28; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002BBEF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BBF28; } }
    c.budget -= 1;
L_002BBEE0:
    set32(c.r[2], 0u - 4u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[1].d[0] = c.r[21].sd[0] < 21ll ? 1ull : 0ull;  if (t) { goto L_002BBEF8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002BBF28; } }
    c.budget -= 1;
L_002BBEF8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBF04u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 355u, depth + 1u); else { c.pc = 0x002BBAF0u; return; } if (c.pc != 0x002BBF04u) [[unlikely]] return; }
L_002BBF04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[21].d[0] << 56;  if (t) { goto L_002BBF28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBF14u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);  if (depth < kMaxDepth) unit_006E(c, 253u, depth + 1u); else { c.pc = 0x002BAA10u; return; } if (c.pc != 0x002BBF14u) [[unlikely]] return; }
L_002BBF14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BBF28; } }
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[21].w[0]));
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 3;
L_002BBF28:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BBE90u | kUnwind; return; } goto L_002BBE90; } }
L_002BBF38:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 18234u));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002BBF78; } }
L_002BBF50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBF58u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x002BBF58u) [[unlikely]] return; }
L_002BBF58:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 18234u));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BBF50u | kUnwind; return; } goto L_002BBF50; } }
    c.budget -= 1;
L_002BBF78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBF80u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x002BBF80u) [[unlikely]] return; }
L_002BBF80:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    mmi::divu(c, 0, c.r[2].w[0], c.r[20].w[0]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = c.hi.d[0];
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 112u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_002BBFC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBFD4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x002BBFD4u) [[unlikely]] return; }
L_002BBFD4:
    c.r[3].d[0] = c.r[16].d[0] << 56;
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + 14503u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::divu(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.budget -= 11;
    [[clang::musttail]] return unit_006F(c, 1u, depth);
}

}
