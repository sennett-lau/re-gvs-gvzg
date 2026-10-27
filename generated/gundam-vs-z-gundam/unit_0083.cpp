#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0083[4096] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 5, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 8, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0,
    0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0,
    0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0,
    0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0,
    42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 54,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 57,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0,
    64, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    70, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 73, 0, 0, 0, 74, 0, 75, 0, 76, 0,
    0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 81, 0, 82, 0,
    83, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0,
    86, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0,
    0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 99, 0, 100, 0, 101, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 107, 0,
    108, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0,
    116, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0,
    0, 119, 0, 0, 0, 120, 0, 121, 0, 122, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0,
    0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0,
    133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0,
    140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 144, 0, 0, 0,
    0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0,
    148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151,
    0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158,
    0, 0, 0, 0, 0, 159, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    162, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0,
    170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0,
    0, 0, 175, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0,
    0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 190,
    0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 194, 0, 0, 0, 0, 0, 0,
    195, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 198, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    205, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 209, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 213, 0, 0,
    0, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 216, 0, 0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 219, 0, 0,
    0, 0, 0, 220, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 224,
    0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 228, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    231, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 0, 0, 0, 239, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0,
    245, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 248, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 249, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 251, 0, 0, 252, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 254,
    0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 256, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 259,
    0, 0, 260, 0, 0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 264, 0, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0,
    267, 0, 0, 268, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0,
    0, 0, 272, 0, 0, 273, 0, 0, 274, 0, 0, 275, 0, 0, 276, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 278, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 283, 0, 0, 0, 0, 284, 0, 0, 0,
    0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 290, 0, 0, 0, 291, 0, 0, 0, 0, 0,
    292, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0,
    0, 0, 296, 0, 0, 0, 297, 0, 0, 298, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 302, 0, 0, 0, 0,
    303, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 306, 0, 0, 0, 0, 307, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0,
    310, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 312, 0, 0, 0, 313, 0, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0,
    317, 0, 0, 318, 0, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0, 321, 0, 0, 322, 0, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0,
    325, 0, 0, 326, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 329, 0, 0, 0, 0, 0, 330, 0, 0, 0,
    0, 0, 0, 331, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 334, 0, 0, 0, 335, 0,
    0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0,
    0, 0, 0, 340, 0, 0, 341, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 344, 0, 0, 0, 0, 0,
    345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 348, 0, 0, 0, 349, 0, 0, 350,
    0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 354, 0, 0, 0, 0, 0, 355, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 359, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 362, 363, 0, 0, 364, 0, 0, 0, 0, 365, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 367,
    0, 0, 0, 0, 368, 0, 0, 369, 0, 0, 0, 0, 370, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 372, 0, 0, 373, 0, 0, 0, 0, 0,
    374, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0,
    378, 0, 0, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0,
    386, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 388, 0, 0, 389, 0, 0, 0, 0, 390, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0,
    0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 395, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0,
    401, 0, 0, 0, 402, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0,
    407, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 412, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    414, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 417,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 420, 0, 421, 0, 0, 0,
    0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 423, 0, 0, 424, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    426, 0, 0, 427, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 429, 0, 0, 430, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 432, 0, 0, 433, 0, 0, 0, 434, 0, 0, 0, 0, 0, 435, 436, 0, 437, 438, 439, 0, 0, 0, 0, 0, 440, 0, 0, 441,
};

void unit_0083(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0030C000;
    case 2u: goto L_0030C01C;
    case 3u: goto L_0030C060;
    case 4u: goto L_0030C070;
    case 5u: goto L_0030C098;
    case 6u: goto L_0030C0A0;
    case 7u: goto L_0030C0BC;
    case 8u: goto L_0030C10C;
    case 9u: goto L_0030C118;
    case 10u: goto L_0030C1B0;
    case 11u: goto L_0030C1D0;
    case 12u: goto L_0030C210;
    case 13u: goto L_0030C220;
    case 14u: goto L_0030C24C;
    case 15u: goto L_0030C270;
    case 16u: goto L_0030C3C4;
    case 17u: goto L_0030C3D4;
    case 18u: goto L_0030C3DC;
    case 19u: goto L_0030C3F0;
    case 20u: goto L_0030C418;
    case 21u: goto L_0030C498;
    case 22u: goto L_0030C4A8;
    case 23u: goto L_0030C4CC;
    case 24u: goto L_0030C4F4;
    case 25u: goto L_0030C508;
    case 26u: goto L_0030C530;
    case 27u: goto L_0030C5EC;
    case 28u: goto L_0030C610;
    case 29u: goto L_0030C630;
    case 30u: goto L_0030C678;
    case 31u: goto L_0030C690;
    case 32u: goto L_0030C6C0;
    case 33u: goto L_0030C700;
    case 34u: goto L_0030C770;
    case 35u: goto L_0030C7A4;
    case 36u: goto L_0030C7C0;
    case 37u: goto L_0030C7D0;
    case 38u: goto L_0030C820;
    case 39u: goto L_0030C840;
    case 40u: goto L_0030C850;
    case 41u: goto L_0030C860;
    case 42u: goto L_0030C880;
    case 43u: goto L_0030C8CC;
    case 44u: goto L_0030C918;
    case 45u: goto L_0030C998;
    case 46u: goto L_0030C9C0;
    case 47u: goto L_0030C9EC;
    case 48u: goto L_0030CA24;
    case 49u: goto L_0030CA58;
    case 50u: goto L_0030CA80;
    case 51u: goto L_0030CAC8;
    case 52u: goto L_0030CB38;
    case 53u: goto L_0030CB6C;
    case 54u: goto L_0030CB7C;
    case 55u: goto L_0030CBA8;
    case 56u: goto L_0030CBE4;
    case 57u: goto L_0030CBFC;
    case 58u: goto L_0030CC60;
    case 59u: goto L_0030CCAC;
    case 60u: goto L_0030CCC8;
    case 61u: goto L_0030CCE0;
    case 62u: goto L_0030CD2C;
    case 63u: goto L_0030CD68;
    case 64u: goto L_0030CD80;
    case 65u: goto L_0030CDA0;
    case 66u: goto L_0030CDC0;
    case 67u: goto L_0030CE2C;
    case 68u: goto L_0030CE90;
    case 69u: goto L_0030CEB0;
    case 70u: goto L_0030CF00;
    case 71u: goto L_0030CF08;
    case 72u: goto L_0030CFD0;
    case 73u: goto L_0030CFD8;
    case 74u: goto L_0030CFE8;
    case 75u: goto L_0030CFF0;
    case 76u: goto L_0030CFF8;
    case 77u: goto L_0030D008;
    case 78u: goto L_0030D044;
    case 79u: goto L_0030D050;
    case 80u: goto L_0030D064;
    case 81u: goto L_0030D070;
    case 82u: goto L_0030D078;
    case 83u: goto L_0030D080;
    case 84u: goto L_0030D0A0;
    case 85u: goto L_0030D0E8;
    case 86u: goto L_0030D100;
    case 87u: goto L_0030D120;
    case 88u: goto L_0030D130;
    case 89u: goto L_0030D148;
    case 90u: goto L_0030D150;
    case 91u: goto L_0030D160;
    case 92u: goto L_0030D178;
    case 93u: goto L_0030D190;
    case 94u: goto L_0030D1B0;
    case 95u: goto L_0030D218;
    case 96u: goto L_0030D250;
    case 97u: goto L_0030D260;
    case 98u: goto L_0030D28C;
    case 99u: goto L_0030D310;
    case 100u: goto L_0030D318;
    case 101u: goto L_0030D320;
    case 102u: goto L_0030D340;
    case 103u: goto L_0030D360;
    case 104u: goto L_0030D3A4;
    case 105u: goto L_0030D3C4;
    case 106u: goto L_0030D3F0;
    case 107u: goto L_0030D3F8;
    case 108u: goto L_0030D400;
    case 109u: goto L_0030D408;
    case 110u: goto L_0030D420;
    case 111u: goto L_0030D53C;
    case 112u: goto L_0030D600;
    case 113u: goto L_0030D640;
    case 114u: goto L_0030D654;
    case 115u: goto L_0030D670;
    case 116u: goto L_0030D680;
    case 117u: goto L_0030D6A0;
    case 118u: goto L_0030D6E4;
    case 119u: goto L_0030D704;
    case 120u: goto L_0030D714;
    case 121u: goto L_0030D71C;
    case 122u: goto L_0030D724;
    case 123u: goto L_0030D72C;
    case 124u: goto L_0030D740;
    case 125u: goto L_0030D900;
    case 126u: goto L_0030D940;
    case 127u: goto L_0030D95C;
    case 128u: goto L_0030D970;
    case 129u: goto L_0030D990;
    case 130u: goto L_0030D9C0;
    case 131u: goto L_0030D9E0;
    case 132u: goto L_0030D9F8;
    case 133u: goto L_0030DA00;
    case 134u: goto L_0030DA1C;
    case 135u: goto L_0030DA30;
    case 136u: goto L_0030DB70;
    case 137u: goto L_0030DBB0;
    case 138u: goto L_0030DBCC;
    case 139u: goto L_0030DBE0;
    case 140u: goto L_0030DC00;
    case 141u: goto L_0030DC30;
    case 142u: goto L_0030DC50;
    case 143u: goto L_0030DC68;
    case 144u: goto L_0030DC70;
    case 145u: goto L_0030DC8C;
    case 146u: goto L_0030DCA0;
    case 147u: goto L_0030DDE0;
    case 148u: goto L_0030DE00;
    case 149u: goto L_0030DE4C;
    case 150u: goto L_0030DE6C;
    case 151u: goto L_0030DEFC;
    case 152u: goto L_0030DF10;
    case 153u: goto L_0030E000;
    case 154u: goto L_0030E060;
    case 155u: goto L_0030E11C;
    case 156u: goto L_0030E18C;
    case 157u: goto L_0030E1B0;
    case 158u: goto L_0030E1FC;
    case 159u: goto L_0030E214;
    case 160u: goto L_0030E220;
    case 161u: goto L_0030E254;
    case 162u: goto L_0030E280;
    case 163u: goto L_0030E2A4;
    case 164u: goto L_0030E2B8;
    case 165u: goto L_0030E2D0;
    case 166u: goto L_0030E2E8;
    case 167u: goto L_0030E318;
    case 168u: goto L_0030E350;
    case 169u: goto L_0030E36C;
    case 170u: goto L_0030E380;
    case 171u: goto L_0030E3A0;
    case 172u: goto L_0030E410;
    case 173u: goto L_0030E440;
    case 174u: goto L_0030E464;
    case 175u: goto L_0030E488;
    case 176u: goto L_0030E494;
    case 177u: goto L_0030E4E0;
    case 178u: goto L_0030E510;
    case 179u: goto L_0030E524;
    case 180u: goto L_0030E540;
    case 181u: goto L_0030E550;
    case 182u: goto L_0030E560;
    case 183u: goto L_0030E570;
    case 184u: goto L_0030E58C;
    case 185u: goto L_0030E5AC;
    case 186u: goto L_0030E5B8;
    case 187u: goto L_0030E5D0;
    case 188u: goto L_0030E5E0;
    case 189u: goto L_0030E5F0;
    case 190u: goto L_0030E5FC;
    case 191u: goto L_0030E610;
    case 192u: goto L_0030E634;
    case 193u: goto L_0030E658;
    case 194u: goto L_0030E664;
    case 195u: goto L_0030E680;
    case 196u: goto L_0030E690;
    case 197u: goto L_0030E6A0;
    case 198u: goto L_0030E6AC;
    case 199u: goto L_0030E6C0;
    case 200u: goto L_0030E6EC;
    case 201u: goto L_0030E714;
    case 202u: goto L_0030E724;
    case 203u: goto L_0030E730;
    case 204u: goto L_0030E750;
    case 205u: goto L_0030E780;
    case 206u: goto L_0030E7A4;
    case 207u: goto L_0030E7BC;
    case 208u: goto L_0030E7E8;
    case 209u: goto L_0030E7F0;
    case 210u: goto L_0030E820;
    case 211u: goto L_0030E844;
    case 212u: goto L_0030E868;
    case 213u: goto L_0030E874;
    case 214u: goto L_0030E890;
    case 215u: goto L_0030E8A4;
    case 216u: goto L_0030E8BC;
    case 217u: goto L_0030E8C8;
    case 218u: goto L_0030E8E0;
    case 219u: goto L_0030E8F4;
    case 220u: goto L_0030E90C;
    case 221u: goto L_0030E918;
    case 222u: goto L_0030E930;
    case 223u: goto L_0030E960;
    case 224u: goto L_0030E97C;
    case 225u: goto L_0030E994;
    case 226u: goto L_0030E9BC;
    case 227u: goto L_0030E9E0;
    case 228u: goto L_0030EA0C;
    case 229u: goto L_0030EA20;
    case 230u: goto L_0030EA58;
    case 231u: goto L_0030EA80;
    case 232u: goto L_0030EA98;
    case 233u: goto L_0030EAC8;
    case 234u: goto L_0030EB20;
    case 235u: goto L_0030EB50;
    case 236u: goto L_0030EB98;
    case 237u: goto L_0030EBD0;
    case 238u: goto L_0030EBE0;
    case 239u: goto L_0030EBF8;
    case 240u: goto L_0030EC3C;
    case 241u: goto L_0030EC48;
    case 242u: goto L_0030EC70;
    case 243u: goto L_0030ECB8;
    case 244u: goto L_0030ECF0;
    case 245u: goto L_0030ED00;
    case 246u: goto L_0030ED18;
    case 247u: goto L_0030ED5C;
    case 248u: goto L_0030ED68;
    case 249u: goto L_0030ED90;
    case 250u: goto L_0030EDA4;
    case 251u: goto L_0030EDBC;
    case 252u: goto L_0030EDC8;
    case 253u: goto L_0030EDE0;
    case 254u: goto L_0030EDFC;
    case 255u: goto L_0030EE1C;
    case 256u: goto L_0030EE28;
    case 257u: goto L_0030EE40;
    case 258u: goto L_0030EE5C;
    case 259u: goto L_0030EE7C;
    case 260u: goto L_0030EE88;
    case 261u: goto L_0030EEA0;
    case 262u: goto L_0030EEB0;
    case 263u: goto L_0030EEC0;
    case 264u: goto L_0030EECC;
    case 265u: goto L_0030EEE0;
    case 266u: goto L_0030EEF0;
    case 267u: goto L_0030EF00;
    case 268u: goto L_0030EF0C;
    case 269u: goto L_0030EF20;
    case 270u: goto L_0030EF38;
    case 271u: goto L_0030EF74;
    case 272u: goto L_0030EF88;
    case 273u: goto L_0030EF94;
    case 274u: goto L_0030EFA0;
    case 275u: goto L_0030EFAC;
    case 276u: goto L_0030EFB8;
    case 277u: goto L_0030EFCC;
    case 278u: goto L_0030F004;
    case 279u: goto L_0030F010;
    case 280u: goto L_0030F030;
    case 281u: goto L_0030F040;
    case 282u: goto L_0030F050;
    case 283u: goto L_0030F05C;
    case 284u: goto L_0030F070;
    case 285u: goto L_0030F088;
    case 286u: goto L_0030F098;
    case 287u: goto L_0030F0B0;
    case 288u: goto L_0030F11C;
    case 289u: goto L_0030F140;
    case 290u: goto L_0030F158;
    case 291u: goto L_0030F168;
    case 292u: goto L_0030F180;
    case 293u: goto L_0030F198;
    case 294u: goto L_0030F1C0;
    case 295u: goto L_0030F1E4;
    case 296u: goto L_0030F208;
    case 297u: goto L_0030F218;
    case 298u: goto L_0030F224;
    case 299u: goto L_0030F240;
    case 300u: goto L_0030F250;
    case 301u: goto L_0030F260;
    case 302u: goto L_0030F26C;
    case 303u: goto L_0030F280;
    case 304u: goto L_0030F290;
    case 305u: goto L_0030F2A0;
    case 306u: goto L_0030F2AC;
    case 307u: goto L_0030F2C0;
    case 308u: goto L_0030F2D4;
    case 309u: goto L_0030F2F4;
    case 310u: goto L_0030F300;
    case 311u: goto L_0030F320;
    case 312u: goto L_0030F330;
    case 313u: goto L_0030F340;
    case 314u: goto L_0030F34C;
    case 315u: goto L_0030F360;
    case 316u: goto L_0030F370;
    case 317u: goto L_0030F380;
    case 318u: goto L_0030F38C;
    case 319u: goto L_0030F3A0;
    case 320u: goto L_0030F3B0;
    case 321u: goto L_0030F3C0;
    case 322u: goto L_0030F3CC;
    case 323u: goto L_0030F3E0;
    case 324u: goto L_0030F3F0;
    case 325u: goto L_0030F400;
    case 326u: goto L_0030F40C;
    case 327u: goto L_0030F420;
    case 328u: goto L_0030F448;
    case 329u: goto L_0030F458;
    case 330u: goto L_0030F470;
    case 331u: goto L_0030F48C;
    case 332u: goto L_0030F4A0;
    case 333u: goto L_0030F4D0;
    case 334u: goto L_0030F4E8;
    case 335u: goto L_0030F4F8;
    case 336u: goto L_0030F510;
    case 337u: goto L_0030F528;
    case 338u: goto L_0030F550;
    case 339u: goto L_0030F56C;
    case 340u: goto L_0030F58C;
    case 341u: goto L_0030F598;
    case 342u: goto L_0030F5B0;
    case 343u: goto L_0030F5D8;
    case 344u: goto L_0030F5E8;
    case 345u: goto L_0030F600;
    case 346u: goto L_0030F62C;
    case 347u: goto L_0030F650;
    case 348u: goto L_0030F660;
    case 349u: goto L_0030F670;
    case 350u: goto L_0030F67C;
    case 351u: goto L_0030F690;
    case 352u: goto L_0030F6AC;
    case 353u: goto L_0030F6CC;
    case 354u: goto L_0030F6D8;
    case 355u: goto L_0030F6F0;
    case 356u: goto L_0030F718;
    case 357u: goto L_0030F730;
    case 358u: goto L_0030F758;
    case 359u: goto L_0030F764;
    case 360u: goto L_0030F790;
    case 361u: goto L_0030F7A0;
    case 362u: goto L_0030F7AC;
    case 363u: goto L_0030F7B0;
    case 364u: goto L_0030F7BC;
    case 365u: goto L_0030F7D0;
    case 366u: goto L_0030F7E4;
    case 367u: goto L_0030F7FC;
    case 368u: goto L_0030F810;
    case 369u: goto L_0030F81C;
    case 370u: goto L_0030F830;
    case 371u: goto L_0030F844;
    case 372u: goto L_0030F85C;
    case 373u: goto L_0030F868;
    case 374u: goto L_0030F880;
    case 375u: goto L_0030F8A0;
    case 376u: goto L_0030F8BC;
    case 377u: goto L_0030F8E0;
    case 378u: goto L_0030F900;
    case 379u: goto L_0030F918;
    case 380u: goto L_0030F928;
    case 381u: goto L_0030F950;
    case 382u: goto L_0030F970;
    case 383u: goto L_0030F99C;
    case 384u: goto L_0030F9B4;
    case 385u: goto L_0030F9E0;
    case 386u: goto L_0030FA00;
    case 387u: goto L_0030FA14;
    case 388u: goto L_0030FA2C;
    case 389u: goto L_0030FA38;
    case 390u: goto L_0030FA4C;
    case 391u: goto L_0030FA50;
    case 392u: goto L_0030FA78;
    case 393u: goto L_0030FA98;
    case 394u: goto L_0030FAB0;
    case 395u: goto L_0030FAD0;
    case 396u: goto L_0030FAD8;
    case 397u: goto L_0030FB00;
    case 398u: goto L_0030FB2C;
    case 399u: goto L_0030FB40;
    case 400u: goto L_0030FB6C;
    case 401u: goto L_0030FB80;
    case 402u: goto L_0030FB90;
    case 403u: goto L_0030FBA0;
    case 404u: goto L_0030FBC0;
    case 405u: goto L_0030FBD4;
    case 406u: goto L_0030FBF0;
    case 407u: goto L_0030FC00;
    case 408u: goto L_0030FC20;
    case 409u: goto L_0030FC40;
    case 410u: goto L_0030FC90;
    case 411u: goto L_0030FCD8;
    case 412u: goto L_0030FCF8;
    case 413u: goto L_0030FD30;
    case 414u: goto L_0030FD80;
    case 415u: goto L_0030FD90;
    case 416u: goto L_0030FDE4;
    case 417u: goto L_0030FDFC;
    case 418u: goto L_0030FE34;
    case 419u: goto L_0030FE4C;
    case 420u: goto L_0030FE68;
    case 421u: goto L_0030FE70;
    case 422u: goto L_0030FE90;
    case 423u: goto L_0030FEAC;
    case 424u: goto L_0030FEB8;
    case 425u: goto L_0030FED0;
    case 426u: goto L_0030FF00;
    case 427u: goto L_0030FF0C;
    case 428u: goto L_0030FF24;
    case 429u: goto L_0030FF38;
    case 430u: goto L_0030FF44;
    case 431u: goto L_0030FF60;
    case 432u: goto L_0030FF90;
    case 433u: goto L_0030FF9C;
    case 434u: goto L_0030FFAC;
    case 435u: goto L_0030FFC4;
    case 436u: goto L_0030FFC8;
    case 437u: goto L_0030FFD0;
    case 438u: goto L_0030FFD4;
    case 439u: goto L_0030FFD8;
    case 440u: goto L_0030FFF0;
    case 441u: goto L_0030FFFC;
    default: bad_entry(c, 0x0030C000u); return;
    }
