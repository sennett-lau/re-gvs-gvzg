#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_003F[4096] = {
    1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0,
    0, 0, 5, 0, 6, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 0, 0, 0,
    0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16,
    0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0,
    0, 0, 24, 0, 0, 0, 25, 0, 26, 0, 27, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 40, 0, 41, 0, 42, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0,
    46, 0, 47, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 53, 0, 54,
    0, 0, 0, 55, 0, 56, 0, 57, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 61, 0, 0, 0, 0, 0, 0,
    0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    73, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 76,
    0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0,
    83, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 88, 0, 0, 89, 0, 90, 0, 91, 0, 92, 0, 93, 0, 94, 0, 95, 0, 0, 0, 0, 0, 0,
    96, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0,
    0, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0,
    0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 115, 0, 0, 116, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 118, 0, 0, 0, 119, 0, 120, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0,
    124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133,
    0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 141, 0, 142,
    0, 143, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0,
    154, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 157, 0, 158, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0,
    161, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 167, 0, 0,
    0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 170, 0, 0, 171, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 174, 0, 0,
    175, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 0,
    188, 0, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0,
    194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0,
    0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 200, 0,
    0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0,
    0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0,
    0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0,
    0, 0, 213, 0, 214, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 217, 0, 218, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0,
    0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 225, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 230, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0,
    0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0,
    0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0,
    0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 261, 0, 0, 0, 262, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 268,
    0, 269, 0, 270, 0, 271, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 273, 0, 0, 0, 274, 0, 275, 0, 276, 0, 277, 0, 278, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0,
    0, 0, 281, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 288, 0,
    289, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 292, 0, 293, 0, 294, 0, 295, 0, 296, 0, 297, 0, 0, 0, 298, 0, 0, 0,
    299, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 303, 0, 304, 0, 305, 0, 0, 0, 306, 0, 307, 0, 308, 0, 0, 0, 309, 0, 310, 0, 311, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 314, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 317, 0, 318, 0, 319,
    0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322,
    0, 0, 0, 0, 0, 0, 323, 0, 324, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 0, 331, 0, 0, 332, 0, 0, 333, 0, 0, 0, 334, 0, 335, 0, 0,
    0, 336, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0,
    0, 0, 344, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 349, 0, 0, 0,
    0, 0, 0, 350, 0, 351, 0, 352, 0, 353, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 356,
    0, 0, 0, 0, 0, 0, 357, 0, 358, 0, 359, 0, 360, 0, 361, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0,
    0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 367, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0,
    0, 370, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0,
    0, 374, 0, 375, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 378, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0,
    0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 387, 0, 0, 388, 0, 0, 389, 0, 0, 0, 0,
    0, 0, 0, 0, 390, 0, 391, 0, 392, 0, 393, 0, 394, 0, 0, 0, 395, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0,
    0, 0, 0, 0, 398, 0, 399, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0,
};

void unit_003F(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001FC000;
    case 2u: goto L_001FC004;
    case 3u: goto L_001FC070;
    case 4u: goto L_001FC078;
    case 5u: goto L_001FC088;
    case 6u: goto L_001FC090;
    case 7u: goto L_001FC09C;
    case 8u: goto L_001FC0AC;
    case 9u: goto L_001FC0BC;
    case 10u: goto L_001FC0DC;
    case 11u: goto L_001FC0E8;
    case 12u: goto L_001FC104;
    case 13u: goto L_001FC174;
    case 14u: goto L_001FC1A0;
    case 15u: goto L_001FC1C0;
    case 16u: goto L_001FC1FC;
    case 17u: goto L_001FC20C;
    case 18u: goto L_001FC240;
    case 19u: goto L_001FC268;
    case 20u: goto L_001FC2B4;
    case 21u: goto L_001FC2D0;
    case 22u: goto L_001FC300;
    case 23u: goto L_001FC370;
    case 24u: goto L_001FC388;
    case 25u: goto L_001FC398;
    case 26u: goto L_001FC3A0;
    case 27u: goto L_001FC3A8;
    case 28u: goto L_001FC3B4;
    case 29u: goto L_001FC3C8;
    case 30u: goto L_001FC3D8;
    case 31u: goto L_001FC3E8;
    case 32u: goto L_001FC450;
    case 33u: goto L_001FC474;
    case 34u: goto L_001FC4A0;
    case 35u: goto L_001FC52C;
    case 36u: goto L_001FC544;
    case 37u: goto L_001FC558;
    case 38u: goto L_001FC5C8;
    case 39u: goto L_001FC5D8;
    case 40u: goto L_001FC5E0;
    case 41u: goto L_001FC5E8;
    case 42u: goto L_001FC5F0;
    case 43u: goto L_001FC620;
    case 44u: goto L_001FC668;
    case 45u: goto L_001FC678;
    case 46u: goto L_001FC680;
    case 47u: goto L_001FC688;
    case 48u: goto L_001FC690;
    case 49u: goto L_001FC6D0;
    case 50u: goto L_001FC6E0;
    case 51u: goto L_001FC73C;
    case 52u: goto L_001FC76C;
    case 53u: goto L_001FC774;
    case 54u: goto L_001FC77C;
    case 55u: goto L_001FC78C;
    case 56u: goto L_001FC794;
    case 57u: goto L_001FC79C;
    case 58u: goto L_001FC7B8;
    case 59u: goto L_001FC7CC;
    case 60u: goto L_001FC7DC;
    case 61u: goto L_001FC7E4;
    case 62u: goto L_001FC808;
    case 63u: goto L_001FC828;
    case 64u: goto L_001FC848;
    case 65u: goto L_001FC94C;
    case 66u: goto L_001FC964;
    case 67u: goto L_001FC9B0;
    case 68u: goto L_001FC9C8;
    case 69u: goto L_001FC9D0;
    case 70u: goto L_001FCA00;
    case 71u: goto L_001FCA30;
    case 72u: goto L_001FCA44;
    case 73u: goto L_001FCA80;
    case 74u: goto L_001FCA98;
    case 75u: goto L_001FCAE0;
    case 76u: goto L_001FCAFC;
    case 77u: goto L_001FCB20;
    case 78u: goto L_001FCCB0;
    case 79u: goto L_001FCCD0;
    case 80u: goto L_001FCCFC;
    case 81u: goto L_001FCD48;
    case 82u: goto L_001FCD60;
    case 83u: goto L_001FCD80;
    case 84u: goto L_001FCDA0;
    case 85u: goto L_001FCE2C;
    case 86u: goto L_001FCE88;
    case 87u: goto L_001FCE9C;
    case 88u: goto L_001FCEA8;
    case 89u: goto L_001FCEB4;
    case 90u: goto L_001FCEBC;
    case 91u: goto L_001FCEC4;
    case 92u: goto L_001FCECC;
    case 93u: goto L_001FCED4;
    case 94u: goto L_001FCEDC;
    case 95u: goto L_001FCEE4;
    case 96u: goto L_001FCF00;
    case 97u: goto L_001FCF14;
    case 98u: goto L_001FCF24;
    case 99u: goto L_001FCF30;
    case 100u: goto L_001FCF50;
    case 101u: goto L_001FCF70;
    case 102u: goto L_001FD020;
    case 103u: goto L_001FD048;
    case 104u: goto L_001FD0C4;
    case 105u: goto L_001FD0D8;
    case 106u: goto L_001FD0F0;
    case 107u: goto L_001FD110;
    case 108u: goto L_001FD120;
    case 109u: goto L_001FD160;
    case 110u: goto L_001FD174;
    case 111u: goto L_001FD190;
    case 112u: goto L_001FD1B0;
    case 113u: goto L_001FD1BC;
    case 114u: goto L_001FD228;
    case 115u: goto L_001FD230;
    case 116u: goto L_001FD23C;
    case 117u: goto L_001FD244;
    case 118u: goto L_001FD28C;
    case 119u: goto L_001FD29C;
    case 120u: goto L_001FD2A4;
    case 121u: goto L_001FD2AC;
    case 122u: goto L_001FD2E0;
    case 123u: goto L_001FD2F0;
    case 124u: goto L_001FD300;
    case 125u: goto L_001FD338;
    case 126u: goto L_001FD3A8;
    case 127u: goto L_001FD3B4;
    case 128u: goto L_001FD3E0;
    case 129u: goto L_001FD418;
    case 130u: goto L_001FD488;
    case 131u: goto L_001FD4B0;
    case 132u: goto L_001FD4E0;
    case 133u: goto L_001FD57C;
    case 134u: goto L_001FD598;
    case 135u: goto L_001FD5A8;
    case 136u: goto L_001FD5C4;
    case 137u: goto L_001FD5D0;
    case 138u: goto L_001FD620;
    case 139u: goto L_001FD628;
    case 140u: goto L_001FD668;
    case 141u: goto L_001FD674;
    case 142u: goto L_001FD67C;
    case 143u: goto L_001FD684;
    case 144u: goto L_001FD68C;
    case 145u: goto L_001FD6B0;
    case 146u: goto L_001FD6F0;
    case 147u: goto L_001FD738;
    case 148u: goto L_001FD750;
    case 149u: goto L_001FD768;
    case 150u: goto L_001FD790;
    case 151u: goto L_001FD7A8;
    case 152u: goto L_001FD7C0;
    case 153u: goto L_001FD7E8;
    case 154u: goto L_001FD800;
    case 155u: goto L_001FD818;
    case 156u: goto L_001FD830;
    case 157u: goto L_001FD838;
    case 158u: goto L_001FD840;
    case 159u: goto L_001FD848;
    case 160u: goto L_001FD870;
    case 161u: goto L_001FD880;
    case 162u: goto L_001FD890;
    case 163u: goto L_001FD928;
    case 164u: goto L_001FD9B4;
    case 165u: goto L_001FD9CC;
    case 166u: goto L_001FDB68;
    case 167u: goto L_001FDB74;
    case 168u: goto L_001FDB90;
    case 169u: goto L_001FDBA0;
    case 170u: goto L_001FDBAC;
    case 171u: goto L_001FDBB8;
    case 172u: goto L_001FDBC4;
    case 173u: goto L_001FDBE8;
    case 174u: goto L_001FDBF4;
    case 175u: goto L_001FDC00;
    case 176u: goto L_001FDC18;
    case 177u: goto L_001FDC2C;
    case 178u: goto L_001FDC70;
    case 179u: goto L_001FDC98;
    case 180u: goto L_001FDCB0;
    case 181u: goto L_001FDD60;
    case 182u: goto L_001FDD88;
    case 183u: goto L_001FDF30;
    case 184u: goto L_001FDF54;
    case 185u: goto L_001FDFC0;
    case 186u: goto L_001FDFD8;
    case 187u: goto L_001FDFF0;
    case 188u: goto L_001FE000;
    case 189u: goto L_001FE018;
    case 190u: goto L_001FE028;
    case 191u: goto L_001FE090;
    case 192u: goto L_001FE0A8;
    case 193u: goto L_001FE0E0;
    case 194u: goto L_001FE100;
    case 195u: goto L_001FE164;
    case 196u: goto L_001FE184;
    case 197u: goto L_001FE1A8;
    case 198u: goto L_001FE1CC;
    case 199u: goto L_001FE1F0;
    case 200u: goto L_001FE1F8;
    case 201u: goto L_001FE204;
    case 202u: goto L_001FE23C;
    case 203u: goto L_001FE270;
    case 204u: goto L_001FE290;
    case 205u: goto L_001FE2AC;
    case 206u: goto L_001FE2C0;
    case 207u: goto L_001FE2D0;
    case 208u: goto L_001FE324;
    case 209u: goto L_001FE348;
    case 210u: goto L_001FE370;
    case 211u: goto L_001FE390;
    case 212u: goto L_001FE3E8;
    case 213u: goto L_001FE408;
    case 214u: goto L_001FE410;
    case 215u: goto L_001FE418;
    case 216u: goto L_001FE45C;
    case 217u: goto L_001FE464;
    case 218u: goto L_001FE46C;
    case 219u: goto L_001FE4B0;
    case 220u: goto L_001FE524;
    case 221u: goto L_001FE564;
    case 222u: goto L_001FE588;
    case 223u: goto L_001FE5B8;
    case 224u: goto L_001FE5E8;
    case 225u: goto L_001FE5F0;
    case 226u: goto L_001FE664;
    case 227u: goto L_001FE674;
    case 228u: goto L_001FE710;
    case 229u: goto L_001FE738;
    case 230u: goto L_001FE750;
    case 231u: goto L_001FE758;
    case 232u: goto L_001FE7CC;
    case 233u: goto L_001FE7DC;
    case 234u: goto L_001FE85C;
    case 235u: goto L_001FE86C;
    case 236u: goto L_001FE894;
    case 237u: goto L_001FE8B0;
    case 238u: goto L_001FE8C8;
    case 239u: goto L_001FE904;
    case 240u: goto L_001FE928;
    case 241u: goto L_001FE950;
    case 242u: goto L_001FE970;
    case 243u: goto L_001FE9AC;
    case 244u: goto L_001FE9C0;
    case 245u: goto L_001FE9E8;
    case 246u: goto L_001FEA04;
    case 247u: goto L_001FEA14;
    case 248u: goto L_001FEA3C;
    case 249u: goto L_001FEA98;
    case 250u: goto L_001FEABC;
    case 251u: goto L_001FEAE8;
    case 252u: goto L_001FEB08;
    case 253u: goto L_001FEB28;
    case 254u: goto L_001FEB5C;
    case 255u: goto L_001FEB90;
    case 256u: goto L_001FEBC4;
    case 257u: goto L_001FEC1C;
    case 258u: goto L_001FEC40;
    case 259u: goto L_001FEC68;
    case 260u: goto L_001FEC88;
    case 261u: goto L_001FED04;
    case 262u: goto L_001FED14;
    case 263u: goto L_001FED1C;
    case 264u: goto L_001FED40;
    case 265u: goto L_001FED50;
    case 266u: goto L_001FED60;
    case 267u: goto L_001FEDEC;
    case 268u: goto L_001FEDFC;
    case 269u: goto L_001FEE04;
    case 270u: goto L_001FEE0C;
    case 271u: goto L_001FEE14;
    case 272u: goto L_001FEE30;
    case 273u: goto L_001FEE8C;
    case 274u: goto L_001FEE9C;
    case 275u: goto L_001FEEA4;
    case 276u: goto L_001FEEAC;
    case 277u: goto L_001FEEB4;
    case 278u: goto L_001FEEBC;
    case 279u: goto L_001FEED0;
    case 280u: goto L_001FEEF4;
    case 281u: goto L_001FEF08;
    case 282u: goto L_001FEF18;
    case 283u: goto L_001FEF70;
    case 284u: goto L_001FEFB4;
    case 285u: goto L_001FEFD0;
    case 286u: goto L_001FF010;
    case 287u: goto L_001FF0E0;
    case 288u: goto L_001FF0F8;
    case 289u: goto L_001FF100;
    case 290u: goto L_001FF10C;
    case 291u: goto L_001FF130;
    case 292u: goto L_001FF138;
    case 293u: goto L_001FF140;
    case 294u: goto L_001FF148;
    case 295u: goto L_001FF150;
    case 296u: goto L_001FF158;
    case 297u: goto L_001FF160;
    case 298u: goto L_001FF170;
    case 299u: goto L_001FF180;
    case 300u: goto L_001FF190;
    case 301u: goto L_001FF1B0;
    case 302u: goto L_001FF210;
    case 303u: goto L_001FF29C;
    case 304u: goto L_001FF2A4;
    case 305u: goto L_001FF2AC;
    case 306u: goto L_001FF2BC;
    case 307u: goto L_001FF2C4;
    case 308u: goto L_001FF2CC;
    case 309u: goto L_001FF2DC;
    case 310u: goto L_001FF2E4;
    case 311u: goto L_001FF2EC;
    case 312u: goto L_001FF330;
    case 313u: goto L_001FF3A0;
    case 314u: goto L_001FF3AC;
    case 315u: goto L_001FF3BC;
    case 316u: goto L_001FF3E4;
    case 317u: goto L_001FF3EC;
    case 318u: goto L_001FF3F4;
    case 319u: goto L_001FF3FC;
    case 320u: goto L_001FF40C;
    case 321u: goto L_001FF430;
    case 322u: goto L_001FF47C;
    case 323u: goto L_001FF498;
    case 324u: goto L_001FF4A0;
    case 325u: goto L_001FF4AC;
    case 326u: goto L_001FF550;
    case 327u: goto L_001FF5D0;
    case 328u: goto L_001FF5E0;
    case 329u: goto L_001FF624;
    case 330u: goto L_001FF634;
    case 331u: goto L_001FF644;
    case 332u: goto L_001FF650;
    case 333u: goto L_001FF65C;
    case 334u: goto L_001FF66C;
    case 335u: goto L_001FF674;
    case 336u: goto L_001FF684;
    case 337u: goto L_001FF68C;
    case 338u: goto L_001FF6E0;
    case 339u: goto L_001FF720;
    case 340u: goto L_001FF740;
    case 341u: goto L_001FF76C;
    case 342u: goto L_001FF7C0;
    case 343u: goto L_001FF7E8;
    case 344u: goto L_001FF808;
    case 345u: goto L_001FF820;
    case 346u: goto L_001FF840;
    case 347u: goto L_001FF8AC;
    case 348u: goto L_001FF8E8;
    case 349u: goto L_001FF8F0;
    case 350u: goto L_001FF90C;
    case 351u: goto L_001FF914;
    case 352u: goto L_001FF91C;
    case 353u: goto L_001FF924;
    case 354u: goto L_001FF938;
    case 355u: goto L_001FF974;
    case 356u: goto L_001FF97C;
    case 357u: goto L_001FF998;
    case 358u: goto L_001FF9A0;
    case 359u: goto L_001FF9A8;
    case 360u: goto L_001FF9B0;
    case 361u: goto L_001FF9B8;
    case 362u: goto L_001FF9D4;
    case 363u: goto L_001FF9F4;
    case 364u: goto L_001FFA10;
    case 365u: goto L_001FFA90;
    case 366u: goto L_001FFAE4;
    case 367u: goto L_001FFAF8;
    case 368u: goto L_001FFB54;
    case 369u: goto L_001FFB68;
    case 370u: goto L_001FFB84;
    case 371u: goto L_001FFBA4;
    case 372u: goto L_001FFBB0;
    case 373u: goto L_001FFBF4;
    case 374u: goto L_001FFC04;
    case 375u: goto L_001FFC0C;
    case 376u: goto L_001FFC14;
    case 377u: goto L_001FFC40;
    case 378u: goto L_001FFC50;
    case 379u: goto L_001FFC60;
    case 380u: goto L_001FFC88;
    case 381u: goto L_001FFCD4;
    case 382u: goto L_001FFCF0;
    case 383u: goto L_001FFD10;
    case 384u: goto L_001FFD2C;
    case 385u: goto L_001FFD9C;
    case 386u: goto L_001FFDBC;
    case 387u: goto L_001FFDD4;
    case 388u: goto L_001FFDE0;
    case 389u: goto L_001FFDEC;
    case 390u: goto L_001FFE10;
    case 391u: goto L_001FFE18;
    case 392u: goto L_001FFE20;
    case 393u: goto L_001FFE28;
    case 394u: goto L_001FFE30;
    case 395u: goto L_001FFE40;
    case 396u: goto L_001FFE50;
    case 397u: goto L_001FFE70;
    case 398u: goto L_001FFE90;
    case 399u: goto L_001FFE98;
    case 400u: goto L_001FFEA0;
    case 401u: goto L_001FFECC;
    case 402u: goto L_001FFF38;
    case 403u: goto L_001FFF50;
    case 404u: goto L_001FFF9C;
    case 405u: goto L_001FFFB4;
    case 406u: goto L_001FFFC8;
    case 407u: goto L_001FFFF4;
    default: bad_entry(c, 0x001FC000u); return;
    }
