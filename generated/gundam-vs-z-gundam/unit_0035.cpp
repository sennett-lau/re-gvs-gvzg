#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0035[4096] = {
    1, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 20,
    0, 0, 21, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0,
    24, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0,
    0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35,
    0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41,
    0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44,
    0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 54, 0, 0,
    0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 59, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 67, 0, 0, 0, 0,
    0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 72, 0, 0,
    0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0,
    0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0,
    0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104,
    0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 108,
    0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 111, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 0, 118, 0, 0, 0, 0, 0, 0,
    119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 125, 0, 126, 0, 127, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0,
    0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0,
    0, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 153, 0, 154, 0, 0,
    0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 157, 0, 158, 0, 0,
    0, 0, 0, 0, 0, 159, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0,
    0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 169, 0, 0,
    0, 170, 0, 171, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 175, 0, 0, 0, 0, 0, 176,
    0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 180, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0,
    0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0,
    0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 198, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 202,
    0, 0, 0, 0, 0, 203, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 207, 0, 208, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 209, 0, 0, 210, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0,
    0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 219, 0, 0, 0, 220, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223,
    0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    238, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 245, 0, 0, 0, 246, 0,
    0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 251,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 254, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 257, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259,
    0, 0, 260, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0,
    0, 0, 0, 0, 263, 0, 0, 0, 0, 264, 0, 265, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 268, 0, 0,
    0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 271, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0,
    274, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0,
    0, 0, 279, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0,
    0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 289, 0, 0,
    0, 0, 0, 290, 0, 291, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 301, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 303, 0, 304, 0, 0,
    0, 0, 0, 305, 0, 0, 0, 0, 306, 0, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 310, 0, 311,
    0, 0, 0, 0, 312, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    325, 0, 0, 326, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 330, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 338, 0, 0, 0, 339, 0, 0, 0, 340, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 343,
    0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0,
    0, 347, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0,
    0, 351, 0, 352, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 357, 0, 358, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0035(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001D4000;
    case 2u: goto L_001D4008;
    case 3u: goto L_001D4018;
    case 4u: goto L_001D4078;
    case 5u: goto L_001D4150;
    case 6u: goto L_001D419C;
    case 7u: goto L_001D41D8;
    case 8u: goto L_001D4200;
    case 9u: goto L_001D426C;
    case 10u: goto L_001D42B8;
    case 11u: goto L_001D42C0;
    case 12u: goto L_001D4304;
    case 13u: goto L_001D431C;
    case 14u: goto L_001D43A8;
    case 15u: goto L_001D44A0;
    case 16u: goto L_001D44C0;
    case 17u: goto L_001D4528;
    case 18u: goto L_001D4534;
    case 19u: goto L_001D4564;
    case 20u: goto L_001D457C;
    case 21u: goto L_001D4588;
    case 22u: goto L_001D4594;
    case 23u: goto L_001D45F4;
    case 24u: goto L_001D4600;
    case 25u: goto L_001D460C;
    case 26u: goto L_001D4628;
    case 27u: goto L_001D4640;
    case 28u: goto L_001D464C;
    case 29u: goto L_001D4670;
    case 30u: goto L_001D4688;
    case 31u: goto L_001D46B0;
    case 32u: goto L_001D46F0;
    case 33u: goto L_001D4718;
    case 34u: goto L_001D4748;
    case 35u: goto L_001D477C;
    case 36u: goto L_001D4794;
    case 37u: goto L_001D47B0;
    case 38u: goto L_001D47DC;
    case 39u: goto L_001D4820;
    case 40u: goto L_001D4864;
    case 41u: goto L_001D487C;
    case 42u: goto L_001D48A0;
    case 43u: goto L_001D48CC;
    case 44u: goto L_001D48FC;
    case 45u: goto L_001D4914;
    case 46u: goto L_001D4930;
    case 47u: goto L_001D4954;
    case 48u: goto L_001D4990;
    case 49u: goto L_001D49B0;
    case 50u: goto L_001D49D8;
    case 51u: goto L_001D4A1C;
    case 52u: goto L_001D4A50;
    case 53u: goto L_001D4AE8;
    case 54u: goto L_001D4AF4;
    case 55u: goto L_001D4B0C;
    case 56u: goto L_001D4B30;
    case 57u: goto L_001D4B80;
    case 58u: goto L_001D4BE8;
    case 59u: goto L_001D4C10;
    case 60u: goto L_001D4C1C;
    case 61u: goto L_001D4C34;
    case 62u: goto L_001D4C50;
    case 63u: goto L_001D4C78;
    case 64u: goto L_001D4CBC;
    case 65u: goto L_001D4CDC;
    case 66u: goto L_001D4D60;
    case 67u: goto L_001D4D6C;
    case 68u: goto L_001D4D84;
    case 69u: goto L_001D4DA0;
    case 70u: goto L_001D4DE0;
    case 71u: goto L_001D4E68;
    case 72u: goto L_001D4E74;
    case 73u: goto L_001D4E8C;
    case 74u: goto L_001D4EB0;
    case 75u: goto L_001D4F0C;
    case 76u: goto L_001D4F24;
    case 77u: goto L_001D4F40;
    case 78u: goto L_001D5020;
    case 79u: goto L_001D5038;
    case 80u: goto L_001D5050;
    case 81u: goto L_001D5118;
    case 82u: goto L_001D5148;
    case 83u: goto L_001D5160;
    case 84u: goto L_001D5178;
    case 85u: goto L_001D5190;
    case 86u: goto L_001D51B0;
    case 87u: goto L_001D52AC;
    case 88u: goto L_001D52B4;
    case 89u: goto L_001D52C4;
    case 90u: goto L_001D52F0;
    case 91u: goto L_001D5314;
    case 92u: goto L_001D5344;
    case 93u: goto L_001D53BC;
    case 94u: goto L_001D5410;
    case 95u: goto L_001D5434;
    case 96u: goto L_001D5468;
    case 97u: goto L_001D5478;
    case 98u: goto L_001D54A8;
    case 99u: goto L_001D54D0;
    case 100u: goto L_001D54E0;
    case 101u: goto L_001D55A0;
    case 102u: goto L_001D55C4;
    case 103u: goto L_001D55CC;
    case 104u: goto L_001D55FC;
    case 105u: goto L_001D5620;
    case 106u: goto L_001D564C;
    case 107u: goto L_001D5670;
    case 108u: goto L_001D567C;
    case 109u: goto L_001D5698;
    case 110u: goto L_001D56B0;
    case 111u: goto L_001D570C;
    case 112u: goto L_001D5718;
    case 113u: goto L_001D5730;
    case 114u: goto L_001D579C;
    case 115u: goto L_001D57AC;
    case 116u: goto L_001D57BC;
    case 117u: goto L_001D57D8;
    case 118u: goto L_001D57E4;
    case 119u: goto L_001D5800;
    case 120u: goto L_001D58A4;
    case 121u: goto L_001D58C4;
    case 122u: goto L_001D592C;
    case 123u: goto L_001D594C;
    case 124u: goto L_001D5960;
    case 125u: goto L_001D5A14;
    case 126u: goto L_001D5A1C;
    case 127u: goto L_001D5A24;
    case 128u: goto L_001D5A40;
    case 129u: goto L_001D5A70;
    case 130u: goto L_001D5AC0;
    case 131u: goto L_001D5AF4;
    case 132u: goto L_001D5B10;
    case 133u: goto L_001D5B3C;
    case 134u: goto L_001D5BD0;
    case 135u: goto L_001D5BE4;
    case 136u: goto L_001D5BF4;
    case 137u: goto L_001D5C0C;
    case 138u: goto L_001D5C24;
    case 139u: goto L_001D5C2C;
    case 140u: goto L_001D5C40;
    case 141u: goto L_001D5C50;
    case 142u: goto L_001D5C70;
    case 143u: goto L_001D5CA0;
    case 144u: goto L_001D5CB0;
    case 145u: goto L_001D5CD4;
    case 146u: goto L_001D5CDC;
    case 147u: goto L_001D5D28;
    case 148u: goto L_001D5D68;
    case 149u: goto L_001D5DA8;
    case 150u: goto L_001D5DB0;
    case 151u: goto L_001D5E3C;
    case 152u: goto L_001D5E54;
    case 153u: goto L_001D5E6C;
    case 154u: goto L_001D5E74;
    case 155u: goto L_001D5E90;
    case 156u: goto L_001D5ED0;
    case 157u: goto L_001D5EEC;
    case 158u: goto L_001D5EF4;
    case 159u: goto L_001D5F14;
    case 160u: goto L_001D5F20;
    case 161u: goto L_001D5F40;
    case 162u: goto L_001D5F4C;
    case 163u: goto L_001D5F64;
    case 164u: goto L_001D5F74;
    case 165u: goto L_001D5F84;
    case 166u: goto L_001D5FE0;
    case 167u: goto L_001D6010;
    case 168u: goto L_001D6060;
    case 169u: goto L_001D6074;
    case 170u: goto L_001D6084;
    case 171u: goto L_001D608C;
    case 172u: goto L_001D60AC;
    case 173u: goto L_001D60B8;
    case 174u: goto L_001D60D8;
    case 175u: goto L_001D60E4;
    case 176u: goto L_001D60FC;
    case 177u: goto L_001D610C;
    case 178u: goto L_001D611C;
    case 179u: goto L_001D6130;
    case 180u: goto L_001D614C;
    case 181u: goto L_001D6154;
    case 182u: goto L_001D61CC;
    case 183u: goto L_001D61E0;
    case 184u: goto L_001D6238;
    case 185u: goto L_001D6248;
    case 186u: goto L_001D6270;
    case 187u: goto L_001D628C;
    case 188u: goto L_001D62B0;
    case 189u: goto L_001D62D4;
    case 190u: goto L_001D6308;
    case 191u: goto L_001D6318;
    case 192u: goto L_001D6328;
    case 193u: goto L_001D636C;
    case 194u: goto L_001D6388;
    case 195u: goto L_001D63A0;
    case 196u: goto L_001D63B8;
    case 197u: goto L_001D63DC;
    case 198u: goto L_001D63E4;
    case 199u: goto L_001D6430;
    case 200u: goto L_001D644C;
    case 201u: goto L_001D646C;
    case 202u: goto L_001D647C;
    case 203u: goto L_001D6494;
    case 204u: goto L_001D64A0;
    case 205u: goto L_001D64C0;
    case 206u: goto L_001D64D4;
    case 207u: goto L_001D64DC;
    case 208u: goto L_001D64E4;
    case 209u: goto L_001D6518;
    case 210u: goto L_001D6524;
    case 211u: goto L_001D652C;
    case 212u: goto L_001D6544;
    case 213u: goto L_001D6564;
    case 214u: goto L_001D6574;
    case 215u: goto L_001D658C;
    case 216u: goto L_001D659C;
    case 217u: goto L_001D65B0;
    case 218u: goto L_001D65DC;
    case 219u: goto L_001D65E4;
    case 220u: goto L_001D65F4;
    case 221u: goto L_001D6644;
    case 222u: goto L_001D664C;
    case 223u: goto L_001D667C;
    case 224u: goto L_001D6690;
    case 225u: goto L_001D66A8;
    case 226u: goto L_001D66B8;
    case 227u: goto L_001D66C4;
    case 228u: goto L_001D6768;
    case 229u: goto L_001D67B8;
    case 230u: goto L_001D67C8;
    case 231u: goto L_001D67E8;
    case 232u: goto L_001D681C;
    case 233u: goto L_001D68A4;
    case 234u: goto L_001D68C8;
    case 235u: goto L_001D68D8;
    case 236u: goto L_001D694C;
    case 237u: goto L_001D6954;
    case 238u: goto L_001D6980;
    case 239u: goto L_001D69A0;
    case 240u: goto L_001D69D0;
    case 241u: goto L_001D69F8;
    case 242u: goto L_001D6A2C;
    case 243u: goto L_001D6A44;
    case 244u: goto L_001D6A5C;
    case 245u: goto L_001D6A68;
    case 246u: goto L_001D6A78;
    case 247u: goto L_001D6A88;
    case 248u: goto L_001D6B50;
    case 249u: goto L_001D6BD0;
    case 250u: goto L_001D6BF4;
    case 251u: goto L_001D6BFC;
    case 252u: goto L_001D6C30;
    case 253u: goto L_001D6CCC;
    case 254u: goto L_001D6CD4;
    case 255u: goto L_001D6CF0;
    case 256u: goto L_001D6D30;
    case 257u: goto L_001D6D44;
    case 258u: goto L_001D6D4C;
    case 259u: goto L_001D6D7C;
    case 260u: goto L_001D6D88;
    case 261u: goto L_001D6DA0;
    case 262u: goto L_001D6DF8;
    case 263u: goto L_001D6E10;
    case 264u: goto L_001D6E24;
    case 265u: goto L_001D6E2C;
    case 266u: goto L_001D6E34;
    case 267u: goto L_001D6E68;
    case 268u: goto L_001D6E74;
    case 269u: goto L_001D6E8C;
    case 270u: goto L_001D6EA0;
    case 271u: goto L_001D6EBC;
    case 272u: goto L_001D6EC4;
    case 273u: goto L_001D6F78;
    case 274u: goto L_001D6F80;
    case 275u: goto L_001D6F90;
    case 276u: goto L_001D6FB4;
    case 277u: goto L_001D6FD0;
    case 278u: goto L_001D6FE4;
    case 279u: goto L_001D7008;
    case 280u: goto L_001D7010;
    case 281u: goto L_001D70E8;
    case 282u: goto L_001D7150;
    case 283u: goto L_001D7168;
    case 284u: goto L_001D7198;
    case 285u: goto L_001D71B8;
    case 286u: goto L_001D71E4;
    case 287u: goto L_001D7208;
    case 288u: goto L_001D725C;
    case 289u: goto L_001D7274;
    case 290u: goto L_001D728C;
    case 291u: goto L_001D7294;
    case 292u: goto L_001D72B0;
    case 293u: goto L_001D72D0;
    case 294u: goto L_001D72E4;
    case 295u: goto L_001D7318;
    case 296u: goto L_001D7340;
    case 297u: goto L_001D7360;
    case 298u: goto L_001D7388;
    case 299u: goto L_001D73A8;
    case 300u: goto L_001D73F0;
    case 301u: goto L_001D73F8;
    case 302u: goto L_001D7460;
    case 303u: goto L_001D746C;
    case 304u: goto L_001D7474;
    case 305u: goto L_001D748C;
    case 306u: goto L_001D74A0;
    case 307u: goto L_001D74B4;
    case 308u: goto L_001D74C4;
    case 309u: goto L_001D74DC;
    case 310u: goto L_001D74F4;
    case 311u: goto L_001D74FC;
    case 312u: goto L_001D7510;
    case 313u: goto L_001D7520;
    case 314u: goto L_001D7540;
    case 315u: goto L_001D756C;
    case 316u: goto L_001D75A8;
    case 317u: goto L_001D75C0;
    case 318u: goto L_001D75D4;
    case 319u: goto L_001D761C;
    case 320u: goto L_001D7630;
    case 321u: goto L_001D764C;
    case 322u: goto L_001D7708;
    case 323u: goto L_001D774C;
    case 324u: goto L_001D776C;
    case 325u: goto L_001D7800;
    case 326u: goto L_001D780C;
    case 327u: goto L_001D7824;
    case 328u: goto L_001D7840;
    case 329u: goto L_001D7854;
    case 330u: goto L_001D7888;
    case 331u: goto L_001D78A0;
    case 332u: goto L_001D7910;
    case 333u: goto L_001D7920;
    case 334u: goto L_001D7940;
    case 335u: goto L_001D7968;
    case 336u: goto L_001D7998;
    case 337u: goto L_001D79C0;
    case 338u: goto L_001D79D8;
    case 339u: goto L_001D79E8;
    case 340u: goto L_001D79F8;
    case 341u: goto L_001D7A30;
    case 342u: goto L_001D7A60;
    case 343u: goto L_001D7A7C;
    case 344u: goto L_001D7A84;
    case 345u: goto L_001D7AE0;
    case 346u: goto L_001D7B68;
    case 347u: goto L_001D7B84;
    case 348u: goto L_001D7BA4;
    case 349u: goto L_001D7BC0;
    case 350u: goto L_001D7BE0;
    case 351u: goto L_001D7C04;
    case 352u: goto L_001D7C0C;
    case 353u: goto L_001D7C1C;
    case 354u: goto L_001D7C50;
    case 355u: goto L_001D7C64;
    case 356u: goto L_001D7C98;
    case 357u: goto L_001D7CA8;
    case 358u: goto L_001D7CB0;
    case 359u: goto L_001D7CD0;
    case 360u: goto L_001D7CE0;
    case 361u: goto L_001D7D10;
    case 362u: goto L_001D7E10;
    default: bad_entry(c, 0x001D4000u); return;
    }