L_0030C000:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.r[3].d[0] = c.r[16].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0030C028; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C01Cu); set32(c.r[5], 0u + 166u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x0030C01Cu) [[unlikely]] return; }
L_0030C01C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030C118; } }
    c.budget -= 1;
L_0030C028:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(544ll);  if (t) { goto L_0030C040; } }
    c.r[3].d[0] = c.r[4].d[0] | 32768ull;
    c.r[4].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 3;
L_0030C040:
    c.r[3].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[4].d[0] = ld16((c.r[4].w[0] + 4u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030C118; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C060u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));  if (depth < kMaxDepth) unit_006E(c, 251u, depth + 1u); else { c.pc = 0x002BA910u; return; } if (c.pc != 0x0030C060u) [[unlikely]] return; }
L_0030C060:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0030C078; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C070u); set32(c.r[5], 0u + 171u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x0030C070u) [[unlikely]] return; }
L_0030C070:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030C190; } }
L_0030C078:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 5u);  if (t) { goto L_0030C090; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0030C0E0; } }
L_0030C090:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0030C098:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C0A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 277u, depth + 1u); else { c.pc = 0x002BAEE0u; return; } if (c.pc != 0x0030C0A0u) [[unlikely]] return; }
L_0030C0A0:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0030C0C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C0BCu); set32(c.r[5], 0u + 171u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x0030C0BCu) [[unlikely]] return; }
L_0030C0BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030C190; } }
    c.budget -= 1;
L_0030C0C8:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[2].d[0] << 56;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030C098u | kUnwind; return; } goto L_0030C098; } }
L_0030C0E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_0030C0F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0030C100; } }
L_0030C0F8:
    set32(c.r[2], 0u + 2u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0030C100:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C10Cu); set32(c.r[5], 0u + 165u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x0030C10Cu) [[unlikely]] return; }
L_0030C10C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C118u); c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));  if (depth < kMaxDepth) unit_006E(c, 227u, depth + 1u); else { c.pc = 0x002BA510u; return; } if (c.pc != 0x0030C118u) [[unlikely]] return; }
L_0030C118:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030C160; } }
    c.f[2] = ld32((c.r[17].w[0] + 12u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D880000u);
    c.r[4].d[0] = c.r[3].d[0] | 34953ull;
    c.f[1] = c.r[4].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[17].w[0] + 12u), c.f[1]);  if (t) { goto L_0030C190; } }
    st32((c.r[17].w[0] + 12u), c.f[0]);
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030C190; } }
L_0030C160:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D880000u);
    c.f[2] = ld32((c.r[17].w[0] + 12u));
    c.r[3].d[0] = c.r[3].d[0] | 34953ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 12u), c.f[1]);  if (t) { goto L_0030C190; } }
    st32((c.r[17].w[0] + 12u), c.f[0]);
    st8((c.r[17].w[0] + 16u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0030C190:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0030C1B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 314u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C1D0u); set32(c.r[16], c.r[17].w[0] + 304u);  if (depth < kMaxDepth) unit_006E(c, 237u, depth + 1u); else { c.pc = 0x002BA690u; return; } if (c.pc != 0x0030C1D0u) [[unlikely]] return; }
L_0030C1D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0030C1E0; } }
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0030C1E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    c.r[1].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_0030C1F8; } }
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0030C1F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0030C210:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0030C220:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 308u)));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 4u));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0030C258; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C24Cu); set32(c.r[5], 0u + 167u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x0030C24Cu) [[unlikely]] return; }
L_0030C24C:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0030C258:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030C270:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_0030C508; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    c.r[1].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0030C338; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0xC3920000u);  if (t) { goto L_0030C2D0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1D00000u);
    c.f[22] = c.r[3].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[2].d[0] & 2ull;  if (t) { goto L_0030C2D8; } }
L_0030C2D0:
    c.f[22] = c.r[3].w[0];
    c.r[3].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 2;
L_0030C2D8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x43100000u);  if (t) { goto L_0030C2F0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42820000u);
    c.f[21] = c.r[3].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[4].d[0] & 1ull;  if (t) { goto L_0030C2F8; } }
L_0030C2F0:
    c.f[21] = c.r[3].w[0];
    c.r[3].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 2;
L_0030C2F8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x439F0000u);  if (t) { goto L_0030C310; } }
    c.f[0] = c.r[3].w[0];
    c.f[22] = fp::add(c.f[22], c.f[0]);
    c.budget -= 4;
L_0030C310:
    c.r[3].d[0] = c.r[4].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x43800000u);  if (t) { goto L_0030C328; } }
    c.f[0] = c.r[3].w[0];
    c.f[21] = fp::sub(c.f[21], c.f[0]);
    c.budget -= 3;
L_0030C328:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[3].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030C3A0; } }
L_0030C338:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0xC2AA0000u);  if (t) { goto L_0030C358; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42AA0000u);
    c.f[22] = c.r[3].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[2].d[0] & 2ull;  if (t) { goto L_0030C360; } }
L_0030C358:
    c.f[22] = c.r[3].w[0];
    c.r[3].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 2;
L_0030C360:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);  if (t) { goto L_0030C378; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1F80000u);
    c.f[21] = c.r[3].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030C37C; } }
L_0030C378:
    c.f[21] = c.r[3].w[0];
    c.budget -= 1;
L_0030C37C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 16136u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F260000u);
    c.r[3].d[0] = c.r[3].d[0] | 26214ull;
    c.f[20] = c.r[3].w[0];
    c.f[22] = fp::add(c.f[22], c.f[0]);
    c.budget -= 9;
L_0030C3A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[18], 0u + 8192u);  if (t) { goto L_0030C3BC; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0030C3BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u - 8192u);  if (t) { goto L_0030C3BC; } }
L_0030C3BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C3C4u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0030C3C4u) [[unlikely]] return; }
L_0030C3C4:
    c.f[14] = 0u;
    c.f[12] = c.f[22];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C3D4u); c.f[13] = c.f[21];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0030C3D4u) [[unlikely]] return; }
L_0030C3D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C3DCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x0030C3DCu) [[unlikely]] return; }
L_0030C3DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.f[12] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C3F0u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0030C3F0u) [[unlikely]] return; }
L_0030C3F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    set32(c.r[5], 0u + 8u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], c.r[3].w[0] + 81u);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C418u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0030C418u) [[unlikely]] return; }
L_0030C418:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    c.r[1].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0xC31F0000u);  if (t) { goto L_0030C470; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42D00000u);
    c.f[21] = c.r[2].w[0];
    c.f[20] = c.r[3].w[0];
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030C450; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x439F0000u);
    c.f[0] = c.r[2].w[0];
    c.f[21] = fp::add(c.f[21], c.f[0]);
    c.budget -= 4;
L_0030C450:
    c.r[2].d[0] = c.r[4].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x43800000u);  if (t) { goto L_0030C468; } }
    c.f[0] = c.r[2].w[0];
    c.f[20] = fp::sub(c.f[20], c.f[0]);
    c.budget -= 3;
L_0030C468:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 19u);  if (t) { goto L_0030C490; } }
L_0030C470:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 16136u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1800000u);
    c.f[21] = ld32((c.r[3].w[0]));
    set32(c.r[16], 0u + 94u);
    c.f[20] = c.r[2].w[0];
    c.budget -= 8;
L_0030C490:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C498u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0030C498u) [[unlikely]] return; }
L_0030C498:
    c.f[14] = 0u;
    c.f[12] = c.f[21];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C4A8u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0030C4A8u) [[unlikely]] return; }
L_0030C4A8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0030C4D0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[13] = c.r[2].w[0];
    c.f[12] = c.r[3].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C4CCu); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0030C4CCu) [[unlikely]] return; }
L_0030C4CC:
    c.budget -= 1;
L_0030C4D0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0030C4F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C4F4u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0030C4F4u) [[unlikely]] return; }
L_0030C4F4:
    c.budget -= 1;
L_0030C4F8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C508u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0083(c, 26u, depth + 1u); else { c.pc = 0x0030C530u; return; } if (c.pc != 0x0030C508u) [[unlikely]] return; }
L_0030C508:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0030C530:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[4].w[0] + 304u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18112u)));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0030C578; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFE00000u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] | 57344ull;  if (t) { goto L_0030C5B0; } }
    c.budget -= 1;
L_0030C578:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);  if (t) { goto L_0030C5B0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18114u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0030C5A8; } }
    c.r[6].d[0] = c.r[5].d[0] << 56;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFE00000u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] | 57344ull;  if (t) { goto L_0030C5B0; } }
L_0030C5A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF970000u);
    c.r[16].d[0] = c.r[2].d[0] | 38807ull;
    c.budget -= 2;
L_0030C5B0:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0030C5F0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0030C5F0; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[4], c.r[18].w[0] + 1u);
    c.f[12] = ld32((c.r[17].w[0] + 12u));
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C5ECu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 18u, depth + 1u); else { c.pc = 0x002D8380u; return; } if (c.pc != 0x0030C5ECu) [[unlikely]] return; }
L_0030C5EC:
    c.budget -= 1;
L_0030C5F0:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[18].w[0] << 4);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - c.r[18].w[0]);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C610u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 22u, depth + 1u); else { c.pc = 0x002D83F0u; return; } if (c.pc != 0x0030C610u) [[unlikely]] return; }
L_0030C610:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0030C630:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030C678; } }
    c.r[5].d[0] = c.r[5].d[0] << 56;
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0030C670; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0030C668; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030C678; } }
L_0030C668:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030C678; } }
L_0030C670:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C678u);  if (depth < kMaxDepth) unit_0083(c, 31u, depth + 1u); else { c.pc = 0x0030C690u; return; } if (c.pc != 0x0030C678u) [[unlikely]] return; }
L_0030C678:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0030C690:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[6], c.r[4].w[0] + 304u);  if (t) { goto L_0030C6B8; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_0030C6B8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0030C6B8; } }
    st8((c.r[6].w[0] + 9u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0030C6B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0030C6C0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[7], c.r[4].w[0] + 304u);  if (t) { goto L_0030C6F0; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0030C6F0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_0030C6E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_0030C6F0; } }