L_001FC000:
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_001FC004:
    set32(c.r[3], ld32((c.r[17].w[0] + 504u)));
    set32(c.r[16], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 20u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 40u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001FC048; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001FC048; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001FC060; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001FC060; } }
L_001FC048:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 512u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 504u), 0u);  if (t) { goto L_001FC1A0; } }
    c.budget -= 1;
L_001FC060:
    set32(c.r[2], ld32((c.r[17].w[0] + 504u)));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC070u); set32(c.r[5], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001FC070u) [[unlikely]] return; }
L_001FC070:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC078u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001FC078u) [[unlikely]] return; }
L_001FC078:
    c.f[13] = ld32((c.r[29].w[0] + 84u));
    c.f[14] = ld32((c.r[29].w[0] + 88u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC088u); c.f[12] = ld32((c.r[29].w[0] + 80u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001FC088u) [[unlikely]] return; }
L_001FC088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC090u); set32(c.r[4], c.r[17].w[0] + 368u);  if (depth < kMaxDepth) unit_0009(c, 182u, depth + 1u); else { c.pc = 0x001268B0u; return; } if (c.pc != 0x001FC090u) [[unlikely]] return; }
L_001FC090:
    set32(c.r[4], c.r[16].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC09Cu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001FC09Cu) [[unlikely]] return; }
L_001FC09C:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 42u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC0ACu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_003B(c, 241u, depth + 1u); else { c.pc = 0x001EEA30u; return; } if (c.pc != 0x001FC0ACu) [[unlikely]] return; }
L_001FC0AC:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC0BCu); set32(c.r[6], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001FC0BCu) [[unlikely]] return; }
L_001FC0BC:
    set32(c.r[2], c.r[29].w[0] + 68u);
    c.f[21] = ld32((c.r[2].w[0]));
    st32((c.r[2].w[0]), 0u);
    c.f[0] = ld32((c.r[17].w[0] + 48u));
    c.f[1] = ld32((c.r[17].w[0] + 56u));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC0DCu); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001FC0DCu) [[unlikely]] return; }
L_001FC0DC:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC0E8u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 211u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x001FC0E8u) [[unlikely]] return; }
L_001FC0E8:
    fpu_div(c, 12u, c.f[0], c.f[20]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC104u);  if (depth < kMaxDepth) unit_0009(c, 162u, depth + 1u); else { c.pc = 0x00126120u; return; } if (c.pc != 0x001FC104u) [[unlikely]] return; }
L_001FC104:
    c.f[3] = ld32((c.r[17].w[0] + 52u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = fp::mul(c.f[0], c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    c.f[0] = fp::sub(c.f[0], c.f[21]);
    c.f[2] = c.r[2].w[0];
    c.f[4] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    fpu_div(c, 1u, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[4]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001FC148; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = c.f[4];  if (t) { goto L_001FC160; } }
    c.budget -= 1;
L_001FC148:
    c.f[0] = ld32((c.r[16].w[0] + 56u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001FC160; } }
    c.f[1] = c.f[0];
    c.budget -= 2;
L_001FC160:
    c.f[0] = ld32((c.r[17].w[0] + 68u));
    c.f[20] = ld32((c.r[16].w[0] + 60u));
    c.f[21] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC174u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x001FC174u) [[unlikely]] return; }
L_001FC174:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001FC190; } }
    fpu_div(c, 0u, c.f[0], c.f[21]);
    c.f[21] = fp::mul(c.f[20], c.f[0]);
    c.budget -= 4;
L_001FC190:
    c.f[0] = ld32((c.r[17].w[0] + 68u));
    c.f[0] = fp::add(c.f[0], c.f[21]);
    st32((c.r[17].w[0] + 68u), c.f[0]);
    c.budget -= 4;
L_001FC1A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001FC1C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[17], ld32((c.r[4].w[0] + 504u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.r[16].d[0] = c.r[17].d[0] ^ 0ull;
    c.r[16].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[16].d[0] != 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001FC220; } }
    c.f[12] = ld32((c.r[2].w[0] + 44u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC1FCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 244u, depth + 1u); else { c.pc = 0x001FA4C0u; return; } if (c.pc != 0x001FC1FCu) [[unlikely]] return; }
L_001FC1FC:
    set32(c.r[4], c.r[17].w[0] + 64u);
    set32(c.r[5], c.r[18].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC20Cu); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x001FC20Cu) [[unlikely]] return; }
L_001FC20C:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_001FC21C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001FC21C:
    c.r[16].d[0] = c.r[16].d[0] | c.r[2].d[0];
    c.budget -= 1;
L_001FC220:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001FC240:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC268u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x001FC268u) [[unlikely]] return; }
L_001FC268:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001FC2B8; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[7], 0u + 17u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] - 15664u);
    set32(c.r[2], c.r[2].w[0] - 14624u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[5].w[0] + 28u), c.r[17].w[0]);
    st32((c.r[5].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC2B4u); st32((c.r[5].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006B(c, 31u, depth + 1u); else { c.pc = 0x002AC5D0u; return; } if (c.pc != 0x001FC2B4u) [[unlikely]] return; }
L_001FC2B4:
    c.budget -= 1;
L_001FC2B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FC2D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 28096u);
    set32(c.r[5], c.r[4].w[0] + 304u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001FC000u < 16384u) { entry = entries_003F[(t - 0x001FC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001FC300:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[3].d[0] = 0ull | 58368ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[7], c.r[7].w[0] - 28416u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[2], 0u - 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], 0u + 16384u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[8].d[0] = ld8((c.r[4].w[0] + 3u));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[8], c.r[8].w[0] << 5);
    st16((c.r[4].w[0] + 562u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[16], c.r[7].w[0] + c.r[8].w[0]);
    st16((c.r[4].w[0] + 566u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 560u), static_cast<std::uint16_t>(0u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2u)));
    c.budget -= 25;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001FC370; } }
    c.r[6].d[0] = c.r[3].d[0] & 127ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC370u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x001FC370u) [[unlikely]] return; }
L_001FC370:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC388u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001FC388u) [[unlikely]] return; }
L_001FC388:
    c.f[13] = ld32((c.r[16].w[0] + 20u));
    c.f[14] = ld32((c.r[16].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC398u); c.f[12] = ld32((c.r[16].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001FC398u) [[unlikely]] return; }
L_001FC398:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC3A0u); set32(c.r[4], c.r[20].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 198u, depth + 1u); else { c.pc = 0x001271B0u; return; } if (c.pc != 0x001FC3A0u) [[unlikely]] return; }
L_001FC3A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC3A8u); set32(c.r[4], c.r[20].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001FC3A8u) [[unlikely]] return; }
L_001FC3A8:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC3B4u); st16((c.r[20].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001FC3B4u) [[unlikely]] return; }
L_001FC3B4:
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC3C8u); st16((c.r[20].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003F(c, 67u, depth + 1u); else { c.pc = 0x001FC9B0u; return; } if (c.pc != 0x001FC3C8u) [[unlikely]] return; }
L_001FC3C8:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[16].w[0] - 28128u);
    c.budget -= 4;
L_001FC3D8:
    c.r[5].d[0] = c.r[17].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC3E8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 73u, depth + 1u); else { c.pc = 0x001FCA80u; return; } if (c.pc != 0x001FC3E8u) [[unlikely]] return; }
L_001FC3E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001FC458; } }
    st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 2u);
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[18].w[0] + 8u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.budget -= 22;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; st32((c.r[18].w[0] + 12u), c.f[0]);  if (t) { goto L_001FC458; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC450u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001FC450u) [[unlikely]] return; }
L_001FC450:
    st8((c.r[18].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001FC458:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FC3D8u | kUnwind; return; } goto L_001FC3D8; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC474u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 34u, depth + 1u); else { c.pc = 0x001FC4A0u; return; } if (c.pc != 0x001FC474u) [[unlikely]] return; }
L_001FC474:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001FC4A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] - 28416u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 3u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] << 5);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 19;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[3].w[0] + c.r[5].w[0]);  if (t) { goto L_001FC508; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001FC5B0; } }
    c.budget -= 1;
L_001FC508:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 166u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[19].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001FC5B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC52Cu);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001FC52Cu) [[unlikely]] return; }
L_001FC52C:
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC544u); st16((c.r[19].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003F(c, 73u, depth + 1u); else { c.pc = 0x001FCA80u; return; } if (c.pc != 0x001FC544u) [[unlikely]] return; }
L_001FC544:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001FC5B0; } }
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC558u); st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001FC558u) [[unlikely]] return; }
L_001FC558:
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[2], ld32((c.r[1].w[0] - 28120u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[2], ld32((c.r[1].w[0] - 28120u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.budget -= 22;
L_001FC5B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC5C8u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001FC5C8u) [[unlikely]] return; }
L_001FC5C8:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC5D8u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001FC5D8u) [[unlikely]] return; }
L_001FC5D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC5E0u); set32(c.r[4], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 198u, depth + 1u); else { c.pc = 0x001271B0u; return; } if (c.pc != 0x001FC5E0u) [[unlikely]] return; }
L_001FC5E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC5E8u); set32(c.r[4], c.r[19].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001FC5E8u) [[unlikely]] return; }
L_001FC5E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC5F0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 70u, depth + 1u); else { c.pc = 0x001FCA00u; return; } if (c.pc != 0x001FC5F0u) [[unlikely]] return; }
L_001FC5F0:
    set32(c.r[3], 0u + 1u);
    st8((c.r[19].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001FC620:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] - 28416u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 3u));
    set32(c.r[4], c.r[5].w[0] << 5);
    set32(c.r[18], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC668u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001FC668u) [[unlikely]] return; }
L_001FC668:
    c.f[13] = ld32((c.r[18].w[0] + 20u));
    c.f[14] = ld32((c.r[18].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC678u); c.f[12] = ld32((c.r[18].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001FC678u) [[unlikely]] return; }
L_001FC678:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC680u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 198u, depth + 1u); else { c.pc = 0x001271B0u; return; } if (c.pc != 0x001FC680u) [[unlikely]] return; }
L_001FC680:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC688u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001FC688u) [[unlikely]] return; }
L_001FC688:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC690u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 70u, depth + 1u); else { c.pc = 0x001FCA00u; return; } if (c.pc != 0x001FC690u) [[unlikely]] return; }
L_001FC690:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001FC6A8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001FC6B0; } }
L_001FC6A8:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001FC6B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001FC6D0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_001FC6E0:
    set32(c.r[29], c.r[29].w[0] - 304u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    set32(c.r[2], c.r[29].w[0] + 160u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[4], 0u + 2u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[19], c.r[20].w[0] + 304u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[1].w[0] + 20288u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20244u), c.r[2].w[0]);
    set32(c.r[2], c.r[28].w[0] - 32512u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC73Cu); st32((c.r[1].w[0] + 20260u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0048(c, 23u, depth + 1u); else { c.pc = 0x00220380u; return; } if (c.pc != 0x001FC73Cu) [[unlikely]] return; }
L_001FC73C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20276u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20280u), c.r[2].w[0]);
    set32(c.r[2], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st16((c.r[1].w[0] + 20284u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC76Cu); st8((c.r[1].w[0] + 20293u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001FC76Cu) [[unlikely]] return; }
L_001FC76C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC774u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001FC774u) [[unlikely]] return; }
L_001FC774:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC77Cu);  if (depth < kMaxDepth) unit_0009(c, 176u, depth + 1u); else { c.pc = 0x00126670u; return; } if (c.pc != 0x001FC77Cu) [[unlikely]] return; }
L_001FC77C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC78Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 225u, depth + 1u); else { c.pc = 0x00102370u; return; } if (c.pc != 0x001FC78Cu) [[unlikely]] return; }
L_001FC78C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC794u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 179u, depth + 1u); else { c.pc = 0x00126810u; return; } if (c.pc != 0x001FC794u) [[unlikely]] return; }
L_001FC794:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC79Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001FC79Cu) [[unlikely]] return; }
L_001FC79C:
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[29].w[0] + 288u);
    set32(c.r[16], c.r[29].w[0] + 292u);
    set32(c.r[21], c.r[29].w[0] + 164u);
    set32(c.r[22], c.r[29].w[0] + 296u);
    set32(c.r[23], c.r[29].w[0] + 168u);
    set32(c.r[30], c.r[29].w[0] + 172u);
    c.budget -= 7;
