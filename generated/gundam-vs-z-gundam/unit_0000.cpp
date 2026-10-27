#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0000[4096] = {
    0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 0, 0, 0, 0, 9, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 12, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 15, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 18, 0, 0, 0, 0, 0, 0, 0, 19, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 21, 22, 0, 0, 0, 0, 0, 0, 23, 0, 24, 0, 25, 0,
    26, 0, 0, 0, 27, 0, 28, 0, 29, 0, 30, 0, 31, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0,
    36, 0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0,
    43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0,
    46, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    50, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0,
    0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0,
    0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 60, 0, 61, 0, 0,
    0, 0, 0, 0, 62, 0, 63, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0,
    0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    70, 71, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0,
    0, 0, 88, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0,
    0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 100,
    0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0,
    106, 0, 0, 0, 107, 108, 0, 0, 109, 0, 110, 0, 0, 0, 0, 111, 112, 0, 0, 0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0,
    116, 0, 0, 117, 0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0,
    131, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 136, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 145, 0, 146, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0,
    0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0,
    162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 166, 0,
    167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 169, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 0, 0,
    173, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0,
    178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 184, 0, 0, 185, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 191, 0, 192, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0,
    0, 197, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0,
    0, 200, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 205, 206, 0, 0, 0, 207, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0,
    209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    212, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    215, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    220, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0,
    0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0,
    0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0,
    0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0,
    0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0,
    0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 248, 249, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    251, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0,
    254, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 261, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0,
    0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0,
    0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0,
    0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 279, 0,
    0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 286, 0,
    0, 287, 0, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0, 290, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 293, 0, 0, 294, 0, 0, 0, 295, 0, 0, 296, 0, 0, 0, 297, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 299, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 301, 302, 0, 0, 303, 0, 0, 304, 0, 0, 305, 0, 0, 0, 0, 0, 0,
    306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0,
    311, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 332, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0,
    334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 349, 0, 0, 0, 0,
    350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 352, 0, 0, 0, 353, 0, 0, 0, 0, 0, 354, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0,
    360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0,
    365, 0, 366, 0, 0, 0, 0, 0, 367, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    369, 0, 370, 0, 371, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 374, 0, 375, 0, 376, 0, 377, 0, 378, 0, 379, 0, 380, 0,
};

void unit_0000(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00100008;
    case 2u: goto L_0010000C;
    case 3u: goto L_00100010;
    case 4u: goto L_00100014;
    case 5u: goto L_00100018;
    case 6u: goto L_0010001C;
    case 7u: goto L_00100020;
    case 8u: goto L_00100024;
    case 9u: goto L_00100038;
    case 10u: goto L_0010003C;
    case 11u: goto L_00100070;
    case 12u: goto L_00100074;
    case 13u: goto L_001000A8;
    case 14u: goto L_00100110;
    case 15u: goto L_0010012C;
    case 16u: goto L_00100134;
    case 17u: goto L_00100150;
    case 18u: goto L_00100158;
    case 19u: goto L_00100178;
    case 20u: goto L_001001B8;
    case 21u: goto L_001001C8;
    case 22u: goto L_001001CC;
    case 23u: goto L_001001E8;
    case 24u: goto L_001001F0;
    case 25u: goto L_001001F8;
    case 26u: goto L_00100200;
    case 27u: goto L_00100210;
    case 28u: goto L_00100218;
    case 29u: goto L_00100220;
    case 30u: goto L_00100228;
    case 31u: goto L_00100230;
    case 32u: goto L_00100240;
    case 33u: goto L_00100250;
    case 34u: goto L_00100260;
    case 35u: goto L_00100270;
    case 36u: goto L_00100280;
    case 37u: goto L_0010028C;
    case 38u: goto L_001002A0;
    case 39u: goto L_001002B0;
    case 40u: goto L_001002C0;
    case 41u: goto L_001002D0;
    case 42u: goto L_001002E8;
    case 43u: goto L_00100300;
    case 44u: goto L_00100328;
    case 45u: goto L_0010035C;
    case 46u: goto L_00100380;
    case 47u: goto L_00100394;
    case 48u: goto L_001003AC;
    case 49u: goto L_001003B8;
    case 50u: goto L_00100400;
    case 51u: goto L_00100408;
    case 52u: goto L_00100478;
    case 53u: goto L_00100488;
    case 54u: goto L_001004C0;
    case 55u: goto L_001004F0;
    case 56u: goto L_00100514;
    case 57u: goto L_00100530;
    case 58u: goto L_0010054C;
    case 59u: goto L_00100560;
    case 60u: goto L_0010056C;
    case 61u: goto L_00100574;
    case 62u: goto L_00100590;
    case 63u: goto L_00100598;
    case 64u: goto L_001005A0;
    case 65u: goto L_001005F4;
    case 66u: goto L_00100614;
    case 67u: goto L_00100630;
    case 68u: goto L_001006C4;
    case 69u: goto L_00100740;
    case 70u: goto L_00100800;
    case 71u: goto L_00100804;
    case 72u: goto L_00100814;
    case 73u: goto L_001008C0;
    case 74u: goto L_001008E8;
    case 75u: goto L_00100918;
    case 76u: goto L_00100948;
    case 77u: goto L_00100988;
    case 78u: goto L_001009E0;
    case 79u: goto L_00100A30;
    case 80u: goto L_00100A70;
    case 81u: goto L_00100AA4;
    case 82u: goto L_00100B10;
    case 83u: goto L_00100BC0;
    case 84u: goto L_00100BC8;
    case 85u: goto L_00100C10;
    case 86u: goto L_00100CD0;
    case 87u: goto L_00100CEC;
    case 88u: goto L_00100D08;
    case 89u: goto L_00100D0C;
    case 90u: goto L_00100D48;
    case 91u: goto L_00100D98;
    case 92u: goto L_00100DC8;
    case 93u: goto L_00100E08;
    case 94u: goto L_00100E6C;
    case 95u: goto L_00100E84;
    case 96u: goto L_00100E9C;
    case 97u: goto L_00100EB4;
    case 98u: goto L_00100ECC;
    case 99u: goto L_00100EE4;
    case 100u: goto L_00100EFC;
    case 101u: goto L_00100F14;
    case 102u: goto L_00100F2C;
    case 103u: goto L_00100F44;
    case 104u: goto L_00100F5C;
    case 105u: goto L_00100FE8;
    case 106u: goto L_00101000;
    case 107u: goto L_00101010;
    case 108u: goto L_00101014;
    case 109u: goto L_00101020;
    case 110u: goto L_00101028;
    case 111u: goto L_0010103C;
    case 112u: goto L_00101040;
    case 113u: goto L_00101054;
    case 114u: goto L_00101060;
    case 115u: goto L_00101074;
    case 116u: goto L_00101080;
    case 117u: goto L_0010108C;
    case 118u: goto L_00101094;
    case 119u: goto L_001010AC;
    case 120u: goto L_001010C0;
    case 121u: goto L_00101100;
    case 122u: goto L_00101140;
    case 123u: goto L_00101180;
    case 124u: goto L_001011D0;
    case 125u: goto L_00101208;
    case 126u: goto L_001012A0;
    case 127u: goto L_001012C0;
    case 128u: goto L_00101310;
    case 129u: goto L_00101350;
    case 130u: goto L_0010136C;
    case 131u: goto L_00101380;
    case 132u: goto L_0010138C;
    case 133u: goto L_001013A8;
    case 134u: goto L_001013B4;
    case 135u: goto L_001013C8;
    case 136u: goto L_001013D4;
    case 137u: goto L_001013F0;
    case 138u: goto L_0010143C;
    case 139u: goto L_0010147C;
    case 140u: goto L_001014B0;
    case 141u: goto L_00101540;
    case 142u: goto L_001015D0;
    case 143u: goto L_0010162C;
    case 144u: goto L_0010163C;
    case 145u: goto L_0010164C;
    case 146u: goto L_00101654;
    case 147u: goto L_00101670;
    case 148u: goto L_0010168C;
    case 149u: goto L_001016A8;
    case 150u: goto L_001016C4;
    case 151u: goto L_001016E0;
    case 152u: goto L_00101728;
    case 153u: goto L_00101758;
    case 154u: goto L_00101800;
    case 155u: goto L_0010183C;
    case 156u: goto L_00101840;
    case 157u: goto L_00101880;
    case 158u: goto L_001018B8;
    case 159u: goto L_001018C0;
    case 160u: goto L_001018E8;
    case 161u: goto L_001018F8;
    case 162u: goto L_00101900;
    case 163u: goto L_00101928;
    case 164u: goto L_00101940;
    case 165u: goto L_00101968;
    case 166u: goto L_00101978;
    case 167u: goto L_00101980;
    case 168u: goto L_001019B0;
    case 169u: goto L_001019B8;
    case 170u: goto L_001019C0;
    case 171u: goto L_001019D8;
    case 172u: goto L_001019E8;
    case 173u: goto L_00101A00;
    case 174u: goto L_00101A10;
    case 175u: goto L_00101A38;
    case 176u: goto L_00101A40;
    case 177u: goto L_00101A70;
    case 178u: goto L_00101A80;
    case 179u: goto L_00101AD4;
    case 180u: goto L_00101ADC;
    case 181u: goto L_00101B18;
    case 182u: goto L_00101C3C;
    case 183u: goto L_00101D40;
    case 184u: goto L_00101D5C;
    case 185u: goto L_00101D68;
    case 186u: goto L_00101DA8;
    case 187u: goto L_00101DCC;
    case 188u: goto L_00101DD8;
    case 189u: goto L_00101E0C;
    case 190u: goto L_00101E20;
    case 191u: goto L_00101E3C;
    case 192u: goto L_00101E44;
    case 193u: goto L_00101E50;
    case 194u: goto L_00101E98;
    case 195u: goto L_00101EAC;
    case 196u: goto L_00101EE0;
    case 197u: goto L_00101F04;
    case 198u: goto L_00101F10;
    case 199u: goto L_00101F60;
    case 200u: goto L_00101F84;
    case 201u: goto L_00101F90;
    case 202u: goto L_00101FE0;
    case 203u: goto L_00102008;
    case 204u: goto L_00102018;
    case 205u: goto L_0010203C;
    case 206u: goto L_00102040;
    case 207u: goto L_00102050;
    case 208u: goto L_00102068;
    case 209u: goto L_00102080;
    case 210u: goto L_001020C0;
    case 211u: goto L_001020D0;
    case 212u: goto L_00102100;
    case 213u: goto L_00102124;
    case 214u: goto L_00102140;
    case 215u: goto L_00102180;
    case 216u: goto L_001021A4;
    case 217u: goto L_001021B8;
    case 218u: goto L_00102210;
    case 219u: goto L_00102234;
    case 220u: goto L_00102280;
    case 221u: goto L_001022A0;
    case 222u: goto L_001022D0;
    case 223u: goto L_001022F0;
    case 224u: goto L_0010230C;
    case 225u: goto L_00102370;
    case 226u: goto L_0010238C;
    case 227u: goto L_001023F8;
    case 228u: goto L_00102414;
    case 229u: goto L_0010243C;
    case 230u: goto L_001024A8;
    case 231u: goto L_001024CC;
    case 232u: goto L_00102518;
    case 233u: goto L_0010253C;
    case 234u: goto L_00102588;
    case 235u: goto L_001025B4;
    case 236u: goto L_00102610;
    case 237u: goto L_00102634;
    case 238u: goto L_0010263C;
    case 239u: goto L_00102678;
    case 240u: goto L_0010269C;
    case 241u: goto L_001026E0;
    case 242u: goto L_00102704;
    case 243u: goto L_00102748;
    case 244u: goto L_0010276C;
    case 245u: goto L_001027B0;
    case 246u: goto L_001027D4;
    case 247u: goto L_00102830;
    case 248u: goto L_0010283C;
    case 249u: goto L_00102840;
    case 250u: goto L_0010284C;
    case 251u: goto L_00102880;
    case 252u: goto L_0010289C;
    case 253u: goto L_001028E8;
    case 254u: goto L_00102900;
    case 255u: goto L_00102904;
    case 256u: goto L_00102938;
    case 257u: goto L_00102954;
    case 258u: goto L_00102988;
    case 259u: goto L_001029A4;
    case 260u: goto L_001029D8;
    case 261u: goto L_001029F4;
    case 262u: goto L_00102A28;
    case 263u: goto L_00102A3C;
    case 264u: goto L_00102A80;
    case 265u: goto L_00102AF8;
    case 266u: goto L_00102B1C;
    case 267u: goto L_00102B60;
    case 268u: goto L_00102B90;
    case 269u: goto L_00102BE8;
    case 270u: goto L_00102C0C;
    case 271u: goto L_00102C3C;
    case 272u: goto L_00102C50;
    case 273u: goto L_00102C84;
    case 274u: goto L_00102CE0;
    case 275u: goto L_00102D04;
    case 276u: goto L_00102D48;
    case 277u: goto L_00102D7C;
    case 278u: goto L_00102DD8;
    case 279u: goto L_00102DF8;
    case 280u: goto L_00102E08;
    case 281u: goto L_00102E28;
    case 282u: goto L_00102E3C;
    case 283u: goto L_00102E54;
    case 284u: goto L_00102EB0;
    case 285u: goto L_00102EE4;
    case 286u: goto L_00102EF8;
    case 287u: goto L_00102F04;
    case 288u: goto L_00102F14;
    case 289u: goto L_00102F24;
    case 290u: goto L_00102F34;
    case 291u: goto L_00102F40;
    case 292u: goto L_00102F60;
    case 293u: goto L_00102F98;
    case 294u: goto L_00102FA4;
    case 295u: goto L_00102FB4;
    case 296u: goto L_00102FC0;
    case 297u: goto L_00102FD0;
    case 298u: goto L_00102FDC;
    case 299u: goto L_00103004;
    case 300u: goto L_00103020;
    case 301u: goto L_0010303C;
    case 302u: goto L_00103040;
    case 303u: goto L_0010304C;
    case 304u: goto L_00103058;
    case 305u: goto L_00103064;
    case 306u: goto L_00103080;
    case 307u: goto L_00103320;
    case 308u: goto L_00103354;
    case 309u: goto L_00103364;
    case 310u: goto L_001033E8;
    case 311u: goto L_00103400;
    case 312u: goto L_00103414;
    case 313u: goto L_0010343C;
    case 314u: goto L_001034B0;
    case 315u: goto L_001034DC;
    case 316u: goto L_00103540;
    case 317u: goto L_00103564;
    case 318u: goto L_001035A8;
    case 319u: goto L_001035BC;
    case 320u: goto L_00103610;
    case 321u: goto L_00103628;
    case 322u: goto L_0010363C;
    case 323u: goto L_0010364C;
    case 324u: goto L_001036B8;
    case 325u: goto L_001036D8;
    case 326u: goto L_0010370C;
    case 327u: goto L_00103730;
    case 328u: goto L_001037A0;
    case 329u: goto L_001037C8;
    case 330u: goto L_001037D8;
    case 331u: goto L_00103840;
    case 332u: goto L_00103848;
    case 333u: goto L_0010385C;
    case 334u: goto L_00103880;
    case 335u: goto L_001038C0;
    case 336u: goto L_001038D4;
    case 337u: goto L_00103900;
    case 338u: goto L_00103938;
    case 339u: goto L_00103950;
    case 340u: goto L_00103998;
    case 341u: goto L_001039BC;
    case 342u: goto L_00103A20;
    case 343u: goto L_00103AA4;
    case 344u: goto L_00103AB0;
    case 345u: goto L_00103AE0;
    case 346u: goto L_00103B70;
    case 347u: goto L_00103B98;
    case 348u: goto L_00103BD8;
    case 349u: goto L_00103BEC;
    case 350u: goto L_00103C00;
    case 351u: goto L_00103C3C;
    case 352u: goto L_00103C50;
    case 353u: goto L_00103C60;
    case 354u: goto L_00103C78;
    case 355u: goto L_00103CA8;
    case 356u: goto L_00103D30;
    case 357u: goto L_00103D68;
    case 358u: goto L_00103DC0;
    case 359u: goto L_00103DF8;
    case 360u: goto L_00103E00;
    case 361u: goto L_00103E30;
    case 362u: goto L_00103E3C;
    case 363u: goto L_00103E60;
    case 364u: goto L_00103EE8;
    case 365u: goto L_00103F00;
    case 366u: goto L_00103F08;
    case 367u: goto L_00103F20;
    case 368u: goto L_00103F28;
    case 369u: goto L_00103F80;
    case 370u: goto L_00103F88;
    case 371u: goto L_00103F90;
    case 372u: goto L_00103F98;
    case 373u: goto L_00103FC0;
    case 374u: goto L_00103FC8;
    case 375u: goto L_00103FD0;
    case 376u: goto L_00103FD8;
    case 377u: goto L_00103FE0;
    case 378u: goto L_00103FE8;
    case 379u: goto L_00103FF0;
    case 380u: goto L_00103FF8;
    default: bad_entry(c, 0x00100000u); return;
    }
L_00100008:
    mmi::padduw(c.r[1], c.r[0], c.r[0]);
    c.budget -= 1;