L_001D4000:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001D4020; } }
L_001D4008:
    c.r[21].d[0] = ld8((c.r[18].w[0] + 6u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4018u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 14u, depth + 1u); else { c.pc = 0x001D8930u; return; } if (c.pc != 0x001D4018u) [[unlikely]] return; }
L_001D4018:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_001D4020:
    c.budget -= 2;
    { const bool t = c.r[21].sd[0] > 0;  if (t) { goto L_001D4030; } }
    set32(c.r[21], 0u + 1u);
    c.budget -= 2;
L_001D4030:
    st8((c.r[20].w[0] + 570u), static_cast<std::uint8_t>(c.r[21].w[0]));
    st8((c.r[19].w[0] + 570u), static_cast<std::uint8_t>(c.r[21].w[0]));
    c.r[2].d[0] = ld16((c.r[19].w[0] + 562u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[21].d[0] & 255ull;  if (t) { goto L_001D4050; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 264u)));
    st8((c.r[2].w[0] + 570u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001D4050:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 14u);  if (t) { goto L_001D4080; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[20].w[0] + 568u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st8((c.r[20].w[0] + 578u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[20].w[0] + 8287u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4078u); st8((c.r[20].w[0] + 8327u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0034(c, 114u, depth + 1u); else { c.pc = 0x001D1970u; return; } if (c.pc != 0x001D4078u) [[unlikely]] return; }
L_001D4078:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D4688; } }
L_001D4080:
    c.r[4].d[0] = ld16((c.r[20].w[0] + 564u));
    c.r[3].d[0] = c.r[4].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = c.r[4].d[0] & 128ull;  if (t) { goto L_001D40E8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D40E8; } }
    c.r[2].d[0] = c.r[4].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[4].d[0] & 32ull;  if (t) { goto L_001D40D8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001D40B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 15u);  if (t) { goto L_001D4148; } }
    c.budget -= 1;
L_001D40B8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], 0u + 11u);  if (t) { goto L_001D40D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D4148; } }
    c.budget -= 1;
L_001D40D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 10u);  if (t) { goto L_001D4148; } }
L_001D40D8:
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 15u);  if (t) { goto L_001D4148; } }
    c.budget -= 1;
L_001D40E8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001D4120; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 8658u));
    c.r[2].d[0] = c.r[2].sd[0] < 21ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[4].d[0] & 32ull;  if (t) { goto L_001D4120; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D4120; } }
    st8((c.r[20].w[0] + 808u), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[20].w[0] + 1216u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 15u);  if (t) { goto L_001D4148; } }
    c.budget -= 1;
L_001D4120:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 834u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001D4138; } }
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 15u);  if (t) { goto L_001D4148; } }
L_001D4138:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 832u)));
    st16((c.r[20].w[0] + 834u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[20].w[0] + 830u), static_cast<std::uint16_t>(0u));
    c.budget -= 4;
L_001D4148:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4150u);  if (depth < kMaxDepth) unit_00AC(c, 34u, depth + 1u); else { c.pc = 0x003B0320u; return; } if (c.pc != 0x001D4150u) [[unlikely]] return; }
L_001D4150:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D4160; } }
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], 0u + 15u);
    c.budget -= 2;
L_001D4160:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 1625u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001D4248; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 1608u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 114u));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D41A8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 851u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001D41A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D419Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 251u, depth + 1u); else { c.pc = 0x001E7BE0u; return; } if (c.pc != 0x001D419Cu) [[unlikely]] return; }
L_001D419C:
    set32(c.r[2], 0u - 1u);
    st8((c.r[20].w[0] + 8513u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[20].w[0] + 8512u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001D41A8:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 8658u));
    set32(c.r[2], 0u + 35u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 40u);  if (t) { goto L_001D41C0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D41F8; } }
L_001D41C0:
    set32(c.r[2], 0u + 128u);
    st8((c.r[20].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D41D8u); st32((c.r[20].w[0] + 1088u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0036(c, 51u, depth + 1u); else { c.pc = 0x001D9170u; return; } if (c.pc != 0x001D41D8u) [[unlikely]] return; }
L_001D41D8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 1625u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], c.r[4].w[0] + 1u);  if (t) { goto L_001D41F0; } }
    st8((c.r[20].w[0] + 1625u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001D41F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D4688; } }
L_001D41F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4200u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 58u, depth + 1u); else { c.pc = 0x001E93E0u; return; } if (c.pc != 0x001D4200u) [[unlikely]] return; }
L_001D4200:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_001D4240; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00270000u);
    set32(c.r[4], c.r[4].w[0] << (c.r[17].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] | 33023ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001D4248; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001D4238; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 24u);  if (t) { goto L_001D44F0; } }
    c.budget -= 1;
L_001D4238:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 23u);  if (t) { goto L_001D44F0; } }
L_001D4240:
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], 0u + 16u);
    c.budget -= 2;
L_001D4248:
    set32(c.r[5], 0u + 15u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[5].d[0];  if (t) { goto L_001D4688; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8693u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001D4278; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D426Cu);  if (depth < kMaxDepth) unit_0036(c, 51u, depth + 1u); else { c.pc = 0x001D9170u; return; } if (c.pc != 0x001D426Cu) [[unlikely]] return; }
L_001D426C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D4688; } }
    c.budget -= 1;
L_001D4278:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D42A0; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 8658u));
    set32(c.r[2], 0u + 35u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 40u);  if (t) { goto L_001D42A0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D42E0; } }
    c.budget -= 1;
L_001D42A0:
    set32(c.r[2], 0u + 15u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_001D42B8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8656u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D42B8u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_0049(c, 393u, depth + 1u); else { c.pc = 0x00227A20u; return; } if (c.pc != 0x001D42B8u) [[unlikely]] return; }
L_001D42B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D42C0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 51u, depth + 1u); else { c.pc = 0x001D9170u; return; } if (c.pc != 0x001D42C0u) [[unlikely]] return; }
L_001D42C0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 1625u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], c.r[4].w[0] + 1u);  if (t) { goto L_001D42D8; } }
    st8((c.r[20].w[0] + 1625u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001D42D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D4688; } }
L_001D42E0:
    set32(c.r[4], ld32((c.r[19].w[0] + 264u)));
    c.r[3].d[0] = ld8((c.r[20].w[0] + 515u));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 515u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D4310; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[20].d[0];  if (t) { goto L_001D4310; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4304u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x001D4304u) [[unlikely]] return; }
L_001D4304:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D4320; } }
    c.budget -= 1;
L_001D4310:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D431Cu); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x001D431Cu) [[unlikely]] return; }
L_001D431C:
    c.budget -= 1;
L_001D4320:
    c.f[1] = ld32((c.r[20].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001D4368; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 568u));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 21u);  if (t) { goto L_001D4358; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D4368; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_001D4368; } }
L_001D4358:
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] | 1ull;
    c.r[17].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 4;
L_001D4368:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 808u)));
    c.r[2].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_001D43A0; } }
    set32(c.r[2], 0u + 128u);
    st8((c.r[20].w[0] + 808u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[20].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[2], 0u + 8u);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; st32((c.r[20].w[0] + 1088u), c.r[3].w[0]);  if (t) { goto L_001D43A0; } }
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], 0u + 1u);
    c.budget -= 3;
L_001D43A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D43A8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 58u, depth + 1u); else { c.pc = 0x001E93E0u; return; } if (c.pc != 0x001D43A8u) [[unlikely]] return; }
L_001D43A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D4478; } }
    c.r[2].d[0] = ld16((c.r[20].w[0] + 564u));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D43D0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 808u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D4478; } }
L_001D43D0:
    c.r[1].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], 0u + 16u);  if (t) { goto L_001D43E8; } }
    c.r[2].d[0] = c.r[17].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);  if (t) { goto L_001D4408; } }
L_001D43E8:
    set32(c.r[2], 0u + 21u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 18u);  if (t) { goto L_001D4400; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D4408; } }
    c.budget -= 1;
L_001D4400:
    set32(c.r[4], 0u + 17u);
    c.budget -= 2;
L_001D4408:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D4418; } }
    set32(c.r[4], 0u + 18u);
    c.budget -= 1;
L_001D4418:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 16384ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D4448; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 749u));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D4448; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 808u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D4470; } }
L_001D4448:
    set32(c.r[2], 0u - 1u);
    st8((c.r[20].w[0] + 808u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 128u);
    st8((c.r[20].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[20].w[0] + 1088u), c.r[2].w[0]);
    set32(c.r[2], 0u + 16u);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001D4470; } }
    set32(c.r[4], 0u + 17u);
    c.budget -= 1;
L_001D4470:
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 2;
L_001D4478:
    set32(c.r[2], ld32((c.r[20].w[0] + 1608u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 111u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 21u);  if (t) { goto L_001D4498; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_001D4498; } }
    set32(c.r[17], 0u + 1u);
    c.budget -= 2;
L_001D4498:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D44A0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 128u, depth + 1u); else { c.pc = 0x001D5A40u; return; } if (c.pc != 0x001D44A0u) [[unlikely]] return; }
L_001D44A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D44D0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 24576ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001D44D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D44C0u);  if (depth < kMaxDepth) unit_0035(c, 128u, depth + 1u); else { c.pc = 0x001D5A40u; return; } if (c.pc != 0x001D44C0u) [[unlikely]] return; }
L_001D44C0:
    set32(c.r[3], c.r[2].w[0] << 14);
    set32(c.r[2], ld32((c.r[20].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[20].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 4;
L_001D44D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 1625u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[3], 0u + 128u);  if (t) { goto L_001D44F0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st8((c.r[20].w[0] + 516u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[20].w[0] + 1088u), c.r[2].w[0]);
    c.budget -= 4;
L_001D44F0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D4570; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 851u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D4558; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 1625u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D4558; } }
    st8((c.r[20].w[0] + 711u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001D4528:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4534u); set32(c.r[5], 0u + 32u);  if (depth < kMaxDepth) unit_003A(c, 27u, depth + 1u); else { c.pc = 0x001E89E0u; return; } if (c.pc != 0x001D4534u) [[unlikely]] return; }
L_001D4534:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D4528u | kUnwind; return; } goto L_001D4528; } }
    set32(c.r[2], 0u + 32u);
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[20].w[0] + 851u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 18u);  if (t) { goto L_001D4570; } }
L_001D4558:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4564u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 251u, depth + 1u); else { c.pc = 0x001E7BE0u; return; } if (c.pc != 0x001D4564u) [[unlikely]] return; }
L_001D4564:
    set32(c.r[2], 0u - 1u);
    st8((c.r[20].w[0] + 8513u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[20].w[0] + 8512u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001D4570:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D457Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0075(c, 31u, depth + 1u); else { c.pc = 0x002D4A30u; return; } if (c.pc != 0x001D457Cu) [[unlikely]] return; }
L_001D457C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4588u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0075(c, 31u, depth + 1u); else { c.pc = 0x002D4A30u; return; } if (c.pc != 0x001D4588u) [[unlikely]] return; }
L_001D4588:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4594u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0075(c, 31u, depth + 1u); else { c.pc = 0x002D4A30u; return; } if (c.pc != 0x001D4594u) [[unlikely]] return; }
L_001D4594:
    st8((c.r[20].w[0] + 568u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[20].w[0] + 578u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 3584ull;
    st16((c.r[20].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    st16((c.r[20].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st8((c.r[20].w[0] + 800u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 850u));
    c.r[2].d[0] = c.r[2].d[0] & 240ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D45D0; } }
    st8((c.r[20].w[0] + 745u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001D45D0:
    st16((c.r[20].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st8((c.r[20].w[0] + 8287u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    st8((c.r[20].w[0] + 8327u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[20].w[0] + 1216u), c.r[2].w[0]);
    set32(c.r[5], 0u + 48u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D45F4u); st32((c.r[20].w[0] + 1220u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003A(c, 69u, depth + 1u); else { c.pc = 0x001E9EF0u; return; } if (c.pc != 0x001D45F4u) [[unlikely]] return; }
L_001D45F4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4600u); set32(c.r[5], 0u + 48u);  if (depth < kMaxDepth) unit_003A(c, 68u, depth + 1u); else { c.pc = 0x001E9DF0u; return; } if (c.pc != 0x001D4600u) [[unlikely]] return; }
L_001D4600:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D460Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_000D(c, 223u, depth + 1u); else { c.pc = 0x001371F0u; return; } if (c.pc != 0x001D460Cu) [[unlikely]] return; }
L_001D460C:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 8658u));
    set32(c.r[2], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001D4630; } }
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4628u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 153u, depth + 1u); else { c.pc = 0x0023A1C0u; return; } if (c.pc != 0x001D4628u) [[unlikely]] return; }
L_001D4628:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D4640; } }
L_001D4630:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4640u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_004E(c, 153u, depth + 1u); else { c.pc = 0x0023A1C0u; return; } if (c.pc != 0x001D4640u) [[unlikely]] return; }
L_001D4640:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D464Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 50u, depth + 1u); else { c.pc = 0x001D9100u; return; } if (c.pc != 0x001D464Cu) [[unlikely]] return; }
L_001D464C:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 568u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 30736u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4670u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D4670u) [[unlikely]] return; }
L_001D4670:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 1625u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], c.r[4].w[0] + 1u);  if (t) { goto L_001D4688; } }
    st8((c.r[20].w[0] + 1625u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001D4688:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001D46B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[5].w[0] + 13u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001D46E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_001D46F0; } }
L_001D46E4:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D46F0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 15u, depth + 1u); else { c.pc = 0x001D8A40u; return; } if (c.pc != 0x001D46F0u) [[unlikely]] return; }
L_001D46F0:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001D4738; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 13u));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001D4720; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4718u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 15u, depth + 1u); else { c.pc = 0x001D8A40u; return; } if (c.pc != 0x001D4718u) [[unlikely]] return; }
L_001D4718:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);  if (t) { goto L_001D4750; } }
L_001D4720:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 568u));
    set32(c.r[2], 0u + 6u);
    set32(c.r[16], 0u + 4u);
    st8((c.r[18].w[0] + 578u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 568u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001D4750; } }
L_001D4738:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4748u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 15u, depth + 1u); else { c.pc = 0x001D8A40u; return; } if (c.pc != 0x001D4748u) [[unlikely]] return; }
L_001D4748:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_001D4750:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; st8((c.r[18].w[0] + 579u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001D4768; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 579u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001D4768:
    set32(c.r[2], 0u + 2u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D477Cu); st8((c.r[18].w[0] + 749u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0036(c, 16u, depth + 1u); else { c.pc = 0x001D8AF0u; return; } if (c.pc != 0x001D477Cu) [[unlikely]] return; }
L_001D477C:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4794u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001D4794u) [[unlikely]] return; }
L_001D4794:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001D47B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[16], 0u + 30u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D47DCu); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 15u, depth + 1u); else { c.pc = 0x001D8A40u; return; } if (c.pc != 0x001D47DCu) [[unlikely]] return; }
L_001D47DC:
    c.r[5].d[0] = ld8((c.r[18].w[0] + 569u));
    set32(c.r[4], 0u + 1u);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00070000u);
    c.r[2].d[0] = c.r[3].d[0] | 59384ull;
    set32(c.r[4], c.r[4].w[0] << (c.r[5].w[0] & 31u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D4830; } }
    c.r[2].d[0] = c.r[3].d[0] | 1920ull;
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D4818; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 2u);  if (t) { goto L_001D4830; } }
L_001D4818:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4820u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001D4820u) [[unlikely]] return; }
L_001D4820:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D4830; } }
    set32(c.r[16], c.r[16].w[0] + 2u);
    c.budget -= 1;
