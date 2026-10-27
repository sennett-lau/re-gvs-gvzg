#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_005E[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0,
    28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0,
    0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 60, 0, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0,
    0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0,
    0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0,
    0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 0,
    93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0,
    102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 105, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0,
    0, 116, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0,
    0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 129, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0,
    0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    143, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    149, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0,
    153, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160,
    0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0,
    0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 191, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194,
    0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0,
    204, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0,
    0, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 220, 0, 221, 0, 222, 0, 223, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 0, 0, 228, 0, 229, 0, 230, 0, 0, 0, 0, 0, 231, 0, 232, 0, 233, 0, 234, 0,
    235, 0, 0, 0, 236, 0, 237, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 240, 0,
    0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    244, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 252, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 253, 0, 254, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 257, 0,
};

void unit_005E(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00278000;
    case 2u: goto L_00278010;
    case 3u: goto L_00278040;
    case 4u: goto L_00278090;
    case 5u: goto L_002780A0;
    case 6u: goto L_002780F0;
    case 7u: goto L_00278118;
    case 8u: goto L_00278160;
    case 9u: goto L_002781D0;
    case 10u: goto L_002781DC;
    case 11u: goto L_002781EC;
    case 12u: goto L_00278220;
    case 13u: goto L_00278260;
    case 14u: goto L_002783DC;
    case 15u: goto L_00278408;
    case 16u: goto L_00278454;
    case 17u: goto L_00278480;
    case 18u: goto L_0027849C;
    case 19u: goto L_002784C0;
    case 20u: goto L_00278620;
    case 21u: goto L_00278720;
    case 22u: goto L_00278930;
    case 23u: goto L_00278960;
    case 24u: goto L_00278990;
    case 25u: goto L_002789A8;
    case 26u: goto L_002789C8;
    case 27u: goto L_002789E8;
    case 28u: goto L_00278A00;
    case 29u: goto L_00278A68;
    case 30u: goto L_00278AA8;
    case 31u: goto L_00278AC0;
    case 32u: goto L_00278B20;
    case 33u: goto L_00278B50;
    case 34u: goto L_00278B70;
    case 35u: goto L_00278B90;
    case 36u: goto L_00278BB0;
    case 37u: goto L_00278BD0;
    case 38u: goto L_00278C68;
    case 39u: goto L_00278C78;
    case 40u: goto L_00278CAC;
    case 41u: goto L_00278CC0;
    case 42u: goto L_00278D34;
    case 43u: goto L_00278DDC;
    case 44u: goto L_00278E28;
    case 45u: goto L_00278E3C;
    case 46u: goto L_00278E50;
    case 47u: goto L_00278E80;
    case 48u: goto L_00278E98;
    case 49u: goto L_00278F30;
    case 50u: goto L_00278F60;
    case 51u: goto L_00278FB0;
    case 52u: goto L_00278FC8;
    case 53u: goto L_00278FD8;
    case 54u: goto L_00279010;
    case 55u: goto L_00279070;
    case 56u: goto L_00279130;
    case 57u: goto L_00279154;
    case 58u: goto L_00279168;
    case 59u: goto L_002791C0;
    case 60u: goto L_00279204;
    case 61u: goto L_00279210;
    case 62u: goto L_0027922C;
    case 63u: goto L_00279264;
    case 64u: goto L_00279288;
    case 65u: goto L_00279360;
    case 66u: goto L_00279370;
    case 67u: goto L_002793B0;
    case 68u: goto L_002793C8;
    case 69u: goto L_002793F0;
    case 70u: goto L_00279420;
    case 71u: goto L_00279440;
    case 72u: goto L_00279490;
    case 73u: goto L_002794D0;
    case 74u: goto L_00279508;
    case 75u: goto L_00279530;
    case 76u: goto L_00279598;
    case 77u: goto L_002795C0;
    case 78u: goto L_002795DC;
    case 79u: goto L_002795EC;
    case 80u: goto L_00279618;
    case 81u: goto L_00279648;
    case 82u: goto L_00279678;
    case 83u: goto L_00279694;
    case 84u: goto L_002796A8;
    case 85u: goto L_002796C4;
    case 86u: goto L_002796D4;
    case 87u: goto L_002796EC;
    case 88u: goto L_00279710;
    case 89u: goto L_00279728;
    case 90u: goto L_0027973C;
    case 91u: goto L_00279758;
    case 92u: goto L_00279768;
    case 93u: goto L_00279780;
    case 94u: goto L_002797B8;
    case 95u: goto L_002797C0;
    case 96u: goto L_00279830;
    case 97u: goto L_0027984C;
    case 98u: goto L_0027987C;
    case 99u: goto L_002798B0;
    case 100u: goto L_002798C8;
    case 101u: goto L_002798E4;
    case 102u: goto L_00279900;
    case 103u: goto L_00279940;
    case 104u: goto L_0027996C;
    case 105u: goto L_00279978;
    case 106u: goto L_002799D4;
    case 107u: goto L_00279A50;
    case 108u: goto L_00279A78;
    case 109u: goto L_00279AA0;
    case 110u: goto L_00279AB4;
    case 111u: goto L_00279AE0;
    case 112u: goto L_00279B10;
    case 113u: goto L_00279B34;
    case 114u: goto L_00279B40;
    case 115u: goto L_00279B60;
    case 116u: goto L_00279B84;
    case 117u: goto L_00279B90;
    case 118u: goto L_00279BB0;
    case 119u: goto L_00279BC0;
    case 120u: goto L_00279C70;
    case 121u: goto L_00279CF8;
    case 122u: goto L_00279D1C;
    case 123u: goto L_00279D28;
    case 124u: goto L_00279D5C;
    case 125u: goto L_00279D90;
    case 126u: goto L_00279DA8;
    case 127u: goto L_00279DB8;
    case 128u: goto L_00279DDC;
    case 129u: goto L_00279DE8;
    case 130u: goto L_00279F18;
    case 131u: goto L_0027A178;
    case 132u: goto L_0027A198;
    case 133u: goto L_0027A1B4;
    case 134u: goto L_0027A1E0;
    case 135u: goto L_0027A250;
    case 136u: goto L_0027A2F0;
    case 137u: goto L_0027A35C;
    case 138u: goto L_0027A408;
    case 139u: goto L_0027A43C;
    case 140u: goto L_0027A45C;
    case 141u: goto L_0027A4B8;
    case 142u: goto L_0027A510;
    case 143u: goto L_0027A580;
    case 144u: goto L_0027A5A0;
    case 145u: goto L_0027A5D4;
    case 146u: goto L_0027A5F4;
    case 147u: goto L_0027A650;
    case 148u: goto L_0027A6A0;
    case 149u: goto L_0027A700;
    case 150u: goto L_0027A720;
    case 151u: goto L_0027A748;
    case 152u: goto L_0027AA60;
    case 153u: goto L_0027AA80;
    case 154u: goto L_0027AA9C;
    case 155u: goto L_0027AAB8;
    case 156u: goto L_0027AB28;
    case 157u: goto L_0027ABC8;
    case 158u: goto L_0027AC30;
    case 159u: goto L_0027ACC8;
    case 160u: goto L_0027ACFC;
    case 161u: goto L_0027AD1C;
    case 162u: goto L_0027AD78;
    case 163u: goto L_0027ADD0;
    case 164u: goto L_0027AE40;
    case 165u: goto L_0027AE60;
    case 166u: goto L_0027AE94;
    case 167u: goto L_0027AEB4;
    case 168u: goto L_0027AF10;
    case 169u: goto L_0027AF60;
    case 170u: goto L_0027AFC0;
    case 171u: goto L_0027AFE0;
    case 172u: goto L_0027B014;
    case 173u: goto L_0027B034;
    case 174u: goto L_0027B098;
    case 175u: goto L_0027B100;
    case 176u: goto L_0027B168;
    case 177u: goto L_0027B188;
    case 178u: goto L_0027B220;
    case 179u: goto L_0027B260;
    case 180u: goto L_0027B2A4;
    case 181u: goto L_0027B2D8;
    case 182u: goto L_0027B338;
    case 183u: goto L_0027B398;
    case 184u: goto L_0027B4A8;
    case 185u: goto L_0027B4B8;
    case 186u: goto L_0027B4C0;
    case 187u: goto L_0027B518;
    case 188u: goto L_0027B548;
    case 189u: goto L_0027B568;
    case 190u: goto L_0027B5B0;
    case 191u: goto L_0027B604;
    case 192u: goto L_0027B610;
    case 193u: goto L_0027B620;
    case 194u: goto L_0027B67C;
    case 195u: goto L_0027B6A0;
    case 196u: goto L_0027B6C0;
    case 197u: goto L_0027B6D0;
    case 198u: goto L_0027B6E8;
    case 199u: goto L_0027B774;
    case 200u: goto L_0027B7AC;
    case 201u: goto L_0027B818;
    case 202u: goto L_0027B840;
    case 203u: goto L_0027B864;
    case 204u: goto L_0027B880;
    case 205u: goto L_0027B8A4;
    case 206u: goto L_0027B8C0;
    case 207u: goto L_0027B8D0;
    case 208u: goto L_0027B8EC;
    case 209u: goto L_0027B910;
    case 210u: goto L_0027B920;
    case 211u: goto L_0027B94C;
    case 212u: goto L_0027B968;
    case 213u: goto L_0027B9D8;
    case 214u: goto L_0027BA38;
    case 215u: goto L_0027BA68;
    case 216u: goto L_0027BA98;
    case 217u: goto L_0027BAC8;
    case 218u: goto L_0027BAF8;
    case 219u: goto L_0027BB40;
    case 220u: goto L_0027BB60;
    case 221u: goto L_0027BB68;
    case 222u: goto L_0027BB70;
    case 223u: goto L_0027BB78;
    case 224u: goto L_0027BBA8;
    case 225u: goto L_0027BBB0;
    case 226u: goto L_0027BC10;
    case 227u: goto L_0027BC20;
    case 228u: goto L_0027BC38;
    case 229u: goto L_0027BC40;
    case 230u: goto L_0027BC48;
    case 231u: goto L_0027BC60;
    case 232u: goto L_0027BC68;
    case 233u: goto L_0027BC70;
    case 234u: goto L_0027BC78;
    case 235u: goto L_0027BC80;
    case 236u: goto L_0027BC90;
    case 237u: goto L_0027BC98;
    case 238u: goto L_0027BCB8;
    case 239u: goto L_0027BCD8;
    case 240u: goto L_0027BCF8;
    case 241u: goto L_0027BD18;
    case 242u: goto L_0027BD38;
    case 243u: goto L_0027BD50;
    case 244u: goto L_0027BD80;
    case 245u: goto L_0027BD94;
    case 246u: goto L_0027BDC8;
    case 247u: goto L_0027BE1C;
    case 248u: goto L_0027BE34;
    case 249u: goto L_0027BEC8;
    case 250u: goto L_0027BED0;
    case 251u: goto L_0027BF58;
    case 252u: goto L_0027BF70;
    case 253u: goto L_0027BF98;
    case 254u: goto L_0027BFA0;
    case 255u: goto L_0027BFB8;
    case 256u: goto L_0027BFE0;
    case 257u: goto L_0027BFF8;
    default: bad_entry(c, 0x00278000u); return;
    }
L_00278000:
    st16((c.r[18].w[0] + 8u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002780D0; } }
    c.budget -= 1;
L_00278010:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 2u));
    set32(c.r[2], 0u + 255u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));  if (t) { goto L_00278030; } }
    set32(c.r[3], c.r[17].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00278048; } }
L_00278030:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278040u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005D(c, 348u, depth + 1u); else { c.pc = 0x00277F40u; return; } if (c.pc != 0x00278040u) [[unlikely]] return; }
L_00278040:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_002780C8; } }
L_00278048:
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00910000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 17192u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00278088; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23632u)));
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00278088; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002780D0; } }
    c.budget -= 1;
L_00278088:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_002780C8; } }
L_00278090:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002780A0u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005D(c, 348u, depth + 1u); else { c.pc = 0x00277F40u; return; } if (c.pc != 0x002780A0u) [[unlikely]] return; }
L_002780A0:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[19].d[0] & 65535ull;
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002780B8; } }
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_002780B8:
    set32(c.r[16], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00278090u | kUnwind; return; } goto L_00278090; } }
    c.budget -= 1;
L_002780C8:
    st16((c.r[18].w[0] + 8u), static_cast<std::uint16_t>(c.r[19].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002780D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002780F0:
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[3].w[0] - c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00910000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 17200u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[7], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 9;
    { const bool t = c.r[7].d[0] == 0ull; set32(c.r[3], 0u + 10u);  if (t) { goto L_00278158; } }
    set32(c.r[5], 0u + 25u);
    c.budget -= 1;
L_00278118:
    st16((c.r[7].w[0] + 10u), static_cast<std::uint16_t>(0u));
    set32(c.r[6], ld32((c.r[7].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00278148; } }
    c.r[4].d[0] = ld8((c.r[6].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_00278148; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00278148; } }
    st16((c.r[7].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00278148:
    set32(c.r[7], ld32((c.r[7].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00278118u | kUnwind; return; } goto L_00278118; } }
    c.budget -= 1;
L_00278158:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00278160:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 255u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = ld8((c.r[4].w[0] + 2u));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00278198; } }
    set32(c.r[4], c.r[5].w[0] + c.r[7].w[0]);
    c.r[3].d[0] = c.r[4].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002781A0; } }
L_00278198:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00278208; } }
L_002781A0:
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[3].w[0] - c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00910000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 17192u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[17], ld32((c.r[3].w[0])));
    c.budget -= 9;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_00278200; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00278208; } }
    c.budget -= 1;
L_002781D0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002781DCu); st16((c.r[17].w[0] + 10u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_005E(c, 12u, depth + 1u); else { c.pc = 0x00278220u; return; } if (c.pc != 0x002781DCu) [[unlikely]] return; }
L_002781DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002781F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002781ECu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 13u, depth + 1u); else { c.pc = 0x00278260u; return; } if (c.pc != 0x002781ECu) [[unlikely]] return; }
L_002781EC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002781F8; } }
    st16((c.r[17].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_002781F8:
    set32(c.r[17], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 2;
L_00278200:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002781D0u | kUnwind; return; } goto L_002781D0; } }
L_00278208:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00278220:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00278250; } }
    c.r[3].d[0] = ld8((c.r[2].w[0] + 2u));
    set32(c.r[2], 0u + 40u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00278248; } }
    set32(c.r[2], 0u + 41u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00278250; } }
L_00278248:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00278258; } }
L_00278250:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00278258:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00278260:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[8].d[0] = ld8((c.r[4].w[0] + 2u));
    c.r[6].d[0] = c.r[8].sd[0] < 45ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[6].d[0] != 0ull; c.r[3].d[0] = 0ull & 255ull;  if (t) { goto L_00278298; } }
    c.r[6].d[0] = c.r[8].d[0] & 255ull;
    c.r[1].d[0] = c.r[6].sd[0] < 57ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00278298; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[4].w[0] + 3u));  if (t) { goto L_002782A0; } }
L_00278298:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 3u));
    c.budget -= 2;
L_002782A0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002782B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00278330; } }
L_002782B0:
    set32(c.r[11], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[11].d[0] != 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002782C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00278330; } }
    c.budget -= 1;
L_002782C8:
    c.r[6].d[0] = ld8((c.r[11].w[0] + 2u));
    set32(c.r[9], 0u + 40u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[9].d[0];  if (t) { goto L_002782E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002784B0; } }
L_002782E0:
    c.r[10].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[9], 0u + 41u);
    c.budget -= 4;
    { const bool t = c.r[10].d[0] == c.r[9].d[0]; set32(c.r[9], 0u + 25u);  if (t) { goto L_00278328; } }
    c.budget -= 2;
    { const bool t = c.r[10].d[0] != c.r[9].d[0];  if (t) { goto L_00278308; } }
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[11].w[0])));
    c.budget -= 3;
    { const bool t = c.r[9].sd[0] > 0;  if (t) { goto L_00278328; } }
    c.budget -= 1;