L_0010000C:
    mmi::padduw(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_00100010:
    mmi::padduw(c.r[3], c.r[0], c.r[0]);
    c.budget -= 1;
L_00100014:
    mmi::padduw(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_00100018:
    mmi::padduw(c.r[5], c.r[0], c.r[0]);
    c.budget -= 1;
L_0010001C:
    mmi::padduw(c.r[6], c.r[0], c.r[0]);
    c.budget -= 1;
L_00100020:
    mmi::padduw(c.r[7], c.r[0], c.r[0]);
    c.budget -= 1;
L_00100024:
    mmi::padduw(c.r[8], c.r[0], c.r[0]);
    mmi::padduw(c.r[9], c.r[0], c.r[0]);
    mmi::padduw(c.r[10], c.r[0], c.r[0]);
    mmi::padduw(c.r[11], c.r[0], c.r[0]);
    mmi::padduw(c.r[12], c.r[0], c.r[0]);
    c.budget -= 5;
L_00100038:
    mmi::padduw(c.r[13], c.r[0], c.r[0]);
    c.budget -= 1;
L_0010003C:
    mmi::padduw(c.r[14], c.r[0], c.r[0]);
    mmi::padduw(c.r[15], c.r[0], c.r[0]);
    mmi::padduw(c.r[16], c.r[0], c.r[0]);
    mmi::padduw(c.r[17], c.r[0], c.r[0]);
    mmi::padduw(c.r[18], c.r[0], c.r[0]);
    mmi::padduw(c.r[19], c.r[0], c.r[0]);
    mmi::padduw(c.r[20], c.r[0], c.r[0]);
    mmi::padduw(c.r[21], c.r[0], c.r[0]);
    mmi::padduw(c.r[22], c.r[0], c.r[0]);
    mmi::padduw(c.r[23], c.r[0], c.r[0]);
    mmi::padduw(c.r[24], c.r[0], c.r[0]);
    mmi::padduw(c.r[25], c.r[0], c.r[0]);
    mmi::padduw(c.r[28], c.r[0], c.r[0]);
    c.budget -= 13;
L_00100070:
    mmi::padduw(c.r[29], c.r[0], c.r[0]);
    c.budget -= 1;
L_00100074:
    mmi::padduw(c.r[30], c.r[0], c.r[0]);
    mmi::padduw(c.r[31], c.r[0], c.r[0]);
    c.hi.d[0] = 0ull;
    c.hi.d[1] = 0ull;
    c.lo.d[0] = 0ull;
    c.lo.d[1] = 0ull;
    c.sa = ((0u ^ 0u) & 7u) * 2u;
    c.f[0] = 0u;
    c.f[1] = 0u;
    c.f[2] = 0u;
    c.f[3] = 0u;
    c.f[4] = 0u;
    c.f[5] = 0u;
    c.budget -= 13;
L_001000A8:
    c.f[6] = 0u;
    c.f[7] = 0u;
    c.f[8] = 0u;
    c.f[9] = 0u;
    c.f[10] = 0u;
    c.f[11] = 0u;
    c.f[12] = 0u;
    c.f[13] = 0u;
    c.f[14] = 0u;
    c.f[15] = 0u;
    c.f[16] = 0u;
    c.f[17] = 0u;
    c.f[18] = 0u;
    c.f[19] = 0u;
    c.f[20] = 0u;
    c.f[21] = 0u;
    c.f[22] = 0u;
    c.f[23] = 0u;
    c.f[24] = 0u;
    c.f[25] = 0u;
    c.f[26] = 0u;
    c.f[27] = 0u;
    c.f[28] = 0u;
    c.f[29] = 0u;
    c.f[30] = 0u;
    c.f[31] = 0u;
    c.budget -= 26;
L_00100110:
    c.facc = fp::add(c.f[0], c.f[1]);
    ctc1(c, 31u, 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01FE0000u);
    set32(c.r[2], c.r[2].w[0] + 30976u);
    set32(c.r[3], c.r[3].w[0]);
    c.budget -= 7;
L_0010012C:
    c.r[4].d[0] = c.r[2].d[0] & 15ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0010014C; } }
    goto L_00100138;
L_00100134:
    c.budget -= 1;
L_00100138:
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010012Cu | kUnwind; return; } goto L_0010012C; }
L_0010014C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.budget -= 1;
L_00100150:
    c.r[4].d[0] = c.r[4].d[0] | 65520ull;
    c.r[4].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 2;
L_00100158:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_00100178; } }
    st128((c.r[2].w[0]) & ~15u, c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 16u);
    c.budget -= 6;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00100158u | kUnwind; return; } goto L_00100158; }
L_00100178:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00100198; } }
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00100178u | kUnwind; return; } goto L_00100178; }
L_00100198:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00000000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[4], c.r[4].w[0] - 10384u);
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[6], c.r[6].w[0]);
    c.budget -= 8;
L_001001B8:
    set32(c.r[7], c.r[7].w[0] - 32256u);
    set32(c.r[8], c.r[8].w[0] + 544u);
    c.r[28].d[0] = c.r[4].d[0] | 0ull;
    set32(c.r[3], 0u + 60u);
    c.budget -= 4;
L_001001C8:
    c.pc = 0x001001CCu; syscall(c, 0x001001C8u); if (c.pc != 0x001001CCu) return;
    c.budget -= 1;
L_001001CC:
    c.r[29].d[0] = c.r[2].d[0] | 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x01FE0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[4], c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0]);
    set32(c.r[3], 0u + 61u);
    c.budget -= 6;
    c.pc = 0x001001E8u; syscall(c, 0x001001E4u); if (c.pc != 0x001001E8u) return;
    c.budget -= 1;
L_001001E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001001F0u);  if (depth < kMaxDepth) unit_0003(c, 147u, depth + 1u); else { c.pc = 0x0010D5C8u; return; } if (c.pc != 0x001001F0u) [[unlikely]] return; }
L_001001F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001001F8u); c.r[4].d[0] = 0ull | 0ull;  if (depth < kMaxDepth) unit_0001(c, 82u, depth + 1u); else { c.pc = 0x00104560u; return; } if (c.pc != 0x001001F8u) [[unlikely]] return; }
L_001001F8:
    set_interrupts(c, true);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 2;
L_00100200:
    set32(c.r[2], c.r[2].w[0] - 32256u);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100210u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0049(c, 70u, depth + 1u); else { c.pc = 0x00224AF0u; return; } if (c.pc != 0x00100210u) [[unlikely]] return; }
L_00100210:
    c.budget -= 2;
    { c.r[4].d[0] = c.r[2].d[0] | 0ull;  [[clang::musttail]] return unit_0005(c, 248u, depth); }
L_00100218:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0003(c, 198u, depth); }
L_00100220:
    set32(c.r[3], 0u + 35u);
    c.budget -= 1;
    c.pc = 0x00100228u; syscall(c, 0x00100224u); if (c.pc != 0x00100228u) return;
    c.budget -= 1;
L_00100228:
    c.budget -= 2;
L_00100230:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100240u);  if (depth < kMaxDepth) unit_0005(c, 81u, depth + 1u); else { c.pc = 0x001162C0u; return; } if (c.pc != 0x00100240u) [[unlikely]] return; }
L_00100240:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00100250:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100260u);  if (depth < kMaxDepth) unit_0005(c, 81u, depth + 1u); else { c.pc = 0x001162C0u; return; } if (c.pc != 0x00100260u) [[unlikely]] return; }
L_00100260:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00100270:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100280u);  if (depth < kMaxDepth) unit_0005(c, 81u, depth + 1u); else { c.pc = 0x001162C0u; return; } if (c.pc != 0x00100280u) [[unlikely]] return; }
L_00100280:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
L_0010028C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001002A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001002B0u);  if (depth < kMaxDepth) unit_0005(c, 81u, depth + 1u); else { c.pc = 0x001162C0u; return; } if (c.pc != 0x001002B0u) [[unlikely]] return; }
L_001002B0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001002C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001002D0u);  if (depth < kMaxDepth) unit_0005(c, 81u, depth + 1u); else { c.pc = 0x001162C0u; return; } if (c.pc != 0x001002D0u) [[unlikely]] return; }
L_001002D0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001002E8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[4], c.r[4].w[0] << 16);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    set32(c.r[5], c.r[5].w[0] << 16);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[6], c.r[6].w[0] << 16);
    c.budget -= 6;
L_00100300:
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    set32(c.r[7], c.r[7].w[0] << 16);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 16));
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 16));
    set32(c.r[2], 0u + 1u);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[19], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 16));  if (t) { goto L_001003E8; } }
L_00100328:
    c.r[2].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 5u);  goto L_00100344; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00100354; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00100464; } }
L_00100344:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00100400; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00100464; } }
L_00100354:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010035Cu);  if (depth < kMaxDepth) unit_0000(c, 52u, depth + 1u); else { c.pc = 0x00100478u; return; } if (c.pc != 0x0010035Cu) [[unlikely]] return; }
L_0010035C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x12000000u);
    set32(c.r[4], 0u + 512u);
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    st64((c.r[3].w[0]), c.r[4].d[0]);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.r[4].d[0] = 0ull | 65280ull;
    c.r[2].d[0] = ld64((c.r[3].w[0]));
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.budget -= 9;
L_00100380:
    c.r[2].d[0] = c.r[2].d[0] >> 16;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100394u); st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0001(c, 90u, depth + 1u); else { c.pc = 0x00104620u; return; } if (c.pc != 0x00100394u) [[unlikely]] return; }
L_00100394:
    c.r[3].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001003C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001003ACu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0001(c, 163u, depth + 1u); else { c.pc = 0x00104DC0u; return; } if (c.pc != 0x001003ACu) [[unlikely]] return; }
L_001003AC:
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001003B8u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 377u, depth + 1u); else { c.pc = 0x00103FE0u; return; } if (c.pc != 0x001003B8u) [[unlikely]] return; }
L_001003B8:
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 2;
L_001003C0:
    c.r[4].d[0] = c.r[17].d[0] & 1ull;
    c.r[5].d[0] = c.r[18].d[0] & 255ull;
    c.r[6].d[0] = c.r[19].d[0] & 1ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 80u);  goto L_00103EE0; }
L_001003E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x12000000u);
    set32(c.r[3], 0u + 256u);
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    st64((c.r[2].w[0]), c.r[3].d[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00100460; } }
L_00100400:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100408u);  if (depth < kMaxDepth) unit_0000(c, 52u, depth + 1u); else { c.pc = 0x00100478u; return; } if (c.pc != 0x00100408u) [[unlikely]] return; }
L_00100408:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    c.r[6].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = ld64((c.r[3].w[0]));
    c.r[4].d[0] = c.r[17].d[0] & 1ull;
    st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[5].d[0] = c.r[18].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] >> 16;
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[6].d[0] = c.r[19].d[0] & 1ull;
    st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 22;
    { set32(c.r[29], c.r[29].w[0] + 80u);  goto L_00103EE0; }
L_00100460:
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00100464:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00100478:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 24816u);  c.pc = t; return; }
L_00100488:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[7], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] | 15376ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[2].w[0]), c.r[7].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 15392ull;
    set32(c.r[2], 0u + 2u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[4], cfc2(c, 28u));
    c.r[4].d[0] = c.r[4].d[0] | 512ull;
    ctc2(c, 28u, c.r[4].w[0]);
    c.budget -= 14;
L_001004C0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[5], c.r[5].w[0] - 24800u);
    c.r[6].d[0] = c.r[6].d[0] | 20480ull;
    ld128((c.r[5].w[0]) & ~15u, c.r[4]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 12288ull;
    st128((c.r[6].w[0]) & ~15u, c.r[4]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[6].w[0]) & ~15u, c.r[2]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0]), c.r[7].w[0]);  c.pc = t; return; }
L_001004F0:
    set32(c.r[29], c.r[29].w[0] - 320u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    st64((c.r[29].w[0] + 288u), c.r[18].d[0]);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 304u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 5760u);
    st64((c.r[29].w[0] + 272u), c.r[17].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100514u); st64((c.r[29].w[0] + 256u), c.r[16].d[0]);  if (depth < kMaxDepth) unit_0002(c, 58u, depth + 1u); else { c.pc = 0x00108730u; return; } if (c.pc != 0x00100514u) [[unlikely]] return; }
L_00100514:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].sd[0] >= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00100528; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00100578; } }
L_00100528:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_00100534; } }
L_00100530:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00100534:
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(256ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00100558; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010054Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0002(c, 109u, depth + 1u); else { c.pc = 0x00108D70u; return; } if (c.pc != 0x0010054Cu) [[unlikely]] return; }
L_0010054C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00100530u | kUnwind; return; } goto L_00100530; } }
L_00100558:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100560u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 79u, depth + 1u); else { c.pc = 0x001089B8u; return; } if (c.pc != 0x00100560u) [[unlikely]] return; }
L_00100560:
    set32(c.r[4], c.r[17].w[0] - 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010056Cu); set32(c.r[4], c.r[29].w[0] + c.r[4].w[0]);  if (depth < kMaxDepth) unit_0005(c, 103u, depth + 1u); else { c.pc = 0x00116610u; return; } if (c.pc != 0x0010056Cu) [[unlikely]] return; }
L_0010056C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01310000u);
    c.r[3].d[0] = c.r[3].d[0] | 22128ull;
    c.budget -= 2;
L_00100574:
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00100578:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 304u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 288u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 272u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 256u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_00100590:
    set32(c.r[3], 0u + 128u);
    c.budget -= 1;
    c.pc = 0x00100598u; syscall(c, 0x00100594u); if (c.pc != 0x00100598u) return;
    c.budget -= 1;
L_00100598:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001005A0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    set32(c.r[5], c.r[5].w[0] << 16);
    st64((c.r[29].w[0] + 112u), c.r[22].d[0]);
    set32(c.r[6], c.r[6].w[0] << 16);
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    set32(c.r[7], c.r[7].w[0] << 16);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    set32(c.r[8], c.r[8].w[0] << 16);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    set32(c.r[9], c.r[9].w[0] << 16);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    set32(c.r[22], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 16));
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 16));
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    set32(c.r[21], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 16));
    set32(c.r[20], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 16));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001005F4u); c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 52u, depth + 1u); else { c.pc = 0x00100478u; return; } if (c.pc != 0x001005F4u) [[unlikely]] return; }
L_001005F4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = ld16((c.r[17].w[0] + 2u));
    set32(c.r[2], c.r[4].w[0] - 2u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { st32((c.r[29].w[0] + 12u), 0u);  goto L_00100640; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100614u);  if (depth < kMaxDepth) unit_0000(c, 55u, depth + 1u); else { c.pc = 0x001004F0u; return; } if (c.pc != 0x00100614u) [[unlikely]] return; }
L_00100614:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_00100638; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 2u)));
    c.r[6].d[0] = c.r[29].d[0] | 4ull;
    c.r[7].d[0] = c.r[29].d[0] | 8ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100630u); c.r[8].d[0] = c.r[29].d[0] | 12ull;  if (depth < kMaxDepth) unit_0000(c, 62u, depth + 1u); else { c.pc = 0x00100590u; return; } if (c.pc != 0x00100630u) [[unlikely]] return; }
L_00100630:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = ld16((c.r[17].w[0] + 2u));  if (t) { goto L_0010064C; } }
L_00100638:
    c.r[4].d[0] = ld16((c.r[17].w[0] + 2u));
    st32((c.r[29].w[0] + 12u), 0u);
    c.budget -= 2;
L_00100640:
    st32((c.r[29].w[0] + 8u), 0u);
    st32((c.r[29].w[0] + 4u), 0u);
    st32((c.r[29].w[0]), 0u);
    c.budget -= 3;
L_0010064C:
    set32(c.r[3], 0u + 102u);
    c.r[6].d[0] = ld16((c.r[17].w[0]));
    st64((c.r[19].w[0]), c.r[3].d[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_00100674; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_00100674; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00100674:
    st64((c.r[19].w[0] + 8u), c.r[2].d[0]);
    set32(c.r[2], c.r[16].w[0] + 63u);
    c.r[3].d[0] = c.r[22].d[0] & 15ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 6));
    set32(c.r[4], c.r[4].w[0] << 16);
    c.r[2].d[0] = c.r[2].d[0] & 63ull;
    c.r[3].d[0] = c.r[3].d[0] << 15;
    c.r[2].d[0] = c.r[2].d[0] << 9;
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 16));
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[4], 0u + 2u);
    c.budget -= 13;
    { const bool t = c.r[5].d[0] != c.r[4].d[0]; st64((c.r[19].w[0] + 16u), c.r[3].d[0]);  if (t) { goto L_00100750; } }
    set32(c.r[2], c.r[6].w[0] << 16);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[2], c.r[16].w[0] + 2559u);  if (t) { goto L_00100724; } }
    set32(c.r[3], c.r[16].w[0] + 2559u);
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x001006C4u);  goto L_001006C8; }
    goto L_001006C8;
L_001006C4:
    breakpoint(c, 0x001006C4u);
    c.budget -= 1;
L_001006C8:
    mmi::div(c, 0, c.r[3].w[0], c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 50u);
    c.r[5].d[0] = c.r[5].d[0] + static_cast<std::uint64_t>(636ll);
    c.r[2].d[0] = c.r[2].d[0] & 4095ull;
    c.r[7].d[0] = c.r[2].d[0] << 12;
    c.r[3].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[16].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[21].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[1];
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[10].d[0] = c.r[3].d[0] << 23;
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[3].d[0] = c.r[4].d[0] << 32;
    c.r[5].d[0] = c.r[2].d[0] + c.r[5].d[0];
    c.budget -= 19;
    { const bool t = c.r[6].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] & 4095ull;  if (t) { goto L_001007D8; } }
    set32(c.r[2], c.r[18].w[0] << 1);
    c.r[3].d[0] = c.r[10].d[0] | c.r[3].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 1u);  if (t) { goto L_001007E0; } }
