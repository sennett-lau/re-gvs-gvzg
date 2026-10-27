#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00BE[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0,
    0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 17, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 18, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    27, 0, 0, 28, 0, 0, 29, 0, 0, 30, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 34,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    36, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 43, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 48, 0, 49, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0,
    53, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 59, 0, 60, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62,
    0, 0, 0, 63, 0, 0, 64, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 70, 0, 71, 0, 0, 72,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 75, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 80,
    0, 0, 81, 0, 82, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 86, 0, 0, 87, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 92, 0, 93, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 97, 0,
    0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0,
    101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 105, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 112, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 0,
    0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0,
    0, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 131,
    0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 135, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0,
    138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 143, 0, 0, 0, 144, 0,
    0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0,
    0, 0, 0, 150, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0,
    0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0,
    0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 168, 0,
    0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0,
    0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 0,
    0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 191,
    0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0,
    0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 203, 0, 204,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 210, 0, 0, 0,
    211, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 214, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0,
    219, 0, 220, 0, 221, 0, 0, 0, 222, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 225, 0, 226, 0, 227, 0, 0, 0, 228, 0, 229, 0, 0, 0, 230, 0, 0, 0, 0, 0, 231, 0,
    0, 0, 232, 0, 0, 0, 233, 0, 234, 0, 235, 0, 0, 0, 0, 0, 236, 0, 0, 237, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 247, 0, 248, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 252, 0, 253, 0, 0,
    0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 256, 0, 0, 257, 0, 0, 0, 0, 258, 0, 0, 0, 259, 0, 260, 0,
    261, 0, 262, 0, 263, 0, 264, 0, 265, 0, 0, 0, 266, 0, 0, 0, 0, 267, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 271,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 273, 0, 274, 0, 0, 0, 0, 0, 0, 275, 0, 276, 0, 277, 0, 0, 0, 0, 0, 0, 278,
    0, 279, 0, 280, 0, 281, 0, 0, 0, 0, 282, 0, 283, 0, 0, 0, 0, 0, 0, 0, 284, 0, 285, 0, 286, 0, 287, 0, 0, 0, 288, 0,
    289, 0, 290, 0, 291, 0, 292, 0, 293, 0, 0, 0, 0, 0, 294, 0, 295, 0, 296, 0, 297, 0, 0, 0, 298, 0, 299, 0, 0, 300, 0, 0,
    0, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 303, 0, 0, 304, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0,
    307, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    312, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 315, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    316, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0,
    0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 0, 0,
    338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00BE(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003F8000;
    case 2u: goto L_003F8028;
    case 3u: goto L_003F8038;
    case 4u: goto L_003F8098;
    case 5u: goto L_003F80E8;
    case 6u: goto L_003F8140;
    case 7u: goto L_003F8190;
    case 8u: goto L_003F81A0;
    case 9u: goto L_003F81A8;
    case 10u: goto L_003F8210;
    case 11u: goto L_003F8278;
    case 12u: goto L_003F829C;
    case 13u: goto L_003F8348;
    case 14u: goto L_003F8378;
    case 15u: goto L_003F83A4;
    case 16u: goto L_003F83DC;
    case 17u: goto L_003F83E8;
    case 18u: goto L_003F8418;
    case 19u: goto L_003F8424;
    case 20u: goto L_003F845C;
    case 21u: goto L_003F846C;
    case 22u: goto L_003F84BC;
    case 23u: goto L_003F84CC;
    case 24u: goto L_003F84E4;
    case 25u: goto L_003F8518;
    case 26u: goto L_003F8540;
    case 27u: goto L_003F8580;
    case 28u: goto L_003F858C;
    case 29u: goto L_003F8598;
    case 30u: goto L_003F85A4;
    case 31u: goto L_003F85A8;
    case 32u: goto L_003F85C0;
    case 33u: goto L_003F85EC;
    case 34u: goto L_003F85FC;
    case 35u: goto L_003F868C;
    case 36u: goto L_003F8880;
    case 37u: goto L_003F888C;
    case 38u: goto L_003F8918;
    case 39u: goto L_003F8924;
    case 40u: goto L_003F8B20;
    case 41u: goto L_003F8B2C;
    case 42u: goto L_003F8BE8;
    case 43u: goto L_003F8BF4;
    case 44u: goto L_003F8CB0;
    case 45u: goto L_003F8D58;
    case 46u: goto L_003F8D8C;
    case 47u: goto L_003F8D9C;
    case 48u: goto L_003F8DA8;
    case 49u: goto L_003F8DB0;
    case 50u: goto L_003F8DBC;
    case 51u: goto L_003F8EE4;
    case 52u: goto L_003F8EF4;
    case 53u: goto L_003F8F00;
    case 54u: goto L_003F8F0C;
    case 55u: goto L_003F8F50;
    case 56u: goto L_003F8FF8;
    case 57u: goto L_003F902C;
    case 58u: goto L_003F903C;
    case 59u: goto L_003F9048;
    case 60u: goto L_003F9050;
    case 61u: goto L_003F905C;
    case 62u: goto L_003F917C;
    case 63u: goto L_003F918C;
    case 64u: goto L_003F9198;
    case 65u: goto L_003F91A4;
    case 66u: goto L_003F91F0;
    case 67u: goto L_003F9298;
    case 68u: goto L_003F92CC;
    case 69u: goto L_003F92DC;
    case 70u: goto L_003F92E8;
    case 71u: goto L_003F92F0;
    case 72u: goto L_003F92FC;
    case 73u: goto L_003F941C;
    case 74u: goto L_003F942C;
    case 75u: goto L_003F9438;
    case 76u: goto L_003F9444;
    case 77u: goto L_003F9490;
    case 78u: goto L_003F9538;
    case 79u: goto L_003F956C;
    case 80u: goto L_003F957C;
    case 81u: goto L_003F9588;
    case 82u: goto L_003F9590;
    case 83u: goto L_003F959C;
    case 84u: goto L_003F96BC;
    case 85u: goto L_003F96CC;
    case 86u: goto L_003F96D8;
    case 87u: goto L_003F96E4;
    case 88u: goto L_003F9730;
    case 89u: goto L_003F97D8;
    case 90u: goto L_003F980C;
    case 91u: goto L_003F981C;
    case 92u: goto L_003F9828;
    case 93u: goto L_003F9830;
    case 94u: goto L_003F983C;
    case 95u: goto L_003F995C;
    case 96u: goto L_003F996C;
    case 97u: goto L_003F9978;
    case 98u: goto L_003F9984;
    case 99u: goto L_003F99D0;
    case 100u: goto L_003F9A68;
    case 101u: goto L_003F9A80;
    case 102u: goto L_003F9AE4;
    case 103u: goto L_003F9B40;
    case 104u: goto L_003F9B68;
    case 105u: goto L_003F9B74;
    case 106u: goto L_003F9BC0;
    case 107u: goto L_003F9C58;
    case 108u: goto L_003F9C70;
    case 109u: goto L_003F9CD4;
    case 110u: goto L_003F9D30;
    case 111u: goto L_003F9D58;
    case 112u: goto L_003F9D64;
    case 113u: goto L_003F9DB0;
    case 114u: goto L_003F9DE0;
    case 115u: goto L_003F9E10;
    case 116u: goto L_003F9E44;
    case 117u: goto L_003F9E4C;
    case 118u: goto L_003F9E5C;
    case 119u: goto L_003F9E70;
    case 120u: goto L_003F9E88;
    case 121u: goto L_003F9EA0;
    case 122u: goto L_003F9EBC;
    case 123u: goto L_003F9ECC;
    case 124u: goto L_003F9EE0;
    case 125u: goto L_003F9EF8;
    case 126u: goto L_003F9F14;
    case 127u: goto L_003F9F24;
    case 128u: goto L_003F9F38;
    case 129u: goto L_003F9F50;
    case 130u: goto L_003F9F6C;
    case 131u: goto L_003F9F7C;
    case 132u: goto L_003F9F90;
    case 133u: goto L_003F9FB0;
    case 134u: goto L_003F9FE4;
    case 135u: goto L_003F9FF0;
    case 136u: goto L_003FA050;
    case 137u: goto L_003FA06C;
    case 138u: goto L_003FA080;
    case 139u: goto L_003FA094;
    case 140u: goto L_003FA0B0;
    case 141u: goto L_003FA0C4;
    case 142u: goto L_003FA0DC;
    case 143u: goto L_003FA0E8;
    case 144u: goto L_003FA0F8;
    case 145u: goto L_003FA10C;
    case 146u: goto L_003FA130;
    case 147u: goto L_003FA1C4;
    case 148u: goto L_003FA1E0;
    case 149u: goto L_003FA1F4;
    case 150u: goto L_003FA20C;
    case 151u: goto L_003FA218;
    case 152u: goto L_003FA228;
    case 153u: goto L_003FA23C;
    case 154u: goto L_003FA260;
    case 155u: goto L_003FA2C0;
    case 156u: goto L_003FA2C8;
    case 157u: goto L_003FA2F8;
    case 158u: goto L_003FA30C;
    case 159u: goto L_003FA370;
    case 160u: goto L_003FA3A0;
    case 161u: goto L_003FA3DC;
    case 162u: goto L_003FA3F4;
    case 163u: goto L_003FA410;
    case 164u: goto L_003FA420;
    case 165u: goto L_003FA434;
    case 166u: goto L_003FA44C;
    case 167u: goto L_003FA468;
    case 168u: goto L_003FA478;
    case 169u: goto L_003FA48C;
    case 170u: goto L_003FA4CC;
    case 171u: goto L_003FA4E8;
    case 172u: goto L_003FA4F8;
    case 173u: goto L_003FA50C;
    case 174u: goto L_003FA530;
    case 175u: goto L_003FA550;
    case 176u: goto L_003FA584;
    case 177u: goto L_003FA59C;
    case 178u: goto L_003FA5B8;
    case 179u: goto L_003FA5C8;
    case 180u: goto L_003FA5DC;
    case 181u: goto L_003FA5F4;
    case 182u: goto L_003FA610;
    case 183u: goto L_003FA620;
    case 184u: goto L_003FA634;
    case 185u: goto L_003FA650;
    case 186u: goto L_003FA670;
    case 187u: goto L_003FA6A4;
    case 188u: goto L_003FA6BC;
    case 189u: goto L_003FA6D8;
    case 190u: goto L_003FA6E8;
    case 191u: goto L_003FA6FC;
    case 192u: goto L_003FA714;
    case 193u: goto L_003FA730;
    case 194u: goto L_003FA740;
    case 195u: goto L_003FA754;
    case 196u: goto L_003FA76C;
    case 197u: goto L_003FA788;
    case 198u: goto L_003FA798;
    case 199u: goto L_003FA7AC;
    case 200u: goto L_003FA7C0;
    case 201u: goto L_003FA7D8;
    case 202u: goto L_003FA7E8;
    case 203u: goto L_003FA7F4;
    case 204u: goto L_003FA7FC;
    case 205u: goto L_003FA834;
    case 206u: goto L_003FA85C;
    case 207u: goto L_003FA890;
    case 208u: goto L_003FA8B0;
    case 209u: goto L_003FA8E4;
    case 210u: goto L_003FA8F0;
    case 211u: goto L_003FA900;
    case 212u: goto L_003FA924;
    case 213u: goto L_003FA948;
    case 214u: goto L_003FA950;
    case 215u: goto L_003FA95C;
    case 216u: goto L_003FAA20;
    case 217u: goto L_003FAA30;
    case 218u: goto L_003FAB78;
    case 219u: goto L_003FAB80;
    case 220u: goto L_003FAB88;
    case 221u: goto L_003FAB90;
    case 222u: goto L_003FABA0;
    case 223u: goto L_003FABA8;
    case 224u: goto L_003FAF20;
    case 225u: goto L_003FAF28;
    case 226u: goto L_003FAF30;
    case 227u: goto L_003FAF38;
    case 228u: goto L_003FAF48;
    case 229u: goto L_003FAF50;
    case 230u: goto L_003FAF60;
    case 231u: goto L_003FAF78;
    case 232u: goto L_003FAF88;
    case 233u: goto L_003FAF98;
    case 234u: goto L_003FAFA0;
    case 235u: goto L_003FAFA8;
    case 236u: goto L_003FAFC0;
    case 237u: goto L_003FAFCC;
    case 238u: goto L_003FAFD4;
    case 239u: goto L_003FB010;
    case 240u: goto L_003FB040;
    case 241u: goto L_003FB050;
    case 242u: goto L_003FB060;
    case 243u: goto L_003FB0D0;
    case 244u: goto L_003FB120;
    case 245u: goto L_003FB14C;
    case 246u: goto L_003FB224;
    case 247u: goto L_003FB29C;
    case 248u: goto L_003FB2A4;
    case 249u: goto L_003FB2AC;
    case 250u: goto L_003FB2D0;
    case 251u: goto L_003FB2E4;
    case 252u: goto L_003FB2EC;
    case 253u: goto L_003FB2F4;
    case 254u: goto L_003FB30C;
    case 255u: goto L_003FB32C;
    case 256u: goto L_003FB340;
    case 257u: goto L_003FB34C;
    case 258u: goto L_003FB360;
    case 259u: goto L_003FB370;
    case 260u: goto L_003FB378;
    case 261u: goto L_003FB380;
    case 262u: goto L_003FB388;
    case 263u: goto L_003FB390;
    case 264u: goto L_003FB398;
    case 265u: goto L_003FB3A0;
    case 266u: goto L_003FB3B0;
    case 267u: goto L_003FB3C4;
    case 268u: goto L_003FB3D0;
    case 269u: goto L_003FB3E0;
    case 270u: goto L_003FB3F4;
    case 271u: goto L_003FB3FC;
    case 272u: goto L_003FB424;
    case 273u: goto L_003FB42C;
    case 274u: goto L_003FB434;
    case 275u: goto L_003FB450;
    case 276u: goto L_003FB458;
    case 277u: goto L_003FB460;
    case 278u: goto L_003FB47C;
    case 279u: goto L_003FB484;
    case 280u: goto L_003FB48C;
    case 281u: goto L_003FB494;
    case 282u: goto L_003FB4A8;
    case 283u: goto L_003FB4B0;
    case 284u: goto L_003FB4D0;
    case 285u: goto L_003FB4D8;
    case 286u: goto L_003FB4E0;
    case 287u: goto L_003FB4E8;
    case 288u: goto L_003FB4F8;
    case 289u: goto L_003FB500;
    case 290u: goto L_003FB508;
    case 291u: goto L_003FB510;
    case 292u: goto L_003FB518;
    case 293u: goto L_003FB520;
    case 294u: goto L_003FB538;
    case 295u: goto L_003FB540;
    case 296u: goto L_003FB548;
    case 297u: goto L_003FB550;
    case 298u: goto L_003FB560;
    case 299u: goto L_003FB568;
    case 300u: goto L_003FB574;
    case 301u: goto L_003FB590;
    case 302u: goto L_003FB5A0;
    case 303u: goto L_003FB5AC;
    case 304u: goto L_003FB5B8;
    case 305u: goto L_003FB5D0;
    case 306u: goto L_003FB5E4;
    case 307u: goto L_003FB600;
    case 308u: goto L_003FB614;
    case 309u: goto L_003FB640;
    case 310u: goto L_003FB648;
    case 311u: goto L_003FB660;
    case 312u: goto L_003FB700;
    case 313u: goto L_003FB718;
    case 314u: goto L_003FB7E4;
    case 315u: goto L_003FB7F8;
    case 316u: goto L_003FB900;
    case 317u: goto L_003FB914;
    case 318u: goto L_003FB958;
    case 319u: goto L_003FB9B0;
    case 320u: goto L_003FB9C0;
    case 321u: goto L_003FB9E0;
    case 322u: goto L_003FBA20;
    case 323u: goto L_003FBA90;
    case 324u: goto L_003FBAE8;
    case 325u: goto L_003FBB18;
    case 326u: goto L_003FBB90;
    case 327u: goto L_003FBD50;
    case 328u: goto L_003FBDA8;
    case 329u: goto L_003FBDF0;
    case 330u: goto L_003FBE20;
    case 331u: goto L_003FBE70;
    case 332u: goto L_003FBE90;
    case 333u: goto L_003FBEB0;
    case 334u: goto L_003FBF20;
    case 335u: goto L_003FBF28;
    case 336u: goto L_003FBF58;
    case 337u: goto L_003FBF68;
    case 338u: goto L_003FBF80;
    case 339u: goto L_003FBFE0;
    default: bad_entry(c, 0x003F8000u); return;
    }