L_0030C6E8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 9u)));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0030C6F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0030C700:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[4].w[0] + 304u);  if (t) { goto L_0030C768; } }
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], 0u + 3u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0030C760; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0030C758; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_0030C750; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0030C748; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030C768; } }
L_0030C748:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 10u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0030C768; } }
L_0030C750:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030C768; } }
L_0030C758:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 10u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_0030C768; } }
L_0030C760:
    st8((c.r[6].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0030C768:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0030C770:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[5].w[0] + 304u);  if (t) { goto L_0030C7A8; } }
    set32(c.r[3], 0u + 6u);
    set32(c.r[2], 0u + 4u);
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[5].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C7A4u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));  if (depth < kMaxDepth) unit_006E(c, 227u, depth + 1u); else { c.pc = 0x002BA510u; return; } if (c.pc != 0x0030C7A4u) [[unlikely]] return; }
L_0030C7A4:
    c.budget -= 1;
L_0030C7A8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0030C7C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 312u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_0030C7D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0030C7E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030C818; } }
    c.budget -= 1;
L_0030C7E8:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0030C800; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030C818; } }
    c.budget -= 1;
L_0030C800:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0030C814; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030C818; } }
L_0030C814:
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_0030C818:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0030C820:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 16096u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0030C000u < 16384u) { entry = entries_0083[(t - 0x0030C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0030C840:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0030C850:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC040u | kUnwind; return; } [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_0030C860:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 14720u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0030C000u < 16384u) { entry = entries_0083[(t - 0x0030C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0030C880:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 29080u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[7].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[21], c.r[22].w[0] + 304u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C8CCu); st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x0030C8CCu) [[unlikely]] return; }
L_0030C8CC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00310000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] - 13216u);
    set32(c.r[2], c.r[2].w[0] - 14743u);
    st32((c.r[22].w[0] + 168u), c.r[3].w[0]);
    st32((c.r[22].w[0] + 88u), 0u);
    st32((c.r[22].w[0] + 84u), 0u);
    st32((c.r[22].w[0] + 80u), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0] + 10u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    st32((c.r[21].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0030CA50; } }
    c.r[16].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_0030C918:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0] + 10u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[20], c.r[16].w[0] + 16u);
    set32(c.r[3], c.r[3].w[0] - 14744u);
    set32(c.r[2], c.r[2].w[0] - 14768u);
    set32(c.r[4], c.r[20].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    st8((c.r[16].w[0] + 73u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0] + 10u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[16].w[0] + 76u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 72u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 72u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[5].w[0] + 1u);
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[19], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[18], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C998u); set32(c.r[5], c.r[19].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0030C998u) [[unlikely]] return; }
L_0030C998:
    c.f[0] = ld32((c.r[19].w[0] + 32u));
    set32(c.r[4], c.r[20].w[0] + 32u);
    set32(c.r[5], c.r[18].w[0] + 16u);
    set32(c.r[6], c.r[20].w[0] + 16u);
    st32((c.r[20].w[0] + 48u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 2u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 2u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C9C0u); st32((c.r[20].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0030C9C0u) [[unlikely]] return; }
L_0030C9C0:
    c.f[1] = ld32((c.r[20].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[20].w[0] + 32u);
    c.f[0] = c.r[2].w[0];
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 12u, c.f[0], c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C9ECu);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0030C9ECu) [[unlikely]] return; }
L_0030C9EC:
    c.f[0] = ld32((c.r[20].w[0]));
    c.f[2] = ld32((c.r[18].w[0] + 32u));
    c.f[1] = ld32((c.r[20].w[0] + 48u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[20].w[0] + 52u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);  if (t) { goto L_0030CA28; } }
    c.r[5].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CA24u); set32(c.r[4], c.r[4].w[0] - 27856u);  if (depth < kMaxDepth) unit_004E(c, 123u, depth + 1u); else { c.pc = 0x002398E0u; return; } if (c.pc != 0x0030CA24u) [[unlikely]] return; }
L_0030CA24:
    c.budget -= 1;
L_0030CA28:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 72u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 72u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030C918u | kUnwind; return; } goto L_0030C918; } }
    c.budget -= 1;
L_0030CA50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CA58u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 50u, depth + 1u); else { c.pc = 0x0030CA80u; return; } if (c.pc != 0x0030CA58u) [[unlikely]] return; }
L_0030CA58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0030CA80:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[21], c.r[22].w[0] + 304u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 304u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0030CC28; } }
    c.r[16].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 2;
L_0030CAC8:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; set32(c.r[20], c.r[16].w[0] + 16u);  if (t) { goto L_0030CC10; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0030CBF0; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 60u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st8((c.r[20].w[0] + 56u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[4].w[0] << 4);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 56u)));
    set32(c.r[19], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 60u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 17;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[4], c.r[20].w[0] + 16u);  if (t) { goto L_0030CB48; } }
    set32(c.r[5], c.r[19].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CB38u); st32((c.r[20].w[0]), 0u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0030CB38u) [[unlikely]] return; }
L_0030CB38:
    c.f[0] = ld32((c.r[19].w[0] + 32u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 48u), c.f[0]);  if (t) { goto L_0030CBC8; } }
    c.budget -= 1;
L_0030CB48:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 2u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 2u)));
    set32(c.r[4], c.r[20].w[0] + 16u);
    set32(c.r[5], c.r[19].w[0] + 16u);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.f[0] = ld32((c.r[19].w[0] + 32u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CB6Cu); st32((c.r[20].w[0] + 48u), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0030CB6Cu) [[unlikely]] return; }
L_0030CB6C:
    set32(c.r[4], c.r[20].w[0] + 32u);
    set32(c.r[5], c.r[18].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CB7Cu); set32(c.r[6], c.r[20].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0030CB7Cu) [[unlikely]] return; }
L_0030CB7C:
    c.f[1] = ld32((c.r[20].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[20].w[0] + 32u);
    c.f[0] = c.r[2].w[0];
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 12u, c.f[0], c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CBA8u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0030CBA8u) [[unlikely]] return; }
L_0030CBA8:
    c.f[0] = ld32((c.r[20].w[0]));
    c.f[2] = ld32((c.r[18].w[0] + 32u));
    c.f[1] = ld32((c.r[20].w[0] + 48u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[20].w[0] + 52u), c.f[0]);
    c.budget -= 8;
L_0030CBC8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1u)));
    c.r[1].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);  if (t) { goto L_0030CC10; } }
    c.r[5].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CBE4u); set32(c.r[4], c.r[4].w[0] - 27856u);  if (depth < kMaxDepth) unit_004E(c, 123u, depth + 1u); else { c.pc = 0x002398E0u; return; } if (c.pc != 0x0030CBE4u) [[unlikely]] return; }
L_0030CBE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030CC10; } }
    c.budget -= 1;
L_0030CBF0:
    set32(c.r[4], c.r[20].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CBFCu); set32(c.r[5], c.r[20].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x0030CBFCu) [[unlikely]] return; }
L_0030CBFC:
    c.f[1] = ld32((c.r[20].w[0] + 52u));
    c.f[0] = ld32((c.r[20].w[0] + 48u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[20].w[0] + 48u), c.f[0]);
    c.budget -= 5;
L_0030CC10:
    set32(c.r[3], ld32((c.r[21].w[0])));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030CAC8u | kUnwind; return; } goto L_0030CAC8; } }
L_0030CC28:
    set32(c.r[3], 0u + 1u);
    st8((c.r[22].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0030CC60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 184u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[17], c.r[18].w[0] + 304u);  if (t) { goto L_0030CD80; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 73u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[17].w[0] + 16u);  if (t) { goto L_0030CCE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CCACu);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0030CCACu) [[unlikely]] return; }
L_0030CCAC:
    set32(c.r[2], ld32((c.r[18].w[0] + 176u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030CCC8; } }
    c.f[13] = ld32((c.r[16].w[0] + 20u));
    c.f[14] = ld32((c.r[16].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CCC8u); c.f[12] = ld32((c.r[16].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0030CCC8u) [[unlikely]] return; }
L_0030CCC8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 57u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 184u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CCE0u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0068(c, 78u, depth + 1u); else { c.pc = 0x002A22C0u; return; } if (c.pc != 0x0030CCE0u) [[unlikely]] return; }
L_0030CCE0:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030CD80; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 137u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], ld32((c.r[18].w[0] + 184u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[17].w[0] + 80u);  if (t) { goto L_0030CD80; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 176u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030CD68; } }
    c.f[13] = ld32((c.r[16].w[0] + 20u));
    c.f[14] = ld32((c.r[16].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CD2Cu); c.f[12] = ld32((c.r[16].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0030CD2Cu) [[unlikely]] return; }
L_0030CD2C:
    c.f[2] = ld32((c.r[16].w[0] + 48u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47800000u);
    c.f[3] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[1] = c.r[2].w[0];
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CD68u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x0030CD68u) [[unlikely]] return; }
L_0030CD68:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 57u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 184u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CD80u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0068(c, 78u, depth + 1u); else { c.pc = 0x002A22C0u; return; } if (c.pc != 0x0030CD80u) [[unlikely]] return; }
L_0030CD80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0030CDA0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 14608u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0030C000u < 16384u) { entry = entries_0083[(t - 0x0030C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0030CDC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] - 14704u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[16], c.r[16].w[0] - 27856u);
    set32(c.r[2], c.r[2].w[0] - 14624u);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 29048u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[4].w[0] + 24u), c.r[16].w[0]);
    set32(c.r[8], ld32((c.r[4].w[0] + 24u)));
    c.r[8].d[0] = ld8((c.r[8].w[0] + 8658u));
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CE2Cu); st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x0030CE2Cu) [[unlikely]] return; }
L_0030CE2C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00310000u);
    set32(c.r[3], 0u + 581u);
    set32(c.r[2], c.r[2].w[0] - 12128u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[17].w[0] + 168u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 56u), 0u);
    set32(c.r[2], 0u + 42u);
    st32((c.r[17].w[0] + 52u), 0u);
    st32((c.r[17].w[0] + 48u), 0u);
    st32((c.r[17].w[0] + 72u), 0u);
    st32((c.r[17].w[0] + 68u), 0u);
    st32((c.r[17].w[0] + 64u), 0u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[1].w[0] - 19198u));
    c.budget -= 17;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0030CE80; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], 0u + 47u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0030CE88; } }
L_0030CE80:
    set32(c.r[2], 0u + 370u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0030CE88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CE90u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 69u, depth + 1u); else { c.pc = 0x0030CEB0u; return; } if (c.pc != 0x0030CE90u) [[unlikely]] return; }
L_0030CE90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0030CEB0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[17], c.r[18].w[0] + 304u);  if (t) { goto L_0030D058; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0030D010; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030CEF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030D068; } }
L_0030CEF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CF00u); set32(c.r[4], c.r[16].w[0] + 2048u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0030CF00u) [[unlikely]] return; }
L_0030CF00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CF08u); set32(c.r[4], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 198u, depth + 1u); else { c.pc = 0x001271B0u; return; } if (c.pc != 0x0030CF08u) [[unlikely]] return; }
L_0030CF08:
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    st32((c.r[18].w[0] + 36u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0030CF50; } }
    c.f[1] = ld32((c.r[18].w[0] + 40u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44840000u);
    c.r[2].d[0] = c.r[2].d[0] | 49152ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0030CFB0; } }
    c.budget -= 1;
L_0030CF50:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44840000u);
    c.f[1] = c.r[3].w[0];
    c.r[5].d[0] = c.r[2].d[0] | 49152ull;
    set32(c.r[6], 0u + 20u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0xC0000000u);
    set32(c.r[2], 0u + 42u);
    set32(c.r[3], c.r[7].w[0] + 1u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st32((c.r[18].w[0] + 40u), c.r[5].w[0]);
    st32((c.r[18].w[0] + 56u), c.r[4].w[0]);
    c.f[0] = ld32((c.r[18].w[0] + 56u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[18].w[0] + 72u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.budget -= 20;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 47u);  if (t) { goto L_0030CFA8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0030CFB0; } }
L_0030CFA8:
    st32((c.r[18].w[0] + 56u), 0u);
    st32((c.r[18].w[0] + 72u), 0u);
    c.budget -= 2;
L_0030CFB0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    set32(c.r[2], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 9u);  if (t) { goto L_0030D068; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[16].w[0] + 3136u);  if (t) { goto L_0030D068; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CFD0u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0030CFD0u) [[unlikely]] return; }
L_0030CFD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CFD8u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 198u, depth + 1u); else { c.pc = 0x001271B0u; return; } if (c.pc != 0x0030CFD8u) [[unlikely]] return; }
L_0030CFD8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CFE8u); set32(c.r[6], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0030CFE8u) [[unlikely]] return; }
L_0030CFE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CFF0u); set32(c.r[4], c.r[16].w[0] + 2944u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0030CFF0u) [[unlikely]] return; }
L_0030CFF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CFF8u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 198u, depth + 1u); else { c.pc = 0x001271B0u; return; } if (c.pc != 0x0030CFF8u) [[unlikely]] return; }
L_0030CFF8:
    set32(c.r[4], c.r[17].w[0] + 16u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D008u); set32(c.r[6], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0030D008u) [[unlikely]] return; }
L_0030D008:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030D068; } }
L_0030D010:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0030D038; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0030D038:
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D044u); set32(c.r[5], c.r[18].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x0030D044u) [[unlikely]] return; }
L_0030D044:
    set32(c.r[4], c.r[18].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D050u); set32(c.r[5], c.r[18].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x0030D050u) [[unlikely]] return; }
L_0030D050:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030D068; } }
L_0030D058:
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D064u); set32(c.r[5], c.r[18].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x0030D064u) [[unlikely]] return; }
L_0030D064:
    c.budget -= 1;
L_0030D068:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D070u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0030D070u) [[unlikely]] return; }
L_0030D070:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D078u); set32(c.r[4], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x0030D078u) [[unlikely]] return; }
L_0030D078:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D080u); set32(c.r[4], c.r[18].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0030D080u) [[unlikely]] return; }
L_0030D080:
    set32(c.r[3], 0u + 1u);
    st8((c.r[18].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0030D0A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 184u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_0030D178; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[17].w[0] + 192u);  if (t) { goto L_0030D100; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D0E8u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0030D0E8u) [[unlikely]] return; }
L_0030D0E8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 184u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D100u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0068(c, 78u, depth + 1u); else { c.pc = 0x002A22C0u; return; } if (c.pc != 0x0030D100u) [[unlikely]] return; }
L_0030D100:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[3], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 9u);  if (t) { goto L_0030D178; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0030D178; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D120u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0030D120u) [[unlikely]] return; }
L_0030D120:
    c.f[14] = ld32((c.r[16].w[0] + 8u));
    c.f[13] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D130u); c.f[12] = ld32((c.r[16].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0030D130u) [[unlikely]] return; }
L_0030D130:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 184u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D148u); set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_0068(c, 78u, depth + 1u); else { c.pc = 0x002A22C0u; return; } if (c.pc != 0x0030D148u) [[unlikely]] return; }
L_0030D148:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D150u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0030D150u) [[unlikely]] return; }
L_0030D150:
    c.f[14] = ld32((c.r[16].w[0] + 24u));
    c.f[13] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D160u); c.f[12] = ld32((c.r[16].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0030D160u) [[unlikely]] return; }