L_00100724:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x00100728u);  goto L_0010072C; }
L_0010072C:
    mmi::div(c, 0, c.r[2].w[0], c.r[16].w[0]);
    set32(c.r[7], c.r[18].w[0] - 1u);
    set32(c.r[5], ld32((c.r[29].w[0])));
    c.r[7].d[0] = c.r[7].d[0] << 44;
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 5;
L_00100740:
    c.r[5].d[0] = c.r[5].d[0] + static_cast<std::uint64_t>(636ll);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 25u);  if (t) { goto L_00100820; } }
L_00100750:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 80u);  if (t) { goto L_00100864; } }
    set32(c.r[2], c.r[6].w[0] << 16);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[2], c.r[16].w[0] + 2559u);  if (t) { goto L_001007F8; } }
    set32(c.r[3], c.r[16].w[0] + 2559u);
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x00100778u);  goto L_0010077C; }
L_0010077C:
    mmi::div(c, 0, c.r[3].w[0], c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 72u);
    c.r[5].d[0] = c.r[5].d[0] + static_cast<std::uint64_t>(656ll);
    c.r[2].d[0] = c.r[2].d[0] & 4095ull;
    c.r[7].d[0] = c.r[2].d[0] << 12;
    c.r[3].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[16].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[21].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[1];
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[10].d[0] = c.r[3].d[0] << 23;
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[3].d[0] = c.r[4].d[0] << 32;
    c.r[5].d[0] = c.r[2].d[0] + c.r[5].d[0];
    c.budget -= 19;
    { const bool t = c.r[6].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] & 4095ull;  if (t) { goto L_001007D8; } }
    set32(c.r[2], c.r[18].w[0] << 1);
    c.r[3].d[0] = c.r[10].d[0] | c.r[3].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 1u);  if (t) { goto L_001007E0; } }
L_001007D8:
    set32(c.r[2], c.r[18].w[0] - 1u);
    c.r[3].d[0] = c.r[10].d[0] | c.r[3].d[0];
    c.budget -= 2;
L_001007E0:
    c.r[2].d[0] = c.r[2].d[0] << 44;
    c.r[2].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[3].d[0] | c.r[7].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st64((c.r[19].w[0] + 24u), c.r[2].d[0]);  if (t) { goto L_001008E8; } }
L_001007F8:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x001007FCu);  goto L_00100800; }
L_00100800:
    mmi::div(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.budget -= 1;
L_00100804:
    set32(c.r[7], c.r[18].w[0] - 1u);
    set32(c.r[5], ld32((c.r[29].w[0])));
    c.r[7].d[0] = c.r[7].d[0] << 44;
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 4;
L_00100814:
    c.r[5].d[0] = c.r[5].d[0] + static_cast<std::uint64_t>(656ll);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + 36u);
    c.budget -= 3;
L_00100820:
    c.r[3].d[0] = c.r[3].d[0] & 4095ull;
    c.r[3].d[0] = c.r[3].d[0] << 12;
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[21].w[0], c.r[2].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[2].w[0], c.r[16].w[0]);
    c.r[4].d[0] = c.lo.d[1];
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[5].d[0] = c.r[6].d[0] + c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 23;
    c.r[5].d[0] = c.r[5].d[0] & 4095ull;
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[5].d[0] = c.r[5].d[0] | c.r[7].d[0];
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st64((c.r[19].w[0] + 24u), c.r[2].d[0]);  if (t) { goto L_001008E8; } }
L_00100864:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_001008E0; } }
    set32(c.r[2], 0u + 720u);
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[6], c.r[21].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] >> 31);
    set32(c.r[4], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].d[0] = c.r[6].d[0] + static_cast<std::uint64_t>(232ll);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[6], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[20].w[0] + c.r[4].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + c.r[5].d[0];
    set32(c.r[3], c.r[18].w[0] - 1u);
    c.r[5].d[0] = c.r[5].d[0] + c.r[7].d[0];
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.r[3].d[0] = c.r[3].d[0] << 44;
    c.r[6].d[0] = c.r[6].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] & 4095ull;
    set32(c.r[4], c.r[4].w[0] + 35u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.budget -= 21;
L_001008C0:
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.r[4].d[0] = c.r[4].d[0] & 4095ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] << 12;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st64((c.r[19].w[0] + 24u), c.r[3].d[0]);  if (t) { goto L_001008E8; } }
L_001008E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001008E8u); set32(c.r[4], c.r[4].w[0] + 5776u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x001008E8u) [[unlikely]] return; }
L_001008E8:
    st64((c.r[19].w[0] + 32u), 0ull);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00100918:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[6], c.r[6].w[0] << 16);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[17], c.r[4].w[0] << 16);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[16], c.r[5].w[0] << 16);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 16));
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 16));
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100948u); set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 16));  if (depth < kMaxDepth) unit_0000(c, 52u, depth + 1u); else { c.pc = 0x00100478u; return; } if (c.pc != 0x00100948u) [[unlikely]] return; }
L_00100948:
    set32(c.r[3], c.r[16].w[0] + 63u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u - 1u);
    set32(c.r[16], c.r[16].w[0] + 126u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[17].d[0] = c.r[17].d[0] & 2ull;
    if (c.r[2].d[0] != 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 6));  if (t) { goto L_00100984; } }
    set32(c.r[2], c.r[18].w[0] + 63u);
    set32(c.r[3], c.r[18].w[0] + 126u);
    c.r[4].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    if (c.r[4].d[0] != 0) c.r[3].d[0] = c.r[2].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 6));  if (t) { goto L_00100998; } }
L_00100984:
    set32(c.r[2], c.r[18].w[0] + 31u);
    c.budget -= 1;
L_00100988:
    set32(c.r[3], c.r[18].w[0] + 62u);
    c.r[4].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    if (c.r[4].d[0] != 0) c.r[3].d[0] = c.r[2].d[0];
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    c.budget -= 4;
L_00100998:
    c.r[2].d[0] = ld64((c.r[5].w[0]));
    c.r[3].d[0] = 0ull | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[4], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; mmi::mult(c, 0, c.r[16].w[0], c.r[6].w[0]); c.r[2].d[0] = c.lo.d[0];  if (t) { goto L_001009C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] << 16);  if (t) { goto L_001009C4; } }
L_001009C0:
    set32(c.r[2], c.r[2].w[0] << 17);
    c.budget -= 1;
L_001009C4:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001009E0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[6], c.r[6].w[0] << 16);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[5], c.r[5].w[0] << 16);
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 16));
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    set32(c.r[2], c.r[18].w[0] + 63u);
    set32(c.r[20], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 6));
    c.r[3].d[0] = c.r[20].d[0] & 15ull;
    c.r[2].d[0] = c.r[2].d[0] & 63ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[3].d[0] = c.r[3].d[0] << 24;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st64((c.r[29].w[0] + 80u), c.r[21].d[0]);
    set32(c.r[7], c.r[7].w[0] << 16);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    set32(c.r[8], c.r[8].w[0] << 16);
    c.budget -= 20;
L_00100A30:
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    set32(c.r[9], c.r[9].w[0] << 16);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[3], 0u + 76u);
    set32(c.r[4], 0u + 78u);
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 16));
    set32(c.r[21], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 16));
    set32(c.r[19], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 16));
    st64((c.r[16].w[0] + 8u), c.r[3].d[0]);
    st64((c.r[16].w[0]), c.r[2].d[0]);
    c.budget -= 12;
    { const bool t = c.r[21].d[0] != 0ull; st64((c.r[16].w[0] + 24u), c.r[4].d[0]);  if (t) { goto L_00100A94; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100A70u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 75u, depth + 1u); else { c.pc = 0x00100918u; return; } if (c.pc != 0x00100A70u) [[unlikely]] return; }
L_00100A70:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = c.r[19].d[0] & 15ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].d[0] << 24;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[4].d[0] = 0ull | 32768ull;
    c.r[4].d[0] = c.r[4].d[0] << 17;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];  if (t) { goto L_00100AB8; } }
L_00100A94:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100AA4u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 75u, depth + 1u); else { c.pc = 0x00100918u; return; } if (c.pc != 0x00100AA4u) [[unlikely]] return; }
L_00100AA4:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = c.r[19].d[0] & 15ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].d[0] << 24;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 5;
L_00100AB8:
    st64((c.r[16].w[0] + 16u), c.r[2].d[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 1));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[18].w[0]) >> 1));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    set32(c.r[4], 0u + 2048u);
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = c.r[4].d[0] - c.r[2].d[0];
    c.r[4].d[0] = c.r[4].d[0] - c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 36;
    set32(c.r[6], c.r[18].w[0] - 1u);
    set32(c.r[5], c.r[17].w[0] - 1u);
    c.r[4].d[0] = c.r[4].d[0] << 4;
    c.r[3].d[0] = ld64((c.r[16].w[0] + 64u));
    c.r[7].d[0] = ld64((c.r[16].w[0] + 80u));
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.r[6].d[0] = c.r[6].d[0] << 16;
    set32(c.r[11], 0u + 1u);
    c.r[6].d[0] = c.r[6].d[0] | c.r[5].d[0];
    set32(c.r[2], 0u + 24u);
    c.budget -= 22;
L_00100B10:
    c.r[3].d[0] = c.r[3].d[0] | c.r[11].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[11].d[0];
    set32(c.r[5], 0u + 64u);
    set32(c.r[8], 0u + 26u);
    set32(c.r[9], 0u + 70u);
    set32(c.r[10], 0u + 69u);
    st64((c.r[16].w[0] + 40u), c.r[2].d[0]);
    st64((c.r[16].w[0] + 32u), c.r[4].d[0]);
    c.r[2].d[0] = c.r[20].d[0] & 2ull;
    st64((c.r[16].w[0] + 56u), c.r[5].d[0]);
    st64((c.r[16].w[0] + 48u), c.r[6].d[0]);
    st64((c.r[16].w[0] + 72u), c.r[8].d[0]);
    st64((c.r[16].w[0] + 64u), c.r[3].d[0]);
    st64((c.r[16].w[0] + 88u), c.r[9].d[0]);
    st64((c.r[16].w[0] + 80u), c.r[7].d[0]);
    c.budget -= 17;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[16].w[0] + 104u), c.r[10].d[0]);  if (t) { goto L_00100B60; } }
    c.r[2].d[0] = ld64((c.r[16].w[0] + 96u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | c.r[11].d[0];  if (t) { goto L_00100B6C; } }
L_00100B60:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 96u));
    set32(c.r[3], 0u - 2u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 3;
L_00100B6C:
    st64((c.r[16].w[0] + 96u), c.r[2].d[0]);
    set32(c.r[2], 0u + 71u);
    c.budget -= 4;
    { const bool t = c.r[21].d[0] == 0ull; st64((c.r[16].w[0] + 120u), c.r[2].d[0]);  if (t) { goto L_00100B90; } }
    c.r[2].d[0] = c.r[21].d[0] & 3ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] << 17;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];  if (t) { goto L_00100B94; } }
L_00100B90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.budget -= 1;
L_00100B94:
    st64((c.r[16].w[0] + 112u), c.r[2].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    set32(c.r[2], 0u + 8u);
    c.r[21].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00100BC0:
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 1;
    c.pc = 0x00100BC4u; [[clang::musttail]] return dispatch(c, 0u, depth);
L_00100BC8:
    set32(c.r[7], c.r[7].w[0] << 16);
    set32(c.r[9], c.r[9].w[0] << 16);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 16));
    set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 16));
    set32(c.r[9], c.r[7].w[0] + c.r[9].w[0]);
    set32(c.r[6], c.r[6].w[0] << 16);
    set32(c.r[8], c.r[8].w[0] << 16);
    c.r[12].d[0] = ld8((c.r[29].w[0]));
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 16));
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 16));
    set32(c.r[9], c.r[9].w[0] << 4);
    set32(c.r[7], c.r[7].w[0] << 4);
    c.r[3].d[0] = ld32((c.r[29].w[0] + 16u));
    set32(c.r[8], c.r[6].w[0] + c.r[8].w[0]);
    c.r[11].d[0] = c.r[11].d[0] & 255ull;
    c.r[13].d[0] = ld8((c.r[29].w[0] + 8u));
    c.r[11].d[0] = c.r[11].d[0] << 8;
    c.r[2].d[0] = 0ull | 65024ull;
    c.budget -= 18;
L_00100C10:
    c.r[2].d[0] = c.r[2].d[0] << 46;
    set32(c.r[8], c.r[8].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] << 4);
    c.r[10].d[0] = c.r[10].d[0] & 255ull;
    c.r[12].d[0] = c.r[12].d[0] << 16;
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[9].d[0] = c.r[9].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[10].d[0] = c.r[10].d[0] | c.r[2].d[0];
    c.r[12].d[0] = c.r[12].d[0] | c.r[11].d[0];
    c.r[7].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.r[9].d[0] = c.r[8].d[0] | c.r[9].d[0];
    set32(c.r[5], c.r[5].w[0] << 16);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.r[9].d[0] = c.r[9].d[0] | c.r[3].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[3].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[12].d[0];
    c.r[13].d[0] = c.r[13].d[0] << 24;
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    set32(c.r[4], 0u + 71u);
    set32(c.r[5], 0u + 5u);
    c.r[10].d[0] = c.r[10].d[0] | c.r[13].d[0];
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[2], 0u + 6u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[6].w[0] + 16u), c.r[2].d[0]);
    st64((c.r[6].w[0] + 40u), c.r[3].d[0]);
    st64((c.r[6].w[0] + 32u), c.r[10].d[0]);
    st64((c.r[6].w[0] + 48u), c.r[7].d[0]);
    st64((c.r[6].w[0] + 72u), c.r[5].d[0]);
    st64((c.r[6].w[0] + 64u), c.r[9].d[0]);
    st64((c.r[6].w[0] + 88u), c.r[4].d[0]);
    st64((c.r[6].w[0] + 8u), c.r[4].d[0]);
    st64((c.r[6].w[0]), c.r[11].d[0]);
    st64((c.r[6].w[0] + 24u), 0ull);
    c.budget -= 37;
    { const bool t = c.r[8].d[0] == 0ull; st64((c.r[6].w[0] + 56u), c.r[5].d[0]);  if (t) { goto L_00100CBC; } }
    c.r[2].d[0] = c.r[8].d[0] & 3ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] << 17;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st64((c.r[6].w[0] + 80u), c.r[2].d[0]);  if (t) { goto L_00100CC0; } }
L_00100CBC:
    st64((c.r[6].w[0] + 80u), c.r[11].d[0]);
    c.budget -= 1;
L_00100CC0:
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 6u);  c.pc = t; return; }
L_00100CD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00100F64; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 36864ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_00100CEC:
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_00100D24; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[3].d[0] = c.r[3].d[0] | 36864ull;
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 4;
L_00100D08:
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00100D0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { goto L_00100E2C; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00100D08u | kUnwind; return; } goto L_00100D08; } }
L_00100D24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 40960ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_00100D64; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[3].d[0] = c.r[3].d[0] | 40960ull;
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
L_00100D48:
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { goto L_00100E38; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00100D48u | kUnwind; return; } goto L_00100D48; } }
L_00100D64:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x1F000000u);
    c.r[2].d[0] = c.r[2].d[0] | 15360ull;
    c.r[4].d[0] = c.r[4].d[0] | 3ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x1F000000u);  if (t) { goto L_00100DB4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[4].d[0] = c.r[4].d[0] | 15360ull;
    c.r[3].d[0] = c.r[3].d[0] | 3ull;
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
L_00100D98:
    c.r[2].d[0] = c.r[6].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { goto L_00100E44; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00100D98u | kUnwind; return; } goto L_00100D98; } }
L_00100DB4:
    set32(c.r[6], cfc2(c, 29u));
    c.r[2].d[0] = c.r[6].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x01000000u);  if (t) { goto L_00100DE4; } }
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_00100DC8:
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { goto L_00100E50; } }
    set32(c.r[6], cfc2(c, 29u));
    c.r[2].d[0] = c.r[6].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00100DC8u | kUnwind; return; } goto L_00100DC8; } }
L_00100DE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 12320ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 3072ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_00100E24; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[3].d[0] = c.r[3].d[0] | 12320ull;
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
L_00100E08:
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { goto L_00100E5C; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 3072ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00100E08u | kUnwind; return; } goto L_00100E08; } }
L_00100E24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00100FD8; } }
L_00100E2C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 5832u);  if (t) { goto L_00100E64; } }
L_00100E38:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 6056u);  if (t) { goto L_00100E64; } }
L_00100E44:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 6104u);  if (t) { goto L_00100E64; } }
L_00100E50:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 6152u);  if (t) { goto L_00100E64; } }
L_00100E5C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[4], c.r[4].w[0] + 6192u);
    c.budget -= 2;
L_00100E64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100E6Cu);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x00100E6Cu) [[unlikely]] return; }
L_00100E6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.r[2].d[0] = c.r[2].d[0] | 36864ull;
    set32(c.r[4], c.r[4].w[0] + 5880u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100E84u); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x00100E84u) [[unlikely]] return; }
L_00100E84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.r[2].d[0] = c.r[2].d[0] | 36912ull;
    set32(c.r[4], c.r[4].w[0] + 5896u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100E9Cu); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x00100E9Cu) [[unlikely]] return; }
L_00100E9C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.r[2].d[0] = c.r[2].d[0] | 36880ull;
    set32(c.r[4], c.r[4].w[0] + 5912u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100EB4u); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x00100EB4u) [[unlikely]] return; }