L_001D4830:
    set32(c.r[2], 0u + 31u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; st8((c.r[18].w[0] + 579u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001D4848; } }
    set32(c.r[2], 0u + 33u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_001D4850; } }
L_001D4848:
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 579u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001D4850:
    set32(c.r[2], 0u + 2u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4864u); st8((c.r[18].w[0] + 749u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0036(c, 16u, depth + 1u); else { c.pc = 0x001D8AF0u; return; } if (c.pc != 0x001D4864u) [[unlikely]] return; }
L_001D4864:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D487Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001D487Cu) [[unlikely]] return; }
L_001D487C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001D48A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D48CCu); set32(c.r[16], 0u + 5u);  if (depth < kMaxDepth) unit_0036(c, 15u, depth + 1u); else { c.pc = 0x001D8A40u; return; } if (c.pc != 0x001D48CCu) [[unlikely]] return; }
L_001D48CC:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; st8((c.r[18].w[0] + 579u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001D48E8; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 579u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001D48E8:
    set32(c.r[2], 0u + 2u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D48FCu); st8((c.r[18].w[0] + 749u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0036(c, 16u, depth + 1u); else { c.pc = 0x001D8AF0u; return; } if (c.pc != 0x001D48FCu) [[unlikely]] return; }
L_001D48FC:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4914u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001D4914u) [[unlikely]] return; }
L_001D4914:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001D4930:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4954u); set32(c.r[16], 0u + 34u);  if (depth < kMaxDepth) unit_0036(c, 15u, depth + 1u); else { c.pc = 0x001D8A40u; return; } if (c.pc != 0x001D4954u) [[unlikely]] return; }
L_001D4954:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], 0u + 36u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; st8((c.r[17].w[0] + 579u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001D4970; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 579u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001D4970:
    set32(c.r[2], 0u + 5u);
    c.f[12] = 0u;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[17].w[0] + 749u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 4u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4990u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001D4990u) [[unlikely]] return; }
L_001D4990:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001D49B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D49D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 15u, depth + 1u); else { c.pc = 0x001D8A40u; return; } if (c.pc != 0x001D49D8u) [[unlikely]] return; }
L_001D49D8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_001D4A28; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[16], 0u + 18u);  if (t) { goto L_001D49F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 22u);  if (t) { goto L_001D4A58; } }
    c.budget -= 1;
L_001D49F8:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001D4A10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 23u);  if (t) { goto L_001D4A58; } }
    c.budget -= 1;
L_001D4A10:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4A1Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 15u, depth + 1u); else { c.pc = 0x001D8A40u; return; } if (c.pc != 0x001D4A1Cu) [[unlikely]] return; }
L_001D4A1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);  if (t) { goto L_001D4A58; } }
    c.budget -= 1;
L_001D4A28:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[16], 0u + 9u);  if (t) { goto L_001D4A40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 13u);  if (t) { goto L_001D4A58; } }
    c.budget -= 1;
L_001D4A40:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4A50u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 15u, depth + 1u); else { c.pc = 0x001D8A40u; return; } if (c.pc != 0x001D4A50u) [[unlikely]] return; }
L_001D4A50:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_001D4A58:
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; st8((c.r[18].w[0] + 579u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001D4A88; } }
    set32(c.r[2], 0u + 13u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 20u);  if (t) { goto L_001D4A88; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001D4A88; } }
    set32(c.r[2], 0u + 22u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_001D4A90; } }
    c.budget -= 1;
L_001D4A88:
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 579u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001D4A90:
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; st32((c.r[18].w[0] + 728u), 0u);  if (t) { goto L_001D4AA8; } }
    set32(c.r[2], 0u + 19u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_001D4AB8; } }
L_001D4AA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    st32((c.r[18].w[0] + 728u), c.r[2].w[0]);
    c.budget -= 4;
L_001D4AB8:
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 21u);  if (t) { goto L_001D4AD0; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_001D4AE0; } }
    c.budget -= 1;
L_001D4AD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC4230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    st32((c.r[18].w[0] + 728u), c.r[2].w[0]);
    c.budget -= 4;
L_001D4AE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4AE8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 35u, depth + 1u); else { c.pc = 0x001D8DE0u; return; } if (c.pc != 0x001D4AE8u) [[unlikely]] return; }
L_001D4AE8:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4AF4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 29u, depth + 1u); else { c.pc = 0x001D8C90u; return; } if (c.pc != 0x001D4AF4u) [[unlikely]] return; }
L_001D4AF4:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4B0Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001D4B0Cu) [[unlikely]] return; }
L_001D4B0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001D4B30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 744u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], 0u + 38u);  if (t) { goto L_001D4B60; } }
    set32(c.r[16], 0u + 46u);
    c.budget -= 2;
L_001D4B60:
    set32(c.r[5], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44A30000u);
    st8((c.r[18].w[0] + 579u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 728u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4B80u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 15u, depth + 1u); else { c.pc = 0x001D8A40u; return; } if (c.pc != 0x001D4B80u) [[unlikely]] return; }
L_001D4B80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D4BA0; } }
    st8((c.r[18].w[0] + 579u), static_cast<std::uint8_t>(0u));
    set32(c.r[16], c.r[16].w[0] + 2u);
    c.f[0] = ld32((c.r[18].w[0] + 728u));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[18].w[0] + 728u), c.f[0]);
    c.budget -= 6;
L_001D4BA0:
    c.r[5].d[0] = ld8((c.r[18].w[0] + 569u));
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00070000u);
    c.r[2].d[0] = c.r[3].d[0] | 59384ull;
    set32(c.r[4], c.r[4].w[0] << (c.r[5].w[0] & 31u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] | 1920ull;  if (t) { goto L_001D4BE0; } }
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D4C08; } }
    c.f[0] = ld32((c.r[18].w[0] + 728u));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 728u), c.f[0]);  if (t) { goto L_001D4C08; } }
L_001D4BE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4BE8u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001D4BE8u) [[unlikely]] return; }
L_001D4BE8:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D4C08; } }
    c.f[0] = ld32((c.r[18].w[0] + 728u));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[18].w[0] + 728u), c.f[0]);
    c.budget -= 5;
L_001D4C08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4C10u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 35u, depth + 1u); else { c.pc = 0x001D8DE0u; return; } if (c.pc != 0x001D4C10u) [[unlikely]] return; }
L_001D4C10:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4C1Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 29u, depth + 1u); else { c.pc = 0x001D8C90u; return; } if (c.pc != 0x001D4C1Cu) [[unlikely]] return; }
L_001D4C1C:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4C34u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001D4C34u) [[unlikely]] return; }
L_001D4C34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001D4C50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4C78u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 15u, depth + 1u); else { c.pc = 0x001D8A40u; return; } if (c.pc != 0x001D4C78u) [[unlikely]] return; }
L_001D4C78:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_001D4CC8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[16], 0u + 24u);  if (t) { goto L_001D4C98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 28u);  if (t) { goto L_001D4CE0; } }
    c.budget -= 1;
L_001D4C98:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001D4CB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 29u);  if (t) { goto L_001D4CE0; } }
    c.budget -= 1;
L_001D4CB0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4CBCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 15u, depth + 1u); else { c.pc = 0x001D8A40u; return; } if (c.pc != 0x001D4CBCu) [[unlikely]] return; }
L_001D4CBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);  if (t) { goto L_001D4CE0; } }
    c.budget -= 1;
L_001D4CC8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4CDCu); set32(c.r[16], 0u + 14u);  if (depth < kMaxDepth) unit_0036(c, 15u, depth + 1u); else { c.pc = 0x001D8A40u; return; } if (c.pc != 0x001D4CDCu) [[unlikely]] return; }
L_001D4CDC:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_001D4CE0:
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; st8((c.r[18].w[0] + 579u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001D4D00; } }
    set32(c.r[2], 0u + 26u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 28u);  if (t) { goto L_001D4D00; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_001D4D08; } }
L_001D4D00:
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 579u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001D4D08:
    set32(c.r[2], 0u + 15u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; st32((c.r[18].w[0] + 728u), 0u);  if (t) { goto L_001D4D20; } }
    set32(c.r[2], 0u + 25u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_001D4D30; } }
L_001D4D20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    st32((c.r[18].w[0] + 728u), c.r[2].w[0]);
    c.budget -= 4;
L_001D4D30:
    set32(c.r[2], 0u + 17u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 27u);  if (t) { goto L_001D4D48; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_001D4D58; } }
    c.budget -= 1;
L_001D4D48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC4230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    st32((c.r[18].w[0] + 728u), c.r[2].w[0]);
    c.budget -= 4;
L_001D4D58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4D60u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 35u, depth + 1u); else { c.pc = 0x001D8DE0u; return; } if (c.pc != 0x001D4D60u) [[unlikely]] return; }
L_001D4D60:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4D6Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 29u, depth + 1u); else { c.pc = 0x001D8C90u; return; } if (c.pc != 0x001D4D6Cu) [[unlikely]] return; }
L_001D4D6C:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4D84u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001D4D84u) [[unlikely]] return; }
L_001D4D84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001D4DA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 744u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], 0u + 42u);  if (t) { goto L_001D4DD0; } }
    set32(c.r[16], 0u + 50u);
    c.budget -= 2;
L_001D4DD0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4DE0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 15u, depth + 1u); else { c.pc = 0x001D8A40u; return; } if (c.pc != 0x001D4DE0u) [[unlikely]] return; }
L_001D4DE0:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 579u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 44u);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001D4E08; } }
    set32(c.r[2], 0u + 52u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_001D4E10; } }
    c.budget -= 1;
L_001D4E08:
    st8((c.r[18].w[0] + 579u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001D4E10:
    set32(c.r[2], 0u + 43u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; st32((c.r[18].w[0] + 728u), 0u);  if (t) { goto L_001D4E28; } }
    set32(c.r[2], 0u + 51u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_001D4E38; } }
L_001D4E28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    st32((c.r[18].w[0] + 728u), c.r[2].w[0]);
    c.budget -= 4;
L_001D4E38:
    set32(c.r[2], 0u + 45u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 53u);  if (t) { goto L_001D4E50; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_001D4E60; } }
    c.budget -= 1;
L_001D4E50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC4230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    st32((c.r[18].w[0] + 728u), c.r[2].w[0]);
    c.budget -= 4;
L_001D4E60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4E68u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 35u, depth + 1u); else { c.pc = 0x001D8DE0u; return; } if (c.pc != 0x001D4E68u) [[unlikely]] return; }
L_001D4E68:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4E74u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 29u, depth + 1u); else { c.pc = 0x001D8C90u; return; } if (c.pc != 0x001D4E74u) [[unlikely]] return; }
L_001D4E74:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4E8Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001D4E8Cu) [[unlikely]] return; }
L_001D4E8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001D4EB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 579u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], 0u + 56u);  if (t) { goto L_001D4ED8; } }
    set32(c.r[16], 0u + 57u);
    c.budget -= 2;
L_001D4ED8:
    set32(c.r[2], 0u + 128u);
    st8((c.r[17].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[17].w[0] + 1088u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    set32(c.r[2], 0u + 5u);
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    st16((c.r[17].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 749u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 744u), static_cast<std::uint8_t>(0u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4F0Cu); st8((c.r[17].w[0] + 849u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0036(c, 16u, depth + 1u); else { c.pc = 0x001D8AF0u; return; } if (c.pc != 0x001D4F0Cu) [[unlikely]] return; }
L_001D4F0C:
    set32(c.r[5], 0u + 4u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = 0u;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4F24u); c.r[7].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001D4F24u) [[unlikely]] return; }
L_001D4F24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001D4F40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 11u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 574u)));
    set32(c.r[3], c.r[3].w[0] << 12);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[4].w[0] + 574u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 574u)));
    st32((c.r[4].w[0] + 1268u), c.r[2].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[2], c.r[4].w[0] - 9u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 19u);  if (t) { goto L_001D4FA8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001D4FB8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8659u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D4FB8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 767u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D4FB8; } }
L_001D4FA8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 574u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 84u), c.r[2].w[0]);  if (t) { goto L_001D4FF8; } }
    c.budget -= 1;
L_001D4FB8:
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001D4FE0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 767u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D4FE0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 574u)));
    set32(c.r[2], c.r[2].w[0] + 16384u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 84u), c.r[2].w[0]);  if (t) { goto L_001D4FF8; } }
L_001D4FE0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 574u)));
    set32(c.r[2], c.r[2].w[0] + 32767u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 6;
L_001D4FF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3ED10000u);
    c.r[3].d[0] = c.r[2].d[0] | 60293ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 104u), c.r[3].w[0]);
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 108u), 0u);
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 744u), static_cast<std::uint8_t>(0u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5020u); st8((c.r[16].w[0] + 849u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0036(c, 52u, depth + 1u); else { c.pc = 0x001D9190u; return; } if (c.pc != 0x001D5020u) [[unlikely]] return; }
L_001D5020:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 30u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5038u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001D5038u) [[unlikely]] return; }
L_001D5038:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D5050:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 11u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 574u)));
    set32(c.r[3], c.r[3].w[0] << 12);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[4].w[0] + 574u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 574u)));
    st32((c.r[4].w[0] + 1268u), c.r[2].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[2], c.r[4].w[0] - 9u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[1].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001D50C0; } }
    set32(c.r[2], 0u + 19u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001D50D0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8659u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D50D0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 767u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D50D0; } }
L_001D50C0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 574u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 84u), c.r[2].w[0]);  if (t) { goto L_001D5110; } }
    c.budget -= 1;
L_001D50D0:
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001D50F8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 767u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D50F8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 574u)));
    set32(c.r[2], c.r[2].w[0] + 16384u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 84u), c.r[2].w[0]);  if (t) { goto L_001D5110; } }
L_001D50F8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 574u)));
    set32(c.r[2], c.r[2].w[0] + 32767u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 6;
L_001D5110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5118u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 35u, depth + 1u); else { c.pc = 0x001D8DE0u; return; } if (c.pc != 0x001D5118u) [[unlikely]] return; }
L_001D5118:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 572u)));
    set32(c.r[3], c.r[3].w[0] << 12);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[17].w[0] + 572u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 11u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 574u)));
    set32(c.r[3], c.r[3].w[0] << 12);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[17].w[0] + 574u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5148u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 572u)));  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x001D5148u) [[unlikely]] return; }
L_001D5148:
    c.f[1] = 0u;
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5160u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 572u)));  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x001D5160u) [[unlikely]] return; }
L_001D5160:
    c.f[1] = 0u;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5178u); st8((c.r[17].w[0] + 963u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0036(c, 52u, depth + 1u); else { c.pc = 0x001D9190u; return; } if (c.pc != 0x001D5178u) [[unlikely]] return; }
L_001D5178:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 31u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5190u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001D5190u) [[unlikely]] return; }
L_001D5190:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001D51B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 12u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], 0u + 6u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], 0u + 128u);
    st8((c.r[4].w[0] + 568u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 709u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F1E0000u);
    st8((c.r[4].w[0] + 710u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = c.r[2].d[0] | 58930ull;
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 104u), c.r[5].w[0]);
    st8((c.r[4].w[0] + 516u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 1088u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 84u)));
    st32((c.r[4].w[0] + 1268u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 579u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 23;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001D5220; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1268u)));
    set32(c.r[2], c.r[2].w[0] - 16384u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1268u), c.r[2].w[0]);  if (t) { goto L_001D5230; } }
    c.budget -= 1;