L_0030D160:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 184u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D178u); set32(c.r[4], ld32((c.r[2].w[0] + 8u)));  if (depth < kMaxDepth) unit_0068(c, 78u, depth + 1u); else { c.pc = 0x002A22C0u; return; } if (c.pc != 0x0030D178u) [[unlikely]] return; }
L_0030D178:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0030D190:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 14592u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0030C000u < 16384u) { entry = entries_0083[(t - 0x0030C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0030D1B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[8], c.r[8].w[0] - 27856u);
    set32(c.r[3], c.r[3].w[0] - 14704u);
    set32(c.r[2], c.r[2].w[0] - 14624u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 29048u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[9].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st32((c.r[4].w[0] + 24u), c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[4].w[0] + 24u)));
    c.r[8].d[0] = ld8((c.r[8].w[0] + 8658u));
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D218u); st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x0030D218u) [[unlikely]] return; }
L_0030D218:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00310000u);
    set32(c.r[2], 0u + 370u);
    set32(c.r[3], c.r[3].w[0] - 12128u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 168u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 72u), 0u);
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 64u), 0u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D250u); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0083(c, 69u, depth + 1u); else { c.pc = 0x0030CEB0u; return; } if (c.pc != 0x0030D250u) [[unlikely]] return; }
L_0030D250:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030D260:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[17], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0030D308; } }
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D28Cu); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0030D28Cu) [[unlikely]] return; }
L_0030D28C:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 8658u));
    set32(c.r[2], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0030D2B8; } }
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.budget -= 7;
L_0030D2B8:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 8658u));
    set32(c.r[2], 0u + 65u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0030D2E0; } }
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.budget -= 6;
L_0030D2E0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0030D308; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0030D308:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D310u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0030D310u) [[unlikely]] return; }
L_0030D310:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D318u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x0030D318u) [[unlikely]] return; }
L_0030D318:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D320u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0030D320u) [[unlikely]] return; }
L_0030D320:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0030D340:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 14576u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0030C000u < 16384u) { entry = entries_0083[(t - 0x0030C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0030D360:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 14560u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[29].w[0] + 32u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 29080u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D3A4u); st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x0030D3A4u) [[unlikely]] return; }
L_0030D3A4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00310000u);
    set32(c.r[2], 0u + 8u);
    set32(c.r[3], c.r[3].w[0] - 10752u);
    set32(c.r[4], c.r[16].w[0] + 32u);
    st32((c.r[16].w[0] + 168u), c.r[3].w[0]);
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D3C4u); st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0030D3C4u) [[unlikely]] return; }
L_0030D3C4:
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 120u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 116u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 112u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 136u), 0u);
    st32((c.r[16].w[0] + 132u), 0u);
    st32((c.r[16].w[0] + 128u), 0u);
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D3F0u); st32((c.r[16].w[0] + 108u), 0u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0030D3F0u) [[unlikely]] return; }
L_0030D3F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D3F8u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x0030D3F8u) [[unlikely]] return; }
L_0030D3F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D400u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0030D400u) [[unlikely]] return; }
L_0030D400:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D408u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 110u, depth + 1u); else { c.pc = 0x0030D420u; return; } if (c.pc != 0x0030D408u) [[unlikely]] return; }
L_0030D408:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0030D420:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_0030D5A8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0030D548; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0030D4F0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0030D490; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0030D470; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030D5E8; } }
    c.budget -= 1;
L_0030D470:
    set32(c.r[3], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 350u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 120u), 0u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 104u), c.r[3].w[0]);  if (t) { goto L_0030D5E8; } }
L_0030D490:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0030D5E8; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[4], 0u + 60u);
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 136u), c.f[0]);  if (t) { goto L_0030D5E8; } }
    c.budget -= 1;
L_0030D4F0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0030D530; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[4], 0u + 150u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 120u), c.r[3].w[0]);  if (t) { goto L_0030D5E8; } }
    c.budget -= 1;
L_0030D530:
    set32(c.r[4], c.r[16].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D53Cu); set32(c.r[5], c.r[16].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x0030D53Cu) [[unlikely]] return; }
L_0030D53C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030D5E8; } }
    c.budget -= 1;
L_0030D548:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0030D5E8; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[4], 0u + 40u);
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.f[0]);  if (t) { goto L_0030D5E8; } }
    c.budget -= 1;
L_0030D5A8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0030D5D8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 104u), 0u);  if (t) { goto L_0030D5E8; } }
L_0030D5D8:
    c.f[1] = ld32((c.r[16].w[0] + 108u));
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.budget -= 4;
L_0030D5E8:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030D600:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 184u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0030D670; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[16].w[0] + 192u);  if (t) { goto L_0030D670; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D640u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0030D640u) [[unlikely]] return; }
L_0030D640:
    c.f[14] = ld32((c.r[16].w[0] + 120u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D654u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0030D654u) [[unlikely]] return; }
L_0030D654:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 184u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D670u); c.f[12] = ld32((c.r[16].w[0] + 104u));  if (depth < kMaxDepth) unit_0068(c, 82u, depth + 1u); else { c.pc = 0x002A23A0u; return; } if (c.pc != 0x0030D670u) [[unlikely]] return; }
L_0030D670:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030D680:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 14544u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0030C000u < 16384u) { entry = entries_0083[(t - 0x0030C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0030D6A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 14528u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[29].w[0] + 32u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 29080u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D6E4u); st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x0030D6E4u) [[unlikely]] return; }
L_0030D6E4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00310000u);
    set32(c.r[2], 0u + 9u);
    set32(c.r[3], c.r[3].w[0] - 9984u);
    set32(c.r[4], c.r[16].w[0] + 32u);
    st32((c.r[16].w[0] + 168u), c.r[3].w[0]);
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D704u); st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0030D704u) [[unlikely]] return; }
L_0030D704:
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D714u); st32((c.r[16].w[0] + 108u), 0u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0030D714u) [[unlikely]] return; }
L_0030D714:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D71Cu); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x0030D71Cu) [[unlikely]] return; }
L_0030D71C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D724u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0030D724u) [[unlikely]] return; }
L_0030D724:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D72Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 124u, depth + 1u); else { c.pc = 0x0030D740u; return; } if (c.pc != 0x0030D72Cu) [[unlikely]] return; }
L_0030D72C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0030D740:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_0030D8B0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0030D850; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0030D7F8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0030D798; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0030D780; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030D8F0; } }
    c.budget -= 1;
L_0030D780:
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 300u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 104u), 0u);  if (t) { goto L_0030D8F0; } }
L_0030D798:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0030D8F0; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[5], 0u + 100u);
    set32(c.r[3], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 108u), c.f[0]);  if (t) { goto L_0030D8F0; } }
    c.budget -= 1;
L_0030D7F8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0030D838; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[5], 0u + 160u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 104u), c.r[3].w[0]);  if (t) { goto L_0030D8F0; } }
    c.budget -= 1;
L_0030D838:
    c.f[1] = ld32((c.r[4].w[0] + 108u));
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 104u), c.f[0]);  if (t) { goto L_0030D8F0; } }
    c.budget -= 1;
L_0030D850:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0030D8F0; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[5], 0u + 40u);
    set32(c.r[3], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 108u), c.f[0]);  if (t) { goto L_0030D8F0; } }
    c.budget -= 1;
L_0030D8B0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0030D8E0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 104u), 0u);  if (t) { goto L_0030D8F0; } }
L_0030D8E0:
    c.f[1] = ld32((c.r[4].w[0] + 108u));
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 104u), c.f[0]);
    c.budget -= 4;
L_0030D8F0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0030D900:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 184u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0030D960; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[16].w[0] + 192u);  if (t) { goto L_0030D960; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D940u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0030D940u) [[unlikely]] return; }
L_0030D940:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 184u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D95Cu); c.f[12] = ld32((c.r[16].w[0] + 104u));  if (depth < kMaxDepth) unit_0068(c, 82u, depth + 1u); else { c.pc = 0x002A23A0u; return; } if (c.pc != 0x0030D95Cu) [[unlikely]] return; }
L_0030D95C:
    c.budget -= 1;
L_0030D960:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030D970:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 14512u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0030C000u < 16384u) { entry = entries_0083[(t - 0x0030C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0030D990:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 29080u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D9C0u); st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x0030D9C0u) [[unlikely]] return; }
L_0030D9C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00310000u);
    set32(c.r[3], 0u + 11u);
    set32(c.r[2], c.r[2].w[0] - 9360u);
    st32((c.r[16].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D9E0u); st8((c.r[16].w[0] + 304u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0030D9E0u) [[unlikely]] return; }
L_0030D9E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44720000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D9F8u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0030D9F8u) [[unlikely]] return; }
L_0030D9F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DA00u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0030DA00u) [[unlikely]] return; }
L_0030DA00:
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DA1Cu); st32((c.r[16].w[0] + 108u), 0u);  if (depth < kMaxDepth) unit_0083(c, 135u, depth + 1u); else { c.pc = 0x0030DA30u; return; } if (c.pc != 0x0030DA1Cu) [[unlikely]] return; }
L_0030DA1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030DA30:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0030DAD8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0030DA50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030DB58; } }
L_0030DA50:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0030DAC0; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[5], 0u + 30u);
    set32(c.r[3], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 104u), c.r[6].w[0]);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.f[1] = ld32((c.r[4].w[0] + 104u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.f[1] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 21;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 108u), c.f[0]);  if (t) { goto L_0030DB58; } }
L_0030DAC0:
    c.f[1] = ld32((c.r[4].w[0] + 108u));
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 104u), c.f[0]);  if (t) { goto L_0030DB58; } }
    c.budget -= 1;
L_0030DAD8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0030DB48; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    c.r[6].d[0] = c.r[3].d[0] | 52429ull;
    set32(c.r[5], 0u + 30u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[3], c.r[7].w[0] - 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 104u), c.r[6].w[0]);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.f[1] = ld32((c.r[4].w[0] + 104u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.f[1] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 21;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 108u), c.f[0]);  if (t) { goto L_0030DB58; } }
L_0030DB48:
    c.f[1] = ld32((c.r[4].w[0] + 108u));
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 104u), c.f[0]);
    c.budget -= 4;
L_0030DB58:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0030DB70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 184u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0030DBD0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[16].w[0] + 192u);  if (t) { goto L_0030DBD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DBB0u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0030DBB0u) [[unlikely]] return; }
L_0030DBB0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 184u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DBCCu); c.f[12] = ld32((c.r[16].w[0] + 104u));  if (depth < kMaxDepth) unit_0068(c, 82u, depth + 1u); else { c.pc = 0x002A23A0u; return; } if (c.pc != 0x0030DBCCu) [[unlikely]] return; }
L_0030DBCC:
    c.budget -= 1;
L_0030DBD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030DBE0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 14496u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0030C000u < 16384u) { entry = entries_0083[(t - 0x0030C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0030DC00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 29080u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DC30u); st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x0030DC30u) [[unlikely]] return; }
L_0030DC30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00310000u);
    set32(c.r[3], 0u + 12u);
    set32(c.r[2], c.r[2].w[0] - 9360u);
    st32((c.r[16].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DC50u); st8((c.r[16].w[0] + 304u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0030DC50u) [[unlikely]] return; }
L_0030DC50:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44720000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DC68u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0030DC68u) [[unlikely]] return; }
L_0030DC68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DC70u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0030DC70u) [[unlikely]] return; }
L_0030DC70:
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DC8Cu); st32((c.r[16].w[0] + 108u), 0u);  if (depth < kMaxDepth) unit_0083(c, 146u, depth + 1u); else { c.pc = 0x0030DCA0u; return; } if (c.pc != 0x0030DC8Cu) [[unlikely]] return; }
L_0030DC8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030DCA0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0030DD48; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0030DCC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030DDC8; } }
L_0030DCC0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0030DD30; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[5], 0u + 25u);
    set32(c.r[3], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 104u), c.r[6].w[0]);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.f[1] = ld32((c.r[4].w[0] + 104u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.f[1] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 21;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 108u), c.f[0]);  if (t) { goto L_0030DDC8; } }
L_0030DD30:
    c.f[1] = ld32((c.r[4].w[0] + 108u));
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 104u), c.f[0]);  if (t) { goto L_0030DDC8; } }
    c.budget -= 1;
L_0030DD48:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0030DDB8; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    c.r[6].d[0] = c.r[3].d[0] | 52429ull;
    set32(c.r[5], 0u + 25u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[3], c.r[7].w[0] - 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 104u), c.r[6].w[0]);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.f[1] = ld32((c.r[4].w[0] + 104u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.f[1] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 21;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 108u), c.f[0]);  if (t) { goto L_0030DDC8; } }
L_0030DDB8:
    c.f[1] = ld32((c.r[4].w[0] + 108u));
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 104u), c.f[0]);
    c.budget -= 4;
L_0030DDC8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0030DDE0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 14480u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0030C000u < 16384u) { entry = entries_0083[(t - 0x0030C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0030DE00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] - 14464u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[5].w[0] - 29080u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[17].w[0] + 304u);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DE4Cu); st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x0030DE4Cu) [[unlikely]] return; }
L_0030DE4C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00310000u);
    set32(c.r[2], 0u + 13u);
    set32(c.r[3], c.r[3].w[0] - 7760u);
    set32(c.r[4], c.r[17].w[0] + 32u);
    st32((c.r[17].w[0] + 168u), c.r[3].w[0]);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DE6Cu); st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0030DE6Cu) [[unlikely]] return; }
L_0030DE6C:
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC28C0000u);
    st32((c.r[17].w[0] + 104u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 108u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47800000u);
    c.f[2] = ld32((c.r[17].w[0] + 104u));
    c.f[3] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[1] = c.r[2].w[0];
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 84u), 0u);
    st32((c.r[17].w[0] + 88u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 27992u)));
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 27991u)));
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 27990u)));
    st8((c.r[16].w[0] + 24u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 25u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 27989u)));
    st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 36;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DEFCu); st8((c.r[16].w[0] + 37u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0083(c, 152u, depth + 1u); else { c.pc = 0x0030DF10u; return; } if (c.pc != 0x0030DEFCu) [[unlikely]] return; }
L_0030DEFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0030DF10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[17], c.r[18].w[0] + 304u);  if (t) { goto L_0030DFD0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0030DF70; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030DF58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030E058; } }
    c.budget -= 1;
L_0030DF58:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 100u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0030E058; } }
    c.budget -= 1;
L_0030DF70:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0030E058; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x428C0000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[3], 0u + 200u);
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 108u), c.f[0]);  if (t) { goto L_0030E058; } }
    c.budget -= 1;
L_0030DFD0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0030E008; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[18].w[0] + 80u), 0u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 92u), 0u);  if (t) { goto L_0030E058; } }
    goto L_0030E004;
L_0030E000:
    st32((c.r[18].w[0] + 92u), 0u);
    c.budget -= 1;
L_0030E004:
    c.budget -= 1;
L_0030E008:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47800000u);
    c.f[4] = ld32((c.r[18].w[0] + 108u));
    c.f[2] = ld32((c.r[18].w[0] + 104u));
    c.f[3] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[1] = c.r[2].w[0];
    c.f[2] = fp::add(c.f[2], c.f[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[18].w[0] + 104u), c.f[2]);
    c.f[2] = c.f[2];
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    st32((c.r[18].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 20;
L_0030E058:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0030E060:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0030E128; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0030E0B0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030E088; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030E170; } }
L_0030E088:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 390u);
    st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), 0u);  if (t) { goto L_0030E170; } }
L_0030E0B0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0030E170; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[5], 0u + 5u);
    set32(c.r[2], c.r[28].w[0] - 27988u);
    set32(c.r[3], c.r[6].w[0] + 1u);
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 2u)));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E11Cu); set32(c.r[4], c.r[4].w[0] - 27856u);  if (depth < kMaxDepth) unit_004E(c, 123u, depth + 1u); else { c.pc = 0x002398E0u; return; } if (c.pc != 0x0030E11Cu) [[unlikely]] return; }
L_0030E11C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030E170; } }
    c.budget -= 1;
L_0030E128:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0030E160; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0030E170; } }
    c.budget -= 1;
L_0030E160:
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.budget -= 4;
L_0030E170:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030E060u | kUnwind; return; } goto L_0030E060; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E18Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0031(c, 443u, depth + 1u); else { c.pc = 0x001C56E0u; return; } if (c.pc != 0x0030E18Cu) [[unlikely]] return; }
L_0030E18C:
    set32(c.r[3], 0u + 1u);
    st8((c.r[18].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0030E1B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 184u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[17], c.r[18].w[0] + 304u);  if (t) { goto L_0030E268; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[18].w[0] + 192u);  if (t) { goto L_0030E218; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E1FCu);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0030E1FCu) [[unlikely]] return; }