L_003F8000:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003F8028; } }
    st32((c.r[17].w[0]), 0u);
    set32(c.r[3], 0u - 513u);
    set32(c.r[4], ld32((c.r[18].w[0] + 1236u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 1236u), c.r[3].w[0]);  if (t) { goto L_003F8038; } }
    c.budget -= 1;
L_003F8028:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003F8038; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8038u);  if (depth < kMaxDepth) unit_00BE(c, 44u, depth + 1u); else { c.pc = 0x003F8CB0u; return; } if (c.pc != 0x003F8038u) [[unlikely]] return; }
L_003F8038:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003F80F0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F8098; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003F8088; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003F8088; } }
    st32((c.r[17].w[0] + 4u), 0u);
    set32(c.r[3], 0u - 3073u);
    set32(c.r[4], ld32((c.r[18].w[0] + 1236u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 1236u), c.r[3].w[0]);  if (t) { goto L_003F8098; } }
    c.budget -= 1;
L_003F8088:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003F8098; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8098u);  if (depth < kMaxDepth) unit_00BE(c, 55u, depth + 1u); else { c.pc = 0x003F8F50u; return; } if (c.pc != 0x003F8098u) [[unlikely]] return; }
L_003F8098:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F8190; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003F80D8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003F80D8; } }
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[3], 0u - 12289u);
    set32(c.r[4], ld32((c.r[18].w[0] + 1236u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 1236u), c.r[3].w[0]);  if (t) { goto L_003F8190; } }
    c.budget -= 1;
L_003F80D8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003F8190; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F80E8u);  if (depth < kMaxDepth) unit_00BE(c, 66u, depth + 1u); else { c.pc = 0x003F91F0u; return; } if (c.pc != 0x003F80E8u) [[unlikely]] return; }
L_003F80E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F8190; } }
L_003F80F0:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F8140; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003F8130; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003F8130; } }
    st32((c.r[17].w[0] + 4u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[4], ld32((c.r[18].w[0] + 1236u)));
    c.r[3].d[0] = c.r[3].d[0] | 16383ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 1236u), c.r[3].w[0]);  if (t) { goto L_003F8140; } }
L_003F8130:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003F8140; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8140u);  if (depth < kMaxDepth) unit_00BE(c, 77u, depth + 1u); else { c.pc = 0x003F9490u; return; } if (c.pc != 0x003F8140u) [[unlikely]] return; }
L_003F8140:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F8190; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003F8180; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003F8180; } }
    st32((c.r[17].w[0] + 8u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFC0000u);
    set32(c.r[4], ld32((c.r[18].w[0] + 1236u)));
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 1236u), c.r[3].w[0]);  if (t) { goto L_003F8190; } }
L_003F8180:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003F8190; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8190u);  if (depth < kMaxDepth) unit_00BE(c, 88u, depth + 1u); else { c.pc = 0x003F9730u; return; } if (c.pc != 0x003F8190u) [[unlikely]] return; }
L_003F8190:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003F81A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F81A0u);  if (depth < kMaxDepth) unit_00BE(c, 99u, depth + 1u); else { c.pc = 0x003F99D0u; return; } if (c.pc != 0x003F81A0u) [[unlikely]] return; }
L_003F81A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F81A8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 106u, depth + 1u); else { c.pc = 0x003F9BC0u; return; } if (c.pc != 0x003F81A8u) [[unlikely]] return; }
L_003F81A8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_003F8518; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[5], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_003F8518; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 513u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003F8518; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 91u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003F8518; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[5].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003F82A8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003F8228; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F8200; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F8518; } }
L_003F8200:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43160000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8210u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 113u, depth + 1u); else { c.pc = 0x003AD5D0u; return; } if (c.pc != 0x003F8210u) [[unlikely]] return; }
L_003F8210:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F8518; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 92u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 92u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003F8518; } }
L_003F8228:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.f[1] = ld32((c.r[18].w[0] + 104u));
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003F8250; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 104u), c.f[0]);  if (t) { goto L_003F8268; } }
L_003F8250:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 104u), c.f[0]);
    c.budget -= 6;
L_003F8268:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43960000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8278u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 117u, depth + 1u); else { c.pc = 0x003AD6C0u; return; } if (c.pc != 0x003F8278u) [[unlikely]] return; }
L_003F8278:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F8518; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 92u)));
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 92u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F829Cu); st8((c.r[18].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0071(c, 43u, depth + 1u); else { c.pc = 0x002C4A90u; return; } if (c.pc != 0x003F829Cu) [[unlikely]] return; }
L_003F829C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F8518; } }
    c.budget -= 1;
L_003F82A8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F8300; } }
    c.f[1] = ld32((c.r[18].w[0] + 104u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003F82E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 104u), c.f[0]);  if (t) { goto L_003F8518; } }
    c.budget -= 1;
L_003F82E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 104u), c.f[0]);  if (t) { goto L_003F8518; } }
    c.budget -= 1;
L_003F8300:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.f[1] = ld32((c.r[18].w[0] + 104u));
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003F8328; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 104u), c.f[0]);  if (t) { goto L_003F8518; } }
L_003F8328:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 104u), c.f[0]);  if (t) { goto L_003F8518; } }
    c.budget -= 1;
L_003F8348:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003F83C0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003F8370; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003F8518; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F8518; } }
L_003F8370:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8378u); set32(c.r[4], ld32((c.r[18].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x003F8378u) [[unlikely]] return; }
L_003F8378:
    c.f[2] = ld32((c.r[18].w[0] + 104u));
    c.f[1] = ld32((c.r[18].w[0] + 32u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 32u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 52u));
    c.f[0] = ld32((c.r[18].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 36u), c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F83A4u); set32(c.r[4], ld32((c.r[18].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x003F83A4u) [[unlikely]] return; }
L_003F83A4:
    c.f[2] = ld32((c.r[18].w[0] + 104u));
    c.f[1] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 40u), c.f[0]);  if (t) { goto L_003F8518; } }
    c.budget -= 1;
L_003F83C0:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 18u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F83F0; } }
    set32(c.r[2], 0u + 90u);
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F83DCu); st8((c.r[17].w[0] + 18u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003F83DCu) [[unlikely]] return; }
L_003F83DC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F83E8u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003F83E8u) [[unlikely]] return; }
L_003F83E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F83F8; } }
L_003F83F0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[17].w[0] + 18u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003F83F8:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 19u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F8430; } }
    set32(c.r[2], 0u + 90u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[17].w[0] + 19u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8418u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003F8418u) [[unlikely]] return; }
L_003F8418:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8424u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003F8424u) [[unlikely]] return; }
L_003F8424:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F8438; } }
    c.budget -= 1;
L_003F8430:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[17].w[0] + 19u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003F8438:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 20u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F8490; } }
    set32(c.r[2], 0u + 120u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[17].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 25u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F845Cu); set32(c.r[5], c.r[2].w[0] + 10u);  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003F845Cu) [[unlikely]] return; }
L_003F845C:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 25u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F846Cu); set32(c.r[5], c.r[2].w[0] + 11u);  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003F846Cu) [[unlikely]] return; }
L_003F846C:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 25u));
    set32(c.r[3], c.r[3].w[0] + 2u);
    st8((c.r[17].w[0] + 25u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 25u));
    c.r[3].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F8498; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 25u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003F8498; } }
L_003F8490:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[17].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003F8498:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 21u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F8510; } }
    set32(c.r[2], 0u + 120u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[17].w[0] + 21u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 26u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F84BCu); set32(c.r[5], c.r[2].w[0] + 22u);  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003F84BCu) [[unlikely]] return; }
L_003F84BC:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 26u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F84CCu); set32(c.r[5], c.r[2].w[0] + 23u);  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003F84CCu) [[unlikely]] return; }
L_003F84CC:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 41u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003F84E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F84E4u); set32(c.r[5], 0u + 39u);  if (depth < kMaxDepth) unit_004E(c, 123u, depth + 1u); else { c.pc = 0x002398E0u; return; } if (c.pc != 0x003F84E4u) [[unlikely]] return; }
L_003F84E4:
    c.budget -= 1;
L_003F84E8:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 26u));
    set32(c.r[3], c.r[3].w[0] + 2u);
    st8((c.r[17].w[0] + 26u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 26u));
    c.r[3].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F8518; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 26u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003F8518; } }
    c.budget -= 1;
L_003F8510:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[17].w[0] + 21u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003F8518:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003F8540:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(12ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x006C0000u);  if (t) { goto L_003F85A8; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 14256u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x003F8000u < 16384u) { entry = entries_00BE[(t - 0x003F8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003F8580:
    set32(c.r[5], 0u + 31u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F858Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 153u, depth + 1u); else { c.pc = 0x0023A1C0u; return; } if (c.pc != 0x003F858Cu) [[unlikely]] return; }
L_003F858C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F85A8; } }
    c.budget -= 1;
L_003F8598:
    set32(c.r[5], 0u + 31u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F85A4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 153u, depth + 1u); else { c.pc = 0x0023A1C0u; return; } if (c.pc != 0x003F85A4u) [[unlikely]] return; }
L_003F85A4:
    c.budget -= 1;
L_003F85A8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F85C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.f[12] = c.r[2].w[0];
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[16], c.r[17].w[0] + 304u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F85ECu); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0025(c, 124u, depth + 1u); else { c.pc = 0x00196720u; return; } if (c.pc != 0x003F85ECu) [[unlikely]] return; }
L_003F85EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F8668; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F85FCu);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x003F85FCu) [[unlikely]] return; }
L_003F85FC:
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 93u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    st8((c.r[16].w[0] + 93u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 93u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[17].w[0] + 1856u), c.f[3]);
    st32((c.r[17].w[0] + 1860u), c.f[2]);
    st32((c.r[17].w[0] + 1864u), c.f[1]);
    st32((c.r[17].w[0] + 1868u), c.f[0]);
    st8((c.r[16].w[0] + 94u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 52u), 0u);
    c.budget -= 27;
L_003F8668:
    c.f[3] = ld32((c.r[17].w[0] + 1856u));
    c.f[2] = ld32((c.r[17].w[0] + 32u));
    c.f[1] = ld32((c.r[17].w[0] + 1864u));
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[21] = fp::sub(c.f[3], c.f[2]);
    c.f[20] = fp::sub(c.f[1], c.f[0]);
    c.f[12] = c.f[21];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F868Cu); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003F868Cu) [[unlikely]] return; }
L_003F868C:
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].d[0] = 0ull | 63488ull;
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    c.r[5].d[0] = c.r[4].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[5].sd[0] < 2049ll ? 1ull : 0ull;  if (t) { goto L_003F86B8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F8720; } }
    c.budget -= 1;
L_003F86B8:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003F86D0; } }
    set32(c.r[3], c.r[3].w[0] - 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_003F86E0; } }
L_003F86D0:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_003F86E0; } }
    set32(c.r[3], c.r[3].w[0] + 2u);
    st32((c.r[17].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 2;
L_003F86E0:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003F86F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), 0u);  if (t) { goto L_003F8800; } }
    c.budget -= 1;
L_003F86F8:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 8u);  if (t) { goto L_003F8710; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_003F8800; } }
L_003F8710:
    set32(c.r[3], 0u - 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_003F8800; } }
    c.budget -= 1;
L_003F8720:
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[5].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F8798; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.r[3].d[0] = c.r[4].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 64u);  if (t) { goto L_003F8748; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_003F8750; } }
L_003F8748:
    set32(c.r[3], c.r[4].w[0] + 2u);
    st32((c.r[17].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 2;
L_003F8750:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    c.r[1].d[0] = 0ull | 63489ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 32768ull;  if (t) { goto L_003F8780; } }
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F8780; } }
    c.r[3].d[0] = 0ull | 63488ull;
    st32((c.r[17].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), 0u);  if (t) { goto L_003F8800; } }
L_003F8780:
    c.r[3].d[0] = c.r[5].sd[0] < 2048ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 8u);  if (t) { goto L_003F8800; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_003F8800; } }
    c.budget -= 1;
L_003F8798:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.r[1].d[0] = c.r[3].sd[0] < -63ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F87B8; } }
    set32(c.r[3], 0u - 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_003F87C0; } }
    c.budget -= 1;
L_003F87B8:
    set32(c.r[3], c.r[3].w[0] - 2u);
    st32((c.r[17].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 2;
L_003F87C0:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    c.r[3].d[0] = c.r[4].sd[0] < 2048ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 32769ull;  if (t) { goto L_003F87E8; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 2048u);  if (t) { goto L_003F87E8; } }
    st32((c.r[17].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), 0u);  if (t) { goto L_003F8800; } }
L_003F87E8:
    c.r[1].d[0] = 0ull | 63489ull;
    c.r[1].d[0] = c.r[5].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 8u);  if (t) { goto L_003F8800; } }
    st32((c.r[17].w[0] + 100u), c.r[3].w[0]);
    c.budget -= 2;
L_003F8800:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 2ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003F8820; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 91u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_003F8820:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F8A60; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 94u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_003F8A18; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_003F89C8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003F8850; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F8C90; } }
L_003F8850:
    c.f[1] = ld32((c.r[17].w[0] + 1860u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003F88F0; } }
    st8((c.r[16].w[0] + 94u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.facc = fp::mul(c.f[21], c.f[21]);
    c.f[1] = ld32((c.r[17].w[0] + 1860u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8880u); c.f[20] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003F8880u) [[unlikely]] return; }
L_003F8880:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F888Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003F888Cu) [[unlikely]] return; }
L_003F888C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[2] = c.r[3].w[0];
    c.f[1] = 0u;
    fpu_div(c, 0u, c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003F88C8; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003F88D8; } }
    c.budget -= 1;
L_003F88C8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.r[3].d[0] = c.r[3].d[0] | 46871ull;
    c.f[0] = c.r[3].w[0];
    c.budget -= 4;
L_003F88D8:
    set32(c.r[3], 0u - 1u);
    fpu_div(c, 20u, c.f[20], c.f[0]);
    st32((c.r[17].w[0] + 52u), c.f[20]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_003F8C90; } }
L_003F88F0:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003F8988; } }
    st8((c.r[16].w[0] + 94u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.facc = fp::mul(c.f[21], c.f[21]);
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 1860u));
    c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8918u); c.f[20] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003F8918u) [[unlikely]] return; }
L_003F8918:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8924u); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003F8924u) [[unlikely]] return; }
L_003F8924:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[2] = c.r[3].w[0];
    c.f[1] = 0u;
    fpu_div(c, 0u, c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003F8960; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003F8970; } }
    c.budget -= 1;
L_003F8960:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.r[3].d[0] = c.r[3].d[0] | 46871ull;
    c.f[0] = c.r[3].w[0];
    c.budget -= 4;
L_003F8970:
    set32(c.r[3], 0u + 1u);
    fpu_div(c, 20u, c.f[20], c.f[0]);
    c.f[0] = c.f[20] ^ fp::kSign;
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_003F8C90; } }
L_003F8988:
    set32(c.r[5], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_003F89A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), 0u);  if (t) { goto L_003F8C90; } }
    c.budget -= 1;
L_003F89A0:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F89B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[4].w[0]);  if (t) { goto L_003F8C90; } }
L_003F89B8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_003F8C90; } }
    c.budget -= 1;
L_003F89C8:
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 1860u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003F89E8; } }
    st8((c.r[16].w[0] + 94u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), 0u);  if (t) { goto L_003F8C90; } }
L_003F89E8:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.r[1].d[0] = 0ull | 64513ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 32768ull;  if (t) { goto L_003F8C90; } }
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F8C90; } }
    c.r[3].d[0] = 0ull | 64512ull;
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), 0u);  if (t) { goto L_003F8C90; } }
L_003F8A18:
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 1860u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003F8A38; } }
    st8((c.r[16].w[0] + 94u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), 0u);  if (t) { goto L_003F8C90; } }
L_003F8A38:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.r[3].d[0] = c.r[4].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 32769ull;  if (t) { goto L_003F8C90; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 1024u);  if (t) { goto L_003F8C90; } }
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), 0u);  if (t) { goto L_003F8C90; } }
L_003F8A60:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 94u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_003F8BD0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_003F8B08; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003F8A88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F8C90; } }
L_003F8A88:
    c.f[1] = ld32((c.r[17].w[0] + 1860u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003F8AB0; } }
    st8((c.r[16].w[0] + 94u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_003F8C90; } }
    c.budget -= 1;