L_001D5220:
    set32(c.r[2], ld32((c.r[16].w[0] + 1268u)));
    set32(c.r[2], c.r[2].w[0] + 16384u);
    st32((c.r[16].w[0] + 1268u), c.r[2].w[0]);
    c.budget -= 4;
L_001D5230:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], 0u + 46u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 53u);  if (t) { goto L_001D5248; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D5290; } }
L_001D5248:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F330000u);
    c.r[3].d[0] = c.r[2].d[0] | 13107ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A80000u);
    st32((c.r[16].w[0] + 104u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 736u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 732u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 579u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (t) { goto L_001D5280; } }
    st32((c.r[16].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 280u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001D5290; } }
L_001D5280:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00040000u);
    st32((c.r[16].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 280u), 0u);
    st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_001D5290:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 579u)));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D52ACu); set32(c.r[6], c.r[2].w[0] + 60u);  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001D52ACu) [[unlikely]] return; }
L_001D52AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D52B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 14u, depth + 1u); else { c.pc = 0x001D0060u; return; } if (c.pc != 0x001D52B4u) [[unlikely]] return; }
L_001D52B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001D52D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D52C4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_003A(c, 86u, depth + 1u); else { c.pc = 0x001EA280u; return; } if (c.pc != 0x001D52C4u) [[unlikely]] return; }
L_001D52C4:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    set32(c.r[3], 0u - 24577u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
L_001D52D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D52F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 12u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 568u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001D5350; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5314u); c.r[5].d[0] = ld16((c.r[16].w[0] + 680u));  if (depth < kMaxDepth) unit_0039(c, 47u, depth + 1u); else { c.pc = 0x001E4870u; return; } if (c.pc != 0x001D5314u) [[unlikely]] return; }
L_001D5314:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D5350; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1264u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 579u)));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 15));
    set32(c.r[3], c.r[3].w[0] << 1);
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5344u); st8((c.r[16].w[0] + 579u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 86u, depth + 1u); else { c.pc = 0x001D51B0u; return; } if (c.pc != 0x001D5344u) [[unlikely]] return; }
L_001D5344:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D54D0; } }
    c.budget -= 1;
L_001D5350:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], 0u + 46u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 53u);  if (t) { goto L_001D5368; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D5378; } }
L_001D5368:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 568u));
    set32(c.r[2], 0u + 12u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D53C8; } }
L_001D5378:
    set32(c.r[2], 0u + 13u);
    st8((c.r[16].w[0] + 568u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 128u);
    st8((c.r[16].w[0] + 709u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st8((c.r[16].w[0] + 710u), static_cast<std::uint8_t>(0u));
    c.f[12] = 0u;
    set32(c.r[6], ld32((c.r[16].w[0] + 84u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 1268u), c.r[6].w[0]);
    st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 1088u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 579u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D53BCu); set32(c.r[6], c.r[2].w[0] + 58u);  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001D53BCu) [[unlikely]] return; }
L_001D53BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D5438; } }
    c.budget -= 1;
L_001D53C8:
    set32(c.r[2], 0u + 13u);
    st8((c.r[16].w[0] + 568u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 128u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 709u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 710u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 1088u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 579u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);  if (t) { goto L_001D5418; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 59u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5410u); set32(c.r[7], 0u + 8u);  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001D5410u) [[unlikely]] return; }
L_001D5410:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D5438; } }
L_001D5418:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 58u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5434u); set32(c.r[7], 0u + 8u);  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001D5434u) [[unlikely]] return; }
L_001D5434:
    c.budget -= 1;
L_001D5438:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], 0u + 46u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 53u);  if (t) { goto L_001D5450; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D5460; } }
L_001D5450:
    set32(c.r[2], 0u + 16u);
    st32((c.r[16].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 280u), 0u);
    st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_001D5460:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5468u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 14u, depth + 1u); else { c.pc = 0x001D0060u; return; } if (c.pc != 0x001D5468u) [[unlikely]] return; }
L_001D5468:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001D5490; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5478u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_003A(c, 86u, depth + 1u); else { c.pc = 0x001EA280u; return; } if (c.pc != 0x001D5478u) [[unlikely]] return; }
L_001D5478:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    set32(c.r[3], 0u - 24577u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001D54D0; } }
    c.budget -= 1;
L_001D5490:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[2].d[0] = c.r[2].sd[0] < 21ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001D54B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D54A8u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_004E(c, 146u, depth + 1u); else { c.pc = 0x0023A0A0u; return; } if (c.pc != 0x001D54A8u) [[unlikely]] return; }
L_001D54A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D54D0; } }
L_001D54B0:
    set32(c.r[3], ld32((c.r[16].w[0] + 1608u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 106u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], 0u + 36u);  if (t) { goto L_001D54C8; } }
    set32(c.r[5], 0u + 37u);
    c.budget -= 1;
L_001D54C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D54D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x001D54D0u) [[unlikely]] return; }
L_001D54D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D54E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 16u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 568u));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001D5590; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 572u)));
    c.f[1] = c.r[4].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FD90000u);
    set32(c.r[5], c.r[5].w[0] + 5120u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    set32(c.r[16], 0u + 36u);
    c.f[3] = c.r[2].w[0];
    set32(c.r[4], c.r[7].w[0] << 12);
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBDAE0000u);
    st16((c.r[18].w[0] + 572u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.f[0] = c.r[3].w[0];
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 11u)));
    c.r[2].d[0] = c.r[2].d[0] | 5243ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 574u)));
    set32(c.r[4], c.r[4].w[0] << 12);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[18].w[0] + 574u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 9u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.f[2] = ld32((c.r[3].w[0]));
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 104u), c.f[0]);
    c.budget -= 33;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 108u), c.r[2].w[0]);  if (t) { goto L_001D55D0; } }
    c.budget -= 1;
L_001D5590:
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D55A0u); set32(c.r[16], 0u + 32u);  if (depth < kMaxDepth) unit_0036(c, 15u, depth + 1u); else { c.pc = 0x001D8A40u; return; } if (c.pc != 0x001D55A0u) [[unlikely]] return; }
L_001D55A0:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], 0u + 34u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; st8((c.r[18].w[0] + 579u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001D55B8; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 579u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001D55B8:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D55C4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 16u, depth + 1u); else { c.pc = 0x001D8AF0u; return; } if (c.pc != 0x001D55C4u) [[unlikely]] return; }
L_001D55C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D55CCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 37u, depth + 1u); else { c.pc = 0x001D8E70u; return; } if (c.pc != 0x001D55CCu) [[unlikely]] return; }
L_001D55CC:
    c.budget -= 1;
L_001D55D0:
    st8((c.r[18].w[0] + 710u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[18].w[0] + 728u), c.r[2].w[0]);
    c.f[12] = 0u;
    set32(c.r[2], 0u + 2u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[18].w[0] + 749u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D55FCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001D55FCu) [[unlikely]] return; }
L_001D55FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001D5620:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D564Cu); set32(c.r[16], 0u + 32u);  if (depth < kMaxDepth) unit_0036(c, 15u, depth + 1u); else { c.pc = 0x001D8A40u; return; } if (c.pc != 0x001D564Cu) [[unlikely]] return; }
L_001D564C:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], 0u + 34u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; st8((c.r[18].w[0] + 579u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001D5668; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 579u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001D5668:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5670u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 35u, depth + 1u); else { c.pc = 0x001D8DE0u; return; } if (c.pc != 0x001D5670u) [[unlikely]] return; }
L_001D5670:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D567Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 29u, depth + 1u); else { c.pc = 0x001D8C90u; return; } if (c.pc != 0x001D567Cu) [[unlikely]] return; }
L_001D567C:
    c.f[12] = 0u;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5698u); st8((c.r[18].w[0] + 963u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001D5698u) [[unlikely]] return; }
L_001D5698:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001D56B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[12] = 0u;
    st8((c.r[4].w[0] + 749u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[4].w[0] + 744u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[4].w[0] + 849u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], 0u + 37u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 574u)));
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0] + 1268u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 574u)));
    set32(c.r[3], c.r[3].w[0] + 32767u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    st32((c.r[4].w[0] + 84u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D570Cu); st32((c.r[4].w[0] + 108u), 0u);  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001D570Cu) [[unlikely]] return; }
L_001D570C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5718u); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x001D5718u) [[unlikely]] return; }
L_001D5718:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D5730:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F430000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st8((c.r[4].w[0] + 710u), static_cast<std::uint8_t>(0u));
    c.f[0] = c.r[2].w[0];
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 574u)));
    c.f[2] = c.r[3].w[0];
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 1268u), c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 574u)));
    set32(c.r[2], c.r[2].w[0] + 32767u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    st32((c.r[4].w[0] + 84u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[1].w[0] + 5168u));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 572u)));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_div(c, 20u, c.f[1], c.f[0]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D579Cu);  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x001D579Cu) [[unlikely]] return; }
L_001D579C:
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D57ACu); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 572u)));  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x001D57ACu) [[unlikely]] return; }
L_001D57AC:
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D57BCu); st32((c.r[16].w[0] + 52u), c.f[0]);  if (depth < kMaxDepth) unit_0036(c, 35u, depth + 1u); else { c.pc = 0x001D8DE0u; return; } if (c.pc != 0x001D57BCu) [[unlikely]] return; }
L_001D57BC:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 38u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D57D8u); st8((c.r[16].w[0] + 963u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001D57D8u) [[unlikely]] return; }
L_001D57D8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D57E4u); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x001D57E4u) [[unlikely]] return; }
L_001D57E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001D5800:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 17u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st8((c.r[4].w[0] + 579u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[4].w[0] + 584u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D5838; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    set32(c.r[2], 0u + 15u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001D5838; } }
    st8((c.r[4].w[0] + 710u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001D5838:
    st32((c.r[4].w[0] + 732u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 744u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 7u);  if (t) { goto L_001D58D0; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[4].w[0] + 749u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 8296u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D58B0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 8298u)));
    set32(c.r[2], 0u + 76u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 77u);  if (t) { goto L_001D5878; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D58B0; } }
    c.budget -= 1;
L_001D5878:
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 709u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B80000u);
    set32(c.r[5], 0u + 4u);
    st32((c.r[4].w[0] + 728u), c.r[2].w[0]);
    set32(c.r[6], 0u + 77u);
    set32(c.r[2], 0u + 200u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D58A4u); st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001D58A4u) [[unlikely]] return; }
L_001D58A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D5950; } }
    c.budget -= 1;
L_001D58B0:
    set32(c.r[5], 0u + 4u);
    c.f[12] = 0u;
    set32(c.r[6], 0u + 76u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D58C4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001D58C4u) [[unlikely]] return; }
L_001D58C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D5950; } }
    c.budget -= 1;
L_001D58D0:
    st8((c.r[4].w[0] + 749u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 8296u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D5938; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 8298u)));
    set32(c.r[2], 0u + 74u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 75u);  if (t) { goto L_001D5900; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D5938; } }
    c.budget -= 1;
L_001D5900:
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 709u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B80000u);
    set32(c.r[5], 0u + 4u);
    st32((c.r[4].w[0] + 728u), c.r[2].w[0]);
    set32(c.r[6], 0u + 75u);
    set32(c.r[2], 0u + 200u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D592Cu); st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001D592Cu) [[unlikely]] return; }
L_001D592C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D5950; } }
    c.budget -= 1;
L_001D5938:
    set32(c.r[5], 0u + 4u);
    c.f[12] = 0u;
    set32(c.r[6], 0u + 74u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D594Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001D594Cu) [[unlikely]] return; }
L_001D594C:
    c.budget -= 1;
L_001D5950:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001D5960:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 22u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], 0u + 11u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 568u));
    st8((c.r[4].w[0] + 578u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 568u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 728u), c.f[12]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001D59B0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x46800000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[0], c.f[12]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 732u), c.f[0]);  if (t) { goto L_001D59F8; } }
L_001D59B0:
    set32(c.r[2], 0u + 24u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x460E0000u);  if (t) { goto L_001D59F8; } }
    c.r[2].d[0] = c.r[2].d[0] | 14541ull;
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[0], c.f[12]);
    st32((c.r[16].w[0] + 732u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 767u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D59F8; } }
    c.f[0] = ld32((c.r[16].w[0] + 732u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 732u), c.f[0]);
    c.budget -= 6;
L_001D59F8:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 767u)));
    c.f[0] = fp::cvt_w_s(c.f[12]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], c.f[0]);
    c.f[12] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5A14u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001D5A14u) [[unlikely]] return; }
L_001D5A14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5A1Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 105u, depth + 1u); else { c.pc = 0x001EA5C0u; return; } if (c.pc != 0x001D5A1Cu) [[unlikely]] return; }
L_001D5A1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5A24u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 11u, depth + 1u); else { c.pc = 0x001EC290u; return; } if (c.pc != 0x001D5A24u) [[unlikely]] return; }
L_001D5A24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D5A40:
    c.r[5].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[3].w[0] - 30400u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 767u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> (c.r[2].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 60);  c.pc = t; return; }
L_001D5A70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 11u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 574u)));
    set32(c.r[6], c.r[6].w[0] << 12);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st16((c.r[4].w[0] + 574u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 574u)));
    st32((c.r[4].w[0] + 1268u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 574u)));
    set32(c.r[3], c.r[3].w[0] + 32767u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    st32((c.r[4].w[0] + 84u), c.r[3].w[0]);
    st8((c.r[4].w[0] + 749u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5AC0u); st8((c.r[4].w[0] + 744u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0036(c, 16u, depth + 1u); else { c.pc = 0x001D8AF0u; return; } if (c.pc != 0x001D5AC0u) [[unlikely]] return; }
L_001D5AC0:
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D9D0000u);
    c.r[2].d[0] = c.r[2].d[0] | 35289ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = c.r[2].w[0];
    set32(c.r[5], 0u + 4u);
    c.f[12] = 0u;
    set32(c.r[6], 0u + 78u);
    c.r[7].d[0] = 0ull + 0ull;
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5AF4u); st32((c.r[16].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001D5AF4u) [[unlikely]] return; }
L_001D5AF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D5B10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 30624u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 568u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5B3Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D5B3Cu) [[unlikely]] return; }
L_001D5B3C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001D5B60; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 808u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001D5B60; } }
    st8((c.r[16].w[0] + 808u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001D5B60:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1625u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001D5BC0; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 814u)));
    set32(c.r[3], 0u + 48u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001D5B90; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001D5BB0; } }
L_001D5B90:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1625u)));
    set32(c.r[4], 0u + 128u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42200000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 1625u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1088u), c.r[3].w[0]);  if (t) { goto L_001D5BC0; } }
L_001D5BB0:
    set32(c.r[3], 0u + 128u);
    st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[16].w[0] + 1088u), c.r[3].w[0]);
    c.budget -= 4;
L_001D5BC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D5BD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5BE4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x001D5BE4u) [[unlikely]] return; }
L_001D5BE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001D5C38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5BF4u);  if (depth < kMaxDepth) unit_0035(c, 128u, depth + 1u); else { c.pc = 0x001D5A40u; return; } if (c.pc != 0x001D5BF4u) [[unlikely]] return; }
L_001D5BF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D5C18; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41300000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5C0Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 124u, depth + 1u); else { c.pc = 0x001D5960u; return; } if (c.pc != 0x001D5C0Cu) [[unlikely]] return; }
L_001D5C0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D5C60; } }
    c.budget -= 1;
L_001D5C18:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5C24u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_003A(c, 78u, depth + 1u); else { c.pc = 0x001EA120u; return; } if (c.pc != 0x001D5C24u) [[unlikely]] return; }
L_001D5C24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5C2Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 70u, depth + 1u); else { c.pc = 0x001EA000u; return; } if (c.pc != 0x001D5C2Cu) [[unlikely]] return; }
L_001D5C2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D5C60; } }
    c.budget -= 1;