L_0030E1FC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 184u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E214u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0068(c, 78u, depth + 1u); else { c.pc = 0x002A22C0u; return; } if (c.pc != 0x0030E214u) [[unlikely]] return; }
L_0030E214:
    c.budget -= 1;
L_0030E218:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0030E220:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 184u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[5], c.r[5].w[0] + c.r[16].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.budget -= 11;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0030E258; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E254u); c.f[12] = ld32((c.r[17].w[0] + 4u));  if (depth < kMaxDepth) unit_0068(c, 82u, depth + 1u); else { c.pc = 0x002A23A0u; return; } if (c.pc != 0x0030E254u) [[unlikely]] return; }
L_0030E254:
    c.budget -= 1;
L_0030E258:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030E220u | kUnwind; return; } goto L_0030E220; } }
L_0030E268:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0030E280:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 11264u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 16u);  if (t) { goto L_0030E2C0; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E2A4u); set32(c.r[6], 0u + 24u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0030E2A4u) [[unlikely]] return; }
L_0030E2A4:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E2B8u); st32((c.r[29].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0001(c, 60u, depth + 1u); else { c.pc = 0x001042E0u; return; } if (c.pc != 0x0030E2B8u) [[unlikely]] return; }
L_0030E2B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st32((c.r[1].w[0] + 11264u), c.r[2].w[0]);
    c.budget -= 2;
L_0030E2C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st16((c.r[1].w[0] + 11280u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st16((c.r[1].w[0] + 11272u), static_cast<std::uint16_t>(0u));
    c.budget -= 4;
L_0030E2D0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01270000u);
    set32(c.r[4], c.r[4].w[0] + 11296u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E2E8u); c.r[5].d[0] = c.r[2].d[0] | 48ull;  if (depth < kMaxDepth) unit_0001(c, 447u, depth + 1u); else { c.pc = 0x001074D8u; return; } if (c.pc != 0x0030E2E8u) [[unlikely]] return; }
L_0030E2E8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);  if (t) { goto L_0030E300; } }
    set32(c.r[2], ld32((c.r[1].w[0] + 11332u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030E340; } }
    c.budget -= 1;
L_0030E300:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 44u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030E2D0u | kUnwind; return; } goto L_0030E2D0; } }
    c.budget -= 1;
L_0030E318:
    set32(c.r[2], ld32((c.r[29].w[0] + 44u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 44u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030E318u | kUnwind; return; } goto L_0030E318; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030E2D0u | kUnwind; return; } goto L_0030E2D0; } }
    c.budget -= 1;
L_0030E340:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0030E350:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 11296u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E36Cu); set32(c.r[6], 0u + 40u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0030E36Cu) [[unlikely]] return; }
L_0030E36C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0030E380:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 11280u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030E3A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E3A0u);  if (depth < kMaxDepth) unit_0083(c, 173u, depth + 1u); else { c.pc = 0x0030E440u; return; } if (c.pc != 0x0030E3A0u) [[unlikely]] return; }
L_0030E3A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030E428; } }
L_0030E3A8:
    st64((c.r[29].w[0]), 0ull);
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] >= 0; c.r[7].d[0] = c.r[5].d[0] & 15ull;  if (t) { goto L_0030E3C0; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull; set32(c.r[2], 0u + 16u);  if (t) { goto L_0030E3C4; } }
    set32(c.r[7], c.r[7].w[0] - 16u);
    c.budget -= 1;
L_0030E3C0:
    set32(c.r[2], 0u + 16u);
    c.budget -= 1;
L_0030E3C4:
    c.r[3].d[0] = c.r[6].d[0] & 15ull;
    set32(c.r[2], c.r[2].w[0] - c.r[7].w[0]);
    c.budget -= 4;
    { const bool t = c.r[6].sd[0] >= 0; set32(c.r[8], c.r[2].w[0] + c.r[5].w[0]);  if (t) { goto L_0030E3E0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 16u);  if (t) { goto L_0030E3E4; } }
    set32(c.r[3], c.r[3].w[0] - 16u);
    c.budget -= 1;
L_0030E3E0:
    set32(c.r[2], 0u + 16u);
    c.budget -= 1;
L_0030E3E4:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[10], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[7], c.r[7].w[0] + 11392u);
    set32(c.r[4], c.r[4].w[0] + 11296u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E410u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 459u, depth + 1u); else { c.pc = 0x001076A8u; return; } if (c.pc != 0x0030E410u) [[unlikely]] return; }
L_0030E410:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);  if (t) { goto L_0030E420; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 33u);  if (t) { goto L_0030E424; } }
L_0030E420:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 11416u)));
    c.budget -= 1;
L_0030E424:
    c.budget -= 1;
L_0030E428:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030E440:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E464u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 178u, depth + 1u); else { c.pc = 0x0030E510u; return; } if (c.pc != 0x0030E464u) [[unlikely]] return; }
L_0030E464:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030E478; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 33u);  if (t) { goto L_0030E4F8; } }
    c.budget -= 1;
L_0030E478:
    st64((c.r[29].w[0]), 0ull);
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] >= 0; c.r[4].d[0] = c.r[17].d[0] & 15ull;  if (t) { goto L_0030E490; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], 0u + 16u);  if (t) { goto L_0030E494; } }
    goto L_0030E48C;
L_0030E488:
    set32(c.r[2], 0u + 16u);
    c.budget -= 1;
L_0030E48C:
    set32(c.r[4], c.r[4].w[0] - 16u);
    c.budget -= 1;
L_0030E490:
    set32(c.r[2], 0u + 16u);
    c.budget -= 1;
L_0030E494:
    c.r[3].d[0] = c.r[16].d[0] & 15ull;
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    c.budget -= 4;
    { const bool t = c.r[16].sd[0] >= 0; set32(c.r[8], c.r[2].w[0] + c.r[17].w[0]);  if (t) { goto L_0030E4B0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 16u);  if (t) { goto L_0030E4B4; } }
    set32(c.r[3], c.r[3].w[0] - 16u);
    c.budget -= 1;
L_0030E4B0:
    set32(c.r[2], 0u + 16u);
    c.budget -= 1;
L_0030E4B4:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[7], c.r[7].w[0] + 11392u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 11296u);
    set32(c.r[10], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[6], 0u + 1u);
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E4E0u); c.r[9].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 459u, depth + 1u); else { c.pc = 0x001076A8u; return; } if (c.pc != 0x0030E4E0u) [[unlikely]] return; }
L_0030E4E0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0030E4F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 33u);  if (t) { goto L_0030E4F4; } }
L_0030E4F0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0030E4F4:
    c.budget -= 1;
L_0030E4F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0030E510:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E524u); set32(c.r[4], c.r[4].w[0] + 11296u);  if (depth < kMaxDepth) unit_0001(c, 473u, depth + 1u); else { c.pc = 0x001078A0u; return; } if (c.pc != 0x0030E524u) [[unlikely]] return; }
L_0030E524:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0030E540:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[1].w[0] + 11280u), static_cast<std::uint16_t>(c.r[4].w[0]));  c.pc = t; return; }
L_0030E550:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.budget -= 3;
    { set32(c.r[4], ld32((c.r[1].w[0] + 11264u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00104320u | kUnwind; return; } [[clang::musttail]] return unit_0001(c, 68u, depth); }
L_0030E560:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.budget -= 3;
    { set32(c.r[4], ld32((c.r[1].w[0] + 11264u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00104300u | kUnwind; return; } [[clang::musttail]] return unit_0001(c, 64u, depth); }
L_0030E570:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E58Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 181u, depth + 1u); else { c.pc = 0x0030E550u; return; } if (c.pc != 0x0030E58Cu) [[unlikely]] return; }
L_0030E58C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[5], 0u + 32u);
    st32((c.r[1].w[0] + 11392u), c.r[17].w[0]);
    set32(c.r[4], 0u + 5u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E5ACu); st32((c.r[1].w[0] + 11396u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0083(c, 170u, depth + 1u); else { c.pc = 0x0030E380u; return; } if (c.pc != 0x0030E5ACu) [[unlikely]] return; }
L_0030E5AC:
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E5B8u); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (depth < kMaxDepth) unit_0083(c, 182u, depth + 1u); else { c.pc = 0x0030E560u; return; } if (c.pc != 0x0030E5B8u) [[unlikely]] return; }
L_0030E5B8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0030E5D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E5E0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0083(c, 181u, depth + 1u); else { c.pc = 0x0030E550u; return; } if (c.pc != 0x0030E5E0u) [[unlikely]] return; }
L_0030E5E0:
    set32(c.r[5], 0u + 32u);
    set32(c.r[4], 0u + 6u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E5F0u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 170u, depth + 1u); else { c.pc = 0x0030E380u; return; } if (c.pc != 0x0030E5F0u) [[unlikely]] return; }
L_0030E5F0:
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E5FCu); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (depth < kMaxDepth) unit_0083(c, 182u, depth + 1u); else { c.pc = 0x0030E560u; return; } if (c.pc != 0x0030E5FCu) [[unlikely]] return; }
L_0030E5FC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030E610:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E634u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 181u, depth + 1u); else { c.pc = 0x0030E550u; return; } if (c.pc != 0x0030E634u) [[unlikely]] return; }
L_0030E634:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 11420u);
    set32(c.r[5], 0u + 44u);
    st32((c.r[2].w[0]), c.r[18].w[0]);
    set32(c.r[6], 0u + 32u);
    st32((c.r[2].w[0] + 4u), c.r[17].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E658u); st32((c.r[2].w[0] + 8u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0083(c, 170u, depth + 1u); else { c.pc = 0x0030E380u; return; } if (c.pc != 0x0030E658u) [[unlikely]] return; }
L_0030E658:
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E664u); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (depth < kMaxDepth) unit_0083(c, 182u, depth + 1u); else { c.pc = 0x0030E560u; return; } if (c.pc != 0x0030E664u) [[unlikely]] return; }
L_0030E664:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0030E680:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E690u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0083(c, 181u, depth + 1u); else { c.pc = 0x0030E550u; return; } if (c.pc != 0x0030E690u) [[unlikely]] return; }
L_0030E690:
    set32(c.r[5], 0u + 32u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E6A0u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 170u, depth + 1u); else { c.pc = 0x0030E380u; return; } if (c.pc != 0x0030E6A0u) [[unlikely]] return; }
L_0030E6A0:
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E6ACu); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (depth < kMaxDepth) unit_0083(c, 182u, depth + 1u); else { c.pc = 0x0030E560u; return; } if (c.pc != 0x0030E6ACu) [[unlikely]] return; }
L_0030E6AC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030E6C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E6ECu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 181u, depth + 1u); else { c.pc = 0x0030E550u; return; } if (c.pc != 0x0030E6ECu) [[unlikely]] return; }
L_0030E6EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[6].d[0] = c.r[17].d[0] << 48;
    set32(c.r[2], c.r[2].w[0] + 11420u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[19].w[0]));
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    st16((c.r[2].w[0] + 2u), static_cast<std::uint16_t>(c.r[18].w[0]));
    set32(c.r[4], c.r[2].w[0] + 6u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E714u); st16((c.r[2].w[0] + 4u), static_cast<std::uint16_t>(c.r[17].w[0]));  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x0030E714u) [[unlikely]] return; }
L_0030E714:
    set32(c.r[4], 0u + 3u);
    set32(c.r[5], 0u + 294u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E724u); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_0083(c, 170u, depth + 1u); else { c.pc = 0x0030E380u; return; } if (c.pc != 0x0030E724u) [[unlikely]] return; }
L_0030E724:
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E730u); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (depth < kMaxDepth) unit_0083(c, 182u, depth + 1u); else { c.pc = 0x0030E560u; return; } if (c.pc != 0x0030E730u) [[unlikely]] return; }
L_0030E730:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0030E750:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E780u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0083(c, 181u, depth + 1u); else { c.pc = 0x0030E550u; return; } if (c.pc != 0x0030E780u) [[unlikely]] return; }
L_0030E780:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[5], 0u + 294u);
    set32(c.r[16], c.r[16].w[0] + 11420u);
    set32(c.r[4], 0u + 4u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[20].w[0]));
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E7A4u); st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(c.r[19].w[0]));  if (depth < kMaxDepth) unit_0083(c, 170u, depth + 1u); else { c.pc = 0x0030E380u; return; } if (c.pc != 0x0030E7A4u) [[unlikely]] return; }
L_0030E7A4:
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { goto L_0030E7C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E7BCu);  if (depth < kMaxDepth) unit_0083(c, 182u, depth + 1u); else { c.pc = 0x0030E560u; return; } if (c.pc != 0x0030E7BCu) [[unlikely]] return; }
L_0030E7BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0030E7F8; } }
    c.budget -= 1;
L_0030E7C8:
    c.r[2].d[0] = c.r[19].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0030E7E8; } }
    set32(c.r[5], c.r[16].w[0] + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E7E8u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x0030E7E8u) [[unlikely]] return; }
L_0030E7E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E7F0u);  if (depth < kMaxDepth) unit_0083(c, 182u, depth + 1u); else { c.pc = 0x0030E560u; return; } if (c.pc != 0x0030E7F0u) [[unlikely]] return; }
L_0030E7F0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_0030E7F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0030E820:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E844u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 181u, depth + 1u); else { c.pc = 0x0030E550u; return; } if (c.pc != 0x0030E844u) [[unlikely]] return; }
L_0030E844:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[4], 0u + 7u);
    set32(c.r[2], c.r[2].w[0] + 11420u);
    set32(c.r[5], 0u + 40u);
    st32((c.r[2].w[0]), c.r[18].w[0]);
    set32(c.r[6], 0u + 32u);
    st16((c.r[2].w[0] + 4u), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E868u); st16((c.r[2].w[0] + 6u), static_cast<std::uint16_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_0083(c, 170u, depth + 1u); else { c.pc = 0x0030E380u; return; } if (c.pc != 0x0030E868u) [[unlikely]] return; }
L_0030E868:
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E874u); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (depth < kMaxDepth) unit_0083(c, 182u, depth + 1u); else { c.pc = 0x0030E560u; return; } if (c.pc != 0x0030E874u) [[unlikely]] return; }
L_0030E874:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0030E890:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E8A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 181u, depth + 1u); else { c.pc = 0x0030E550u; return; } if (c.pc != 0x0030E8A4u) [[unlikely]] return; }
L_0030E8A4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[4], 0u + 11u);
    set32(c.r[5], 0u + 34u);
    set32(c.r[6], 0u + 32u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E8BCu); st16((c.r[1].w[0] + 11420u), static_cast<std::uint16_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_0083(c, 170u, depth + 1u); else { c.pc = 0x0030E380u; return; } if (c.pc != 0x0030E8BCu) [[unlikely]] return; }
L_0030E8BC:
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E8C8u); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (depth < kMaxDepth) unit_0083(c, 182u, depth + 1u); else { c.pc = 0x0030E560u; return; } if (c.pc != 0x0030E8C8u) [[unlikely]] return; }
L_0030E8C8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030E8E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E8F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 181u, depth + 1u); else { c.pc = 0x0030E550u; return; } if (c.pc != 0x0030E8F4u) [[unlikely]] return; }
L_0030E8F4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[4], 0u + 13u);
    set32(c.r[5], 0u + 34u);
    set32(c.r[6], 0u + 32u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E90Cu); st16((c.r[1].w[0] + 11420u), static_cast<std::uint16_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_0083(c, 170u, depth + 1u); else { c.pc = 0x0030E380u; return; } if (c.pc != 0x0030E90Cu) [[unlikely]] return; }
L_0030E90C:
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E918u); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (depth < kMaxDepth) unit_0083(c, 182u, depth + 1u); else { c.pc = 0x0030E560u; return; } if (c.pc != 0x0030E918u) [[unlikely]] return; }
L_0030E918:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030E930:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E960u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0083(c, 181u, depth + 1u); else { c.pc = 0x0030E550u; return; } if (c.pc != 0x0030E960u) [[unlikely]] return; }
L_0030E960:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[5], 0u + 42u);
    set32(c.r[16], c.r[16].w[0] + 11420u);
    set32(c.r[4], 0u + 15u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E97Cu); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[17].w[0]));  if (depth < kMaxDepth) unit_0083(c, 170u, depth + 1u); else { c.pc = 0x0030E380u; return; } if (c.pc != 0x0030E97Cu) [[unlikely]] return; }