L_003F8AB0:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003F8AC8; } }
    st8((c.r[16].w[0] + 94u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[4].w[0]);  if (t) { goto L_003F8C90; } }
L_003F8AC8:
    set32(c.r[5], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_003F8AE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), 0u);  if (t) { goto L_003F8C90; } }
    c.budget -= 1;
L_003F8AE0:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F8AF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[4].w[0]);  if (t) { goto L_003F8C90; } }
L_003F8AF8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_003F8C90; } }
    c.budget -= 1;
L_003F8B08:
    c.f[1] = ld32((c.r[17].w[0] + 1860u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.facc = fp::mul(c.f[21], c.f[21]);
    c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8B20u); c.f[20] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003F8B20u) [[unlikely]] return; }
L_003F8B20:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8B2Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003F8B2Cu) [[unlikely]] return; }
L_003F8B2C:
    c.f[2] = ld32((c.r[17].w[0] + 104u));
    c.f[1] = 0u;
    fpu_div(c, 0u, c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003F8B60; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003F8B70; } }
    c.budget -= 1;
L_003F8B60:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.r[3].d[0] = c.r[3].d[0] | 46871ull;
    c.f[0] = c.r[3].w[0];
    c.budget -= 4;
L_003F8B70:
    fpu_div(c, 20u, c.f[20], c.f[0]);
    st32((c.r[17].w[0] + 52u), c.f[20]);
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 1860u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003F8BA0; } }
    st8((c.r[16].w[0] + 94u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), 0u);  if (t) { goto L_003F8C90; } }
    c.budget -= 1;
L_003F8BA0:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.r[1].d[0] = 0ull | 64513ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 32768ull;  if (t) { goto L_003F8C90; } }
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F8C90; } }
    c.r[3].d[0] = 0ull | 64512ull;
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), 0u);  if (t) { goto L_003F8C90; } }
L_003F8BD0:
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 1860u));
    c.facc = fp::mul(c.f[21], c.f[21]);
    c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8BE8u); c.f[20] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003F8BE8u) [[unlikely]] return; }
L_003F8BE8:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8BF4u); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003F8BF4u) [[unlikely]] return; }
L_003F8BF4:
    c.f[2] = ld32((c.r[17].w[0] + 104u));
    c.f[1] = 0u;
    fpu_div(c, 0u, c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003F8C28; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003F8C38; } }
    c.budget -= 1;
L_003F8C28:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.r[3].d[0] = c.r[3].d[0] | 46871ull;
    c.f[0] = c.r[3].w[0];
    c.budget -= 4;
L_003F8C38:
    fpu_div(c, 20u, c.f[20], c.f[0]);
    c.f[0] = c.f[20] ^ fp::kSign;
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 1860u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003F8C68; } }
    st8((c.r[16].w[0] + 94u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), 0u);  if (t) { goto L_003F8C90; } }
L_003F8C68:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.r[3].d[0] = c.r[4].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 32769ull;  if (t) { goto L_003F8C90; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 1024u);  if (t) { goto L_003F8C90; } }
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 92u), 0u);
    c.budget -= 3;
L_003F8C90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003F8CB0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 316u)));
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_003F8F18; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_003F8EC0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003F8E68; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003F8D00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F8F38; } }
    c.budget -= 1;
L_003F8D00:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F8E58; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[2], 0u + 300u);  if (t) { goto L_003F8D28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 80u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003F8D30; } }
    c.budget -= 1;
L_003F8D28:
    set32(c.r[2], 0u + 1800u);
    st16((c.r[16].w[0] + 80u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003F8D30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44160000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 10922u);
    c.r[7].d[0] = 0ull | 54613ull;
    c.r[8].d[0] = 0ull | 65535ull;
    set32(c.r[9], 0u + 16384u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8D58u); set32(c.r[10], 0u + 9u);  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003F8D58u) [[unlikely]] return; }
L_003F8D58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F8F38; } }
    st32((c.r[16].w[0] + 120u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[17].w[0] + 2560u);
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8D8Cu); st32((c.r[29].w[0] + 72u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003F8D8Cu) [[unlikely]] return; }
L_003F8D8C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8D9Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003F8D9Cu) [[unlikely]] return; }
L_003F8D9C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8DA8u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003F8DA8u) [[unlikely]] return; }
L_003F8DA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8DB0u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003F8DB0u) [[unlikely]] return; }
L_003F8DB0:
    c.f[13] = ld32((c.r[29].w[0] + 56u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8DBCu); c.f[12] = ld32((c.r[29].w[0] + 48u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003F8DBCu) [[unlikely]] return; }
L_003F8DBC:
    set32(c.r[3], ld32((c.r[17].w[0] + 5168u)));
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[1].d[0] = 0ull | 32769ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[16].w[0] + 44u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    st32((c.r[16].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = c.r[4].sd[0] < 9102ll ? 1ull : 0ull;  if (t) { goto L_003F8E00; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F8E00; } }
    set32(c.r[3], 0u + 9102u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 44u), c.r[3].w[0]);  if (t) { goto L_003F8E20; } }
L_003F8E00:
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = 0ull | 56435ull;  if (t) { goto L_003F8E20; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 56434ull;  if (t) { goto L_003F8E20; } }
    st32((c.r[16].w[0] + 44u), c.r[3].w[0]);
    c.budget -= 1;
L_003F8E20:
    set32(c.r[4], ld32((c.r[17].w[0] + 5168u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 44u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 128u);  if (t) { goto L_003F8E48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 68u), c.r[3].w[0]);  if (t) { goto L_003F8F38; } }
L_003F8E48:
    set32(c.r[3], 0u + 128u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 68u), c.r[3].w[0]);  if (t) { goto L_003F8F38; } }
    c.budget -= 1;
L_003F8E58:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 80u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003F8F38; } }
    c.budget -= 1;
L_003F8E68:
    set32(c.r[6], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 5168u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull | 65472ull;  if (t) { goto L_003F8E90; } }
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F8EA8; } }
L_003F8E90:
    st32((c.r[17].w[0] + 5168u), c.r[6].w[0]);
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 68u), 0u);  if (t) { goto L_003F8F38; } }
    c.budget -= 1;
L_003F8EA8:
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 5168u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 5168u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 5168u), c.r[3].w[0]);  if (t) { goto L_003F8F38; } }
L_003F8EC0:
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 30u);
    st8((c.r[16].w[0] + 17u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_003F8EE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8EE4u); set32(c.r[5], ld32((c.r[16].w[0] + 120u)));  if (depth < kMaxDepth) unit_003B(c, 332u, depth + 1u); else { c.pc = 0x001EF900u; return; } if (c.pc != 0x003F8EE4u) [[unlikely]] return; }
L_003F8EE4:
    c.budget -= 1;
L_003F8EE8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8EF4u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003F8EF4u) [[unlikely]] return; }
L_003F8EF4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8F00u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003F8F00u) [[unlikely]] return; }
L_003F8F00:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8F0Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_004E(c, 158u, depth + 1u); else { c.pc = 0x0023A2A0u; return; } if (c.pc != 0x003F8F0Cu) [[unlikely]] return; }
L_003F8F0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F8F38; } }
    c.budget -= 1;
L_003F8F18:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 17u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F8F30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003F8F38; } }
    c.budget -= 1;
L_003F8F30:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 17u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003F8F38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003F8F50:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 317u)));
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_003F91B0; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_003F9158; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003F9100; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003F8FA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F91D0; } }
    c.budget -= 1;
L_003F8FA0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 82u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F90F0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[2], 0u + 300u);  if (t) { goto L_003F8FC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 82u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003F8FD0; } }
    c.budget -= 1;
L_003F8FC8:
    set32(c.r[2], 0u + 1800u);
    st16((c.r[16].w[0] + 82u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003F8FD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44160000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 21845u);
    c.r[7].d[0] = 0ull | 63488ull;
    c.r[8].d[0] = 0ull | 65535ull;
    set32(c.r[9], 0u + 8192u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8FF8u); set32(c.r[10], 0u + 11u);  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003F8FF8u) [[unlikely]] return; }
L_003F8FF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F91D0; } }
    st32((c.r[16].w[0] + 124u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[17].w[0] + 2688u);
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F902Cu); st32((c.r[29].w[0] + 72u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003F902Cu) [[unlikely]] return; }
L_003F902C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F903Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003F903Cu) [[unlikely]] return; }
L_003F903C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9048u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003F9048u) [[unlikely]] return; }
L_003F9048:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9050u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003F9050u) [[unlikely]] return; }
L_003F9050:
    c.f[13] = ld32((c.r[29].w[0] + 56u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F905Cu); c.f[12] = ld32((c.r[29].w[0] + 48u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003F905Cu) [[unlikely]] return; }
L_003F905C:
    set32(c.r[3], ld32((c.r[17].w[0] + 5192u)));
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[1].d[0] = 0ull | 32769ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 48u));
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = c.r[4].sd[0] < 21845ll ? 1ull : 0ull;  if (t) { goto L_003F90A0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F90A0; } }
    set32(c.r[3], 0u + 21845u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 48u), c.r[3].w[0]);  if (t) { goto L_003F90B8; } }
L_003F90A0:
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003F90B8; } }
    st32((c.r[16].w[0] + 48u), 0u);
    c.budget -= 2;
L_003F90B8:
    set32(c.r[4], ld32((c.r[17].w[0] + 5192u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 48u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 128u);  if (t) { goto L_003F90E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 72u), c.r[3].w[0]);  if (t) { goto L_003F91D0; } }
L_003F90E0:
    set32(c.r[3], 0u + 128u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 72u), c.r[3].w[0]);  if (t) { goto L_003F91D0; } }
    c.budget -= 1;
L_003F90F0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 82u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003F91D0; } }
    c.budget -= 1;
L_003F9100:
    set32(c.r[6], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 5192u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull | 65472ull;  if (t) { goto L_003F9128; } }
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F9140; } }
L_003F9128:
    st32((c.r[17].w[0] + 5192u), c.r[6].w[0]);
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 72u), 0u);  if (t) { goto L_003F91D0; } }
    c.budget -= 1;
L_003F9140:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 5192u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 5192u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 5192u), c.r[3].w[0]);  if (t) { goto L_003F91D0; } }
L_003F9158:
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 30u);
    st8((c.r[16].w[0] + 18u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_003F9180; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F917Cu); set32(c.r[5], ld32((c.r[16].w[0] + 124u)));  if (depth < kMaxDepth) unit_003B(c, 332u, depth + 1u); else { c.pc = 0x001EF900u; return; } if (c.pc != 0x003F917Cu) [[unlikely]] return; }
L_003F917C:
    c.budget -= 1;
L_003F9180:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F918Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003F918Cu) [[unlikely]] return; }
L_003F918C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9198u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003F9198u) [[unlikely]] return; }
L_003F9198:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F91A4u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_004E(c, 158u, depth + 1u); else { c.pc = 0x0023A2A0u; return; } if (c.pc != 0x003F91A4u) [[unlikely]] return; }
L_003F91A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F91D0; } }
    c.budget -= 1;
L_003F91B0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 18u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F91C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003F91D0; } }
    c.budget -= 1;
L_003F91C8:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 18u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003F91D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003F91F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 318u)));
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_003F9450; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_003F93F8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003F93A0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003F9240; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F9470; } }
    c.budget -= 1;
L_003F9240:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F9390; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[2], 0u + 300u);  if (t) { goto L_003F9268; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 84u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003F9270; } }
    c.budget -= 1;
L_003F9268:
    set32(c.r[2], 0u + 1800u);
    st16((c.r[16].w[0] + 84u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003F9270:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44160000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 2048u);
    c.r[7].d[0] = 0ull | 43690ull;
    c.r[8].d[0] = 0ull | 65535ull;
    set32(c.r[9], 0u + 8192u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9298u); set32(c.r[10], 0u + 13u);  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003F9298u) [[unlikely]] return; }
L_003F9298:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F9470; } }
    st32((c.r[16].w[0] + 128u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 14u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[17].w[0] + 2816u);
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F92CCu); st32((c.r[29].w[0] + 72u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003F92CCu) [[unlikely]] return; }
L_003F92CC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F92DCu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003F92DCu) [[unlikely]] return; }
L_003F92DC:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F92E8u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003F92E8u) [[unlikely]] return; }
L_003F92E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F92F0u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003F92F0u) [[unlikely]] return; }
L_003F92F0:
    c.f[13] = ld32((c.r[29].w[0] + 56u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F92FCu); c.f[12] = ld32((c.r[29].w[0] + 48u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003F92FCu) [[unlikely]] return; }
L_003F92FC:
    set32(c.r[3], ld32((c.r[17].w[0] + 5216u)));
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[1].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 52u));
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F9338; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), 0u);  if (t) { goto L_003F9358; } }
    c.budget -= 1;
L_003F9338:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 43691ull;  if (t) { goto L_003F9358; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 43690ull;  if (t) { goto L_003F9358; } }
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 1;
L_003F9358:
    set32(c.r[4], ld32((c.r[17].w[0] + 5216u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 52u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 128u);  if (t) { goto L_003F9380; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_003F9470; } }
L_003F9380:
    set32(c.r[3], 0u + 128u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_003F9470; } }
    c.budget -= 1;
L_003F9390:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 84u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003F9470; } }
    c.budget -= 1;
L_003F93A0:
    set32(c.r[6], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 5216u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull | 65472ull;  if (t) { goto L_003F93C8; } }
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F93E0; } }
L_003F93C8:
    st32((c.r[17].w[0] + 5216u), c.r[6].w[0]);
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 14u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), 0u);  if (t) { goto L_003F9470; } }
    c.budget -= 1;
L_003F93E0:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 5216u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 5216u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 5216u), c.r[3].w[0]);  if (t) { goto L_003F9470; } }
L_003F93F8:
    st8((c.r[16].w[0] + 14u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 30u);
    st8((c.r[16].w[0] + 19u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_003F9420; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F941Cu); set32(c.r[5], ld32((c.r[16].w[0] + 128u)));  if (depth < kMaxDepth) unit_003B(c, 332u, depth + 1u); else { c.pc = 0x001EF900u; return; } if (c.pc != 0x003F941Cu) [[unlikely]] return; }
L_003F941C:
    c.budget -= 1;
L_003F9420:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F942Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003F942Cu) [[unlikely]] return; }
L_003F942C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9438u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003F9438u) [[unlikely]] return; }
L_003F9438:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9444u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_004E(c, 158u, depth + 1u); else { c.pc = 0x0023A2A0u; return; } if (c.pc != 0x003F9444u) [[unlikely]] return; }
L_003F9444:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F9470; } }
    c.budget -= 1;
L_003F9450:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 19u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F9468; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 14u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003F9470; } }
    c.budget -= 1;
L_003F9468:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 19u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003F9470:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003F9490:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 317u)));
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_003F96F0; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_003F9698; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003F9640; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003F94E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F9710; } }
    c.budget -= 1;
L_003F94E0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 82u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F9630; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[2], 0u + 300u);  if (t) { goto L_003F9508; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 82u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003F9510; } }
    c.budget -= 1;
L_003F9508:
    set32(c.r[2], 0u + 1800u);
    st16((c.r[16].w[0] + 82u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003F9510:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44160000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 21845u);
    c.r[7].d[0] = 0ull | 63488ull;
    c.r[8].d[0] = 0ull | 65535ull;
    set32(c.r[9], 0u + 8192u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9538u); set32(c.r[10], 0u + 15u);  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003F9538u) [[unlikely]] return; }
L_003F9538:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F9710; } }
    st32((c.r[16].w[0] + 124u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[17].w[0] + 2944u);
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F956Cu); st32((c.r[29].w[0] + 72u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003F956Cu) [[unlikely]] return; }
L_003F956C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F957Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003F957Cu) [[unlikely]] return; }
L_003F957C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9588u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003F9588u) [[unlikely]] return; }
L_003F9588:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9590u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003F9590u) [[unlikely]] return; }
L_003F9590:
    c.f[13] = ld32((c.r[29].w[0] + 56u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F959Cu); c.f[12] = ld32((c.r[29].w[0] + 48u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003F959Cu) [[unlikely]] return; }
L_003F959C:
    set32(c.r[3], ld32((c.r[17].w[0] + 5240u)));
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[1].d[0] = 0ull | 32769ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 48u));
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = c.r[4].sd[0] < 21845ll ? 1ull : 0ull;  if (t) { goto L_003F95E0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F95E0; } }
    set32(c.r[3], 0u + 21845u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 48u), c.r[3].w[0]);  if (t) { goto L_003F95F8; } }