L_00100EB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.r[2].d[0] = c.r[2].d[0] | 36896ull;
    set32(c.r[4], c.r[4].w[0] + 5928u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100ECCu); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x00100ECCu) [[unlikely]] return; }
L_00100ECC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.r[2].d[0] = c.r[2].d[0] | 40960ull;
    set32(c.r[4], c.r[4].w[0] + 5944u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100EE4u); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x00100EE4u) [[unlikely]] return; }
L_00100EE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.r[2].d[0] = c.r[2].d[0] | 41008ull;
    set32(c.r[4], c.r[4].w[0] + 5960u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100EFCu); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x00100EFCu) [[unlikely]] return; }
L_00100EFC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.r[2].d[0] = c.r[2].d[0] | 40976ull;
    set32(c.r[4], c.r[4].w[0] + 5976u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100F14u); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x00100F14u) [[unlikely]] return; }
L_00100F14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.r[2].d[0] = c.r[2].d[0] | 40992ull;
    set32(c.r[4], c.r[4].w[0] + 5992u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100F2Cu); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x00100F2Cu) [[unlikely]] return; }
L_00100F2C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.r[2].d[0] = c.r[2].d[0] | 15360ull;
    set32(c.r[4], c.r[4].w[0] + 6008u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100F44u); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x00100F44u) [[unlikely]] return; }
L_00100F44:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.r[2].d[0] = c.r[2].d[0] | 12320ull;
    set32(c.r[4], c.r[4].w[0] + 6032u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100F5Cu); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x00100F5Cu) [[unlikely]] return; }
L_00100F5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00100FD8; } }
L_00100F64:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 36864ull;
    c.r[5].d[0] = c.r[5].d[0] | 40960ull;
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[6], ld32((c.r[5].w[0])));
    c.r[4].d[0] = c.r[4].d[0] | 15360ull;
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[6].d[0] = c.r[6].d[0] & 256ull;
    c.r[4].d[0] = c.r[2].d[0] | 2ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x1F000000u);
    if (c.r[6].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 3ull;
    c.r[5].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[4].d[0] = c.r[2].d[0] | 4ull;
    if (c.r[5].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];
    set32(c.r[6], cfc2(c, 29u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[6].d[0] = c.r[6].d[0] & 256ull;
    c.r[3].d[0] = c.r[3].d[0] | 12320ull;
    c.r[5].d[0] = c.r[2].d[0] | 8ull;
    set32(c.r[4], ld32((c.r[3].w[0])));
    if (c.r[6].d[0] != 0) c.r[2].d[0] = c.r[5].d[0];
    c.r[3].d[0] = c.r[2].d[0] | 16ull;
    c.r[4].d[0] = c.r[4].d[0] & 3072ull;
    if (c.r[4].d[0] != 0) c.r[2].d[0] = c.r[3].d[0];
    c.budget -= 29;
L_00100FD8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00100FE8:
    set32(c.r[7], c.r[7].w[0] << 16);
    set32(c.r[6], c.r[6].w[0] << 16);
    set32(c.r[8], c.r[8].w[0] << 16);
    set32(c.r[13], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 16));
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], c.r[5].w[0] << 16);
    c.budget -= 6;
L_00101000:
    set32(c.r[9], c.r[9].w[0] << 16);
    set32(c.r[10], c.r[10].w[0] << 16);
    set32(c.r[11], c.r[11].w[0] << 16);
    set32(c.r[12], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 16));
    c.budget -= 4;
L_00101010:
    set32(c.r[15], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 16));
    c.budget -= 1;
L_00101014:
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    set32(c.r[24], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 16));
    c.budget -= 3;
L_00101020:
    set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[10].w[0]) >> 16));
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[11].w[0]) >> 16));
    c.budget -= 2;
L_00101028:
    c.r[14].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[13].d[0] < static_cast<std::uint64_t>(59ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00101094; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 1;
L_0010103C:
    set32(c.r[3], c.r[13].w[0] << 2);
    c.budget -= 1;
L_00101040:
    set32(c.r[2], c.r[2].w[0] + 6288u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x00100000u < 16384u) { entry = entries_0000[(t - 0x00100000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00101054:
    mmi::mult(c, 0, c.r[10].w[0], c.r[8].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));  if (t) { goto L_00101094; } }
L_00101060:
    mmi::mult(c, 0, c.r[10].w[0], c.r[8].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));  if (t) { goto L_00101094; } }
L_00101074:
    mmi::mult(c, 0, c.r[10].w[0], c.r[8].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));  if (t) { goto L_00101094; } }
L_00101080:
    mmi::mult(c, 0, c.r[10].w[0], c.r[8].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));  if (t) { goto L_00101094; } }
L_0010108C:
    mmi::mult(c, 0, c.r[10].w[0], c.r[8].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 2;
L_00101094:
    set32(c.r[2], 0u + 32767u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_001010B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001010ACu); set32(c.r[4], c.r[4].w[0] + 6240u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x001010ACu) [[unlikely]] return; }
L_001010AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001011C0; } }
L_001010B4:
    mmi::por(c.r[2], c.r[0], c.r[0]);
    c.r[3].d[0] = c.r[6].d[0] & 32767ull;
    st128((c.r[14].w[0] + 80u) & ~15u, c.r[2]);
    c.budget -= 3;
L_001010C0:
    c.r[6].d[0] = c.r[7].d[0] << 48;
    st128((c.r[14].w[0]) & ~15u, c.r[2]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0xF3FF0000u);
    c.r[7].d[0] = c.r[7].d[0] | 65535ull;
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[7].d[0] = c.r[7].d[0] | 65535ull;
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[7].d[0] = c.r[7].d[0] | 65535ull;
    c.r[4].d[0] = ld64((c.r[14].w[0] + 80u));
    set32(c.r[2], 0u - 32768u);
    c.r[5].d[0] = ld64((c.r[14].w[0]));
    c.r[12].d[0] = c.r[12].d[0] << 48;
    c.r[4].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[11].d[0] = ld64((c.r[14].w[0] + 8u));
    c.r[5].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 16;
L_00101100:
    set32(c.r[2], 0u + 4u);
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    set32(c.r[2], 0u - 1u);
    c.r[2].d[0] = c.r[2].d[0] >> 4;
    set32(c.r[3], 0u - 16u);
    c.r[5].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[11].d[0] = c.r[11].d[0] & c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] & c.r[7].d[0];
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 16);
    c.r[10].d[0] = c.r[10].d[0] << 48;
    c.r[8].d[0] = c.r[8].d[0] << 48;
    c.r[6].d[0] = c.r[6].d[0] | c.r[12].d[0];
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 16);
    c.r[2].d[0] = 0ull | 32768ull;
    c.budget -= 16;
L_00101140:
    c.r[2].d[0] = c.r[2].d[0] << 45;
    set32(c.r[3], 0u + 14u);
    c.r[7].d[0] = 0ull | 32768ull;
    c.r[7].d[0] = c.r[7].d[0] << 44;
    c.r[9].d[0] = c.r[15].d[0] << 48;
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 48);
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[8].d[0];
    c.r[11].d[0] = c.r[11].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[7].d[0];
    c.r[13].d[0] = c.r[13].d[0] << 56;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 16);
    c.r[12].d[0] = c.r[24].d[0] << 48;
    c.r[6].d[0] = c.r[6].d[0] | c.r[13].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[12].d[0];
    set32(c.r[2], 0u + 80u);
    c.budget -= 16;
L_00101180:
    set32(c.r[3], 0u + 81u);
    set32(c.r[7], 0u + 82u);
    set32(c.r[8], 0u + 83u);
    st64((c.r[14].w[0] + 80u), c.r[4].d[0]);
    st64((c.r[14].w[0]), c.r[5].d[0]);
    st64((c.r[14].w[0] + 8u), c.r[11].d[0]);
    st64((c.r[14].w[0] + 16u), c.r[6].d[0]);
    st64((c.r[14].w[0] + 24u), c.r[2].d[0]);
    st64((c.r[14].w[0] + 32u), c.r[9].d[0]);
    st64((c.r[14].w[0] + 40u), c.r[3].d[0]);
    st64((c.r[14].w[0] + 48u), c.r[10].d[0]);
    st64((c.r[14].w[0] + 56u), c.r[7].d[0]);
    st64((c.r[14].w[0] + 72u), c.r[8].d[0]);
    st64((c.r[14].w[0] + 64u), 0ull);
    set32(c.r[2], 0u + 6u);
    c.budget -= 16;
L_001011C0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001011D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = c.r[3].d[0] | 40960ull;
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00101224; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[3].d[0] = c.r[3].d[0] | 40960ull;
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
L_00101208:
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 1u);  if (t) { goto L_00101304; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[6].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00101208u | kUnwind; return; } goto L_00101208; } }
L_00101224:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[5], 0u + 6u);
    c.r[2].d[0] = c.r[2].d[0] | 40992ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    c.r[3].d[0] = c.r[7].d[0] & c.r[4].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);  if (t) { goto L_00101260; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 40976ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];  if (t) { goto L_00101270; } }
L_00101260:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] | 40976ull;
    c.r[2].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.budget -= 4;
L_00101270:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[4], 0u + 257u);
    c.r[2].d[0] = c.r[2].d[0] | 40960ull;
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_001012BC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[3].d[0] = c.r[3].d[0] | 40960ull;
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
L_001012A0:
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 1u);  if (t) { goto L_00101304; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[6].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001012A0u | kUnwind; return; } goto L_001012A0; } }
L_001012BC:
    c.r[2].d[0] = ld64((c.r[7].w[0] + 80u));
    c.budget -= 1;
L_001012C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 40992ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[2].d[0] = c.r[2].d[0] & 32767ull;
    c.r[4].d[0] = c.r[8].d[0] & c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != c.r[5].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);  if (t) { goto L_00101318; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[8].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 40976ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];  if (t) { goto L_00101328; } }
L_00101304:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00101310u); set32(c.r[4], c.r[4].w[0] + 6528u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x00101310u) [[unlikely]] return; }
L_00101310:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00101340; } }
L_00101318:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] | 40976ull;
    c.r[2].d[0] = c.r[8].d[0] & c.r[2].d[0];
    c.budget -= 4;
L_00101328:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[4], 0u + 257u);
    c.r[3].d[0] = c.r[3].d[0] | 40960ull;
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 6;
L_00101340:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00101350:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010136Cu); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 52u, depth + 1u); else { c.pc = 0x00100478u; return; } if (c.pc != 0x0010136Cu) [[unlikely]] return; }
L_0010136C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[18], ld32((c.r[16].w[0] + 8u)));  if (t) { goto L_00101398; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00101380u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0001(c, 163u, depth + 1u); else { c.pc = 0x00104DC0u; return; } if (c.pc != 0x00101380u) [[unlikely]] return; }
L_00101380:
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010138Cu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 377u, depth + 1u); else { c.pc = 0x00103FE0u; return; } if (c.pc != 0x0010138Cu) [[unlikely]] return; }
L_0010138C:
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), 0u);  if (t) { goto L_001013D4; } }
L_00101398:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[16].w[0] + 8u), c.r[17].w[0]);  goto L_001013B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001013A8u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0001(c, 163u, depth + 1u); else { c.pc = 0x00104DC0u; return; } if (c.pc != 0x001013A8u) [[unlikely]] return; }
L_001013A8:
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001013B4u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 377u, depth + 1u); else { c.pc = 0x00103FE0u; return; } if (c.pc != 0x001013B4u) [[unlikely]] return; }
L_001013B4:
    st32((c.r[16].w[0] + 8u), c.r[17].w[0]);
    c.budget -= 1;
L_001013B8:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001013C8u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0000(c, 373u, depth + 1u); else { c.pc = 0x00103FC0u; return; } if (c.pc != 0x001013C8u) [[unlikely]] return; }
L_001013C8:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001013D4u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0001(c, 167u, depth + 1u); else { c.pc = 0x00104E28u; return; } if (c.pc != 0x001013D4u) [[unlikely]] return; }
L_001013D4:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001013F0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[6], c.r[6].w[0] << 16);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[5], c.r[5].w[0] << 16);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 16));
    set32(c.r[20], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 22));
    c.r[2].d[0] = c.r[20].d[0] & 15ull;
    c.r[6].d[0] = c.r[6].d[0] & 63ull;
    c.r[2].d[0] = c.r[2].d[0] << 24;
    c.r[6].d[0] = c.r[6].d[0] << 16;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    st64((c.r[29].w[0] + 80u), c.r[21].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    set32(c.r[7], c.r[7].w[0] << 16);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.budget -= 19;
L_0010143C:
    set32(c.r[8], c.r[8].w[0] << 16);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[9], c.r[9].w[0] << 16);
    set32(c.r[2], 0u + 77u);
    set32(c.r[3], 0u + 79u);
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 16));
    set32(c.r[21], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 16));
    set32(c.r[19], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 16));
    st64((c.r[16].w[0] + 8u), c.r[2].d[0]);
    st64((c.r[16].w[0]), c.r[6].d[0]);
    c.budget -= 12;
    { const bool t = c.r[21].d[0] != 0ull; st64((c.r[16].w[0] + 24u), c.r[3].d[0]);  if (t) { goto L_001014A0; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010147Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 75u, depth + 1u); else { c.pc = 0x00100918u; return; } if (c.pc != 0x0010147Cu) [[unlikely]] return; }
L_0010147C:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = c.r[19].d[0] & 15ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].d[0] << 24;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[4].d[0] = 0ull | 32768ull;
    c.r[4].d[0] = c.r[4].d[0] << 17;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];  if (t) { goto L_001014C4; } }
L_001014A0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001014B0u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 75u, depth + 1u); else { c.pc = 0x00100918u; return; } if (c.pc != 0x001014B0u) [[unlikely]] return; }
L_001014B0:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = c.r[19].d[0] & 15ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].d[0] << 24;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 5;
L_001014C4:
    st64((c.r[16].w[0] + 16u), c.r[2].d[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 1));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[18].w[0]) >> 1));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    set32(c.r[4], 0u + 2048u);
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = c.r[4].d[0] - c.r[2].d[0];
    c.r[4].d[0] = c.r[4].d[0] - c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 36;
    set32(c.r[6], c.r[18].w[0] - 1u);
    set32(c.r[5], c.r[17].w[0] - 1u);
    c.r[4].d[0] = c.r[4].d[0] << 4;
    c.r[3].d[0] = ld64((c.r[16].w[0] + 64u));
    c.r[7].d[0] = ld64((c.r[16].w[0] + 80u));
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.r[6].d[0] = c.r[6].d[0] << 16;
    set32(c.r[11], 0u + 1u);
    c.r[6].d[0] = c.r[6].d[0] | c.r[5].d[0];
    set32(c.r[2], 0u + 25u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[11].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[11].d[0];
    set32(c.r[5], 0u + 65u);
    set32(c.r[8], 0u + 26u);
    set32(c.r[9], 0u + 70u);
    set32(c.r[10], 0u + 69u);
    st64((c.r[16].w[0] + 40u), c.r[2].d[0]);
    st64((c.r[16].w[0] + 32u), c.r[4].d[0]);
    c.r[2].d[0] = c.r[20].d[0] & 2ull;
    c.budget -= 31;
L_00101540:
    st64((c.r[16].w[0] + 56u), c.r[5].d[0]);
    st64((c.r[16].w[0] + 48u), c.r[6].d[0]);
    st64((c.r[16].w[0] + 72u), c.r[8].d[0]);
    st64((c.r[16].w[0] + 64u), c.r[3].d[0]);
    st64((c.r[16].w[0] + 88u), c.r[9].d[0]);
    st64((c.r[16].w[0] + 80u), c.r[7].d[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[16].w[0] + 104u), c.r[10].d[0]);  if (t) { goto L_0010156C; } }
    c.r[2].d[0] = ld64((c.r[16].w[0] + 96u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | c.r[11].d[0];  if (t) { goto L_00101578; } }
L_0010156C:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 96u));
    set32(c.r[3], 0u - 2u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 3;
L_00101578:
    st64((c.r[16].w[0] + 96u), c.r[2].d[0]);
    set32(c.r[2], 0u + 72u);
    c.budget -= 4;
    { const bool t = c.r[21].d[0] == 0ull; st64((c.r[16].w[0] + 120u), c.r[2].d[0]);  if (t) { goto L_0010159C; } }
    c.r[2].d[0] = c.r[21].d[0] & 3ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] << 17;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];  if (t) { goto L_001015A0; } }
L_0010159C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.budget -= 1;
L_001015A0:
    st64((c.r[16].w[0] + 112u), c.r[2].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    set32(c.r[2], 0u + 8u);
    c.r[21].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001015D0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    set32(c.r[5], c.r[5].w[0] << 16);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    set32(c.r[8], c.r[8].w[0] << 16);
    st64((c.r[29].w[0] + 176u), c.r[30].d[0]);
    set32(c.r[16], c.r[9].w[0] << 16);
    st64((c.r[29].w[0] + 160u), c.r[23].d[0]);
    set32(c.r[10], c.r[10].w[0] << 16);
    st64((c.r[29].w[0] + 144u), c.r[22].d[0]);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 16));
    st64((c.r[29].w[0] + 128u), c.r[21].d[0]);
    set32(c.r[22], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 16));
    st64((c.r[29].w[0] + 80u), c.r[18].d[0]);
    set32(c.r[21], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    st64((c.r[29].w[0] + 64u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[20].d[0]);
    set32(c.r[23], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[10].w[0]) >> 16));
    st64((c.r[29].w[0] + 96u), c.r[19].d[0]);
    set32(c.r[17], c.r[6].w[0] << 16);
    st64((c.r[29].w[0] + 192u), c.r[31].d[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010162Cu); set32(c.r[30], c.r[7].w[0] << 16);  if (depth < kMaxDepth) unit_0000(c, 52u, depth + 1u); else { c.pc = 0x00100478u; return; } if (c.pc != 0x0010162Cu) [[unlikely]] return; }