L_0030E97C:
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { goto L_0030E9A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E994u);  if (depth < kMaxDepth) unit_0083(c, 182u, depth + 1u); else { c.pc = 0x0030E560u; return; } if (c.pc != 0x0030E994u) [[unlikely]] return; }
L_0030E994:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0030E9C0; } }
    c.budget -= 1;
L_0030E9A0:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 2u));
    st16((c.r[20].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 6u));
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 8u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E9BCu); st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0083(c, 182u, depth + 1u); else { c.pc = 0x0030E560u; return; } if (c.pc != 0x0030E9BCu) [[unlikely]] return; }
L_0030E9BC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0030E9C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0030E9E0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EA0Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 181u, depth + 1u); else { c.pc = 0x0030E550u; return; } if (c.pc != 0x0030EA0Cu) [[unlikely]] return; }
L_0030EA0C:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] + 11420u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[16].w[0]));  if (t) { goto L_0030EB00; } }
L_0030EA20:
    c.r[16].d[0] = c.r[19].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.r[1].d[0] = c.r[16].sd[0] < 971ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0030EA40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 970u);  if (t) { goto L_0030EA40; } }
    c.budget -= 1;
L_0030EA40:
    c.r[6].d[0] = c.r[16].d[0] << 48;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EA58u); st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x0030EA58u) [[unlikely]] return; }
L_0030EA58:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    st32((c.r[1].w[0] + 11392u), 0u);
    set32(c.r[5], c.r[2].w[0] + 38u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 16u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EA80u); st32((c.r[1].w[0] + 11396u), 0u);  if (depth < kMaxDepth) unit_0083(c, 170u, depth + 1u); else { c.pc = 0x0030E380u; return; } if (c.pc != 0x0030EA80u) [[unlikely]] return; }
L_0030EA80:
    c.r[18].d[0] = c.r[2].d[0] << 48;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[18].sd[0] >= 0;  if (t) { goto L_0030EAA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EA98u);  if (depth < kMaxDepth) unit_0083(c, 182u, depth + 1u); else { c.pc = 0x0030E560u; return; } if (c.pc != 0x0030EA98u) [[unlikely]] return; }
L_0030EA98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0030EB28; } }
L_0030EAA0:
    set32(c.r[2], c.r[19].w[0] - c.r[16].w[0]);
    c.r[19].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[19].sd[0] <= 0; set32(c.r[20], c.r[20].w[0] + c.r[2].w[0]);  if (t) { goto L_0030EB18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 108u), 0u);  if (t) { goto L_0030EAF0; } }
    c.budget -= 1;
L_0030EAC8:
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 10;
L_0030EAF0:
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    c.r[2].d[0] = c.r[2].sd[0] < 10000ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030EAC8u | kUnwind; return; } goto L_0030EAC8; } }
L_0030EB00:
    c.r[2].d[0] = c.r[19].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030EA20u | kUnwind; return; } goto L_0030EA20; } }
    c.budget -= 1;
L_0030EB18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EB20u);  if (depth < kMaxDepth) unit_0083(c, 182u, depth + 1u); else { c.pc = 0x0030E560u; return; } if (c.pc != 0x0030EB20u) [[unlikely]] return; }
L_0030EB20:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_0030EB28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0030EB50:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] << 48;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 13;
    { const bool t = c.r[18].sd[0] > 0; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0030EB90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0030EC50; } }
    c.budget -= 1;
L_0030EB90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EB98u);  if (depth < kMaxDepth) unit_0083(c, 181u, depth + 1u); else { c.pc = 0x0030E550u; return; } if (c.pc != 0x0030EB98u) [[unlikely]] return; }
L_0030EB98:
    c.r[1].d[0] = c.r[18].sd[0] < 971ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0030EBA8; } }
    set32(c.r[16], 0u + 970u);
    c.budget -= 1;
L_0030EBA8:
    c.r[18].d[0] = c.r[16].d[0] << 48;
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    set32(c.r[19], c.r[19].w[0] + 11420u);
    set32(c.r[5], c.r[18].w[0] + 38u);
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[20].w[0]));
    set32(c.r[4], 0u + 19u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EBD0u); st16((c.r[19].w[0] + 2u), static_cast<std::uint16_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_0083(c, 170u, depth + 1u); else { c.pc = 0x0030E380u; return; } if (c.pc != 0x0030EBD0u) [[unlikely]] return; }
L_0030EBD0:
    c.r[20].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EBE0u); c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);  if (depth < kMaxDepth) unit_0001(c, 82u, depth + 1u); else { c.pc = 0x00104560u; return; } if (c.pc != 0x0030EBE0u) [[unlikely]] return; }
L_0030EBE0:
    c.r[2].d[0] = c.r[20].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0030EC00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EBF8u);  if (depth < kMaxDepth) unit_0083(c, 182u, depth + 1u); else { c.pc = 0x0030E560u; return; } if (c.pc != 0x0030EBF8u) [[unlikely]] return; }
L_0030EBF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0030EC50; } }
L_0030EC00:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 11416u)));
    c.r[1].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0030EC20; } }
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.budget -= 3;
L_0030EC20:
    c.r[6].d[0] = c.r[16].d[0] << 48;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.r[1].d[0] = 0ll < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0030EC40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EC3Cu); set32(c.r[5], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x0030EC3Cu) [[unlikely]] return; }
L_0030EC3C:
    c.budget -= 1;
L_0030EC40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EC48u);  if (depth < kMaxDepth) unit_0083(c, 182u, depth + 1u); else { c.pc = 0x0030E560u; return; } if (c.pc != 0x0030EC48u) [[unlikely]] return; }
L_0030EC48:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_0030EC50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0030EC70:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] << 48;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 13;
    { const bool t = c.r[18].sd[0] > 0; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0030ECB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0030ED70; } }
    c.budget -= 1;
L_0030ECB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030ECB8u);  if (depth < kMaxDepth) unit_0083(c, 181u, depth + 1u); else { c.pc = 0x0030E550u; return; } if (c.pc != 0x0030ECB8u) [[unlikely]] return; }
L_0030ECB8:
    c.r[1].d[0] = c.r[18].sd[0] < 971ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0030ECC8; } }
    set32(c.r[16], 0u + 970u);
    c.budget -= 1;
L_0030ECC8:
    c.r[18].d[0] = c.r[16].d[0] << 48;
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    set32(c.r[19], c.r[19].w[0] + 11420u);
    set32(c.r[5], c.r[18].w[0] + 38u);
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[20].w[0]));
    set32(c.r[4], 0u + 20u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030ECF0u); st16((c.r[19].w[0] + 2u), static_cast<std::uint16_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_0083(c, 170u, depth + 1u); else { c.pc = 0x0030E380u; return; } if (c.pc != 0x0030ECF0u) [[unlikely]] return; }
L_0030ECF0:
    c.r[20].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030ED00u); c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);  if (depth < kMaxDepth) unit_0001(c, 82u, depth + 1u); else { c.pc = 0x00104560u; return; } if (c.pc != 0x0030ED00u) [[unlikely]] return; }
L_0030ED00:
    c.r[2].d[0] = c.r[20].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0030ED20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030ED18u);  if (depth < kMaxDepth) unit_0083(c, 182u, depth + 1u); else { c.pc = 0x0030E560u; return; } if (c.pc != 0x0030ED18u) [[unlikely]] return; }
L_0030ED18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0030ED70; } }
L_0030ED20:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 11416u)));
    c.r[1].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0030ED40; } }
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.budget -= 3;
L_0030ED40:
    c.r[6].d[0] = c.r[16].d[0] << 48;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.r[1].d[0] = 0ll < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0030ED60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030ED5Cu); set32(c.r[5], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x0030ED5Cu) [[unlikely]] return; }
L_0030ED5C:
    c.budget -= 1;
L_0030ED60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030ED68u);  if (depth < kMaxDepth) unit_0083(c, 182u, depth + 1u); else { c.pc = 0x0030E560u; return; } if (c.pc != 0x0030ED68u) [[unlikely]] return; }
L_0030ED68:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_0030ED70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0030ED90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EDA4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 181u, depth + 1u); else { c.pc = 0x0030E550u; return; } if (c.pc != 0x0030EDA4u) [[unlikely]] return; }
L_0030EDA4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[4], 0u + 22u);
    set32(c.r[5], 0u + 34u);
    set32(c.r[6], 0u + 32u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EDBCu); st16((c.r[1].w[0] + 11420u), static_cast<std::uint16_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_0083(c, 170u, depth + 1u); else { c.pc = 0x0030E380u; return; } if (c.pc != 0x0030EDBCu) [[unlikely]] return; }
L_0030EDBC:
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EDC8u); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (depth < kMaxDepth) unit_0083(c, 182u, depth + 1u); else { c.pc = 0x0030E560u; return; } if (c.pc != 0x0030EDC8u) [[unlikely]] return; }
L_0030EDC8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030EDE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EDFCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 181u, depth + 1u); else { c.pc = 0x0030E550u; return; } if (c.pc != 0x0030EDFCu) [[unlikely]] return; }
L_0030EDFC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[4], 0u + 30u);
    set32(c.r[2], c.r[2].w[0] + 11420u);
    set32(c.r[5], 0u + 40u);
    st32((c.r[2].w[0]), c.r[17].w[0]);
    set32(c.r[6], 0u + 32u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EE1Cu); st32((c.r[2].w[0] + 4u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0083(c, 170u, depth + 1u); else { c.pc = 0x0030E380u; return; } if (c.pc != 0x0030EE1Cu) [[unlikely]] return; }
L_0030EE1C:
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EE28u); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (depth < kMaxDepth) unit_0083(c, 182u, depth + 1u); else { c.pc = 0x0030E560u; return; } if (c.pc != 0x0030EE28u) [[unlikely]] return; }
L_0030EE28:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0030EE40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EE5Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 181u, depth + 1u); else { c.pc = 0x0030E550u; return; } if (c.pc != 0x0030EE5Cu) [[unlikely]] return; }
L_0030EE5C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[4], 0u + 31u);
    set32(c.r[2], c.r[2].w[0] + 11420u);
    set32(c.r[5], 0u + 40u);
    st32((c.r[2].w[0]), c.r[17].w[0]);
    set32(c.r[6], 0u + 32u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EE7Cu); st32((c.r[2].w[0] + 4u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0083(c, 170u, depth + 1u); else { c.pc = 0x0030E380u; return; } if (c.pc != 0x0030EE7Cu) [[unlikely]] return; }
L_0030EE7C:
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EE88u); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (depth < kMaxDepth) unit_0083(c, 182u, depth + 1u); else { c.pc = 0x0030E560u; return; } if (c.pc != 0x0030EE88u) [[unlikely]] return; }
L_0030EE88:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0030EEA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EEB0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0083(c, 181u, depth + 1u); else { c.pc = 0x0030E550u; return; } if (c.pc != 0x0030EEB0u) [[unlikely]] return; }
L_0030EEB0:
    set32(c.r[5], 0u + 32u);
    set32(c.r[4], 0u + 33u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EEC0u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 170u, depth + 1u); else { c.pc = 0x0030E380u; return; } if (c.pc != 0x0030EEC0u) [[unlikely]] return; }
L_0030EEC0:
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EECCu); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (depth < kMaxDepth) unit_0083(c, 182u, depth + 1u); else { c.pc = 0x0030E560u; return; } if (c.pc != 0x0030EECCu) [[unlikely]] return; }
L_0030EECC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030EEE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EEF0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0083(c, 181u, depth + 1u); else { c.pc = 0x0030E550u; return; } if (c.pc != 0x0030EEF0u) [[unlikely]] return; }
L_0030EEF0:
    set32(c.r[5], 0u + 32u);
    set32(c.r[4], 0u + 34u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EF00u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 170u, depth + 1u); else { c.pc = 0x0030E380u; return; } if (c.pc != 0x0030EF00u) [[unlikely]] return; }
L_0030EF00:
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EF0Cu); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (depth < kMaxDepth) unit_0083(c, 182u, depth + 1u); else { c.pc = 0x0030E560u; return; } if (c.pc != 0x0030EF0Cu) [[unlikely]] return; }
L_0030EF0C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030EF20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EF38u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0083(c, 181u, depth + 1u); else { c.pc = 0x0030E550u; return; } if (c.pc != 0x0030EF38u) [[unlikely]] return; }
L_0030EF38:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 1u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[16].w[0] + 11420u);
    set32(c.r[6], 0u + 782u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[1].w[0] + 11392u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 38u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st32((c.r[1].w[0] + 11396u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 39u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EF74u); st32((c.r[1].w[0] + 11400u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0030EF74u) [[unlikely]] return; }
L_0030EF74:
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EF88u); set32(c.r[4], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x0030EF88u) [[unlikely]] return; }
L_0030EF88:
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EF94u); set32(c.r[4], c.r[16].w[0] + 260u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x0030EF94u) [[unlikely]] return; }
L_0030EF94:
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EFA0u); set32(c.r[4], c.r[16].w[0] + 516u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x0030EFA0u) [[unlikely]] return; }
L_0030EFA0:
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EFACu); set32(c.r[4], c.r[16].w[0] + 580u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x0030EFACu) [[unlikely]] return; }
L_0030EFAC:
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EFB8u); set32(c.r[4], c.r[16].w[0] + 644u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x0030EFB8u) [[unlikely]] return; }
L_0030EFB8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 2u)));
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EFCCu); set32(c.r[4], c.r[16].w[0] + 708u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x0030EFCCu) [[unlikely]] return; }
L_0030EFCC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 28u)));
    set32(c.r[4], 0u + 35u);
    set32(c.r[5], 0u + 814u);
    set32(c.r[6], 0u + 32u);
    st16((c.r[16].w[0] + 772u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 30u)));
    st16((c.r[16].w[0] + 774u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 32u)));
    st16((c.r[16].w[0] + 776u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 34u)));
    st16((c.r[16].w[0] + 778u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 36u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F004u); st16((c.r[16].w[0] + 780u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0083(c, 170u, depth + 1u); else { c.pc = 0x0030E380u; return; } if (c.pc != 0x0030F004u) [[unlikely]] return; }
L_0030F004:
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F010u); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (depth < kMaxDepth) unit_0083(c, 182u, depth + 1u); else { c.pc = 0x0030E560u; return; } if (c.pc != 0x0030F010u) [[unlikely]] return; }
L_0030F010:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0030F030:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F040u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0083(c, 181u, depth + 1u); else { c.pc = 0x0030E550u; return; } if (c.pc != 0x0030F040u) [[unlikely]] return; }
L_0030F040:
    set32(c.r[5], 0u + 32u);
    set32(c.r[4], 0u + 36u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F050u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 170u, depth + 1u); else { c.pc = 0x0030E380u; return; } if (c.pc != 0x0030F050u) [[unlikely]] return; }
L_0030F050:
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F05Cu); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (depth < kMaxDepth) unit_0083(c, 182u, depth + 1u); else { c.pc = 0x0030E560u; return; } if (c.pc != 0x0030F05Cu) [[unlikely]] return; }
L_0030F05C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030F070:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F088u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0083(c, 181u, depth + 1u); else { c.pc = 0x0030E550u; return; } if (c.pc != 0x0030F088u) [[unlikely]] return; }
L_0030F088:
    set32(c.r[4], 0u + 37u);
    set32(c.r[5], 0u + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F098u); set32(c.r[6], 0u + 76u);  if (depth < kMaxDepth) unit_0083(c, 170u, depth + 1u); else { c.pc = 0x0030E380u; return; } if (c.pc != 0x0030F098u) [[unlikely]] return; }