L_00278308:
    set32(c.r[9], 0u + 31u);
    c.budget -= 3;
    { const bool t = c.r[10].d[0] != c.r[9].d[0];  if (t) { goto L_00278330; } }
    c.r[10].d[0] = ld64((c.r[11].w[0] + 8u));
    set32(c.r[9], 0u - 1u);
    mmi::pcpyld(c.r[9], c.r[0], c.r[9]);
    c.budget -= 5;
    { const bool t = c.r[10].d[0] != c.r[9].d[0];  if (t) { goto L_00278330; } }
L_00278328:
    set32(c.r[7], c.r[7].w[0] + 20u);
    c.budget -= 2;
L_00278330:
    set32(c.r[10], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[10].d[0] == 0ull;  if (t) { goto L_002783B8; } }
    c.r[11].d[0] = ld8((c.r[10].w[0] + 2u));
    set32(c.r[9], 0u + 25u);
    c.budget -= 4;
    { const bool t = c.r[11].d[0] != c.r[9].d[0];  if (t) { goto L_00278360; } }
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[10].w[0])));
    c.budget -= 3;
    { const bool t = c.r[9].d[0] != 0ull;  if (t) { goto L_00278360; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 10u);  if (t) { goto L_002783B8; } }
L_00278360:
    set32(c.r[9], 0u + 27u);
    c.budget -= 3;
    { const bool t = c.r[11].d[0] == c.r[9].d[0]; set32(c.r[9], 0u + 28u);  if (t) { goto L_00278378; } }
    c.budget -= 2;
    { const bool t = c.r[11].d[0] != c.r[9].d[0];  if (t) { goto L_00278380; } }
    c.budget -= 1;
L_00278378:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 3u);  if (t) { goto L_002783B8; } }
L_00278380:
    set32(c.r[9], 0u + 26u);
    c.budget -= 3;
    { const bool t = c.r[11].d[0] != c.r[9].d[0];  if (t) { goto L_00278398; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 2u);  if (t) { goto L_002783B8; } }
    c.budget -= 1;
L_00278398:
    c.r[1].d[0] = c.r[11].sd[0] < 26ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[9].d[0] = c.r[11].sd[0] < 31ll ? 1ull : 0ull;  if (t) { goto L_002783B0; } }
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != 0ull;  if (t) { goto L_002783B8; } }
    c.budget -= 1;
L_002783B0:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 2;
L_002783B8:
    c.r[9].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[9].d[0] != 0ull; c.r[10].d[0] = c.r[8].d[0] & 255ull;  if (t) { goto L_002783D0; } }
    set32(c.r[9], 0u + 13u);
    c.budget -= 3;
    { const bool t = c.r[10].d[0] != c.r[9].d[0];  if (t) { goto L_002783E8; } }
L_002783D0:
    c.r[4].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002783DCu); c.r[5].d[0] = c.r[3].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 19u, depth + 1u); else { c.pc = 0x002784C0u; return; } if (c.pc != 0x002783DCu) [[unlikely]] return; }
L_002783DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002784B0; } }
    c.budget -= 1;
L_002783E8:
    set32(c.r[9], 0u + 45u);
    c.budget -= 3;
    { const bool t = c.r[10].d[0] != c.r[9].d[0];  if (t) { goto L_00278410; } }
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 255u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278408u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005E(c, 22u, depth + 1u); else { c.pc = 0x00278930u; return; } if (c.pc != 0x00278408u) [[unlikely]] return; }
L_00278408:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002784B0; } }
L_00278410:
    c.r[9].d[0] = c.r[6].d[0] & 255ull;
    c.r[2].d[0] = c.r[9].sd[0] < 50ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[9].sd[0] < 57ll ? 1ull : 0ull;  if (t) { goto L_00278460; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00278460; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027843C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[2].w[0] + 3u));  if (t) { goto L_00278440; } }
L_0027843C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00278440:
    c.r[5].d[0] = c.r[8].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278454u); set32(c.r[8], 0u + 2u);  if (depth < kMaxDepth) unit_005E(c, 22u, depth + 1u); else { c.pc = 0x00278930u; return; } if (c.pc != 0x00278454u) [[unlikely]] return; }
L_00278454:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002784B0; } }
    c.budget -= 1;
L_00278460:
    c.r[2].d[0] = c.r[10].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[10].sd[0] < 192ll ? 1ull : 0ull;  if (t) { goto L_00278488; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00278488; } }
    c.r[4].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278480u); c.r[6].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 20u, depth + 1u); else { c.pc = 0x00278620u; return; } if (c.pc != 0x00278480u) [[unlikely]] return; }
L_00278480:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002784B0; } }
L_00278488:
    c.r[2].d[0] = c.r[10].sd[0] < 192ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_002784A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027849Cu);  if (depth < kMaxDepth) unit_005E(c, 21u, depth + 1u); else { c.pc = 0x00278720u; return; } if (c.pc != 0x0027849Cu) [[unlikely]] return; }
L_0027849C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002784B0; } }
    c.budget -= 1;
L_002784A8:
    c.r[2].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 2;
L_002784B0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002784C0:
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[2], 0u + 13u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[5].d[0] & 255ull;  if (t) { goto L_002784F8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002784F8; } }
    c.r[2].d[0] = c.r[6].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[1].d[0] = c.r[2].sd[0] < 24ll ? 1ull : 0ull;  if (t) { goto L_00278608; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[7].w[0] + 3u);  if (t) { goto L_00278608; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00278610; } }
    c.budget -= 1;
L_002784F8:
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 7ll ? 1ull : 0ull;  if (t) { goto L_00278560; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = c.r[6].d[0] & 255ull;  if (t) { goto L_00278560; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[1].d[0] = c.r[2].sd[0] < 24ll ? 1ull : 0ull;  if (t) { goto L_00278560; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 141u);  if (t) { goto L_00278560; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00278540; } }
    set32(c.r[2], 0u + 142u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 6u);  if (t) { goto L_00278548; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00278548; } }
    c.budget -= 1;
L_00278540:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[7].w[0] + 10u);  if (t) { goto L_00278610; } }
L_00278548:
    c.r[1].d[0] = c.r[4].sd[0] < 141ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[7].w[0] + 3u);  if (t) { goto L_00278608; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00278610; } }
    c.budget -= 1;
L_00278560:
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00278608; } }
    c.r[3].d[0] = c.r[6].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 25ll ? 1ull : 0ull;  if (t) { goto L_00278608; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = c.r[4].sd[0] < 128ll ? 1ull : 0ull;  if (t) { goto L_00278608; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[4].sd[0] < 143ll ? 1ull : 0ull;  if (t) { goto L_00278598; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002785F8; } }
    c.budget -= 1;
L_00278598:
    set32(c.r[2], 0u + 146u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 148u);  if (t) { goto L_002785F8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002785F8; } }
    set32(c.r[2], 0u + 160u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 162u);  if (t) { goto L_002785F8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002785F8; } }
    set32(c.r[2], c.r[4].w[0] - 174u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 177u);  if (t) { goto L_002785F8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002785F8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[4].sd[0] < 10ll ? 1ull : 0ull;  if (t) { goto L_002785F8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[4].sd[0] < 13ll ? 1ull : 0ull;  if (t) { goto L_00278600; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00278600; } }
    c.budget -= 1;
L_002785F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[7].w[0] + 15u);  if (t) { goto L_00278610; } }
L_00278600:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[7].w[0] + 3u);  if (t) { goto L_00278610; } }
L_00278608:
    c.r[2].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 2;
L_00278610:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00278620:
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.r[2].d[0] = c.r[4].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[4].sd[0] < 25ll ? 1ull : 0ull;  if (t) { goto L_00278660; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = c.r[5].d[0] & 255ull;  if (t) { goto L_00278660; } }
    c.r[2].d[0] = c.r[3].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 25ll ? 1ull : 0ull;  if (t) { goto L_00278658; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[6].w[0] + 3u);  if (t) { goto L_00278658; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00278710; } }
    c.budget -= 1;
L_00278658:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00278710; } }
L_00278660:
    set32(c.r[3], 0u + 31u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[2].d[0] = c.r[5].d[0] & 255ull;  if (t) { goto L_00278680; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00278680; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[6].w[0] + 15u);  if (t) { goto L_00278710; } }
    c.budget -= 1;
L_00278680:
    set32(c.r[2], 0u + 33u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 38u);  if (t) { goto L_002786A0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002786A0; } }
    set32(c.r[2], 0u + 39u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002786A8; } }
L_002786A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[6].w[0] + 20u);  if (t) { goto L_00278710; } }
L_002786A8:
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 34u);  if (t) { goto L_002786C0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002786C8; } }
    c.budget -= 1;
L_002786C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[6].w[0] + 15u);  if (t) { goto L_00278710; } }
L_002786C8:
    set32(c.r[2], 0u + 27u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[3].d[0] = c.r[5].d[0] & 255ull;  if (t) { goto L_002786E8; } }
    set32(c.r[2], 0u + 28u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[6].w[0] + 20u);  if (t) { goto L_002786E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00278710; } }
L_002786E8:
    set32(c.r[3], 0u + 26u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[2].d[0] = c.r[5].d[0] & 255ull;  if (t) { goto L_00278708; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00278708; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[6].w[0] + 5u);  if (t) { goto L_00278710; } }
    c.budget -= 1;
L_00278708:
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 2;
L_00278710:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00278720:
    set32(c.r[9], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[9].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_00278770; } }
    c.r[3].d[0] = ld8((c.r[9].w[0] + 2u));
    c.r[2].d[0] = c.r[3].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 26ll ? 1ull : 0ull;  if (t) { goto L_00278748; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00278758; } }
    c.budget -= 1;
L_00278748:
    set32(c.r[2], 0u + 50u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00278770; } }
    c.budget -= 1;
L_00278758:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0])));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[8], c.r[8].w[0] + 1u);  if (t) { goto L_00278770; } }
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_00278770:
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[2], 0u + 199u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[6].d[0] & 255ull;  if (t) { goto L_002787B0; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00278798; } }
    c.r[1].d[0] = c.r[2].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00278798; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00278798:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[7].w[0] + 25u);  if (t) { goto L_002787A4; } }
    set32(c.r[2], c.r[7].w[0] + 30u);
    c.budget -= 1;
L_002787A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00278920; } }
    c.budget -= 1;
L_002787B0:
    set32(c.r[2], 0u + 200u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[6].d[0] & 255ull;  if (t) { goto L_002787E8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002787D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00278920; } }
    c.budget -= 1;
L_002787D0:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[7].w[0] + 5u);  if (t) { goto L_002787E0; } }
    set32(c.r[2], c.r[7].w[0] + 20u);
    c.budget -= 1;
L_002787E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00278920; } }
L_002787E8:
    set32(c.r[2], 0u + 193u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 225u);  if (t) { goto L_00278800; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00278818; } }
    c.budget -= 1;
L_00278800:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != c.r[2].d[0];  if (t) { goto L_00278810; } }
    set32(c.r[7], c.r[7].w[0] + 5u);
    c.budget -= 1;
L_00278810:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00278920; } }
L_00278818:
    set32(c.r[2], c.r[3].w[0] - 196u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[2].d[0] = c.r[3].sd[0] < 206ll ? 1ull : 0ull;  if (t) { goto L_00278838; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 210ll ? 1ull : 0ull;  if (t) { goto L_00278878; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00278878; } }
L_00278838:
    c.r[3].d[0] = c.r[6].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; c.r[1].d[0] = c.r[3].sd[0] < 14ll ? 1ull : 0ull;  if (t) { goto L_00278850; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00278868; } }
    c.budget -= 1;
L_00278850:
    c.r[2].d[0] = c.r[3].sd[0] < 22ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 24ll ? 1ull : 0ull;  if (t) { goto L_00278870; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00278870; } }
    c.budget -= 1;
L_00278868:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[7].w[0] + 5u);  if (t) { goto L_00278920; } }
L_00278870:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00278920; } }
L_00278878:
    set32(c.r[2], 0u + 194u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[6].d[0] & 255ull;  if (t) { goto L_002788B0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00278898; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00278920; } }
    c.budget -= 1;
L_00278898:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != c.r[2].d[0];  if (t) { goto L_002788A8; } }
    set32(c.r[7], c.r[7].w[0] + 3u);
    c.budget -= 1;
L_002788A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00278920; } }
L_002788B0:
    c.r[2].d[0] = c.r[3].sd[0] < 252ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 254ll ? 1ull : 0ull;  if (t) { goto L_002788E0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = c.r[6].d[0] & 255ull;  if (t) { goto L_002788E0; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[1].d[0] = c.r[2].sd[0] < 24ll ? 1ull : 0ull;  if (t) { goto L_002788E0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[7].w[0] + 18u);  if (t) { goto L_002788E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00278920; } }
    c.budget -= 1;
L_002788E0:
    set32(c.r[2], 0u + 250u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 254u);  if (t) { goto L_002788F8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00278918; } }
    c.budget -= 1;
L_002788F8:
    c.r[3].d[0] = c.r[6].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 25ll ? 1ull : 0ull;  if (t) { goto L_00278918; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[7].w[0] + 18u);  if (t) { goto L_00278918; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00278920; } }
L_00278918:
    c.r[2].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 2;
L_00278920:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00278930:
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00278AF0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 18896u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00278000u < 16384u) { entry = entries_005E[(t - 0x00278000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00278960:
    c.r[4].d[0] = c.r[5].d[0] & 255ull;
    c.r[3].d[0] = c.r[4].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[4].sd[0] < 26ll ? 1ull : 0ull;  if (t) { goto L_00278978; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00278988; } }
L_00278978:
    set32(c.r[3], 0u + 50u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00278AF0; } }
    c.budget -= 1;
L_00278988:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 15u);  if (t) { goto L_00278AF0; } }
L_00278990:
    c.r[4].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[3], 0u + 26u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00278AF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 15u);  if (t) { goto L_00278AF0; } }
L_002789A8:
    c.r[4].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[3], 0u + 27u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 28u);  if (t) { goto L_002789C0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00278AF0; } }
L_002789C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 20u);  if (t) { goto L_00278AF0; } }
L_002789C8:
    c.r[4].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[3], 0u + 31u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 56u);  if (t) { goto L_002789E0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00278AF0; } }
L_002789E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 20u);  if (t) { goto L_00278AF0; } }
L_002789E8:
    c.r[4].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[3], 0u + 22u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00278AF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 20u);  if (t) { goto L_00278AF0; } }
L_00278A00:
    c.r[4].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[3], 0u + 255u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[3].d[0] = c.r[5].d[0] & 255ull;  if (t) { goto L_00278A28; } }
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] <= 0; c.r[1].d[0] = c.r[3].sd[0] < 14ll ? 1ull : 0ull;  if (t) { goto L_00278AF0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00278AF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 15u);  if (t) { goto L_00278AF0; } }
L_00278A28:
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.r[3].d[0] = c.r[5].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[5].sd[0] < 140ll ? 1ull : 0ull;  if (t) { goto L_00278A48; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 4u);  if (t) { goto L_00278A48; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00278A60; } }
L_00278A48:
    set32(c.r[3], 0u + 13u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00278AF0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00278AF0; } }
    c.budget -= 1;
L_00278A60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 15u);  if (t) { goto L_00278AF0; } }
L_00278A68:
    c.r[4].d[0] = c.r[5].d[0] & 255ull;
    c.r[3].d[0] = c.r[4].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[4].sd[0] < 26ll ? 1ull : 0ull;  if (t) { goto L_00278A88; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00278A88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 15u);  if (t) { goto L_00278AF0; } }
L_00278A88:
    set32(c.r[3], 0u + 31u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 56u);  if (t) { goto L_00278AA0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00278AF0; } }
    c.budget -= 1;
L_00278AA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 20u);  if (t) { goto L_00278AF0; } }
L_00278AA8:
    c.r[4].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[3], 0u + 29u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00278AF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 15u);  if (t) { goto L_00278AF0; } }
L_00278AC0:
    c.r[4].d[0] = c.r[5].d[0] & 255ull;
    c.r[3].d[0] = c.r[4].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[4].sd[0] < 26ll ? 1ull : 0ull;  if (t) { goto L_00278AD8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00278AE8; } }