L_0010162C:
    set32(c.r[19], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 16));
    set32(c.r[20], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[30].w[0]) >> 16));
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
L_0010163C:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_0010164C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00101654u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 64u, depth + 1u); else { c.pc = 0x001005A0u; return; } if (c.pc != 0x00101654u) [[unlikely]] return; }
L_00101654:
    set32(c.r[4], c.r[18].w[0] + 40u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00101670u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 64u, depth + 1u); else { c.pc = 0x001005A0u; return; } if (c.pc != 0x00101670u) [[unlikely]] return; }
L_00101670:
    set32(c.r[4], c.r[18].w[0] + 96u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010168Cu); c.r[9].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 78u, depth + 1u); else { c.pc = 0x001009E0u; return; } if (c.pc != 0x0010168Cu) [[unlikely]] return; }
L_0010168C:
    set32(c.r[4], c.r[18].w[0] + 224u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001016A8u); c.r[9].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 137u, depth + 1u); else { c.pc = 0x001013F0u; return; } if (c.pc != 0x001016A8u) [[unlikely]] return; }
L_001016A8:
    set32(c.r[4], c.r[18].w[0] + 464u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001016C4u); c.r[9].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 78u, depth + 1u); else { c.pc = 0x001009E0u; return; } if (c.pc != 0x001016C4u) [[unlikely]] return; }
L_001016C4:
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 592u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001016E0u); c.r[8].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 137u, depth + 1u); else { c.pc = 0x001013F0u; return; } if (c.pc != 0x001016E0u) [[unlikely]] return; }
L_001016E0:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 17));  if (t) { goto L_00101758; } }
    set32(c.r[16], 0u + 2048u);
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[30].w[0]) >> 17));
    st32((c.r[29].w[0]), 0u);
    set32(c.r[17], c.r[16].w[0] - c.r[17].w[0]);
    st32((c.r[29].w[0] + 8u), 0u);
    set32(c.r[16], c.r[16].w[0] - c.r[2].w[0]);
    set32(c.r[4], c.r[18].w[0] + 352u);
    st32((c.r[29].w[0] + 16u), 0u);
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    c.r[9].d[0] = c.r[20].d[0] + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00101728u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 84u, depth + 1u); else { c.pc = 0x00100BC8u; return; } if (c.pc != 0x00101728u) [[unlikely]] return; }
L_00101728:
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    st32((c.r[29].w[0] + 8u), 0u);
    set32(c.r[4], c.r[18].w[0] + 720u);
    st32((c.r[29].w[0] + 16u), 0u);
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    c.r[9].d[0] = c.r[20].d[0] + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00101758u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 84u, depth + 1u); else { c.pc = 0x00100BC8u; return; } if (c.pc != 0x00101758u) [[unlikely]] return; }
L_00101758:
    mmi::por(c.r[2], c.r[0], c.r[0]);
    set32(c.r[7], 0u + 22u);
    st128((c.r[18].w[0] + 80u) & ~15u, c.r[2]);
    set32(c.r[6], 0u - 32768u);
    st128((c.r[18].w[0] + 448u) & ~15u, c.r[2]);
    set32(c.r[3], 0u + 16u);
    c.r[4].d[0] = ld64((c.r[18].w[0] + 80u));
    set32(c.r[2], 0u + 16u);
    c.r[5].d[0] = ld64((c.r[18].w[0] + 448u));
    if (c.r[23].d[0] != 0) c.r[2].d[0] = c.r[7].d[0];
    c.r[4].d[0] = c.r[4].d[0] & c.r[6].d[0];
    if (c.r[23].d[0] != 0) c.r[3].d[0] = c.r[7].d[0];
    c.r[5].d[0] = c.r[5].d[0] & c.r[6].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[6].d[0] = ld64((c.r[18].w[0] + 88u));
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.r[7].d[0] = ld64((c.r[18].w[0] + 456u));
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] >> 4;
    set32(c.r[2], 0u - 16u);
    c.r[5].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[7].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[6].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 45;
    set32(c.r[2], 0u + 14u);
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[2].d[0];
    st64((c.r[18].w[0] + 80u), c.r[4].d[0]);
    st64((c.r[18].w[0] + 88u), c.r[6].d[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    st64((c.r[18].w[0] + 448u), c.r[5].d[0]);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 42;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00101800u); st64((c.r[18].w[0] + 456u), c.r[7].d[0]);  if (depth < kMaxDepth) unit_0000(c, 75u, depth + 1u); else { c.pc = 0x00100918u; return; } if (c.pc != 0x00101800u) [[unlikely]] return; }
L_00101800:
    set32(c.r[3], ld32((c.r[29].w[0] + 32u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] | 1ull;
    c.r[2].d[0] = ld64((c.r[3].w[0]));
    c.r[3].d[0] = 0ull | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; set32(c.r[3], ld32((c.r[29].w[0] + 32u)));  if (t) { goto L_0010183C; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 192u));  if (t) { goto L_00101888; } }
L_0010183C:
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 1));
    c.budget -= 1;
L_00101840:
    c.r[6].d[0] = ld64((c.r[18].w[0] + 56u));
    c.r[7].d[0] = ld64((c.r[18].w[0] + 96u));
    set32(c.r[3], c.r[5].w[0] << 16);
    c.r[4].d[0] = ld64((c.r[18].w[0] + 224u));
    set32(c.r[2], 0u - 512u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    c.r[5].d[0] = c.r[5].d[0] & 511ull;
    c.r[4].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 511ull;
    c.r[6].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[7].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[5].d[0];
    st64((c.r[18].w[0] + 224u), c.r[4].d[0]);
    st64((c.r[18].w[0] + 56u), c.r[6].d[0]);
    c.budget -= 16;
L_00101880:
    st64((c.r[18].w[0] + 96u), c.r[7].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 192u));
    c.budget -= 2;
L_00101888:
    c.r[30].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_001018B8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.budget -= 2;
L_001018C0:
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x01000000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_00101910; } }
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_001018E8:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { goto L_00101900; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001018F8u); set32(c.r[4], c.r[18].w[0] + 6584u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x001018F8u) [[unlikely]] return; }
L_001018F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00101900u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 207u, depth + 1u); else { c.pc = 0x00102050u; return; } if (c.pc != 0x00101900u) [[unlikely]] return; }
L_00101900:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001018E8u | kUnwind; return; } goto L_001018E8; } }
L_00101910:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00101928:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
L_00101940:
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x01000000u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    if (c.r[6].d[0] != 0) c.r[16].d[0] = c.r[6].d[0];
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_00101990; } }
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 2;
L_00101968:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { goto L_00101980; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00101978u); set32(c.r[4], c.r[19].w[0] + 6584u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x00101978u) [[unlikely]] return; }
L_00101978:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00101980u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 207u, depth + 1u); else { c.pc = 0x00102050u; return; } if (c.pc != 0x00101980u) [[unlikely]] return; }
L_00101980:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00101968u | kUnwind; return; } goto L_00101968; } }
L_00101990:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001019B0:
    set32(c.r[3], 0u + 7u);
    set32(c.r[2], c.r[4].w[0] >> 28);
    c.budget -= 2;
L_001019B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);  if (t) { goto L_001019D0; } }
L_001019C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[4].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 4;
L_001019D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_001019D8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], c.r[5].w[0] - 1u);  if (t) { goto L_00101A04; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_001019E8:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001019E8u | kUnwind; return; } goto L_001019E8; } }
    goto L_00101A04;
L_00101A00:
    c.budget -= 1;
L_00101A04:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00101A10:
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);  if (t) { goto L_00101A30; } }
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 24752u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[3].w[0])));  c.pc = t; return; }
L_00101A30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00101A38:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 2;
L_00101A40:
    st64((c.r[29].w[0] + 48u), c.r[17].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 57344ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 24752u);
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[6], c.r[6].w[0] + 6608u);
    set32(c.r[4], 0u + 9u);
    c.r[17].d[0] = c.r[5].d[0] & 1ull;
    c.budget -= 12;
L_00101A70:
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], c.r[3].w[0] + 4u);  goto L_00101A9C; }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 1;
L_00101A80:
    st32((c.r[2].w[0] + 128u), 0u);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 48u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 80u), 0u);
    st32((c.r[2].w[0] + 64u), 0u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 7;
L_00101A9C:
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00101A70u | kUnwind; return; } goto L_00101A70; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = 0ull | 65311ull;
    c.r[3].d[0] = c.r[3].d[0] | 57360ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0xFF1F0000u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], 0u + 20u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00101AD4u); st32((c.r[3].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001019D8u; return; } if (c.pc != 0x00101AD4u) [[unlikely]] return; }
L_00101AD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00101ADCu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 181u, depth + 1u); else { c.pc = 0x00101B18u; return; } if (c.pc != 0x00101ADCu) [[unlikely]] return; }
L_00101ADC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[3].d[0]; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00101B00; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 57344ull;
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
L_00101B00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00101B18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 57344ull;
    c.r[3].d[0] = c.r[3].d[0] | 57376ull;
    set32(c.r[10], ld32((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[6], ld32((c.r[3].w[0])));
    c.r[9].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 57392ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | 57424ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].d[0] = ld8((c.r[9].w[0]));
    set32(c.r[6], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 57408ull;
    set32(c.r[8], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 20;
    if (c.r[4].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[9].w[0] + 1u));  goto L_00101B70; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u - 1u);  c.pc = t; return; }
L_00101B70:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[9].w[0] + 2u));  goto L_00101B84; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u - 2u);  c.pc = t; return; }
L_00101B84:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[11].d[0] = ld8((c.r[9].w[0] + 3u));  goto L_00101B98; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u - 3u);  c.pc = t; return; }
L_00101B98:
    c.r[2].d[0] = c.r[11].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_00101BAC; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u - 4u);  c.pc = t; return; }
L_00101BAC:
    c.r[3].d[0] = ld8((c.r[9].w[0]));
    set32(c.r[2], c.r[2].w[0] + 6648u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.r[5].d[0] = ld8((c.r[9].w[0] + 1u));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 6664u);
    c.r[8].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65487ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.r[7].d[0] = ld8((c.r[9].w[0] + 2u));
    c.r[2].d[0] = c.r[10].d[0] & c.r[2].d[0];
    set32(c.r[4], c.r[4].w[0] + 6680u);
    set32(c.r[8], c.r[8].w[0] << 4);
    c.r[6].d[0] = ld8((c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[10].d[0] = c.r[2].d[0] | c.r[8].d[0];
    set32(c.r[7], c.r[7].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 65343ull;
    set32(c.r[6], c.r[6].w[0] << 6);
    c.r[3].d[0] = c.r[10].d[0] & c.r[3].d[0];
    c.r[4].d[0] = ld8((c.r[7].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[10].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 65523ull;
    set32(c.r[4], c.r[4].w[0] << 2);
    c.r[2].d[0] = c.r[10].d[0] & c.r[2].d[0];
    c.budget -= 30;
    { const bool t = c.r[11].d[0] == 0ull; c.r[10].d[0] = c.r[2].d[0] | c.r[4].d[0];  if (t) { goto L_00101C48; } }
    c.r[3].d[0] = ld8((c.r[9].w[0] + 3u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[10].d[0] = c.r[10].d[0] | 2ull;
    c.r[2].d[0] = c.r[2].d[0] | 64767ull;
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[2].d[0] = c.r[10].d[0] & c.r[2].d[0];
    c.budget -= 6;
L_00101C3C:
    set32(c.r[3], c.r[3].w[0] << 8);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = c.r[2].d[0] | c.r[3].d[0];  if (t) { goto L_00101C54; } }
L_00101C48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65533ull;
    c.r[10].d[0] = c.r[10].d[0] & c.r[2].d[0];
    c.budget -= 3;
L_00101C54:
    c.r[2].d[0] = ld16((c.r[9].w[0] + 4u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[6].d[0] = ld16((c.r[9].w[0] + 6u));
    c.r[4].d[0] = c.r[4].d[0] | 57344ull;
    c.r[5].d[0] = ld16((c.r[9].w[0] + 10u));
    set32(c.r[2], c.r[2].w[0] << 16);
    set32(c.r[8], ld32((c.r[9].w[0] + 16u)));
    c.r[6].d[0] = c.r[2].d[0] | c.r[6].d[0];
    c.r[7].d[0] = ld16((c.r[9].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[4].w[0]), c.r[10].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 57376ull;
    set32(c.r[5], c.r[5].w[0] << 16);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[3].w[0]), c.r[6].w[0]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[7].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 57392ull;
    set32(c.r[6], ld32((c.r[9].w[0] + 12u)));
    st32((c.r[2].w[0]), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 57424ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[3].w[0]), c.r[6].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 57408ull;
    st32((c.r[2].w[0]), c.r[8].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[6], c.r[3].w[0] - 31928u);
    ldl(c.r[2], (c.r[9].w[0] + 7u));
    ldr(c.r[2], (c.r[9].w[0]));
    ldl(c.r[4], (c.r[9].w[0] + 15u));
    ldr(c.r[4], (c.r[9].w[0] + 8u));
    set32(c.r[5], ld32((c.r[9].w[0] + 16u)));
    sdl(c.r[2], (c.r[6].w[0] + 7u));
    sdr(c.r[2], (c.r[6].w[0]));
    sdl(c.r[4], (c.r[6].w[0] + 15u));
    sdr(c.r[4], (c.r[6].w[0] + 8u));
    st32((c.r[6].w[0] + 16u), c.r[5].w[0]);
    c.budget -= 39;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00101D40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00101D5Cu); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 168u, depth + 1u); else { c.pc = 0x001019B0u; return; } if (c.pc != 0x00101D5Cu) [[unlikely]] return; }
L_00101D5C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00101D68u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 158u, depth + 1u); else { c.pc = 0x001018B8u; return; } if (c.pc != 0x00101D68u) [[unlikely]] return; }
L_00101D68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { st32((c.r[16].w[0] + 48u), c.r[17].w[0]);  goto L_00101D7C; }
L_00101D7C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u - 13u);
    st32((c.r[16].w[0] + 32u), 0u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[2].d[0] = c.r[2].d[0] | 261ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00101DA8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00101DCCu); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 168u, depth + 1u); else { c.pc = 0x001019B0u; return; } if (c.pc != 0x00101DCCu) [[unlikely]] return; }
L_00101DCC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00101DD8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 158u, depth + 1u); else { c.pc = 0x001018B8u; return; } if (c.pc != 0x00101DD8u) [[unlikely]] return; }
L_00101DD8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { st32((c.r[16].w[0] + 16u), c.r[17].w[0]);  goto L_00101DEC; }
L_00101DEC:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u - 13u);
    st32((c.r[16].w[0] + 32u), c.r[18].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[2].d[0] = c.r[2].d[0] | 257ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 8;
L_00101E0C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00101E20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 7;
L_00101E3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00101E44u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 168u, depth + 1u); else { c.pc = 0x001019B0u; return; } if (c.pc != 0x00101E44u) [[unlikely]] return; }
L_00101E44:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00101E50u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 158u, depth + 1u); else { c.pc = 0x001018B8u; return; } if (c.pc != 0x00101E50u) [[unlikely]] return; }
L_00101E50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { st32((c.r[16].w[0] + 16u), c.r[17].w[0]);  goto L_00101E64; }
L_00101E64:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u - 13u);
    st32((c.r[16].w[0] + 32u), c.r[18].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[2].d[0] = c.r[2].d[0] | 265ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00101E98:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00101EACu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 158u, depth + 1u); else { c.pc = 0x001018B8u; return; } if (c.pc != 0x00101EACu) [[unlikely]] return; }
L_00101EAC:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u - 13u);
    set32(c.r[4], 0u - 2u);
    st32((c.r[16].w[0] + 32u), 0u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00101EE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00101F04u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 168u, depth + 1u); else { c.pc = 0x001019B0u; return; } if (c.pc != 0x00101F04u) [[unlikely]] return; }
L_00101F04:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00101F10u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 158u, depth + 1u); else { c.pc = 0x001018B8u; return; } if (c.pc != 0x00101F10u) [[unlikely]] return; }
L_00101F10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { st32((c.r[16].w[0] + 16u), c.r[17].w[0]);  goto L_00101F24; }
L_00101F24:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u - 13u);
    set32(c.r[4], 0u - 2u);
    st32((c.r[16].w[0] + 32u), c.r[18].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00101F60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00101F84u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 168u, depth + 1u); else { c.pc = 0x001019B0u; return; } if (c.pc != 0x00101F84u) [[unlikely]] return; }
L_00101F84:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00101F90u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 158u, depth + 1u); else { c.pc = 0x001018B8u; return; } if (c.pc != 0x00101F90u) [[unlikely]] return; }
L_00101F90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { st32((c.r[16].w[0] + 16u), c.r[17].w[0]);  goto L_00101FA4; }
L_00101FA4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u - 13u);
    set32(c.r[4], 0u - 2u);
    st32((c.r[16].w[0] + 32u), c.r[18].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00101FE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00102000; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] >> 8);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 1ull;  if (t) { goto L_0010200C; } }