L_003F95E0:
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003F95F8; } }
    st32((c.r[16].w[0] + 48u), 0u);
    c.budget -= 2;
L_003F95F8:
    set32(c.r[4], ld32((c.r[17].w[0] + 5240u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 48u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 128u);  if (t) { goto L_003F9620; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 72u), c.r[3].w[0]);  if (t) { goto L_003F9710; } }
L_003F9620:
    set32(c.r[3], 0u + 128u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 72u), c.r[3].w[0]);  if (t) { goto L_003F9710; } }
    c.budget -= 1;
L_003F9630:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 82u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003F9710; } }
    c.budget -= 1;
L_003F9640:
    set32(c.r[6], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 5240u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull | 65472ull;  if (t) { goto L_003F9668; } }
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F9680; } }
L_003F9668:
    st32((c.r[17].w[0] + 5240u), c.r[6].w[0]);
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 72u), 0u);  if (t) { goto L_003F9710; } }
    c.budget -= 1;
L_003F9680:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 5240u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 5240u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 5240u), c.r[3].w[0]);  if (t) { goto L_003F9710; } }
L_003F9698:
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 30u);
    st8((c.r[16].w[0] + 18u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_003F96C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F96BCu); set32(c.r[5], ld32((c.r[16].w[0] + 124u)));  if (depth < kMaxDepth) unit_003B(c, 332u, depth + 1u); else { c.pc = 0x001EF900u; return; } if (c.pc != 0x003F96BCu) [[unlikely]] return; }
L_003F96BC:
    c.budget -= 1;
L_003F96C0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F96CCu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003F96CCu) [[unlikely]] return; }
L_003F96CC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F96D8u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003F96D8u) [[unlikely]] return; }
L_003F96D8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F96E4u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_004E(c, 158u, depth + 1u); else { c.pc = 0x0023A2A0u; return; } if (c.pc != 0x003F96E4u) [[unlikely]] return; }
L_003F96E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F9710; } }
    c.budget -= 1;
L_003F96F0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 18u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F9708; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003F9710; } }
    c.budget -= 1;
L_003F9708:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 18u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003F9710:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003F9730:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 318u)));
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_003F9990; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_003F9938; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003F98E0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003F9780; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F99B0; } }
    c.budget -= 1;
L_003F9780:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F98D0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[2], 0u + 300u);  if (t) { goto L_003F97A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 84u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003F97B0; } }
    c.budget -= 1;
L_003F97A8:
    set32(c.r[2], 0u + 1800u);
    st16((c.r[16].w[0] + 84u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003F97B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44160000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 2048u);
    c.r[7].d[0] = 0ull | 43690ull;
    c.r[8].d[0] = 0ull | 65535ull;
    set32(c.r[9], 0u + 8192u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F97D8u); set32(c.r[10], 0u + 17u);  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003F97D8u) [[unlikely]] return; }
L_003F97D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F99B0; } }
    st32((c.r[16].w[0] + 128u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 14u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[17].w[0] + 3072u);
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F980Cu); st32((c.r[29].w[0] + 72u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003F980Cu) [[unlikely]] return; }
L_003F980C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F981Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003F981Cu) [[unlikely]] return; }
L_003F981C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9828u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003F9828u) [[unlikely]] return; }
L_003F9828:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9830u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003F9830u) [[unlikely]] return; }
L_003F9830:
    c.f[13] = ld32((c.r[29].w[0] + 56u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F983Cu); c.f[12] = ld32((c.r[29].w[0] + 48u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003F983Cu) [[unlikely]] return; }
L_003F983C:
    set32(c.r[3], ld32((c.r[17].w[0] + 5264u)));
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[1].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 52u));
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F9878; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), 0u);  if (t) { goto L_003F9898; } }
    c.budget -= 1;
L_003F9878:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 43691ull;  if (t) { goto L_003F9898; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 43690ull;  if (t) { goto L_003F9898; } }
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 1;
L_003F9898:
    set32(c.r[4], ld32((c.r[17].w[0] + 5264u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 52u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 128u);  if (t) { goto L_003F98C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_003F99B0; } }
L_003F98C0:
    set32(c.r[3], 0u + 128u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_003F99B0; } }
    c.budget -= 1;
L_003F98D0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 84u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003F99B0; } }
    c.budget -= 1;
L_003F98E0:
    set32(c.r[6], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 5264u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull | 65472ull;  if (t) { goto L_003F9908; } }
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F9920; } }
L_003F9908:
    st32((c.r[17].w[0] + 5264u), c.r[6].w[0]);
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 14u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), 0u);  if (t) { goto L_003F99B0; } }
    c.budget -= 1;
L_003F9920:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 5264u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 5264u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 5264u), c.r[3].w[0]);  if (t) { goto L_003F99B0; } }
L_003F9938:
    st8((c.r[16].w[0] + 14u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 30u);
    st8((c.r[16].w[0] + 19u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_003F9960; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F995Cu); set32(c.r[5], ld32((c.r[16].w[0] + 128u)));  if (depth < kMaxDepth) unit_003B(c, 332u, depth + 1u); else { c.pc = 0x001EF900u; return; } if (c.pc != 0x003F995Cu) [[unlikely]] return; }
L_003F995C:
    c.budget -= 1;
L_003F9960:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F996Cu); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003F996Cu) [[unlikely]] return; }
L_003F996C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9978u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003F9978u) [[unlikely]] return; }
L_003F9978:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9984u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_004E(c, 158u, depth + 1u); else { c.pc = 0x0023A2A0u; return; } if (c.pc != 0x003F9984u) [[unlikely]] return; }
L_003F9984:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F99B0; } }
    c.budget -= 1;
L_003F9990:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 19u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F99A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 14u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003F99B0; } }
    c.budget -= 1;
L_003F99A8:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 19u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003F99B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003F99D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 319u)));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[18], c.r[19].w[0] + 304u);  if (t) { goto L_003F9AB0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F9A10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F9BA0; } }
    c.budget -= 1;
L_003F9A10:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 86u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F9AA0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1200u);  if (t) { goto L_003F9A38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 86u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003F9A40; } }
L_003F9A38:
    set32(c.r[2], 0u + 1800u);
    st16((c.r[18].w[0] + 86u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003F9A40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    set32(c.r[5], 0u + 512u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[6], 0u + 4096u);
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[9], 0u + 8192u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9A68u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003F9A68u) [[unlikely]] return; }
L_003F9A68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F9BA0; } }
    st32((c.r[18].w[0] + 132u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9A80u); st8((c.r[18].w[0] + 15u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x003F9A80u) [[unlikely]] return; }
L_003F9A80:
    c.r[3].d[0] = c.r[2].d[0] & 7ull;
    st8((c.r[18].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[18].w[0] + 20u));
    set32(c.r[3], c.r[3].w[0] << 2);
    st8((c.r[18].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[18].w[0] + 25u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 30u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003F9BA0; } }
L_003F9AA0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 86u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003F9BA0; } }
    c.budget -= 1;
L_003F9AB0:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 25u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F9B98; } }
    set32(c.r[2], 0u + 4u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st8((c.r[18].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] + 12160u);
    c.r[4].d[0] = ld8((c.r[18].w[0] + 20u));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 30u));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9AE4u); c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x003F9AE4u) [[unlikely]] return; }
L_003F9AE4:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[1].d[0] = c.r[2].sd[0] < 86ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003F9B00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F9B20; } }
    c.budget -= 1;
L_003F9B00:
    c.r[1].d[0] = c.r[2].sd[0] < 171ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_003F9B18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F9B20; } }
    c.budget -= 1;
L_003F9B18:
    set32(c.r[16], 0u + 2u);
    c.budget -= 2;
L_003F9B20:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003F9B40; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 132u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9B40u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 332u, depth + 1u); else { c.pc = 0x001EF900u; return; } if (c.pc != 0x003F9B40u) [[unlikely]] return; }
L_003F9B40:
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[17].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[2], c.r[2].w[0] + 12192u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9B68u); set32(c.r[5], c.r[2].w[0] + 10u);  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003F9B68u) [[unlikely]] return; }
L_003F9B68:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9B74u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_004E(c, 158u, depth + 1u); else { c.pc = 0x0023A2A0u; return; } if (c.pc != 0x003F9B74u) [[unlikely]] return; }
L_003F9B74:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 30u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[18].w[0] + 30u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[18].w[0] + 30u));
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F9BA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 15u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003F9BA0; } }
L_003F9B98:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[18].w[0] + 25u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003F9BA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003F9BC0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 320u)));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[18], c.r[19].w[0] + 304u);  if (t) { goto L_003F9CA0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F9C00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F9D90; } }
    c.budget -= 1;
L_003F9C00:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F9C90; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1200u);  if (t) { goto L_003F9C28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 88u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003F9C30; } }
L_003F9C28:
    set32(c.r[2], 0u + 1800u);
    st16((c.r[18].w[0] + 88u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003F9C30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.r[6].d[0] = 0ull | 65024ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.r[5].d[0] = 0ull | 61440ull;
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[9], 0u + 8192u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9C58u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003F9C58u) [[unlikely]] return; }
L_003F9C58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F9D90; } }
    st32((c.r[18].w[0] + 136u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9C70u); st8((c.r[18].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x003F9C70u) [[unlikely]] return; }
L_003F9C70:
    c.r[3].d[0] = c.r[2].d[0] & 7ull;
    st8((c.r[18].w[0] + 21u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[18].w[0] + 21u));
    set32(c.r[3], c.r[3].w[0] << 2);
    st8((c.r[18].w[0] + 21u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[18].w[0] + 26u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 31u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003F9D90; } }
L_003F9C90:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 88u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003F9D90; } }
    c.budget -= 1;
L_003F9CA0:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 26u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F9D88; } }
    set32(c.r[2], 0u + 4u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st8((c.r[18].w[0] + 26u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] + 12208u);
    c.r[4].d[0] = ld8((c.r[18].w[0] + 21u));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 31u));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9CD4u); c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x003F9CD4u) [[unlikely]] return; }
L_003F9CD4:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[1].d[0] = c.r[2].sd[0] < 86ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003F9CF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F9D10; } }
    c.budget -= 1;
L_003F9CF0:
    c.r[1].d[0] = c.r[2].sd[0] < 171ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_003F9D08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F9D10; } }
    c.budget -= 1;
L_003F9D08:
    set32(c.r[16], 0u + 2u);
    c.budget -= 2;
L_003F9D10:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003F9D30; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 136u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9D30u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 332u, depth + 1u); else { c.pc = 0x001EF900u; return; } if (c.pc != 0x003F9D30u) [[unlikely]] return; }
L_003F9D30:
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[17].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[2], c.r[2].w[0] + 12240u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9D58u); set32(c.r[5], c.r[2].w[0] + 10u);  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003F9D58u) [[unlikely]] return; }
L_003F9D58:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9D64u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_004E(c, 158u, depth + 1u); else { c.pc = 0x0023A2A0u; return; } if (c.pc != 0x003F9D64u) [[unlikely]] return; }
L_003F9D64:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 31u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[18].w[0] + 31u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[18].w[0] + 31u));
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F9D90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 16u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003F9D90; } }
L_003F9D88:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[18].w[0] + 26u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003F9D90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003F9DB0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[5].d[0] = c.r[4].d[0] << 56;
    set32(c.r[3], ld32((c.r[1].w[0] + 10016u)));
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[4], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] << (c.r[5].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] + 10016u), c.r[3].w[0]);  c.pc = t; return; }
L_003F9DE0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[4].d[0] = c.r[4].d[0] << 56;
    set32(c.r[2], ld32((c.r[1].w[0] + 10016u)));
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[3], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_003F9E10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01170000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[5].d[0] = c.r[2].d[0] | 61440ull;
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[17].w[0] + 8836u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x01FE0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9E44u); st32((c.r[1].w[0] + 10016u), 0u);  if (depth < kMaxDepth) unit_0079(c, 141u, depth + 1u); else { c.pc = 0x002E6F00u; return; } if (c.pc != 0x003F9E44u) [[unlikely]] return; }
L_003F9E44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9E4Cu);  if (depth < kMaxDepth) unit_0048(c, 275u, depth + 1u); else { c.pc = 0x00223E50u; return; } if (c.pc != 0x003F9E4Cu) [[unlikely]] return; }
L_003F9E4C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00210000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9E5Cu); set32(c.r[4], c.r[4].w[0] + 9776u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x003F9E5Cu) [[unlikely]] return; }
L_003F9E5C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00210000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 9984u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9E70u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x003F9E70u) [[unlikely]] return; }
L_003F9E70:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00210000u);
    set32(c.r[6], 0u + 20u);
    set32(c.r[4], c.r[4].w[0] + 12432u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9E88u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x003F9E88u) [[unlikely]] return; }
L_003F9E88:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[5], 0u + 3017u);
    set32(c.r[16], c.r[16].w[0] + 8848u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9EA0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0079(c, 151u, depth + 1u); else { c.pc = 0x002E7010u; return; } if (c.pc != 0x003F9EA0u) [[unlikely]] return; }
L_003F9EA0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    set32(c.r[7], 0u + 1u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 28816u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9EBCu); c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x003F9EBCu) [[unlikely]] return; }
L_003F9EBC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00130000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9ECCu); set32(c.r[4], c.r[4].w[0] - 13504u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x003F9ECCu) [[unlikely]] return; }
L_003F9ECC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 25168u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9EE0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x003F9EE0u) [[unlikely]] return; }
L_003F9EE0:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[5], 0u + 3018u);
    set32(c.r[16], c.r[16].w[0] + 8932u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9EF8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0079(c, 151u, depth + 1u); else { c.pc = 0x002E7010u; return; } if (c.pc != 0x003F9EF8u) [[unlikely]] return; }
L_003F9EF8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    set32(c.r[7], 0u + 1u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 28816u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9F14u); c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x003F9F14u) [[unlikely]] return; }
L_003F9F14:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00130000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9F24u); set32(c.r[4], c.r[4].w[0] - 13504u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x003F9F24u) [[unlikely]] return; }
L_003F9F24:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 25168u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9F38u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x003F9F38u) [[unlikely]] return; }
L_003F9F38:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 9016u);
    set32(c.r[5], 0u + 3019u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9F50u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0079(c, 151u, depth + 1u); else { c.pc = 0x002E7010u; return; } if (c.pc != 0x003F9F50u) [[unlikely]] return; }
L_003F9F50:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    set32(c.r[7], 0u + 1u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 28816u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9F6Cu); c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x003F9F6Cu) [[unlikely]] return; }
L_003F9F6C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00130000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9F7Cu); set32(c.r[4], c.r[4].w[0] - 13504u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x003F9F7Cu) [[unlikely]] return; }
L_003F9F7C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 25168u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9F90u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x003F9F90u) [[unlikely]] return; }
L_003F9F90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F9FB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[3], c.r[3].w[0] + 8836u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[3].w[0] + 1276u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 636u)));
    set32(c.r[5], c.r[3].w[0] + 1192u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 6u)));
    st16((c.r[1].w[0] + 10488u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[3].w[0] + 1272u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9FE4u); set32(c.r[6], c.r[29].w[0] + 24u);  if (depth < kMaxDepth) unit_000A(c, 194u, depth + 1u); else { c.pc = 0x0012ABA0u; return; } if (c.pc != 0x003F9FE4u) [[unlikely]] return; }
L_003F9FE4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F9FF0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[5], c.r[4].w[0] << 2);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[3], c.r[3].w[0] - 29680u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[18], c.r[3].w[0] + c.r[5].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[19].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[16], c.r[16].w[0] + 8836u);
    c.budget -= 15;
    { const bool t = c.r[19].sd[0] < 0; set32(c.r[18], c.r[18].w[0] + 2u);  if (t) { goto L_003FA110; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; st32((c.r[16].w[0] + 1184u), c.r[3].w[0]);  if (t) { goto L_003FA080; } }
    set32(c.r[17], c.r[16].w[0] + 264u);
    set32(c.r[5], 0u + 3023u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA050u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0079(c, 151u, depth + 1u); else { c.pc = 0x002E7010u; return; } if (c.pc != 0x003FA050u) [[unlikely]] return; }
L_003FA050:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 28816u);
    set32(c.r[5], 0u + 3u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA06Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x003FA06Cu) [[unlikely]] return; }