L_00278AD8:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] <= 0; c.r[1].d[0] = c.r[4].sd[0] < 14ll ? 1ull : 0ull;  if (t) { goto L_00278AF0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00278AF0; } }
L_00278AE8:
    set32(c.r[2], 0u + 20u);
    c.budget -= 2;
L_00278AF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00278B00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00278B0C; } }
L_00278B00:
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[7], c.r[8].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 3;
L_00278B0C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00278B20:
    c.r[2].d[0] = c.r[5].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00278B38; } }
    set32(c.r[2], c.r[2].w[0] + 1000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_00278B3C; } }
L_00278B38:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 8u));
    c.budget -= 1;
L_00278B3C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00278B50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] - 23040u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] & 192ull;  c.pc = t; return; }
L_00278B70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] - 23040u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] & 128ull;  c.pc = t; return; }
L_00278B90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] - 23040u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] & 64ull;  c.pc = t; return; }
L_00278BB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] - 23040u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] & 32ull;  c.pc = t; return; }
L_00278BD0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 23040u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[21], 0u + 1u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.r[20].d[0] = c.r[2].d[0] & 15ull;
    c.r[1].d[0] = c.r[20].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 23;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[7].w[0]), c.r[21].w[0]);  if (t) { goto L_00278C88; } }
    c.r[1].d[0] = c.r[20].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].sd[0] = static_cast<std::int32_t>(0x00550000u);  if (t) { goto L_00278C48; } }
    c.r[22].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] - 22783u);  if (t) { goto L_00278E60; } }
    c.budget -= 1;
L_00278C48:
    c.r[1].d[0] = c.r[20].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00278C60; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30344u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00278C70; } }
L_00278C60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278C68u); c.r[4].d[0] = ld16((c.r[19].w[0]));  if (depth < kMaxDepth) unit_005B(c, 274u, depth + 1u); else { c.pc = 0x0026F040u; return; } if (c.pc != 0x00278C68u) [[unlikely]] return; }
L_00278C68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00278C80; } }
L_00278C70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278C78u); c.r[4].d[0] = ld16((c.r[19].w[0]));  if (depth < kMaxDepth) unit_005B(c, 275u, depth + 1u); else { c.pc = 0x0026F090u; return; } if (c.pc != 0x00278C78u) [[unlikely]] return; }
L_00278C78:
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00278C80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00278F08; } }
L_00278C88:
    c.r[1].d[0] = c.r[20].sd[0] < 13ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00278CE0; } }
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { goto L_00278CB8; } }
    c.r[5].d[0] = ld16((c.r[19].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278CACu); set32(c.r[4], 0u + 115u);  if (depth < kMaxDepth) unit_005B(c, 277u, depth + 1u); else { c.pc = 0x0026F120u; return; } if (c.pc != 0x00278CACu) [[unlikely]] return; }
L_00278CAC:
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00278CE0; } }
L_00278CB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278CC0u); c.r[4].d[0] = ld16((c.r[19].w[0]));  if (depth < kMaxDepth) unit_005B(c, 274u, depth + 1u); else { c.pc = 0x0026F040u; return; } if (c.pc != 0x00278CC0u) [[unlikely]] return; }
L_00278CC0:
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2ll);  if (t) { goto L_00278CD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00278CE0; } }
L_00278CD8:
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(3ll);
    c.budget -= 2;
L_00278CE0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_00278CF8; } }
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - c.r[2].w[0]);  if (t) { goto L_00278F08; } }
L_00278CF8:
    c.r[5].d[0] = ld16((c.r[19].w[0] + 2u));
    c.r[2].d[0] = ld8((c.r[19].w[0]));
    c.r[4].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; set32(c.r[22], c.r[19].w[0] + 2u);  if (t) { goto L_00278D40; } }
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_00278D20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00278F08; } }
L_00278D20:
    c.r[2].d[0] = c.r[20].sd[0] < 13ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00278D40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278D34u); set32(c.r[4], 0u + 67u);  if (depth < kMaxDepth) unit_005B(c, 277u, depth + 1u); else { c.pc = 0x0026F120u; return; } if (c.pc != 0x00278D34u) [[unlikely]] return; }
L_00278D34:
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00278F08; } }
L_00278D40:
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 39u);  if (t) { goto L_00278D60; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00278D60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_00278F08; } }
L_00278D60:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] - 23040u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], 0u + 7u);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.r[20].d[0] = c.r[3].d[0] & 15ull;
    c.budget -= 9;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_00278DA0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_00278DA0; } }
    c.r[3].d[0] = ld16((c.r[17].w[0]));
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], c.r[3].w[0] + 2u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00278F08; } }
L_00278DA0:
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_00278DE8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00278DE8; } }
    c.r[3].d[0] = ld16((c.r[17].w[0]));
    set32(c.r[2], 0u + 179u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[19].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00278DE0; } }
    c.r[5].d[0] = ld16((c.r[22].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278DDCu); set32(c.r[4], 0u + 116u);  if (depth < kMaxDepth) unit_005B(c, 277u, depth + 1u); else { c.pc = 0x0026F120u; return; } if (c.pc != 0x00278DDCu) [[unlikely]] return; }
L_00278DDC:
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00278DE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_00278F08; } }
L_00278DE8:
    c.r[1].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[20].sd[0] < 6ll ? 1ull : 0ull;  if (t) { goto L_00278E10; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00278E18; } }
    c.r[1].d[0] = c.r[20].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00278E18; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_00278E18; } }
L_00278E10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00278F08; } }
L_00278E18:
    set32(c.r[21], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 23040u);
    c.budget -= 4;
L_00278E28:
    c.r[1].d[0] = c.r[20].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00278EB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278E3Cu); set32(c.r[5], c.r[22].w[0] + 2u);  if (depth < kMaxDepth) unit_005E(c, 50u, depth + 1u); else { c.pc = 0x00278F60u; return; } if (c.pc != 0x00278E3Cu) [[unlikely]] return; }
L_00278E3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00278E70; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278E50u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 55u, depth + 1u); else { c.pc = 0x00279070u; return; } if (c.pc != 0x00278E50u) [[unlikely]] return; }
L_00278E50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00278E60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_00278F08; } }
L_00278E60:
    set32(c.r[2], c.r[20].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[18], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00278E70:
    c.r[4].d[0] = ld8((c.r[18].w[0]));
    c.r[5].d[0] = ld16((c.r[22].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278E80u); set32(c.r[18], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_005B(c, 277u, depth + 1u); else { c.pc = 0x0026F120u; return; } if (c.pc != 0x00278E80u) [[unlikely]] return; }
L_00278E80:
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].d[0] = ld8((c.r[18].w[0]));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00278EA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278E98u); c.r[5].d[0] = ld16((c.r[22].w[0]));  if (depth < kMaxDepth) unit_005B(c, 277u, depth + 1u); else { c.pc = 0x0026F120u; return; } if (c.pc != 0x00278E98u) [[unlikely]] return; }
L_00278E98:
    st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_00278EA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_00278F08; } }
L_00278EB0:
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    c.r[1].d[0] = c.r[2].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[21], c.r[21].w[0] + 1u);  if (t) { goto L_00278F00; } }
    set32(c.r[22], c.r[22].w[0] + 2u);
    c.r[2].d[0] = ld8((c.r[22].w[0]));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.r[20].d[0] = c.r[2].d[0] & 15ull;
    c.r[2].d[0] = c.r[20].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[20].sd[0] < 13ll ? 1ull : 0ull;  if (t) { goto L_00278EE8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00278EF8; } }
L_00278EE8:
    c.r[1].d[0] = c.r[21].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00278E28u | kUnwind; return; } goto L_00278E28; } }
    c.budget -= 1;
L_00278EF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_00278F08; } }
L_00278F00:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00278F08:
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
L_00278F30:
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].sd[0] < 97ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 123ll ? 1ull : 0ull;  if (t) { goto L_00278F50; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] - 32u);  if (t) { goto L_00278F50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_00278F58; } }
L_00278F50:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 2;
L_00278F58:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00278F60:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[5].w[0] - c.r[18].w[0]);
    c.budget -= 12;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_00278F98; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_00278F98:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 22144u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], c.r[17].w[0] - 22144u);  if (t) { goto L_00279038; } }
    c.budget -= 1;
L_00278FB0:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_00279008; } }
    c.r[21].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] <= 0; c.r[20].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00278FF0; } }
L_00278FC8:
    c.r[4].d[0] = ld8((c.r[21].w[0]));
    c.r[19].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278FD8u); set32(c.r[21], c.r[21].w[0] + 2u);  if (depth < kMaxDepth) unit_005E(c, 49u, depth + 1u); else { c.pc = 0x00278F30u; return; } if (c.pc != 0x00278FD8u) [[unlikely]] return; }
L_00278FD8:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_00278FF0; } }
    set32(c.r[20], c.r[20].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[20].sd[0] > 0; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00278FC8u | kUnwind; return; } goto L_00278FC8; } }
L_00278FF0:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00279000; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00279040; } }
L_00279000:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + c.r[20].w[0]);  if (t) { goto L_00279010; } }
L_00279008:
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_00279010:
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00279010u | kUnwind; return; } goto L_00279010; } }
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00278FB0u | kUnwind; return; } goto L_00278FB0; } }
L_00279038:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00279040:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00279070:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], c.r[5].w[0] - c.r[4].w[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] >= 0; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00279094; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_00279094:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);  if (t) { goto L_002790A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 22783u);  if (t) { goto L_002791A0; } }
    c.budget -= 1;
L_002790A8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_002790C0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_00279190; } }
    c.budget -= 1;
L_002790C0:
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.r[2].d[0] = c.r[3].sd[0] < 97ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 123ll ? 1ull : 0ull;  if (t) { goto L_002790E0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002790E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - 97u);  if (t) { goto L_00279108; } }
L_002790E0:
    c.r[2].d[0] = c.r[3].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 91ll ? 1ull : 0ull;  if (t) { goto L_00279100; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00279100; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - 65u);  if (t) { goto L_00279108; } }
    c.budget -= 1;
L_00279100:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002791A0; } }
L_00279108:
    set32(c.r[5], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] - 22256u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; set32(c.r[17], ld32((c.r[3].w[0])));  if (t) { goto L_00279198; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[17].w[0] + 1u);  if (t) { goto L_002791A0; } }
    c.budget -= 1;
L_00279130:
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00279130u | kUnwind; return; } goto L_00279130; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279154u); c.r[4].d[0] = ld8((c.r[4].w[0] + 2u));  if (depth < kMaxDepth) unit_005E(c, 49u, depth + 1u); else { c.pc = 0x00278F30u; return; } if (c.pc != 0x00279154u) [[unlikely]] return; }
L_00279154:
    set32(c.r[17], c.r[17].w[0] + 11u);
    c.r[1].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_00279190; } }
    c.budget -= 1;
L_00279168:
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[2], c.r[17].w[0] + 1u);  if (t) { goto L_00279180; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002791A0; } }
    c.budget -= 1;
L_00279180:
    set32(c.r[17], c.r[17].w[0] + 11u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00279168u | kUnwind; return; } goto L_00279168; } }
L_00279190:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002791A0; } }
L_00279198:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00279130u | kUnwind; return; } goto L_00279130; } }
L_002791A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002791C0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00920000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[4], c.r[4].w[0] - 6960u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[20], ld32((c.r[28].w[0] - 23580u)));
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[19], ld32((c.r[28].w[0] - 23592u)));
    set32(c.r[18], ld32((c.r[28].w[0] - 23588u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279204u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 65u, depth + 1u); else { c.pc = 0x00279360u; return; } if (c.pc != 0x00279204u) [[unlikely]] return; }
L_00279204:
    c.r[4].d[0] = ld8((c.r[21].w[0]));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00279320; } }
L_00279210:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[3].d[0] = c.r[16].d[0] & 65535ull;  if (t) { goto L_00279280; } }
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027922Cu); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_005D(c, 310u, depth + 1u); else { c.pc = 0x00277880u; return; } if (c.pc != 0x0027922Cu) [[unlikely]] return; }
L_0027922C:
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[1].d[0] = c.r[18].sd[0] < 36ll ? 1ull : 0ull;  if (t) { goto L_00279278; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = c.r[17].sd[0] < 78ll ? 1ull : 0ull;  if (t) { goto L_00279248; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00279250; } }
L_00279248:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00279338; } }
L_00279250:
    st16((c.r[20].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[2], 0u + 2u);
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279264u); set32(c.r[20], c.r[20].w[0] + 8u);  if (depth < kMaxDepth) unit_005D(c, 300u, depth + 1u); else { c.pc = 0x00277620u; return; } if (c.pc != 0x00279264u) [[unlikely]] return; }
L_00279264:
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 2u);
    c.budget -= 5;
L_00279278:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00279310; } }
L_00279280:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279288u);  if (depth < kMaxDepth) unit_005D(c, 286u, depth + 1u); else { c.pc = 0x002772C0u; return; } if (c.pc != 0x00279288u) [[unlikely]] return; }
L_00279288:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00279298; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld8((c.r[21].w[0]));  if (t) { goto L_00279310; } }
L_00279298:
    c.r[3].d[0] = ld8((c.r[21].w[0]));
    c.r[2].d[0] = c.r[3].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].sd[0] < 127ll ? 1ull : 0ull;  if (t) { goto L_002792B0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002792C8; } }
L_002792B0:
    c.r[2].d[0] = c.r[3].sd[0] < 160ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 224ll ? 1ull : 0ull;  if (t) { goto L_00279310; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00279310; } }
    c.budget -= 1;
L_002792C8:
    c.r[1].d[0] = c.r[18].sd[0] < 36ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = c.r[17].sd[0] < 79ll ? 1ull : 0ull;  if (t) { goto L_002792E0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002792E8; } }
    c.budget -= 1;
L_002792E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00279338; } }
L_002792E8:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    st16((c.r[20].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[20], c.r[20].w[0] + 8u);
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 10;
L_00279310:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[4].d[0] = ld8((c.r[21].w[0]));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00279210u | kUnwind; return; } goto L_00279210; } }
L_00279320:
    st32((c.r[28].w[0] - 23580u), c.r[20].w[0]);
    st32((c.r[28].w[0] - 23584u), c.r[20].w[0]);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[28].w[0] - 23588u), c.r[18].w[0]);
    st32((c.r[28].w[0] - 23592u), c.r[19].w[0]);
    st32((c.r[28].w[0] - 23596u), c.r[19].w[0]);
    c.budget -= 6;
L_00279338:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00279360:
    c.r[1].d[0] = c.r[4].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002793A0; } }
    c.budget -= 1;
L_00279370:
    c.r[3].d[0] = ld16((c.r[4].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00279388; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 2u);  if (t) { goto L_00279390; } }
L_00279388:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 2;
L_00279390:
    set32(c.r[4], c.r[4].w[0] + 8u);
    c.r[3].d[0] = c.r[4].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00279370u | kUnwind; return; } goto L_00279370; } }
L_002793A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002793B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00920000u);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - 6960u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = c.r[5].sd[0] <= 0; set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_002793E8; } }
L_002793C8:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 8u);
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002793C8u | kUnwind; return; } goto L_002793C8; } }
    c.budget -= 1;
L_002793E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002793F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[2].w[0] - 22104u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_00279424; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 22096u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279420u); set32(c.r[6], 0u + 768u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00279420u) [[unlikely]] return; }
L_00279420:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_00279424:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00279440:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] - 22104u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_00279480; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 22096u);
    set32(c.r[6], 0u + 768u);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011AB50u | kUnwind; return; } [[clang::musttail]] return unit_0006(c, 201u, depth); }
L_00279480:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00279490:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    set32(c.r[3], c.r[20].w[0] - 22096u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002794F4; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002794D0:
    c.r[2].d[0] = c.r[16].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 48u);  if (t) { goto L_002794F4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002794D0u | kUnwind; return; } goto L_002794D0; }
L_002794F4:
    set32(c.r[3], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027959C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279508u);  if (depth < kMaxDepth) unit_005F(c, 72u, depth + 1u); else { c.pc = 0x0027D318u; return; } if (c.pc != 0x00279508u) [[unlikely]] return; }