L_0030F098:
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { goto L_0030F0B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F0B0u);  if (depth < kMaxDepth) unit_0083(c, 182u, depth + 1u); else { c.pc = 0x0030E560u; return; } if (c.pc != 0x0030F0B0u) [[unlikely]] return; }
L_0030F0B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0030F120; } }
L_0030F0B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[2], c.r[2].w[0] + 11420u);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[17].w[0]), c.f[3]);
    st32((c.r[17].w[0] + 4u), c.f[2]);
    st32((c.r[17].w[0] + 8u), c.f[1]);
    st32((c.r[17].w[0] + 12u), c.f[0]);
    c.f[3] = ld32((c.r[2].w[0] + 16u));
    c.f[2] = ld32((c.r[2].w[0] + 20u));
    c.f[1] = ld32((c.r[2].w[0] + 24u));
    c.f[0] = ld32((c.r[2].w[0] + 28u));
    st32((c.r[17].w[0] + 16u), c.f[3]);
    st32((c.r[17].w[0] + 20u), c.f[2]);
    st32((c.r[17].w[0] + 24u), c.f[1]);
    st32((c.r[17].w[0] + 28u), c.f[0]);
    c.f[2] = ld32((c.r[2].w[0] + 32u));
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[17].w[0] + 32u), c.f[2]);
    st32((c.r[17].w[0] + 36u), c.f[1]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F11Cu); st32((c.r[17].w[0] + 40u), c.f[0]);  if (depth < kMaxDepth) unit_0083(c, 182u, depth + 1u); else { c.pc = 0x0030E560u; return; } if (c.pc != 0x0030F11Cu) [[unlikely]] return; }
L_0030F11C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0030F120:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0030F140:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F158u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0083(c, 181u, depth + 1u); else { c.pc = 0x0030E550u; return; } if (c.pc != 0x0030F158u) [[unlikely]] return; }
L_0030F158:
    set32(c.r[4], 0u + 38u);
    set32(c.r[5], 0u + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F168u); set32(c.r[6], 0u + 76u);  if (depth < kMaxDepth) unit_0083(c, 170u, depth + 1u); else { c.pc = 0x0030E380u; return; } if (c.pc != 0x0030F168u) [[unlikely]] return; }
L_0030F168:
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { goto L_0030F188; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F180u);  if (depth < kMaxDepth) unit_0083(c, 182u, depth + 1u); else { c.pc = 0x0030E560u; return; } if (c.pc != 0x0030F180u) [[unlikely]] return; }
L_0030F180:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0030F1A0; } }
L_0030F188:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 11420u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F198u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0083(c, 182u, depth + 1u); else { c.pc = 0x0030E560u; return; } if (c.pc != 0x0030F198u) [[unlikely]] return; }
L_0030F198:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_0030F1A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0030F1C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F1E4u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 181u, depth + 1u); else { c.pc = 0x0030E550u; return; } if (c.pc != 0x0030F1E4u) [[unlikely]] return; }
L_0030F1E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[6].d[0] = c.r[17].d[0] << 48;
    set32(c.r[2], c.r[2].w[0] + 11420u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    st16((c.r[2].w[0] + 2u), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F208u); set32(c.r[4], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x0030F208u) [[unlikely]] return; }
L_0030F208:
    set32(c.r[4], 0u + 39u);
    set32(c.r[5], 0u + 292u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F218u); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_0083(c, 170u, depth + 1u); else { c.pc = 0x0030E380u; return; } if (c.pc != 0x0030F218u) [[unlikely]] return; }
L_0030F218:
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F224u); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (depth < kMaxDepth) unit_0083(c, 182u, depth + 1u); else { c.pc = 0x0030E560u; return; } if (c.pc != 0x0030F224u) [[unlikely]] return; }
L_0030F224:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0030F240:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F250u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0083(c, 181u, depth + 1u); else { c.pc = 0x0030E550u; return; } if (c.pc != 0x0030F250u) [[unlikely]] return; }
L_0030F250:
    set32(c.r[5], 0u + 32u);
    set32(c.r[4], 0u + 41u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F260u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 170u, depth + 1u); else { c.pc = 0x0030E380u; return; } if (c.pc != 0x0030F260u) [[unlikely]] return; }
L_0030F260:
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F26Cu); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (depth < kMaxDepth) unit_0083(c, 182u, depth + 1u); else { c.pc = 0x0030E560u; return; } if (c.pc != 0x0030F26Cu) [[unlikely]] return; }
L_0030F26C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030F280:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F290u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0083(c, 181u, depth + 1u); else { c.pc = 0x0030E550u; return; } if (c.pc != 0x0030F290u) [[unlikely]] return; }
L_0030F290:
    set32(c.r[5], 0u + 32u);
    set32(c.r[4], 0u + 42u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F2A0u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 170u, depth + 1u); else { c.pc = 0x0030E380u; return; } if (c.pc != 0x0030F2A0u) [[unlikely]] return; }
L_0030F2A0:
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F2ACu); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (depth < kMaxDepth) unit_0083(c, 182u, depth + 1u); else { c.pc = 0x0030E560u; return; } if (c.pc != 0x0030F2ACu) [[unlikely]] return; }
L_0030F2AC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030F2C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F2D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 181u, depth + 1u); else { c.pc = 0x0030E550u; return; } if (c.pc != 0x0030F2D4u) [[unlikely]] return; }
L_0030F2D4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    set32(c.r[5], 0u + 32u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[4], 0u + 43u);
    st32((c.r[1].w[0] + 11392u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F2F4u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 170u, depth + 1u); else { c.pc = 0x0030E380u; return; } if (c.pc != 0x0030F2F4u) [[unlikely]] return; }
L_0030F2F4:
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F300u); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (depth < kMaxDepth) unit_0083(c, 182u, depth + 1u); else { c.pc = 0x0030E560u; return; } if (c.pc != 0x0030F300u) [[unlikely]] return; }
L_0030F300:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030F320:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F330u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0083(c, 181u, depth + 1u); else { c.pc = 0x0030E550u; return; } if (c.pc != 0x0030F330u) [[unlikely]] return; }
L_0030F330:
    set32(c.r[5], 0u + 32u);
    set32(c.r[4], 0u + 44u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F340u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 170u, depth + 1u); else { c.pc = 0x0030E380u; return; } if (c.pc != 0x0030F340u) [[unlikely]] return; }
L_0030F340:
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F34Cu); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (depth < kMaxDepth) unit_0083(c, 182u, depth + 1u); else { c.pc = 0x0030E560u; return; } if (c.pc != 0x0030F34Cu) [[unlikely]] return; }
L_0030F34C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030F360:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F370u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0083(c, 181u, depth + 1u); else { c.pc = 0x0030E550u; return; } if (c.pc != 0x0030F370u) [[unlikely]] return; }
L_0030F370:
    set32(c.r[5], 0u + 32u);
    set32(c.r[4], 0u + 45u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F380u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 170u, depth + 1u); else { c.pc = 0x0030E380u; return; } if (c.pc != 0x0030F380u) [[unlikely]] return; }
L_0030F380:
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F38Cu); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (depth < kMaxDepth) unit_0083(c, 182u, depth + 1u); else { c.pc = 0x0030E560u; return; } if (c.pc != 0x0030F38Cu) [[unlikely]] return; }
L_0030F38C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030F3A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F3B0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0083(c, 181u, depth + 1u); else { c.pc = 0x0030E550u; return; } if (c.pc != 0x0030F3B0u) [[unlikely]] return; }
L_0030F3B0:
    set32(c.r[5], 0u + 32u);
    set32(c.r[4], 0u + 46u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F3C0u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 170u, depth + 1u); else { c.pc = 0x0030E380u; return; } if (c.pc != 0x0030F3C0u) [[unlikely]] return; }
L_0030F3C0:
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F3CCu); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (depth < kMaxDepth) unit_0083(c, 182u, depth + 1u); else { c.pc = 0x0030E560u; return; } if (c.pc != 0x0030F3CCu) [[unlikely]] return; }
L_0030F3CC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030F3E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F3F0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0083(c, 181u, depth + 1u); else { c.pc = 0x0030E550u; return; } if (c.pc != 0x0030F3F0u) [[unlikely]] return; }
L_0030F3F0:
    set32(c.r[5], 0u + 32u);
    set32(c.r[4], 0u + 47u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F400u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 170u, depth + 1u); else { c.pc = 0x0030E380u; return; } if (c.pc != 0x0030F400u) [[unlikely]] return; }
L_0030F400:
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F40Cu); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (depth < kMaxDepth) unit_0083(c, 182u, depth + 1u); else { c.pc = 0x0030E560u; return; } if (c.pc != 0x0030F40Cu) [[unlikely]] return; }
L_0030F40C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030F420:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F448u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 181u, depth + 1u); else { c.pc = 0x0030E550u; return; } if (c.pc != 0x0030F448u) [[unlikely]] return; }
L_0030F448:
    set32(c.r[4], 0u + 48u);
    set32(c.r[5], 0u + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F458u); set32(c.r[6], 0u + 296u);  if (depth < kMaxDepth) unit_0083(c, 170u, depth + 1u); else { c.pc = 0x0030E380u; return; } if (c.pc != 0x0030F458u) [[unlikely]] return; }
L_0030F458:
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { goto L_0030F478; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F470u);  if (depth < kMaxDepth) unit_0083(c, 182u, depth + 1u); else { c.pc = 0x0030E560u; return; } if (c.pc != 0x0030F470u) [[unlikely]] return; }
L_0030F470:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0030F4A8; } }
L_0030F478:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[16], c.r[16].w[0] + 11420u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F48Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x0030F48Cu) [[unlikely]] return; }
L_0030F48C:
    set32(c.r[2], ld32((c.r[16].w[0] + 256u)));
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 260u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F4A0u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0083(c, 182u, depth + 1u); else { c.pc = 0x0030E560u; return; } if (c.pc != 0x0030F4A0u) [[unlikely]] return; }
L_0030F4A0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_0030F4A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0030F4D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F4E8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0083(c, 181u, depth + 1u); else { c.pc = 0x0030E550u; return; } if (c.pc != 0x0030F4E8u) [[unlikely]] return; }
L_0030F4E8:
    set32(c.r[4], 0u + 49u);
    set32(c.r[5], 0u + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F4F8u); set32(c.r[6], 0u + 36u);  if (depth < kMaxDepth) unit_0083(c, 170u, depth + 1u); else { c.pc = 0x0030E380u; return; } if (c.pc != 0x0030F4F8u) [[unlikely]] return; }
L_0030F4F8:
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { goto L_0030F518; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F510u);  if (depth < kMaxDepth) unit_0083(c, 182u, depth + 1u); else { c.pc = 0x0030E560u; return; } if (c.pc != 0x0030F510u) [[unlikely]] return; }
L_0030F510:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0030F530; } }
L_0030F518:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 11420u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F528u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0083(c, 182u, depth + 1u); else { c.pc = 0x0030E560u; return; } if (c.pc != 0x0030F528u) [[unlikely]] return; }
L_0030F528:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_0030F530:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0030F550:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F56Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 181u, depth + 1u); else { c.pc = 0x0030E550u; return; } if (c.pc != 0x0030F56Cu) [[unlikely]] return; }
L_0030F56C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[4], 0u + 54u);
    set32(c.r[2], c.r[2].w[0] + 11420u);
    set32(c.r[5], 0u + 40u);
    st32((c.r[2].w[0]), c.r[17].w[0]);
    set32(c.r[6], 0u + 32u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F58Cu); st32((c.r[2].w[0] + 4u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0083(c, 170u, depth + 1u); else { c.pc = 0x0030E380u; return; } if (c.pc != 0x0030F58Cu) [[unlikely]] return; }
L_0030F58C:
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F598u); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (depth < kMaxDepth) unit_0083(c, 182u, depth + 1u); else { c.pc = 0x0030E560u; return; } if (c.pc != 0x0030F598u) [[unlikely]] return; }
L_0030F598:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0030F5B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F5D8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0083(c, 181u, depth + 1u); else { c.pc = 0x0030E550u; return; } if (c.pc != 0x0030F5D8u) [[unlikely]] return; }
L_0030F5D8:
    set32(c.r[4], 0u + 55u);
    set32(c.r[5], 0u + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F5E8u); set32(c.r[6], 0u + 44u);  if (depth < kMaxDepth) unit_0083(c, 170u, depth + 1u); else { c.pc = 0x0030E380u; return; } if (c.pc != 0x0030F5E8u) [[unlikely]] return; }
L_0030F5E8:
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { goto L_0030F608; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F600u);  if (depth < kMaxDepth) unit_0083(c, 182u, depth + 1u); else { c.pc = 0x0030E560u; return; } if (c.pc != 0x0030F600u) [[unlikely]] return; }
L_0030F600:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0030F630; } }
L_0030F608:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[3], c.r[3].w[0] + 11420u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F62Cu); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0083(c, 182u, depth + 1u); else { c.pc = 0x0030E560u; return; } if (c.pc != 0x0030F62Cu) [[unlikely]] return; }
L_0030F62C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0030F630:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0030F650:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F660u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0083(c, 181u, depth + 1u); else { c.pc = 0x0030E550u; return; } if (c.pc != 0x0030F660u) [[unlikely]] return; }
L_0030F660:
    set32(c.r[5], 0u + 32u);
    set32(c.r[4], 0u + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F670u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 170u, depth + 1u); else { c.pc = 0x0030E380u; return; } if (c.pc != 0x0030F670u) [[unlikely]] return; }
L_0030F670:
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F67Cu); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (depth < kMaxDepth) unit_0083(c, 182u, depth + 1u); else { c.pc = 0x0030E560u; return; } if (c.pc != 0x0030F67Cu) [[unlikely]] return; }
L_0030F67C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030F690:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F6ACu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 181u, depth + 1u); else { c.pc = 0x0030E550u; return; } if (c.pc != 0x0030F6ACu) [[unlikely]] return; }
L_0030F6AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[4], 0u + 58u);
    set32(c.r[2], c.r[2].w[0] + 11420u);
    set32(c.r[5], 0u + 40u);
    st32((c.r[2].w[0]), c.r[17].w[0]);
    set32(c.r[6], 0u + 32u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F6CCu); st32((c.r[2].w[0] + 4u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0083(c, 170u, depth + 1u); else { c.pc = 0x0030E380u; return; } if (c.pc != 0x0030F6CCu) [[unlikely]] return; }
L_0030F6CC:
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F6D8u); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (depth < kMaxDepth) unit_0083(c, 182u, depth + 1u); else { c.pc = 0x0030E560u; return; } if (c.pc != 0x0030F6D8u) [[unlikely]] return; }
L_0030F6D8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0030F6F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F718u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0083(c, 181u, depth + 1u); else { c.pc = 0x0030E550u; return; } if (c.pc != 0x0030F718u) [[unlikely]] return; }
L_0030F718:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] + 11420u);  if (t) { goto L_0030F738; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F730u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x0030F730u) [[unlikely]] return; }
L_0030F730:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030F740; } }
L_0030F738:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0030F740:
    st32((c.r[16].w[0] + 256u), c.r[18].w[0]);
    set32(c.r[4], 0u + 59u);
    set32(c.r[5], 0u + 296u);
    set32(c.r[6], 0u + 32u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F758u); st32((c.r[16].w[0] + 260u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0083(c, 170u, depth + 1u); else { c.pc = 0x0030E380u; return; } if (c.pc != 0x0030F758u) [[unlikely]] return; }
L_0030F758:
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F764u); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (depth < kMaxDepth) unit_0083(c, 182u, depth + 1u); else { c.pc = 0x0030E560u; return; } if (c.pc != 0x0030F764u) [[unlikely]] return; }
L_0030F764:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0030F790:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F7A0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0083(c, 181u, depth + 1u); else { c.pc = 0x0030E550u; return; } if (c.pc != 0x0030F7A0u) [[unlikely]] return; }
L_0030F7A0:
    set32(c.r[5], 0u + 32u);
    set32(c.r[4], 0u + 60u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F7B0u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 170u, depth + 1u); else { c.pc = 0x0030E380u; return; } if (c.pc != 0x0030F7B0u) [[unlikely]] return; }
    goto L_0030F7B0;