L_00102000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102008u);  if (depth < kMaxDepth) unit_0000(c, 158u, depth + 1u); else { c.pc = 0x001018B8u; return; } if (c.pc != 0x00102008u) [[unlikely]] return; }
L_00102008:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0010200C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00102018:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00102034; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] < c.r[5].d[0] ? 1ull : 0ull;  if (t) { goto L_00102040; } }
L_00102034:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010203Cu); c.r[6].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x00101928u; return; } if (c.pc != 0x0010203Cu) [[unlikely]] return; }
L_0010203C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00102040:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00102050:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102068u); st64((c.r[29].w[0]), c.r[16].d[0]);  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x00102068u) [[unlikely]] return; }
L_00102068:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 62752ull;
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.budget -= 6;
L_00102080:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_00102098; } }
    c.r[3].d[0] = c.r[6].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 62864ull;
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 4;
L_00102098:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 57344ull;
    c.r[4].d[0] = c.r[4].d[0] | 65279ull;
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | 62864ull;
    c.r[4].d[0] = c.r[16].d[0] & c.r[4].d[0];
    st32((c.r[17].w[0]), c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[6].w[0]);
    c.budget -= 10;
L_001020C0:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001020D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001020D0u);  if (depth < kMaxDepth) unit_0003(c, 127u, depth + 1u); else { c.pc = 0x0010D378u; return; } if (c.pc != 0x001020D0u) [[unlikely]] return; }
L_001020D0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001020D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00102100:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102124u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x00102124u) [[unlikely]] return; }
L_00102124:
    ld128((c.r[17].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[17].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[17].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[17].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[16].w[0]) & ~15u, c.vu0.vf[8]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    c.budget -= 7;
L_00102140:
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 9u, 7u, c.vu0.vf[8].w[3]);
    st128((c.r[18].w[0]) & ~15u, c.vu0.vf[9]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00102168; } }
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 64u);  [[clang::musttail]] return unit_0003(c, 127u, depth); }
L_00102168:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00102180:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001021A4u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x001021A4u) [[unlikely]] return; }
L_001021A4:
    ld128((c.r[17].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[17].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[17].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[17].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    set32(c.r[7], 0u + 4u);
    c.budget -= 5;
L_001021B8:
    ld128((c.r[16].w[0]) & ~15u, c.vu0.vf[8]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 9u, 7u, c.vu0.vf[8].w[3]);
    st128((c.r[18].w[0]) & ~15u, c.vu0.vf[9]);
    set32(c.r[7], c.r[7].w[0] - 1u);
    set32(c.r[16], c.r[16].w[0] + 16u);
    c.budget -= 10;
    { const bool t = 0ull != c.r[7].d[0]; set32(c.r[18], c.r[18].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001021B8u | kUnwind; return; } goto L_001021B8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_001021FC; } }
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 64u);  [[clang::musttail]] return unit_0003(c, 127u, depth); }
L_001021FC:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00102210:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102234u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x00102234u) [[unlikely]] return; }
L_00102234:
    ld128((c.r[17].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[16].w[0]) & ~15u, c.vu0.vf[5]);
    vu::opmula(c.vu0, 4u, 5u);
    vu::opmsub(c.vu0, 6u, 5u, 4u);
    vu::sub(c.vu0, 1u, 6u, 6u, 6u);
    st128((c.r[18].w[0]) & ~15u, c.vu0.vf[6]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00102268; } }
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 64u);  [[clang::musttail]] return unit_0003(c, 127u, depth); }
L_00102268:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00102280:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 48u), c.f[20]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001022A0u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x001022A0u) [[unlikely]] return; }
L_001022A0:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    ld128((c.r[17].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[16].w[0]) & ~15u, c.vu0.vf[5]);
    vu::mul(c.vu0, 14u, 5u, 4u, 5u);
    vu::addbc(c.vu0, 8u, 5u, 5u, c.vu0.vf[5].w[1]);
    vu::addbc(c.vu0, 8u, 5u, 5u, c.vu0.vf[5].w[2]);
    c.r[2] = c.vu0.vf[5];
    c.f[20] = c.r[2].w[0];
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.f[0] = c.f[20];  if (t) { goto L_001022D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001022D0u);  if (depth < kMaxDepth) unit_0003(c, 127u, depth + 1u); else { c.pc = 0x0010D378u; return; } if (c.pc != 0x001022D0u) [[unlikely]] return; }
L_001022D0:
    c.f[0] = c.f[20];
    c.budget -= 1;
L_001022D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 48u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001022F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010230Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x0010230Cu) [[unlikely]] return; }
L_0010230C:
    ld128((c.r[16].w[0]) & ~15u, c.vu0.vf[4]);
    vu::mul(c.vu0, 14u, 5u, 4u, 4u);
    vu::addbc(c.vu0, 8u, 5u, 5u, c.vu0.vf[5].w[1]);
    vu::addbc(c.vu0, 8u, 5u, 5u, c.vu0.vf[5].w[2]);
    vu::sqrt(c.vu0, c.vu0.vf[5].w[0]);
    vu::addbc(c.vu0, 8u, 5u, 0u, c.vu0.q);
    vu::div(c.vu0, c.vu0.vf[0].w[3], c.vu0.vf[5].w[0]);
    vu::sub(c.vu0, 15u, 6u, 0u, 0u);
    vu::mulbc(c.vu0, 14u, 6u, 4u, c.vu0.q);
    st128((c.r[17].w[0]) & ~15u, c.vu0.vf[6]);
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0010235C; } }
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_0003(c, 127u, depth); }
L_0010235C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00102370:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010238Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x0010238Cu) [[unlikely]] return; }
L_0010238C:
    ld128((c.r[16].w[0]) & ~15u, c.r[8]);
    ld128((c.r[16].w[0] + 16u) & ~15u, c.r[9]);
    ld128((c.r[16].w[0] + 32u) & ~15u, c.r[10]);
    ld128((c.r[16].w[0] + 48u) & ~15u, c.r[11]);
    mmi::pextlw(c.r[12], c.r[9], c.r[8]);
    mmi::pextuw(c.r[13], c.r[9], c.r[8]);
    mmi::pextlw(c.r[14], c.r[11], c.r[10]);
    mmi::pextuw(c.r[15], c.r[11], c.r[10]);
    mmi::pcpyld(c.r[8], c.r[14], c.r[12]);
    mmi::pcpyud(c.r[9], c.r[12], c.r[14]);
    mmi::pcpyld(c.r[10], c.r[15], c.r[13]);
    mmi::pcpyud(c.r[11], c.r[13], c.r[15]);
    st128((c.r[17].w[0]) & ~15u, c.r[8]);
    st128((c.r[17].w[0] + 16u) & ~15u, c.r[9]);
    st128((c.r[17].w[0] + 32u) & ~15u, c.r[10]);
    st128((c.r[17].w[0] + 48u) & ~15u, c.r[11]);
    c.budget -= 18;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001023E4; } }
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_0003(c, 127u, depth); }
L_001023E4:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001023F8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102414u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x00102414u) [[unlikely]] return; }
L_00102414:
    ld128((c.r[16].w[0]) & ~15u, c.r[8]);
    ld128((c.r[16].w[0] + 16u) & ~15u, c.r[9]);
    ld128((c.r[16].w[0] + 32u) & ~15u, c.r[10]);
    ld128((c.r[16].w[0] + 48u) & ~15u, c.vu0.vf[4]);
    vu::move(c.vu0, 15u, 5u, 4u);
    vu::sub(c.vu0, 14u, 4u, 4u, 4u);
    vu::move(c.vu0, 15u, 9u, 4u);
    c.r[11] = c.vu0.vf[4];
    mmi::pextlw(c.r[12], c.r[9], c.r[8]);
    mmi::pextuw(c.r[13], c.r[9], c.r[8]);
    c.budget -= 10;
L_0010243C:
    mmi::pextlw(c.r[14], c.r[11], c.r[10]);
    mmi::pextuw(c.r[15], c.r[11], c.r[10]);
    mmi::pcpyld(c.r[8], c.r[14], c.r[12]);
    mmi::pcpyud(c.r[9], c.r[12], c.r[14]);
    mmi::pcpyld(c.r[10], c.r[15], c.r[13]);
    c.vu0.vf[6] = c.r[8];
    c.vu0.vf[7] = c.r[9];
    c.vu0.vf[8] = c.r[10];
    vu::mulabc(c.vu0, 14u, 6u, c.vu0.vf[5].w[0]);
    vu::maddabc(c.vu0, 14u, 7u, c.vu0.vf[5].w[1]);
    vu::maddbc(c.vu0, 14u, 4u, 8u, c.vu0.vf[5].w[2]);
    vu::sub(c.vu0, 14u, 4u, 9u, 4u);
    st128((c.r[17].w[0]) & ~15u, c.r[8]);
    st128((c.r[17].w[0] + 16u) & ~15u, c.r[9]);
    st128((c.r[17].w[0] + 32u) & ~15u, c.r[10]);
    st128((c.r[17].w[0] + 48u) & ~15u, c.vu0.vf[4]);
    c.budget -= 18;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00102494; } }
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_0003(c, 127u, depth); }
L_00102494:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001024A8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 48u), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001024CCu); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x001024CCu) [[unlikely]] return; }
L_001024CC:
    ld128((c.r[16].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[8], c.f[20]);
    c.vu0.vf[5] = c.r[8];
    vu::div(c.vu0, c.vu0.vf[0].w[3], c.vu0.vf[5].w[0]);
    vu::mulbc(c.vu0, 15u, 4u, 4u, c.vu0.q);
    st128((c.r[17].w[0]) & ~15u, c.vu0.vf[4]);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00102504; } }
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 48u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 64u);  [[clang::musttail]] return unit_0003(c, 127u, depth); }
L_00102504:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 48u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00102518:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 48u), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010253Cu); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x0010253Cu) [[unlikely]] return; }
L_0010253C:
    ld128((c.r[16].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[8], c.f[20]);
    c.vu0.vf[5] = c.r[8];
    vu::div(c.vu0, c.vu0.vf[0].w[3], c.vu0.vf[5].w[0]);
    vu::mulbc(c.vu0, 14u, 4u, 4u, c.vu0.q);
    st128((c.r[17].w[0]) & ~15u, c.vu0.vf[4]);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00102574; } }
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 48u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 64u);  [[clang::musttail]] return unit_0003(c, 127u, depth); }
L_00102574:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 48u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00102588:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 64u), c.f[20]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001025B4u); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x001025B4u) [[unlikely]] return; }
L_001025B4:
    ld128((c.r[17].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[16].w[0]) & ~15u, c.vu0.vf[5]);
    set32(c.r[8], c.f[20]);
    c.vu0.vf[6] = c.r[8];
    vu::addbc(c.vu0, 8u, 7u, 0u, c.vu0.vf[0].w[3]);
    vu::sub(c.vu0, 8u, 8u, 7u, 6u);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[6].w[0]);
    vu::maddbc(c.vu0, 15u, 9u, 5u, c.vu0.vf[8].w[0]);
    st128((c.r[18].w[0]) & ~15u, c.vu0.vf[9]);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_001025F8; } }
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 64u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 80u);  [[clang::musttail]] return unit_0003(c, 127u, depth); }
L_001025F8:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 64u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00102610:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102634u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x00102634u) [[unlikely]] return; }
L_00102634:
    ld128((c.r[17].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[16].w[0]) & ~15u, c.vu0.vf[5]);
    c.budget -= 2;
L_0010263C:
    vu::add(c.vu0, 15u, 6u, 4u, 5u);
    st128((c.r[18].w[0]) & ~15u, c.vu0.vf[6]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00102660; } }
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 64u);  [[clang::musttail]] return unit_0003(c, 127u, depth); }
L_00102660:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00102678:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010269Cu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x0010269Cu) [[unlikely]] return; }
L_0010269C:
    ld128((c.r[17].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[16].w[0]) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 15u, 6u, 4u, 5u);
    st128((c.r[18].w[0]) & ~15u, c.vu0.vf[6]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_001026C8; } }
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 64u);  [[clang::musttail]] return unit_0003(c, 127u, depth); }
L_001026C8:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001026E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102704u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x00102704u) [[unlikely]] return; }
L_00102704:
    ld128((c.r[17].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[16].w[0]) & ~15u, c.vu0.vf[5]);
    vu::mul(c.vu0, 15u, 6u, 4u, 5u);
    st128((c.r[18].w[0]) & ~15u, c.vu0.vf[6]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00102730; } }
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 64u);  [[clang::musttail]] return unit_0003(c, 127u, depth); }
L_00102730:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00102748:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 48u), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010276Cu); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x0010276Cu) [[unlikely]] return; }
L_0010276C:
    ld128((c.r[16].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[8], c.f[20]);
    c.vu0.vf[5] = c.r[8];
    vu::mulbc(c.vu0, 15u, 6u, 4u, c.vu0.vf[5].w[0]);
    st128((c.r[17].w[0]) & ~15u, c.vu0.vf[6]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0010279C; } }
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 48u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 64u);  [[clang::musttail]] return unit_0003(c, 127u, depth); }
L_0010279C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 48u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001027B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001027D4u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x001027D4u) [[unlikely]] return; }
L_001027D4:
    ld128((c.r[16].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[17].w[0] + 48u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[17].w[0]) & ~15u, c.r[7]);
    ld128((c.r[17].w[0] + 16u) & ~15u, c.r[8]);
    ld128((c.r[17].w[0] + 32u) & ~15u, c.r[9]);
    vu::add(c.vu0, 14u, 5u, 5u, 4u);
    st128((c.r[18].w[0]) & ~15u, c.r[7]);
    st128((c.r[18].w[0] + 16u) & ~15u, c.r[8]);
    st128((c.r[18].w[0] + 32u) & ~15u, c.r[9]);
    st128((c.r[18].w[0] + 48u) & ~15u, c.vu0.vf[5]);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00102818; } }
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 64u);  [[clang::musttail]] return unit_0003(c, 127u, depth); }
L_00102818:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00102830:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.budget -= 3;
L_0010283C:
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_00102840:
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010284Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x0010284Cu) [[unlikely]] return; }
L_0010284C:
    ld128((c.r[16].w[0]) & ~15u, c.r[6]);
    st128((c.r[17].w[0]) & ~15u, c.r[6]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0010286C; } }
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_0003(c, 127u, depth); }
L_0010286C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00102880:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010289Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x0010289Cu) [[unlikely]] return; }
L_0010289C:
    ld128((c.r[16].w[0]) & ~15u, c.r[6]);
    ld128((c.r[16].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[16].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[16].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[17].w[0]) & ~15u, c.r[6]);
    st128((c.r[17].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[17].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[17].w[0] + 48u) & ~15u, c.r[9]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001028D4; } }
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_0003(c, 127u, depth); }
L_001028D4:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001028E8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102904u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x00102904u) [[unlikely]] return; }
    goto L_00102904;
L_00102900:
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_00102904:
    ld128((c.r[16].w[0]) & ~15u, c.vu0.vf[4]);
    vu::ftoi(c.vu0, 15u, 5u, 4u, 4);
    st128((c.r[17].w[0]) & ~15u, c.vu0.vf[5]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00102928; } }
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_0003(c, 127u, depth); }
L_00102928:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00102938:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102954u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x00102954u) [[unlikely]] return; }
L_00102954:
    ld128((c.r[16].w[0]) & ~15u, c.vu0.vf[4]);
    vu::ftoi(c.vu0, 15u, 5u, 4u, 0);
    st128((c.r[17].w[0]) & ~15u, c.vu0.vf[5]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00102978; } }
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_0003(c, 127u, depth); }
L_00102978:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00102988:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001029A4u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x001029A4u) [[unlikely]] return; }
L_001029A4:
    ld128((c.r[16].w[0]) & ~15u, c.vu0.vf[4]);
    vu::itof(c.vu0, 15u, 5u, 4u, 4);
    st128((c.r[17].w[0]) & ~15u, c.vu0.vf[5]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001029C8; } }
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_0003(c, 127u, depth); }
L_001029C8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001029D8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001029F4u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x001029F4u) [[unlikely]] return; }
L_001029F4:
    ld128((c.r[16].w[0]) & ~15u, c.vu0.vf[4]);
    vu::itof(c.vu0, 15u, 5u, 4u, 0);
    st128((c.r[17].w[0]) & ~15u, c.vu0.vf[5]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00102A18; } }
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_0003(c, 127u, depth); }
L_00102A18:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00102A28:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102A3Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x00102A3Cu) [[unlikely]] return; }
L_00102A3C:
    vu::sub(c.vu0, 15u, 4u, 0u, 0u);
    vu::add(c.vu0, 1u, 4u, 4u, 0u);
    vu::mr32(c.vu0, 15u, 5u, 4u);
    vu::mr32(c.vu0, 15u, 6u, 5u);
    vu::mr32(c.vu0, 15u, 7u, 6u);
    st128((c.r[16].w[0] + 48u) & ~15u, c.vu0.vf[4]);
    st128((c.r[16].w[0] + 32u) & ~15u, c.vu0.vf[5]);
    st128((c.r[16].w[0] + 16u) & ~15u, c.vu0.vf[6]);
    st128((c.r[16].w[0]) & ~15u, c.vu0.vf[7]);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00102A74; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_0003(c, 127u, depth); }