L_00279508:
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[20].w[0] - 22096u);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[17].sd[0] <= 0; st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[17].w[0]));  if (t) { goto L_00279564; } }
    set32(c.r[9], c.r[16].w[0] + 12u);
    set32(c.r[7], c.r[16].w[0] + 4u);
    c.budget -= 2;
L_00279530:
    set32(c.r[3], c.r[8].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[2], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[6], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[8].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[9].w[0] + c.r[3].w[0]);
    st32((c.r[7].w[0] + 16u), 0u);
    st32((c.r[7].w[0]), c.r[4].w[0]);
    set32(c.r[7], c.r[7].w[0] + 4u);
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.budget -= 13;
    { const bool t = c.r[5].d[0] != 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00279530u | kUnwind; return; } goto L_00279530; } }
L_00279564:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52428ull;
    c.f[0] = c.r[1].w[0];
    c.r[2].d[0] = 0ull | 44100ull;
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 28u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 40u), c.f[0]);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 44u), 0u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279598u); st32((c.r[16].w[0] + 36u), c.f[0]);  if (depth < kMaxDepth) unit_005F(c, 73u, depth + 1u); else { c.pc = 0x0027D330u; return; } if (c.pc != 0x00279598u) [[unlikely]] return; }
L_00279598:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0027959C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002795C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_00279600; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002795DCu);  if (depth < kMaxDepth) unit_005F(c, 72u, depth + 1u); else { c.pc = 0x0027D318u; return; } if (c.pc != 0x002795DCu) [[unlikely]] return; }
L_002795DC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002795ECu); set32(c.r[6], 0u + 48u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x002795ECu) [[unlikely]] return; }
L_002795EC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_005F(c, 73u, depth); }
L_00279600:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00279618:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.budget -= 11;
    { const bool t = c.r[2].sd[0] <= 0; c.r[4].d[0] = ld8((c.r[17].w[0] + 2u));  if (t) { goto L_00279664; } }
    set32(c.r[3], c.r[17].w[0] + 20u);
    c.budget -= 1;
L_00279648:
    st32((c.r[3].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = ld8((c.r[17].w[0] + 2u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00279648u | kUnwind; return; } goto L_00279648; } }
L_00279664:
    set32(c.r[2], c.r[4].w[0] << 24);
    st32((c.r[17].w[0] + 44u), 0u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00279700; } }
    set32(c.r[19], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_00279678:
    set32(c.r[16], ld32((c.r[19].w[0])));
    set32(c.r[19], c.r[19].w[0] + 4u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00279694u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00279694u) [[unlikely]] return; }
L_00279694:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002796A8u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002796A8u) [[unlikely]] return; }
L_002796A8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002796C4u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002796C4u) [[unlikely]] return; }
L_002796C4:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002796D4u); set32(c.r[6], ld32((c.r[29].w[0] + 4u)));  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x002796D4u) [[unlikely]] return; }
L_002796D4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002796ECu); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002796ECu) [[unlikely]] return; }
L_002796EC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = ld8((c.r[17].w[0] + 2u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00279678u | kUnwind; return; } goto L_00279678; } }
    set32(c.r[2], c.r[4].w[0] << 24);
    c.budget -= 1;
L_00279700:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00279790; } }
    set32(c.r[19], c.r[17].w[0] + 12u);
    set32(c.r[16], ld32((c.r[19].w[0])));
    c.budget -= 2;
L_00279710:
    set32(c.r[19], c.r[19].w[0] + 4u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00279728u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00279728u) [[unlikely]] return; }
L_00279728:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027973Cu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027973Cu) [[unlikely]] return; }
L_0027973C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00279758u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00279758u) [[unlikely]] return; }
L_00279758:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279768u); set32(c.r[6], ld32((c.r[29].w[0] + 4u)));  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00279768u) [[unlikely]] return; }
L_00279768:
    set32(c.r[6], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[6].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00279780u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00279780u) [[unlikely]] return; }
L_00279780:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], ld32((c.r[19].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00279710u | kUnwind; return; } goto L_00279710; }
L_00279790:
    set32(c.r[2], 0u + 2u);
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002797B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_002797C0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 104u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 120u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 32u), 0u);
    c.f[0] = ld32((c.r[20].w[0] + 32u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 36u));
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[18], c.f[1]);
    c.budget -= 22;
    { const bool t = c.r[2].sd[0] <= 0; c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00279A20; } }
    set32(c.r[23], c.r[20].w[0] + 12u);
    set32(c.r[2], c.r[20].w[0] + 20u);
    st32((c.r[29].w[0] + 40u), c.r[23].w[0]);
    set32(c.r[30], c.r[20].w[0] + 4u);
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 6;
L_00279830:
    set32(c.r[3], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[30].w[0])));
    set32(c.r[17], c.r[3].w[0] << 2);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027984Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027984Cu) [[unlikely]] return; }
L_0027984C:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { breakpoint(c, 0x00279850u);  goto L_00279854; }
L_00279854:
    set32(c.r[16], c.r[2].w[0] >> 31);
    set32(c.r[4], ld32((c.r[23].w[0])));
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 1));
    set32(c.r[3], ld32((c.r[4].w[0])));
    mmi::div(c, 0, c.r[16].w[0], c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.r[16].d[0] = c.lo.d[0];
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027987Cu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027987Cu) [[unlikely]] return; }
L_0027987C:
    c.r[3].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[4], c.r[2].w[0] + 15u);
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[3].d[0] = c.r[16].d[0];
    c.budget -= 8;
    if (c.r[3].sd[0] <= 0) { set32(c.r[3], ld32((c.r[29].w[0] + 32u)));  goto L_002799F4; }
    set32(c.r[2], ld32((c.r[29].w[0] + 40u)));
    c.r[22].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[21], ld32((c.r[29].w[0] + 44u)));
    set32(c.r[17], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[29].w[0] + 36u), c.r[17].w[0]);
    c.budget -= 5;
L_002798B0:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].sd[0] <= 0; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0027994C; } }
    c.r[17].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
L_002798C8:
    set32(c.r[6], c.r[18].w[0] - c.r[16].w[0]);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002798E4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002798E4u) [[unlikely]] return; }
L_002798E4:
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] >> 31);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 6;
    { const bool t = c.r[8].sd[0] <= 0; set32(c.r[7], ld32((c.r[29].w[0])));  if (t) { goto L_00279924; } }
    c.r[6].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 1;
L_00279900:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    set32(c.r[7], c.r[7].w[0] + 2u);
    set32(c.r[6], c.r[6].w[0] - 1u);
    set32(c.r[5], 0u - c.r[4].w[0]);
    c.r[2].d[0] = c.r[4].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[4].d[0] = c.r[5].d[0];
    c.r[3].d[0] = c.r[19].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[6].d[0] != 0ull; if (c.r[3].d[0] != 0) c.r[19].d[0] = c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00279900u | kUnwind; return; } goto L_00279900; } }
L_00279924:
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[16], c.r[16].w[0] + c.r[8].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00279940u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00279940u) [[unlikely]] return; }
L_00279940:
    c.r[3].d[0] = c.r[16].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002798C8u | kUnwind; return; } goto L_002798C8; }
L_0027994C:
    set32(c.r[4], ld32((c.r[23].w[0])));
    set32(c.r[3], c.r[29].w[0] + 16u);
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027996Cu); set32(c.r[6], 0u + 16u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027996Cu) [[unlikely]] return; }
L_0027996C:
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], ld32((c.r[29].w[0] + 16u)));  if (t) { goto L_00279998; } }
L_00279978:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00279978u | kUnwind; return; } goto L_00279978; } }
    c.budget -= 1;
L_00279998:
    set32(c.r[3], c.r[29].w[0] + 16u);
    set32(c.r[2], ld32((c.r[29].w[0] + 36u)));
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[7].w[0]), c.r[19].w[0]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[22], c.r[22].w[0] - 1u);
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[7].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[8], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 32u)));
    st32((c.r[7].w[0] + 12u), c.r[18].w[0]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[8].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002799D4u); st32((c.r[7].w[0] + 8u), c.r[3].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002799D4u) [[unlikely]] return; }
L_002799D4:
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st32((c.r[21].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[22].d[0] != 0ull; st32((c.r[20].w[0] + 44u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002798B0u | kUnwind; return; } goto L_002798B0; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 1;
L_002799F4:
    set32(c.r[23], c.r[23].w[0] + 4u);
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[30], c.r[30].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 32u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 44u)));
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 44u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00279830u | kUnwind; return; } goto L_00279830; } }
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00279A20:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 88u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 104u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 120u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00279A50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00279A70; } }
    c.budget -= 2;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002797C0u | kUnwind; return; } goto L_002797C0; }
L_00279A70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00279A78:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[2].w[0] - 22096u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], 0u + 15u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], 0u + 1u);
    c.budget -= 10;
L_00279AA0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_00279AB8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279AB4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 107u, depth + 1u); else { c.pc = 0x00279A50u; return; } if (c.pc != 0x00279AB4u) [[unlikely]] return; }
L_00279AB4:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_00279AB8:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00279AA0u | kUnwind; return; } goto L_00279AA0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00279AE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 32u), c.r[5].w[0]);  c.pc = t; return; }
L_00279B10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 188u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00279B34; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 21328u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00279B34u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00279B34u) [[unlikely]] return; }
L_00279B34:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00279B40:
    set32(c.r[2], 0u + 1536u);
    st32((c.r[4].w[0] + 192u), c.r[5].w[0]);
    mmi::div(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x00279B50u);  goto L_00279B54; }
L_00279B54:
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 196u), c.r[3].w[0]);  c.pc = t; return; }
L_00279B60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 188u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00279B84; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 21324u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00279B84u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00279B84u) [[unlikely]] return; }
L_00279B84:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00279B90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 188u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);  if (t) { goto L_00279BB0; } }
    set32(c.r[3], ld32((c.r[2].w[0] - 21320u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00279BB0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00279BB0u) [[unlikely]] return; }
L_00279BB0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00279BC0:
    c.r[14].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[14].w[0] + 188u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00279C68; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[12], ld32((c.r[14].w[0] + 60u)));
    set32(c.r[13], ld32((c.r[14].w[0] + 64u)));
    set32(c.r[10], 0u + 1u);
    set32(c.r[11], ld32((c.r[14].w[0] + 68u)));
    set32(c.r[9], 0u + 1536u);
    set32(c.r[4], 0u + 16u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[5], 0u + 127u);
    set32(c.r[6], 0u + 15u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[8], 0u + 127u);
    c.r[2].d[0] = 0ull | 48000ull;
    st8((c.r[14].w[0] + 14u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st8((c.r[14].w[0] + 13u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[14].w[0] + 24u), c.r[3].w[0]);
    st8((c.r[14].w[0] + 15u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[14].w[0] + 152u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st32((c.r[14].w[0] + 80u), c.r[7].w[0]);
    st32((c.r[14].w[0] + 84u), c.r[8].w[0]);
    st32((c.r[14].w[0] + 88u), c.r[9].w[0]);
    st32((c.r[14].w[0] + 92u), c.r[12].w[0]);
    st32((c.r[14].w[0] + 96u), c.r[13].w[0]);
    st32((c.r[14].w[0] + 100u), c.r[11].w[0]);
    st32((c.r[14].w[0] + 136u), 0u);
    st16((c.r[14].w[0] + 2u), static_cast<std::uint16_t>(c.r[10].w[0]));
    st32((c.r[14].w[0] + 16u), c.r[9].w[0]);
    st32((c.r[14].w[0] + 140u), 0u);
    st16((c.r[14].w[0] + 28u), static_cast<std::uint16_t>(0u));
    st16((c.r[14].w[0] + 36u), static_cast<std::uint16_t>(0u));
    st16((c.r[14].w[0] + 38u), static_cast<std::uint16_t>(0u));
    st32((c.r[14].w[0] + 32u), 0u);
    st32((c.r[14].w[0] + 40u), 0u);
    st32((c.r[14].w[0] + 44u), 0u);
    st32((c.r[14].w[0] + 48u), 0u);
    st32((c.r[14].w[0] + 52u), 0u);
    st32((c.r[14].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 38;
L_00279C68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00279C70:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], 0u + 11u);
    c.r[6].d[0] = ld8((c.r[5].w[0]));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 119u);  if (t) { goto L_00279C98; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 1u));
    set32(c.r[3], 0u + 119u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00279CF0; } }
    set32(c.r[2], 0u + 119u);
    c.budget -= 1;
L_00279C98:
    c.budget -= 2;
    if (c.r[6].d[0] != c.r[2].d[0]) { c.r[6].d[0] = ld8((c.r[5].w[0] + 16u));  goto L_00279CB4; }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 1u));
    set32(c.r[3], 0u + 11u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00279CF0; } }
    c.r[6].d[0] = ld8((c.r[5].w[0] + 16u));
    c.budget -= 1;
L_00279CB4:
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 119u);  if (t) { goto L_00279CD4; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 17u));
    set32(c.r[3], 0u + 119u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00279CF0; } }
    set32(c.r[2], 0u + 119u);
    c.budget -= 1;
L_00279CD4:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00279CF0; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 17u));
    set32(c.r[3], 0u + 11u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00279CF0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00279CF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00279CF8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 176u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00279D1C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 21312u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00279D1Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00279D1Cu) [[unlikely]] return; }
L_00279D1C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00279D28:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 176u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00279D5C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 21308u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00279D5Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00279D5Cu) [[unlikely]] return; }
L_00279D5C:
    set32(c.r[2], 0u + 96u);
    st32((c.r[17].w[0] + 180u), c.r[16].w[0]);
    mmi::div(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x00279D6Cu);  goto L_00279D70; }
L_00279D70:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[17].w[0] + 184u), c.r[3].w[0]);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00279D90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[2].w[0] - 21300u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00279DA8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00279DA8u) [[unlikely]] return; }
L_00279DA8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00279DB8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 176u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00279DDC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 21304u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00279DDCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00279DDCu) [[unlikely]] return; }
L_00279DDC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00279DE8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[24].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x4D520000u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[16].d[0] | 20294ull;
    c.r[15].d[0] = ld8((c.r[24].w[0]));
    c.r[14].d[0] = ld8((c.r[24].w[0] + 3u));
    c.r[12].d[0] = ld8((c.r[24].w[0] + 2u));
    c.r[13].d[0] = ld8((c.r[24].w[0] + 1u));
    set32(c.r[24], c.r[24].w[0] + 4u);
    c.r[5].d[0] = ld8((c.r[24].w[0] + 3u));
    set32(c.r[14], c.r[14].w[0] << 24);
    c.r[3].d[0] = ld8((c.r[24].w[0] + 2u));
    set32(c.r[13], c.r[13].w[0] << 8);
    c.r[4].d[0] = ld8((c.r[24].w[0] + 1u));
    set32(c.r[5], c.r[5].w[0] << 24);
    c.r[2].d[0] = ld8((c.r[24].w[0]));
    set32(c.r[24], c.r[24].w[0] + 4u);
    set32(c.r[4], c.r[4].w[0] << 8);
    set32(c.r[3], c.r[3].w[0] << 16);
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.r[5].d[0] = ld8((c.r[24].w[0] + 2u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[11].d[0] = ld8((c.r[24].w[0] + 3u));
    c.r[25].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[10].d[0] = ld8((c.r[24].w[0] + 1u));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[25].w[0]) >> 8));
    set32(c.r[4], c.r[25].w[0] >> 24);
    set32(c.r[2], c.r[25].w[0] << 8);
    c.r[9].d[0] = ld8((c.r[24].w[0]));
    set32(c.r[12], c.r[12].w[0] << 16);
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[17].d[0];
    c.r[17].d[0] = 0ull + 0ull;
    c.r[15].d[0] = c.r[15].d[0] | c.r[14].d[0];
    c.r[14].d[0] = 0ull + 0ull;
    c.r[12].d[0] = c.r[12].d[0] | c.r[13].d[0];
    c.r[13].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    set32(c.r[11], c.r[11].w[0] << 24);
    set32(c.r[5], c.r[5].w[0] << 16);
    set32(c.r[10], c.r[10].w[0] << 8);
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    set32(c.r[2], c.r[25].w[0] << 24);
    c.r[9].d[0] = c.r[9].d[0] | c.r[11].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[10].d[0];
    c.r[15].d[0] = c.r[15].d[0] | c.r[12].d[0];
    c.r[25].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[5].d[0];
    set32(c.r[24], c.r[24].w[0] + 4u);
    c.budget -= 62;
    { const bool t = c.r[15].d[0] != c.r[16].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027A154; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x46460000u);
    c.r[2].d[0] = c.r[2].d[0] | 18753ull;
    c.budget -= 4;
    if (c.r[9].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[24].w[0] + c.r[25].w[0]);  goto L_00279EF8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027A154; } }