L_001FC7B8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_001FC968; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC7CCu);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001FC7CCu) [[unlikely]] return; }
L_001FC7CC:
    c.f[13] = ld32((c.r[20].w[0] + 36u));
    c.f[14] = ld32((c.r[20].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC7DCu); c.f[12] = ld32((c.r[20].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001FC7DCu) [[unlikely]] return; }
L_001FC7DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC7E4u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 182u, depth + 1u); else { c.pc = 0x001268B0u; return; } if (c.pc != 0x001FC7E4u) [[unlikely]] return; }
L_001FC7E4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.f[12] = 0u;
    set32(c.r[2], c.r[2].w[0] - 27920u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[14] = ld32((c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC808u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001FC808u) [[unlikely]] return; }
L_001FC808:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001FC838; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] << 8);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC828u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 143u, depth + 1u); else { c.pc = 0x00125E30u; return; } if (c.pc != 0x001FC828u) [[unlikely]] return; }
L_001FC828:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 20268u), c.f[0]);  if (t) { goto L_001FC840; } }
    c.budget -= 1;
L_001FC838:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20268u), 0u);
    c.budget -= 2;
L_001FC840:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC848u); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001FC848u) [[unlikely]] return; }
L_001FC848:
    c.f[1] = ld32((c.r[17].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.f[2] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    st32((c.r[29].w[0] + 160u), c.f[1]);
    c.f[1] = ld32((c.r[16].w[0]));
    st32((c.r[21].w[0]), c.f[1]);
    c.f[1] = ld32((c.r[22].w[0]));
    st32((c.r[23].w[0]), c.f[1]);
    st32((c.r[30].w[0]), c.r[4].w[0]);
    c.f[1] = ld32((c.r[19].w[0] + 8u));
    st32((c.r[1].w[0] + 20224u), c.f[1]);
    c.f[1] = ld32((c.r[19].w[0] + 12u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20228u), c.f[1]);
    c.f[1] = ld32((c.r[19].w[0] + 4u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 24;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001FC8B8; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 32509u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001FC8D4; } }
L_001FC8B8:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st8((c.r[28].w[0] - 32509u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_001FC8D4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], c.r[4].w[0] - 28080u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[3].w[0] - 27952u);
    set32(c.r[2], c.r[2].w[0] - 28016u);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[1].w[0] + 20256u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[1].w[0] + 20272u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[1].w[0] + 20252u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 24;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_001FC940; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001FC958; } }
    c.budget -= 1;
L_001FC940:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC94Cu); set32(c.r[4], c.r[4].w[0] + 20224u);  if (depth < kMaxDepth) unit_0067(c, 15u, depth + 1u); else { c.pc = 0x0029C3B0u; return; } if (c.pc != 0x001FC94Cu) [[unlikely]] return; }
L_001FC94C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FC968; } }
    c.budget -= 1;
L_001FC958:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC964u); set32(c.r[4], c.r[4].w[0] + 20224u);  if (depth < kMaxDepth) unit_0067(c, 3u, depth + 1u); else { c.pc = 0x0029C020u; return; } if (c.pc != 0x001FC964u) [[unlikely]] return; }
L_001FC964:
    c.budget -= 1;
L_001FC968:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FC7B8u | kUnwind; return; } goto L_001FC7B8; } }
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 304u);  c.pc = t; return; }
L_001FC9B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
L_001FC9C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC9D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 75u, depth + 1u); else { c.pc = 0x001FCAE0u; return; } if (c.pc != 0x001FC9D0u) [[unlikely]] return; }
L_001FC9D0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 16u);
    c.r[3].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FC9C8u | kUnwind; return; } goto L_001FC9C8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FCA00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[1].d[0] = c.r[18].sd[0] < 8ll ? 1ull : 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001FCA58; } }
    set32(c.r[2], c.r[18].w[0] << 4);
    set32(c.r[16], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 3;
L_001FCA30:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001FCA48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCA44u);  if (depth < kMaxDepth) unit_003F(c, 77u, depth + 1u); else { c.pc = 0x001FCB20u; return; } if (c.pc != 0x001FCA44u) [[unlikely]] return; }
L_001FCA44:
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_001FCA48:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FCA30u | kUnwind; return; } goto L_001FCA30; } }
L_001FCA58:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001FCA80:
    c.r[3].d[0] = c.r[5].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001FCAD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_001FCAB8; } }
L_001FCA98:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_001FCAB0; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
L_001FCAB0:
    set32(c.r[4], c.r[4].w[0] + 16u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 2;
L_001FCAB8:
    c.r[1].d[0] = c.r[6].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001FCAD0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FCA98u | kUnwind; return; } goto L_001FCA98; } }
    c.budget -= 1;
L_001FCAD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001FCAE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], 0u + 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCAFCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x001FCAFCu) [[unlikely]] return; }
L_001FCAFC:
    set32(c.r[3], 0u - 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001FCB20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[6], c.r[6].w[0] - 28128u);
    set32(c.r[5], c.r[5].w[0] - 28112u);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[2], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[9], ld32((c.r[2].w[0])));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 2u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[6], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[9].w[0] + c.r[2].w[0]);
    c.f[4] = ld32((c.r[5].w[0]));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[4]));
    c.budget -= 28;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], c.r[3].w[0] << 1);  if (t) { goto L_001FCC30; } }
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[9].w[0] + c.r[2].w[0]);
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[3] = ld32((c.r[5].w[0] + 4u));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.f[1] = fp::sub(c.f[4], c.f[1]);
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.f[4] = ld32((c.r[5].w[0] + 8u));
    c.f[3] = ld32((c.r[2].w[0] + 8u));
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    c.f[3] = fp::sub(c.f[4], c.f[3]);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_div(c, 1u, c.f[3], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1u));
    c.budget -= 25;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_001FCC00; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001FCC1C; } }
L_001FCC00:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_001FCC1C:
    c.f[0] = ld32((c.r[5].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001FCC30; } }
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 1;
L_001FCC30:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[6].d[0] = c.r[8].d[0] << 48;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.r[1].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = c.r[7].d[0] << 48;  if (t) { goto L_001FCC70; } }
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[3], c.r[5].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[5].w[0] - c.r[6].w[0]);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.budget -= 10;
L_001FCC70:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[2].d[0] = c.r[7].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001FCCA8; } }
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_001FCCA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FCCB8; } }
L_001FCCA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCCB0u);  if (depth < kMaxDepth) unit_003F(c, 75u, depth + 1u); else { c.pc = 0x001FCAE0u; return; } if (c.pc != 0x001FCCB0u) [[unlikely]] return; }
L_001FCCB0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001FCCB8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001FCCD0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCCFCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x001FCCFCu) [[unlikely]] return; }
L_001FCCFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001FCD68; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], 0u + 17u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 5u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00200000u);
    st32((c.r[16].w[0] + 24u), c.r[18].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00210000u);
    set32(c.r[3], c.r[3].w[0] - 12928u);
    st32((c.r[16].w[0] + 28u), c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] - 16u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCD48u); st32((c.r[16].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006B(c, 31u, depth + 1u); else { c.pc = 0x002AC5D0u; return; } if (c.pc != 0x001FCD48u) [[unlikely]] return; }
L_001FCD48:
    c.r[7].d[0] = ld8((c.r[17].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 29360u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCD60u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x001FCD60u) [[unlikely]] return; }
L_001FCD60:
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001FCD68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001FCD80:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 27904u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001FC000u < 16384u) { entry = entries_003F[(t - 0x001FC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001FCDA0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 28u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], c.r[18].w[0] + 304u);  if (t) { goto L_001FCDF0; } }
    c.f[0] = ld32((c.r[16].w[0] + 48u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] + 30u);
    st16((c.r[17].w[0] + 78u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
L_001FCDF0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    set32(c.r[4], 0u + 8192u);
    set32(c.r[3], 0u + 25600u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[18].w[0] + 562u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[18].w[0] + 566u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[18].w[0] + 560u), static_cast<std::uint16_t>(0u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[6].d[0] = c.r[3].d[0] & 127ull;  if (t) { goto L_001FCE30; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCE2Cu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x001FCE2Cu) [[unlikely]] return; }
L_001FCE2C:
    c.budget -= 1;
L_001FCE30:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 40u)));
    st16((c.r[17].w[0] + 64u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 42u)));
    st16((c.r[17].w[0] + 66u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    st32((c.r[17].w[0] + 68u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 6u)));
    st8((c.r[17].w[0] + 76u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 48u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    st32((c.r[17].w[0] + 72u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 18;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] << 6);  if (t) { goto L_001FCE90; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCE88u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001FCE88u) [[unlikely]] return; }
L_001FCE88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FCEA0; } }
L_001FCE90:
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCE9Cu); set32(c.r[4], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001FCE9Cu) [[unlikely]] return; }
L_001FCE9C:
    c.budget -= 1;
L_001FCEA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCEA8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001FCEA8u) [[unlikely]] return; }
L_001FCEA8:
    set32(c.r[4], c.r[16].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCEB4u); set32(c.r[5], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001FCEB4u) [[unlikely]] return; }
L_001FCEB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCEBCu);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001FCEBCu) [[unlikely]] return; }
L_001FCEBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCEC4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x001FCEC4u) [[unlikely]] return; }
L_001FCEC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCECCu); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 38u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001FCECCu) [[unlikely]] return; }
L_001FCECC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCED4u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 36u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001FCED4u) [[unlikely]] return; }
L_001FCED4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCEDCu); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 34u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001FCEDCu) [[unlikely]] return; }
L_001FCEDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCEE4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001FCEE4u) [[unlikely]] return; }
L_001FCEE4:
    st32((c.r[29].w[0] + 64u), 0u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[0] = ld32((c.r[17].w[0] + 68u));
    set32(c.r[5], c.r[18].w[0] + 48u);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCF00u); st32((c.r[29].w[0] + 72u), 0u);  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x001FCF00u) [[unlikely]] return; }
L_001FCF00:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001FCF30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCF14u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 253u, depth + 1u); else { c.pc = 0x001EEBC0u; return; } if (c.pc != 0x001FCF14u) [[unlikely]] return; }
L_001FCF14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001FCF30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCF24u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001FCF24u) [[unlikely]] return; }
L_001FCF24:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCF30u); set32(c.r[5], c.r[18].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x001FCF30u) [[unlikely]] return; }
L_001FCF30:
    set32(c.r[2], 0u + 1u);
    st16((c.r[18].w[0] + 500u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st16((c.r[18].w[0] + 498u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[18].w[0] + 496u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 64u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCF50u); st16((c.r[18].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003F(c, 101u, depth + 1u); else { c.pc = 0x001FCF70u; return; } if (c.pc != 0x001FCF50u) [[unlikely]] return; }
L_001FCF50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001FCF70:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[17], c.r[18].w[0] + 304u);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001FD038; } }
    c.f[2] = ld32((c.r[18].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x44F10000u);  if (t) { goto L_001FD008; } }
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001FD008; } }
    c.f[2] = ld32((c.r[18].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001FD008; } }
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001FD008; } }
    c.f[1] = ld32((c.r[18].w[0] + 36u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44FA0000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001FD018; } }
L_001FD008:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001FD2B8; } }
L_001FD018:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD020u); set32(c.r[4], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 196u, depth + 1u); else { c.pc = 0x00146480u; return; } if (c.pc != 0x001FD020u) [[unlikely]] return; }
L_001FD020:
    c.f[1] = ld32((c.r[18].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001FD090; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 2u);  if (t) { goto L_001FD090; } }
L_001FD038:
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    set32(c.r[5], c.r[18].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD048u); set32(c.r[4], c.r[2].w[0] + 656u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x001FD048u) [[unlikely]] return; }
L_001FD048:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x442F0000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001FD070; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001FD2B8; } }
L_001FD070:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 78u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[17].w[0] + 78u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[17].w[0] + 78u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001FD090; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 2;
L_001FD090:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_001FD0B0; } }
    c.r[2].d[0] = ld16((c.r[18].w[0] + 560u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001FD0B0; } }
    c.r[2].d[0] = ld16((c.r[18].w[0] + 564u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FD118; } }
L_001FD0B0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD0C4u); st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x001FD0C4u) [[unlikely]] return; }
L_001FD0C4:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001FD0F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD0D8u); set32(c.r[5], 0u + 145u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x001FD0D8u) [[unlikely]] return; }
L_001FD0D8:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 76u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD0F0u); set32(c.r[5], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_003F(c, 128u, depth + 1u); else { c.pc = 0x001FD3E0u; return; } if (c.pc != 0x001FD0F0u) [[unlikely]] return; }
L_001FD0F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FD2B8; } }
L_001FD0F8:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 76u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD110u); set32(c.r[5], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_003F(c, 124u, depth + 1u); else { c.pc = 0x001FD300u; return; } if (c.pc != 0x001FD110u) [[unlikely]] return; }
L_001FD110:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FD2B8; } }
L_001FD118:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD120u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 299u, depth + 1u); else { c.pc = 0x0017EEE0u; return; } if (c.pc != 0x001FD120u) [[unlikely]] return; }
L_001FD120:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FD1D8; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 166u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001FD1C8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 504u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FD1C8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 64u)));
    st16((c.r[18].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[12] = ld32((c.r[17].w[0] + 72u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD160u); set32(c.r[4], ld32((c.r[18].w[0] + 504u)));  if (depth < kMaxDepth) unit_003E(c, 244u, depth + 1u); else { c.pc = 0x001FA4C0u; return; } if (c.pc != 0x001FD160u) [[unlikely]] return; }
L_001FD160:
    set32(c.r[2], ld32((c.r[18].w[0] + 504u)));
    c.f[20] = c.f[0];
    set32(c.r[5], c.r[18].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD174u); set32(c.r[4], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x001FD174u) [[unlikely]] return; }
L_001FD174:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001FD1D8; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 66u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD190u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 253u, depth + 1u); else { c.pc = 0x001EEBC0u; return; } if (c.pc != 0x001FD190u) [[unlikely]] return; }
L_001FD190:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FD1D8; } }
    st32((c.r[29].w[0] + 80u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = ld32((c.r[17].w[0] + 68u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD1B0u); st32((c.r[29].w[0] + 88u), 0u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001FD1B0u) [[unlikely]] return; }
L_001FD1B0:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD1BCu); set32(c.r[5], c.r[18].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x001FD1BCu) [[unlikely]] return; }
L_001FD1BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FD1D8; } }
    c.budget -= 1;