L_003FA06C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 25168u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA080u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x003FA080u) [[unlikely]] return; }
L_003FA080:
    set32(c.r[17], c.r[16].w[0] + 600u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA094u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0079(c, 151u, depth + 1u); else { c.pc = 0x002E7010u; return; } if (c.pc != 0x003FA094u) [[unlikely]] return; }
L_003FA094:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 28816u);
    set32(c.r[5], 0u + 3u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA0B0u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x003FA0B0u) [[unlikely]] return; }
L_003FA0B0:
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] < 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003FA0F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA0C4u); set32(c.r[5], 0u + 2048u);  if (depth < kMaxDepth) unit_0079(c, 143u, depth + 1u); else { c.pc = 0x002E6F20u; return; } if (c.pc != 0x003FA0C4u) [[unlikely]] return; }
L_003FA0C4:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[17].d[0] << 48;
    st32((c.r[16].w[0] + 1272u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 1272u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA0DCu); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0045(c, 59u, depth + 1u); else { c.pc = 0x002147C0u; return; } if (c.pc != 0x003FA0DCu) [[unlikely]] return; }
L_003FA0DC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA0E8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0079(c, 144u, depth + 1u); else { c.pc = 0x002E6F40u; return; } if (c.pc != 0x003FA0E8u) [[unlikely]] return; }
L_003FA0E8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA0F8u); set32(c.r[4], c.r[4].w[0] - 24656u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x003FA0F8u) [[unlikely]] return; }
L_003FA0F8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[4], c.r[4].w[0] - 25168u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA10Cu); set32(c.r[6], 0u + 7u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x003FA10Cu) [[unlikely]] return; }
L_003FA10C:
    c.budget -= 1;
L_003FA110:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003FA130:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[6], c.r[4].w[0] << 2);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[3], c.r[3].w[0] - 29632u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[18], c.r[3].w[0] + c.r[6].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    set32(c.r[17], c.r[17].w[0] + 8836u);
    c.budget -= 15;
    { const bool t = c.r[6].sd[0] < 0; set32(c.r[18], c.r[18].w[0] + 2u);  if (t) { goto L_003FA240; } }
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], 0u + 10u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; st32((c.r[3].w[0] + 1184u), c.r[5].w[0]);  if (t) { goto L_003FA18C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_003FA190; } }
L_003FA18C:
    set32(c.r[2], 0u + 7u);
    c.budget -= 1;
L_003FA190:
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[19], c.r[2].w[0] + 12u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA1C4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0079(c, 151u, depth + 1u); else { c.pc = 0x002E7010u; return; } if (c.pc != 0x003FA1C4u) [[unlikely]] return; }
L_003FA1C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 28816u);
    set32(c.r[5], 0u + 3u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA1E0u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x003FA1E0u) [[unlikely]] return; }
L_003FA1E0:
    c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[18].sd[0] < 0; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003FA228; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA1F4u); set32(c.r[5], 0u + 2048u);  if (depth < kMaxDepth) unit_0079(c, 143u, depth + 1u); else { c.pc = 0x002E6F20u; return; } if (c.pc != 0x003FA1F4u) [[unlikely]] return; }
L_003FA1F4:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[4].d[0] = c.r[18].d[0] << 48;
    st32((c.r[17].w[0] + 1272u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 1272u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA20Cu); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0045(c, 59u, depth + 1u); else { c.pc = 0x002147C0u; return; } if (c.pc != 0x003FA20Cu) [[unlikely]] return; }
L_003FA20C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA218u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0079(c, 144u, depth + 1u); else { c.pc = 0x002E6F40u; return; } if (c.pc != 0x003FA218u) [[unlikely]] return; }
L_003FA218:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA228u); set32(c.r[4], c.r[4].w[0] - 24656u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x003FA228u) [[unlikely]] return; }
L_003FA228:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 25168u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA23Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x003FA23Cu) [[unlikely]] return; }
L_003FA23C:
    c.budget -= 1;
L_003FA240:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003FA260:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[3], c.r[4].w[0] << 3);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[4], c.r[3].w[0] - c.r[21].w[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[3], c.r[4].w[0] << 2);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[18], c.r[18].w[0] + 8836u);
    set32(c.r[3], c.r[3].w[0] << 2);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[3].w[0] + 12u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 14u)));
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 23;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_003FA2E0; } }
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003FA2C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA2C8u); set32(c.r[4], ld32((c.r[16].w[0] + 36u)));  if (depth < kMaxDepth) unit_000B(c, 62u, depth + 1u); else { c.pc = 0x0012D1C0u; return; } if (c.pc != 0x003FA2C8u) [[unlikely]] return; }
L_003FA2C8:
    st32((c.r[16].w[0] + 36u), 0u);
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 2u)));
    c.r[3].d[0] = c.r[19].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FA2C0u | kUnwind; return; } goto L_003FA2C0; } }
L_003FA2E0:
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != c.r[3].d[0]; st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(0u));  if (t) { goto L_003FA320; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.r[17].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
L_003FA2F8:
    set32(c.r[4], ld32((c.r[17].w[0] + 1192u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003FA310; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA30Cu);  if (depth < kMaxDepth) unit_000B(c, 62u, depth + 1u); else { c.pc = 0x0012D1C0u; return; } if (c.pc != 0x003FA30Cu) [[unlikely]] return; }
L_003FA30C:
    st32((c.r[17].w[0] + 1192u), 0u);
    c.budget -= 1;
L_003FA310:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FA2F8u | kUnwind; return; } goto L_003FA2F8; } }
L_003FA320:
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 1184u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << (c.r[21].w[0] & 31u));
    c.r[4].d[0] = ~(c.r[3].d[0] | 0ull);
    st32((c.r[18].w[0] + 8u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 1180u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    st32((c.r[18].w[0] + 1180u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003FA370:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00CE0000u);  if (t) { goto L_003FA384; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[1].w[0] + 9472u)));  if (t) { goto L_003FA394; } }
L_003FA384:
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 8064u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 1960u)));
    c.budget -= 4;
L_003FA394:
    c.r[6].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 3;
    { set32(c.r[5], 0u + 2u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002D8090u | kUnwind; return; } [[clang::musttail]] return unit_0076(c, 6u, depth); }
L_003FA3A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x019A0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[5].d[0] = c.r[2].d[0] | 4096ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[17].w[0] + 8836u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x01FE0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA3DCu); st32((c.r[1].w[0] + 10016u), 0u);  if (depth < kMaxDepth) unit_0079(c, 141u, depth + 1u); else { c.pc = 0x002E6F00u; return; } if (c.pc != 0x003FA3DCu) [[unlikely]] return; }
L_003FA3DC:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[5], 0u + 3017u);
    set32(c.r[16], c.r[16].w[0] + 8848u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA3F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0079(c, 151u, depth + 1u); else { c.pc = 0x002E7010u; return; } if (c.pc != 0x003FA3F4u) [[unlikely]] return; }
L_003FA3F4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    set32(c.r[7], 0u + 1u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 28816u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA410u); c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x003FA410u) [[unlikely]] return; }
L_003FA410:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00130000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA420u); set32(c.r[4], c.r[4].w[0] - 13504u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x003FA420u) [[unlikely]] return; }
L_003FA420:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 25168u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA434u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x003FA434u) [[unlikely]] return; }
L_003FA434:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[5], 0u + 3021u);
    set32(c.r[16], c.r[16].w[0] + 9268u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA44Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0079(c, 151u, depth + 1u); else { c.pc = 0x002E7010u; return; } if (c.pc != 0x003FA44Cu) [[unlikely]] return; }
L_003FA44C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    set32(c.r[7], 0u + 1u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 28816u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA468u); c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x003FA468u) [[unlikely]] return; }
L_003FA468:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00130000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA478u); set32(c.r[4], c.r[4].w[0] - 13504u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x003FA478u) [[unlikely]] return; }
L_003FA478:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 25168u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA48Cu); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x003FA48Cu) [[unlikely]] return; }
L_003FA48C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[2], c.r[2].w[0] + 20656u);
    set32(c.r[16], c.r[16].w[0] + 9352u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st8((c.r[1].w[0] + 8071u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] + 20632u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA4CCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0079(c, 151u, depth + 1u); else { c.pc = 0x002E7010u; return; } if (c.pc != 0x003FA4CCu) [[unlikely]] return; }
L_003FA4CC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    set32(c.r[7], 0u + 1u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 28816u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA4E8u); c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x003FA4E8u) [[unlikely]] return; }
L_003FA4E8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00130000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA4F8u); set32(c.r[4], c.r[4].w[0] - 13504u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x003FA4F8u) [[unlikely]] return; }
L_003FA4F8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 25168u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA50Cu); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x003FA50Cu) [[unlikely]] return; }
L_003FA50C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003FA530:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 10016u)));
    c.r[2].d[0] = c.r[2].d[0] & 97ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 97ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_003FA550:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x019A0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[5].d[0] = c.r[2].d[0] | 4096ull;
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[17].w[0] + 8836u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x01FE0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA584u); st32((c.r[1].w[0] + 10016u), 0u);  if (depth < kMaxDepth) unit_0079(c, 141u, depth + 1u); else { c.pc = 0x002E6F00u; return; } if (c.pc != 0x003FA584u) [[unlikely]] return; }
L_003FA584:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[5], 0u + 3017u);
    set32(c.r[16], c.r[16].w[0] + 8848u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA59Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0079(c, 151u, depth + 1u); else { c.pc = 0x002E7010u; return; } if (c.pc != 0x003FA59Cu) [[unlikely]] return; }
L_003FA59C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 28816u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA5B8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x003FA5B8u) [[unlikely]] return; }
L_003FA5B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00130000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA5C8u); set32(c.r[4], c.r[4].w[0] - 13504u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x003FA5C8u) [[unlikely]] return; }
L_003FA5C8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 25168u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA5DCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x003FA5DCu) [[unlikely]] return; }
L_003FA5DC:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 9268u);
    set32(c.r[5], 0u + 3022u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA5F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0079(c, 151u, depth + 1u); else { c.pc = 0x002E7010u; return; } if (c.pc != 0x003FA5F4u) [[unlikely]] return; }
L_003FA5F4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 28816u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA610u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x003FA610u) [[unlikely]] return; }
L_003FA610:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00130000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA620u); set32(c.r[4], c.r[4].w[0] - 13504u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x003FA620u) [[unlikely]] return; }
L_003FA620:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 25168u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA634u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x003FA634u) [[unlikely]] return; }
L_003FA634:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FA650:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 10016u)));
    c.r[2].d[0] = c.r[2].d[0] & 33ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 33ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_003FA670:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01170000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[5].d[0] = c.r[2].d[0] | 61440ull;
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[17].w[0] + 8836u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x01FE0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA6A4u); st32((c.r[1].w[0] + 10016u), 0u);  if (depth < kMaxDepth) unit_0079(c, 141u, depth + 1u); else { c.pc = 0x002E6F00u; return; } if (c.pc != 0x003FA6A4u) [[unlikely]] return; }
L_003FA6A4:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[5], 0u + 3017u);
    set32(c.r[16], c.r[16].w[0] + 8848u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA6BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0079(c, 151u, depth + 1u); else { c.pc = 0x002E7010u; return; } if (c.pc != 0x003FA6BCu) [[unlikely]] return; }
L_003FA6BC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    set32(c.r[7], 0u + 1u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 28816u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA6D8u); c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x003FA6D8u) [[unlikely]] return; }
L_003FA6D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00130000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA6E8u); set32(c.r[4], c.r[4].w[0] - 13504u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x003FA6E8u) [[unlikely]] return; }
L_003FA6E8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 25168u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA6FCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x003FA6FCu) [[unlikely]] return; }
L_003FA6FC:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[5], 0u + 3019u);
    set32(c.r[16], c.r[16].w[0] + 9016u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA714u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0079(c, 151u, depth + 1u); else { c.pc = 0x002E7010u; return; } if (c.pc != 0x003FA714u) [[unlikely]] return; }
L_003FA714:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    set32(c.r[7], 0u + 1u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 28816u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA730u); c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x003FA730u) [[unlikely]] return; }
L_003FA730:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00130000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA740u); set32(c.r[4], c.r[4].w[0] - 13504u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x003FA740u) [[unlikely]] return; }
L_003FA740:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 25168u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA754u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x003FA754u) [[unlikely]] return; }
L_003FA754:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 9184u);
    set32(c.r[5], 0u + 3020u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA76Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0079(c, 151u, depth + 1u); else { c.pc = 0x002E7010u; return; } if (c.pc != 0x003FA76Cu) [[unlikely]] return; }
L_003FA76C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 28816u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA788u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x003FA788u) [[unlikely]] return; }
L_003FA788:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00130000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA798u); set32(c.r[4], c.r[4].w[0] - 13504u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x003FA798u) [[unlikely]] return; }
L_003FA798:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 25168u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA7ACu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x003FA7ACu) [[unlikely]] return; }
L_003FA7AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FA7C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 40u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA7D8u); st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_005B(c, 73u, depth + 1u); else { c.pc = 0x0026CA70u; return; } if (c.pc != 0x003FA7D8u) [[unlikely]] return; }
L_003FA7D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01920000u);
    set32(c.r[4], 0u + 31u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA7E8u); c.r[5].d[0] = c.r[2].d[0] | 4096ull;  if (depth < kMaxDepth) unit_0009(c, 73u, depth + 1u); else { c.pc = 0x001251F0u; return; } if (c.pc != 0x003FA7E8u) [[unlikely]] return; }
L_003FA7E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01920000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA7F4u); c.r[4].d[0] = c.r[2].d[0] | 4096ull;  if (depth < kMaxDepth) unit_0011(c, 192u, depth + 1u); else { c.pc = 0x001463A0u; return; } if (c.pc != 0x003FA7F4u) [[unlikely]] return; }
L_003FA7F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA7FCu);  if (depth < kMaxDepth) unit_004F(c, 81u, depth + 1u); else { c.pc = 0x0023D5A0u; return; } if (c.pc != 0x003FA7FCu) [[unlikely]] return; }
L_003FA7FC:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[5], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], 0u - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], c.r[4].w[0] + 15664u);
    st8((c.r[2].w[0] + 74u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 75u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[1].w[0] + 16097u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    st32((c.r[28].w[0] - 23776u), c.r[4].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA834u); st8((c.r[1].w[0] + 10517u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_005B(c, 82u, depth + 1u); else { c.pc = 0x0026CC00u; return; } if (c.pc != 0x003FA834u) [[unlikely]] return; }
L_003FA834:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] - 2224u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA85Cu); set32(c.r[4], c.r[4].w[0] + 19712u);  if (depth < kMaxDepth) unit_0009(c, 128u, depth + 1u); else { c.pc = 0x00125980u; return; } if (c.pc != 0x003FA85Cu) [[unlikely]] return; }
L_003FA85C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], c.r[4].w[0] + 19952u);
    set32(c.r[5], c.r[5].w[0] + 20016u);
    set32(c.r[6], c.r[6].w[0] + 20080u);
    set32(c.r[7], c.r[7].w[0] + 20144u);
    set32(c.r[8], c.r[8].w[0] + 20208u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA890u); set32(c.r[9], c.r[9].w[0] + 19712u);  if (depth < kMaxDepth) unit_0009(c, 130u, depth + 1u); else { c.pc = 0x00125A80u; return; } if (c.pc != 0x003FA890u) [[unlikely]] return; }
L_003FA890:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FA8B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 22224u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8071u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA8E4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 86u, depth + 1u); else { c.pc = 0x0026CCF0u; return; } if (c.pc != 0x003FA8E4u) [[unlikely]] return; }
L_003FA8E4:
    set32(c.r[4], c.r[16].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA8F0u); set32(c.r[5], c.r[16].w[0] + 112u);  if (depth < kMaxDepth) unit_0047(c, 41u, depth + 1u); else { c.pc = 0x0021C270u; return; } if (c.pc != 0x003FA8F0u) [[unlikely]] return; }