L_001D5C38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5C40u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 14u, depth + 1u); else { c.pc = 0x001D0060u; return; } if (c.pc != 0x001D5C40u) [[unlikely]] return; }
L_001D5C40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001D5C60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5C50u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_003A(c, 86u, depth + 1u); else { c.pc = 0x001EA280u; return; } if (c.pc != 0x001D5C50u) [[unlikely]] return; }
L_001D5C50:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    set32(c.r[3], 0u - 24577u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_001D5C60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D5C70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 8296u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001D5CA8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8298u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001D5CA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5CA0u);  if (depth < kMaxDepth) unit_0035(c, 134u, depth + 1u); else { c.pc = 0x001D5BD0u; return; } if (c.pc != 0x001D5CA0u) [[unlikely]] return; }
L_001D5CA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D5E78; } }
L_001D5CA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5CB0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x001D5CB0u) [[unlikely]] return; }
L_001D5CB0:
    c.f[1] = ld32((c.r[16].w[0] + 8308u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001D5DB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5CD4u);  if (depth < kMaxDepth) unit_0036(c, 17u, depth + 1u); else { c.pc = 0x001D8B70u; return; } if (c.pc != 0x001D5CD4u) [[unlikely]] return; }
L_001D5CD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5CDCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 14u, depth + 1u); else { c.pc = 0x001D0060u; return; } if (c.pc != 0x001D5CDCu) [[unlikely]] return; }
L_001D5CDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001D5DB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD730000u);
    c.r[2].d[0] = c.r[2].d[0] | 46662ull;
    st8((c.r[16].w[0] + 709u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 568u));
    st8((c.r[16].w[0] + 578u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 568u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8298u)));
    c.r[1].d[0] = c.r[3].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);  if (t) { goto L_001D5D30; } }
    set32(c.r[5], 0u + 4u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[6], c.r[3].w[0] + 9u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5D28u); c.r[7].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001D5D28u) [[unlikely]] return; }
L_001D5D28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D5DA8; } }
L_001D5D30:
    c.r[2].d[0] = c.r[3].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 34ll ? 1ull : 0ull;  if (t) { goto L_001D5D70; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001D5D70; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 579u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 4u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] << 1);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5D68u); set32(c.r[6], c.r[2].w[0] + 9u);  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001D5D68u) [[unlikely]] return; }
L_001D5D68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D5DA8; } }
L_001D5D70:
    c.r[2].d[0] = c.r[3].sd[0] < 34ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 38ll ? 1ull : 0ull;  if (t) { goto L_001D5DA8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001D5DA8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 579u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 4u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] << 1);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5DA8u); set32(c.r[6], c.r[2].w[0] + 9u);  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001D5DA8u) [[unlikely]] return; }
L_001D5DA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5DB0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 35u, depth + 1u); else { c.pc = 0x001D8DE0u; return; } if (c.pc != 0x001D5DB0u) [[unlikely]] return; }
L_001D5DB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D5E78; } }
L_001D5DB8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3ED10000u);
    c.r[4].d[0] = c.r[3].d[0] | 60293ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 600u)));
    c.f[2] = c.r[4].w[0];
    c.r[3].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] << 2);  if (t) { goto L_001D5E00; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], c.r[3].w[0] + 5120u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_div(c, 2u, c.f[1], c.f[0]);
    c.budget -= 10;
L_001D5E00:
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001D5E28; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 709u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 709u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 104u), c.f[2]);
    st32((c.r[16].w[0] + 108u), 0u);
    c.budget -= 6;
L_001D5E28:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8325u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001D5E78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5E3Cu);  if (depth < kMaxDepth) unit_0035(c, 128u, depth + 1u); else { c.pc = 0x001D5A40u; return; } if (c.pc != 0x001D5E3Cu) [[unlikely]] return; }
L_001D5E3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D5E60; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41300000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5E54u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 124u, depth + 1u); else { c.pc = 0x001D5960u; return; } if (c.pc != 0x001D5E54u) [[unlikely]] return; }
L_001D5E54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D5E78; } }
    c.budget -= 1;
L_001D5E60:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5E6Cu); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_003A(c, 78u, depth + 1u); else { c.pc = 0x001EA120u; return; } if (c.pc != 0x001D5E6Cu) [[unlikely]] return; }
L_001D5E6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5E74u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 70u, depth + 1u); else { c.pc = 0x001EA000u; return; } if (c.pc != 0x001D5E74u) [[unlikely]] return; }
L_001D5E74:
    c.budget -= 1;
L_001D5E78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D5E90:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 808u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[3], 0u + 128u);  if (t) { goto L_001D5EB0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st8((c.r[4].w[0] + 516u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 1088u), c.r[2].w[0]);
    c.budget -= 4;
L_001D5EB0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 709u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 30344u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001D4000u < 16384u) { entry = entries_0035[(t - 0x001D4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001D5ED0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5EECu); st8((c.r[4].w[0] + 963u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0036(c, 32u, depth + 1u); else { c.pc = 0x001D8D40u; return; } if (c.pc != 0x001D5EECu) [[unlikely]] return; }
L_001D5EEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5EF4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 38u, depth + 1u); else { c.pc = 0x001D8EC0u; return; } if (c.pc != 0x001D5EF4u) [[unlikely]] return; }
L_001D5EF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_001D5F90; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBCF30000u);
    st8((c.r[16].w[0] + 709u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] | 46662ull;
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5F14u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 37u, depth + 1u); else { c.pc = 0x001D8E70u; return; } if (c.pc != 0x001D5F14u) [[unlikely]] return; }
L_001D5F14:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5F20u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_001D(c, 96u, depth + 1u); else { c.pc = 0x00175AB0u; return; } if (c.pc != 0x001D5F20u) [[unlikely]] return; }
L_001D5F20:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 579u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5F40u); set32(c.r[6], c.r[3].w[0] + 56u);  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001D5F40u) [[unlikely]] return; }
L_001D5F40:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5F4Cu); set32(c.r[5], 0u + 143u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x001D5F4Cu) [[unlikely]] return; }
L_001D5F4C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 32u);  if (t) { goto L_001D5F78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5F64u);  if (depth < kMaxDepth) unit_0039(c, 189u, depth + 1u); else { c.pc = 0x001E7260u; return; } if (c.pc != 0x001D5F64u) [[unlikely]] return; }
L_001D5F64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001D5F78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5F74u); set32(c.r[5], 0u + 156u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x001D5F74u) [[unlikely]] return; }
L_001D5F74:
    c.budget -= 1;
L_001D5F78:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5F84u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_0049(c, 393u, depth + 1u); else { c.pc = 0x00227A20u; return; } if (c.pc != 0x001D5F84u) [[unlikely]] return; }
L_001D5F84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D6050; } }
    c.budget -= 1;
L_001D5F90:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.f[1] = ld32((c.r[16].w[0] + 8308u));
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], 0u + 1u);  if (t) { goto L_001D5FB0; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001D5FB0:
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001D5FD0; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 2;
L_001D5FD0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001D6050; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5FE0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x001D5FE0u) [[unlikely]] return; }
L_001D5FE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D6010; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 709u)));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    set32(c.r[7], 0u + 10u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 709u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 579u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6010u); set32(c.r[6], c.r[2].w[0] + 54u);  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001D6010u) [[unlikely]] return; }
L_001D6010:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[1] = ld32((c.r[16].w[0] + 8308u));
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001D6050; } }
    c.f[1] = ld32((c.r[16].w[0] + 728u));
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    c.f[0] = ld32((c.r[16].w[0] + 8292u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    c.budget -= 9;
L_001D6050:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D6060:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6074u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x001D6074u) [[unlikely]] return; }
L_001D6074:
    set32(c.r[2], 0u + 2u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6084u); st8((c.r[16].w[0] + 963u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0036(c, 32u, depth + 1u); else { c.pc = 0x001D8D40u; return; } if (c.pc != 0x001D6084u) [[unlikely]] return; }
L_001D6084:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D608Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 38u, depth + 1u); else { c.pc = 0x001D8EC0u; return; } if (c.pc != 0x001D608Cu) [[unlikely]] return; }
L_001D608C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_001D6120; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBCF30000u);
    st8((c.r[16].w[0] + 709u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] | 46662ull;
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D60ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 37u, depth + 1u); else { c.pc = 0x001D8E70u; return; } if (c.pc != 0x001D60ACu) [[unlikely]] return; }
L_001D60AC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D60B8u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_001D(c, 96u, depth + 1u); else { c.pc = 0x00175AB0u; return; } if (c.pc != 0x001D60B8u) [[unlikely]] return; }
L_001D60B8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 579u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D60D8u); set32(c.r[6], c.r[3].w[0] + 56u);  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001D60D8u) [[unlikely]] return; }
L_001D60D8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D60E4u); set32(c.r[5], 0u + 143u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x001D60E4u) [[unlikely]] return; }
L_001D60E4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 32u);  if (t) { goto L_001D6110; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D60FCu);  if (depth < kMaxDepth) unit_0039(c, 189u, depth + 1u); else { c.pc = 0x001E7260u; return; } if (c.pc != 0x001D60FCu) [[unlikely]] return; }
L_001D60FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001D6110; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D610Cu); set32(c.r[5], 0u + 156u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x001D610Cu) [[unlikely]] return; }
L_001D610C:
    c.budget -= 1;
L_001D6110:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D611Cu); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_0049(c, 393u, depth + 1u); else { c.pc = 0x00227A20u; return; } if (c.pc != 0x001D611Cu) [[unlikely]] return; }
L_001D611C:
    c.budget -= 1;
L_001D6120:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D6130:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D614Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 17u, depth + 1u); else { c.pc = 0x001D8B70u; return; } if (c.pc != 0x001D614Cu) [[unlikely]] return; }
L_001D614C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6154u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x001D6154u) [[unlikely]] return; }
L_001D6154:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D6160; } }
    c.r[17].d[0] = c.r[17].d[0] | 1ull;
    c.budget -= 1;
L_001D6160:
    c.f[2] = ld32((c.r[16].w[0] + 104u));
    c.f[1] = ld32((c.r[16].w[0] + 108u));
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001D6190; } }
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.r[17].d[0] = c.r[17].d[0] | 2ull;
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.budget -= 4;
L_001D6190:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[1] = ld32((c.r[16].w[0] + 8308u));
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 128u);  if (t) { goto L_001D61B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 1088u), c.r[2].w[0]);
    c.budget -= 3;
L_001D61B8:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001D61D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D61CCu);  if (depth < kMaxDepth) unit_0035(c, 90u, depth + 1u); else { c.pc = 0x001D52F0u; return; } if (c.pc != 0x001D61CCu) [[unlikely]] return; }
L_001D61CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D6290; } }
    c.budget -= 1;
L_001D61D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D61E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 14u, depth + 1u); else { c.pc = 0x001D0060u; return; } if (c.pc != 0x001D61E0u) [[unlikely]] return; }
L_001D61E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001D6290; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBDF30000u);
    st8((c.r[16].w[0] + 709u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] | 46662ull;
    st32((c.r[16].w[0] + 108u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 1608u)));
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = ld32((c.r[3].w[0] + 64u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 36u), c.f[0]);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001D6268; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6238u);  if (depth < kMaxDepth) unit_0034(c, 14u, depth + 1u); else { c.pc = 0x001D0060u; return; } if (c.pc != 0x001D6238u) [[unlikely]] return; }
L_001D6238:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001D6268; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6248u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_003A(c, 86u, depth + 1u); else { c.pc = 0x001EA280u; return; } if (c.pc != 0x001D6248u) [[unlikely]] return; }
L_001D6248:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x428C0000u);
    set32(c.r[3], 0u - 24577u);
    st32((c.r[16].w[0] + 1088u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001D6290; } }
    c.budget -= 1;
L_001D6268:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6270u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 35u, depth + 1u); else { c.pc = 0x001D8DE0u; return; } if (c.pc != 0x001D6270u) [[unlikely]] return; }
L_001D6270:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 579u)));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D628Cu); set32(c.r[6], c.r[2].w[0] + 54u);  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001D628Cu) [[unlikely]] return; }
L_001D628C:
    c.budget -= 1;
L_001D6290:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001D62B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 128u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 516u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D62D4u); st32((c.r[4].w[0] + 1088u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0036(c, 17u, depth + 1u); else { c.pc = 0x001D8B70u; return; } if (c.pc != 0x001D62D4u) [[unlikely]] return; }
L_001D62D4:
    c.f[2] = ld32((c.r[16].w[0] + 104u));
    c.f[1] = ld32((c.r[16].w[0] + 108u));
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001D6300; } }
    st32((c.r[16].w[0] + 104u), c.f[0]);
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.budget -= 3;
L_001D6300:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6308u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x001D6308u) [[unlikely]] return; }
L_001D6308:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001D6320; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6318u);  if (depth < kMaxDepth) unit_0035(c, 90u, depth + 1u); else { c.pc = 0x001D52F0u; return; } if (c.pc != 0x001D6318u) [[unlikely]] return; }
L_001D6318:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D6388; } }
L_001D6320:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6328u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 14u, depth + 1u); else { c.pc = 0x001D0060u; return; } if (c.pc != 0x001D6328u) [[unlikely]] return; }
L_001D6328:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_001D6388; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBDF30000u);
    st8((c.r[16].w[0] + 709u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].d[0] = c.r[2].d[0] | 46662ull;
    st32((c.r[16].w[0] + 108u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 1608u)));
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = ld32((c.r[3].w[0] + 64u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 36u), c.f[0]);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 568u));
    st8((c.r[16].w[0] + 578u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D636Cu); st8((c.r[16].w[0] + 568u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_0036(c, 35u, depth + 1u); else { c.pc = 0x001D8DE0u; return; } if (c.pc != 0x001D636Cu) [[unlikely]] return; }
L_001D636C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 579u)));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6388u); set32(c.r[6], c.r[2].w[0] + 54u);  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001D6388u) [[unlikely]] return; }
L_001D6388:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D63A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D63B8u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x001D63B8u) [[unlikely]] return; }
L_001D63B8:
    c.f[1] = ld32((c.r[16].w[0] + 8308u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001D6458; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D63DCu);  if (depth < kMaxDepth) unit_0036(c, 17u, depth + 1u); else { c.pc = 0x001D8B70u; return; } if (c.pc != 0x001D63DCu) [[unlikely]] return; }
L_001D63DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D63E4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 14u, depth + 1u); else { c.pc = 0x001D0060u; return; } if (c.pc != 0x001D63E4u) [[unlikely]] return; }
L_001D63E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D6458; } }
    c.f[20] = ld32((c.r[16].w[0] + 8308u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001D6410; } }
    c.f[20] = c.f[0];
    c.budget -= 2;
L_001D6410:
    st8((c.r[16].w[0] + 709u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 108u), 0u);
    set32(c.r[2], 0u + 11u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 568u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 578u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6430u); st8((c.r[16].w[0] + 568u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0036(c, 35u, depth + 1u); else { c.pc = 0x001D8DE0u; return; } if (c.pc != 0x001D6430u) [[unlikely]] return; }
L_001D6430:
    st8((c.r[16].w[0] + 963u), static_cast<std::uint8_t>(0u));
    c.f[12] = c.f[20];
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 767u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 31u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D644Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001D644Cu) [[unlikely]] return; }
L_001D644C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D64A0; } }
    c.budget -= 1;
L_001D6458:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8325u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001D64A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D646Cu);  if (depth < kMaxDepth) unit_0035(c, 128u, depth + 1u); else { c.pc = 0x001D5A40u; return; } if (c.pc != 0x001D646Cu) [[unlikely]] return; }
L_001D646C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001D6488; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D647Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 78u, depth + 1u); else { c.pc = 0x001EA120u; return; } if (c.pc != 0x001D647Cu) [[unlikely]] return; }
L_001D647C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D6498; } }
    c.budget -= 1;
L_001D6488:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6494u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_003A(c, 78u, depth + 1u); else { c.pc = 0x001EA120u; return; } if (c.pc != 0x001D6494u) [[unlikely]] return; }
L_001D6494:
    c.budget -= 1;