L_001FD1C8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 166u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[18].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_001FD1D8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 7u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001FD258; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001FD258; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001FD250; } }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 8658u));
    set32(c.r[2], 0u + 21u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001FD250; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 157u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD228u); st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_001A(c, 166u, depth + 1u); else { c.pc = 0x0016AA50u; return; } if (c.pc != 0x001FD228u) [[unlikely]] return; }
L_001FD228:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD230u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0042(c, 22u, depth + 1u); else { c.pc = 0x00208310u; return; } if (c.pc != 0x001FD230u) [[unlikely]] return; }
L_001FD230:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD23Cu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_004E(c, 146u, depth + 1u); else { c.pc = 0x0023A0A0u; return; } if (c.pc != 0x001FD23Cu) [[unlikely]] return; }
L_001FD23C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD244u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x001FD244u) [[unlikely]] return; }
L_001FD244:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FD2B8; } }
    c.budget -= 1;
L_001FD250:
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001FD258:
    c.f[1] = ld32((c.r[18].w[0] + 48u));
    c.f[0] = ld32((c.r[18].w[0] + 32u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 32u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 52u));
    c.f[0] = ld32((c.r[18].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 36u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 56u));
    c.f[0] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD28Cu); st32((c.r[18].w[0] + 40u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001FD28Cu) [[unlikely]] return; }
L_001FD28C:
    c.f[13] = ld32((c.r[18].w[0] + 36u));
    c.f[14] = ld32((c.r[18].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD29Cu); c.f[12] = ld32((c.r[18].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001FD29Cu) [[unlikely]] return; }
L_001FD29C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD2A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 182u, depth + 1u); else { c.pc = 0x001268B0u; return; } if (c.pc != 0x001FD2A4u) [[unlikely]] return; }
L_001FD2A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD2ACu); set32(c.r[4], c.r[18].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001FD2ACu) [[unlikely]] return; }
L_001FD2AC:
    set32(c.r[3], 0u + 1u);
    st8((c.r[18].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_001FD2B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001FD2E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001FD2F0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_001FD300:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], 0u + 1u);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[20] = c.f[12];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD338u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x001FD338u) [[unlikely]] return; }
L_001FD338:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001FD3B8; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[7], 0u + 17u);
    set32(c.r[6], 0u + 6u);
    set32(c.r[3], c.r[3].w[0] - 10096u);
    set32(c.r[2], c.r[2].w[0] - 11088u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[5].w[0] + 160u), c.f[20]);
    c.f[3] = ld32((c.r[17].w[0]));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    st32((c.r[5].w[0] + 32u), c.f[3]);
    st32((c.r[5].w[0] + 36u), c.f[2]);
    st32((c.r[5].w[0] + 40u), c.f[1]);
    st32((c.r[5].w[0] + 44u), c.f[0]);
    st32((c.r[5].w[0] + 168u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD3A8u); st32((c.r[5].w[0] + 28u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_006B(c, 31u, depth + 1u); else { c.pc = 0x002AC5D0u; return; } if (c.pc != 0x001FD3A8u) [[unlikely]] return; }
L_001FD3A8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD3B4u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_004E(c, 110u, depth + 1u); else { c.pc = 0x00239510u; return; } if (c.pc != 0x001FD3B4u) [[unlikely]] return; }
L_001FD3B4:
    c.budget -= 1;
L_001FD3B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001FD3E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], 0u + 1u);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[20] = c.f[12];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD418u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x001FD418u) [[unlikely]] return; }
L_001FD418:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001FD488; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[7], 0u + 17u);
    set32(c.r[6], 0u + 6u);
    set32(c.r[3], c.r[3].w[0] - 10096u);
    set32(c.r[2], c.r[2].w[0] - 11088u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[5].w[0] + 160u), c.f[20]);
    c.f[3] = ld32((c.r[17].w[0]));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    st32((c.r[5].w[0] + 32u), c.f[3]);
    st32((c.r[5].w[0] + 36u), c.f[2]);
    st32((c.r[5].w[0] + 40u), c.f[1]);
    st32((c.r[5].w[0] + 44u), c.f[0]);
    st32((c.r[5].w[0] + 168u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD488u); st32((c.r[5].w[0] + 28u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_006B(c, 31u, depth + 1u); else { c.pc = 0x002AC5D0u; return; } if (c.pc != 0x001FD488u) [[unlikely]] return; }
L_001FD488:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001FD4B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 26912u);
    set32(c.r[5], c.r[4].w[0] + 304u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001FC000u < 16384u) { entry = entries_003F[(t - 0x001FC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001FD4E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].d[0] = 0ull | 58368ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], 0u - 1u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 16388u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 144u), 0u);
    st16((c.r[4].w[0] + 562u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 566u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 560u), static_cast<std::uint16_t>(0u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 22;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001FD5A8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 270u)));
    set32(c.r[2], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_001FD5A0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001FD588; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001FD588; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001FD570; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FD5A8; } }
    c.budget -= 1;
L_001FD570:
    c.r[6].d[0] = c.r[5].d[0] & 127ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD57Cu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x001FD57Cu) [[unlikely]] return; }
L_001FD57C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FD5A8; } }
    c.budget -= 1;
L_001FD588:
    c.r[5].d[0] = c.r[5].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD598u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 150u, depth + 1u); else { c.pc = 0x002AA460u; return; } if (c.pc != 0x001FD598u) [[unlikely]] return; }
L_001FD598:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FD5A8; } }
L_001FD5A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD5A8u);  if (depth < kMaxDepth) unit_006A(c, 150u, depth + 1u); else { c.pc = 0x002AA460u; return; } if (c.pc != 0x001FD5A8u) [[unlikely]] return; }
L_001FD5A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F590000u);
    c.r[3].d[0] = c.r[2].d[0] | 39322ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD5C4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 153u, depth + 1u); else { c.pc = 0x002AA520u; return; } if (c.pc != 0x001FD5C4u) [[unlikely]] return; }
L_001FD5C4:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
L_001FD5D0:
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[5].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] + 6u);
    set32(c.r[5], c.r[5].w[0] + 32u);
    c.r[2].d[0] = c.r[4].sd[0] < 12ll ? 1ull : 0ull;
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[5].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] + 32u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[5].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FD5D0u | kUnwind; return; } goto L_001FD5D0; } }
    st8((c.r[19].w[0] + 128u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 2u);
    st8((c.r[19].w[0] + 129u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[17], c.r[19].w[0] + 128u);
    c.r[16].d[0] = 0ull + 0ull;
    st8((c.r[19].w[0] + 130u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
L_001FD620:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD628u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001FD628u) [[unlikely]] return; }
L_001FD628:
    set32(c.r[7], 0u + 3u);
    set32(c.r[6], c.r[17].w[0] + c.r[16].w[0]);
    mmi::divu(c, 0, c.r[2].w[0], c.r[7].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.r[3].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    set32(c.r[5], c.r[17].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FD620u | kUnwind; return; } goto L_001FD620; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD668u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003F(c, 178u, depth + 1u); else { c.pc = 0x001FDC70u; return; } if (c.pc != 0x001FD668u) [[unlikely]] return; }
L_001FD668:
    c.f[12] = ld32((c.r[19].w[0] + 160u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD674u); set32(c.r[4], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0046(c, 75u, depth + 1u); else { c.pc = 0x00219490u; return; } if (c.pc != 0x001FD674u) [[unlikely]] return; }
L_001FD674:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD67Cu);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001FD67Cu) [[unlikely]] return; }
L_001FD67C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD684u); set32(c.r[4], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 199u, depth + 1u); else { c.pc = 0x001271D0u; return; } if (c.pc != 0x001FD684u) [[unlikely]] return; }
L_001FD684:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD68Cu); set32(c.r[4], c.r[19].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001FD68Cu) [[unlikely]] return; }
L_001FD68C:
    set32(c.r[3], 0u + 1u);
    st8((c.r[19].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001FD6B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.f[0] = c.r[2].w[0];
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[4].w[0] + 144u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD6F0u); st32((c.r[4].w[0] + 144u), c.f[0]);  if (depth < kMaxDepth) unit_003F(c, 181u, depth + 1u); else { c.pc = 0x001FDD60u; return; } if (c.pc != 0x001FD6F0u) [[unlikely]] return; }
L_001FD6F0:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 166u)));
    set32(c.r[3], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001FD710; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001FD850; } }
L_001FD710:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[16], c.r[18].w[0] + 128u);  if (t) { goto L_001FD768; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD738u); set32(c.r[6], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_003F(c, 178u, depth + 1u); else { c.pc = 0x001FDC70u; return; } if (c.pc != 0x001FD738u) [[unlikely]] return; }
L_001FD738:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD750u); set32(c.r[6], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_003F(c, 178u, depth + 1u); else { c.pc = 0x001FDC70u; return; } if (c.pc != 0x001FD750u) [[unlikely]] return; }
L_001FD750:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD768u); set32(c.r[6], c.r[2].w[0] + 7u);  if (depth < kMaxDepth) unit_003F(c, 178u, depth + 1u); else { c.pc = 0x001FDC70u; return; } if (c.pc != 0x001FD768u) [[unlikely]] return; }
L_001FD768:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001FD7C0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD790u); set32(c.r[6], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_003F(c, 178u, depth + 1u); else { c.pc = 0x001FDC70u; return; } if (c.pc != 0x001FD790u) [[unlikely]] return; }
L_001FD790:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD7A8u); set32(c.r[6], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_003F(c, 178u, depth + 1u); else { c.pc = 0x001FDC70u; return; } if (c.pc != 0x001FD7A8u) [[unlikely]] return; }
L_001FD7A8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD7C0u); set32(c.r[6], c.r[2].w[0] + 7u);  if (depth < kMaxDepth) unit_003F(c, 178u, depth + 1u); else { c.pc = 0x001FDC70u; return; } if (c.pc != 0x001FD7C0u) [[unlikely]] return; }
L_001FD7C0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    set32(c.r[2], 0u + 13u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001FD818; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD7E8u); set32(c.r[6], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_003F(c, 178u, depth + 1u); else { c.pc = 0x001FDC70u; return; } if (c.pc != 0x001FD7E8u) [[unlikely]] return; }
L_001FD7E8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD800u); set32(c.r[6], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_003F(c, 178u, depth + 1u); else { c.pc = 0x001FDC70u; return; } if (c.pc != 0x001FD800u) [[unlikely]] return; }
L_001FD800:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD818u); set32(c.r[6], c.r[2].w[0] + 7u);  if (depth < kMaxDepth) unit_003F(c, 178u, depth + 1u); else { c.pc = 0x001FDC70u; return; } if (c.pc != 0x001FD818u) [[unlikely]] return; }
L_001FD818:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    set32(c.r[2], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001FD830; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD830u);  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x001FD830u) [[unlikely]] return; }
L_001FD830:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD838u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001FD838u) [[unlikely]] return; }
L_001FD838:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD840u); set32(c.r[4], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 199u, depth + 1u); else { c.pc = 0x001271D0u; return; } if (c.pc != 0x001FD840u) [[unlikely]] return; }
L_001FD840:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD848u); set32(c.r[4], c.r[18].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001FD848u) [[unlikely]] return; }
L_001FD848:
    set32(c.r[3], 0u + 1u);
    st8((c.r[18].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001FD850:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001FD870:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001FD880:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_001FD890:
    set32(c.r[29], c.r[29].w[0] - 208u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    set32(c.r[3], c.r[29].w[0] + 176u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    set32(c.r[30], c.r[29].w[0] + 168u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    set32(c.r[23], c.r[29].w[0] + 205u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[22], c.r[29].w[0] + 206u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[1].w[0] + 20244u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 204u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20260u), c.r[4].w[0]);
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], 0u + 10u);
    st32((c.r[1].w[0] + 20280u), c.r[3].w[0]);
    set32(c.r[20], c.r[16].w[0] + 304u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st16((c.r[1].w[0] + 20284u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] + 29024u);
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 51u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 7);
    set32(c.r[21], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 38;
L_001FD928:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001FDC30; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - 27888u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20252u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[3].w[0] - 27728u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], c.r[4].w[0] - 26976u);
    set32(c.r[2], c.r[2].w[0] - 27168u);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[1].w[0] + 20256u), c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 1u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[1].w[0] + 20272u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD9B4u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0048(c, 23u, depth + 1u); else { c.pc = 0x00220380u; return; } if (c.pc != 0x001FD9B4u) [[unlikely]] return; }
L_001FD9B4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20276u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD9CCu); mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]); c.r[4].d[0] = c.lo.d[0];  if (depth < kMaxDepth) unit_0009(c, 143u, depth + 1u); else { c.pc = 0x00125E30u; return; } if (c.pc != 0x001FD9CCu) [[unlikely]] return; }
L_001FD9CC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[1].w[0] + 20268u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.f[1] = ld32((c.r[16].w[0] + 160u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.f[0] = ld32((c.r[20].w[0] + 8u));
    set32(c.r[3], c.r[29].w[0] + 176u);
    c.f[2] = c.r[2].w[0];
    set32(c.r[4], c.r[4].w[0] - 26936u);
    set32(c.r[2], 0u + 2u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[1].w[0] + 20224u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 160u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.f[0] = ld32((c.r[20].w[0] + 8u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[1].w[0] + 20288u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[1].w[0] + 20228u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    st8((c.r[1].w[0] + 20293u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 32;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);  if (t) { goto L_001FDA68; } }
    st32((c.r[1].w[0] + 20288u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 2u)));
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 204u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001FDB00; } }
    c.budget -= 1;
L_001FDA68:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 2u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42F00000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    c.f[3] = c.r[4].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 17;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001FDABC; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_001FDAD8; } }
L_001FDABC:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
L_001FDAD8:
    c.r[1].d[0] = c.r[2].sd[0] < 129ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001FDAE8; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    c.budget -= 1;
L_001FDAE8:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], 0u + 128u);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[29].w[0] + 204u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_001FDB00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = ld32((c.r[20].w[0] + 12u));
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001FDB38; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[29].w[0] + 207u);  if (t) { goto L_001FDB54; } }
L_001FDB38:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[2], c.r[29].w[0] + 207u);
    c.budget -= 7;
L_001FDB54:
    set32(c.r[4], c.r[29].w[0] + 160u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[21].w[0] + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDB68u); set32(c.r[6], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001FDB68u) [[unlikely]] return; }
L_001FDB68:
    c.f[13] = ld32((c.r[30].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDB74u); c.f[12] = ld32((c.r[29].w[0] + 160u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001FDB74u) [[unlikely]] return; }
L_001FDB74:
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.f[1] = ld32((c.r[30].w[0]));
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDB90u); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001FDB90u) [[unlikely]] return; }
L_001FDB90:
    set32(c.r[2], c.r[29].w[0] + 164u);
    c.f[12] = ld32((c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDBA0u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001FDBA0u) [[unlikely]] return; }
L_001FDBA0:
    c.r[18].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDBACu); c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001FDBACu) [[unlikely]] return; }
L_001FDBAC:
    c.r[4].d[0] = c.r[17].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDBB8u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001FDBB8u) [[unlikely]] return; }
L_001FDBB8:
    c.r[4].d[0] = c.r[18].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDBC4u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001FDBC4u) [[unlikely]] return; }