L_003FA8F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FA900:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], 0u + 384u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00830000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA924u); set32(c.r[4], c.r[4].w[0] + 29024u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003FA924u) [[unlikely]] return; }
L_003FA924:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st8((c.r[1].w[0] + 29024u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u - 1u);
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[2].w[0] + 73u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA948u); st8((c.r[2].w[0] + 72u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0043(c, 384u, depth + 1u); else { c.pc = 0x0020F700u; return; } if (c.pc != 0x003FA948u) [[unlikely]] return; }
L_003FA948:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA950u);  if (depth < kMaxDepth) unit_0045(c, 85u, depth + 1u); else { c.pc = 0x00214BD0u; return; } if (c.pc != 0x003FA950u) [[unlikely]] return; }
L_003FA950:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA95Cu); set32(c.r[4], c.r[4].w[0] + 15664u);  if (depth < kMaxDepth) unit_005B(c, 89u, depth + 1u); else { c.pc = 0x0026CD50u; return; } if (c.pc != 0x003FA95Cu) [[unlikely]] return; }
L_003FA95C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 8128u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st16((c.r[2].w[0] + 46u), static_cast<std::uint16_t>(c.r[16].w[0]));
    set32(c.r[5], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 18498u);
    st16((c.r[2].w[0] + 44u), static_cast<std::uint16_t>(c.r[16].w[0]));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[3], c.r[3].w[0] + 18502u);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[3], c.r[3].w[0] + 18506u);
    c.f[0] = c.r[6].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[4], c.r[4].w[0] + 18507u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[2].w[0] + 40u), c.f[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[2].w[0] + 20u), c.f[0]);
    st32((c.r[2].w[0] + 24u), 0u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 44u)));
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[4], c.r[4].w[0] << 8);
    st16((c.r[2].w[0] + 32u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 44u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] << 8);
    st16((c.r[2].w[0] + 34u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 49;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAA20u); st16((c.r[2].w[0] + 36u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_00BE(c, 230u, depth + 1u); else { c.pc = 0x003FAF60u; return; } if (c.pc != 0x003FAA20u) [[unlikely]] return; }
L_003FAA20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FAA30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8075u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 8128u);  if (t) { goto L_003FAF50; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 44u)));
    c.r[4].d[0] = ld16((c.r[1].w[0] + 9540u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[7], c.r[7].w[0] + 18500u);
    set32(c.r[6], c.r[6].w[0] + 18496u);
    set32(c.r[5], c.r[5].w[0] + 18504u);
    set32(c.r[8], c.r[9].w[0] << 1);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 9556u));
    set32(c.r[8], c.r[8].w[0] << 2);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    set32(c.r[4], c.r[7].w[0] + c.r[8].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    set32(c.r[4], c.r[6].w[0] + c.r[8].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.f[1] = c.r[7].w[0];
    c.f[4] = fp::cvt_s_w(c.f[1]);
    set32(c.r[4], c.r[5].w[0] + c.r[8].w[0]);
    c.r[9].d[0] = ld16((c.r[4].w[0]));
    c.f[0] = c.r[6].w[0];
    c.budget -= 28;
    { const bool t = c.r[3].d[0] == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003FABB0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[2], c.r[2].w[0] + 18498u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[4], c.r[4].w[0] + 18502u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] + 18507u);
    c.f[0] = c.r[5].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[2], c.r[2].w[0] + 18506u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 40u), c.f[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 44u)));
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 20u), c.f[0]);
    st32((c.r[16].w[0] + 24u), 0u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 44u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] << 8);
    st16((c.r[16].w[0] + 32u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 44u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], c.r[2].w[0] << 8);
    st16((c.r[16].w[0] + 34u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 46;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAB78u); st16((c.r[16].w[0] + 36u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x003FAB78u) [[unlikely]] return; }
L_003FAB78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAB80u); set32(c.r[4], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x003FAB80u) [[unlikely]] return; }
L_003FAB80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAB88u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 34u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x003FAB88u) [[unlikely]] return; }
L_003FAB88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAB90u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 32u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x003FAB90u) [[unlikely]] return; }
L_003FAB90:
    c.f[14] = ld32((c.r[16].w[0] + 40u));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FABA0u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x003FABA0u) [[unlikely]] return; }
L_003FABA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FABA8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 198u, depth + 1u); else { c.pc = 0x001271B0u; return; } if (c.pc != 0x003FABA8u) [[unlikely]] return; }
L_003FABA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FAF50; } }
L_003FABB0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[4].d[0] = ld16((c.r[1].w[0] + 9536u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 9552u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 9682u)));
    c.r[3].d[0] = c.r[3].d[0] & 15360ull;
    c.r[25].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 11;
    { const bool t = c.r[6].sd[0] >= 0; c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003FABE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[10], 0u - c.r[6].w[0]);  if (t) { goto L_003FABE8; } }
L_003FABE4:
    c.r[10].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 1;
L_003FABE8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 9680u)));
    c.budget -= 4;
    { const bool t = c.r[11].sd[0] >= 0; c.r[14].d[0] = c.r[11].d[0] + 0ull;  if (t) { goto L_003FAC00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u - c.r[11].w[0]);  if (t) { goto L_003FAC04; } }
L_003FAC00:
    c.r[3].d[0] = c.r[11].d[0] + 0ull;
    c.budget -= 1;
L_003FAC04:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[12].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 9688u)));
    c.budget -= 4;
    { const bool t = c.r[12].sd[0] >= 0; c.r[15].d[0] = c.r[12].d[0] + 0ull;  if (t) { goto L_003FAC1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[13], 0u - c.r[12].w[0]);  if (t) { goto L_003FAC20; } }
L_003FAC1C:
    c.r[13].d[0] = c.r[12].d[0] + 0ull;
    c.budget -= 1;
L_003FAC20:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 9690u)));
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] >= 0; c.r[8].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003FAC38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u - c.r[4].w[0]);  if (t) { goto L_003FAC3C; } }
L_003FAC38:
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_003FAC3C:
    set32(c.r[3], c.r[3].w[0] + c.r[10].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 9694u)));
    set32(c.r[3], c.r[13].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[10].sd[0] >= 0; c.r[24].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_003FAC5C; } }
    set32(c.r[10], 0u - c.r[10].w[0]);
    c.budget -= 1;
L_003FAC5C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 9686u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_003FAC70; } }
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.budget -= 1;
L_003FAC70:
    set32(c.r[7], c.r[3].w[0] + c.r[10].w[0]);
    c.r[10].d[0] = c.r[7].d[0] & 65535ull;
    c.r[3].d[0] = c.r[25].d[0] & 65535ull;
    c.r[7].d[0] = c.r[24].d[0] & 65535ull;
    set32(c.r[13], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[10].w[0] + c.r[13].w[0]);
    c.budget -= 8;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_003FAF50; } }
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    c.budget -= 3;
    { const bool t = c.r[24].d[0] == 0ull; c.r[2].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_003FAD70; } }
    c.budget -= 2;
    { const bool t = c.r[15].sd[0] >= 0;  if (t) { goto L_003FACA8; } }
    set32(c.r[15], 0u - c.r[15].w[0]);
    c.budget -= 1;
L_003FACA8:
    c.budget -= 2;
    { const bool t = c.r[14].sd[0] >= 0;  if (t) { goto L_003FACB4; } }
    set32(c.r[14], 0u - c.r[14].w[0]);
    c.budget -= 1;
L_003FACB4:
    c.r[1].d[0] = c.r[15].sd[0] < c.r[14].sd[0] ? 1ull : 0ull;
    if (c.r[1].d[0] == 0) c.r[11].d[0] = c.r[12].d[0];
    c.r[11].d[0] = c.r[11].d[0] << 48;
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 48);
    c.r[1].d[0] = c.r[11].sd[0] < 49ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003FACE0; } }
    c.r[1].d[0] = c.r[11].sd[0] < -48ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003FAD08; } }
    c.budget -= 1;
L_003FACE0:
    c.budget -= 2;
    { const bool t = c.r[11].sd[0] >= 0;  if (t) { goto L_003FACEC; } }
    set32(c.r[11], 0u - c.r[11].w[0]);
    c.budget -= 1;
L_003FACEC:
    set32(c.r[12], c.r[11].w[0] - 48u);
    set32(c.r[11], c.r[12].w[0] << 2);
    set32(c.r[11], c.r[11].w[0] + c.r[12].w[0]);
    c.r[11].d[0] = c.r[11].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] + c.r[11].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 7;
L_003FAD08:
    c.budget -= 2;
    { const bool t = c.r[8].sd[0] >= 0;  if (t) { goto L_003FAD14; } }
    set32(c.r[8], 0u - c.r[8].w[0]);
    c.budget -= 1;
L_003FAD14:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_003FAD20; } }
    set32(c.r[5], 0u - c.r[5].w[0]);
    c.budget -= 1;
L_003FAD20:
    c.r[1].d[0] = c.r[8].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    if (c.r[1].d[0] == 0) c.r[6].d[0] = c.r[4].d[0];
    c.r[4].d[0] = c.r[6].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[1].d[0] = c.r[4].sd[0] < 49ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003FAD48; } }
    c.r[1].d[0] = c.r[4].sd[0] < -48ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003FAD70; } }
L_003FAD48:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_003FAD54; } }
    set32(c.r[4], 0u - c.r[4].w[0]);
    c.budget -= 1;
L_003FAD54:
    set32(c.r[5], c.r[4].w[0] - 48u);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.r[7].d[0] = c.r[4].d[0] & 65535ull;
    c.budget -= 7;
L_003FAD70:
    c.budget -= 2;
    { const bool t = c.r[13].d[0] == 0ull;  if (t) { goto L_003FAE48; } }
    c.r[5].d[0] = c.r[3].d[0] & 1024ull;
    set32(c.r[4], 0u + 1024u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_003FADA0; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 34u)));
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 34u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003FADC0; } }
    c.budget -= 1;
L_003FADA0:
    c.r[5].d[0] = c.r[3].d[0] & 2048ull;
    set32(c.r[4], 0u + 2048u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_003FADC0; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 34u)));
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[4].w[0] - c.r[2].w[0]);
    st16((c.r[16].w[0] + 34u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_003FADC0:
    c.r[4].d[0] = c.r[3].d[0] & 8192ull;
    set32(c.r[2], 0u + 8192u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_003FAE10; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 32u)));
    c.r[2].d[0] = c.r[7].d[0] & 65535ull;
    c.r[1].d[0] = 0ull | 49280ull;
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    st16((c.r[16].w[0] + 32u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 32u));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003FAE48; } }
    c.r[1].d[0] = c.r[2].sd[0] < 16385ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003FAE48; } }
    set32(c.r[2], 0u - 16256u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 32u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003FAE48; } }
    c.budget -= 1;
L_003FAE10:
    c.r[3].d[0] = c.r[3].d[0] & 4096ull;
    set32(c.r[2], 0u + 4096u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003FAE48; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 32u)));
    c.r[2].d[0] = c.r[7].d[0] & 65535ull;
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st16((c.r[16].w[0] + 32u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 32u)));
    c.r[1].d[0] = c.r[9].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003FAE48; } }
    st16((c.r[16].w[0] + 32u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.budget -= 2;
L_003FAE48:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] == 0ull;  if (t) { goto L_003FAF18; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 9694u)));
    c.f[2] = c.r[2].w[0];
    c.budget -= 6;
    { const bool t = c.r[4].sd[0] >= 0; c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003FAE6C; } }
    set32(c.r[5], 0u - c.r[4].w[0]);
    c.budget -= 1;
L_003FAE6C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 9686u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_003FAE80; } }
    set32(c.r[2], 0u - c.r[3].w[0]);
    c.budget -= 1;
L_003FAE80:
    c.r[1].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    if (c.r[1].d[0] == 0) c.r[3].d[0] = c.r[4].d[0];
    c.r[4].d[0] = c.r[3].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[1].d[0] = c.r[4].sd[0] < 49ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003FAEA8; } }
    c.r[1].d[0] = c.r[4].sd[0] < -48ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003FAF18; } }
L_003FAEA8:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] >= 0; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003FAEBC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - c.r[4].w[0]);  if (t) { goto L_003FAEBC; } }
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_003FAEBC:
    set32(c.r[3], c.r[2].w[0] - 48u);
    c.f[1] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 10;
    { const bool t = c.r[4].sd[0] >= 0; c.f[2] = fp::add(c.f[2], c.f[0]);  if (t) { goto L_003FAF00; } }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 40u), c.f[0]);  if (t) { goto L_003FAF18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 40u), c.f[3]);  if (t) { goto L_003FAF18; } }
L_003FAF00:
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[4]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 40u), c.f[0]);  if (t) { goto L_003FAF18; } }
    st32((c.r[16].w[0] + 40u), c.f[4]);
    c.budget -= 1;
L_003FAF18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAF20u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x003FAF20u) [[unlikely]] return; }
L_003FAF20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAF28u); set32(c.r[4], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x003FAF28u) [[unlikely]] return; }
L_003FAF28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAF30u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 34u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x003FAF30u) [[unlikely]] return; }
L_003FAF30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAF38u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 32u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x003FAF38u) [[unlikely]] return; }
L_003FAF38:
    c.f[14] = ld32((c.r[16].w[0] + 40u));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAF48u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x003FAF48u) [[unlikely]] return; }
L_003FAF48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAF50u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 198u, depth + 1u); else { c.pc = 0x001271B0u; return; } if (c.pc != 0x003FAF50u) [[unlikely]] return; }
L_003FAF50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FAF60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAF78u); set32(c.r[16], c.r[16].w[0] + 8128u);  if (depth < kMaxDepth) unit_00BE(c, 217u, depth + 1u); else { c.pc = 0x003FAA30u; return; } if (c.pc != 0x003FAF78u) [[unlikely]] return; }
L_003FAF78:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00830000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAF88u); set32(c.r[4], c.r[4].w[0] + 29040u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x003FAF88u) [[unlikely]] return; }
L_003FAF88:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAF98u); set32(c.r[4], c.r[4].w[0] + 29072u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x003FAF98u) [[unlikely]] return; }
L_003FAF98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAFA0u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0009(c, 167u, depth + 1u); else { c.pc = 0x00126260u; return; } if (c.pc != 0x003FAFA0u) [[unlikely]] return; }
L_003FAFA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAFA8u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x003FAFA8u) [[unlikely]] return; }
L_003FAFA8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00830000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[4], c.r[4].w[0] + 29040u);
    set32(c.r[5], c.r[5].w[0] + 29072u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAFC0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x00127690u; return; } if (c.pc != 0x003FAFC0u) [[unlikely]] return; }
L_003FAFC0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00830000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAFCCu); set32(c.r[4], c.r[4].w[0] + 29104u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x003FAFCCu) [[unlikely]] return; }
L_003FAFCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAFD4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 167u, depth + 1u); else { c.pc = 0x00126260u; return; } if (c.pc != 0x003FAFD4u) [[unlikely]] return; }
L_003FAFD4:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[4], c.r[4].w[0] + 29104u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st32((c.r[3].w[0] + 60u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 29024u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 68u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 72u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FB010:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 20096u);
    st32((c.r[5].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[5].w[0] + 4u), c.f[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 8u), 0u);  c.pc = t; return; }
L_003FB040:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00227690u | kUnwind; return; } [[clang::musttail]] return unit_0049(c, 380u, depth); }
L_003FB050:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00227730u | kUnwind; return; } [[clang::musttail]] return unit_0049(c, 382u, depth); }
L_003FB060:
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003FB098; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 9540u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[2].d[0] = ld16((c.r[1].w[0] + 9548u));
    c.r[2].d[0] = c.r[2].d[0] & 144ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 10;
L_003FB098:
    c.r[2].d[0] = c.r[4].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);  if (t) { goto L_003FB0C8; } }
    c.r[3].d[0] = ld16((c.r[1].w[0] + 9556u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[2].d[0] = ld16((c.r[1].w[0] + 9564u));
    c.r[2].d[0] = c.r[2].d[0] & 144ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 9;
L_003FB0C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[5].d[0] & 65535ull;  c.pc = t; return; }
L_003FB0D0:
    c.r[2].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[2].d[0] & 144ull;
    set32(c.r[2], 0u + 128u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003FB0F8; } }
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_003FB0F8; } }
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 2;
L_003FB0F8:
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003FB118; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[1].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003FB118; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003FB118:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; return; }
L_003FB120:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB14Cu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 47u, depth + 1u); else { c.pc = 0x001C8B00u; return; } if (c.pc != 0x003FB14Cu) [[unlikely]] return; }
L_003FB14C:
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st8((c.r[5].w[0] + 47u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[5].w[0] + 53u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[5].w[0] + 88u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[5].w[0] + 48u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[5].w[0] + 54u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[5].w[0] + 89u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[5].w[0] + 49u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[5].w[0] + 55u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[5].w[0] + 90u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[5].w[0] + 50u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[5].w[0] + 56u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[5].w[0] + 91u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[5].w[0] + 51u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[5].w[0] + 57u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[5].w[0] + 92u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[5].w[0] + 52u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[5].w[0] + 58u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[5].w[0] + 93u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[19].w[0] + 771u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 129u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 128u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[19].w[0] + 8656u), static_cast<std::uint8_t>(0u));
    st8((c.r[19].w[0] + 8658u), static_cast<std::uint8_t>(c.r[18].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8658u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 3u)));
    c.budget -= 54;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB224u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 53u, depth + 1u); else { c.pc = 0x001E9250u; return; } if (c.pc != 0x003FB224u) [[unlikely]] return; }