L_00279EF8:
    set32(c.r[11], c.r[2].w[0] - 4u);
    c.r[3].d[0] = c.r[24].d[0] < c.r[11].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0027A154; } }
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[16], 0u - 256u);
    c.r[9].d[0] = ld8((c.r[24].w[0]));
    c.budget -= 4;
L_00279F18:
    c.r[10].sd[0] = static_cast<std::int32_t>(0x444E0000u);
    c.r[8].d[0] = ld8((c.r[24].w[0] + 3u));
    c.r[10].d[0] = c.r[10].d[0] | 21331ull;
    c.r[6].d[0] = ld8((c.r[24].w[0] + 2u));
    c.r[7].d[0] = ld8((c.r[24].w[0] + 1u));
    set32(c.r[24], c.r[24].w[0] + 4u);
    c.r[5].d[0] = ld8((c.r[24].w[0] + 3u));
    set32(c.r[8], c.r[8].w[0] << 24);
    c.r[3].d[0] = ld8((c.r[24].w[0] + 2u));
    set32(c.r[6], c.r[6].w[0] << 16);
    c.r[4].d[0] = ld8((c.r[24].w[0] + 1u));
    set32(c.r[5], c.r[5].w[0] << 24);
    c.r[2].d[0] = ld8((c.r[24].w[0]));
    set32(c.r[24], c.r[24].w[0] + 4u);
    set32(c.r[4], c.r[4].w[0] << 8);
    set32(c.r[3], c.r[3].w[0] << 16);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.r[25].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[7], c.r[7].w[0] << 8);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[25].w[0]) >> 8));
    set32(c.r[4], c.r[25].w[0] >> 24);
    set32(c.r[2], c.r[25].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[12].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[8].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    set32(c.r[2], c.r[25].w[0] << 24);
    c.r[15].d[0] = c.r[9].d[0] | c.r[6].d[0];
    c.budget -= 33;
    { const bool t = c.r[15].d[0] == c.r[10].d[0]; c.r[25].d[0] = c.r[4].d[0] | c.r[2].d[0];  if (t) { goto L_0027A0C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4D4D0000u);
    c.r[2].d[0] = c.r[2].d[0] | 20291ull;
    c.budget -= 4;
    { const bool t = c.r[15].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[25].w[0] + 1u);  if (t) { goto L_0027A138; } }
    c.budget -= 2;
    { const bool t = c.r[13].d[0] != 0ull; c.r[2].d[0] = c.r[24].d[0] < c.r[11].d[0] ? 1ull : 0ull;  if (t) { goto L_0027A148; } }
    c.r[2].d[0] = c.r[25].sd[0] < 18ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027A154; } }
    c.r[4].d[0] = ld8((c.r[24].w[0] + 1u));
    set32(c.r[6], 0u + 16398u);
    c.r[2].d[0] = ld8((c.r[24].w[0]));
    set32(c.r[24], c.r[24].w[0] + 2u);
    set32(c.r[4], c.r[4].w[0] << 8);
    set32(c.r[13], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    set32(c.r[3], c.r[2].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] >> 8);
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = ld8((c.r[24].w[0] + 3u));
    c.r[2].d[0] = ld8((c.r[24].w[0] + 2u));
    c.r[4].d[0] = ld8((c.r[24].w[0] + 1u));
    set32(c.r[5], c.r[5].w[0] << 24);
    c.r[3].d[0] = ld8((c.r[24].w[0]));
    set32(c.r[24], c.r[24].w[0] + 4u);
    set32(c.r[4], c.r[4].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] << 16);
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 8));
    set32(c.r[4], c.r[3].w[0] << 8);
    c.r[5].d[0] = c.r[5].d[0] & 65280ull;
    set32(c.r[2], c.r[3].w[0] >> 24);
    c.r[4].d[0] = c.r[4].d[0] & c.r[12].d[0];
    set32(c.r[3], c.r[3].w[0] << 24);
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = ld8((c.r[24].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[24].w[0]));
    set32(c.r[24], c.r[24].w[0] + 2u);
    set32(c.r[4], c.r[4].w[0] << 8);
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    set32(c.r[3], c.r[2].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] >> 8);
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = ld8((c.r[24].w[0]));
    c.r[4].d[0] = ld8((c.r[24].w[0] + 1u));
    set32(c.r[24], c.r[24].w[0] + 2u);
    c.r[3].d[0] = ld8((c.r[24].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[24].w[0]));
    set32(c.r[24], c.r[24].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[4], c.r[4].w[0] << 8);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    set32(c.r[3], c.r[2].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] >> 8);
    c.r[3].d[0] = c.r[3].d[0] & c.r[16].d[0];
    set32(c.r[5], c.r[5].w[0] >> 8);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[6], c.r[6].w[0] - c.r[5].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> (c.r[6].w[0] & 31u)));
    c.budget -= 63;
    { const bool t = c.r[14].d[0] == 0ull; st32((c.r[21].w[0]), c.r[2].w[0]);  if (t) { goto L_0027A144; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0027A154; } }
    c.budget -= 1;
L_0027A0C8:
    c.budget -= 2;
    { const bool t = c.r[14].d[0] != 0ull; c.r[2].d[0] = c.r[24].d[0] < c.r[11].d[0] ? 1ull : 0ull;  if (t) { goto L_0027A148; } }
    c.r[5].d[0] = ld8((c.r[24].w[0] + 3u));
    set32(c.r[14], 0u + 1u);
    c.r[2].d[0] = ld8((c.r[24].w[0] + 2u));
    c.r[4].d[0] = ld8((c.r[24].w[0] + 1u));
    set32(c.r[5], c.r[5].w[0] << 24);
    c.r[3].d[0] = ld8((c.r[24].w[0]));
    set32(c.r[24], c.r[24].w[0] + 4u);
    set32(c.r[4], c.r[4].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] << 16);
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[5], c.r[2].w[0] >> 8);
    set32(c.r[4], c.r[2].w[0] << 8);
    set32(c.r[3], c.r[2].w[0] >> 24);
    set32(c.r[2], c.r[2].w[0] << 24);
    c.r[4].d[0] = c.r[4].d[0] & c.r[12].d[0];
    c.r[5].d[0] = c.r[5].d[0] & 65280ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[2].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 23;
    { const bool t = c.r[13].d[0] == 0ull; set32(c.r[17], c.r[24].w[0] + c.r[2].w[0]);  if (t) { goto L_0027A144; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0027A154; } }
    c.budget -= 1;
L_0027A138:
    set32(c.r[3], 0u - 2u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    set32(c.r[24], c.r[24].w[0] + c.r[2].w[0]);
    c.budget -= 3;
L_0027A144:
    c.r[2].d[0] = c.r[24].d[0] < c.r[11].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0027A148:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[9].d[0] = ld8((c.r[24].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00279F18u | kUnwind; return; } goto L_00279F18; }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027A154:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027A178:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[5], c.r[5].w[0] + 18936u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A198u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 189u, depth + 1u); else { c.pc = 0x0011A900u; return; } if (c.pc != 0x0027A198u) [[unlikely]] return; }
L_0027A198:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[4], c.r[16].w[0] + 8u);
    set32(c.r[5], c.r[5].w[0] + 18944u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], 0u + 4u);  if (t) { goto L_0027A1C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A1B4u);  if (depth < kMaxDepth) unit_0006(c, 189u, depth + 1u); else { c.pc = 0x0011A900u; return; } if (c.pc != 0x0027A1B4u) [[unlikely]] return; }
L_0027A1B4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0027A1CC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0027A1CC; } }
    c.budget -= 1;
L_0027A1C8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027A1CC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0027A1E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].d[0] = c.r[5].sd[0] < 4096ll ? 1ull : 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[10].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[11].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[9].d[0] + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 4u);
    set32(c.r[8], c.r[29].w[0] + 12u);
    c.budget -= 22;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[7], c.r[29].w[0] + 8u);  if (t) { goto L_0027A248; } }
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0027A2C8; } }
    c.budget -= 1;
L_0027A248:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A250u);  if (depth < kMaxDepth) unit_005E(c, 129u, depth + 1u); else { c.pc = 0x00279DE8u; return; } if (c.pc != 0x0027A250u) [[unlikely]] return; }
L_0027A250:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0027A2C8; } }
    set32(c.r[3], c.r[3].w[0] - c.r[16].w[0]);
    set32(c.r[4], c.r[3].w[0] << 16);
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] <= 0; st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0027A2C8; } }
    c.r[3].d[0] = ld8((c.r[29].w[0] + 4u));
    set32(c.r[7], 0u - 1u);
    set32(c.r[6], ld32((c.r[29].w[0])));
    set32(c.r[8], 0u + 1u);
    c.r[4].d[0] = ld8((c.r[29].w[0] + 8u));
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[19].w[0]), c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 12u)));
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    st32((c.r[3].w[0]), c.r[5].w[0]);
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[5], c.r[3].w[0] + 7u);
    if (c.r[4].d[0] != 0) c.r[3].d[0] = c.r[5].d[0];
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0]), c.r[8].w[0]);
    c.budget -= 23;
L_0027A2C8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0027A2F0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[21].d[0]);
    set32(c.r[21], 0u + 1u);
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    set32(c.r[17], c.r[16].w[0] + 14u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    set32(c.r[18], c.r[16].w[0] + 15u);
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    set32(c.r[19], c.r[16].w[0] + 16u);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    set32(c.r[20], c.r[16].w[0] + 13u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[21].w[0]));
    set32(c.r[2], c.r[16].w[0] + 24u);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 16u);
    set32(c.r[7], c.r[16].w[0] + 12u);
    c.r[8].d[0] = c.r[20].d[0] + 0ull;
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    c.r[10].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[11], c.r[16].w[0] + 20u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A35Cu); st32((c.r[29].w[0] + 8u), c.r[19].w[0]);  if (depth < kMaxDepth) unit_005E(c, 134u, depth + 1u); else { c.pc = 0x0027A1E0u; return; } if (c.pc != 0x0027A35Cu) [[unlikely]] return; }
L_0027A35C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[7], 0u + 8u);  if (t) { goto L_0027A370; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027A3E4; } }
    c.budget -= 1;
L_0027A370:
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 44u), 0u);
    st32((c.r[16].w[0] + 40u), 0u);
    st32((c.r[16].w[0] + 32u), 0u);
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 38u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 36u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[5], ld32((c.r[16].w[0] + 64u)));
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], 0u + 3u);
    set32(c.r[6], ld32((c.r[16].w[0] + 68u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    st32((c.r[16].w[0] + 92u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    st16((c.r[16].w[0] + 152u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[19].w[0])));
    st32((c.r[16].w[0] + 96u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 88u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 100u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 140u), 0u);
    st32((c.r[16].w[0] + 136u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    c.budget -= 27;
    if (c.r[2].d[0] != c.r[7].d[0]) { st16((c.r[16].w[0] + 154u), static_cast<std::uint16_t>(0u));  goto L_0027A3E0; }
    st16((c.r[16].w[0] + 154u), static_cast<std::uint16_t>(c.r[21].w[0]));
    c.budget -= 1;
L_0027A3E0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 16u)));
    c.budget -= 1;
L_0027A3E4:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0027A408:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[16].w[0] + 72u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[18], ld32((c.r[17].w[0])));  if (t) { goto L_0027A560; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A43Cu); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_0062(c, 170u, depth + 1u); else { c.pc = 0x002893F8u; return; } if (c.pc != 0x0027A43Cu) [[unlikely]] return; }
L_0027A43C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_0027A560; }
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[5], c.r[16].w[0] + 104u);
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[6], c.r[16].w[0] + 108u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A45Cu); set32(c.r[7], c.r[16].w[0] + 112u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027A45Cu) [[unlikely]] return; }
L_0027A45C:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[7], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[6], 0u + 2u);
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[9], c.r[4].w[0] - c.r[7].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 14u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    if (c.r[2].d[0] != 0) c.r[9].d[0] = c.r[3].d[0];
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[11], ld32((c.r[17].w[0] + 20u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[9].d[0] = c.r[5].d[0];
    set32(c.r[10], c.r[11].w[0] + c.r[3].w[0]);
    c.budget -= 16;
    { const bool t = c.r[4].d[0] != c.r[6].d[0]; c.r[3].d[0] = ld8((c.r[16].w[0] + 14u));  if (t) { goto L_0027A508; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 6;
    { const bool t = c.r[9].sd[0] <= 0; set32(c.r[11], c.r[11].w[0] + c.r[2].w[0]);  if (t) { goto L_0027A540; } }
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0027A4B8:
    c.r[2].d[0] = ld16((c.r[7].w[0]));
    set32(c.r[4], c.r[8].w[0] << 1);
    set32(c.r[5], c.r[4].w[0] + c.r[10].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[11].w[0]);
    set32(c.r[3], c.r[2].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] >> 8);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[8], c.r[8].w[0] + 1u);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[6].d[0] = c.r[8].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = ld16((c.r[7].w[0] + 2u));
    set32(c.r[7], c.r[7].w[0] + 4u);
    set32(c.r[3], c.r[2].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] >> 8);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 17;
    { const bool t = c.r[6].d[0] != 0ull; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027A4B8u | kUnwind; return; } goto L_0027A4B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[16].w[0] + 14u));  if (t) { goto L_0027A540; } }
    c.budget -= 1;
L_0027A508:
    c.budget -= 2;
    { const bool t = c.r[9].sd[0] <= 0; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0027A540; } }
L_0027A510:
    set32(c.r[4], c.r[8].w[0] << 1);
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[2], c.r[4].w[0] + c.r[18].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[10].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.r[5].d[0] = c.r[8].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[2].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] >> 8);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 11;
    { const bool t = c.r[5].d[0] != 0ull; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027A510u | kUnwind; return; } goto L_0027A510; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 14u));
    c.budget -= 1;
L_0027A540:
    set32(c.r[2], c.r[3].w[0] << 24);
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    mmi::mult(c, 0, c.r[9].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 144u), c.r[9].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    st32((c.r[16].w[0] + 148u), c.r[2].w[0]);
    c.budget -= 8;