L_001FDBC4:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 6u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[3].w[0] - 27232u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[2], c.r[5].w[0] << 4);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDBE8u); set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x001FDBE8u) [[unlikely]] return; }
L_001FDBE8:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDBF4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x001FDBF4u) [[unlikely]] return; }
L_001FDBF4:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDC00u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x001FDC00u) [[unlikely]] return; }
L_001FDC00:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    c.r[2].d[0] = c.r[2].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);  if (t) { goto L_001FDC20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDC18u); set32(c.r[4], c.r[4].w[0] + 20224u);  if (depth < kMaxDepth) unit_0067(c, 15u, depth + 1u); else { c.pc = 0x0029C3B0u; return; } if (c.pc != 0x001FDC18u) [[unlikely]] return; }
L_001FDC18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FDC30; } }
L_001FDC20:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDC2Cu); set32(c.r[4], c.r[4].w[0] + 20224u);  if (depth < kMaxDepth) unit_0067(c, 3u, depth + 1u); else { c.pc = 0x0029C020u; return; } if (c.pc != 0x001FDC2Cu) [[unlikely]] return; }
L_001FDC2C:
    c.budget -= 1;
L_001FDC30:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FD928u | kUnwind; return; } goto L_001FD928; } }
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
L_001FDC70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u - 1u);
    c.budget -= 10;
L_001FDC98:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_001FDD30; } }
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDCB0u); st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001FDCB0u) [[unlikely]] return; }
L_001FDCB0:
    c.r[3].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[5], c.r[18].w[0] << 2);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[3].w[0] - 27440u);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[7], ld32((c.r[4].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[3].w[0] - 27280u);
    set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], 0u + 2u);
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], c.r[4].w[0] - 26936u);
    st32((c.r[16].w[0] + 8u), c.f[0]);
    set32(c.r[6], ld32((c.r[6].w[0])));
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    st32((c.r[16].w[0] + 12u), c.f[0]);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 28;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u - 128u);  if (t) { goto L_001FDD28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001FDD40; } }
L_001FDD28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001FDD40; } }
L_001FDD30:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[5].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FDC98u | kUnwind; return; } goto L_001FDC98; } }
L_001FDD40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001FDD60:
    c.r[9].d[0] = 0ull + 0ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[7], c.r[7].w[0] - 27440u);
    set32(c.r[6], c.r[6].w[0] - 27280u);
    set32(c.r[3], c.r[3].w[0] - 26936u);
    set32(c.r[12], 0u + 1u);
    set32(c.r[8], 0u - 1u);
    c.budget -= 10;
L_001FDD88:
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[10].d[0] == c.r[8].d[0];  if (t) { goto L_001FDF18; } }
    set32(c.r[10], c.r[10].w[0] << 2);
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 5u)));
    set32(c.r[11], c.r[7].w[0] + c.r[10].w[0]);
    c.r[15].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    set32(c.r[14], ld32((c.r[11].w[0])));
    set32(c.r[10], c.r[6].w[0] + c.r[10].w[0]);
    set32(c.r[13], c.r[13].w[0] << 3);
    set32(c.r[11], ld32((c.r[10].w[0])));
    set32(c.r[10], c.r[15].w[0] << 3);
    set32(c.r[10], c.r[14].w[0] + c.r[10].w[0]);
    set32(c.r[14], ld32((c.r[10].w[0])));
    c.budget -= 13;
    { const bool t = c.r[14].sd[0] < 0; set32(c.r[15], c.r[11].w[0] + c.r[13].w[0]);  if (t) { goto L_001FDDF0; } }
    set32(c.r[11], ld32((c.r[10].w[0] - 8u)));
    c.f[1] = ld32((c.r[10].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    set32(c.r[11], c.r[14].w[0] - c.r[11].w[0]);
    c.f[2] = c.r[11].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    fpu_div(c, 1u, c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[5].w[0] + 8u), c.f[0]);
    c.budget -= 10;
L_001FDDF0:
    set32(c.r[13], ld32((c.r[15].w[0])));
    c.budget -= 3;
    { const bool t = c.r[13].sd[0] < 0;  if (t) { goto L_001FDE28; } }
    set32(c.r[11], ld32((c.r[15].w[0] - 8u)));
    c.f[1] = ld32((c.r[15].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    set32(c.r[11], c.r[13].w[0] - c.r[11].w[0]);
    c.f[2] = c.r[11].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    fpu_div(c, 1u, c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[5].w[0] + 12u), c.f[0]);
    c.budget -= 11;
L_001FDE28:
    set32(c.r[13], ld32((c.r[10].w[0])));
    c.budget -= 3;
    { const bool t = c.r[13].sd[0] < 0;  if (t) { goto L_001FDE58; } }
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[11].d[0] = c.r[11].sd[0] < c.r[13].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[11].d[0] != 0ull;  if (t) { goto L_001FDE58; } }
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    set32(c.r[10], c.r[10].w[0] + 8u);
    set32(c.r[11], c.r[11].w[0] + 1u);
    st8((c.r[5].w[0] + 4u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.budget -= 5;
L_001FDE58:
    set32(c.r[13], ld32((c.r[15].w[0])));
    c.budget -= 3;
    { const bool t = c.r[13].sd[0] < 0;  if (t) { goto L_001FDE80; } }
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[11].d[0] = c.r[11].sd[0] < c.r[13].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[11].d[0] != 0ull;  if (t) { goto L_001FDE80; } }
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 5u)));
    set32(c.r[11], c.r[11].w[0] + 1u);
    st8((c.r[5].w[0] + 5u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.budget -= 3;
L_001FDE80:
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[11], c.r[3].w[0] + c.r[11].w[0]);
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0])));
    c.budget -= 5;
    { const bool t = c.r[11].d[0] != c.r[12].d[0];  if (t) { goto L_001FDEA0; } }
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    set32(c.r[11], c.r[11].w[0] + 1u);
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.budget -= 3;
L_001FDEA0:
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[11].sd[0] <= 0; c.r[1].d[0] = c.r[11].sd[0] < 4ll ? 1ull : 0ull;  if (t) { goto L_001FDEF8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001FDEF8; } }
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[10].d[0] = c.r[10].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[10].d[0] == 0ull;  if (t) { goto L_001FDF18; } }
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.r[1].d[0] = c.r[10].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001FDEE0; } }
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[10].w[0]));  if (t) { goto L_001FDF18; } }
L_001FDEE0:
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[10].w[0]));  if (t) { goto L_001FDF18; } }
    c.budget -= 1;
L_001FDEF8:
    set32(c.r[10], ld32((c.r[10].w[0])));
    c.budget -= 3;
    { const bool t = c.r[10].d[0] != c.r[8].d[0];  if (t) { goto L_001FDF18; } }
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[10].w[0]));
    c.budget -= 5;
L_001FDF18:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[10].d[0] = c.r[9].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[10].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FDD88u | kUnwind; return; } goto L_001FDD88; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001FDF30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDF54u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x001FDF54u) [[unlikely]] return; }
L_001FDF54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001FDFD8; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00210000u);
    set32(c.r[7], 0u + 17u);
    set32(c.r[6], 0u + 7u);
    set32(c.r[3], c.r[3].w[0] - 7968u);
    set32(c.r[2], c.r[2].w[0] - 16u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 24u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 28u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 168u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 8256u)));
    st16((c.r[16].w[0] + 388u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 8258u)));
    st16((c.r[16].w[0] + 390u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 8658u));
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDFC0u); st8((c.r[16].w[0] + 392u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006B(c, 31u, depth + 1u); else { c.pc = 0x002AC5D0u; return; } if (c.pc != 0x001FDFC0u) [[unlikely]] return; }
L_001FDFC0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 29360u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDFD8u); set32(c.r[7], 0u + 9u);  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x001FDFD8u) [[unlikely]] return; }
L_001FDFD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FDFF0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.budget -= 4;
L_001FE000:
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], c.r[19].w[0] + 392u);
    c.budget -= 6;
L_001FE018:
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE028u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x001FE028u) [[unlikely]] return; }
L_001FE028:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001FE0A8; } }
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00210000u);
    set32(c.r[8], 0u + 17u);
    set32(c.r[7], 0u + 7u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] - 7968u);
    set32(c.r[2], c.r[2].w[0] - 16u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[9], c.r[9].w[0] + 1u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(c.r[18].w[0]));
    set32(c.r[6], ld32((c.r[19].w[0] + 24u)));
    st32((c.r[17].w[0] + 24u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 28u), c.r[19].w[0]);
    st32((c.r[17].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 168u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE090u); st8((c.r[17].w[0] + 392u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006B(c, 31u, depth + 1u); else { c.pc = 0x002AC5D0u; return; } if (c.pc != 0x001FE090u) [[unlikely]] return; }
L_001FE090:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 29360u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE0A8u); set32(c.r[7], 0u + 11u);  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x001FE0A8u) [[unlikely]] return; }
L_001FE0A8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FE018u | kUnwind; return; } goto L_001FE018; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001FE0E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 26816u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001FC000u < 16384u) { entry = entries_003F[(t - 0x001FC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001FE100:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 25600u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 566u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[4].w[0] + 560u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 80u), 0u);
    st32((c.r[4].w[0] + 84u), 0u);
    st32((c.r[4].w[0] + 88u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001FE150; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001FE258; } }
    c.budget -= 1;
L_001FE150:
    set32(c.r[2], 0u + 8196u);
    set32(c.r[5], 0u + 3u);
    st16((c.r[17].w[0] + 562u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE164u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x001FE164u) [[unlikely]] return; }
L_001FE164:
    set32(c.r[16], ld32((c.r[17].w[0] + 28u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FE60000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 192u);
    st32((c.r[29].w[0] + 48u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE184u); st32((c.r[29].w[0] + 56u), 0u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001FE184u) [[unlikely]] return; }
L_001FE184:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 26888u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE1A8u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001FE1A8u) [[unlikely]] return; }
L_001FE1A8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 26892u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE1CCu); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001FE1CCu) [[unlikely]] return; }
L_001FE1CC:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 26896u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE1F0u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001FE1F0u) [[unlikely]] return; }
L_001FE1F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE1F8u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001FE1F8u) [[unlikely]] return; }
L_001FE1F8:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE204u); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x001FE204u) [[unlikely]] return; }
L_001FE204:
    c.f[3] = ld32((c.r[16].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD4C0000u);
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.r[3].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    set32(c.r[2], 0u + 10u);
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    st32((c.r[17].w[0] + 32u), c.f[3]);
    st32((c.r[17].w[0] + 36u), c.f[2]);
    st32((c.r[17].w[0] + 40u), c.f[1]);
    st32((c.r[17].w[0] + 44u), c.f[0]);
    st32((c.r[17].w[0] + 68u), c.r[3].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE23Cu); st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001FE23Cu) [[unlikely]] return; }
L_001FE23C:
    c.r[3].d[0] = c.r[2].d[0] & 3ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 7;
L_001FE258:
    set32(c.r[2], 0u + 1u);
    st16((c.r[17].w[0] + 500u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st16((c.r[17].w[0] + 498u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE270u); st16((c.r[17].w[0] + 496u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003F(c, 204u, depth + 1u); else { c.pc = 0x001FE290u; return; } if (c.pc != 0x001FE270u) [[unlikely]] return; }
L_001FE270:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001FE290:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001FE2B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE2ACu);  if (depth < kMaxDepth) unit_003F(c, 207u, depth + 1u); else { c.pc = 0x001FE2D0u; return; } if (c.pc != 0x001FE2ACu) [[unlikely]] return; }
L_001FE2AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FE2C0; } }
    c.budget -= 1;
L_001FE2B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE2C0u);  if (depth < kMaxDepth) unit_003F(c, 255u, depth + 1u); else { c.pc = 0x001FEB90u; return; } if (c.pc != 0x001FE2C0u) [[unlikely]] return; }
L_001FE2C0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001FE2D0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 564u));
    set32(c.r[17], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[18].w[0] + 304u);  if (t) { goto L_001FE310; } }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 560u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001FE398; } }
    c.budget -= 1;
L_001FE310:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE324u); st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x001FE324u) [[unlikely]] return; }
L_001FE324:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 88u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_001FE350; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[18].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE348u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_003F(c, 124u, depth + 1u); else { c.pc = 0x001FD300u; return; } if (c.pc != 0x001FE348u) [[unlikely]] return; }
L_001FE348:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FE390; } }
L_001FE350:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_001FE378; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[18].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE370u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_003F(c, 124u, depth + 1u); else { c.pc = 0x001FD300u; return; } if (c.pc != 0x001FE370u) [[unlikely]] return; }
L_001FE370:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FE390; } }
L_001FE378:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 32u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE390u); set32(c.r[6], 0u + 11u);  if (depth < kMaxDepth) unit_003F(c, 124u, depth + 1u); else { c.pc = 0x001FD300u; return; } if (c.pc != 0x001FE390u) [[unlikely]] return; }
L_001FE390:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FEB68; } }
L_001FE398:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_001FEB30; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001FE9F0; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_001FE9B8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001FE848; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001FE3D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FEB60; } }
    c.budget -= 1;
L_001FE3D8:
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[19], c.r[17].w[0] + 304u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE3E8u); set32(c.r[4], c.r[2].w[0] + 2368u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001FE3E8u) [[unlikely]] return; }
L_001FE3E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF940000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.r[2].d[0] = c.r[2].d[0] | 31457ull;
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE408u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001FE408u) [[unlikely]] return; }
L_001FE408:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE410u); set32(c.r[4], ld32((c.r[18].w[0] + 80u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001FE410u) [[unlikely]] return; }
L_001FE410:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE418u); set32(c.r[4], c.r[18].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001FE418u) [[unlikely]] return; }
L_001FE418:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 84u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 8256u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001FE838; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 86u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 8258u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001FE838; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001FE838; } }
    c.r[3].d[0] = ld8((c.r[19].w[0] + 16u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001FEB60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE45Cu);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001FE45Cu) [[unlikely]] return; }
L_001FE45C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE464u); set32(c.r[4], c.r[18].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x001FE464u) [[unlikely]] return; }
L_001FE464:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE46Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001FE46Cu) [[unlikely]] return; }
L_001FE46C:
    c.f[0] = ld32((c.r[18].w[0] + 240u));
    set32(c.r[2], 0u + 8192u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 2u);
    st32((c.r[18].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 244u));
    st32((c.r[18].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 248u));
    st32((c.r[18].w[0] + 40u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 504u)));
    st32((c.r[18].w[0] + 504u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    st32((c.r[18].w[0] + 84u), c.r[3].w[0]);
    st8((c.r[18].w[0] + 516u), static_cast<std::uint8_t>(0u));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE4B0u); st16((c.r[18].w[0] + 562u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x001FE4B0u) [[unlikely]] return; }
L_001FE4B0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001FE6C8; } }
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 504u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FE510; } }
    c.f[1] = ld32((c.r[2].w[0] + 64u));
    set32(c.r[20], c.r[29].w[0] + 100u);
    set32(c.r[19], c.r[29].w[0] + 104u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[29].w[0] + 96u), c.f[1]);
    set32(c.r[2], ld32((c.r[18].w[0] + 504u)));
    c.f[1] = ld32((c.r[2].w[0] + 68u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[20].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 504u)));
    c.f[0] = ld32((c.r[2].w[0] + 72u));
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.f[0]);  if (t) { goto L_001FE5D0; } }
    c.budget -= 1;