L_001D6498:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D64A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 70u, depth + 1u); else { c.pc = 0x001EA000u; return; } if (c.pc != 0x001D64A0u) [[unlikely]] return; }
L_001D64A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001D64C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D64D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x001D64D4u) [[unlikely]] return; }
L_001D64D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D64DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 32u, depth + 1u); else { c.pc = 0x001D8D40u; return; } if (c.pc != 0x001D64DCu) [[unlikely]] return; }
L_001D64DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D64E4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 38u, depth + 1u); else { c.pc = 0x001D8EC0u; return; } if (c.pc != 0x001D64E4u) [[unlikely]] return; }
L_001D64E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D6550; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3ED10000u);
    st8((c.r[16].w[0] + 709u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = c.r[2].d[0] | 60293ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 104u), c.r[3].w[0]);
    set32(c.r[2], 0u + 10u);
    st32((c.r[16].w[0] + 108u), 0u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 568u));
    st8((c.r[16].w[0] + 578u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6518u); st8((c.r[16].w[0] + 568u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0036(c, 36u, depth + 1u); else { c.pc = 0x001D8E30u; return; } if (c.pc != 0x001D6518u) [[unlikely]] return; }
L_001D6518:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6524u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_001D(c, 96u, depth + 1u); else { c.pc = 0x00175AB0u; return; } if (c.pc != 0x001D6524u) [[unlikely]] return; }
L_001D6524:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D652Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 176u, depth + 1u); else { c.pc = 0x001EDE20u; return; } if (c.pc != 0x001D652Cu) [[unlikely]] return; }
L_001D652C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 767u)));
    c.f[12] = ld32((c.r[16].w[0] + 8308u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 30u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6544u); set32(c.r[7], 0u + 3u);  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001D6544u) [[unlikely]] return; }
L_001D6544:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D65A0; } }
    c.budget -= 1;
L_001D6550:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8325u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001D65A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6564u);  if (depth < kMaxDepth) unit_0035(c, 128u, depth + 1u); else { c.pc = 0x001D5A40u; return; } if (c.pc != 0x001D6564u) [[unlikely]] return; }
L_001D6564:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001D6580; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6574u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 86u, depth + 1u); else { c.pc = 0x001EA280u; return; } if (c.pc != 0x001D6574u) [[unlikely]] return; }
L_001D6574:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D6590; } }
    c.budget -= 1;
L_001D6580:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D658Cu); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_003A(c, 86u, depth + 1u); else { c.pc = 0x001EA280u; return; } if (c.pc != 0x001D658Cu) [[unlikely]] return; }
L_001D658C:
    c.budget -= 1;
L_001D6590:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D659Cu); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_003A(c, 83u, depth + 1u); else { c.pc = 0x001EA1B0u; return; } if (c.pc != 0x001D659Cu) [[unlikely]] return; }
L_001D659C:
    c.budget -= 1;
L_001D65A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D65B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 128u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[4].w[0] + 516u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D65DCu); st32((c.r[4].w[0] + 1088u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003B(c, 334u, depth + 1u); else { c.pc = 0x001EF960u; return; } if (c.pc != 0x001D65DCu) [[unlikely]] return; }
L_001D65DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D65E4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 14u, depth + 1u); else { c.pc = 0x001D0060u; return; } if (c.pc != 0x001D65E4u) [[unlikely]] return; }
L_001D65E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001D6608; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D65F4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_003A(c, 86u, depth + 1u); else { c.pc = 0x001EA280u; return; } if (c.pc != 0x001D65F4u) [[unlikely]] return; }
L_001D65F4:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    set32(c.r[3], 0u - 24577u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[17].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
L_001D6608:
    set32(c.r[3], ld32((c.r[17].w[0] + 696u)));
    c.r[3].d[0] = c.r[3].d[0] & 63ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001D6620; } }
    st8((c.r[17].w[0] + 710u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001D6620:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 8658u));
    set32(c.r[3], 0u + 46u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 53u);  if (t) { goto L_001D6770; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001D6770; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 1268u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6644u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 57u, depth + 1u); else { c.pc = 0x001E4C20u; return; } if (c.pc != 0x001D6644u) [[unlikely]] return; }
L_001D6644:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D664Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x001D664Cu) [[unlikely]] return; }
L_001D664C:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41600000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[3], 0u + 6u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[5].w[0] - 1u);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D667Cu); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0037(c, 146u, depth + 1u); else { c.pc = 0x001DD080u; return; } if (c.pc != 0x001D667Cu) [[unlikely]] return; }
L_001D667C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001D6980; } }
    set32(c.r[5], 0u + 180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6690u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x001D6690u) [[unlikely]] return; }
L_001D6690:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[17].w[0] + 32u);  if (t) { goto L_001D66B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D66A8u);  if (depth < kMaxDepth) unit_0039(c, 189u, depth + 1u); else { c.pc = 0x001E7260u; return; } if (c.pc != 0x001D66A8u) [[unlikely]] return; }
L_001D66A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001D66B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D66B8u); set32(c.r[5], 0u + 181u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x001D66B8u) [[unlikely]] return; }
L_001D66B8:
    c.r[5].d[0] = ld16((c.r[17].w[0] + 680u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D66C4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 47u, depth + 1u); else { c.pc = 0x001E4870u; return; } if (c.pc != 0x001D66C4u) [[unlikely]] return; }
L_001D66C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D66F0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 1264u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 579u)));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 15));
    c.r[4].d[0] = c.r[4].d[0] & 2ull;
    set32(c.r[3], c.r[3].w[0] << 1);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001D66F0; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 2;
L_001D66F0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001D6730; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001D6730; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 710u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001D6980; } }
    c.budget -= 1;
L_001D6730:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 579u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    st8((c.r[17].w[0] + 579u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] << 15);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6768u); st32((c.r[17].w[0] + 1268u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0035(c, 90u, depth + 1u); else { c.pc = 0x001D52F0u; return; } if (c.pc != 0x001D6768u) [[unlikely]] return; }
L_001D6768:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D6980; } }
L_001D6770:
    set32(c.r[3], 0u + 2u);
    st8((c.r[17].w[0] + 284u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 709u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_001D6940; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001D6888; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001D67A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D6980; } }
    c.budget -= 1;
L_001D67A0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = ld32((c.r[17].w[0] + 8292u));
    c.f[0] = ld32((c.r[17].w[0] + 736u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D67B8u); st32((c.r[17].w[0] + 736u), c.f[0]);  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x001D67B8u) [[unlikely]] return; }
L_001D67B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A80000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D67C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 146u, depth + 1u); else { c.pc = 0x001DD080u; return; } if (c.pc != 0x001D67C8u) [[unlikely]] return; }
L_001D67C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D67E8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 709u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 709u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[17].w[0] + 1268u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D67E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 57u, depth + 1u); else { c.pc = 0x001E4C20u; return; } if (c.pc != 0x001D67E8u) [[unlikely]] return; }
L_001D67E8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41600000u);
    c.f[2] = ld32((c.r[17].w[0] + 732u));
    c.f[1] = ld32((c.r[17].w[0] + 736u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001D6848; } }
    c.r[5].d[0] = ld16((c.r[17].w[0] + 680u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D681Cu); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 47u, depth + 1u); else { c.pc = 0x001E4870u; return; } if (c.pc != 0x001D681Cu) [[unlikely]] return; }
L_001D681C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D6848; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 1264u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 579u)));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 15));
    c.r[4].d[0] = c.r[4].d[0] & 2ull;
    set32(c.r[3], c.r[3].w[0] << 1);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001D6848; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 2;
L_001D6848:
    c.f[1] = ld32((c.r[17].w[0] + 736u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001D6878; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001D6878; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 710u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001D6980; } }
    c.budget -= 1;
L_001D6878:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 709u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001D6980; } }
    c.budget -= 1;
L_001D6888:
    c.f[1] = ld32((c.r[17].w[0] + 8292u));
    c.f[0] = ld32((c.r[17].w[0] + 736u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 736u), c.f[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 1268u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D68A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 57u, depth + 1u); else { c.pc = 0x001E4C20u; return; } if (c.pc != 0x001D68A4u) [[unlikely]] return; }
L_001D68A4:
    c.f[1] = ld32((c.r[17].w[0] + 8308u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001D68C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D68C8u);  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x001D68C8u) [[unlikely]] return; }
L_001D68C8:
    c.r[5].d[0] = ld16((c.r[17].w[0] + 680u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D68D8u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 47u, depth + 1u); else { c.pc = 0x001E4870u; return; } if (c.pc != 0x001D68D8u) [[unlikely]] return; }
L_001D68D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D6900; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 1264u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 579u)));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 15));
    c.r[4].d[0] = c.r[4].d[0] & 2ull;
    set32(c.r[3], c.r[3].w[0] << 1);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001D6900; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_001D6900:
    c.f[1] = ld32((c.r[17].w[0] + 736u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001D6930; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001D6930; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 710u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001D6980; } }
    c.budget -= 1;
L_001D6930:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 709u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001D6980; } }
    c.budget -= 1;
L_001D6940:
    set32(c.r[5], ld32((c.r[17].w[0] + 1268u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D694Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 57u, depth + 1u); else { c.pc = 0x001E4C20u; return; } if (c.pc != 0x001D694Cu) [[unlikely]] return; }
L_001D694C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6954u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x001D6954u) [[unlikely]] return; }
L_001D6954:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D6980; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 579u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBCB30000u);
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    st8((c.r[17].w[0] + 579u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 284u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6980u); st32((c.r[17].w[0] + 108u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0035(c, 90u, depth + 1u); else { c.pc = 0x001D52F0u; return; } if (c.pc != 0x001D6980u) [[unlikely]] return; }
L_001D6980:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001D69A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 128u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 516u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 1088u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 710u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001D69F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D69D0u); set32(c.r[5], ld32((c.r[16].w[0] + 1268u)));  if (depth < kMaxDepth) unit_0039(c, 57u, depth + 1u); else { c.pc = 0x001E4C20u; return; } if (c.pc != 0x001D69D0u) [[unlikely]] return; }
L_001D69D0:
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001D69F0; } }
    st32((c.r[16].w[0] + 108u), c.f[0]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.budget -= 2;
L_001D69F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D69F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x001D69F8u) [[unlikely]] return; }
L_001D69F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D6A70; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41400000u);
    st32((c.r[16].w[0] + 1088u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 1072u), c.r[3].w[0]);
    set32(c.r[2], 0u - 24577u);
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6A2Cu); st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 128u, depth + 1u); else { c.pc = 0x001D5A40u; return; } if (c.pc != 0x001D6A2Cu) [[unlikely]] return; }
L_001D6A2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D6A50; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6A44u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 124u, depth + 1u); else { c.pc = 0x001D5960u; return; } if (c.pc != 0x001D6A44u) [[unlikely]] return; }
L_001D6A44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D6AA8; } }
    c.budget -= 1;
L_001D6A50:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6A5Cu); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_003A(c, 78u, depth + 1u); else { c.pc = 0x001EA120u; return; } if (c.pc != 0x001D6A5Cu) [[unlikely]] return; }
L_001D6A5C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6A68u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_003A(c, 74u, depth + 1u); else { c.pc = 0x001EA090u; return; } if (c.pc != 0x001D6A68u) [[unlikely]] return; }
L_001D6A68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D6AA8; } }
L_001D6A70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6A78u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 14u, depth + 1u); else { c.pc = 0x001D0060u; return; } if (c.pc != 0x001D6A78u) [[unlikely]] return; }
L_001D6A78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001D6AA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6A88u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_003A(c, 86u, depth + 1u); else { c.pc = 0x001EA280u; return; } if (c.pc != 0x001D6A88u) [[unlikely]] return; }
L_001D6A88:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x42480000u);
    set32(c.r[3], 0u - 24577u);
    st32((c.r[16].w[0] + 1088u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 1072u), 0u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 8;
L_001D6AA8:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[3], 0u + 46u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 53u);  if (t) { goto L_001D6AC0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001D6B40; } }
L_001D6AC0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 579u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001D6B08; } }
    c.f[1] = ld32((c.r[16].w[0] + 8308u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41880000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].sd[0] = static_cast<std::int32_t>(0x42180000u);  if (t) { goto L_001D6B40; } }
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001D6B40; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001D6B40; } }
L_001D6B08:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41E80000u);
    c.f[1] = ld32((c.r[16].w[0] + 8308u));
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].sd[0] = static_cast<std::int32_t>(0x42480000u);  if (t) { goto L_001D6B40; } }
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001D6B40; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001D6B40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D6B50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 808u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001D6B80; } }
    set32(c.r[3], 0u + 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 1088u), c.r[2].w[0]);
    c.budget -= 5;
L_001D6B80:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 568u));
    set32(c.r[2], 0u + 17u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D6BC8; } }
    c.f[1] = ld32((c.r[16].w[0] + 728u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 128u);  if (t) { goto L_001D6BB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1088u), c.r[2].w[0]);  if (t) { goto L_001D6BC8; } }
L_001D6BB8:
    c.f[0] = ld32((c.r[16].w[0] + 8292u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 728u), c.f[0]);
    c.budget -= 4;
L_001D6BC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6BD0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x001D6BD0u) [[unlikely]] return; }
L_001D6BD0:
    c.f[1] = ld32((c.r[16].w[0] + 8308u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42580000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001D6C38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6BF4u);  if (depth < kMaxDepth) unit_0036(c, 17u, depth + 1u); else { c.pc = 0x001D8B70u; return; } if (c.pc != 0x001D6BF4u) [[unlikely]] return; }
L_001D6BF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6BFCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 14u, depth + 1u); else { c.pc = 0x001D0060u; return; } if (c.pc != 0x001D6BFCu) [[unlikely]] return; }
L_001D6BFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D6C38; } }
    st8((c.r[16].w[0] + 709u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD730000u);
    c.r[2].d[0] = c.r[2].d[0] | 46662ull;
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[16].w[0] + 568u));
    set32(c.r[2], 0u + 18u);
    st8((c.r[16].w[0] + 578u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6C30u); st8((c.r[16].w[0] + 568u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0036(c, 35u, depth + 1u); else { c.pc = 0x001D8DE0u; return; } if (c.pc != 0x001D6C30u) [[unlikely]] return; }
L_001D6C30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 963u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001D6CD8; } }
L_001D6C38:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3ED10000u);
    c.r[4].d[0] = c.r[3].d[0] | 60293ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 600u)));
    c.f[2] = c.r[4].w[0];
    c.r[3].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] << 2);  if (t) { goto L_001D6C80; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], c.r[3].w[0] + 5120u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_div(c, 2u, c.f[1], c.f[0]);
    c.budget -= 10;
L_001D6C80:
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001D6C98; } }
    st32((c.r[16].w[0] + 104u), c.f[2]);
    st32((c.r[16].w[0] + 108u), 0u);
    c.budget -= 2;
L_001D6C98:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8325u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001D6CD8; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 568u));
    set32(c.r[2], 0u + 17u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x42480000u);  if (t) { goto L_001D6CC0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    st32((c.r[16].w[0] + 1088u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 1072u), c.r[2].w[0]);
    c.budget -= 3;
L_001D6CC0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6CCCu); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_003A(c, 78u, depth + 1u); else { c.pc = 0x001EA120u; return; } if (c.pc != 0x001D6CCCu) [[unlikely]] return; }
L_001D6CCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6CD4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 70u, depth + 1u); else { c.pc = 0x001EA000u; return; } if (c.pc != 0x001D6CD4u) [[unlikely]] return; }
L_001D6CD4:
    c.budget -= 1;