L_0027A560:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0027A58C; }
    set32(c.r[3], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A580u); set32(c.r[6], ld32((c.r[16].w[0] + 144u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027A580u) [[unlikely]] return; }
L_0027A580:
    set32(c.r[2], 0u + 3u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
L_0027A58C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027A5A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[16].w[0] + 72u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[18], ld32((c.r[17].w[0])));  if (t) { goto L_0027A6E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A5D4u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_0062(c, 170u, depth + 1u); else { c.pc = 0x002893F8u; return; } if (c.pc != 0x0027A5D4u) [[unlikely]] return; }
L_0027A5D4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_0027A6E0; }
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[5], c.r[16].w[0] + 104u);
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[6], c.r[16].w[0] + 108u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A5F4u); set32(c.r[7], c.r[16].w[0] + 112u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027A5F4u) [[unlikely]] return; }
L_0027A5F4:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[9], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[6], 0u + 2u);
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[8], c.r[4].w[0] - c.r[9].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 14u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    if (c.r[2].d[0] != 0) c.r[8].d[0] = c.r[3].d[0];
    set32(c.r[3], c.r[9].w[0] << 1);
    set32(c.r[11], ld32((c.r[17].w[0] + 20u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[8].d[0] = c.r[5].d[0];
    set32(c.r[10], c.r[11].w[0] + c.r[3].w[0]);
    c.budget -= 16;
    { const bool t = c.r[4].d[0] != c.r[6].d[0]; c.r[3].d[0] = ld8((c.r[16].w[0] + 14u));  if (t) { goto L_0027A690; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[9].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 6;
    { const bool t = c.r[8].sd[0] <= 0; set32(c.r[9], c.r[11].w[0] + c.r[2].w[0]);  if (t) { goto L_0027A6C4; } }
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0027A650:
    c.r[2].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[4], c.r[3].w[0] + c.r[10].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[5].d[0] = c.r[7].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = ld8((c.r[6].w[0] + 1u));
    set32(c.r[6], c.r[6].w[0] + 2u);
    set32(c.r[2], c.r[2].w[0] << 8);
    c.budget -= 13;
    { const bool t = c.r[5].d[0] != 0ull; st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027A650u | kUnwind; return; } goto L_0027A650; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[16].w[0] + 14u));  if (t) { goto L_0027A6C4; } }
    c.budget -= 1;
L_0027A690:
    c.budget -= 2;
    { const bool t = c.r[8].sd[0] <= 0; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0027A6C4; } }
    c.r[5].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 2;
L_0027A6A0:
    set32(c.r[2], c.r[18].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.r[4].d[0] = c.r[7].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] << 8);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027A6A0u | kUnwind; return; } goto L_0027A6A0; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 14u));
    c.budget -= 1;
L_0027A6C4:
    set32(c.r[2], c.r[3].w[0] << 24);
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    mmi::mult(c, 0, c.r[8].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 144u), c.r[8].w[0]);
    st32((c.r[16].w[0] + 148u), c.r[2].w[0]);
    c.budget -= 7;
L_0027A6E0:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0027A70C; }
    set32(c.r[3], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A700u); set32(c.r[6], ld32((c.r[16].w[0] + 144u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027A700u) [[unlikely]] return; }
L_0027A700:
    set32(c.r[2], 0u + 3u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
L_0027A70C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027A720:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 154u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0027A740; } }
    c.budget -= 2;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027A5A0u | kUnwind; return; } goto L_0027A5A0; }
L_0027A740:
    c.budget -= 2;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027A408u | kUnwind; return; } goto L_0027A408; }
L_0027A748:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[14].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.r[25].d[0] = c.r[5].d[0] + 0ull;
    c.r[11].d[0] = ld8((c.r[14].w[0] + 3u));
    c.r[12].d[0] = c.r[12].d[0] | 29486ull;
    c.r[3].d[0] = ld8((c.r[14].w[0] + 2u));
    c.r[13].d[0] = c.r[8].d[0] + 0ull;
    c.r[4].d[0] = ld8((c.r[14].w[0] + 1u));
    set32(c.r[11], c.r[11].w[0] << 24);
    c.r[2].d[0] = ld8((c.r[14].w[0]));
    set32(c.r[3], c.r[3].w[0] << 16);
    set32(c.r[4], c.r[4].w[0] << 8);
    c.r[24].d[0] = c.r[9].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[11].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[4].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 23;
    { const bool t = c.r[4].d[0] == c.r[12].d[0]; set32(c.r[11], c.r[14].w[0] + 4u);  if (t) { goto L_0027A7B4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x646E0000u);
    c.r[3].d[0] = c.r[3].d[0] | 29486ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027AA50; } }
L_0027A7B4:
    c.r[6].d[0] = ld8((c.r[11].w[0] + 3u));
    c.r[15].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[4].d[0] = ld8((c.r[11].w[0] + 2u));
    c.r[2].d[0] = 0ull + 0ull;
    c.r[5].d[0] = ld8((c.r[11].w[0] + 1u));
    set32(c.r[6], c.r[6].w[0] << 24);
    c.r[3].d[0] = ld8((c.r[11].w[0]));
    set32(c.r[5], c.r[5].w[0] << 8);
    set32(c.r[4], c.r[4].w[0] << 16);
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[12].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[6], c.r[12].w[0] >> 8);
    set32(c.r[5], c.r[12].w[0] << 8);
    set32(c.r[4], c.r[12].w[0] << 24);
    set32(c.r[3], c.r[12].w[0] >> 24);
    c.r[5].d[0] = c.r[5].d[0] & c.r[15].d[0];
    c.r[6].d[0] = c.r[6].d[0] & 65280ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.r[12].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.r[4].d[0] = c.r[25].sd[0] < c.r[12].sd[0] ? 1ull : 0ull;
    c.budget -= 24;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[11], c.r[11].w[0] + 4u);  if (t) { goto L_0027AA50; } }
    c.r[9].d[0] = ld8((c.r[11].w[0]));
    set32(c.r[25], 0u + 2u);
    c.r[8].d[0] = ld8((c.r[11].w[0] + 3u));
    c.r[6].d[0] = ld8((c.r[11].w[0] + 2u));
    c.r[7].d[0] = ld8((c.r[11].w[0] + 1u));
    set32(c.r[11], c.r[11].w[0] + 4u);
    c.r[5].d[0] = ld8((c.r[11].w[0] + 3u));
    set32(c.r[8], c.r[8].w[0] << 24);
    c.r[4].d[0] = ld8((c.r[11].w[0] + 2u));
    set32(c.r[7], c.r[7].w[0] << 8);
    c.r[2].d[0] = ld8((c.r[11].w[0] + 1u));
    set32(c.r[5], c.r[5].w[0] << 24);
    c.r[3].d[0] = ld8((c.r[11].w[0]));
    set32(c.r[11], c.r[11].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[4], c.r[4].w[0] << 16);
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    set32(c.r[6], c.r[6].w[0] << 16);
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[8].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[6].d[0];
    set32(c.r[6], c.r[4].w[0] >> 24);
    set32(c.r[2], c.r[4].w[0] >> 8);
    set32(c.r[5], c.r[4].w[0] << 8);
    set32(c.r[7], c.r[9].w[0] >> 8);
    c.r[2].d[0] = c.r[2].d[0] & 65280ull;
    set32(c.r[3], c.r[9].w[0] << 8);
    set32(c.r[4], c.r[4].w[0] << 24);
    c.r[5].d[0] = c.r[5].d[0] & c.r[15].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[4].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    set32(c.r[2], c.r[9].w[0] >> 24);
    set32(c.r[4], c.r[9].w[0] << 24);
    c.r[3].d[0] = c.r[3].d[0] & c.r[15].d[0];
    c.r[7].d[0] = c.r[7].d[0] & 65280ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    c.r[4].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.budget -= 42;
    { const bool t = c.r[4].d[0] == c.r[25].d[0]; c.r[9].d[0] = c.r[2].d[0] | c.r[3].d[0];  if (t) { goto L_0027A900; } }
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_0027A8E0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027A8F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0027AA54; } }
    c.budget -= 1;
L_0027A8E0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027A918; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0027AA54; } }
L_0027A8F0:
    set32(c.r[2], 0u + 8u);
    st32((c.r[10].w[0]), c.r[25].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[13].w[0]), c.r[2].w[0]);  if (t) { goto L_0027A924; } }
L_0027A900:
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], 0u + 8u);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[13].w[0]), c.r[3].w[0]);  if (t) { goto L_0027A924; } }
    c.budget -= 1;
L_0027A918:
    set32(c.r[2], 0u + 16u);
    st32((c.r[10].w[0]), 0u);
    st32((c.r[13].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0027A924:
    c.r[5].d[0] = ld8((c.r[11].w[0] + 3u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].d[0] = ld8((c.r[11].w[0] + 2u));
    set32(c.r[7], 0u + 2u);
    c.r[4].d[0] = ld8((c.r[11].w[0] + 1u));
    set32(c.r[5], c.r[5].w[0] << 24);
    c.r[2].d[0] = ld8((c.r[11].w[0]));
    set32(c.r[11], c.r[11].w[0] + 4u);
    set32(c.r[4], c.r[4].w[0] << 8);
    set32(c.r[3], c.r[3].w[0] << 16);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 8));
    set32(c.r[4], c.r[2].w[0] << 8);
    c.r[5].d[0] = c.r[5].d[0] & 65280ull;
    set32(c.r[3], c.r[2].w[0] >> 24);
    c.r[4].d[0] = c.r[4].d[0] & c.r[6].d[0];
    set32(c.r[2], c.r[2].w[0] << 24);
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[5].d[0] = ld8((c.r[11].w[0] + 1u));
    c.r[4].d[0] = ld8((c.r[11].w[0] + 3u));
    c.r[3].d[0] = ld8((c.r[11].w[0] + 2u));
    set32(c.r[5], c.r[5].w[0] << 8);
    c.r[2].d[0] = ld8((c.r[11].w[0]));
    set32(c.r[4], c.r[4].w[0] << 24);
    set32(c.r[3], c.r[3].w[0] << 16);
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 8));
    set32(c.r[4], c.r[2].w[0] << 8);
    set32(c.r[3], c.r[2].w[0] >> 24);
    set32(c.r[2], c.r[2].w[0] << 24);
    c.r[4].d[0] = c.r[4].d[0] & c.r[6].d[0];
    c.r[5].d[0] = c.r[5].d[0] & 65280ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[10], ld32((c.r[10].w[0])));
    c.budget -= 46;
    { const bool t = c.r[10].d[0] != c.r[7].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0027A9F8; } }
    mmi::div(c, 0, c.r[9].w[0], c.r[3].w[0]);
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x0027A9E4u);  goto L_0027A9E8; }
L_0027A9E8:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[24].w[0]), c.r[2].w[0]);  if (t) { goto L_0027AA4C; } }
    c.budget -= 1;
L_0027A9F8:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] != c.r[2].d[0];  if (t) { goto L_0027AA18; } }
    mmi::div(c, 0, c.r[9].w[0], c.r[3].w[0]);
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x0027AA08u);  goto L_0027AA0C; }
L_0027AA0C:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[24].w[0]), c.r[2].w[0]);  if (t) { goto L_0027AA4C; } }
L_0027AA18:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  if (t) { goto L_0027AA48; } }
    set32(c.r[2], c.r[9].w[0] >> 31);
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x0027AA28u);  goto L_0027AA2C; }
L_0027AA2C:
    set32(c.r[2], c.r[9].w[0] + c.r[2].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[24].w[0]), c.r[2].w[0]);  if (t) { goto L_0027AA4C; } }
    c.budget -= 1;
L_0027AA48:
    st32((c.r[24].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0027AA4C:
    set32(c.r[2], c.r[14].w[0] + c.r[12].w[0]);
    c.budget -= 1;
L_0027AA50:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0027AA54:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0027AA60:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[5], c.r[5].w[0] + 18952u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AA80u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 189u, depth + 1u); else { c.pc = 0x0011A900u; return; } if (c.pc != 0x0027AA80u) [[unlikely]] return; }
L_0027AA80:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 18960u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], 0u + 4u);  if (t) { goto L_0027AAA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AA9Cu);  if (depth < kMaxDepth) unit_0006(c, 189u, depth + 1u); else { c.pc = 0x0011A900u; return; } if (c.pc != 0x0027AA9Cu) [[unlikely]] return; }
L_0027AA9C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0027AAA8; }
L_0027AAA4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0027AAA8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0027AAB8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].d[0] = c.r[5].sd[0] < 8ll ? 1ull : 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[10].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[11].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[9].d[0] + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[8], c.r[29].w[0] + 8u);
    set32(c.r[7], c.r[29].w[0] + 4u);
    set32(c.r[9], c.r[29].w[0] + 12u);
    c.budget -= 23;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[10], ld32((c.r[29].w[0] + 96u)));  if (t) { goto L_0027AB20; } }
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0027ABA0; } }
L_0027AB20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AB28u);  if (depth < kMaxDepth) unit_005E(c, 151u, depth + 1u); else { c.pc = 0x0027A748u; return; } if (c.pc != 0x0027AB28u) [[unlikely]] return; }
L_0027AB28:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] - c.r[16].w[0]);  if (t) { goto L_0027ABA0; } }
    set32(c.r[3], c.r[4].w[0] << 16);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_0027ABA0; } }
    set32(c.r[6], ld32((c.r[29].w[0])));
    set32(c.r[7], 0u - 1u);
    c.r[3].d[0] = ld8((c.r[29].w[0] + 4u));
    set32(c.r[8], 0u + 1u);
    c.r[4].d[0] = ld8((c.r[29].w[0] + 8u));
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[19].w[0]), c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 12u)));
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    st32((c.r[3].w[0]), c.r[5].w[0]);
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[5], c.r[3].w[0] + 7u);
    if (c.r[4].d[0] != 0) c.r[3].d[0] = c.r[5].d[0];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    st32((c.r[4].w[0]), c.r[8].w[0]);
    c.budget -= 23;
L_0027ABA0:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0027ABC8:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    set32(c.r[17], c.r[16].w[0] + 14u);
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    set32(c.r[18], c.r[16].w[0] + 16u);
    st64((c.r[29].w[0] + 72u), c.r[19].d[0]);
    set32(c.r[19], c.r[16].w[0] + 15u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[16].w[0] + 24u);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 32u);
    set32(c.r[3], c.r[29].w[0] + 36u);
    set32(c.r[7], c.r[16].w[0] + 12u);
    set32(c.r[8], c.r[16].w[0] + 13u);
    c.r[9].d[0] = c.r[19].d[0] + 0ull;
    c.r[10].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[11], c.r[16].w[0] + 20u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AC30u); st32((c.r[29].w[0] + 8u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_005E(c, 155u, depth + 1u); else { c.pc = 0x0027AAB8u; return; } if (c.pc != 0x0027AC30u) [[unlikely]] return; }
L_0027AC30:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { st32((c.r[16].w[0] + 52u), 0u);  goto L_0027AC40; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027ACA8; } }
L_0027AC40:
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 44u), 0u);
    st32((c.r[16].w[0] + 40u), 0u);
    st32((c.r[16].w[0] + 32u), 0u);
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 38u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 36u), static_cast<std::uint16_t>(0u));
    set32(c.r[5], ld32((c.r[16].w[0] + 60u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[4].d[0] = ld16((c.r[29].w[0] + 36u));
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 64u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 32u)));
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    set32(c.r[3], 0u + 4u);
    set32(c.r[7], ld32((c.r[16].w[0] + 68u)));
    st16((c.r[16].w[0] + 154u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[18].w[0])));
    st32((c.r[16].w[0] + 92u), c.r[5].w[0]);
    st16((c.r[16].w[0] + 152u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 88u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 96u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 100u), c.r[7].w[0]);
    st32((c.r[16].w[0] + 140u), 0u);
    st32((c.r[16].w[0] + 136u), 0u);
    c.budget -= 26;
L_0027ACA8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0027ACC8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[16].w[0] + 72u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[18], ld32((c.r[17].w[0])));  if (t) { goto L_0027AE20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027ACFCu); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_0062(c, 170u, depth + 1u); else { c.pc = 0x002893F8u; return; } if (c.pc != 0x0027ACFCu) [[unlikely]] return; }
L_0027ACFC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_0027AE20; }
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[5], c.r[16].w[0] + 104u);
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[6], c.r[16].w[0] + 108u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AD1Cu); set32(c.r[7], c.r[16].w[0] + 112u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027AD1Cu) [[unlikely]] return; }
L_0027AD1C:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[7], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[6], 0u + 2u);
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[9], c.r[4].w[0] - c.r[7].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 14u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    if (c.r[2].d[0] != 0) c.r[9].d[0] = c.r[3].d[0];
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[11], ld32((c.r[17].w[0] + 20u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[9].d[0] = c.r[5].d[0];
    set32(c.r[10], c.r[11].w[0] + c.r[3].w[0]);
    c.budget -= 16;
    { const bool t = c.r[4].d[0] != c.r[6].d[0]; c.r[3].d[0] = ld8((c.r[16].w[0] + 14u));  if (t) { goto L_0027ADC8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 6;
    { const bool t = c.r[9].sd[0] <= 0; set32(c.r[11], c.r[11].w[0] + c.r[2].w[0]);  if (t) { goto L_0027AE00; } }
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0027AD78:
    c.r[2].d[0] = ld16((c.r[7].w[0]));
    set32(c.r[4], c.r[8].w[0] << 1);
    set32(c.r[5], c.r[4].w[0] + c.r[10].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[11].w[0]);
    set32(c.r[3], c.r[2].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] >> 8);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[8], c.r[8].w[0] + 1u);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[6].d[0] = c.r[8].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = ld16((c.r[7].w[0] + 2u));
    set32(c.r[7], c.r[7].w[0] + 4u);
    set32(c.r[3], c.r[2].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] >> 8);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 17;
    { const bool t = c.r[6].d[0] != 0ull; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027AD78u | kUnwind; return; } goto L_0027AD78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[16].w[0] + 14u));  if (t) { goto L_0027AE00; } }
    c.budget -= 1;