L_001FE510:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 16u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001FE580; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE524u); set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x001FE524u) [[unlikely]] return; }
L_001FE524:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    set32(c.r[20], c.r[29].w[0] + 100u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[20].w[0]), c.f[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE564u); set32(c.r[19], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x001FE564u) [[unlikely]] return; }
L_001FE564:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.f[0]);  if (t) { goto L_001FE5D0; } }
L_001FE580:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE588u); set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x001FE588u) [[unlikely]] return; }
L_001FE588:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    set32(c.r[20], c.r[29].w[0] + 100u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    st32((c.r[20].w[0]), c.f[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE5B8u); set32(c.r[19], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x001FE5B8u) [[unlikely]] return; }
L_001FE5B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[19].w[0]), c.f[0]);
    c.budget -= 6;
L_001FE5D0:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[0] = ld32((c.r[20].w[0]));
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[6], c.r[18].w[0] + 32u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE5E8u); st32((c.r[16].w[0] + 72u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001FE5E8u) [[unlikely]] return; }
L_001FE5E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE5F0u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x001FE5F0u) [[unlikely]] return; }
L_001FE5F0:
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 116u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 56u), c.f[0]);
    st32((c.r[18].w[0] + 68u), 0u);
    c.f[1] = ld32((c.r[18].w[0] + 32u));
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 36u));
    c.f[0] = ld32((c.r[20].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[20].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = ld32((c.r[19].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[19].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 96u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE664u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001FE664u) [[unlikely]] return; }
L_001FE664:
    c.f[1] = ld32((c.r[20].w[0]));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE674u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001FE674u) [[unlikely]] return; }
L_001FE674:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001FE690; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_001FE690:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = c.r[3].w[0];
    st32((c.r[16].w[0] + 64u), c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBD4C0000u);
    st32((c.r[16].w[0] + 68u), 0u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    st32((c.r[16].w[0] + 80u), c.r[3].w[0]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.f[1] = ld32((c.r[16].w[0] + 80u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.f[0]);  if (t) { goto L_001FEB60; } }
L_001FE6C8:
    set32(c.r[2], 0u + 3u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 504u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FE708; } }
    c.f[0] = ld32((c.r[2].w[0] + 64u));
    set32(c.r[19], c.r[29].w[0] + 100u);
    set32(c.r[17], c.r[29].w[0] + 104u);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 504u)));
    c.f[0] = ld32((c.r[2].w[0] + 68u));
    st32((c.r[19].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 504u)));
    c.f[0] = ld32((c.r[2].w[0] + 72u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.f[0]);  if (t) { goto L_001FE738; } }
L_001FE708:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE710u); set32(c.r[4], c.r[17].w[0] + 8592u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001FE710u) [[unlikely]] return; }
L_001FE710:
    st32((c.r[29].w[0] + 96u), 0u);
    set32(c.r[19], c.r[29].w[0] + 100u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[17], c.r[29].w[0] + 104u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE738u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001FE738u) [[unlikely]] return; }
L_001FE738:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[0] = ld32((c.r[19].w[0]));
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[6], c.r[18].w[0] + 32u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE750u); st32((c.r[16].w[0] + 72u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001FE750u) [[unlikely]] return; }
L_001FE750:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE758u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x001FE758u) [[unlikely]] return; }
L_001FE758:
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 116u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 56u), c.f[0]);
    st32((c.r[18].w[0] + 68u), 0u);
    c.f[1] = ld32((c.r[18].w[0] + 32u));
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 36u));
    c.f[0] = ld32((c.r[19].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[19].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 96u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE7CCu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001FE7CCu) [[unlikely]] return; }
L_001FE7CC:
    c.f[1] = ld32((c.r[19].w[0]));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE7DCu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001FE7DCu) [[unlikely]] return; }
L_001FE7DC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[2] = c.r[4].w[0];
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001FE808; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[1];  if (t) { goto L_001FE828; } }
L_001FE808:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43960000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001FE828; } }
    c.f[0] = c.f[1];
    c.budget -= 2;
L_001FE828:
    st32((c.r[16].w[0] + 64u), c.f[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 68u), 0u);  if (t) { goto L_001FEB60; } }
    c.budget -= 1;
L_001FE838:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001FEB60; } }
L_001FE848:
    c.f[0] = ld32((c.r[18].w[0] + 48u));
    c.f[1] = ld32((c.r[18].w[0] + 56u));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE85Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001FE85Cu) [[unlikely]] return; }
L_001FE85C:
    c.f[1] = ld32((c.r[18].w[0] + 52u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE86Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001FE86Cu) [[unlikely]] return; }
L_001FE86C:
    c.f[1] = ld32((c.r[16].w[0] + 68u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 68u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 64u));
    c.f[0] = ld32((c.r[16].w[0] + 68u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[18].w[0] + 32u);  if (t) { goto L_001FE8A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE894u);  if (depth < kMaxDepth) unit_0011(c, 196u, depth + 1u); else { c.pc = 0x00146480u; return; } if (c.pc != 0x001FE894u) [[unlikely]] return; }
L_001FE894:
    c.f[1] = ld32((c.r[18].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001FE978; } }
    c.budget -= 1;
L_001FE8A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE8B0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 187u, depth + 1u); else { c.pc = 0x001FDFF0u; return; } if (c.pc != 0x001FE8B0u) [[unlikely]] return; }
L_001FE8B0:
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], 0u + 1u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[18].w[0] + 184u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.budget -= 6;
L_001FE8C8:
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    set32(c.r[5], ld32((c.r[5].w[0] + 40u)));
    st32((c.r[18].w[0] + 188u), c.r[5].w[0]);
    st8((c.r[18].w[0] + 516u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[18].w[0] + 48u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 56u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 56u), c.f[0]);
    st32((c.r[18].w[0] + 52u), 0u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE904u); st32((c.r[18].w[0] + 68u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x001FE904u) [[unlikely]] return; }
L_001FE904:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 88u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_001FE930; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[18].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE928u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_003F(c, 124u, depth + 1u); else { c.pc = 0x001FD300u; return; } if (c.pc != 0x001FE928u) [[unlikely]] return; }
L_001FE928:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FE988; } }
L_001FE930:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_001FE958; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[18].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE950u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_003F(c, 124u, depth + 1u); else { c.pc = 0x001FD300u; return; } if (c.pc != 0x001FE950u) [[unlikely]] return; }
L_001FE950:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FE988; } }
L_001FE958:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 32u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE970u); set32(c.r[6], 0u + 11u);  if (depth < kMaxDepth) unit_003F(c, 124u, depth + 1u); else { c.pc = 0x001FD300u; return; } if (c.pc != 0x001FE970u) [[unlikely]] return; }
L_001FE970:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FE988; } }
L_001FE978:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_001FE988:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[1] = ld32((c.r[16].w[0] + 80u));
    c.f[0] = ld32((c.r[16].w[0] + 76u));
    c.f[1] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 76u), c.f[1]);
    c.f[0] = ld32((c.r[18].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE9ACu); st32((c.r[18].w[0] + 36u), c.f[0]);  if (depth < kMaxDepth) unit_003F(c, 266u, depth + 1u); else { c.pc = 0x001FED60u; return; } if (c.pc != 0x001FE9ACu) [[unlikely]] return; }
L_001FE9AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FEB60; } }
    c.budget -= 1;
L_001FE9B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE9C0u); set32(c.r[4], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 196u, depth + 1u); else { c.pc = 0x00146480u; return; } if (c.pc != 0x001FE9C0u) [[unlikely]] return; }
L_001FE9C0:
    c.f[1] = ld32((c.r[18].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001FE9E0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001FEB60; } }
L_001FE9E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE9E8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 266u, depth + 1u); else { c.pc = 0x001FED60u; return; } if (c.pc != 0x001FE9E8u) [[unlikely]] return; }
L_001FE9E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FEB60; } }
L_001FE9F0:
    c.f[0] = ld32((c.r[18].w[0] + 48u));
    c.f[1] = ld32((c.r[18].w[0] + 56u));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEA04u); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001FEA04u) [[unlikely]] return; }
L_001FEA04:
    c.f[1] = ld32((c.r[18].w[0] + 52u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEA14u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001FEA14u) [[unlikely]] return; }
L_001FEA14:
    c.f[1] = ld32((c.r[16].w[0] + 68u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 68u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 64u));
    c.f[0] = ld32((c.r[16].w[0] + 68u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001FEB10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEA3Cu);  if (depth < kMaxDepth) unit_003F(c, 187u, depth + 1u); else { c.pc = 0x001FDFF0u; return; } if (c.pc != 0x001FEA3Cu) [[unlikely]] return; }
L_001FEA3C:
    set32(c.r[2], 0u + 4u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBD4C0000u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], ld32((c.r[18].w[0] + 184u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], 0u + 10u);
    set32(c.r[6], ld32((c.r[6].w[0] + 40u)));
    st32((c.r[18].w[0] + 188u), c.r[6].w[0]);
    st8((c.r[18].w[0] + 516u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.f[0] = ld32((c.r[18].w[0] + 48u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 56u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 56u), c.f[0]);
    st32((c.r[18].w[0] + 52u), 0u);
    st32((c.r[18].w[0] + 68u), c.r[3].w[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEA98u); st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x001FEA98u) [[unlikely]] return; }
L_001FEA98:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 88u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_001FEAC8; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[18].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEABCu); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_003F(c, 124u, depth + 1u); else { c.pc = 0x001FD300u; return; } if (c.pc != 0x001FEABCu) [[unlikely]] return; }
L_001FEABC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FEB20; } }
    c.budget -= 1;
L_001FEAC8:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_001FEAF0; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[18].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEAE8u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_003F(c, 124u, depth + 1u); else { c.pc = 0x001FD300u; return; } if (c.pc != 0x001FEAE8u) [[unlikely]] return; }
L_001FEAE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FEB20; } }
L_001FEAF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 32u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEB08u); set32(c.r[6], 0u + 11u);  if (depth < kMaxDepth) unit_003F(c, 124u, depth + 1u); else { c.pc = 0x001FD300u; return; } if (c.pc != 0x001FEB08u) [[unlikely]] return; }
L_001FEB08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FEB20; } }
L_001FEB10:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_001FEB20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEB28u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 272u, depth + 1u); else { c.pc = 0x001FEE30u; return; } if (c.pc != 0x001FEB28u) [[unlikely]] return; }
L_001FEB28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FEB60; } }
L_001FEB30:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_001FEB50; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001FEB60; } }
    c.budget -= 1;
L_001FEB50:
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEB5Cu); st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003F(c, 272u, depth + 1u); else { c.pc = 0x001FEE30u; return; } if (c.pc != 0x001FEB5Cu) [[unlikely]] return; }
L_001FEB5C:
    c.budget -= 1;
L_001FEB60:
    set32(c.r[3], 0u + 1u);
    st8((c.r[18].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001FEB68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001FEB90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_001FEBD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEBC4u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 196u, depth + 1u); else { c.pc = 0x00146480u; return; } if (c.pc != 0x001FEBC4u) [[unlikely]] return; }
L_001FEBC4:
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_001FEBD8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001FEBD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001FEC08; } }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 564u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001FEC08; } }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 560u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001FEC08; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001FEC90; } }
    c.budget -= 1;
L_001FEC08:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEC1Cu); st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x001FEC1Cu) [[unlikely]] return; }
L_001FEC1C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 88u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);  if (t) { goto L_001FEC48; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEC40u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_003F(c, 124u, depth + 1u); else { c.pc = 0x001FD300u; return; } if (c.pc != 0x001FEC40u) [[unlikely]] return; }
L_001FEC40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FED28; } }
L_001FEC48:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);  if (t) { goto L_001FEC70; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEC68u); set32(c.r[6], 0u + 9u);  if (depth < kMaxDepth) unit_003F(c, 124u, depth + 1u); else { c.pc = 0x001FD300u; return; } if (c.pc != 0x001FEC68u) [[unlikely]] return; }
L_001FEC68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FED28; } }
L_001FEC70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEC88u); set32(c.r[6], 0u + 12u);  if (depth < kMaxDepth) unit_003F(c, 124u, depth + 1u); else { c.pc = 0x001FD300u; return; } if (c.pc != 0x001FEC88u) [[unlikely]] return; }
L_001FEC88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FED28; } }
L_001FEC90:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001FECC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), c.f[0]);  if (t) { goto L_001FECD0; } }
    c.budget -= 1;
L_001FECC0:
    c.f[0] = ld32((c.r[17].w[0] + 68u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.budget -= 4;
L_001FECD0:
    c.f[1] = ld32((c.r[17].w[0] + 48u));
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 56u));
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FED04u); st32((c.r[17].w[0] + 40u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001FED04u) [[unlikely]] return; }
L_001FED04:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FED14u); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001FED14u) [[unlikely]] return; }
L_001FED14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FED1Cu); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001FED1Cu) [[unlikely]] return; }
L_001FED1C:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_001FED28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FED40:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001FED50:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_001FED60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBFC00000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[0] = c.r[2].w[0];
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[4].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001FED90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.f[0]);  if (t) { goto L_001FEDA0; } }
    c.budget -= 1;
L_001FED90:
    c.f[0] = ld32((c.r[16].w[0] + 68u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.budget -= 4;
L_001FEDA0:
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 56u));
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 40u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] + 2047u);
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] + 2047u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEDECu); st32((c.r[16].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001FEDECu) [[unlikely]] return; }
L_001FEDEC:
    c.f[13] = ld32((c.r[16].w[0] + 36u));
    c.f[14] = ld32((c.r[16].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEDFCu); c.f[12] = ld32((c.r[16].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001FEDFCu) [[unlikely]] return; }
L_001FEDFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEE04u); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001FEE04u) [[unlikely]] return; }
L_001FEE04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEE0Cu); set32(c.r[4], ld32((c.r[16].w[0] + 80u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001FEE0Cu) [[unlikely]] return; }
L_001FEE0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEE14u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001FEE14u) [[unlikely]] return; }
L_001FEE14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001FEE30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[4].w[0] + 48u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = ld32((c.r[4].w[0] + 32u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 52u));
    c.f[0] = ld32((c.r[4].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 56u));
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 40u), c.f[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] + 2047u);
    st32((c.r[4].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] + 2047u);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEE8Cu); st32((c.r[4].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001FEE8Cu) [[unlikely]] return; }
L_001FEE8C:
    c.f[13] = ld32((c.r[16].w[0] + 36u));
    c.f[14] = ld32((c.r[16].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEE9Cu); c.f[12] = ld32((c.r[16].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001FEE9Cu) [[unlikely]] return; }
L_001FEE9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEEA4u); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001FEEA4u) [[unlikely]] return; }
L_001FEEA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEEACu); set32(c.r[4], ld32((c.r[16].w[0] + 80u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001FEEACu) [[unlikely]] return; }
L_001FEEAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEEB4u); set32(c.r[4], c.r[16].w[0] + 304u);  if (depth < kMaxDepth) unit_0009(c, 182u, depth + 1u); else { c.pc = 0x001268B0u; return; } if (c.pc != 0x001FEEB4u) [[unlikely]] return; }
L_001FEEB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEEBCu); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001FEEBCu) [[unlikely]] return; }
L_001FEEBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001FEED0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEEF4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001FEEF4u) [[unlikely]] return; }
L_001FEEF4:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[2].d[0] << 56;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    c.budget -= 5;
L_001FEF08:
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEF18u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x001FEF18u) [[unlikely]] return; }
L_001FEF18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FEF70; } }
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[8], 0u + 17u);
    set32(c.r[7], 0u + 8u);
    set32(c.r[6], c.r[6].w[0] - 4144u);
    set32(c.r[3], c.r[3].w[0] - 2592u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[9], c.r[9].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[2].w[0] + 11u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[2].w[0] + 28u), c.r[19].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[6].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEF70u); st32((c.r[2].w[0] + 168u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_006B(c, 31u, depth + 1u); else { c.pc = 0x002AC5D0u; return; } if (c.pc != 0x001FEF70u) [[unlikely]] return; }
L_001FEF70:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FEF08u | kUnwind; return; } goto L_001FEF08; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[5], c.r[18].w[0] << 7);
    set32(c.r[3], c.r[3].w[0] - 26800u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] - 26796u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[6], c.r[3].w[0] + 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEFB4u); set32(c.r[7], c.r[3].w[0] + 10u);  if (depth < kMaxDepth) unit_0020(c, 181u, depth + 1u); else { c.pc = 0x00182C90u; return; } if (c.pc != 0x001FEFB4u) [[unlikely]] return; }