L_00102A74:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00102A80:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[8], c.r[8].w[0] - 24688u);
    ld128((c.r[8].w[0]) & ~15u, c.vu0.vf[5]);
    vu::mr32(c.vu0, 1u, 6u, 6u);
    vu::addbc(c.vu0, 8u, 4u, 0u, c.vu0.vf[6].w[0]);
    vu::mul(c.vu0, 8u, 6u, 6u, 6u);
    vu::mulbc(c.vu0, 7u, 4u, 4u, c.vu0.vf[0].w[0]);
    vu::mulbc(c.vu0, 15u, 8u, 5u, c.vu0.vf[6].w[3]);
    vu::sub(c.vu0, 15u, 5u, 0u, 0u);
    vu::mulbc(c.vu0, 15u, 8u, 8u, c.vu0.vf[6].w[0]);
    vu::mulbc(c.vu0, 14u, 8u, 8u, c.vu0.vf[6].w[0]);
    vu::addbc(c.vu0, 8u, 4u, 4u, c.vu0.vf[8].w[3]);
    vu::mulbc(c.vu0, 12u, 8u, 8u, c.vu0.vf[6].w[0]);
    vu::addbc(c.vu0, 8u, 4u, 4u, c.vu0.vf[8].w[2]);
    vu::mulbc(c.vu0, 8u, 8u, 8u, c.vu0.vf[6].w[0]);
    vu::addbc(c.vu0, 8u, 4u, 4u, c.vu0.vf[8].w[1]);
    vu::addbc(c.vu0, 8u, 4u, 4u, c.vu0.vf[8].w[0]);
    vu::addbc(c.vu0, 12u, 4u, 5u, c.vu0.vf[4].w[0]);
    vu::mul(c.vu0, 8u, 7u, 4u, 4u);
    vu::subbc(c.vu0, 1u, 7u, 0u, c.vu0.vf[7].w[0]);
    vu::sqrt(c.vu0, c.vu0.vf[7].w[3]);
    c.budget -= 24;
    { const bool t = c.r[7].d[0] != 0ull; vu::addbc(c.vu0, 8u, 7u, 0u, c.vu0.q);  if (t) { goto L_00102AE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; vu::addbc(c.vu0, 8u, 4u, 5u, c.vu0.vf[7].w[0]);  if (t) { goto L_00102AEC; } }
L_00102AE8:
    vu::subbc(c.vu0, 8u, 4u, 5u, c.vu0.vf[7].w[0]);
    c.budget -= 1;
L_00102AEC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00102AF8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 48u), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102B1Cu); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x00102B1Cu) [[unlikely]] return; }
L_00102B1C:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FC90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00102B44; } }
    c.f[20] = fp::add(c.f[0], c.f[20]);
    c.budget -= 3;
    { set32(c.r[7], 0u + 1u);  goto L_00102B4C; }
L_00102B44:
    c.f[20] = fp::sub(c.f[0], c.f[20]);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00102B4C:
    set32(c.r[8], c.f[20]);
    c.vu0.vf[6] = c.r[8];
    c.r[6].d[0] = c.r[31].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102B60u);  if (depth < kMaxDepth) unit_0000(c, 264u, depth + 1u); else { c.pc = 0x00102A80u; return; } if (c.pc != 0x00102B60u) [[unlikely]] return; }
L_00102B60:
    c.r[31].d[0] = c.r[6].d[0] + 0ull;
    vu::move(c.vu0, 15u, 6u, 5u);
    vu::move(c.vu0, 15u, 7u, 5u);
    vu::move(c.vu0, 15u, 9u, 0u);
    vu::sub(c.vu0, 14u, 9u, 9u, 9u);
    vu::mr32(c.vu0, 15u, 8u, 9u);
    vu::sub(c.vu0, 3u, 4u, 4u, 4u);
    vu::addbc(c.vu0, 4u, 6u, 5u, c.vu0.vf[4].w[0]);
    vu::addbc(c.vu0, 8u, 6u, 5u, c.vu0.vf[4].w[1]);
    vu::subbc(c.vu0, 8u, 7u, 5u, c.vu0.vf[4].w[0]);
    vu::addbc(c.vu0, 4u, 7u, 5u, c.vu0.vf[4].w[1]);
    set32(c.r[7], 0u + 4u);
    c.budget -= 12;
L_00102B90:
    ld128((c.r[16].w[0]) & ~15u, c.vu0.vf[4]);
    vu::mulabc(c.vu0, 15u, 6u, c.vu0.vf[4].w[0]);
    vu::maddabc(c.vu0, 15u, 7u, c.vu0.vf[4].w[1]);
    vu::maddabc(c.vu0, 15u, 8u, c.vu0.vf[4].w[2]);
    vu::maddbc(c.vu0, 15u, 5u, 9u, c.vu0.vf[4].w[3]);
    st128((c.r[17].w[0]) & ~15u, c.vu0.vf[5]);
    set32(c.r[7], c.r[7].w[0] - 1u);
    set32(c.r[16], c.r[16].w[0] + 16u);
    c.budget -= 10;
    { const bool t = 0ull != c.r[7].d[0]; set32(c.r[17], c.r[17].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00102B90u | kUnwind; return; } goto L_00102B90; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00102BD4; } }
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 48u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 64u);  [[clang::musttail]] return unit_0003(c, 127u, depth); }
L_00102BD4:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 48u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00102BE8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 48u), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102C0Cu); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x00102C0Cu) [[unlikely]] return; }
L_00102C0C:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FC90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00102C34; } }
    c.f[20] = fp::add(c.f[0], c.f[20]);
    c.budget -= 3;
    { set32(c.r[7], 0u + 1u);  goto L_00102C3C; }
L_00102C34:
    c.f[20] = fp::sub(c.f[0], c.f[20]);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00102C3C:
    set32(c.r[8], c.f[20]);
    c.vu0.vf[6] = c.r[8];
    c.r[6].d[0] = c.r[31].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102C50u);  if (depth < kMaxDepth) unit_0000(c, 264u, depth + 1u); else { c.pc = 0x00102A80u; return; } if (c.pc != 0x00102C50u) [[unlikely]] return; }
L_00102C50:
    c.r[31].d[0] = c.r[6].d[0] + 0ull;
    vu::move(c.vu0, 15u, 6u, 5u);
    vu::move(c.vu0, 15u, 7u, 5u);
    vu::move(c.vu0, 15u, 8u, 5u);
    vu::move(c.vu0, 15u, 9u, 5u);
    vu::addbc(c.vu0, 8u, 6u, 5u, c.vu0.vf[0].w[3]);
    vu::addbc(c.vu0, 1u, 9u, 5u, c.vu0.vf[0].w[3]);
    vu::sub(c.vu0, 3u, 4u, 4u, 4u);
    vu::addbc(c.vu0, 2u, 7u, 5u, c.vu0.vf[4].w[0]);
    vu::addbc(c.vu0, 4u, 7u, 5u, c.vu0.vf[4].w[1]);
    vu::subbc(c.vu0, 4u, 8u, 5u, c.vu0.vf[4].w[0]);
    vu::addbc(c.vu0, 2u, 8u, 5u, c.vu0.vf[4].w[1]);
    set32(c.r[7], 0u + 4u);
    c.budget -= 13;
L_00102C84:
    ld128((c.r[16].w[0]) & ~15u, c.vu0.vf[4]);
    vu::mulabc(c.vu0, 15u, 6u, c.vu0.vf[4].w[0]);
    vu::maddabc(c.vu0, 15u, 7u, c.vu0.vf[4].w[1]);
    vu::maddabc(c.vu0, 15u, 8u, c.vu0.vf[4].w[2]);
    vu::maddbc(c.vu0, 15u, 5u, 9u, c.vu0.vf[4].w[3]);
    st128((c.r[17].w[0]) & ~15u, c.vu0.vf[5]);
    set32(c.r[7], c.r[7].w[0] - 1u);
    set32(c.r[16], c.r[16].w[0] + 16u);
    c.budget -= 10;
    { const bool t = 0ull != c.r[7].d[0]; set32(c.r[17], c.r[17].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00102C84u | kUnwind; return; } goto L_00102C84; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00102CC8; } }
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 48u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 64u);  [[clang::musttail]] return unit_0003(c, 127u, depth); }
L_00102CC8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 48u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00102CE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 48u), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102D04u); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x00102D04u) [[unlikely]] return; }
L_00102D04:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FC90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00102D2C; } }
    c.f[20] = fp::add(c.f[0], c.f[20]);
    c.budget -= 3;
    { set32(c.r[7], 0u + 1u);  goto L_00102D34; }
L_00102D2C:
    c.f[20] = fp::sub(c.f[0], c.f[20]);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00102D34:
    set32(c.r[8], c.f[20]);
    c.vu0.vf[6] = c.r[8];
    c.r[6].d[0] = c.r[31].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102D48u);  if (depth < kMaxDepth) unit_0000(c, 264u, depth + 1u); else { c.pc = 0x00102A80u; return; } if (c.pc != 0x00102D48u) [[unlikely]] return; }
L_00102D48:
    c.r[31].d[0] = c.r[6].d[0] + 0ull;
    vu::move(c.vu0, 15u, 6u, 5u);
    vu::move(c.vu0, 15u, 7u, 5u);
    vu::move(c.vu0, 15u, 8u, 5u);
    vu::move(c.vu0, 15u, 9u, 5u);
    vu::addbc(c.vu0, 4u, 7u, 5u, c.vu0.vf[0].w[3]);
    vu::addbc(c.vu0, 1u, 9u, 5u, c.vu0.vf[0].w[3]);
    vu::sub(c.vu0, 3u, 4u, 4u, 4u);
    vu::subbc(c.vu0, 2u, 6u, 5u, c.vu0.vf[4].w[0]);
    vu::addbc(c.vu0, 8u, 6u, 5u, c.vu0.vf[4].w[1]);
    vu::addbc(c.vu0, 8u, 8u, 5u, c.vu0.vf[4].w[0]);
    vu::addbc(c.vu0, 2u, 8u, 5u, c.vu0.vf[4].w[1]);
    set32(c.r[7], 0u + 4u);
    c.budget -= 13;
L_00102D7C:
    ld128((c.r[16].w[0]) & ~15u, c.vu0.vf[4]);
    vu::mulabc(c.vu0, 15u, 6u, c.vu0.vf[4].w[0]);
    vu::maddabc(c.vu0, 15u, 7u, c.vu0.vf[4].w[1]);
    vu::maddabc(c.vu0, 15u, 8u, c.vu0.vf[4].w[2]);
    vu::maddbc(c.vu0, 15u, 5u, 9u, c.vu0.vf[4].w[3]);
    st128((c.r[17].w[0]) & ~15u, c.vu0.vf[5]);
    set32(c.r[7], c.r[7].w[0] - 1u);
    set32(c.r[16], c.r[16].w[0] + 16u);
    c.budget -= 10;
    { const bool t = 0ull != c.r[7].d[0]; set32(c.r[17], c.r[17].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00102D7Cu | kUnwind; return; } goto L_00102D7C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00102DC0; } }
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 48u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 64u);  [[clang::musttail]] return unit_0003(c, 127u, depth); }
L_00102DC0:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 48u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00102DD8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102DF8u); c.f[12] = ld32((c.r[17].w[0] + 8u));  if (depth < kMaxDepth) unit_0000(c, 265u, depth + 1u); else { c.pc = 0x00102AF8u; return; } if (c.pc != 0x00102DF8u) [[unlikely]] return; }
L_00102DF8:
    c.f[12] = ld32((c.r[17].w[0] + 4u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102E08u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 274u, depth + 1u); else { c.pc = 0x00102CE0u; return; } if (c.pc != 0x00102E08u) [[unlikely]] return; }
L_00102E08:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = ld32((c.r[17].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00102BE8u | kUnwind; return; } goto L_00102BE8; }
L_00102E28:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 56u), c.f[21]);
    c.budget -= 5;
L_00102E3C:
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 48u), c.f[20]);
    c.f[21] = c.f[12];
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102E54u); c.f[20] = c.f[13];  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x00102E54u) [[unlikely]] return; }
L_00102E54:
    set32(c.r[8], c.f[21]);
    set32(c.r[9], c.f[20]);
    ld128((c.r[16].w[0]) & ~15u, c.vu0.vf[6]);
    c.vu0.vf[4] = c.r[8];
    c.vu0.vf[5] = c.r[9];
    vu::maxbc(c.vu0, 15u, 6u, 6u, c.vu0.vf[4].w[0]);
    vu::minibc(c.vu0, 15u, 6u, 6u, c.vu0.vf[5].w[0]);
    st128((c.r[17].w[0]) & ~15u, c.vu0.vf[6]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00102E94; } }
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.f[21] = ld32((c.r[29].w[0] + 56u));
    c.f[20] = ld32((c.r[29].w[0] + 48u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 64u);  [[clang::musttail]] return unit_0003(c, 127u, depth); }
L_00102E94:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.f[21] = ld32((c.r[29].w[0] + 56u));
    c.f[20] = ld32((c.r[29].w[0] + 48u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00102EB0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 144u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102EE4u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 262u, depth + 1u); else { c.pc = 0x00102A28u; return; } if (c.pc != 0x00102EE4u) [[unlikely]] return; }
L_00102EE4:
    set32(c.r[16], c.r[29].w[0] + 64u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102EF8u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 218u, depth + 1u); else { c.pc = 0x00102210u; return; } if (c.pc != 0x00102EF8u) [[unlikely]] return; }
L_00102EF8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102F04u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 223u, depth + 1u); else { c.pc = 0x001022F0u; return; } if (c.pc != 0x00102F04u) [[unlikely]] return; }
L_00102F04:
    set32(c.r[16], c.r[29].w[0] + 32u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102F14u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 223u, depth + 1u); else { c.pc = 0x001022F0u; return; } if (c.pc != 0x00102F14u) [[unlikely]] return; }
L_00102F14:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102F24u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 218u, depth + 1u); else { c.pc = 0x00102210u; return; } if (c.pc != 0x00102F24u) [[unlikely]] return; }
L_00102F24:
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102F34u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 245u, depth + 1u); else { c.pc = 0x001027B0u; return; } if (c.pc != 0x00102F34u) [[unlikely]] return; }
L_00102F34:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102F40u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x00102F40u) [[unlikely]] return; }
L_00102F40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00102F60:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st32((c.r[29].w[0] + 80u), c.f[20]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[20] = c.r[1].w[0];
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.f[12] = c.f[20];
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102F98u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 243u, depth + 1u); else { c.pc = 0x00102748u; return; } if (c.pc != 0x00102F98u) [[unlikely]] return; }
L_00102F98:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102FA4u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 223u, depth + 1u); else { c.pc = 0x001022F0u; return; } if (c.pc != 0x00102FA4u) [[unlikely]] return; }
L_00102FA4:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102FB4u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 243u, depth + 1u); else { c.pc = 0x00102748u; return; } if (c.pc != 0x00102FB4u) [[unlikely]] return; }
L_00102FB4:
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102FC0u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 223u, depth + 1u); else { c.pc = 0x001022F0u; return; } if (c.pc != 0x00102FC0u) [[unlikely]] return; }
L_00102FC0:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102FD0u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 243u, depth + 1u); else { c.pc = 0x00102748u; return; } if (c.pc != 0x00102FD0u) [[unlikely]] return; }
L_00102FD0:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102FDCu); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 223u, depth + 1u); else { c.pc = 0x001022F0u; return; } if (c.pc != 0x00102FDCu) [[unlikely]] return; }
L_00102FDC:
    c.f[0] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[16].w[0] + 48u), c.f[0]);
    st32((c.r[16].w[0] + 60u), c.f[1]);
    st32((c.r[16].w[0] + 56u), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00103004u); st32((c.r[16].w[0] + 52u), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 225u, depth + 1u); else { c.pc = 0x00102370u; return; } if (c.pc != 0x00103004u) [[unlikely]] return; }
L_00103004:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[20] = ld32((c.r[29].w[0] + 80u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00103020:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.budget -= 7;
L_0010303C:
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 1;
L_00103040:
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010304Cu); c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0010304Cu) [[unlikely]] return; }
L_0010304C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00103058u); set32(c.r[4], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00103058u) [[unlikely]] return; }
L_00103058:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00103064u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00103064u) [[unlikely]] return; }
L_00103064:
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
L_00103080:
    c.budget -= 2;
    { set32(c.r[29], c.r[29].w[0] + 80u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00102830u | kUnwind; return; } goto L_00102830; }
L_00103320:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00103354u); c.r[16].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x00103354u) [[unlikely]] return; }
L_00103354:
    ld128((c.r[19].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[19].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[19].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[19].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    c.budget -= 4;
L_00103364:
    ld128((c.r[18].w[0]) & ~15u, c.vu0.vf[8]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 9u, 7u, c.vu0.vf[8].w[3]);
    vu::div(c.vu0, c.vu0.vf[0].w[3], c.vu0.vf[9].w[3]);
    vu::mulbc(c.vu0, 14u, 9u, 9u, c.vu0.q);
    c.budget -= 10;
    { const bool t = c.r[16].d[0] == 0ull; vu::ftoi(c.vu0, 15u, 10u, 9u, 4);  if (t) { goto L_00103390; } }
    vu::ftoi(c.vu0, 3u, 10u, 9u, 0);
    c.budget -= 1;
L_00103390:
    st128((c.r[20].w[0]) & ~15u, c.vu0.vf[10]);
    set32(c.r[17], c.r[17].w[0] - 1u);
    set32(c.r[18], c.r[18].w[0] + 16u);
    c.budget -= 5;
    { const bool t = 0ull != c.r[17].d[0]; set32(c.r[20], c.r[20].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00103364u | kUnwind; return; } goto L_00103364; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_001033C8; } }
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 96u);  [[clang::musttail]] return unit_0003(c, 127u, depth); }
L_001033C8:
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001033E8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
L_00103400:
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00103414u); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x00103414u) [[unlikely]] return; }
L_00103414:
    ld128((c.r[18].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[18].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[18].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[18].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[17].w[0]) & ~15u, c.vu0.vf[8]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 9u, 7u, c.vu0.vf[8].w[3]);
    vu::div(c.vu0, c.vu0.vf[0].w[3], c.vu0.vf[9].w[3]);
    c.budget -= 10;