L_003FB224:
    c.r[5].d[0] = ld8((c.r[19].w[0] + 8658u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[4], c.r[4].w[0] + 14384u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], 0u + 3u);
    set32(c.r[5], c.r[5].w[0] << 7);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[19].w[0] + 1608u), c.r[4].w[0]);
    st8((c.r[19].w[0] + 8661u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st8((c.r[19].w[0] + 8680u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[19].w[0] + 88u), 0u);
    st32((c.r[19].w[0] + 84u), 0u);
    st32((c.r[19].w[0] + 80u), 0u);
    st32((c.r[19].w[0] + 120u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 116u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 112u), c.r[3].w[0]);
    st8((c.r[19].w[0] + 8512u), static_cast<std::uint8_t>(0u));
    st8((c.r[19].w[0] + 8513u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 47u), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8659u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 53u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 88u), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 121u), static_cast<std::uint8_t>(c.r[18].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB29Cu); st8((c.r[2].w[0] + 120u), static_cast<std::uint8_t>(c.r[18].w[0]));  if (depth < kMaxDepth) unit_0047(c, 85u, depth + 1u); else { c.pc = 0x0021CDD0u; return; } if (c.pc != 0x003FB29Cu) [[unlikely]] return; }
L_003FB29C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB2A4u);  if (depth < kMaxDepth) unit_0047(c, 133u, depth + 1u); else { c.pc = 0x0021DED0u; return; } if (c.pc != 0x003FB2A4u) [[unlikely]] return; }
L_003FB2A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB2ACu);  if (depth < kMaxDepth) unit_0047(c, 243u, depth + 1u); else { c.pc = 0x0021F4F0u; return; } if (c.pc != 0x003FB2ACu) [[unlikely]] return; }
L_003FB2AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003FB2D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB2E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0048(c, 24u, depth + 1u); else { c.pc = 0x002203B0u; return; } if (c.pc != 0x003FB2E4u) [[unlikely]] return; }
L_003FB2E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB2ECu);  if (depth < kMaxDepth) unit_0047(c, 94u, depth + 1u); else { c.pc = 0x0021CFC0u; return; } if (c.pc != 0x003FB2ECu) [[unlikely]] return; }
L_003FB2EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB2F4u);  if (depth < kMaxDepth) unit_0047(c, 142u, depth + 1u); else { c.pc = 0x0021E160u; return; } if (c.pc != 0x003FB2F4u) [[unlikely]] return; }
L_003FB2F4:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[1].d[0] = c.r[2].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003FB318; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB30Cu);  if (depth < kMaxDepth) unit_0032(c, 61u, depth + 1u); else { c.pc = 0x001C8CF0u; return; } if (c.pc != 0x003FB30Cu) [[unlikely]] return; }
L_003FB30C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 956u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003FB340; } }
L_003FB318:
    c.r[1].d[0] = c.r[2].sd[0] < 80ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003FB338; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB32Cu);  if (depth < kMaxDepth) unit_002D(c, 119u, depth + 1u); else { c.pc = 0x001B5B80u; return; } if (c.pc != 0x003FB32Cu) [[unlikely]] return; }
L_003FB32C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FB340; } }
    c.budget -= 1;
L_003FB338:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB340u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 44u, depth + 1u); else { c.pc = 0x003AC540u; return; } if (c.pc != 0x003FB340u) [[unlikely]] return; }
L_003FB340:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB34Cu); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_00BE(c, 239u, depth + 1u); else { c.pc = 0x003FB010u; return; } if (c.pc != 0x003FB34Cu) [[unlikely]] return; }
L_003FB34C:
    st32((c.r[16].w[0] + 84u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FB360:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB370u);  if (depth < kMaxDepth) unit_006B(c, 17u, depth + 1u); else { c.pc = 0x002AC350u; return; } if (c.pc != 0x003FB370u) [[unlikely]] return; }
L_003FB370:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB378u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006B(c, 9u, depth + 1u); else { c.pc = 0x002AC1A0u; return; } if (c.pc != 0x003FB378u) [[unlikely]] return; }
L_003FB378:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB380u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_006B(c, 9u, depth + 1u); else { c.pc = 0x002AC1A0u; return; } if (c.pc != 0x003FB380u) [[unlikely]] return; }
L_003FB380:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB388u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_006B(c, 9u, depth + 1u); else { c.pc = 0x002AC1A0u; return; } if (c.pc != 0x003FB388u) [[unlikely]] return; }
L_003FB388:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB390u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x003FB390u) [[unlikely]] return; }
L_003FB390:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB398u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x003FB398u) [[unlikely]] return; }
L_003FB398:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB3A0u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x003FB3A0u) [[unlikely]] return; }
L_003FB3A0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FB3B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB3C4u); set32(c.r[4], c.r[4].w[0] - 15136u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x003FB3C4u) [[unlikely]] return; }
L_003FB3C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB3D0u); set32(c.r[4], c.r[4].w[0] - 15024u);  if (depth < kMaxDepth) unit_0043(c, 416u, depth + 1u); else { c.pc = 0x0020FEF0u; return; } if (c.pc != 0x003FB3D0u) [[unlikely]] return; }
L_003FB3D0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FB3E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB3F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 17u, depth + 1u); else { c.pc = 0x002AC350u; return; } if (c.pc != 0x003FB3F4u) [[unlikely]] return; }
L_003FB3F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB3FCu);  if (depth < kMaxDepth) unit_006A(c, 139u, depth + 1u); else { c.pc = 0x002AA020u; return; } if (c.pc != 0x003FB3FCu) [[unlikely]] return; }
L_003FB3FC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8075u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003FB4F8; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[1].d[0] = c.r[2].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003FB468; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB424u);  if (depth < kMaxDepth) unit_0037(c, 55u, depth + 1u); else { c.pc = 0x001DC4B0u; return; } if (c.pc != 0x003FB424u) [[unlikely]] return; }
L_003FB424:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB42Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 171u, depth + 1u); else { c.pc = 0x001DBCC0u; return; } if (c.pc != 0x003FB42Cu) [[unlikely]] return; }
L_003FB42C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB434u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 352u, depth + 1u); else { c.pc = 0x001BB820u; return; } if (c.pc != 0x003FB434u) [[unlikely]] return; }
L_003FB434:
    set32(c.r[3], ld32((c.r[16].w[0] + 1608u)));
    set32(c.r[2], 0u - 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 124u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003FB450; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB450u);  if (depth < kMaxDepth) unit_0039(c, 176u, depth + 1u); else { c.pc = 0x001E6BB0u; return; } if (c.pc != 0x003FB450u) [[unlikely]] return; }
L_003FB450:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB458u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 466u, depth + 1u); else { c.pc = 0x001C5810u; return; } if (c.pc != 0x003FB458u) [[unlikely]] return; }
L_003FB458:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB460u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 459u, depth + 1u); else { c.pc = 0x001C57C0u; return; } if (c.pc != 0x003FB460u) [[unlikely]] return; }
L_003FB460:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FB4B8; } }
L_003FB468:
    c.r[1].d[0] = c.r[2].sd[0] < 80ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003FB4A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB47Cu);  if (depth < kMaxDepth) unit_002C(c, 126u, depth + 1u); else { c.pc = 0x001B1CE0u; return; } if (c.pc != 0x003FB47Cu) [[unlikely]] return; }
L_003FB47C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB484u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 352u, depth + 1u); else { c.pc = 0x001BB820u; return; } if (c.pc != 0x003FB484u) [[unlikely]] return; }
L_003FB484:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB48Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 466u, depth + 1u); else { c.pc = 0x001C5810u; return; } if (c.pc != 0x003FB48Cu) [[unlikely]] return; }
L_003FB48C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB494u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 459u, depth + 1u); else { c.pc = 0x001C57C0u; return; } if (c.pc != 0x003FB494u) [[unlikely]] return; }
L_003FB494:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FB4B8; } }
    c.budget -= 1;
L_003FB4A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB4A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 354u, depth + 1u); else { c.pc = 0x001BB8A0u; return; } if (c.pc != 0x003FB4A8u) [[unlikely]] return; }
L_003FB4A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB4B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 459u, depth + 1u); else { c.pc = 0x001C57C0u; return; } if (c.pc != 0x003FB4B0u) [[unlikely]] return; }
L_003FB4B0:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003FB4B8:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[1].d[0] = c.r[2].sd[0] < 80ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_003FB4F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB4D0u);  if (depth < kMaxDepth) unit_006B(c, 9u, depth + 1u); else { c.pc = 0x002AC1A0u; return; } if (c.pc != 0x003FB4D0u) [[unlikely]] return; }
L_003FB4D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB4D8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_006B(c, 9u, depth + 1u); else { c.pc = 0x002AC1A0u; return; } if (c.pc != 0x003FB4D8u) [[unlikely]] return; }
L_003FB4D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB4E0u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_006B(c, 9u, depth + 1u); else { c.pc = 0x002AC1A0u; return; } if (c.pc != 0x003FB4E0u) [[unlikely]] return; }
L_003FB4E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB4E8u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_006B(c, 9u, depth + 1u); else { c.pc = 0x002AC1A0u; return; } if (c.pc != 0x003FB4E8u) [[unlikely]] return; }
L_003FB4E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FB4F8; } }
L_003FB4F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB4F8u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_006B(c, 9u, depth + 1u); else { c.pc = 0x002AC1A0u; return; } if (c.pc != 0x003FB4F8u) [[unlikely]] return; }
L_003FB4F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB500u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_006B(c, 9u, depth + 1u); else { c.pc = 0x002AC1A0u; return; } if (c.pc != 0x003FB500u) [[unlikely]] return; }
L_003FB500:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB508u);  if (depth < kMaxDepth) unit_004A(c, 360u, depth + 1u); else { c.pc = 0x0022B860u; return; } if (c.pc != 0x003FB508u) [[unlikely]] return; }
L_003FB508:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB510u);  if (depth < kMaxDepth) unit_004B(c, 49u, depth + 1u); else { c.pc = 0x0022C9B0u; return; } if (c.pc != 0x003FB510u) [[unlikely]] return; }
L_003FB510:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB518u);  if (depth < kMaxDepth) unit_00BE(c, 230u, depth + 1u); else { c.pc = 0x003FAF60u; return; } if (c.pc != 0x003FB518u) [[unlikely]] return; }
L_003FB518:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB520u);  if (depth < kMaxDepth) unit_006B(c, 20u, depth + 1u); else { c.pc = 0x002AC480u; return; } if (c.pc != 0x003FB520u) [[unlikely]] return; }
L_003FB520:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[1].d[0] = c.r[2].sd[0] < 80ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_003FB558; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB538u);  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x003FB538u) [[unlikely]] return; }
L_003FB538:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB540u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x003FB540u) [[unlikely]] return; }
L_003FB540:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB548u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x003FB548u) [[unlikely]] return; }
L_003FB548:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB550u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x003FB550u) [[unlikely]] return; }
L_003FB550:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FB560; } }
L_003FB558:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB560u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x003FB560u) [[unlikely]] return; }
L_003FB560:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB568u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x003FB568u) [[unlikely]] return; }
L_003FB568:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB574u); set32(c.r[4], c.r[4].w[0] - 912u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x003FB574u) [[unlikely]] return; }
L_003FB574:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FB590:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB5A0u);  if (depth < kMaxDepth) unit_0045(c, 88u, depth + 1u); else { c.pc = 0x00214D60u; return; } if (c.pc != 0x003FB5A0u) [[unlikely]] return; }
L_003FB5A0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB5ACu); set32(c.r[4], c.r[4].w[0] - 15136u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x003FB5ACu) [[unlikely]] return; }
L_003FB5AC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB5B8u); set32(c.r[4], c.r[4].w[0] - 15024u);  if (depth < kMaxDepth) unit_0043(c, 416u, depth + 1u); else { c.pc = 0x0020FEF0u; return; } if (c.pc != 0x003FB5B8u) [[unlikely]] return; }
L_003FB5B8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FB5D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003FB5E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB5E4u);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x003FB5E4u) [[unlikely]] return; }
L_003FB5E4:
    c.budget -= 1;
L_003FB5E8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FB600:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB614u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 295u, depth + 1u); else { c.pc = 0x003AF550u; return; } if (c.pc != 0x003FB614u) [[unlikely]] return; }
L_003FB614:
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8070u)));
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB640u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 6u)));  if (depth < kMaxDepth) unit_00AB(c, 341u, depth + 1u); else { c.pc = 0x003AFC50u; return; } if (c.pc != 0x003FB640u) [[unlikely]] return; }
L_003FB640:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB648u); st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AB(c, 297u, depth + 1u); else { c.pc = 0x003AF580u; return; } if (c.pc != 0x003FB648u) [[unlikely]] return; }
L_003FB648:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FB660:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x2AAA0000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[2].d[0] | 43691ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[16].w[0]);
    set32(c.r[3], c.r[7].w[0] >> 31);
    set32(c.r[4], c.r[16].w[0] >> 31);
    c.r[2].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[5].w[0], c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 26;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[6], 0u + 6u);  if (t) { goto L_003FB6D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[6].d[0] << 56;  if (t) { goto L_003FB6EC; } }
L_003FB6D0:
    mmi::div(c, 0, c.r[7].w[0], c.r[6].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.r[6].d[0] = c.r[2].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.r[18].d[0] = c.r[6].d[0] << 56;
    c.budget -= 7;
L_003FB6EC:
    c.r[17].d[0] = c.r[8].d[0] << 56;
    set32(c.r[4], 0u + 3u);
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 56);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB700u); c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x003FB700u) [[unlikely]] return; }
L_003FB700:
    c.r[3].d[0] = c.r[18].d[0] << 56;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB718u); set32(c.r[6], c.r[3].w[0] - 1u);  if (depth < kMaxDepth) unit_0049(c, 385u, depth + 1u); else { c.pc = 0x00227830u; return; } if (c.pc != 0x003FB718u) [[unlikely]] return; }
L_003FB718:
    st8((c.r[19].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_003FB758; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x2AAA0000u);
    c.r[2].d[0] = c.r[2].d[0] | 43691ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = c.r[2].d[0] << 56;
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);  if (t) { goto L_003FB8B0; } }
L_003FB758:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x2AAA0000u);
    set32(c.r[4], 0u + 6u);
    c.r[2].d[0] = c.r[2].d[0] | 43691ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    set32(c.r[3], c.r[5].w[0] >> 31);
    c.r[2].d[0] = c.hi.d[0];
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.hi.d[0];
    c.r[18].d[0] = c.r[2].d[0] << 56;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 56);
    c.budget -= 16;
    { const bool t = c.r[18].sd[0] <= 0; c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);  if (t) { goto L_003FB7A8; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
L_003FB7A8:
    c.r[17].d[0] = c.r[3].d[0] << 56;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x2AAA0000u);
    c.r[2].d[0] = c.r[2].d[0] | 43691ull;
    set32(c.r[4], 0u + 3u);
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[20].d[0] = c.r[2].d[0] << 56;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB7E4u); c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 56);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x003FB7E4u) [[unlikely]] return; }
L_003FB7E4:
    c.r[5].d[0] = c.r[20].d[0] << 56;
    set32(c.r[6], c.r[17].w[0] - 1u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB7F8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 389u, depth + 1u); else { c.pc = 0x002278E0u; return; } if (c.pc != 0x003FB7F8u) [[unlikely]] return; }
L_003FB7F8:
    c.r[4].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[20].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[1].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003FB840; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003FB830; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003FB8B0; } }