L_001FEFB4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001FEFD0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[7].d[0] = ld8((c.r[4].w[0] + 3u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 26336u);
    set32(c.r[6], c.r[6].w[0] - 26800u);
    set32(c.r[5], c.r[4].w[0] + 304u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[7], c.r[7].w[0] << 7);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001FC000u < 16384u) { entry = entries_003F[(t - 0x001FC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001FF010:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[8], 0u + 18946u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[7].d[0] = 0ull | 58368ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[14], c.r[14].w[0] - 26544u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], 0u - 1u);
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = ld8((c.r[4].w[0] + 3u));
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[13].d[0] = ld8((c.r[4].w[0] + 11u));
    set32(c.r[2], c.r[11].w[0] << 4);
    set32(c.r[10], c.r[10].w[0] + 1u);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[15], c.r[16].w[0] << 1);
    c.r[11].d[0] = c.r[11].d[0] & 255ull;
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[10].w[0]));
    set32(c.r[12], c.r[13].w[0] << 1);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    set32(c.r[12], c.r[12].w[0] + c.r[13].w[0]);
    set32(c.r[15], c.r[15].w[0] + c.r[16].w[0]);
    set32(c.r[12], c.r[12].w[0] << 3);
    set32(c.r[13], c.r[15].w[0] << 5);
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[13], c.r[14].w[0] + c.r[13].w[0]);
    set32(c.r[12], c.r[12].w[0] + c.r[13].w[0]);
    st32((c.r[4].w[0] + 112u), c.f[0]);
    st32((c.r[4].w[0] + 116u), 0u);
    st32((c.r[4].w[0] + 120u), c.r[9].w[0]);
    st16((c.r[4].w[0] + 562u), static_cast<std::uint16_t>(c.r[8].w[0]));
    st16((c.r[4].w[0] + 566u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[4].w[0] + 104u), c.f[0]);
    st32((c.r[4].w[0] + 64u), 0u);
    st32((c.r[5].w[0] + 64u), c.r[9].w[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 515u));
    st8((c.r[5].w[0] + 68u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[4].w[0] + 560u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 8u)));
    c.budget -= 49;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[11].w[0] + c.r[12].w[0]);  if (t) { goto L_001FF0E0; } }
    c.r[6].d[0] = c.r[2].d[0] & 127ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF0E0u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x001FF0E0u) [[unlikely]] return; }
L_001FF0E0:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF0F8u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001FF0F8u) [[unlikely]] return; }
L_001FF0F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF100u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001FF100u) [[unlikely]] return; }
L_001FF100:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF10Cu); set32(c.r[5], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001FF10Cu) [[unlikely]] return; }
L_001FF10C:
    c.f[3] = ld32((c.r[19].w[0] + 32u));
    c.f[2] = ld32((c.r[19].w[0] + 36u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[19].w[0] + 44u));
    st32((c.r[19].w[0] + 128u), c.f[3]);
    st32((c.r[19].w[0] + 132u), c.f[2]);
    st32((c.r[19].w[0] + 136u), c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF130u); st32((c.r[19].w[0] + 140u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001FF130u) [[unlikely]] return; }
L_001FF130:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF138u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x001FF138u) [[unlikely]] return; }
L_001FF138:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF140u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 14u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001FF140u) [[unlikely]] return; }
L_001FF140:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF148u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 12u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001FF148u) [[unlikely]] return; }
L_001FF148:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF150u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 10u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001FF150u) [[unlikely]] return; }
L_001FF150:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF158u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001FF158u) [[unlikely]] return; }
L_001FF158:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF160u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001FF160u) [[unlikely]] return; }
L_001FF160:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[5], c.r[19].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF170u); set32(c.r[4], c.r[4].w[0] - 26352u);  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x001FF170u) [[unlikely]] return; }
L_001FF170:
    c.f[12] = ld32((c.r[19].w[0] + 104u));
    set32(c.r[4], c.r[19].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF180u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x001FF180u) [[unlikely]] return; }
L_001FF180:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF190u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 301u, depth + 1u); else { c.pc = 0x001FF1B0u; return; } if (c.pc != 0x001FF190u) [[unlikely]] return; }
L_001FF190:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001FF1B0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[17], c.r[2].w[0] + 32u);
    st32((c.r[4].w[0] + 144u), c.f[3]);
    st32((c.r[4].w[0] + 148u), c.f[2]);
    st32((c.r[4].w[0] + 152u), c.f[1]);
    st32((c.r[4].w[0] + 156u), c.f[0]);
    c.f[12] = ld32((c.r[19].w[0] + 104u));
    set32(c.r[4], c.r[19].w[0] + 48u);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF210u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x001FF210u) [[unlikely]] return; }
L_001FF210:
    c.f[1] = ld32((c.r[19].w[0] + 48u));
    c.f[0] = ld32((c.r[19].w[0] + 32u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 32u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 52u));
    c.f[0] = ld32((c.r[19].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 36u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 56u));
    c.f[0] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 40u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 104u));
    c.f[0] = ld32((c.r[19].w[0] + 64u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 64u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 21;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001FF26C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);  if (t) { goto L_001FF274; } }
L_001FF26C:
    c.f[1] = c.f[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.budget -= 2;
L_001FF274:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[5], c.r[19].w[0] + 32u);
    st32((c.r[19].w[0] + 72u), c.f[1]);
    set32(c.r[6], c.r[19].w[0] + 128u);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF29Cu); st32((c.r[19].w[0] + 116u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001FF29Cu) [[unlikely]] return; }
L_001FF29C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF2A4u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x001FF2A4u) [[unlikely]] return; }
L_001FF2A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF2ACu);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001FF2ACu) [[unlikely]] return; }
L_001FF2AC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF2BCu); set32(c.r[4], c.r[4].w[0] - 26352u);  if (depth < kMaxDepth) unit_0009(c, 197u, depth + 1u); else { c.pc = 0x00126FE0u; return; } if (c.pc != 0x001FF2BCu) [[unlikely]] return; }
L_001FF2BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF2C4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001FF2C4u) [[unlikely]] return; }
L_001FF2C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF2CCu);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001FF2CCu) [[unlikely]] return; }
L_001FF2CC:
    c.f[13] = ld32((c.r[19].w[0] + 36u));
    c.f[14] = ld32((c.r[19].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF2DCu); c.f[12] = ld32((c.r[19].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001FF2DCu) [[unlikely]] return; }
L_001FF2DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF2E4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 182u, depth + 1u); else { c.pc = 0x001268B0u; return; } if (c.pc != 0x001FF2E4u) [[unlikely]] return; }
L_001FF2E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF2ECu); set32(c.r[4], c.r[19].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001FF2ECu) [[unlikely]] return; }
L_001FF2EC:
    c.r[2].d[0] = ld16((c.r[19].w[0] + 564u));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FF418; } }
    set32(c.r[16], ld32((c.r[19].w[0] + 580u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001FF418; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[2], 0u + 17u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001FF330; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[2], 0u + 36u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001FF330; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF330u); set32(c.r[4], ld32((c.r[16].w[0] + 264u)));  if (depth < kMaxDepth) unit_00B1(c, 250u, depth + 1u); else { c.pc = 0x003C5FD0u; return; } if (c.pc != 0x001FF330u) [[unlikely]] return; }
L_001FF330:
    st16((c.r[19].w[0] + 560u), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 515u));
    c.r[2].d[0] = ld8((c.r[19].w[0] + 515u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001FF350; } }
    c.r[2].d[0] = ld16((c.r[19].w[0] + 562u));
    c.r[2].d[0] = c.r[2].d[0] ^ 16ull;
    st16((c.r[19].w[0] + 562u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001FF350:
    set32(c.r[2], ld32((c.r[16].w[0] + 264u)));
    set32(c.r[4], c.r[19].w[0] + 32u);
    set32(c.r[5], c.r[19].w[0] + 640u);
    st32((c.r[19].w[0] + 264u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 270u)));
    st8((c.r[19].w[0] + 270u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 268u)));
    st8((c.r[19].w[0] + 268u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 269u)));
    st8((c.r[19].w[0] + 269u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 515u));
    st8((c.r[19].w[0] + 515u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[19].w[0] + 562u));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st16((c.r[19].w[0] + 562u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[19].w[0] + 64u), 0u);
    st32((c.r[19].w[0] + 116u), 0u);
    st32((c.r[19].w[0] + 504u), 0u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF3A0u); st32((c.r[19].w[0] + 508u), 0u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001FF3A0u) [[unlikely]] return; }
L_001FF3A0:
    set32(c.r[4], c.r[19].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF3ACu); set32(c.r[5], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001FF3ACu) [[unlikely]] return; }
L_001FF3AC:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[19].w[0] + 656u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF3BCu); set32(c.r[6], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001FF3BCu) [[unlikely]] return; }
L_001FF3BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[6], 0u + 3u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[29].w[0] + 96u), 0u);
    st32((c.r[29].w[0] + 100u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF3E4u); st32((c.r[29].w[0] + 108u), 0u);  if (depth < kMaxDepth) unit_002E(c, 179u, depth + 1u); else { c.pc = 0x001BA240u; return; } if (c.pc != 0x001FF3E4u) [[unlikely]] return; }
L_001FF3E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF3ECu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001FF3ECu) [[unlikely]] return; }
L_001FF3EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF3F4u); set32(c.r[4], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 199u, depth + 1u); else { c.pc = 0x001271D0u; return; } if (c.pc != 0x001FF3F4u) [[unlikely]] return; }
L_001FF3F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF3FCu); set32(c.r[4], c.r[19].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001FF3FCu) [[unlikely]] return; }
L_001FF3FC:
    c.f[12] = ld32((c.r[19].w[0] + 104u));
    set32(c.r[4], c.r[19].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF40Cu); set32(c.r[5], c.r[19].w[0] + 208u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x001FF40Cu) [[unlikely]] return; }
L_001FF40C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001FF528; } }
L_001FF418:
    c.r[2].d[0] = ld16((c.r[19].w[0] + 560u));
    c.r[2].d[0] = c.r[2].d[0] & 166ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[19].w[0] + 32u);  if (t) { goto L_001FF458; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF430u);  if (depth < kMaxDepth) unit_0011(c, 196u, depth + 1u); else { c.pc = 0x00146480u; return; } if (c.pc != 0x001FF430u) [[unlikely]] return; }
L_001FF430:
    c.f[1] = ld32((c.r[19].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001FF458; } }
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    c.f[1] = ld32((c.r[19].w[0] + 64u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001FF520; } }
    c.budget -= 1;
L_001FF458:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[19].w[0] + 144u);
    set32(c.r[5], c.r[19].w[0] + 32u);
    set32(c.r[6], c.r[29].w[0] + 80u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF47Cu); st8((c.r[19].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0012(c, 159u, depth + 1u); else { c.pc = 0x00149A80u; return; } if (c.pc != 0x001FF47Cu) [[unlikely]] return; }
L_001FF47C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001FF500; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 515u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF498u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_001A(c, 95u, depth + 1u); else { c.pc = 0x001696C0u; return; } if (c.pc != 0x001FF498u) [[unlikely]] return; }
L_001FF498:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF4A0u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_001A(c, 61u, depth + 1u); else { c.pc = 0x00168A20u; return; } if (c.pc != 0x001FF4A0u) [[unlikely]] return; }
L_001FF4A0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF4ACu); set32(c.r[5], 0u + 130u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x001FF4ACu) [[unlikely]] return; }
L_001FF4AC:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.f[5] = ld32((c.r[4].w[0]));
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[4] = ld32((c.r[4].w[0] + 4u));
    c.f[3] = ld32((c.r[4].w[0] + 8u));
    c.f[2] = ld32((c.r[4].w[0] + 12u));
    c.f[0] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.f[1] = c.r[3].w[0];
    st32((c.r[19].w[0] + 32u), c.f[5]);
    st32((c.r[19].w[0] + 36u), c.f[4]);
    st32((c.r[19].w[0] + 40u), c.f[3]);
    st32((c.r[19].w[0] + 44u), c.f[2]);
    c.f[2] = ld32((c.r[18].w[0] + 64u));
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    st32((c.r[18].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 112u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 21;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 112u), c.f[0]);  if (t) { goto L_001FF520; } }
L_001FF500:
    c.f[3] = ld32((c.r[19].w[0] + 144u));
    c.f[2] = ld32((c.r[19].w[0] + 148u));
    c.f[1] = ld32((c.r[19].w[0] + 152u));
    c.f[0] = ld32((c.r[19].w[0] + 156u));
    st32((c.r[19].w[0] + 32u), c.f[3]);
    st32((c.r[19].w[0] + 36u), c.f[2]);
    st32((c.r[19].w[0] + 40u), c.f[1]);
    st32((c.r[19].w[0] + 44u), c.f[0]);
    c.budget -= 8;
L_001FF520:
    set32(c.r[3], 0u + 1u);
    st8((c.r[19].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001FF528:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001FF550:
    c.f[3] = ld32((c.r[5].w[0] + 64u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[7].d[0] = c.r[3].d[0] | 52429ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.f[1] = c.r[7].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[2] = c.r[6].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::sub(c.f[3], c.f[1]);
    st32((c.r[5].w[0] + 64u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 112u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 17;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0] + 112u), c.f[1]);  if (t) { goto L_001FF5B0; } }
    c.f[1] = ld32((c.r[5].w[0] + 64u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001FF5C0; } }
    c.budget -= 1;
L_001FF5B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001FF5C8; } }
L_001FF5C0:
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001FF5C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001FF5D0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_001FF5E0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 29024u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[16], c.r[17].w[0] + 304u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 51u)));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF624u); set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001FF624u) [[unlikely]] return; }
L_001FF624:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF634u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 225u, depth + 1u); else { c.pc = 0x00102370u; return; } if (c.pc != 0x001FF634u) [[unlikely]] return; }
L_001FF634:
    set32(c.r[5], c.r[18].w[0] + 16u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF644u); set32(c.r[6], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001FF644u) [[unlikely]] return; }
L_001FF644:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF650u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x001FF650u) [[unlikely]] return; }
L_001FF650:
    c.f[13] = ld32((c.r[29].w[0] + 136u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF65Cu); c.f[12] = ld32((c.r[29].w[0] + 128u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001FF65Cu) [[unlikely]] return; }
L_001FF65C:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], c.r[17].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF66Cu); st32((c.r[17].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001FF66Cu) [[unlikely]] return; }
L_001FF66C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF674u); set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001FF674u) [[unlikely]] return; }
L_001FF674:
    c.f[13] = ld32((c.r[17].w[0] + 116u));
    c.f[14] = ld32((c.r[17].w[0] + 120u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF684u); c.f[12] = ld32((c.r[17].w[0] + 112u));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x001FF684u) [[unlikely]] return; }