L_0027ADC8:
    c.budget -= 2;
    { const bool t = c.r[9].sd[0] <= 0; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0027AE00; } }
L_0027ADD0:
    set32(c.r[4], c.r[8].w[0] << 1);
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[2], c.r[4].w[0] + c.r[18].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[10].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.r[5].d[0] = c.r[8].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[2].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] >> 8);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 11;
    { const bool t = c.r[5].d[0] != 0ull; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027ADD0u | kUnwind; return; } goto L_0027ADD0; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 14u));
    c.budget -= 1;
L_0027AE00:
    set32(c.r[2], c.r[3].w[0] << 24);
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    mmi::mult(c, 0, c.r[9].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 144u), c.r[9].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    st32((c.r[16].w[0] + 148u), c.r[2].w[0]);
    c.budget -= 8;
L_0027AE20:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0027AE4C; }
    set32(c.r[3], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AE40u); set32(c.r[6], ld32((c.r[16].w[0] + 144u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027AE40u) [[unlikely]] return; }
L_0027AE40:
    set32(c.r[2], 0u + 3u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
L_0027AE4C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027AE60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[16].w[0] + 72u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[18], ld32((c.r[17].w[0])));  if (t) { goto L_0027AFA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AE94u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_0062(c, 170u, depth + 1u); else { c.pc = 0x002893F8u; return; } if (c.pc != 0x0027AE94u) [[unlikely]] return; }
L_0027AE94:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_0027AFA0; }
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[5], c.r[16].w[0] + 104u);
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[6], c.r[16].w[0] + 108u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AEB4u); set32(c.r[7], c.r[16].w[0] + 112u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027AEB4u) [[unlikely]] return; }
L_0027AEB4:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[9], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[6], 0u + 2u);
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[8], c.r[4].w[0] - c.r[9].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 14u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    if (c.r[2].d[0] != 0) c.r[8].d[0] = c.r[3].d[0];
    set32(c.r[3], c.r[9].w[0] << 1);
    set32(c.r[11], ld32((c.r[17].w[0] + 20u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[8].d[0] = c.r[5].d[0];
    set32(c.r[10], c.r[11].w[0] + c.r[3].w[0]);
    c.budget -= 16;
    { const bool t = c.r[4].d[0] != c.r[6].d[0]; c.r[3].d[0] = ld8((c.r[16].w[0] + 14u));  if (t) { goto L_0027AF50; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[9].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 6;
    { const bool t = c.r[8].sd[0] <= 0; set32(c.r[9], c.r[11].w[0] + c.r[2].w[0]);  if (t) { goto L_0027AF84; } }
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0027AF10:
    c.r[2].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[4], c.r[3].w[0] + c.r[10].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[5].d[0] = c.r[7].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = ld8((c.r[6].w[0] + 1u));
    set32(c.r[6], c.r[6].w[0] + 2u);
    set32(c.r[2], c.r[2].w[0] << 8);
    c.budget -= 13;
    { const bool t = c.r[5].d[0] != 0ull; st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027AF10u | kUnwind; return; } goto L_0027AF10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[16].w[0] + 14u));  if (t) { goto L_0027AF84; } }
    c.budget -= 1;
L_0027AF50:
    c.budget -= 2;
    { const bool t = c.r[8].sd[0] <= 0; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0027AF84; } }
    c.r[5].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 2;
L_0027AF60:
    set32(c.r[2], c.r[18].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.r[4].d[0] = c.r[7].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] << 8);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027AF60u | kUnwind; return; } goto L_0027AF60; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 14u));
    c.budget -= 1;
L_0027AF84:
    set32(c.r[2], c.r[3].w[0] << 24);
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    mmi::mult(c, 0, c.r[8].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 144u), c.r[8].w[0]);
    st32((c.r[16].w[0] + 148u), c.r[2].w[0]);
    c.budget -= 7;
L_0027AFA0:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0027AFCC; }
    set32(c.r[3], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AFC0u); set32(c.r[6], ld32((c.r[16].w[0] + 144u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027AFC0u) [[unlikely]] return; }
L_0027AFC0:
    set32(c.r[2], 0u + 3u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
L_0027AFCC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027AFE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[16].w[0] + 72u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[18], ld32((c.r[17].w[0])));  if (t) { goto L_0027B148; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B014u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_0062(c, 170u, depth + 1u); else { c.pc = 0x002893F8u; return; } if (c.pc != 0x0027B014u) [[unlikely]] return; }
L_0027B014:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_0027B148; }
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[5], c.r[16].w[0] + 104u);
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[6], c.r[16].w[0] + 108u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B034u); set32(c.r[7], c.r[16].w[0] + 112u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027B034u) [[unlikely]] return; }
L_0027B034:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[7], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[6], 0u + 2u);
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[9], c.r[4].w[0] - c.r[7].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 14u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    if (c.r[2].d[0] != 0) c.r[9].d[0] = c.r[3].d[0];
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[10], ld32((c.r[17].w[0] + 20u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[9].d[0] = c.r[5].d[0];
    set32(c.r[11], c.r[10].w[0] + c.r[3].w[0]);
    c.budget -= 16;
    { const bool t = c.r[4].d[0] != c.r[6].d[0]; c.r[3].d[0] = ld8((c.r[16].w[0] + 14u));  if (t) { goto L_0027B0E8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 6;
    { const bool t = c.r[9].sd[0] <= 0; set32(c.r[12], c.r[10].w[0] + c.r[2].w[0]);  if (t) { goto L_0027B12C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[10], c.r[2].w[0] - 21296u);
    c.budget -= 3;
L_0027B098:
    c.r[2].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[4], c.r[8].w[0] << 1);
    set32(c.r[5], c.r[4].w[0] + c.r[11].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[12].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[10].w[0]);
    c.r[6].d[0] = c.r[8].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.r[3].d[0] = ld16((c.r[2].w[0]));
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[7].w[0] + 1u));
    set32(c.r[7], c.r[7].w[0] + 2u);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[10].w[0]);
    c.r[3].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 17;
    { const bool t = c.r[6].d[0] != 0ull; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027B098u | kUnwind; return; } goto L_0027B098; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[16].w[0] + 14u));  if (t) { goto L_0027B12C; } }
    c.budget -= 1;
L_0027B0E8:
    c.budget -= 2;
    { const bool t = c.r[9].sd[0] <= 0; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0027B12C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = c.r[11].d[0] + 0ull;
    set32(c.r[6], c.r[2].w[0] - 21296u);
    c.budget -= 4;
L_0027B100:
    set32(c.r[3], c.r[18].w[0] + c.r[8].w[0]);
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.r[4].d[0] = c.r[8].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = ld16((c.r[2].w[0]));
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027B100u | kUnwind; return; } goto L_0027B100; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 14u));
    c.budget -= 1;
L_0027B12C:
    set32(c.r[2], c.r[3].w[0] << 24);
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    mmi::mult(c, 0, c.r[9].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 144u), c.r[9].w[0]);
    st32((c.r[16].w[0] + 148u), c.r[2].w[0]);
    c.budget -= 7;
L_0027B148:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0027B174; }
    set32(c.r[3], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B168u); set32(c.r[6], ld32((c.r[16].w[0] + 144u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027B168u) [[unlikely]] return; }
L_0027B168:
    set32(c.r[2], 0u + 3u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
L_0027B174:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027B188:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 154u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0027B1B0; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027AFE0u | kUnwind; return; } goto L_0027AFE0; }
L_0027B1B0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0027B1C0; } }
    c.budget -= 2;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027AE60u | kUnwind; return; } goto L_0027AE60; }
L_0027B1C0:
    c.budget -= 2;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027ACC8u | kUnwind; return; } goto L_0027ACC8; }
L_0027B220:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 20780u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_0027B260:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], ld32((c.r[2].w[0] - 20780u)));
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull; st64((c.r[29].w[0] + 40u), c.r[31].d[0]);  if (t) { goto L_0027B2A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B2A4u);  if (depth < kMaxDepth) unit_005E(c, 178u, depth + 1u); else { c.pc = 0x0027B220u; return; } if (c.pc != 0x0027B2A4u) [[unlikely]] return; }
L_0027B2A4:
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != 0ull; st16((c.r[20].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_0027B2BC; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027B3F4; } }
L_0027B2BC:
    c.r[11].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[11].w[0] + 19016u);
    c.budget -= 5;
    { const bool t = c.r[16].sd[0] <= 0; c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 512u)));  if (t) { goto L_0027B32C; } }
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_0027B2D8:
    set32(c.r[3], c.r[17].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[6].d[0] = c.r[7].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 256u)));
    mmi::mult(c, 0, c.r[10].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[3].w[0] + 1023u);
    c.r[4].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    if (c.r[4].d[0] != 0) c.r[2].d[0] = c.r[5].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 10));
    set32(c.r[2], c.r[2].w[0] << 10);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    c.budget -= 19;
    { const bool t = c.r[6].d[0] != 0ull; c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027B2D8u | kUnwind; return; } goto L_0027B2D8; } }
    set32(c.r[2], c.r[11].w[0] + 19016u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0027B32C:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0; c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 1024u)));  if (t) { goto L_0027B384; } }
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0027B338:
    set32(c.r[3], c.r[17].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[6].d[0] = c.r[7].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[9].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 256u)));
    mmi::mult(c, 0, c.r[8].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[3].w[0] + 1023u);
    c.r[4].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    if (c.r[4].d[0] != 0) c.r[2].d[0] = c.r[5].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 10));
    set32(c.r[2], c.r[2].w[0] << 10);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    c.budget -= 19;
    { const bool t = c.r[6].d[0] != 0ull; c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027B338u | kUnwind; return; } goto L_0027B338; } }
L_0027B384:
    set32(c.r[2], c.r[11].w[0] + 19016u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].sd[0] <= 0; c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 1536u)));  if (t) { goto L_0027B3E4; } }
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0027B398:
    set32(c.r[3], c.r[17].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[6].d[0] = c.r[7].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[9].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 256u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[5], c.r[3].w[0] + 1023u);
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    if (c.r[4].d[0] != 0) c.r[2].d[0] = c.r[5].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 10));
    set32(c.r[2], c.r[2].w[0] << 10);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    c.budget -= 19;
    { const bool t = c.r[6].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027B398u | kUnwind; return; } goto L_0027B398; } }
L_0027B3E4:
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[10].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[8].w[0]));
    st16((c.r[20].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 4;
L_0027B3F4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027B4A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B4B8u);  if (depth < kMaxDepth) unit_0062(c, 158u, depth + 1u); else { c.pc = 0x002891F0u; return; } if (c.pc != 0x0027B4B8u) [[unlikely]] return; }
L_0027B4B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B4C0u);  if (depth < kMaxDepth) unit_005E(c, 178u, depth + 1u); else { c.pc = 0x0027B220u; return; } if (c.pc != 0x0027B4C0u) [[unlikely]] return; }
L_0027B4C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 20744u);
    set32(c.r[6], 0u + 3840u);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011AB50u | kUnwind; return; } [[clang::musttail]] return unit_0006(c, 201u, depth); }
L_0027B518:
    set32(c.r[8], ld32((c.r[4].w[0] + 140u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 60u)));
    st32((c.r[5].w[0]), c.r[8].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 140u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 136u)));
    set32(c.r[5], c.r[5].w[0] - c.r[3].w[0]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[7].w[0]), c.r[5].w[0]);  c.pc = t; return; }
L_0027B548:
    set32(c.r[2], ld32((c.r[4].w[0] + 140u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 136u)));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[4].w[0] + 140u), c.r[2].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 136u), c.r[3].w[0]);  c.pc = t; return; }
L_0027B568:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], c.r[8].w[0] - 20744u);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0027B5D4; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 2;
L_0027B5B0:
    c.r[2].d[0] = c.r[5].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 240u);  if (t) { goto L_0027B5D4; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027B5B0u | kUnwind; return; } goto L_0027B5B0; }
L_0027B5D4:
    set32(c.r[3], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027B680; } }
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[8].w[0] - 20744u);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[6], 0u + 240u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B604u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0027B604u) [[unlikely]] return; }
L_0027B604:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B610u); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0062(c, 159u, depth + 1u); else { c.pc = 0x00289240u; return; } if (c.pc != 0x0027B610u) [[unlikely]] return; }
L_0027B610:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0027B628; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B620u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 195u, depth + 1u); else { c.pc = 0x0027B6A0u; return; } if (c.pc != 0x0027B620u) [[unlikely]] return; }
L_0027B620:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027B680; } }
L_0027B628:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00280000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00280000u);
    set32(c.r[7], 0u - 128u);
    set32(c.r[2], c.r[2].w[0] - 19176u);
    set32(c.r[3], c.r[3].w[0] - 19128u);
    st32((c.r[16].w[0] + 56u), c.r[20].w[0]);
    st32((c.r[16].w[0] + 60u), c.r[19].w[0]);
    set32(c.r[4], c.r[16].w[0] + 204u);
    st32((c.r[16].w[0] + 64u), c.r[17].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 68u), c.r[18].w[0]);
    set32(c.r[6], 0u + 16u);
    st32((c.r[16].w[0] + 120u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 128u), c.r[3].w[0]);
    st16((c.r[16].w[0] + 224u), static_cast<std::uint16_t>(c.r[7].w[0]));
    st32((c.r[16].w[0] + 124u), c.r[16].w[0]);
    st32((c.r[16].w[0] + 132u), c.r[16].w[0]);
    st32((c.r[16].w[0] + 200u), 0u);
    st16((c.r[16].w[0] + 220u), static_cast<std::uint16_t>(0u));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B67Cu); st16((c.r[16].w[0] + 222u), static_cast<std::uint16_t>(c.r[7].w[0]));  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0027B67Cu) [[unlikely]] return; }
L_0027B67C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0027B680:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027B6A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_0027B6D4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B6C0u); st32((c.r[16].w[0] + 8u), 0u);  if (depth < kMaxDepth) unit_0062(c, 169u, depth + 1u); else { c.pc = 0x002893B8u; return; } if (c.pc != 0x0027B6C0u) [[unlikely]] return; }
L_0027B6C0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B6D0u); set32(c.r[6], 0u + 240u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0027B6D0u) [[unlikely]] return; }
L_0027B6D0:
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_0027B6D4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0027B6E8:
    set32(c.r[29], c.r[29].w[0] - 160u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 80u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 88u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 104u), c.r[19].d[0]);
    set32(c.r[19], c.r[16].w[0] + 12u);
    st64((c.r[29].w[0] + 112u), c.r[20].d[0]);
    set32(c.r[20], c.r[16].w[0] + 24u);
    st64((c.r[29].w[0] + 120u), c.r[21].d[0]);
    set32(c.r[21], c.r[16].w[0] + 13u);
    st64((c.r[29].w[0] + 128u), c.r[22].d[0]);
    set32(c.r[22], c.r[16].w[0] + 14u);
    st64((c.r[29].w[0] + 136u), c.r[23].d[0]);
    set32(c.r[23], c.r[16].w[0] + 16u);
    st64((c.r[29].w[0] + 144u), c.r[30].d[0]);
    set32(c.r[30], c.r[16].w[0] + 15u);
    st64((c.r[29].w[0] + 152u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 64u);
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[16].w[0] + 20u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[8].d[0] = c.r[21].d[0] + 0ull;
    c.r[9].d[0] = c.r[30].d[0] + 0ull;
    c.r[10].d[0] = c.r[22].d[0] + 0ull;
    c.r[11].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    st32((c.r[29].w[0]), c.r[20].w[0]);
    c.budget -= 35;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B774u); st32((c.r[29].w[0] + 8u), c.r[23].w[0]);  if (depth < kMaxDepth) unit_005F(c, 81u, depth + 1u); else { c.pc = 0x0027D5D0u; return; } if (c.pc != 0x0027B774u) [[unlikely]] return; }