L_003FB830:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003FB8B0; } }
    c.budget -= 1;
L_003FB840:
    c.r[1].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003FB8B0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 4u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003FB870; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003FB878; } }
    c.budget -= 1;
L_003FB870:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003FB878:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[2], c.r[4].w[0] + 1u);  if (t) { goto L_003FB8B0; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_003FB8B0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1u)));
    set32(c.r[2], 0u + 6u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[2].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[18].w[0] - 1u);  if (t) { goto L_003FB8B0; } }
    st8((c.r[19].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_003FB8B0:
    c.r[3].d[0] = c.r[4].d[0] << 56;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st8((c.r[19].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].d[0] = c.r[16].d[0] ^ c.r[2].d[0];
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003FB900:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB914u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 292u, depth + 1u); else { c.pc = 0x003AF490u; return; } if (c.pc != 0x003FB914u) [[unlikely]] return; }
L_003FB914:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 6u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[3], c.r[3].w[0] + 20808u);
    set32(c.r[4], c.r[4].w[0] + 20848u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[4].d[0] = ld16((c.r[4].w[0]));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003FB990; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[5], c.r[5].w[0] + 8064u);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 3;
L_003FB958:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 129u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003FB970; } }
    st8((c.r[5].w[0] + 2052u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 3;
L_003FB970:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 6u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[2].d[0] = c.r[7].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FB958u | kUnwind; return; } goto L_003FB958; } }
    c.budget -= 1;
L_003FB990:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[3], c.r[6].w[0] + 2052u);
    set32(c.r[2], c.r[2].w[0] + 8064u);
    set32(c.r[4], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB9B0u); st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (depth < kMaxDepth) unit_00AB(c, 288u, depth + 1u); else { c.pc = 0x003AF3B0u; return; } if (c.pc != 0x003FB9B0u) [[unlikely]] return; }
L_003FB9B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FB9C0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 7u)));
    c.r[1].d[0] = 0ll < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003FBA08; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[6], c.r[6].w[0] + 8064u);
    c.budget -= 4;
L_003FB9E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 2052u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_003FB9F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FBA10; } }
    c.budget -= 1;
L_003FB9F8:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[3].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FB9E0u | kUnwind; return; } goto L_003FB9E0; } }
L_003FBA08:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003FBA10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003FBA20:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] >= 0; c.r[2].d[0] = c.r[5].d[0] & 7ull;  if (t) { goto L_003FBA34; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FBA34; } }
    set32(c.r[2], c.r[2].w[0] - 8u);
    c.budget -= 1;
L_003FBA34:
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 9;
    { const bool t = c.r[5].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 3));  if (t) { goto L_003FBA60; } }
    set32(c.r[2], c.r[5].w[0] + 7u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    c.budget -= 2;
L_003FBA60:
    c.f[0] = c.r[2].w[0];
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[14] = c.r[2].w[0];
    c.f[13] = fp::mul(c.f[14], c.f[0]);
    c.budget -= 10;
    { c.f[15] = c.f[14];  if (c.budget < 0 && preempt(c)) { c.pc = 0x002D94B0u | kUnwind; return; } [[clang::musttail]] return unit_0076(c, 98u, depth); }
L_003FBA90:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] <= 0; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_003FBDC8; } }
    set32(c.r[25], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[25].d[0];  if (t) { goto L_003FBAC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_003FBDC8; } }
L_003FBAC0:
    set32(c.r[3], c.r[5].w[0] - 1u);
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_003FBB38; } }
    c.r[1].d[0] = c.r[3].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[8], c.r[5].w[0] - 9u);  if (t) { goto L_003FBB08; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x05F50000u);
    c.r[7].d[0] = c.r[3].d[0] | 57600ull;
    c.budget -= 3;
L_003FBAE8:
    set32(c.r[9], c.r[9].w[0] + 8u);
    mmi::mult(c, 0, c.r[25].w[0], c.r[7].w[0]);
    c.r[25].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[9].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FBAE8u | kUnwind; return; } goto L_003FBAE8; } }
    c.budget -= 1;
L_003FBB08:
    set32(c.r[7], c.r[5].w[0] - 1u);
    c.r[1].d[0] = c.r[9].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003FBB38; } }
L_003FBB18:
    set32(c.r[3], c.r[25].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[25].w[0]);
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[25], c.r[3].w[0] << 1);
    c.r[3].d[0] = c.r[9].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FBB18u | kUnwind; return; } goto L_003FBB18; } }
    c.budget -= 1;
L_003FBB38:
    c.r[1].d[0] = 0ll < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[14].d[0] = 0ull + 0ull;  if (t) { goto L_003FBD90; } }
    c.r[1].d[0] = c.r[5].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[24], c.r[5].w[0] - 8u);  if (t) { goto L_003FBD40; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x51EB0000u);
    c.r[13].d[0] = c.r[7].d[0] | 26215ull;
    c.r[11].d[0] = c.r[3].d[0] | 34079ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x10620000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x68DB0000u);
    c.r[10].d[0] = c.r[7].d[0] | 19923ull;
    c.r[9].d[0] = c.r[3].d[0] | 35757ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x14F80000u);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x55E60000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x431B0000u);
    c.r[8].d[0] = c.r[7].d[0] | 46473ull;
    c.r[7].d[0] = c.r[3].d[0] | 56963ull;
    c.r[17].d[0] = c.r[12].d[0] | 15241ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x6B5F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 51819ull;
    c.budget -= 16;
L_003FBB90:
    set32(c.r[15], c.r[6].w[0] + c.r[14].w[0]);
    mmi::div(c, 0, c.r[4].w[0], c.r[25].w[0]);
    set32(c.r[14], c.r[14].w[0] + 8u);
    set32(c.r[12], c.r[25].w[0] >> 31);
    c.r[16].d[0] = c.r[14].sd[0] < c.r[24].sd[0] ? 1ull : 0ull;
    c.r[18].d[0] = c.lo.d[0];
    st8((c.r[15].w[0]), static_cast<std::uint8_t>(c.r[18].w[0]));
    mmi::mult(c, 0, c.r[13].w[0], c.r[25].w[0]);
    c.r[19].sd[0] = static_cast<std::int8_t>(ld8((c.r[15].w[0])));
    c.r[18].d[0] = c.hi.d[0];
    mmi::mult(c, 1, c.r[25].w[0], c.r[19].w[0]);
    c.r[19].d[0] = c.lo.d[1];
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[18].w[0]) >> 2));
    set32(c.r[4], c.r[4].w[0] - c.r[19].w[0]);
    set32(c.r[20], c.r[18].w[0] + c.r[12].w[0]);
    mmi::div(c, 0, c.r[4].w[0], c.r[20].w[0]);
    c.r[18].d[0] = c.lo.d[0];
    st8((c.r[15].w[0] + 1u), static_cast<std::uint8_t>(c.r[18].w[0]));
    mmi::mult(c, 0, c.r[11].w[0], c.r[25].w[0]);
    c.r[19].sd[0] = static_cast<std::int8_t>(ld8((c.r[15].w[0] + 1u)));
    c.r[18].d[0] = c.hi.d[0];
    mmi::mult(c, 1, c.r[20].w[0], c.r[19].w[0]);
    c.r[19].d[0] = c.lo.d[1];
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[18].w[0]) >> 5));
    set32(c.r[4], c.r[4].w[0] - c.r[19].w[0]);
    set32(c.r[20], c.r[18].w[0] + c.r[12].w[0]);
    mmi::div(c, 0, c.r[4].w[0], c.r[20].w[0]);
    c.r[18].d[0] = c.lo.d[0];
    st8((c.r[15].w[0] + 2u), static_cast<std::uint8_t>(c.r[18].w[0]));
    mmi::mult(c, 0, c.r[10].w[0], c.r[25].w[0]);
    c.r[19].sd[0] = static_cast<std::int8_t>(ld8((c.r[15].w[0] + 2u)));
    c.r[18].d[0] = c.hi.d[0];
    mmi::mult(c, 1, c.r[20].w[0], c.r[19].w[0]);
    c.r[19].d[0] = c.lo.d[1];
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[18].w[0]) >> 6));
    set32(c.r[4], c.r[4].w[0] - c.r[19].w[0]);
    set32(c.r[20], c.r[18].w[0] + c.r[12].w[0]);
    mmi::div(c, 0, c.r[4].w[0], c.r[20].w[0]);
    c.r[18].d[0] = c.lo.d[0];
    st8((c.r[15].w[0] + 3u), static_cast<std::uint8_t>(c.r[18].w[0]));
    mmi::mult(c, 0, c.r[9].w[0], c.r[25].w[0]);
    c.r[19].sd[0] = static_cast<std::int8_t>(ld8((c.r[15].w[0] + 3u)));
    c.r[18].d[0] = c.hi.d[0];
    mmi::mult(c, 1, c.r[20].w[0], c.r[19].w[0]);
    c.r[19].d[0] = c.lo.d[1];
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[18].w[0]) >> 12));
    set32(c.r[4], c.r[4].w[0] - c.r[19].w[0]);
    set32(c.r[20], c.r[18].w[0] + c.r[12].w[0]);
    mmi::div(c, 0, c.r[4].w[0], c.r[20].w[0]);
    c.r[18].d[0] = c.lo.d[0];
    st8((c.r[15].w[0] + 4u), static_cast<std::uint8_t>(c.r[18].w[0]));
    mmi::mult(c, 0, c.r[8].w[0], c.r[25].w[0]);
    c.r[19].sd[0] = static_cast<std::int8_t>(ld8((c.r[15].w[0] + 4u)));
    c.r[18].d[0] = c.hi.d[0];
    mmi::mult(c, 1, c.r[20].w[0], c.r[19].w[0]);
    c.r[19].d[0] = c.lo.d[1];
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[18].w[0]) >> 13));
    set32(c.r[4], c.r[4].w[0] - c.r[19].w[0]);
    set32(c.r[20], c.r[18].w[0] + c.r[12].w[0]);
    mmi::div(c, 0, c.r[4].w[0], c.r[20].w[0]);
    c.r[18].d[0] = c.lo.d[0];
    st8((c.r[15].w[0] + 5u), static_cast<std::uint8_t>(c.r[18].w[0]));
    mmi::mult(c, 0, c.r[7].w[0], c.r[25].w[0]);
    c.r[19].sd[0] = static_cast<std::int8_t>(ld8((c.r[15].w[0] + 5u)));
    c.r[18].d[0] = c.hi.d[0];
    mmi::mult(c, 1, c.r[20].w[0], c.r[19].w[0]);
    c.r[19].d[0] = c.lo.d[1];
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[18].w[0]) >> 18));
    set32(c.r[4], c.r[4].w[0] - c.r[19].w[0]);
    set32(c.r[20], c.r[18].w[0] + c.r[12].w[0]);
    mmi::div(c, 0, c.r[4].w[0], c.r[20].w[0]);
    c.r[18].d[0] = c.lo.d[0];
    st8((c.r[15].w[0] + 6u), static_cast<std::uint8_t>(c.r[18].w[0]));
    mmi::mult(c, 0, c.r[3].w[0], c.r[25].w[0]);
    c.r[19].sd[0] = static_cast<std::int8_t>(ld8((c.r[15].w[0] + 6u)));
    c.r[18].d[0] = c.hi.d[0];
    mmi::mult(c, 1, c.r[20].w[0], c.r[19].w[0]);
    c.r[19].d[0] = c.lo.d[1];
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[18].w[0]) >> 22));
    set32(c.r[4], c.r[4].w[0] - c.r[19].w[0]);
    set32(c.r[19], c.r[18].w[0] + c.r[12].w[0]);
    mmi::div(c, 0, c.r[4].w[0], c.r[19].w[0]);
    c.r[18].d[0] = c.lo.d[0];
    st8((c.r[15].w[0] + 7u), static_cast<std::uint8_t>(c.r[18].w[0]));
    mmi::mult(c, 0, c.r[17].w[0], c.r[25].w[0]);
    c.r[18].sd[0] = static_cast<std::int8_t>(ld8((c.r[15].w[0] + 7u)));
    c.r[15].d[0] = c.hi.d[0];
    mmi::mult(c, 1, c.r[19].w[0], c.r[18].w[0]);
    c.r[18].d[0] = c.lo.d[1];
    set32(c.r[4], c.r[4].w[0] - c.r[18].w[0]);
    set32(c.r[15], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[15].w[0]) >> 25));
    c.budget -= 107;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[25], c.r[15].w[0] + c.r[12].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FBB90u | kUnwind; return; } goto L_003FBB90; } }
    c.budget -= 1;
L_003FBD40:
    c.r[1].d[0] = c.r[14].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x66660000u);  if (t) { goto L_003FBD90; } }
    c.r[9].d[0] = c.r[3].d[0] | 26215ull;
    c.budget -= 1;
L_003FBD50:
    set32(c.r[10], c.r[6].w[0] + c.r[14].w[0]);
    mmi::div(c, 0, c.r[4].w[0], c.r[25].w[0]);
    set32(c.r[14], c.r[14].w[0] + 1u);
    set32(c.r[8], c.r[25].w[0] >> 31);
    c.r[3].d[0] = c.r[14].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.r[7].d[0] = c.lo.d[0];
    st8((c.r[10].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    mmi::mult(c, 0, c.r[9].w[0], c.r[25].w[0]);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0])));
    c.r[7].d[0] = c.hi.d[0];
    mmi::mult(c, 1, c.r[25].w[0], c.r[10].w[0]);
    c.r[10].d[0] = c.lo.d[1];
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 2));
    set32(c.r[25], c.r[7].w[0] + c.r[8].w[0]);
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] - c.r[10].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FBD50u | kUnwind; return; } goto L_003FBD50; } }
L_003FBD90:
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.r[1].d[0] = 0ll < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003FBDC8; } }
    set32(c.r[4], 0u - 1u);
    c.budget -= 2;
L_003FBDA8:
    set32(c.r[8], c.r[6].w[0] + c.r[7].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003FBDC8; } }
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FBDA8u | kUnwind; return; } goto L_003FBDA8; } }
L_003FBDC8:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003FBDF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBE20u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x003FBE20u) [[unlikely]] return; }
L_003FBE20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FBE70; } }
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[8], 0u + 19u);
    set32(c.r[7], 0u + 61u);
    set32(c.r[6], c.r[6].w[0] - 16752u);
    set32(c.r[3], c.r[3].w[0] - 15648u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] + 48u);
    set32(c.r[9], c.r[9].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[2].w[0] + 24u), c.r[17].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[6].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBE70u); st32((c.r[2].w[0] + 168u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x003FBE70u) [[unlikely]] return; }
L_003FBE70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003FBE90:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[2], c.r[2].w[0] - 29408u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003F8000u < 16384u) { entry = entries_00BE[(t - 0x003F8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003FBEB0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[7], 0u + 3u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[6], 0u + 20u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[18], c.r[19].w[0] + 304u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], 0u + 1u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[5], 0u + 4u);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    set32(c.r[2], 0u + 3276u);
    set32(c.r[18], c.r[18].w[0] + 16u);
    set32(c.r[16], 0u + 55u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[4].w[0] + 304u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[4].w[0] + 305u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st16((c.r[4].w[0] + 308u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 306u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 316u), c.r[3].w[0]);
    st16((c.r[4].w[0] + 310u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 312u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 314u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 28;
L_003FBF20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBF28u); st8((c.r[18].w[0]), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x003FBF28u) [[unlikely]] return; }
L_003FBF28:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], 0u + 3u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[18].w[0] + 4u), static_cast<std::uint16_t>(c.r[16].w[0]));
    st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBF58u); st32((c.r[18].w[0] + 12u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x003FBF58u) [[unlikely]] return; }
L_003FBF58:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] << 8);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBF68u); st16((c.r[18].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x003FBF68u) [[unlikely]] return; }
L_003FBF68:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], 0u + 6552u);
    st16((c.r[18].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBF80u); st16((c.r[18].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x003FBF80u) [[unlikely]] return; }
L_003FBF80:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003FBFA0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 10u)));
    set32(c.r[3], 0u - c.r[3].w[0]);
    st16((c.r[18].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_003FBFA0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 11ll ? 1ull : 0ull;
    set32(c.r[16], c.r[16].w[0] + 5u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FBF20u | kUnwind; return; } goto L_003FBF20; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[19].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003FBFE0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 34u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    [[clang::musttail]] return unit_00BF(c, 1u, depth);
}

}