L_001D6CD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D6CF0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 808u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[3], 0u + 128u);  if (t) { goto L_001D6D10; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st8((c.r[4].w[0] + 516u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 1088u), c.r[2].w[0]);
    c.budget -= 4;
L_001D6D10:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 709u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 30328u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001D4000u < 16384u) { entry = entries_0035[(t - 0x001D4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001D6D30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6D44u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 32u, depth + 1u); else { c.pc = 0x001D8D40u; return; } if (c.pc != 0x001D6D44u) [[unlikely]] return; }
L_001D6D44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6D4Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 38u, depth + 1u); else { c.pc = 0x001D8EC0u; return; } if (c.pc != 0x001D6D4Cu) [[unlikely]] return; }
L_001D6D4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D6DA8; } }
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42200000u);
    st8((c.r[16].w[0] + 709u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBCF30000u);
    st8((c.r[16].w[0] + 710u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[2].d[0] | 46662ull;
    st32((c.r[16].w[0] + 728u), c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6D7Cu); st32((c.r[16].w[0] + 108u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0036(c, 37u, depth + 1u); else { c.pc = 0x001D8E70u; return; } if (c.pc != 0x001D6D7Cu) [[unlikely]] return; }
L_001D6D7C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6D88u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_001D(c, 96u, depth + 1u); else { c.pc = 0x00175AB0u; return; } if (c.pc != 0x001D6D88u) [[unlikely]] return; }
L_001D6D88:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[3], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001D6DA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6DA0u);  if (depth < kMaxDepth) unit_003B(c, 176u, depth + 1u); else { c.pc = 0x001EDE20u; return; } if (c.pc != 0x001D6DA0u) [[unlikely]] return; }
L_001D6DA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D6DF8; } }
L_001D6DA8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.f[1] = ld32((c.r[16].w[0] + 8308u));
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], 0u + 1u);  if (t) { goto L_001D6DC8; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001D6DC8:
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001D6DE8; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 2;
L_001D6DE8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001D6DF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6DF8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x001D6DF8u) [[unlikely]] return; }
L_001D6DF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D6E10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6E24u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x001D6E24u) [[unlikely]] return; }
L_001D6E24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6E2Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 32u, depth + 1u); else { c.pc = 0x001D8D40u; return; } if (c.pc != 0x001D6E2Cu) [[unlikely]] return; }
L_001D6E2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6E34u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 38u, depth + 1u); else { c.pc = 0x001D8EC0u; return; } if (c.pc != 0x001D6E34u) [[unlikely]] return; }
L_001D6E34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D6E90; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 709u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBDAE0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.r[2].d[0] = c.r[2].d[0] | 5243ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 709u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 710u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 728u), c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6E68u); st32((c.r[16].w[0] + 108u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0036(c, 37u, depth + 1u); else { c.pc = 0x001D8E70u; return; } if (c.pc != 0x001D6E68u) [[unlikely]] return; }
L_001D6E68:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6E74u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_001D(c, 96u, depth + 1u); else { c.pc = 0x00175AB0u; return; } if (c.pc != 0x001D6E74u) [[unlikely]] return; }
L_001D6E74:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[3], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001D6E90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6E8Cu);  if (depth < kMaxDepth) unit_003B(c, 176u, depth + 1u); else { c.pc = 0x001EDE20u; return; } if (c.pc != 0x001D6E8Cu) [[unlikely]] return; }
L_001D6E8C:
    c.budget -= 1;
L_001D6E90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D6EA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6EBCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 17u, depth + 1u); else { c.pc = 0x001D8B70u; return; } if (c.pc != 0x001D6EBCu) [[unlikely]] return; }
L_001D6EBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6EC4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x001D6EC4u) [[unlikely]] return; }
L_001D6EC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D6ED0; } }
    c.r[17].d[0] = c.r[17].d[0] | 1ull;
    c.budget -= 1;
L_001D6ED0:
    c.f[2] = ld32((c.r[16].w[0] + 104u));
    c.f[1] = ld32((c.r[16].w[0] + 108u));
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001D6F00; } }
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.r[17].d[0] = c.r[17].d[0] | 2ull;
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.budget -= 4;
L_001D6F00:
    c.f[1] = ld32((c.r[16].w[0] + 728u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 128u);  if (t) { goto L_001D6F30; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[17].d[0] = c.r[17].d[0] | 4ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1088u), c.r[2].w[0]);  if (t) { goto L_001D6F40; } }
    c.budget -= 1;
L_001D6F30:
    c.f[0] = ld32((c.r[16].w[0] + 8292u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 728u), c.f[0]);
    c.budget -= 4;
L_001D6F40:
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 128u);  if (t) { goto L_001D6F88; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42480000u);
    st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    st32((c.r[16].w[0] + 1088u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 1072u), c.r[2].w[0]);
    set32(c.r[5], 0u + 11u);
    st8((c.r[16].w[0] + 808u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 1216u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6F78u); st32((c.r[16].w[0] + 1220u), 0u);  if (depth < kMaxDepth) unit_003A(c, 78u, depth + 1u); else { c.pc = 0x001EA120u; return; } if (c.pc != 0x001D6F78u) [[unlikely]] return; }
L_001D6F78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6F80u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 70u, depth + 1u); else { c.pc = 0x001EA000u; return; } if (c.pc != 0x001D6F80u) [[unlikely]] return; }
L_001D6F80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D6FB8; } }
L_001D6F88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6F90u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 14u, depth + 1u); else { c.pc = 0x001D0060u; return; } if (c.pc != 0x001D6F90u) [[unlikely]] return; }
L_001D6F90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001D6FB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBDF30000u);
    st8((c.r[16].w[0] + 709u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] | 46662ull;
    st32((c.r[16].w[0] + 108u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6FB4u); st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0036(c, 35u, depth + 1u); else { c.pc = 0x001D8DE0u; return; } if (c.pc != 0x001D6FB4u) [[unlikely]] return; }
L_001D6FB4:
    st8((c.r[16].w[0] + 963u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001D6FB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001D6FD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6FE4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x001D6FE4u) [[unlikely]] return; }
L_001D6FE4:
    c.f[1] = ld32((c.r[16].w[0] + 8308u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42240000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001D7158; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7008u);  if (depth < kMaxDepth) unit_0036(c, 17u, depth + 1u); else { c.pc = 0x001D8B70u; return; } if (c.pc != 0x001D7008u) [[unlikely]] return; }
L_001D7008:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7010u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 14u, depth + 1u); else { c.pc = 0x001D0060u; return; } if (c.pc != 0x001D7010u) [[unlikely]] return; }
L_001D7010:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D7158; } }
    st8((c.r[16].w[0] + 709u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD730000u);
    c.r[2].d[0] = c.r[2].d[0] | 46662ull;
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], 0u + 20u);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 568u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[0] = c.r[2].w[0];
    st8((c.r[16].w[0] + 578u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 568u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 8308u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 15;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001D70F0; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], 0u + 38u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);  if (t) { goto L_001D7080; } }
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001D70D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 838u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001D70D0; } }
L_001D7080:
    set32(c.r[2], 0u + 45u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);  if (t) { goto L_001D70A8; } }
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001D70D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 838u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001D70D0; } }
L_001D70A8:
    set32(c.r[2], 0u + 52u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);  if (t) { goto L_001D70D0; } }
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001D70D0; } }
    st8((c.r[16].w[0] + 838u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001D70D0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 767u)));
    c.f[12] = ld32((c.r[16].w[0] + 8308u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 38u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D70E8u); set32(c.r[7], 0u + 8u);  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001D70E8u) [[unlikely]] return; }
L_001D70E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D7150; } }
L_001D70F0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], 0u + 38u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D7110; } }
    st8((c.r[16].w[0] + 838u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 757u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001D7138; } }
    c.budget -= 1;
L_001D7110:
    set32(c.r[2], 0u + 45u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D7128; } }
    st8((c.r[16].w[0] + 838u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 757u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001D7138; } }
L_001D7128:
    set32(c.r[2], 0u + 52u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D7138; } }
    st8((c.r[16].w[0] + 838u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001D7138:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 767u)));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 23u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7150u); set32(c.r[7], 0u + 8u);  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001D7150u) [[unlikely]] return; }
L_001D7150:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D7298; } }
L_001D7158:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42240000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7168u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 148u, depth + 1u); else { c.pc = 0x001DD100u; return; } if (c.pc != 0x001D7168u) [[unlikely]] return; }
L_001D7168:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D7178; } }
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 2;
L_001D7178:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[3], 0u + 38u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001D71C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42180000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7198u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 148u, depth + 1u); else { c.pc = 0x001DD100u; return; } if (c.pc != 0x001D7198u) [[unlikely]] return; }
L_001D7198:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D71A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 838u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001D7248; } }
L_001D71A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x422C0000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D71B8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 148u, depth + 1u); else { c.pc = 0x001DD100u; return; } if (c.pc != 0x001D71B8u) [[unlikely]] return; }
L_001D71B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D7248; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 757u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001D7248; } }
L_001D71C8:
    set32(c.r[3], 0u + 45u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001D7218; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D71E4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 148u, depth + 1u); else { c.pc = 0x001DD100u; return; } if (c.pc != 0x001D71E4u) [[unlikely]] return; }
L_001D71E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D71F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 838u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001D7248; } }
    c.budget -= 1;
L_001D71F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41300000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7208u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 148u, depth + 1u); else { c.pc = 0x001DD100u; return; } if (c.pc != 0x001D7208u) [[unlikely]] return; }
L_001D7208:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D7248; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 757u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001D7248; } }
L_001D7218:
    set32(c.r[3], 0u + 52u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001D7248; } }
    c.f[1] = ld32((c.r[16].w[0] + 8308u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001D7248; } }
    st8((c.r[16].w[0] + 838u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001D7248:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8325u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001D7298; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D725Cu);  if (depth < kMaxDepth) unit_0035(c, 128u, depth + 1u); else { c.pc = 0x001D5A40u; return; } if (c.pc != 0x001D725Cu) [[unlikely]] return; }
L_001D725C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D7280; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7274u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 124u, depth + 1u); else { c.pc = 0x001D5960u; return; } if (c.pc != 0x001D7274u) [[unlikely]] return; }
L_001D7274:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D7298; } }
    c.budget -= 1;
L_001D7280:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D728Cu); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_003A(c, 78u, depth + 1u); else { c.pc = 0x001EA120u; return; } if (c.pc != 0x001D728Cu) [[unlikely]] return; }
L_001D728C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7294u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 70u, depth + 1u); else { c.pc = 0x001EA000u; return; } if (c.pc != 0x001D7294u) [[unlikely]] return; }
L_001D7294:
    c.budget -= 1;
L_001D7298:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D72B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 709u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 30312u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001D4000u < 16384u) { entry = entries_0035[(t - 0x001D4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001D72D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D72E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x001D72E4u) [[unlikely]] return; }
L_001D72E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D7318; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 710u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D7318; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 710u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[12] = 0u;
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 767u)));
    set32(c.r[6], 0u + 6u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7318u); set32(c.r[7], 0u + 18u);  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001D7318u) [[unlikely]] return; }
L_001D7318:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], 0u + 38u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D7370; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 710u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);  if (t) { goto L_001D73E8; } }
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7340u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 148u, depth + 1u); else { c.pc = 0x001DD100u; return; } if (c.pc != 0x001D7340u) [[unlikely]] return; }
L_001D7340:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D7350; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 838u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001D73E8; } }
L_001D7350:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41E80000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7360u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 148u, depth + 1u); else { c.pc = 0x001DD100u; return; } if (c.pc != 0x001D7360u) [[unlikely]] return; }
L_001D7360:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D73E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 757u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001D73E8; } }
L_001D7370:
    set32(c.r[2], 0u + 45u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);  if (t) { goto L_001D73B8; } }
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7388u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 148u, depth + 1u); else { c.pc = 0x001DD100u; return; } if (c.pc != 0x001D7388u) [[unlikely]] return; }
L_001D7388:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D7398; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 838u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001D73E8; } }
L_001D7398:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41300000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D73A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 148u, depth + 1u); else { c.pc = 0x001DD100u; return; } if (c.pc != 0x001D73A8u) [[unlikely]] return; }
L_001D73A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D73E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 757u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001D73E8; } }
L_001D73B8:
    set32(c.r[2], 0u + 52u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D73E8; } }
    c.f[1] = ld32((c.r[16].w[0] + 8308u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41100000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001D73E8; } }
    st8((c.r[16].w[0] + 838u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001D73E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D73F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 32u, depth + 1u); else { c.pc = 0x001D8D40u; return; } if (c.pc != 0x001D73F0u) [[unlikely]] return; }
L_001D73F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D73F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 38u, depth + 1u); else { c.pc = 0x001D8EC0u; return; } if (c.pc != 0x001D73F8u) [[unlikely]] return; }
L_001D73F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D7490; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 709u)));
    set32(c.r[2], 0u + 38u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 709u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 104u), 0u);
    st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D7430; } }
    st8((c.r[16].w[0] + 838u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 757u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001D7458; } }
L_001D7430:
    set32(c.r[2], 0u + 45u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D7448; } }
    st8((c.r[16].w[0] + 838u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 757u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001D7458; } }
L_001D7448:
    set32(c.r[2], 0u + 52u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D7458; } }
    st8((c.r[16].w[0] + 838u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001D7458:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7460u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 36u, depth + 1u); else { c.pc = 0x001D8E30u; return; } if (c.pc != 0x001D7460u) [[unlikely]] return; }
L_001D7460:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D746Cu); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_001D(c, 96u, depth + 1u); else { c.pc = 0x00175AB0u; return; } if (c.pc != 0x001D746Cu) [[unlikely]] return; }
L_001D746C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7474u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 176u, depth + 1u); else { c.pc = 0x001EDE20u; return; } if (c.pc != 0x001D7474u) [[unlikely]] return; }
L_001D7474:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 767u)));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 11u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D748Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001D748Cu) [[unlikely]] return; }
L_001D748C:
    c.budget -= 1;
L_001D7490:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D74A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D74B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x001D74B4u) [[unlikely]] return; }
L_001D74B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001D7508; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D74C4u);  if (depth < kMaxDepth) unit_0035(c, 128u, depth + 1u); else { c.pc = 0x001D5A40u; return; } if (c.pc != 0x001D74C4u) [[unlikely]] return; }
L_001D74C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D74E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41300000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D74DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 124u, depth + 1u); else { c.pc = 0x001D5960u; return; } if (c.pc != 0x001D74DCu) [[unlikely]] return; }
L_001D74DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D7530; } }
    c.budget -= 1;
L_001D74E8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D74F4u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_003A(c, 78u, depth + 1u); else { c.pc = 0x001EA120u; return; } if (c.pc != 0x001D74F4u) [[unlikely]] return; }
L_001D74F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D74FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 70u, depth + 1u); else { c.pc = 0x001EA000u; return; } if (c.pc != 0x001D74FCu) [[unlikely]] return; }
L_001D74FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D7530; } }
    c.budget -= 1;
L_001D7508:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7510u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 14u, depth + 1u); else { c.pc = 0x001D0060u; return; } if (c.pc != 0x001D7510u) [[unlikely]] return; }
L_001D7510:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001D7530; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7520u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_003A(c, 86u, depth + 1u); else { c.pc = 0x001EA280u; return; } if (c.pc != 0x001D7520u) [[unlikely]] return; }
L_001D7520:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    set32(c.r[3], 0u - 24577u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_001D7530:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D7540:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 30304u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 709u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D756Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D756Cu) [[unlikely]] return; }
L_001D756C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 710u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001D75B0; } }
    c.f[2] = ld32((c.r[16].w[0] + 8292u));
    c.f[1] = ld32((c.r[16].w[0] + 732u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 732u), c.f[1]);  if (t) { goto L_001D75B0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1608u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 113u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D75A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 218u, depth + 1u); else { c.pc = 0x002F7130u; return; } if (c.pc != 0x001D75A8u) [[unlikely]] return; }
L_001D75A8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[16].w[0] + 732u), c.r[3].w[0]);
    c.budget -= 2;
L_001D75B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D75C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D75D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x001D75D4u) [[unlikely]] return; }
L_001D75D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D7620; } }
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 709u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x41B80000u);
    set32(c.r[3], 0u + 200u);
    set32(c.r[6], 0u + 77u);
    set32(c.r[2], 0u + 75u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = 0u;
    set32(c.r[5], 0u + 4u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[9].w[0] + 1u);
    st8((c.r[16].w[0] + 709u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st32((c.r[16].w[0] + 728u), c.r[8].w[0]);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 744u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D761Cu); if (c.r[3].d[0] == 0) c.r[6].d[0] = c.r[2].d[0];  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001D761Cu) [[unlikely]] return; }