L_001FF684:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF68Cu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001FF68Cu) [[unlikely]] return; }
L_001FF68C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 68u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);  if (t) { goto L_001FF6B0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] - 25680u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 20300u), c.r[2].w[0]);  if (t) { goto L_001FF6C0; } }
    c.budget -= 1;
L_001FF6B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 26320u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20300u), c.r[2].w[0]);
    c.budget -= 4;
L_001FF6C0:
    set32(c.r[2], c.r[29].w[0] + 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], 0u + 2u);
    st32((c.r[1].w[0] + 20240u), c.r[2].w[0]);
    set32(c.r[2], c.r[28].w[0] - 32508u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF6E0u); st32((c.r[1].w[0] + 20260u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0048(c, 23u, depth + 1u); else { c.pc = 0x00220380u; return; } if (c.pc != 0x001FF6E0u) [[unlikely]] return; }
L_001FF6E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20276u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 20224u);
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20280u), c.r[2].w[0]);
    set32(c.r[2], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st16((c.r[1].w[0] + 20286u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] + 20293u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF720u); st32((c.r[1].w[0] + 20288u), 0u);  if (depth < kMaxDepth) unit_0067(c, 136u, depth + 1u); else { c.pc = 0x0029E270u; return; } if (c.pc != 0x001FF720u) [[unlikely]] return; }
L_001FF720:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001FF740:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF76Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x001FF76Cu) [[unlikely]] return; }
L_001FF76C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001FF808; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00210000u);
    set32(c.r[7], 0u + 17u);
    set32(c.r[6], 0u + 9u);
    set32(c.r[3], c.r[3].w[0] - 2016u);
    set32(c.r[2], c.r[2].w[0] - 16u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st32((c.r[16].w[0] + 24u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 28u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF7C0u); st32((c.r[16].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006B(c, 31u, depth + 1u); else { c.pc = 0x002AC5D0u; return; } if (c.pc != 0x001FF7C0u) [[unlikely]] return; }
L_001FF7C0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001FF7D0; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_001FF7F0; } }
L_001FF7D0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 29360u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF7E8u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x001FF7E8u) [[unlikely]] return; }
L_001FF7E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FF808; } }
L_001FF7F0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 29360u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF808u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x001FF808u) [[unlikely]] return; }
L_001FF808:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001FF820:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 24864u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001FC000u < 16384u) { entry = entries_003F[(t - 0x001FC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001FF840:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 8192u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], 0u + 25600u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[17], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 562u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 566u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 80u), 0u);
    st32((c.r[4].w[0] + 84u), 0u);
    st32((c.r[4].w[0] + 88u), 0u);
    st16((c.r[4].w[0] + 560u), static_cast<std::uint16_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 21;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[18].w[0] + 304u);  if (t) { goto L_001FF8A0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001FF930; } }
L_001FF8A0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF8ACu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_006A(c, 150u, depth + 1u); else { c.pc = 0x002AA460u; return; } if (c.pc != 0x001FF8ACu) [[unlikely]] return; }
L_001FF8AC:
    set32(c.r[2], 0u + 150u);
    set32(c.r[3], 0u + 4096u);
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[17].w[0] + 2048u);
    set32(c.r[2], 0u + 25u);
    st16((c.r[16].w[0] + 64u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 4u);
    st16((c.r[16].w[0] + 66u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40360000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    st16((c.r[16].w[0] + 72u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF8E8u); st32((c.r[16].w[0] + 76u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001FF8E8u) [[unlikely]] return; }
L_001FF8E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF8F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001FF8F0u) [[unlikely]] return; }
L_001FF8F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 25040u);
    set32(c.r[5], c.r[18].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF90Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001FF90Cu) [[unlikely]] return; }
L_001FF90C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF914u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001FF914u) [[unlikely]] return; }
L_001FF914:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF91Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x001FF91Cu) [[unlikely]] return; }
L_001FF91C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF924u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001FF924u) [[unlikely]] return; }
L_001FF924:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FF9B8; } }
    c.budget -= 1;
L_001FF930:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF938u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_006A(c, 150u, depth + 1u); else { c.pc = 0x002AA460u; return; } if (c.pc != 0x001FF938u) [[unlikely]] return; }
L_001FF938:
    set32(c.r[2], 0u + 145u);
    set32(c.r[3], 0u + 4096u);
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[17].w[0] + 1984u);
    set32(c.r[2], 0u + 50u);
    st16((c.r[16].w[0] + 64u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 6u);
    st16((c.r[16].w[0] + 66u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x400C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    st16((c.r[16].w[0] + 72u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF974u); st32((c.r[16].w[0] + 76u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001FF974u) [[unlikely]] return; }
L_001FF974:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF97Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001FF97Cu) [[unlikely]] return; }
L_001FF97C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 25040u);
    set32(c.r[5], c.r[18].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF998u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001FF998u) [[unlikely]] return; }
L_001FF998:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF9A0u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001FF9A0u) [[unlikely]] return; }
L_001FF9A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF9A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x001FF9A8u) [[unlikely]] return; }
L_001FF9A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF9B0u); set32(c.r[4], 0u + 16384u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001FF9B0u) [[unlikely]] return; }
L_001FF9B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF9B8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001FF9B8u) [[unlikely]] return; }
L_001FF9B8:
    st32((c.r[29].w[0] + 64u), 0u);
    c.f[0] = ld32((c.r[16].w[0] + 68u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[18].w[0] + 48u);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF9D4u); st32((c.r[29].w[0] + 72u), 0u);  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x001FF9D4u) [[unlikely]] return; }
L_001FF9D4:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st16((c.r[18].w[0] + 500u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[18].w[0] + 498u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[18].w[0] + 496u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 66u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF9F4u); st16((c.r[18].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003F(c, 364u, depth + 1u); else { c.pc = 0x001FFA10u; return; } if (c.pc != 0x001FF9F4u) [[unlikely]] return; }
L_001FF9F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001FFA10:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.f[1] = c.r[2].w[0];
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.f[2] = ld32((c.r[4].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_001FFA78; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44F10000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001FFA78; } }
    c.f[2] = ld32((c.r[17].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001FFA78; } }
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001FFA88; } }
    c.budget -= 1;
L_001FFA78:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_001FFA88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFA90u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 196u, depth + 1u); else { c.pc = 0x00146480u; return; } if (c.pc != 0x001FFA90u) [[unlikely]] return; }
L_001FFA90:
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x43FA0000u);  if (t) { goto L_001FFAD0; } }
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001FFAD0; } }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 560u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001FFAD0; } }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 564u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FFAF0; } }
L_001FFAD0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFAE4u); st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x001FFAE4u) [[unlikely]] return; }
L_001FFAE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FFC20; } }
    c.budget -= 1;
L_001FFAF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFAF8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 301u, depth + 1u); else { c.pc = 0x0017EF30u; return; } if (c.pc != 0x001FFAF8u) [[unlikely]] return; }
L_001FFAF8:
    set32(c.r[2], ld32((c.r[17].w[0] + 504u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001FFB08; } }
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_001FFB08:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FFB20; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 64u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001FFBC0; } }
L_001FFB20:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FFBC0; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001FFBB8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 66u)));
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[12] = ld32((c.r[16].w[0] + 76u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFB54u); set32(c.r[4], ld32((c.r[17].w[0] + 504u)));  if (depth < kMaxDepth) unit_003E(c, 244u, depth + 1u); else { c.pc = 0x001FA4C0u; return; } if (c.pc != 0x001FFB54u) [[unlikely]] return; }
L_001FFB54:
    set32(c.r[2], ld32((c.r[17].w[0] + 504u)));
    c.f[20] = c.f[0];
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFB68u); set32(c.r[4], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x001FFB68u) [[unlikely]] return; }
L_001FFB68:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001FFBC0; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 72u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFB84u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 253u, depth + 1u); else { c.pc = 0x001EEBC0u; return; } if (c.pc != 0x001FFB84u) [[unlikely]] return; }
L_001FFB84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FFBC0; } }
    st32((c.r[29].w[0] + 64u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[16].w[0] + 68u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFBA4u); st32((c.r[29].w[0] + 72u), 0u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001FFBA4u) [[unlikely]] return; }
L_001FFBA4:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFBB0u); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x001FFBB0u) [[unlikely]] return; }
L_001FFBB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FFBC0; } }
L_001FFBB8:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001FFBC0:
    c.f[1] = ld32((c.r[17].w[0] + 48u));
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 56u));
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFBF4u); st32((c.r[17].w[0] + 40u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001FFBF4u) [[unlikely]] return; }
L_001FFBF4:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFC04u); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001FFC04u) [[unlikely]] return; }
L_001FFC04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFC0Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 182u, depth + 1u); else { c.pc = 0x001268B0u; return; } if (c.pc != 0x001FFC0Cu) [[unlikely]] return; }
L_001FFC0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFC14u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001FFC14u) [[unlikely]] return; }
L_001FFC14:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_001FFC20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001FFC40:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001FFC50:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_001FFC60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFC88u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x001FFC88u) [[unlikely]] return; }
L_001FFC88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001FFCD8; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[7], 0u + 17u);
    set32(c.r[6], 0u + 11u);
    set32(c.r[3], c.r[3].w[0] - 784u);
    set32(c.r[2], c.r[2].w[0] + 1856u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[5].w[0] + 28u), c.r[17].w[0]);
    st32((c.r[5].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFCD4u); st32((c.r[5].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006B(c, 31u, depth + 1u); else { c.pc = 0x002AC5D0u; return; } if (c.pc != 0x001FFCD4u) [[unlikely]] return; }
L_001FFCD4:
    c.budget -= 1;
L_001FFCD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FFCF0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 24672u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001FC000u < 16384u) { entry = entries_003F[(t - 0x001FC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001FFD10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[9], c.r[9].w[0] - 24848u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
L_001FFD2C:
    set32(c.r[6], 0u + 10u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[5], 0u + 18946u);
    c.r[10].d[0] = ld8((c.r[4].w[0] + 3u));
    c.r[3].d[0] = 0ull | 58368ull;
    set32(c.r[2], 0u - 1u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[10], c.r[10].w[0] << 6);
    st32((c.r[4].w[0] + 112u), c.r[7].w[0]);
    set32(c.r[16], c.r[9].w[0] + c.r[10].w[0]);
    st32((c.r[4].w[0] + 116u), 0u);
    st32((c.r[4].w[0] + 120u), c.r[7].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 32u)));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[7].w[0]));
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    st32((c.r[4].w[0] + 104u), c.f[0]);
    st32((c.r[4].w[0] + 64u), 0u);
    st8((c.r[4].w[0] + 11u), static_cast<std::uint8_t>(0u));
    st16((c.r[4].w[0] + 562u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 566u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 560u), static_cast<std::uint16_t>(0u));
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 26;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001FFDA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFD9Cu);  if (depth < kMaxDepth) unit_006A(c, 150u, depth + 1u); else { c.pc = 0x002AA460u; return; } if (c.pc != 0x001FFD9Cu) [[unlikely]] return; }
L_001FFD9C:
    c.budget -= 1;
L_001FFDA0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] << 6);  if (t) { goto L_001FFDC8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFDBCu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001FFDBCu) [[unlikely]] return; }
L_001FFDBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FFDD8; } }
    c.budget -= 1;
L_001FFDC8:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFDD4u); set32(c.r[4], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001FFDD4u) [[unlikely]] return; }
L_001FFDD4:
    c.budget -= 1;
L_001FFDD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFDE0u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001FFDE0u) [[unlikely]] return; }
L_001FFDE0:
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFDECu); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001FFDECu) [[unlikely]] return; }
L_001FFDEC:
    c.f[3] = ld32((c.r[17].w[0] + 32u));
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 44u));
    st32((c.r[17].w[0] + 128u), c.f[3]);
    st32((c.r[17].w[0] + 132u), c.f[2]);
    st32((c.r[17].w[0] + 136u), c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFE10u); st32((c.r[17].w[0] + 140u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001FFE10u) [[unlikely]] return; }
L_001FFE10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFE18u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x001FFE18u) [[unlikely]] return; }
L_001FFE18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFE20u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 14u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001FFE20u) [[unlikely]] return; }
L_001FFE20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFE28u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 12u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001FFE28u) [[unlikely]] return; }
L_001FFE28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFE30u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 10u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001FFE30u) [[unlikely]] return; }
L_001FFE30:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[5], c.r[17].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFE40u); set32(c.r[4], c.r[4].w[0] - 24784u);  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x001FFE40u) [[unlikely]] return; }
L_001FFE40:
    c.f[12] = ld32((c.r[17].w[0] + 104u));
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFE50u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x001FFE50u) [[unlikely]] return; }
L_001FFE50:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001FFE88; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 504u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[2].w[0] + 64u);  if (t) { goto L_001FFE88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFE70u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 238u, depth + 1u); else { c.pc = 0x001EE9F0u; return; } if (c.pc != 0x001FFE70u) [[unlikely]] return; }
L_001FFE70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FFE88; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 512u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[17].w[0] + 504u), 0u);
    c.budget -= 4;
L_001FFE88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFE90u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 103u, depth + 1u); else { c.pc = 0x002009E0u; return; } if (c.pc != 0x001FFE90u) [[unlikely]] return; }
L_001FFE90:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001FFE98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFEA0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 109u, depth + 1u); else { c.pc = 0x00200AD0u; return; } if (c.pc != 0x001FFEA0u) [[unlikely]] return; }
L_001FFEA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FFF20; } }
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[6], c.r[6].w[0] - 24688u);
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    c.budget -= 9;
L_001FFECC:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[2].w[0] + 16u), c.f[0]);
    c.budget -= 21;
L_001FFF20:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FFE98u | kUnwind; return; } goto L_001FFE98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFF38u);  if (depth < kMaxDepth) unit_003F(c, 403u, depth + 1u); else { c.pc = 0x001FFF50u; return; } if (c.pc != 0x001FFF38u) [[unlikely]] return; }
L_001FFF38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FFF50:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 24848u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 3u));
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] + 144u), c.f[3]);
    st32((c.r[4].w[0] + 148u), c.f[2]);
    st32((c.r[4].w[0] + 152u), c.f[1]);
    st32((c.r[4].w[0] + 156u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 20;
    { const bool t = c.r[2].sd[0] <= 0; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001FFFB8; } }
    goto L_001FFFA0;
L_001FFF9C:
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_001FFFA0:
    set32(c.r[2], ld32((c.r[17].w[0] + 504u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FFFB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFFB4u);  if (depth < kMaxDepth) unit_0040(c, 118u, depth + 1u); else { c.pc = 0x00200D20u; return; } if (c.pc != 0x001FFFB4u) [[unlikely]] return; }
L_001FFFB4:
    c.budget -= 1;
L_001FFFB8:
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.f[12] = ld32((c.r[17].w[0] + 104u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFFC8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x001FFFC8u) [[unlikely]] return; }
L_001FFFC8:
    c.f[1] = ld32((c.r[17].w[0] + 48u));
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 56u));
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 11;
L_001FFFF4:
    st32((c.r[17].w[0] + 40u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.f[0] = ld32((c.r[17].w[0] + 64u));
    c.budget -= 3;
    [[clang::musttail]] return unit_0040(c, 1u, depth);
}

}