L_0030F7AC:
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_0030F7B0:
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F7BCu); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (depth < kMaxDepth) unit_0083(c, 182u, depth + 1u); else { c.pc = 0x0030E560u; return; } if (c.pc != 0x0030F7BCu) [[unlikely]] return; }
L_0030F7BC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030F7D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F7E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 181u, depth + 1u); else { c.pc = 0x0030E550u; return; } if (c.pc != 0x0030F7E4u) [[unlikely]] return; }
L_0030F7E4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 512u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[16], c.r[16].w[0] + 11420u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F7FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x0030F7FCu) [[unlikely]] return; }
L_0030F7FC:
    set32(c.r[4], 0u + 61u);
    set32(c.r[5], 0u + 544u);
    set32(c.r[6], 0u + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F810u); st8((c.r[16].w[0] + 511u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0083(c, 170u, depth + 1u); else { c.pc = 0x0030E380u; return; } if (c.pc != 0x0030F810u) [[unlikely]] return; }
L_0030F810:
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F81Cu); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (depth < kMaxDepth) unit_0083(c, 182u, depth + 1u); else { c.pc = 0x0030E560u; return; } if (c.pc != 0x0030F81Cu) [[unlikely]] return; }
L_0030F81C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030F830:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F844u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 181u, depth + 1u); else { c.pc = 0x0030E550u; return; } if (c.pc != 0x0030F844u) [[unlikely]] return; }
L_0030F844:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[4], 0u + 62u);
    set32(c.r[5], 0u + 34u);
    set32(c.r[6], 0u + 32u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F85Cu); st16((c.r[1].w[0] + 11420u), static_cast<std::uint16_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_0083(c, 170u, depth + 1u); else { c.pc = 0x0030E380u; return; } if (c.pc != 0x0030F85Cu) [[unlikely]] return; }
L_0030F85C:
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F868u); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (depth < kMaxDepth) unit_0083(c, 182u, depth + 1u); else { c.pc = 0x0030E560u; return; } if (c.pc != 0x0030F868u) [[unlikely]] return; }
L_0030F868:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030F880:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F8A0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0083(c, 181u, depth + 1u); else { c.pc = 0x0030E550u; return; } if (c.pc != 0x0030F8A0u) [[unlikely]] return; }
L_0030F8A0:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[5], 0u + 40u);
    set32(c.r[16], c.r[16].w[0] + 11420u);
    set32(c.r[4], 0u + 63u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F8BCu); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[17].w[0]));  if (depth < kMaxDepth) unit_0083(c, 170u, depth + 1u); else { c.pc = 0x0030E380u; return; } if (c.pc != 0x0030F8BCu) [[unlikely]] return; }
L_0030F8BC:
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    c.r[1].d[0] = c.r[17].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0030F8D8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_0030F8D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F8E0u);  if (depth < kMaxDepth) unit_0083(c, 182u, depth + 1u); else { c.pc = 0x0030E560u; return; } if (c.pc != 0x0030F8E0u) [[unlikely]] return; }
L_0030F8E0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0030F900:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F918u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0083(c, 181u, depth + 1u); else { c.pc = 0x0030E550u; return; } if (c.pc != 0x0030F918u) [[unlikely]] return; }
L_0030F918:
    set32(c.r[5], 0u + 32u);
    set32(c.r[4], 0u + 70u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F928u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 170u, depth + 1u); else { c.pc = 0x0030E380u; return; } if (c.pc != 0x0030F928u) [[unlikely]] return; }
L_0030F928:
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.r[1].d[0] = c.r[16].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);  if (t) { goto L_0030F948; } }
    set32(c.r[2], ld32((c.r[1].w[0] + 11392u)));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0030F948:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F950u);  if (depth < kMaxDepth) unit_0083(c, 182u, depth + 1u); else { c.pc = 0x0030E560u; return; } if (c.pc != 0x0030F950u) [[unlikely]] return; }
L_0030F950:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0030F970:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F99Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 181u, depth + 1u); else { c.pc = 0x0030E550u; return; } if (c.pc != 0x0030F99Cu) [[unlikely]] return; }
L_0030F99C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[4], 0u + 71u);
    set32(c.r[5], 0u + 32u);
    set32(c.r[6], 0u + 812u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F9B4u); st32((c.r[1].w[0] + 11392u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0083(c, 170u, depth + 1u); else { c.pc = 0x0030E380u; return; } if (c.pc != 0x0030F9B4u) [[unlikely]] return; }
L_0030F9B4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[16].d[0] = c.r[2].d[0] << 48;
    set32(c.r[3], c.r[3].w[0] + 11420u);
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    set32(c.r[2], ld32((c.r[3].w[0])));
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F9E0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0083(c, 182u, depth + 1u); else { c.pc = 0x0030E560u; return; } if (c.pc != 0x0030F9E0u) [[unlikely]] return; }
L_0030F9E0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0030FA00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FA14u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 181u, depth + 1u); else { c.pc = 0x0030E550u; return; } if (c.pc != 0x0030FA14u) [[unlikely]] return; }
L_0030FA14:
    set32(c.r[5], 0u + 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[4], 0u + 72u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FA2Cu); st32((c.r[1].w[0] + 11392u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0083(c, 170u, depth + 1u); else { c.pc = 0x0030E380u; return; } if (c.pc != 0x0030FA2Cu) [[unlikely]] return; }
L_0030FA2C:
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FA38u); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (depth < kMaxDepth) unit_0083(c, 182u, depth + 1u); else { c.pc = 0x0030E560u; return; } if (c.pc != 0x0030FA38u) [[unlikely]] return; }
L_0030FA38:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030FA4C:
    c.budget -= 1;
L_0030FA50:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FA78u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0083(c, 181u, depth + 1u); else { c.pc = 0x0030E550u; return; } if (c.pc != 0x0030FA78u) [[unlikely]] return; }
L_0030FA78:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[5], 0u + 296u);
    set32(c.r[16], c.r[16].w[0] + 11420u);
    set32(c.r[4], 0u + 74u);
    st32((c.r[16].w[0]), c.r[17].w[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FA98u); st32((c.r[16].w[0] + 4u), c.r[19].w[0]);  if (depth < kMaxDepth) unit_0083(c, 170u, depth + 1u); else { c.pc = 0x0030E380u; return; } if (c.pc != 0x0030FA98u) [[unlikely]] return; }
L_0030FA98:
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { goto L_0030FAB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FAB0u);  if (depth < kMaxDepth) unit_0083(c, 182u, depth + 1u); else { c.pc = 0x0030E560u; return; } if (c.pc != 0x0030FAB0u) [[unlikely]] return; }
L_0030FAB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0030FAE0; } }
L_0030FAB8:
    c.r[1].d[0] = c.r[19].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0030FAD0; } }
    set32(c.r[5], c.r[16].w[0] + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FAD0u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x0030FAD0u) [[unlikely]] return; }
L_0030FAD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FAD8u);  if (depth < kMaxDepth) unit_0083(c, 182u, depth + 1u); else { c.pc = 0x0030E560u; return; } if (c.pc != 0x0030FAD8u) [[unlikely]] return; }
L_0030FAD8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_0030FAE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0030FB00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st8((c.r[1].w[0] + 12416u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st32((c.r[1].w[0] + 12424u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st32((c.r[1].w[0] + 12432u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FB2Cu); st32((c.r[1].w[0] + 12440u), 0u);  if (depth < kMaxDepth) unit_0083(c, 162u, depth + 1u); else { c.pc = 0x0030E280u; return; } if (c.pc != 0x0030FB2Cu) [[unlikely]] return; }
L_0030FB2C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0030FB40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st8((c.r[1].w[0] + 12416u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st32((c.r[1].w[0] + 12424u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st32((c.r[1].w[0] + 12432u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FB6Cu); st32((c.r[1].w[0] + 12440u), 0u);  if (depth < kMaxDepth) unit_0083(c, 168u, depth + 1u); else { c.pc = 0x0030E350u; return; } if (c.pc != 0x0030FB6Cu) [[unlikely]] return; }
L_0030FB6C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0030FB80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_0030FB90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FBA0u);  if (depth < kMaxDepth) unit_0083(c, 178u, depth + 1u); else { c.pc = 0x0030E510u; return; } if (c.pc != 0x0030FBA0u) [[unlikely]] return; }
L_0030FBA0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0030FBC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[4].d[0] << 48;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FBD4u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0083(c, 180u, depth + 1u); else { c.pc = 0x0030E540u; return; } if (c.pc != 0x0030FBD4u) [[unlikely]] return; }
L_0030FBD4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0030FBF0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[1].w[0] + 12432u)));  c.pc = t; return; }
L_0030FC00:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 12432u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 3ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0030FC20:
    c.r[2].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] + 12440u), c.r[2].w[0]);  c.pc = t; return; }
L_0030FC40:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[1].w[0] + 12448u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0030FC70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030FD68; } }
    c.budget -= 1;
L_0030FC70:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 12440u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030FC88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030FD68; } }
L_0030FC88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FC90u);  if (depth < kMaxDepth) unit_0083(c, 402u, depth + 1u); else { c.pc = 0x0030FB90u; return; } if (c.pc != 0x0030FC90u) [[unlikely]] return; }
L_0030FC90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);  if (t) { goto L_0030FCA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[1].w[0] + 12448u)));  if (t) { goto L_0030FD68; } }
L_0030FCA0:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0030FD28; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0030FD28; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0030FCC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030FD60; } }
L_0030FCC8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0030FCF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FCD8u);  if (depth < kMaxDepth) unit_0084(c, 186u, depth + 1u); else { c.pc = 0x00310FE0u; return; } if (c.pc != 0x0030FCD8u) [[unlikely]] return; }
L_0030FCD8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0030FCF0; } }
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 12448u), c.r[2].w[0]);  if (t) { goto L_0030FD60; } }
L_0030FCF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FCF8u); set32(c.r[4], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_0084(c, 196u, depth + 1u); else { c.pc = 0x003110D0u; return; } if (c.pc != 0x0030FCF8u) [[unlikely]] return; }
L_0030FCF8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0030FD18; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030FD60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030FD60; } }
    c.budget -= 1;
L_0030FD18:
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 12448u), c.r[2].w[0]);  if (t) { goto L_0030FD60; } }
L_0030FD28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FD30u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0084(c, 128u, depth + 1u); else { c.pc = 0x00310A60u; return; } if (c.pc != 0x0030FD30u) [[unlikely]] return; }
L_0030FD30:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0030FD48; } }
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 12448u), c.r[2].w[0]);  if (t) { goto L_0030FD60; } }
L_0030FD48:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 60u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0030FD60; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st32((c.r[1].w[0] + 12448u), c.r[2].w[0]);
    c.budget -= 2;
L_0030FD60:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 12448u)));
    c.budget -= 2;
L_0030FD68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0030FD80:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[1].w[0] + 12448u)));  c.pc = t; return; }
L_0030FD90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0030FE08; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_0030FDC0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0030FDC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030FE58; } }
L_0030FDC0:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0030FDD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030FDF0; } }
    c.budget -= 1;
L_0030FDD8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FDE4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0083(c, 183u, depth + 1u); else { c.pc = 0x0030E570u; return; } if (c.pc != 0x0030FDE4u) [[unlikely]] return; }
L_0030FDE4:
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (t) { goto L_0030FE58; } }
L_0030FDF0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FDFCu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0083(c, 183u, depth + 1u); else { c.pc = 0x0030E570u; return; } if (c.pc != 0x0030FDFCu) [[unlikely]] return; }
L_0030FDFC:
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (t) { goto L_0030FE58; } }
L_0030FE08:
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0030FE28; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0030FE28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030FE40; } }
    c.budget -= 1;
L_0030FE28:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FE34u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_0083(c, 183u, depth + 1u); else { c.pc = 0x0030E570u; return; } if (c.pc != 0x0030FE34u) [[unlikely]] return; }
L_0030FE34:
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (t) { goto L_0030FE58; } }
L_0030FE40:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FE4Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0083(c, 183u, depth + 1u); else { c.pc = 0x0030E570u; return; } if (c.pc != 0x0030FE4Cu) [[unlikely]] return; }
L_0030FE4C:
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.budget -= 3;
L_0030FE58:
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 12456u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.budget -= 4;
L_0030FE68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FE70u); st32((c.r[1].w[0] + 12432u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0084(c, 202u, depth + 1u); else { c.pc = 0x003111B0u; return; } if (c.pc != 0x0030FE70u) [[unlikely]] return; }
L_0030FE70:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030FE90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = ld16((c.r[2].w[0] + 4u));
    c.r[6].d[0] = ld16((c.r[2].w[0] + 6u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FEACu); set32(c.r[4], ld32((c.r[4].w[0])));  if (depth < kMaxDepth) unit_0083(c, 210u, depth + 1u); else { c.pc = 0x0030E820u; return; } if (c.pc != 0x0030FEACu) [[unlikely]] return; }
L_0030FEAC:
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FEB8u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0083(c, 401u, depth + 1u); else { c.pc = 0x0030FB80u; return; } if (c.pc != 0x0030FEB8u) [[unlikely]] return; }
L_0030FEB8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0030FED0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[6], 0u + 4u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[5], 0u + 8200u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FF00u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 204u, depth + 1u); else { c.pc = 0x0030E750u; return; } if (c.pc != 0x0030FF00u) [[unlikely]] return; }
L_0030FF00:
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FF0Cu); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0083(c, 401u, depth + 1u); else { c.pc = 0x0030FB80u; return; } if (c.pc != 0x0030FF0Cu) [[unlikely]] return; }
L_0030FF0C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0030FF20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030FF48; } }
    c.budget -= 1;
L_0030FF20:
    c.r[4].d[0] = c.r[17].d[0] << 48;
    c.budget -= 1;
L_0030FF24:
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[7], c.r[16].w[0] + 4u);
    set32(c.r[5], 0u + 8193u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FF38u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0083(c, 204u, depth + 1u); else { c.pc = 0x0030E750u; return; } if (c.pc != 0x0030FF38u) [[unlikely]] return; }
L_0030FF38:
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FF44u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0083(c, 401u, depth + 1u); else { c.pc = 0x0030FB80u; return; } if (c.pc != 0x0030FF44u) [[unlikely]] return; }
L_0030FF44:
    c.budget -= 1;
L_0030FF48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0030FF60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[6], 0u + 4u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[5], 0u + 8200u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FF90u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 199u, depth + 1u); else { c.pc = 0x0030E6C0u; return; } if (c.pc != 0x0030FF90u) [[unlikely]] return; }
L_0030FF90:
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FF9Cu); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0083(c, 401u, depth + 1u); else { c.pc = 0x0030FB80u; return; } if (c.pc != 0x0030FF9Cu) [[unlikely]] return; }
L_0030FF9C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0030FFB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030FFD8; } }
L_0030FFAC:
    c.budget -= 1;
L_0030FFB0:
    c.r[4].d[0] = c.r[17].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[7], c.r[16].w[0] + 4u);
    set32(c.r[5], 0u + 8193u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FFC8u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0083(c, 199u, depth + 1u); else { c.pc = 0x0030E6C0u; return; } if (c.pc != 0x0030FFC8u) [[unlikely]] return; }
    goto L_0030FFC8;
L_0030FFC4:
    set32(c.r[6], 0u + 4u);
    c.budget -= 1;
L_0030FFC8:
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FFD4u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0083(c, 401u, depth + 1u); else { c.pc = 0x0030FB80u; return; } if (c.pc != 0x0030FFD4u) [[unlikely]] return; }
    goto L_0030FFD4;
L_0030FFD0:
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 1;
L_0030FFD4:
    c.budget -= 1;
L_0030FFD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0030FFF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].d[0] = c.r[4].d[0] << 48;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 3;
L_0030FFFC:
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 1;
    [[clang::musttail]] return unit_0084(c, 1u, depth);
}

}