L_001D761C:
    c.budget -= 1;
L_001D7620:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D7630:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D764Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x001D764Cu) [[unlikely]] return; }
L_001D764C:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 684u));
    c.r[3].d[0] = c.r[3].d[0] & 15360ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001D7668; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 35u);
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_001D7668:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 684u));
    c.r[3].d[0] = c.r[3].d[0] & 1008ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001D7688; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 20u);
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_001D7688:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_001D76A0; } }
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st32((c.r[18].w[0] + 728u), 0u);
    c.budget -= 3;
L_001D76A0:
    set32(c.r[3], ld32((c.r[18].w[0] + 592u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001D76B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[2] = ld32((c.r[3].w[0] + 8252u));  if (t) { goto L_001D76C0; } }
    c.budget -= 1;
L_001D76B8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[3].w[0];
    c.budget -= 2;
L_001D76C0:
    c.f[1] = ld32((c.r[18].w[0] + 728u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[18].w[0] + 728u), c.f[1]);  if (t) { goto L_001D7828; } }
    set32(c.r[17], ld32((c.r[18].w[0] + 600u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 568u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    st8((c.r[18].w[0] + 578u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[18].w[0] + 568u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[18].w[0] + 710u), static_cast<std::uint8_t>(0u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7708u); st8((c.r[18].w[0] + 709u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0036(c, 15u, depth + 1u); else { c.pc = 0x001D8A40u; return; } if (c.pc != 0x001D7708u) [[unlikely]] return; }
L_001D7708:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_001D7758; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[16], 0u + 18u);  if (t) { goto L_001D7728; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 22u);  if (t) { goto L_001D7770; } }
    c.budget -= 1;
L_001D7728:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001D7740; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 23u);  if (t) { goto L_001D7770; } }
    c.budget -= 1;
L_001D7740:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D774Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 15u, depth + 1u); else { c.pc = 0x001D8A40u; return; } if (c.pc != 0x001D774Cu) [[unlikely]] return; }
L_001D774C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);  if (t) { goto L_001D7770; } }
    c.budget -= 1;
L_001D7758:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D776Cu); set32(c.r[16], 0u + 9u);  if (depth < kMaxDepth) unit_0036(c, 15u, depth + 1u); else { c.pc = 0x001D8A40u; return; } if (c.pc != 0x001D776Cu) [[unlikely]] return; }
L_001D776C:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_001D7770:
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; st8((c.r[18].w[0] + 579u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001D77A0; } }
    set32(c.r[2], 0u + 13u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 20u);  if (t) { goto L_001D77A0; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001D77A0; } }
    set32(c.r[2], 0u + 22u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_001D77A8; } }
    c.budget -= 1;
L_001D77A0:
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 579u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001D77A8:
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; st32((c.r[18].w[0] + 728u), 0u);  if (t) { goto L_001D77C0; } }
    set32(c.r[2], 0u + 19u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_001D77D0; } }
L_001D77C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    st32((c.r[18].w[0] + 728u), c.r[2].w[0]);
    c.budget -= 4;
L_001D77D0:
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 21u);  if (t) { goto L_001D77E8; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_001D77F8; } }
    c.budget -= 1;
L_001D77E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC4230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    st32((c.r[18].w[0] + 728u), c.r[2].w[0]);
    c.budget -= 4;
L_001D77F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7800u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 35u, depth + 1u); else { c.pc = 0x001D8DE0u; return; } if (c.pc != 0x001D7800u) [[unlikely]] return; }
L_001D7800:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D780Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 29u, depth + 1u); else { c.pc = 0x001D8C90u; return; } if (c.pc != 0x001D780Cu) [[unlikely]] return; }
L_001D780C:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7824u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001D7824u) [[unlikely]] return; }
L_001D7824:
    c.budget -= 1;
L_001D7828:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001D7840:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7854u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x001D7854u) [[unlikely]] return; }
L_001D7854:
    c.f[2] = ld32((c.r[16].w[0] + 8292u));
    c.f[1] = ld32((c.r[16].w[0] + 728u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 728u), c.f[1]);  if (t) { goto L_001D78A8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 578u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7888u); st8((c.r[16].w[0] + 568u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003A(c, 78u, depth + 1u); else { c.pc = 0x001EA120u; return; } if (c.pc != 0x001D7888u) [[unlikely]] return; }
L_001D7888:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001D7930; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D78A0u);  if (depth < kMaxDepth) unit_003A(c, 70u, depth + 1u); else { c.pc = 0x001EA000u; return; } if (c.pc != 0x001D78A0u) [[unlikely]] return; }
L_001D78A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D7930; } }
L_001D78A8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 767u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D78E0; } }
    c.f[1] = ld32((c.r[16].w[0] + 732u));
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.f[0] = ld32((c.r[16].w[0] + 8292u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 84u), c.r[2].w[0]);  if (t) { goto L_001D7908; } }
    c.budget -= 1;
L_001D78E0:
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.f[1] = ld32((c.r[16].w[0] + 732u));
    c.f[0] = ld32((c.r[16].w[0] + 8292u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 10;
L_001D7908:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7910u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 14u, depth + 1u); else { c.pc = 0x001D0060u; return; } if (c.pc != 0x001D7910u) [[unlikely]] return; }
L_001D7910:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001D7930; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7920u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_003A(c, 86u, depth + 1u); else { c.pc = 0x001EA280u; return; } if (c.pc != 0x001D7920u) [[unlikely]] return; }
L_001D7920:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    set32(c.r[3], 0u - 24577u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_001D7930:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D7940:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 128u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 516u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 1088u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 1268u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7968u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 57u, depth + 1u); else { c.pc = 0x001E4C20u; return; } if (c.pc != 0x001D7968u) [[unlikely]] return; }
L_001D7968:
    c.f[2] = ld32((c.r[16].w[0] + 104u));
    c.f[1] = ld32((c.r[16].w[0] + 108u));
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001D7990; } }
    st32((c.r[16].w[0] + 108u), c.f[0]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.budget -= 2;
L_001D7990:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7998u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x001D7998u) [[unlikely]] return; }
L_001D7998:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 128u);  if (t) { goto L_001D79E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 1088u), c.r[2].w[0]);
    set32(c.r[5], 0u + 10u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 578u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D79C0u); st8((c.r[16].w[0] + 568u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003A(c, 78u, depth + 1u); else { c.pc = 0x001EA120u; return; } if (c.pc != 0x001D79C0u) [[unlikely]] return; }
L_001D79C0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001D7A18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D79D8u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_003A(c, 74u, depth + 1u); else { c.pc = 0x001EA090u; return; } if (c.pc != 0x001D79D8u) [[unlikely]] return; }
L_001D79D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D7A18; } }
L_001D79E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D79E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 14u, depth + 1u); else { c.pc = 0x001D0060u; return; } if (c.pc != 0x001D79E8u) [[unlikely]] return; }
L_001D79E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001D7A18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D79F8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_003A(c, 86u, depth + 1u); else { c.pc = 0x001EA280u; return; } if (c.pc != 0x001D79F8u) [[unlikely]] return; }
L_001D79F8:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    set32(c.r[5], 0u - 24577u);
    set32(c.r[4], 0u + 128u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 1088u), c.r[3].w[0]);
    c.budget -= 8;
L_001D7A18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D7A30:
    set32(c.r[2], 0u + 128u);
    st8((c.r[4].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[4].w[0] + 1088u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 709u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 30296u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001D4000u < 16384u) { entry = entries_0035[(t - 0x001D4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001D7A60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7A7Cu); st8((c.r[4].w[0] + 963u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0036(c, 32u, depth + 1u); else { c.pc = 0x001D8D40u; return; } if (c.pc != 0x001D7A7Cu) [[unlikely]] return; }
L_001D7A7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7A84u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 56u, depth + 1u); else { c.pc = 0x001D0960u; return; } if (c.pc != 0x001D7A84u) [[unlikely]] return; }
L_001D7A84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_001D7A90; } }
    st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001D7A90:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.f[1] = ld32((c.r[16].w[0] + 8308u));
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], 0u + 1u);  if (t) { goto L_001D7AB0; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001D7AB0:
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001D7AD0; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 2;
L_001D7AD0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001D7BA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7AE0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x001D7AE0u) [[unlikely]] return; }
L_001D7AE0:
    c.f[1] = ld32((c.r[16].w[0] + 8308u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001D7B20; } }
    c.f[1] = ld32((c.r[16].w[0] + 728u));
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    c.f[0] = ld32((c.r[16].w[0] + 8292u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    c.budget -= 9;
L_001D7B20:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8325u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001D7BA8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st8((c.r[16].w[0] + 709u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 514u));
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    st8((c.r[16].w[0] + 514u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7B68u); st32((c.r[16].w[0] + 68u), 0u);  if (depth < kMaxDepth) unit_0034(c, 56u, depth + 1u); else { c.pc = 0x001D0960u; return; } if (c.pc != 0x001D7B68u) [[unlikely]] return; }
L_001D7B68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D7B88; } }
    set32(c.r[2], 0u + 2u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7B84u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_001D(c, 96u, depth + 1u); else { c.pc = 0x00175AB0u; return; } if (c.pc != 0x001D7B84u) [[unlikely]] return; }
L_001D7B84:
    c.budget -= 1;
L_001D7B88:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 579u)));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    set32(c.r[7], 0u + 9u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7BA4u); set32(c.r[6], c.r[2].w[0] + 79u);  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001D7BA4u) [[unlikely]] return; }
L_001D7BA4:
    c.budget -= 1;
L_001D7BA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D7BC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 963u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7BE0u); st8((c.r[4].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0036(c, 32u, depth + 1u); else { c.pc = 0x001D8D40u; return; } if (c.pc != 0x001D7BE0u) [[unlikely]] return; }
L_001D7BE0:
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7C04u); st32((c.r[16].w[0] + 52u), c.f[0]);  if (depth < kMaxDepth) unit_0034(c, 56u, depth + 1u); else { c.pc = 0x001D0960u; return; } if (c.pc != 0x001D7C04u) [[unlikely]] return; }
L_001D7C04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7C0Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x001D7C0Cu) [[unlikely]] return; }
L_001D7C0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001D7C40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7C1Cu); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_003A(c, 86u, depth + 1u); else { c.pc = 0x001EA280u; return; } if (c.pc != 0x001D7C1Cu) [[unlikely]] return; }
L_001D7C1C:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    set32(c.r[5], 0u - 24577u);
    set32(c.r[4], 0u + 128u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 1088u), c.r[3].w[0]);
    c.budget -= 9;
L_001D7C40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D7C50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7C64u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 17u, depth + 1u); else { c.pc = 0x001D8B70u; return; } if (c.pc != 0x001D7C64u) [[unlikely]] return; }
L_001D7C64:
    c.f[2] = ld32((c.r[16].w[0] + 104u));
    c.f[1] = ld32((c.r[16].w[0] + 108u));
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001D7C90; } }
    st32((c.r[16].w[0] + 108u), c.f[0]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.budget -= 3;
L_001D7C90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7C98u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x001D7C98u) [[unlikely]] return; }
L_001D7C98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001D7CC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7CA8u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_003A(c, 78u, depth + 1u); else { c.pc = 0x001EA120u; return; } if (c.pc != 0x001D7CA8u) [[unlikely]] return; }
L_001D7CA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7CB0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 70u, depth + 1u); else { c.pc = 0x001EA000u; return; } if (c.pc != 0x001D7CB0u) [[unlikely]] return; }
L_001D7CB0:
    set32(c.r[4], 0u + 128u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42200000u);
    st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1088u), c.r[3].w[0]);  if (t) { goto L_001D7D00; } }
    c.budget -= 1;
L_001D7CC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7CD0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 14u, depth + 1u); else { c.pc = 0x001D0060u; return; } if (c.pc != 0x001D7CD0u) [[unlikely]] return; }
L_001D7CD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001D7D00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7CE0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_003A(c, 86u, depth + 1u); else { c.pc = 0x001EA280u; return; } if (c.pc != 0x001D7CE0u) [[unlikely]] return; }
L_001D7CE0:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    set32(c.r[5], 0u - 24577u);
    set32(c.r[4], 0u + 128u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 1088u), c.r[3].w[0]);
    c.budget -= 8;
L_001D7D00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D7D10:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 8944u)));
    c.budget -= 4;
    { const bool t = c.r[6].sd[0] > 0; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001D7D28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D7E00; } }
L_001D7D28:
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 180u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001D7D48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D7E00; } }
    c.budget -= 1;
L_001D7D48:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] > 0; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001D7D58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D7E00; } }
L_001D7D58:
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[5], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], 0u + 180u);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    mmi::div(c, 0, c.r[3].w[0], c.r[6].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001D7D90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D7E00; } }
L_001D7D90:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0xCCCC0000u);  if (t) { goto L_001D7DD0; } }
    set32(c.r[3], c.r[3].w[0] << 3);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    mmi::multu(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[2].w[0] >> 3);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(144ll) ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001D7DD8; } }
    set32(c.r[2], 0u + 143u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);  if (t) { goto L_001D7DD8; } }
    c.budget -= 1;
L_001D7DD0:
    set32(c.r[3], 0u + 143u);
    c.budget -= 2;
L_001D7DD8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 30240u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));  if (t) { goto L_001D7DFC; } }
    set32(c.r[2], c.r[2].w[0] + 31u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 2;
L_001D7DFC:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_001D7E00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D7E10:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], ld32((c.r[4].w[0] + 596u)));
    set32(c.r[17], ld32((c.r[4].w[0] + 264u)));
    c.r[16].d[0] = ld8((c.r[18].w[0] + 1u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 270u)));
    c.r[1].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 19;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 30056u);  if (t) { [[clang::musttail]] return unit_0036(c, 5u, depth); } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D7E80; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    c.r[1].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001D7E80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8662u)));  if (t) { goto L_001D7EA0; } }
L_001D7E80:
    c.r[5].d[0] = ld8((c.r[21].w[0] + 515u));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001D7E90; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_001D7E90:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_001D7EA0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 5u)));
    c.budget -= 1;
L_001D7EA0:
    c.r[6].d[0] = ld8((c.r[17].w[0] + 8658u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[4], c.r[4].w[0] + 24756u);
    c.r[5].d[0] = c.r[6].sd[0] < 21ll ? 1ull : 0ull;
    c.r[5].d[0] = c.r[5].d[0] ^ 1ull;
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    mmi::mult(c, 0, c.r[16].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.budget -= 10;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 5));  if (t) { goto L_001D7ED0; } }
    set32(c.r[4], c.r[4].w[0] + 31u);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 5));
    c.budget -= 2;
L_001D7ED0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D7FA8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    c.r[1].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001D7FA8; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 2u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_001D7F58; } }
    c.r[5].d[0] = c.r[6].d[0] & 255ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8684u)));
    set32(c.r[4], c.r[5].w[0] << 4);
    set32(c.r[5], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] - 17520u);
    set32(c.r[7], c.r[3].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8663u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8685u)));
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 18;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));  if (t) { goto L_001D7FD8; } }
    set32(c.r[3], c.r[3].w[0] + 31u);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D7FD8; } }
    c.budget -= 1;
L_001D7F58:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 269u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[4].d[0] = ld8((c.r[18].w[0] + 2u));
    set32(c.r[5], c.r[5].w[0] + 5824u);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[4].w[0] << 2);
    set32(c.r[4], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 15;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));  if (t) { goto L_001D7FD8; } }
    set32(c.r[3], c.r[3].w[0] + 31u);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D7FD8; } }
    c.budget -= 1;
L_001D7FA8:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001D7FD8; } }
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));  if (t) { goto L_001D7FD8; } }
    set32(c.r[3], c.r[3].w[0] + 31u);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    c.budget -= 2;
L_001D7FD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0036(c, 2u, depth); } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0036(c, 2u, depth); } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8656u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 19112u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 496u)));
    c.budget -= 4;
    [[clang::musttail]] return unit_0036(c, 1u, depth);
}

}