L_0010343C:
    vu::mulbc(c.vu0, 14u, 9u, 9u, c.vu0.q);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; vu::ftoi(c.vu0, 15u, 10u, 9u, 4);  if (t) { goto L_00103450; } }
    vu::ftoi(c.vu0, 3u, 10u, 9u, 0);
    c.budget -= 1;
L_00103450:
    st128((c.r[19].w[0]) & ~15u, c.vu0.vf[10]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00103474; } }
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 80u);  [[clang::musttail]] return unit_0003(c, 127u, depth); }
L_00103474:
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001034B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 64u), c.f[20]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001034DCu); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x001034DCu) [[unlikely]] return; }
L_001034DC:
    ld128((c.r[17].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[16].w[0]) & ~15u, c.vu0.vf[5]);
    set32(c.r[8], c.f[20]);
    c.vu0.vf[6] = c.r[8];
    vu::move(c.vu0, 1u, 9u, 4u);
    vu::addbc(c.vu0, 8u, 7u, 0u, c.vu0.vf[0].w[3]);
    vu::sub(c.vu0, 8u, 8u, 7u, 6u);
    vu::mulabc(c.vu0, 14u, 4u, c.vu0.vf[6].w[0]);
    vu::maddbc(c.vu0, 14u, 9u, 5u, c.vu0.vf[8].w[0]);
    st128((c.r[18].w[0]) & ~15u, c.vu0.vf[9]);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00103524; } }
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 64u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 80u);  [[clang::musttail]] return unit_0003(c, 127u, depth); }
L_00103524:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 64u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00103540:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 48u), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00103564u); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x00103564u) [[unlikely]] return; }
L_00103564:
    ld128((c.r[16].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[8], c.f[20]);
    c.vu0.vf[5] = c.r[8];
    vu::mulbc(c.vu0, 14u, 4u, 4u, c.vu0.vf[5].w[0]);
    st128((c.r[17].w[0]) & ~15u, c.vu0.vf[4]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00103594; } }
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 48u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 64u);  [[clang::musttail]] return unit_0003(c, 127u, depth); }
L_00103594:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 48u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001035A8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001035BCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x001035BCu) [[unlikely]] return; }
L_001035BC:
    vu::sub(c.vu0, 15u, 4u, 0u, 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] | 17792ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    ld128((c.r[16].w[0]) & ~15u, c.vu0.vf[7]);
    c.vu0.vf[6] = c.r[3];
    ctc2(c, 16u, 0u);
    vu::sub(c.vu0, 13u, 5u, 7u, 4u);
    vu::sub(c.vu0, 12u, 5u, 6u, 7u);
    set32(c.r[3], cfc2(c, 16u));
    c.r[3].d[0] = c.r[3].d[0] & 192ull;
    c.budget -= 19;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_00103610; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00103610u);  if (depth < kMaxDepth) unit_0003(c, 127u, depth + 1u); else { c.pc = 0x0010D378u; return; } if (c.pc != 0x00103610u) [[unlikely]] return; }
L_00103610:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00103628:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.budget -= 5;
L_0010363C:
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010364Cu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x0010364Cu) [[unlikely]] return; }
L_0010364C:
    vu::sub(c.vu0, 15u, 4u, 0u, 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] | 17792ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    ld128((c.r[18].w[0]) & ~15u, c.vu0.vf[6]);
    ld128((c.r[17].w[0]) & ~15u, c.vu0.vf[8]);
    ld128((c.r[16].w[0]) & ~15u, c.vu0.vf[9]);
    c.vu0.vf[7] = c.r[3];
    ctc2(c, 16u, 0u);
    vu::sub(c.vu0, 13u, 5u, 6u, 4u);
    vu::sub(c.vu0, 12u, 5u, 7u, 6u);
    vu::sub(c.vu0, 13u, 5u, 8u, 4u);
    vu::sub(c.vu0, 12u, 5u, 7u, 8u);
    vu::sub(c.vu0, 13u, 5u, 9u, 4u);
    vu::sub(c.vu0, 12u, 5u, 7u, 9u);
    set32(c.r[3], cfc2(c, 16u));
    c.r[3].d[0] = c.r[3].d[0] & 192ull;
    c.budget -= 25;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_001036B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001036B8u);  if (depth < kMaxDepth) unit_0003(c, 127u, depth + 1u); else { c.pc = 0x0010D378u; return; } if (c.pc != 0x001036B8u) [[unlikely]] return; }
L_001036B8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001036D8:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010370Cu); c.r[16].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x0010370Cu) [[unlikely]] return; }
L_0010370C:
    ld128((c.r[17].w[0]) & ~15u, c.vu0.vf[8]);
    ld128((c.r[18].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[18].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[18].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[18].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[20].w[0]) & ~15u, c.vu0.vf[9]);
    ld128((c.r[19].w[0]) & ~15u, c.vu0.vf[10]);
    ld128((c.r[20].w[0]) & ~15u, c.vu0.vf[11]);
    ld128((c.r[19].w[0]) & ~15u, c.vu0.vf[12]);
    c.budget -= 9;
L_00103730:
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 8u, 7u, c.vu0.vf[8].w[3]);
    vu::mulbc(c.vu0, 14u, 11u, 9u, c.vu0.vf[8].w[3]);
    vu::mulbc(c.vu0, 14u, 12u, 10u, c.vu0.vf[8].w[3]);
    ctc2(c, 16u, 0u);
    vu::sub(c.vu0, 13u, 11u, 8u, 11u);
    vu::sub(c.vu0, 13u, 12u, 12u, 8u);
    vu::move(c.vu0, 1u, 11u, 9u);
    vu::move(c.vu0, 1u, 12u, 10u);
    set32(c.r[17], c.r[17].w[0] + 16u);
    ld128((c.r[17].w[0]) & ~15u, c.vu0.vf[8]);
    set32(c.r[16], c.r[16].w[0] - 1u);
    set32(c.r[3], cfc2(c, 16u));
    c.r[3].d[0] = c.r[3].d[0] & 192ull;
    c.budget -= 21;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00103790; } }
    c.budget -= 2;
    { const bool t = 0ull != c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00103730u | kUnwind; return; } goto L_00103730; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00103790:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_001037A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001037A0u);  if (depth < kMaxDepth) unit_0003(c, 127u, depth + 1u); else { c.pc = 0x0010D378u; return; } if (c.pc != 0x001037A0u) [[unlikely]] return; }
L_001037A0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001037C8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001037D8u);  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x001037D8u) [[unlikely]] return; }
L_001037D8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 14384ull;
    c.r[4].d[0] = c.r[4].d[0] | 14368ull;
    st32((c.r[3].w[0]), 0u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[4].w[0]), 0u);
    c.r[5].d[0] = c.r[5].d[0] | 14352ull;
    set32(c.r[3], 0u + 1u);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[8], cfc2(c, 28u));
    c.r[8].d[0] = c.r[8].d[0] | 2ull;
    ctc2(c, 28u, c.r[8].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[5], c.r[5].w[0] - 24672u);
    c.r[6].d[0] = c.r[6].d[0] | 16384ull;
    ld128((c.r[5].w[0]) & ~15u, c.r[3]);
    st128((c.r[6].w[0]) & ~15u, c.r[3]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.r[4]);
    st128((c.r[6].w[0]) & ~15u, c.r[4]);
    c.budget -= 24;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00103840; } }
    c.budget -= 2;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0003(c, 127u, depth); }
L_00103840:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00103848:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010385Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x0010385Cu) [[unlikely]] return; }
L_0010385C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[6].d[0] = c.r[6].d[0] | 62752ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.r[7].d[0] = c.r[7].d[0] | 62864ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[8].d[0];
    c.budget -= 9;
L_00103880:
    c.r[4].d[0] = c.r[4].d[0] | 45056ull;
    st32((c.r[7].w[0]), c.r[3].w[0]);
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    st32((c.r[4].w[0]), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    st32((c.r[7].w[0]), c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001038B0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_0003(c, 127u, depth); }
L_001038B0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001038C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001038D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x001038D4u) [[unlikely]] return; }
L_001038D4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[6].d[0] = c.r[6].d[0] | 62752ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.r[7].d[0] = c.r[7].d[0] | 62864ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[8].d[0];
    c.r[4].d[0] = c.r[4].d[0] | 46080ull;
    st32((c.r[7].w[0]), c.r[3].w[0]);
    c.budget -= 11;
L_00103900:
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    st32((c.r[4].w[0]), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    st32((c.r[7].w[0]), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00103928; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_0003(c, 127u, depth); }
L_00103928:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00103938:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00103950u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0000(c, 335u, depth + 1u); else { c.pc = 0x001038C0u; return; } if (c.pc != 0x00103950u) [[unlikely]] return; }
L_00103950:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 46096ull;
    c.r[6].d[0] = c.r[6].d[0] | 46128ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].d[0] = c.r[4].d[0] | 46112ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[5].d[0] = c.r[5].d[0] | 46080ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.r[7].d[0] = c.r[7].d[0] | 8208ull;
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 18;
L_00103998:
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 240ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00103998u | kUnwind; return; } goto L_00103998; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001039BCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 332u, depth + 1u); else { c.pc = 0x00103848u; return; } if (c.pc != 0x001039BCu) [[unlikely]] return; }
L_001039BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 45072ull;
    c.r[7].d[0] = c.r[7].d[0] | 45088ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[5].d[0] = c.r[5].d[0] | 45056ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.r[6].d[0] = c.r[6].d[0] | 8224ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.r[4].d[0] = c.r[4].d[0] | 8208ull;
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0])));
    st32((c.r[16].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 24;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00103A20:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[2].w[0] >> 8);
    c.r[19].d[0] = c.r[2].d[0] & 127ull;
    set32(c.r[2], c.r[2].w[0] >> 16);
    c.r[3].d[0] = c.r[3].d[0] & 15ull;
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[18], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 21;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[17], c.r[5].w[0] - c.r[2].w[0]);  if (t) { goto L_00103AA4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_00103AA4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 45072ull;
    c.r[4].d[0] = c.r[4].d[0] | 45088ull;
    st32((c.r[2].w[0]), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00103AA4u); c.r[4].d[0] = c.r[4].d[0] | 256ull;  if (depth < kMaxDepth) unit_0000(c, 332u, depth + 1u); else { c.pc = 0x00103848u; return; } if (c.pc != 0x00103AA4u) [[unlikely]] return; }
L_00103AA4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 8208ull;
    c.budget -= 3;
L_00103AB0:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00103AB0u | kUnwind; return; } goto L_00103AB0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.r[3].d[0] = c.r[3].d[0] | 8208ull;
    st32((c.r[2].w[0]), c.r[19].w[0]);
    c.budget -= 5;
L_00103AE0:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00103AE0u | kUnwind; return; } goto L_00103AE0; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00103B58; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00103B5C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 46096ull;
    c.r[4].d[0] = c.r[4].d[0] | 46128ull;
    st32((c.r[2].w[0]), c.r[17].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 46112ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[3].w[0]), c.r[18].w[0]);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = c.r[4].d[0] | 256ull;
    c.budget -= 19;
    { set32(c.r[29], c.r[29].w[0] + 80u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001038C0u | kUnwind; return; } goto L_001038C0; }
L_00103B58:
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00103B5C:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00103B70:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00103B8C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_00103BBC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00103BD0; } }
L_00103B8C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 8208ull;
    c.budget -= 3;
L_00103B98:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00103B98u | kUnwind; return; } goto L_00103B98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00103BCC; } }
L_00103BBC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 8208ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] >> 31);
    c.budget -= 4;
L_00103BCC:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_00103BD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103BD8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00103BECu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x00103BECu) [[unlikely]] return; }
L_00103BEC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[6].d[0] = c.r[6].d[0] | 62752ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.budget -= 5;
L_00103C00:
    c.r[7].d[0] = c.r[7].d[0] | 62864ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[8].d[0];
    c.r[4].d[0] = c.r[4].d[0] | 46080ull;
    st32((c.r[7].w[0]), c.r[3].w[0]);
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    st32((c.r[4].w[0]), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    st32((c.r[7].w[0]), c.r[3].w[0]);
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00103C40; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_0003(c, 127u, depth); }
L_00103C3C:
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 1;
L_00103C40:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00103C50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00103C60u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0000(c, 348u, depth + 1u); else { c.pc = 0x00103BD8u; return; } if (c.pc != 0x00103C60u) [[unlikely]] return; }
L_00103C60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[2].d[0] | 8208ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | 8208ull;
    c.budget -= 6;
L_00103C78:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00103C78u | kUnwind; return; } goto L_00103C78; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.r[3].d[0] = c.r[3].d[0] | 8208ull;
    st32((c.r[2].w[0]), 0u);
    c.budget -= 5;
L_00103CA8:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00103CA8u | kUnwind; return; } goto L_00103CA8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[5], c.r[5].w[0] - 24624u);
    c.r[4].d[0] = c.r[4].d[0] | 28688ull;
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x50000000u);
    c.r[6].d[0] = c.r[6].d[0] | 8192ull;
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[8].d[0] = c.r[8].d[0] | 8208ull;
    ld128((c.r[5].w[0] + 16u) & ~15u, c.r[3]);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.r[2]);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    ld128((c.r[5].w[0] + 48u) & ~15u, c.r[3]);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    ld128((c.r[5].w[0] + 64u) & ~15u, c.r[2]);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    ld128((c.r[5].w[0] + 64u) & ~15u, c.r[3]);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    ld128((c.r[5].w[0] + 64u) & ~15u, c.r[2]);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    ld128((c.r[5].w[0] + 64u) & ~15u, c.r[3]);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    st32((c.r[6].w[0]), c.r[7].w[0]);
    c.budget -= 27;
L_00103D30:
    set32(c.r[2], ld32((c.r[8].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00103D30u | kUnwind; return; } goto L_00103D30; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x58000000u);
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | 8208ull;
    c.budget -= 7;
L_00103D68:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00103D68u | kUnwind; return; } goto L_00103D68; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[3], c.r[3].w[0] - 24544u);
    c.r[4].d[0] = c.r[4].d[0] | 28688ull;
    ld128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x60000000u);
    c.r[5].d[0] = c.r[5].d[0] | 8192ull;
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[7].d[0] = c.r[7].d[0] | 8208ull;
    ld128((c.r[3].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    st32((c.r[5].w[0]), c.r[6].w[0]);
    c.budget -= 15;
L_00103DC0:
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00103DC0u | kUnwind; return; } goto L_00103DC0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x90000000u);
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | 8208ull;
    c.budget -= 7;
L_00103DF8:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 2;
L_00103E00:
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00103DF8u | kUnwind; return; } goto L_00103DF8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[2].d[0] | 8208ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | 8208ull;
    c.budget -= 7;
L_00103E30:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
L_00103E3C:
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00103E30u | kUnwind; return; } goto L_00103E30; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.r[3].d[0] = c.r[3].d[0] | 8208ull;
    st32((c.r[2].w[0]), 0u);
    c.budget -= 5;
L_00103E60:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00103E60u | kUnwind; return; } goto L_00103E60; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00103EE0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
    c.pc = 0x00103EE8u; syscall(c, 0x00103EE4u); if (c.pc != 0x00103EE8u) return;
    c.budget -= 1;
L_00103EE8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103F00:
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
    c.pc = 0x00103F08u; syscall(c, 0x00103F04u); if (c.pc != 0x00103F08u) return;
    c.budget -= 1;
L_00103F08:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103F20:
    set32(c.r[3], 0u + 6u);
    c.budget -= 1;
    c.pc = 0x00103F28u; syscall(c, 0x00103F24u); if (c.pc != 0x00103F28u) return;
    c.budget -= 1;
L_00103F28:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103F80:
    set32(c.r[3], 0u + 12u);
    c.budget -= 1;
    c.pc = 0x00103F88u; syscall(c, 0x00103F84u); if (c.pc != 0x00103F88u) return;
    c.budget -= 1;
L_00103F88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103F90:
    set32(c.r[3], 0u + 13u);
    c.budget -= 1;
    c.pc = 0x00103F98u; syscall(c, 0x00103F94u); if (c.pc != 0x00103F98u) return;
    c.budget -= 1;
L_00103F98:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103FC0:
    set32(c.r[3], 0u + 16u);
    c.budget -= 1;
    c.pc = 0x00103FC8u; syscall(c, 0x00103FC4u); if (c.pc != 0x00103FC8u) return;
    c.budget -= 1;
L_00103FC8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103FD0:
    set32(c.r[3], 0u + 16u);
    c.budget -= 1;
    c.pc = 0x00103FD8u; syscall(c, 0x00103FD4u); if (c.pc != 0x00103FD8u) return;
    c.budget -= 1;
L_00103FD8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103FE0:
    set32(c.r[3], 0u + 17u);
    c.budget -= 1;
    c.pc = 0x00103FE8u; syscall(c, 0x00103FE4u); if (c.pc != 0x00103FE8u) return;
    c.budget -= 1;
L_00103FE8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103FF0:
    set32(c.r[3], 0u + 18u);
    c.budget -= 1;
    c.pc = 0x00103FF8u; syscall(c, 0x00103FF4u); if (c.pc != 0x00103FF8u) return;
    c.budget -= 1;
L_00103FF8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
}

}