L_0027B774:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027B9A4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.r[2].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0027B870; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 176u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 8u);  goto L_0027B7B8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[4], c.r[4].w[0] + 21072u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B7ACu); set32(c.r[5], c.r[5].w[0] + 21104u);  if (depth < kMaxDepth) unit_005F(c, 114u, depth + 1u); else { c.pc = 0x0027EF60u; return; } if (c.pc != 0x0027B7ACu) [[unlikely]] return; }
L_0027B7AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0027B9A4; } }
    c.budget -= 1;
L_0027B7B8:
    set32(c.r[9], 0u + 96u);
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[8], 0u + 10u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0])));
    set32(c.r[6], c.r[29].w[0] + 66u);
    set32(c.r[7], c.r[29].w[0] + 67u);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    st8((c.r[30].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[23].w[0]), c.r[9].w[0]);
    st16((c.r[16].w[0] + 152u), static_cast<std::uint16_t>(c.r[8].w[0]));
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 36u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 38u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 40u), 0u);
    st32((c.r[16].w[0] + 44u), 0u);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B818u); st32((c.r[16].w[0] + 136u), 0u);  if (depth < kMaxDepth) unit_005F(c, 83u, depth + 1u); else { c.pc = 0x0027D750u; return; } if (c.pc != 0x0027B818u) [[unlikely]] return; }
L_0027B818:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0027B8F4; } }
    set32(c.r[7], ld32((c.r[20].w[0])));
    c.r[5].d[0] = ld8((c.r[29].w[0] + 66u));
    set32(c.r[8], c.r[29].w[0] + 50u);
    c.r[6].d[0] = ld8((c.r[29].w[0] + 67u));
    set32(c.r[9], c.r[29].w[0] + 52u);
    set32(c.r[10], c.r[29].w[0] + 54u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B840u); st16((c.r[29].w[0] + 48u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_005E(c, 246u, depth + 1u); else { c.pc = 0x0027BDC8u; return; } if (c.pc != 0x0027B840u) [[unlikely]] return; }
L_0027B840:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[2], 0u - 1u);  if (t) { goto L_0027B9A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 20768u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 14u)));  goto L_0027B970; }
    set32(c.r[4], ld32((c.r[16].w[0] + 176u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B864u); set32(c.r[5], c.r[29].w[0] + 48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027B864u) [[unlikely]] return; }
L_0027B864:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 14u)));  if (t) { goto L_0027B970; } }
    c.budget -= 1;
L_0027B870:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 66u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B880u); set32(c.r[7], c.r[29].w[0] + 67u);  if (depth < kMaxDepth) unit_005F(c, 83u, depth + 1u); else { c.pc = 0x0027D750u; return; } if (c.pc != 0x0027B880u) [[unlikely]] return; }
L_0027B880:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0027B8F4; } }
    set32(c.r[7], ld32((c.r[20].w[0])));
    c.r[5].d[0] = ld8((c.r[29].w[0] + 66u));
    set32(c.r[8], c.r[29].w[0] + 68u);
    c.r[6].d[0] = ld8((c.r[29].w[0] + 67u));
    set32(c.r[9], c.r[29].w[0] + 70u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B8A4u); set32(c.r[10], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_005E(c, 246u, depth + 1u); else { c.pc = 0x0027BDC8u; return; } if (c.pc != 0x0027B8A4u) [[unlikely]] return; }
L_0027B8A4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[19], c.r[16].w[0] + 28u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027B7ACu | kUnwind; return; } goto L_0027B7AC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 68u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 70u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B8C0u); c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 72u)));  if (depth < kMaxDepth) unit_0062(c, 167u, depth + 1u); else { c.pc = 0x00289388u; return; } if (c.pc != 0x0027B8C0u) [[unlikely]] return; }
L_0027B8C0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B8D0u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 82u, depth + 1u); else { c.pc = 0x0027D6D0u; return; } if (c.pc != 0x0027B8D0u) [[unlikely]] return; }
L_0027B8D0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[20], c.r[29].w[0] + 32u);  if (t) { goto L_0027B8F4; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B8ECu); c.r[7].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 84u, depth + 1u); else { c.pc = 0x0027D7C8u; return; } if (c.pc != 0x0027B8ECu) [[unlikely]] return; }
L_0027B8EC:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[29].w[0] + 76u)));  goto L_0027B900; }
L_0027B8F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027B9A4; } }
    c.budget -= 1;
L_0027B900:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B910u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_0062(c, 164u, depth + 1u); else { c.pc = 0x00289310u; return; } if (c.pc != 0x0027B910u) [[unlikely]] return; }
L_0027B910:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B920u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 165u, depth + 1u); else { c.pc = 0x00289338u; return; } if (c.pc != 0x0027B920u) [[unlikely]] return; }
L_0027B920:
    set32(c.r[2], c.r[16].w[0] + 52u);
    set32(c.r[6], c.r[16].w[0] + 32u);
    set32(c.r[7], c.r[16].w[0] + 36u);
    set32(c.r[8], c.r[16].w[0] + 38u);
    set32(c.r[9], c.r[16].w[0] + 40u);
    set32(c.r[10], c.r[16].w[0] + 44u);
    set32(c.r[11], c.r[16].w[0] + 48u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B94Cu); st32((c.r[29].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005F(c, 86u, depth + 1u); else { c.pc = 0x0027D900u; return; } if (c.pc != 0x0027B94Cu) [[unlikely]] return; }
L_0027B94C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[16].w[0] + 200u);
    set32(c.r[7], c.r[16].w[0] + 204u);
    set32(c.r[8], c.r[16].w[0] + 220u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B968u); set32(c.r[9], c.r[16].w[0] + 222u);  if (depth < kMaxDepth) unit_005F(c, 88u, depth + 1u); else { c.pc = 0x0027DB60u; return; } if (c.pc != 0x0027B968u) [[unlikely]] return; }
L_0027B968:
    st16((c.r[16].w[0] + 152u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 14u)));
    c.budget -= 2;
L_0027B970:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 15u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 68u)));
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 88u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 92u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 96u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 100u), c.r[7].w[0]);
    st32((c.r[16].w[0] + 140u), 0u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 64u)));
    c.budget -= 13;
L_0027B9A4:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 88u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 104u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 120u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 136u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 152u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0027B9D8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = 0ull | 32768ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.r[3].d[0] = ld16((c.r[16].w[0]));
    set32(c.r[7], c.r[3].w[0] << 8);
    set32(c.r[3], c.r[3].w[0] >> 8);
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0027BA30; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027B6E8u | kUnwind; return; } goto L_0027B6E8; }
L_0027BA30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BA38u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 40u, depth + 1u); else { c.pc = 0x0027CA40u; return; } if (c.pc != 0x0027BA38u) [[unlikely]] return; }
L_0027BA38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0027BA60; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_005F(c, 32u, depth); }
L_0027BA60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BA68u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 67u, depth + 1u); else { c.pc = 0x0027D248u; return; } if (c.pc != 0x0027BA68u) [[unlikely]] return; }
L_0027BA68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0027BA90; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_005F(c, 47u, depth); }
L_0027BA90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BA98u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 131u, depth + 1u); else { c.pc = 0x0027A178u; return; } if (c.pc != 0x0027BA98u) [[unlikely]] return; }
L_0027BA98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0027BAC0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027A2F0u | kUnwind; return; } goto L_0027A2F0; }
L_0027BAC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BAC8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 152u, depth + 1u); else { c.pc = 0x0027AA60u; return; } if (c.pc != 0x0027BAC8u) [[unlikely]] return; }
L_0027BAC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0027BAF0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027ABC8u | kUnwind; return; } goto L_0027ABC8; }
L_0027BAF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BAF8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 120u, depth + 1u); else { c.pc = 0x00279C70u; return; } if (c.pc != 0x0027BAF8u) [[unlikely]] return; }
L_0027BAF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0027BB20; } }
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00279BC0u | kUnwind; return; } goto L_00279BC0; }
L_0027BB20:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u - 1u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027BB40:
    st32((c.r[4].w[0] + 124u), c.r[6].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 120u), c.r[5].w[0]);  c.pc = t; return; }
L_0027BB60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 60u)));  c.pc = t; return; }
L_0027BB68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 152u)));  c.pc = t; return; }
L_0027BB70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 20u)));  c.pc = t; return; }
L_0027BB78:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 14u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[5].d[0] = ld8((c.r[4].w[0] + 14u));  if (t) { goto L_0027BB94; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 228u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0027BB9C; } }
L_0027BB94:
    set32(c.r[2], c.r[5].w[0] << 24);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.budget -= 2;
L_0027BB9C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0027BBA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 13u)));  c.pc = t; return; }
L_0027BBB0:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 152u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], 0u + 16u);  if (t) { goto L_0027BC08; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0027BBE8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 154u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; c.r[4].d[0] = c.r[3].d[0] ^ 1ull;  if (t) { goto L_0027BC08; } }
    set32(c.r[3], 0u + 16u);
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; if (c.r[4].d[0] != 0) c.r[2].d[0] = c.r[3].d[0];  c.pc = t; return; }
L_0027BBE8:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 16u);  goto L_0027BC08; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 154u)));
    set32(c.r[4], 0u + 16u);
    set32(c.r[2], 0u + 4u);
    c.r[3].d[0] = c.r[3].d[0] ^ 2ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];  c.pc = t; return; }
L_0027BC08:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0027BC10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 16u)));  c.pc = t; return; }
L_0027BC20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 24u)));  c.pc = t; return; }
L_0027BC38:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 36u)));  c.pc = t; return; }
L_0027BC40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 40u)));  c.pc = t; return; }
L_0027BC48:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027BC54; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 1;
L_0027BC54:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0027BC60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 48u)));  c.pc = t; return; }
L_0027BC68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 52u)));  c.pc = t; return; }
L_0027BC70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 200u)));  c.pc = t; return; }
L_0027BC78:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 220u)));  c.pc = t; return; }
L_0027BC80:
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 222u)));  c.pc = t; return; }
L_0027BC90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 204u);  c.pc = t; return; }
L_0027BC98:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[5], c.r[16].w[0] + 168u);
    set32(c.r[6], c.r[16].w[0] + 172u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BCB8u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_0062(c, 166u, depth + 1u); else { c.pc = 0x00289360u; return; } if (c.pc != 0x0027BCB8u) [[unlikely]] return; }
L_0027BCB8:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[7], c.r[16].w[0] + 166u);
    set32(c.r[5], c.r[16].w[0] + 162u);
    set32(c.r[6], c.r[16].w[0] + 164u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0062(c, 168u, depth); }
L_0027BCD8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[5], c.r[16].w[0] + 168u);
    set32(c.r[6], c.r[16].w[0] + 172u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BCF8u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_0062(c, 165u, depth + 1u); else { c.pc = 0x00289338u; return; } if (c.pc != 0x0027BCF8u) [[unlikely]] return; }
L_0027BCF8:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 162u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0062(c, 167u, depth); }
L_0027BD18:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BD38u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0027BD38u) [[unlikely]] return; }
L_0027BD38:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BD50u); set32(c.r[8], c.r[29].w[0] + 4u);  if (depth < kMaxDepth) unit_005E(c, 179u, depth + 1u); else { c.pc = 0x0027B260u; return; } if (c.pc != 0x0027BD50u) [[unlikely]] return; }
L_0027BD50:
    c.r[3].d[0] = ld16((c.r[29].w[0]));
    c.r[4].d[0] = ld16((c.r[29].w[0] + 2u));
    c.r[2].d[0] = ld16((c.r[29].w[0] + 4u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    st16((c.r[17].w[0] + 156u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[17].w[0] + 160u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[17].w[0] + 158u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027BD80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BD94u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0027BD94u) [[unlikely]] return; }
L_0027BD94:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 20756u);
    set32(c.r[7], c.r[7].w[0] - 20754u);
    set32(c.r[8], c.r[8].w[0] - 20752u);
    c.budget -= 12;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027B260u | kUnwind; return; } goto L_0027B260; }
L_0027BDC8:
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[9].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[10].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.r[11].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 13;
    { const bool t = c.r[5].d[0] != 0ull; c.r[6].d[0] = c.r[6].d[0] & 255ull;  if (t) { goto L_0027BEA0; } }
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;  goto L_0027BE40; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 21144u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BE1Cu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x0027BE1Cu) [[unlikely]] return; }
L_0027BE1C:
    set32(c.r[5], 0u + 8u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BE34u); c.r[8].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 179u, depth + 1u); else { c.pc = 0x0027B260u; return; } if (c.pc != 0x0027BE34u) [[unlikely]] return; }
L_0027BE34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0027BEB0; } }
    c.budget -= 1;
L_0027BE40:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));  goto L_0027BEA4; }
    set32(c.r[2], ld32((c.r[11].w[0] + 156u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld16((c.r[11].w[0] + 156u));  goto L_0027BE88; }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[11].w[0] + 160u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld16((c.r[11].w[0] + 156u));  goto L_0027BE88; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].d[0] = ld16((c.r[2].w[0] - 20756u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st16((c.r[11].w[0] + 156u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld16((c.r[4].w[0] - 20754u));
    st16((c.r[11].w[0] + 158u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[5].w[0] - 20752u));
    st16((c.r[11].w[0] + 160u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld16((c.r[11].w[0] + 156u));
    c.budget -= 10;
L_0027BE88:
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[11].w[0] + 158u));
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld16((c.r[11].w[0] + 160u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0027BEAC; } }
L_0027BEA0:
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_0027BEA4:
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_0027BEAC:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0027BEB0:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027BEC8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 4u)));  c.pc = t; return; }
L_0027BED0:
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 152u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[8].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0027BF10; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 15u)));
    st32((c.r[7].w[0] + 72u), c.r[8].w[0]);
    mmi::div(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x0027BEF0u);  goto L_0027BEF4; }
L_0027BEF4:
    st32((c.r[7].w[0] + 116u), 0u);
    st32((c.r[7].w[0] + 148u), 0u);
    st32((c.r[7].w[0] + 144u), 0u);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[7].w[0] + 76u), c.r[3].w[0]);  c.pc = t; return; }
L_0027BF10:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 13u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 14u)));
    c.r[3].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[4], c.r[2].w[0] + 7u);
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];
    st32((c.r[7].w[0] + 72u), c.r[8].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::div(c, 1, c.r[6].w[0], c.r[2].w[0]);
    c.budget -= 11;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x0027BF38u);  goto L_0027BF3C; }
L_0027BF3C:
    st32((c.r[7].w[0] + 148u), 0u);
    st32((c.r[7].w[0] + 116u), 0u);
    st32((c.r[7].w[0] + 144u), 0u);
    c.r[3].d[0] = c.lo.d[1];
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[7].w[0] + 76u), c.r[3].w[0]);  c.pc = t; return; }
L_0027BF58:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0027BF68; } }
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 1;
L_0027BF68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0027BF70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 228u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);  if (t) { goto L_0027BF98; } }
    set32(c.r[3], ld32((c.r[2].w[0] - 20760u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BF98u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027BF98u) [[unlikely]] return; }
L_0027BF98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BFA0u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_0062(c, 175u, depth + 1u); else { c.pc = 0x002894B0u; return; } if (c.pc != 0x0027BFA0u) [[unlikely]] return; }
L_0027BFA0:
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0027BFB8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 8;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0027BFEC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BFE0u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_0062(c, 176u, depth + 1u); else { c.pc = 0x002894D8u; return; } if (c.pc != 0x0027BFE0u) [[unlikely]] return; }
L_0027BFE0:
    st32((c.r[16].w[0] + 140u), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
L_0027BFEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0027BFF8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 148u)));  c.pc = t; return; }
}

}
