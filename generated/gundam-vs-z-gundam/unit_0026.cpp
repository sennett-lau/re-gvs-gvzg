#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0026[4096] = {
    1, 2, 3, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0, 0, 0, 9, 0,
    0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 24, 0,
    0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0,
    76, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 97, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0,
    116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134,
    0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0,
    143, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 152, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 155, 0, 156, 0, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    163, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 166, 0, 167, 0, 168, 0, 169, 0, 0, 0, 0, 0, 0, 0, 170, 0, 171, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0,
    175, 0, 176, 0, 177, 0, 0, 0, 0, 0, 0, 0, 178, 0, 179, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 183, 0, 184, 0, 185, 0,
    186, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 190, 0, 191, 0, 192, 0, 193, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    196, 0, 197, 0, 198, 0, 0, 0, 199, 0, 0, 0, 200, 0, 201, 0, 202, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 205, 0, 206, 0, 207, 0, 0, 0, 208, 0, 0, 0, 209, 0, 210, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 214, 0, 215, 0, 216, 0, 217, 0, 218, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 228, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 232, 0, 233, 0, 234, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 241, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 243, 0, 244, 0, 245, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 248, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    253, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 260, 0, 261, 0, 262, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 265, 0, 266, 0, 267, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 269, 270, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0026(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00198000;
    case 2u: goto L_00198004;
    case 3u: goto L_00198008;
    case 4u: goto L_0019801C;
    case 5u: goto L_00198028;
    case 6u: goto L_00198038;
    case 7u: goto L_00198050;
    case 8u: goto L_00198060;
    case 9u: goto L_00198078;
    case 10u: goto L_0019808C;
    case 11u: goto L_001980A0;
    case 12u: goto L_001980B4;
    case 13u: goto L_001980C8;
    case 14u: goto L_001980DC;
    case 15u: goto L_001980F0;
    case 16u: goto L_00198150;
    case 17u: goto L_001981F0;
    case 18u: goto L_00198228;
    case 19u: goto L_00198298;
    case 20u: goto L_001982A8;
    case 21u: goto L_001982C8;
    case 22u: goto L_001982D8;
    case 23u: goto L_001982E8;
    case 24u: goto L_001982F8;
    case 25u: goto L_00198308;
    case 26u: goto L_00198340;
    case 27u: goto L_001983D0;
    case 28u: goto L_00198470;
    case 29u: goto L_001984AC;
    case 30u: goto L_001984D0;
    case 31u: goto L_00198534;
    case 32u: goto L_001985AC;
    case 33u: goto L_001985C0;
    case 34u: goto L_001985F8;
    case 35u: goto L_00198650;
    case 36u: goto L_0019868C;
    case 37u: goto L_001986C8;
    case 38u: goto L_001986F0;
    case 39u: goto L_00198720;
    case 40u: goto L_00198788;
    case 41u: goto L_00198798;
    case 42u: goto L_001987A8;
    case 43u: goto L_001987D0;
    case 44u: goto L_00198804;
    case 45u: goto L_00198818;
    case 46u: goto L_001988D0;
    case 47u: goto L_00198920;
    case 48u: goto L_0019899C;
    case 49u: goto L_00198B08;
    case 50u: goto L_00198B18;
    case 51u: goto L_00198B30;
    case 52u: goto L_00198BA0;
    case 53u: goto L_00198BC4;
    case 54u: goto L_00198C78;
    case 55u: goto L_00198D24;
    case 56u: goto L_00198E20;
    case 57u: goto L_00198E30;
    case 58u: goto L_00198E48;
    case 59u: goto L_00198EB0;
    case 60u: goto L_00198F20;
    case 61u: goto L_00198F48;
    case 62u: goto L_00198F6C;
    case 63u: goto L_00198FB0;
    case 64u: goto L_00198FC0;
    case 65u: goto L_00199008;
    case 66u: goto L_00199018;
    case 67u: goto L_0019903C;
    case 68u: goto L_00199088;
    case 69u: goto L_001990D0;
    case 70u: goto L_001990E0;
    case 71u: goto L_00199198;
    case 72u: goto L_001991E0;
    case 73u: goto L_0019923C;
    case 74u: goto L_00199260;
    case 75u: goto L_00199270;
    case 76u: goto L_00199280;
    case 77u: goto L_00199290;
    case 78u: goto L_001992B4;
    case 79u: goto L_00199300;
    case 80u: goto L_00199348;
    case 81u: goto L_00199360;
    case 82u: goto L_00199398;
    case 83u: goto L_00199408;
    case 84u: goto L_001994B0;
    case 85u: goto L_00199520;
    case 86u: goto L_00199548;
    case 87u: goto L_001995C8;
    case 88u: goto L_00199660;
    case 89u: goto L_001996A0;
    case 90u: goto L_0019972C;
    case 91u: goto L_00199BC0;
    case 92u: goto L_00199BD0;
    case 93u: goto L_00199C20;
    case 94u: goto L_00199C44;
    case 95u: goto L_00199CA8;
    case 96u: goto L_00199D10;
    case 97u: goto L_00199D2C;
    case 98u: goto L_00199D30;
    case 99u: goto L_00199D48;
    case 100u: goto L_00199DB8;
    case 101u: goto L_00199DC8;
    case 102u: goto L_00199DF8;
    case 103u: goto L_00199E70;
    case 104u: goto L_00199ED4;
    case 105u: goto L_00199EE4;
    case 106u: goto L_00199F10;
    case 107u: goto L_00199F2C;
    case 108u: goto L_0019A040;
    case 109u: goto L_0019A050;
    case 110u: goto L_0019A090;
    case 111u: goto L_0019A0B0;
    case 112u: goto L_0019A0C0;
    case 113u: goto L_0019A110;
    case 114u: goto L_0019A170;
    case 115u: goto L_0019A270;
    case 116u: goto L_0019A280;
    case 117u: goto L_0019A3E0;
    case 118u: goto L_0019A428;
    case 119u: goto L_0019A490;
    case 120u: goto L_0019A5BC;
    case 121u: goto L_0019A5DC;
    case 122u: goto L_0019A66C;
    case 123u: goto L_0019A6C4;
    case 124u: goto L_0019A744;
    case 125u: goto L_0019A770;
    case 126u: goto L_0019A820;
    case 127u: goto L_0019A908;
    case 128u: goto L_0019A968;
    case 129u: goto L_0019A9BC;
    case 130u: goto L_0019AA40;
    case 131u: goto L_0019AA5C;
    case 132u: goto L_0019AAB8;
    case 133u: goto L_0019AAD4;
    case 134u: goto L_0019AAFC;
    case 135u: goto L_0019AB14;
    case 136u: goto L_0019AB3C;
    case 137u: goto L_0019AB68;
    case 138u: goto L_0019AB90;
    case 139u: goto L_0019ABC8;
    case 140u: goto L_0019AC00;
    case 141u: goto L_0019AC64;
    case 142u: goto L_0019AC74;
    case 143u: goto L_0019AC80;
    case 144u: goto L_0019AC8C;
    case 145u: goto L_0019ACA0;
    case 146u: goto L_0019ACB4;
    case 147u: goto L_0019ACE0;
    case 148u: goto L_0019AD24;
    case 149u: goto L_0019AD50;
    case 150u: goto L_0019ADA0;
    case 151u: goto L_0019ADDC;
    case 152u: goto L_0019ADE8;
    case 153u: goto L_0019AE2C;
    case 154u: goto L_0019AE3C;
    case 155u: goto L_0019AE48;
    case 156u: goto L_0019AE50;
    case 157u: goto L_0019AE5C;
    case 158u: goto L_0019AE78;
    case 159u: goto L_0019AEA0;
    case 160u: goto L_0019AED4;
    case 161u: goto L_0019AEF8;
    case 162u: goto L_0019AF30;
    case 163u: goto L_0019AF80;
    case 164u: goto L_0019AF90;
    case 165u: goto L_0019AFA8;
    case 166u: goto L_0019B008;
    case 167u: goto L_0019B010;
    case 168u: goto L_0019B018;
    case 169u: goto L_0019B020;
    case 170u: goto L_0019B040;
    case 171u: goto L_0019B048;
    case 172u: goto L_0019B050;
    case 173u: goto L_0019B090;
    case 174u: goto L_0019B0F8;
    case 175u: goto L_0019B100;
    case 176u: goto L_0019B108;
    case 177u: goto L_0019B110;
    case 178u: goto L_0019B130;
    case 179u: goto L_0019B138;
    case 180u: goto L_0019B140;
    case 181u: goto L_0019B170;
    case 182u: goto L_0019B1E0;
    case 183u: goto L_0019B1E8;
    case 184u: goto L_0019B1F0;
    case 185u: goto L_0019B1F8;
    case 186u: goto L_0019B200;
    case 187u: goto L_0019B208;
    case 188u: goto L_0019B240;
    case 189u: goto L_0019B2B0;
    case 190u: goto L_0019B2B8;
    case 191u: goto L_0019B2C0;
    case 192u: goto L_0019B2C8;
    case 193u: goto L_0019B2D0;
    case 194u: goto L_0019B2D8;
    case 195u: goto L_0019B310;
    case 196u: goto L_0019B380;
    case 197u: goto L_0019B388;
    case 198u: goto L_0019B390;
    case 199u: goto L_0019B3A0;
    case 200u: goto L_0019B3B0;
    case 201u: goto L_0019B3B8;
    case 202u: goto L_0019B3C0;
    case 203u: goto L_0019B3C8;
    case 204u: goto L_0019B410;
    case 205u: goto L_0019B498;
    case 206u: goto L_0019B4A0;
    case 207u: goto L_0019B4A8;
    case 208u: goto L_0019B4B8;
    case 209u: goto L_0019B4C8;
    case 210u: goto L_0019B4D0;
    case 211u: goto L_0019B4D8;
    case 212u: goto L_0019B520;
    case 213u: goto L_0019B5A0;
    case 214u: goto L_0019B5A8;
    case 215u: goto L_0019B5B0;
    case 216u: goto L_0019B5B8;
    case 217u: goto L_0019B5C0;
    case 218u: goto L_0019B5C8;
    case 219u: goto L_0019B5D0;
    case 220u: goto L_0019B610;
    case 221u: goto L_0019B664;
    case 222u: goto L_0019B6A0;
    case 223u: goto L_0019B750;
    case 224u: goto L_0019B758;
    case 225u: goto L_0019B790;
    case 226u: goto L_0019B7A4;
    case 227u: goto L_0019B830;
    case 228u: goto L_0019B838;
    case 229u: goto L_0019B840;
    case 230u: goto L_0019B870;
    case 231u: goto L_0019B8E0;
    case 232u: goto L_0019B8E8;
    case 233u: goto L_0019B8F0;
    case 234u: goto L_0019B8F8;
    case 235u: goto L_0019B930;
    case 236u: goto L_0019B9B8;
    case 237u: goto L_0019B9CC;
    case 238u: goto L_0019BA20;
    case 239u: goto L_0019BA34;
    case 240u: goto L_0019BA64;
    case 241u: goto L_0019BA6C;
    case 242u: goto L_0019BAB0;
    case 243u: goto L_0019BB90;
    case 244u: goto L_0019BB98;
    case 245u: goto L_0019BBA0;
    case 246u: goto L_0019BBA8;
    case 247u: goto L_0019BBE0;
    case 248u: goto L_0019BBF4;
    case 249u: goto L_0019BC20;
    case 250u: goto L_0019BC50;
    case 251u: goto L_0019BCB0;
    case 252u: goto L_0019BCC4;
    case 253u: goto L_0019BD00;
    case 254u: goto L_0019BD14;
    case 255u: goto L_0019BD40;
    case 256u: goto L_0019BD70;
    case 257u: goto L_0019BDA0;
    case 258u: goto L_0019BDC8;
    case 259u: goto L_0019BE40;
    case 260u: goto L_0019BE98;
    case 261u: goto L_0019BEA0;
    case 262u: goto L_0019BEA8;
    case 263u: goto L_0019BEB0;
    case 264u: goto L_0019BF48;
    case 265u: goto L_0019BF50;
    case 266u: goto L_0019BF58;
    case 267u: goto L_0019BF60;
    case 268u: goto L_0019BFA4;
    case 269u: goto L_0019BFAC;
    case 270u: goto L_0019BFB0;
    case 271u: goto L_0019BFC0;
    case 272u: goto L_0019BFD0;
    default: bad_entry(c, 0x00198000u); return;
    }
L_00198000:
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_00198004:
    c.budget -= 1;
L_00198008:
    set32(c.r[20], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019801Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x0019801Cu) [[unlikely]] return; }
L_0019801C:
    st32((c.r[19].w[0]), c.r[21].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[20].w[0]);  if (t) { goto L_001980F0; } }
L_00198028:
    set32(c.r[20], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198038u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x00198038u) [[unlikely]] return; }
L_00198038:
    set32(c.r[4], c.r[21].w[0] + 4u);
    set32(c.r[3], c.r[20].w[0] + 4u);
    st32((c.r[19].w[0]), c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[3].w[0]);  if (t) { goto L_001980F0; } }
    c.budget -= 1;
L_00198050:
    set32(c.r[20], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198060u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x00198060u) [[unlikely]] return; }
L_00198060:
    set32(c.r[4], c.r[21].w[0] + 4u);
    set32(c.r[3], c.r[20].w[0] + 4u);
    st32((c.r[19].w[0]), c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[3].w[0]);  if (t) { goto L_001980F0; } }
    c.budget -= 1;
L_00198078:
    set32(c.r[20], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019808Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x0019808Cu) [[unlikely]] return; }
L_0019808C:
    set32(c.r[4], c.r[21].w[0] + 4u);
    set32(c.r[3], c.r[20].w[0] + 4u);
    st32((c.r[19].w[0]), c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[3].w[0]);  if (t) { goto L_001980F0; } }
L_001980A0:
    set32(c.r[20], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001980B4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x001980B4u) [[unlikely]] return; }
L_001980B4:
    set32(c.r[4], c.r[21].w[0] + 4u);
    set32(c.r[3], c.r[20].w[0] + 4u);
    st32((c.r[19].w[0]), c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[3].w[0]);  if (t) { goto L_001980F0; } }
L_001980C8:
    set32(c.r[20], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001980DCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x001980DCu) [[unlikely]] return; }
L_001980DC:
    set32(c.r[4], c.r[21].w[0] + 4u);
    set32(c.r[3], c.r[20].w[0] + 4u);
    st32((c.r[19].w[0]), c.r[4].w[0]);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.budget -= 5;
L_001980F0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[19], c.r[19].w[0] + 4u);
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00197CF8u | kUnwind; return; } [[clang::musttail]] return unit_0025(c, 229u, depth); } }
    set32(c.r[23], c.r[23].w[0] + 1u);
    c.r[3].d[0] = c.r[23].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00197CE0u | kUnwind; return; } [[clang::musttail]] return unit_0025(c, 228u, depth); } }
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00198150:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st16((c.r[1].w[0] + 21408u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st8((c.r[28].w[0] - 24124u), static_cast<std::uint8_t>(0u));
    st16((c.r[1].w[0] + 21410u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st8((c.r[28].w[0] - 24123u), static_cast<std::uint8_t>(0u));
    st16((c.r[1].w[0] + 21412u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st8((c.r[28].w[0] - 24122u), static_cast<std::uint8_t>(0u));
    st16((c.r[1].w[0] + 21414u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st8((c.r[28].w[0] - 24121u), static_cast<std::uint8_t>(0u));
    set32(c.r[7], ld32((c.r[1].w[0] - 13296u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[6], ld32((c.r[1].w[0] - 13292u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 13288u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 13284u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20112u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20116u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20120u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20124u), c.r[4].w[0]);
    st8((c.r[3].w[0] + 38u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[3].w[0] + 39u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[3].w[0] + 274u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[3].w[0] + 275u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 24128u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 24132u), static_cast<std::uint8_t>(0u));
    c.budget -= 40;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[28].w[0] - 24136u), static_cast<std::uint16_t>(0u));  c.pc = t; return; }
L_001981F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 20u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00198320; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] + 20112u);
    set32(c.r[16], c.r[16].w[0] + 21424u);
    c.budget -= 5;
L_00198228:
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[3], 0u + 255u);
    c.r[4].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 8u);  if (t) { goto L_00198308; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00198300; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 5u);  if (t) { goto L_001982F0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001982E0; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_001982D0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001982C0; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_001982B0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001982A0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00198290; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00198308; } }
L_00198290:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198298u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 39u, depth + 1u); else { c.pc = 0x00198720u; return; } if (c.pc != 0x00198298u) [[unlikely]] return; }
L_00198298:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00198308; } }
L_001982A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001982A8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001986F0u; return; } if (c.pc != 0x001982A8u) [[unlikely]] return; }
L_001982A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00198308; } }
L_001982B0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_00198308; } }
    c.budget -= 1;
L_001982C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001982C8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 26u, depth + 1u); else { c.pc = 0x00198340u; return; } if (c.pc != 0x001982C8u) [[unlikely]] return; }
L_001982C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00198308; } }
L_001982D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001982D8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 72u, depth + 1u); else { c.pc = 0x001991E0u; return; } if (c.pc != 0x001982D8u) [[unlikely]] return; }
L_001982D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00198308; } }
L_001982E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001982E8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 35u, depth + 1u); else { c.pc = 0x00198650u; return; } if (c.pc != 0x001982E8u) [[unlikely]] return; }
L_001982E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00198308; } }
L_001982F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001982F8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 28u, depth + 1u); else { c.pc = 0x00198470u; return; } if (c.pc != 0x001982F8u) [[unlikely]] return; }
L_001982F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00198308; } }
L_00198300:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198308u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 30u, depth + 1u); else { c.pc = 0x001984D0u; return; } if (c.pc != 0x00198308u) [[unlikely]] return; }
L_00198308:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00198228u | kUnwind; return; } goto L_00198228; } }
    c.budget -= 1;
L_00198320:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00198340:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], c.r[28].w[0] - 24124u);
    set32(c.r[7], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[6], c.r[4].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 20112u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[8], ld32((c.r[6].w[0])));  if (t) { goto L_00198398; } }
    c.r[5].d[0] = ld8((c.r[8].w[0] + 1u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + 21408u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001983C8; } }
L_00198398:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + 21408u);
    set32(c.r[5], c.r[3].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001983C8; } }
    set32(c.r[3], c.r[8].w[0] + 4u);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_001983C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001983D0:
    set32(c.r[2], c.r[28].w[0] - 24124u);
    set32(c.r[7], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00198420; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00198458; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[6].d[0] = c.r[4].d[0] & 255ull;
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[6].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] - c.r[6].w[0]);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 21408u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], 0u + 1u);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_00198460; } }
L_00198420:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 21408u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00198448; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_00198458; } }
    c.budget -= 1;
L_00198448:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00198460; } }
L_00198458:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00198460:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00198470:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 20112u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] - 18416u);
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.r[6].d[0] = ld8((c.r[17].w[0] + 1u));
    c.r[7].d[0] = ld16((c.r[17].w[0] + 2u));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001984ACu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 46u, depth + 1u); else { c.pc = 0x00238530u; return; } if (c.pc != 0x001984ACu) [[unlikely]] return; }
L_001984AC:
    set32(c.r[3], c.r[17].w[0] + 4u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001984D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 20112u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24128u)));
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], 0u + 1u);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[6], ld32((c.r[5].w[0])));  if (t) { goto L_00198580; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00198508; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00198620; } }
L_00198508:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[2], c.r[2].w[0] + 17232u);
    set32(c.r[4], c.r[4].w[0] - 18496u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 23u)));
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198534u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 46u, depth + 1u); else { c.pc = 0x00238530u; return; } if (c.pc != 0x00198534u) [[unlikely]] return; }
L_00198534:
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[5], 0u + 4u);
    set32(c.r[7], 0u + 10u);
    set32(c.r[3], 0u + 240u);
    st8((c.r[4].w[0] + 25u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[6], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 82u)));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 116u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    st8((c.r[4].w[0] + 84u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st16((c.r[28].w[0] - 24136u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24128u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 24128u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00198640; } }
    c.budget -= 1;
L_00198580:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 24136u)));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st16((c.r[28].w[0] - 24136u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00198640; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 3u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001985B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001985ACu);  if (depth < kMaxDepth) unit_0026(c, 91u, depth + 1u); else { c.pc = 0x00199BC0u; return; } if (c.pc != 0x001985ACu) [[unlikely]] return; }
L_001985AC:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);  if (t) { goto L_001985C8; } }
L_001985B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001985C0u); c.r[4].d[0] = ld8((c.r[6].w[0] + 1u));  if (depth < kMaxDepth) unit_0026(c, 70u, depth + 1u); else { c.pc = 0x001990E0u; return; } if (c.pc != 0x001985C0u) [[unlikely]] return; }
L_001985C0:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 2;
L_001985C8:
    c.r[6].d[0] = c.r[2].d[0] << 56;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[2], c.r[2].w[0] + 17040u);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] - 18416u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001985F8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 46u, depth + 1u); else { c.pc = 0x00238530u; return; } if (c.pc != 0x001985F8u) [[unlikely]] return; }
L_001985F8:
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[5], 0u + 9u);
    set32(c.r[3], 0u + 240u);
    st8((c.r[4].w[0] + 26u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[28].w[0] - 24136u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24128u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 24128u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00198640; } }
    c.budget -= 1;
L_00198620:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 24136u)));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st16((c.r[28].w[0] - 24136u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00198640; } }
    set32(c.r[3], c.r[6].w[0] + 4u);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    st8((c.r[28].w[0] - 24128u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_00198640:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00198650:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] + 20112u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[16], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], 0u + 3u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[17], ld32((c.r[16].w[0])));  if (t) { goto L_001986BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019868Cu);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x0019868Cu) [[unlikely]] return; }
L_0019868C:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], 0u + 5u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 11952u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0])));  if (t) { goto L_001986C0; } }
L_001986BC:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 1u));
    c.budget -= 1;
L_001986C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001986C8u);  if (depth < kMaxDepth) unit_003D(c, 82u, depth + 1u); else { c.pc = 0x001F4D00u; return; } if (c.pc != 0x001986C8u) [[unlikely]] return; }
L_001986C8:
    set32(c.r[3], c.r[17].w[0] + 4u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001986F0:
    set32(c.r[6], c.r[4].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], c.r[3].w[0] + 21424u);
    set32(c.r[4], c.r[4].w[0] + 20112u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[4].w[0] + 4u);
    st32((c.r[5].w[0]), c.r[4].w[0]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0]), c.r[4].w[0]);  c.pc = t; return; }
L_00198720:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[3], c.r[3].w[0] + 20112u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] & 1ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[6], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[17], ld32((c.r[16].w[0])));
    set32(c.r[6], c.r[18].w[0] + c.r[6].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 38u)));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 2u));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 19;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001987B0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 274u)));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 3u));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001987B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198788u); c.r[4].d[0] = ld8((c.r[17].w[0] + 1u));  if (depth < kMaxDepth) unit_0026(c, 27u, depth + 1u); else { c.pc = 0x001983D0u; return; } if (c.pc != 0x00198788u) [[unlikely]] return; }
L_00198788:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001987B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198798u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 60u, depth + 1u); else { c.pc = 0x00198F20u; return; } if (c.pc != 0x00198798u) [[unlikely]] return; }
L_00198798:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001987A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001987A8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 43u, depth + 1u); else { c.pc = 0x001987D0u; return; } if (c.pc != 0x001987A8u) [[unlikely]] return; }
L_001987A8:
    set32(c.r[3], c.r[17].w[0] + 28u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_001987B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001987D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 39u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00198810; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198804u);  if (depth < kMaxDepth) unit_0026(c, 52u, depth + 1u); else { c.pc = 0x00198BA0u; return; } if (c.pc != 0x00198804u) [[unlikely]] return; }
L_00198804:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00198B78; } }
    c.budget -= 1;
L_00198810:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198818u);  if (depth < kMaxDepth) unit_0025(c, 222u, depth + 1u); else { c.pc = 0x00197AB0u; return; } if (c.pc != 0x00198818u) [[unlikely]] return; }
L_00198818:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00198B78; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 12u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00198850; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], c.r[17].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 274u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00198868; } }
    c.budget -= 1;
L_00198850:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], c.r[17].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 38u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 38u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_00198868:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 8663u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 8687u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 798u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 6u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00198898; } }
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 8680u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001988A0; } }
L_00198898:
    st8((c.r[16].w[0] + 8680u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.budget -= 2;
L_001988A0:
    st8((c.r[16].w[0] + 8661u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[16].w[0] + 515u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8661u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 12u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001988C8; } }
    st8((c.r[16].w[0] + 8685u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001988C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001988D0u); c.r[4].d[0] = ld8((c.r[18].w[0] + 13u));  if (depth < kMaxDepth) unit_0026(c, 70u, depth + 1u); else { c.pc = 0x001990E0u; return; } if (c.pc != 0x001988D0u) [[unlikely]] return; }
L_001988D0:
    st8((c.r[16].w[0] + 1970u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 886u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1970u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00198900; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[4], c.r[2].w[0] + 237u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 237u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00198900; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00198900:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 4u));
    st8((c.r[16].w[0] + 8658u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8658u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 3u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198920u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 53u, depth + 1u); else { c.pc = 0x001E9250u; return; } if (c.pc != 0x00198920u) [[unlikely]] return; }
L_00198920:
    c.r[4].d[0] = ld8((c.r[18].w[0] + 14u));
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 876u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.f[0] = ld32((c.r[18].w[0] + 16u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 20u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 24u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 40u), c.f[0]);
    c.r[4].d[0] = ld8((c.r[18].w[0] + 11u));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 513u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = ld8((c.r[18].w[0] + 12u));
    c.budget -= 18;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00198970; } }
    st8((c.r[16].w[0] + 513u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00198970:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 15u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001989A8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    c.f[2] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[3] = ld32((c.r[2].w[0] + 640u));
    c.f[1] = ld32((c.r[2].w[0] + 648u));
    c.f[12] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019899Cu); c.f[13] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x0019899Cu) [[unlikely]] return; }
L_0019899C:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 84u), c.r[3].w[0]);  if (t) { goto L_001989B0; } }
L_001989A8:
    set32(c.r[3], c.r[3].w[0] << 8);
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    c.budget -= 2;
L_001989B0:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[3].d[0] = c.r[4].sd[0] < 80ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_001989C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001989F0; } }
L_001989C8:
    c.r[3].d[0] = c.r[4].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001989E8; } }
    set32(c.r[4], 0u + 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 239u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_001989F0; } }
L_001989E8:
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001989F0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);  if (t) { goto L_00198A08; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 30052u)));
    c.r[3].d[0] = c.r[3].d[0] & 31ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 8662u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00198A18; } }
L_00198A08:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 30051u)));
    c.r[3].d[0] = c.r[3].d[0] & 31ull;
    st8((c.r[16].w[0] + 8662u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00198A18:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 10u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00198A58; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);  if (t) { goto L_00198A40; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 30051u)));
    c.r[3].d[0] = c.r[3].d[0] & 31ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1934u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00198A60; } }
    c.budget -= 1;
L_00198A40:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 30052u)));
    c.r[3].d[0] = c.r[3].d[0] & 31ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1934u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00198A60; } }
    c.budget -= 1;
L_00198A58:
    st8((c.r[16].w[0] + 1934u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00198A60:
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], 0u + 5u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 150u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00198A98; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1934u)));
    set32(c.r[3], c.r[3].w[0] + 28u);
    st8((c.r[16].w[0] + 1934u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1934u)));
    c.r[1].d[0] = c.r[3].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 47u);  if (t) { goto L_00198A98; } }
    st8((c.r[16].w[0] + 1934u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00198A98:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1934u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00198AA8; } }
    st8((c.r[16].w[0] + 1934u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00198AA8:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 9u));
    st8((c.r[16].w[0] + 8699u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8699u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00198AD8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[3].w[0] - 11640u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 150u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    st8((c.r[16].w[0] + 8699u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_00198AD8:
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00198B30; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00198B28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198B08u);  if (depth < kMaxDepth) unit_0032(c, 219u, depth + 1u); else { c.pc = 0x001CADF0u; return; } if (c.pc != 0x00198B08u) [[unlikely]] return; }
L_00198B08:
    c.f[20] = ld32((c.r[16].w[0] + 36u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198B18u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 203u, depth + 1u); else { c.pc = 0x001465C0u; return; } if (c.pc != 0x00198B18u) [[unlikely]] return; }
L_00198B18:
    c.f[1] = fp::add(c.f[0], c.f[20]);
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.f[1]);  if (t) { goto L_00198B30; } }
L_00198B28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198B30u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 139u, depth + 1u); else { c.pc = 0x0025DAB0u; return; } if (c.pc != 0x00198B30u) [[unlikely]] return; }
L_00198B30:
    st8((c.r[16].w[0] + 1938u), static_cast<std::uint8_t>(0u));
    c.f[3] = ld32((c.r[16].w[0] + 32u));
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    st32((c.r[16].w[0] + 1872u), c.f[3]);
    st32((c.r[16].w[0] + 1876u), c.f[2]);
    st32((c.r[16].w[0] + 1880u), c.f[1]);
    st32((c.r[16].w[0] + 1884u), c.f[0]);
    st8((c.r[16].w[0] + 1939u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 1948u), static_cast<std::uint16_t>(0u));
    st8((c.r[16].w[0] + 1940u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1941u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1942u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1943u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1956u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 1958u), static_cast<std::uint16_t>(0u));
    st8((c.r[16].w[0] + 1961u), static_cast<std::uint8_t>(0u));
    c.budget -= 18;
L_00198B78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00198BA0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198BC4u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_007A(c, 226u, depth + 1u); else { c.pc = 0x002EA8A0u; return; } if (c.pc != 0x00198BC4u) [[unlikely]] return; }
L_00198BC4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00198E90; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 12u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00198BF8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], c.r[17].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 274u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00198C10; } }
L_00198BF8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], c.r[17].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 38u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 38u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_00198C10:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 8663u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 8687u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 798u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 6u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00198C40; } }
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 8680u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00198C48; } }
L_00198C40:
    st8((c.r[16].w[0] + 8680u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.budget -= 2;
L_00198C48:
    st8((c.r[16].w[0] + 8661u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[16].w[0] + 515u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 13u));
    st8((c.r[16].w[0] + 886u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 4u));
    st8((c.r[16].w[0] + 8658u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8658u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 3u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198C78u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 53u, depth + 1u); else { c.pc = 0x001E9250u; return; } if (c.pc != 0x00198C78u) [[unlikely]] return; }
L_00198C78:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 14u));
    st8((c.r[16].w[0] + 876u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[18].w[0] + 16u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 20u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 24u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 40u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 11u));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld8((c.r[18].w[0] + 11u));
    c.budget -= 16;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00198CC8; } }
    st16((c.r[16].w[0] + 500u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 498u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 496u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00198CE0; } }
L_00198CC8:
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    st16((c.r[16].w[0] + 500u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 498u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 496u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
L_00198CE0:
    st8((c.r[16].w[0] + 513u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = ld8((c.r[18].w[0] + 12u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00198CF8; } }
    st8((c.r[16].w[0] + 513u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00198CF8:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 15u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00198D30; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    c.f[2] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[3] = ld32((c.r[2].w[0] + 640u));
    c.f[1] = ld32((c.r[2].w[0] + 648u));
    c.f[12] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198D24u); c.f[13] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x00198D24u) [[unlikely]] return; }
L_00198D24:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 84u), c.r[3].w[0]);  if (t) { goto L_00198D38; } }
L_00198D30:
    set32(c.r[3], c.r[3].w[0] << 8);
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    c.budget -= 2;
L_00198D38:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[3].d[0] = c.r[4].sd[0] < 80ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_00198D50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00198D70; } }
L_00198D50:
    c.r[3].d[0] = c.r[4].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00198D68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00198D70; } }
    c.budget -= 1;
L_00198D68:
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00198D70:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);  if (t) { goto L_00198D88; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 30052u)));
    c.r[3].d[0] = c.r[3].d[0] & 31ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 8662u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00198D98; } }
L_00198D88:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 30051u)));
    c.r[3].d[0] = c.r[3].d[0] & 31ull;
    st8((c.r[16].w[0] + 8662u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00198D98:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 10u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00198DD8; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);  if (t) { goto L_00198DC0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 30051u)));
    c.r[3].d[0] = c.r[3].d[0] & 31ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1934u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00198DE0; } }
    c.budget -= 1;
L_00198DC0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 30052u)));
    c.r[3].d[0] = c.r[3].d[0] & 31ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1934u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00198DE0; } }
    c.budget -= 1;
L_00198DD8:
    st8((c.r[16].w[0] + 1934u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00198DE0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1934u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00198DF0; } }
    st8((c.r[16].w[0] + 1934u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00198DF0:
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00198E48; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00198E40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198E20u);  if (depth < kMaxDepth) unit_0032(c, 219u, depth + 1u); else { c.pc = 0x001CADF0u; return; } if (c.pc != 0x00198E20u) [[unlikely]] return; }
L_00198E20:
    c.f[20] = ld32((c.r[16].w[0] + 36u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198E30u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 203u, depth + 1u); else { c.pc = 0x001465C0u; return; } if (c.pc != 0x00198E30u) [[unlikely]] return; }
L_00198E30:
    c.f[1] = fp::add(c.f[0], c.f[20]);
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.f[1]);  if (t) { goto L_00198E48; } }
L_00198E40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198E48u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 139u, depth + 1u); else { c.pc = 0x0025DAB0u; return; } if (c.pc != 0x00198E48u) [[unlikely]] return; }
L_00198E48:
    st8((c.r[16].w[0] + 1938u), static_cast<std::uint8_t>(0u));
    c.f[3] = ld32((c.r[16].w[0] + 32u));
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    st32((c.r[16].w[0] + 1872u), c.f[3]);
    st32((c.r[16].w[0] + 1876u), c.f[2]);
    st32((c.r[16].w[0] + 1880u), c.f[1]);
    st32((c.r[16].w[0] + 1884u), c.f[0]);
    st8((c.r[16].w[0] + 1939u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 1948u), static_cast<std::uint16_t>(0u));
    st8((c.r[16].w[0] + 1940u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1941u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1942u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1943u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1956u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 1958u), static_cast<std::uint16_t>(0u));
    st8((c.r[16].w[0] + 1961u), static_cast<std::uint8_t>(0u));
    c.budget -= 18;
L_00198E90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00198EB0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_00198EE0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00198EC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00198F08; } }
L_00198EC8:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00198F08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00198F10; } }
    c.budget -= 1;
L_00198EE0:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_00198F08; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 3u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_00198F08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00198F10; } }
    c.budget -= 1;
L_00198F08:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 2;
L_00198F10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00198F20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 6u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[9].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00198F3C; } }
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[5], c.r[2].w[0] - 1u);
    c.budget -= 2;
L_00198F3C:
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_00198F48:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[4].d[0] = ld8((c.r[9].w[0] + 4u));
    set32(c.r[6], c.r[2].w[0] + c.r[8].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 47u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_00198F88; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 53u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198F6Cu); c.r[5].d[0] = ld8((c.r[9].w[0] + 5u));  if (depth < kMaxDepth) unit_0026(c, 59u, depth + 1u); else { c.pc = 0x00198EB0u; return; } if (c.pc != 0x00198F6Cu) [[unlikely]] return; }
L_00198F6C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00198F88; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[7].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00198F88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00198FA0; } }
L_00198F88:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[2].d[0] = c.r[8].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00198F48u | kUnwind; return; } goto L_00198F48; } }
    st8((c.r[28].w[0] - 24132u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00198FA0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00198FB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198FC0u);  if (depth < kMaxDepth) unit_0025(c, 224u, depth + 1u); else { c.pc = 0x00197B00u; return; } if (c.pc != 0x00198FC0u) [[unlikely]] return; }
L_00198FC0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], c.r[4].w[0] - 12496u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 150u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 151u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 316u)));
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[5], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 18;
L_00199008:
    c.r[4].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[2], 0u + 255u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[10].d[0] = 0ull + 0ull;  if (t) { goto L_001990B8; } }
L_00199018:
    set32(c.r[9], ld32((c.r[28].w[0] - 23784u)));
    c.r[4].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[8], c.r[9].w[0] + c.r[10].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 47u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_00199060; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 53u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019903Cu); c.r[5].d[0] = ld8((c.r[3].w[0] + 1u));  if (depth < kMaxDepth) unit_0026(c, 59u, depth + 1u); else { c.pc = 0x00198EB0u; return; } if (c.pc != 0x0019903Cu) [[unlikely]] return; }
L_0019903C:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { goto L_00199060; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 88u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00199060; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[10], 0u + 6u);  if (t) { goto L_001990A8; } }
    c.budget -= 1;
L_00199060:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 47u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001990A8; } }
    c.r[4].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[2], c.r[6].w[0] + c.r[9].w[0]);
    st8((c.r[2].w[0] + 47u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[5].d[0] = ld8((c.r[3].w[0] + 1u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00199088u); c.r[4].d[0] = ld8((c.r[3].w[0]));  if (depth < kMaxDepth) unit_0026(c, 59u, depth + 1u); else { c.pc = 0x00198EB0u; return; } if (c.pc != 0x00199088u) [[unlikely]] return; }
L_00199088:
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[10], 0u + 6u);
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    st8((c.r[4].w[0] + 53u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 2u));
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0] + 88u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 8;
L_001990A8:
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.r[2].d[0] = c.r[10].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00199018u | kUnwind; return; } goto L_00199018; } }
L_001990B8:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 3u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00199008u | kUnwind; return; } goto L_00199008; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001990D0u);  if (depth < kMaxDepth) unit_0025(c, 225u, depth + 1u); else { c.pc = 0x00197B20u; return; } if (c.pc != 0x001990D0u) [[unlikely]] return; }
L_001990D0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001990E0:
    set32(c.r[2], 0u + 31u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 20u);  if (t) { goto L_00199150; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00199148; } }
    set32(c.r[2], 0u + 18u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 21u);  if (t) { goto L_00199140; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00199138; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_00199130; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00199128; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00199158; } }
    c.budget -= 1;
L_00199128:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00199160; } }
L_00199130:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00199160; } }
L_00199138:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_00199160; } }
L_00199140:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_00199160; } }
L_00199148:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_00199160; } }
L_00199150:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_00199160; } }
L_00199158:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001991D8; } }
L_00199160:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[2].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] - 13280u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 13279u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[7], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 56u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 14;
L_00199198:
    set32(c.r[3], c.r[5].w[0] << (c.r[9].w[0] & 31u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001991C0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[8].d[0];  if (t) { goto L_001991C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001991D8; } }
    c.budget -= 1;
L_001991C0:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[3].d[0] = c.r[9].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00199198u | kUnwind; return; } goto L_00199198; } }
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 2;
L_001991D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001991E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[7].d[0] = c.r[4].d[0] & 1ull;
    set32(c.r[6], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 20112u);
    set32(c.r[8], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[9], ld32((c.r[8].w[0])));
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 38u)));
    c.r[3].d[0] = ld8((c.r[9].w[0] + 2u));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00199248; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 274u)));
    c.r[3].d[0] = ld8((c.r[9].w[0] + 3u));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00199248; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019923Cu); c.r[4].d[0] = ld8((c.r[9].w[0] + 1u));  if (depth < kMaxDepth) unit_0026(c, 27u, depth + 1u); else { c.pc = 0x001983D0u; return; } if (c.pc != 0x0019923Cu) [[unlikely]] return; }
L_0019923C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[9].w[0] + 4u);  if (t) { goto L_00199248; } }
    st32((c.r[8].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_00199248:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00199260:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00199270u);  if (depth < kMaxDepth) unit_0026(c, 81u, depth + 1u); else { c.pc = 0x00199360u; return; } if (c.pc != 0x00199270u) [[unlikely]] return; }
L_00199270:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 20080u);
    c.budget -= 4;
L_00199280:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[10].d[0] = 0ull + 0ull;  if (t) { goto L_00199330; } }
L_00199290:
    set32(c.r[9], ld32((c.r[28].w[0] - 23784u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[8], c.r[9].w[0] + c.r[10].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 47u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_001992D8; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 53u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001992B4u); c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));  if (depth < kMaxDepth) unit_0026(c, 59u, depth + 1u); else { c.pc = 0x00198EB0u; return; } if (c.pc != 0x001992B4u) [[unlikely]] return; }
L_001992B4:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { goto L_001992D8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 88u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001992D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[10], 0u + 6u);  if (t) { goto L_00199320; } }
    c.budget -= 1;
L_001992D8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 47u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00199320; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[2], c.r[6].w[0] + c.r[9].w[0]);
    st8((c.r[2].w[0] + 47u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00199300u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));  if (depth < kMaxDepth) unit_0026(c, 59u, depth + 1u); else { c.pc = 0x00198EB0u; return; } if (c.pc != 0x00199300u) [[unlikely]] return; }
L_00199300:
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[10], 0u + 6u);
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    st8((c.r[4].w[0] + 53u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0] + 88u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 8;
L_00199320:
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.r[2].d[0] = c.r[10].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00199290u | kUnwind; return; } goto L_00199290; } }
L_00199330:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00199280u | kUnwind; return; } goto L_00199280; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00199348u);  if (depth < kMaxDepth) unit_0025(c, 225u, depth + 1u); else { c.pc = 0x00197B20u; return; } if (c.pc != 0x00199348u) [[unlikely]] return; }
L_00199348:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00199360:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st8((c.r[1].w[0] + 20105u), static_cast<std::uint8_t>(0u));
    set32(c.r[17], c.r[17].w[0] + 20080u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st8((c.r[1].w[0] + 20104u), static_cast<std::uint8_t>(0u));
    c.budget -= 14;
L_00199398:
    set32(c.r[7], ld32((c.r[28].w[0] - 23784u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[4], c.r[4].w[0] + 31504u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 154u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 159u)));
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[16], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001993F0; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[3].d[0];  if (t) { goto L_00199400; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 42u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00199400; } }
    c.budget -= 1;
L_001993F0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00199480; } }
    c.budget -= 1;
L_00199400:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00199408u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 84u, depth + 1u); else { c.pc = 0x001994B0u; return; } if (c.pc != 0x00199408u) [[unlikely]] return; }
L_00199408:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00199448; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], c.r[3].w[0] + 20080u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 159u)));
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 159u)));
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 24u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00199480; } }
    c.budget -= 1;
L_00199448:
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], c.r[3].w[0] + 20080u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 159u)));
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 159u)));
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 24u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 14;
L_00199480:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < 6ll ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 8u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00199398u | kUnwind; return; } goto L_00199398; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001994B0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00650000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] + 31504u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[3], 0u - 1u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 154u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 159u)));
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[16], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 27;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00199540; } }
    c.budget -= 1;
L_00199520:
    set32(c.r[4], c.r[4].w[0] + 3u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00199520u | kUnwind; return; } goto L_00199520; } }
    c.budget -= 1;
L_00199540:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00199548u);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x00199548u) [[unlikely]] return; }
L_00199548:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    mmi::div(c, 0, c.r[2].w[0], c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] + 20080u);
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[17], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 20081u);
    set32(c.r[19], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[18], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] + 20083u);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[20], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.budget -= 26;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001995C0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st8((c.r[1].w[0] + 20106u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_001995C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001995C8u);  if (depth < kMaxDepth) unit_00AF(c, 212u, depth + 1u); else { c.pc = 0x003BDAC0u; return; } if (c.pc != 0x001995C8u) [[unlikely]] return; }
L_001995C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00199658; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00199658; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    set32(c.r[2], 0u + 31u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 30u);  if (t) { goto L_00199638; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00199638; } }
    set32(c.r[2], 0u + 29u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 28u);  if (t) { goto L_00199610; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00199610; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00199658; } }
L_00199610:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] + 20083u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 20106u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00199658; } }
    c.budget -= 1;
L_00199638:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] + 20083u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], 0u + 18u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    st8((c.r[1].w[0] + 20106u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
L_00199658:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00199660u);  if (depth < kMaxDepth) unit_00AF(c, 210u, depth + 1u); else { c.pc = 0x003BDAA0u; return; } if (c.pc != 0x00199660u) [[unlikely]] return; }
L_00199660:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00199698; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    set32(c.r[2], 0u + 40u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 35u);  if (t) { goto L_00199688; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00199688; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00199698; } }
L_00199688:
    set32(c.r[2], 0u + 46u);
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_00199698:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001996A0u);  if (depth < kMaxDepth) unit_00AF(c, 211u, depth + 1u); else { c.pc = 0x003BDAB0u; return; } if (c.pc != 0x001996A0u) [[unlikely]] return; }
L_001996A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00199720; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    set32(c.r[2], 0u + 53u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 54u);  if (t) { goto L_001996E8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001996D8; } }
    set32(c.r[2], 0u + 52u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001996D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00199720; } }
    c.budget -= 1;
L_001996D8:
    set32(c.r[2], 0u + 21u);
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_00199720; } }
L_001996E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] + 20082u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 21u);  if (t) { goto L_00199710; } }
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_00199720; } }
    c.budget -= 1;
L_00199710:
    set32(c.r[2], 0u + 46u);
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_00199720:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019972Cu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));  if (depth < kMaxDepth) unit_004F(c, 68u, depth + 1u); else { c.pc = 0x0023D1E0u; return; } if (c.pc != 0x0019972Cu) [[unlikely]] return; }
L_0019972C:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    set32(c.r[6], 0u + 1u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[6].d[0]; set32(c.r[5], 0u + 2u);  if (t) { goto L_001999D0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_00199838; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00199758; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00199B28; } }
L_00199758:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    set32(c.r[3], 0u + 67u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 69u);  if (t) { goto L_00199828; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00199818; } }
    set32(c.r[3], 0u + 68u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 66u);  if (t) { goto L_00199808; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001997F8; } }
    set32(c.r[3], 0u + 65u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 64u);  if (t) { goto L_001997E8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001997D8; } }
    set32(c.r[3], 0u + 18u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 8u);  if (t) { goto L_001997C8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001997B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00199B28; } }
    c.budget -= 1;
L_001997B8:
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00199B28; } }
    c.budget -= 1;
L_001997C8:
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00199B28; } }
    c.budget -= 1;
L_001997D8:
    set32(c.r[3], 0u + 9u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00199B28; } }
    c.budget -= 1;
L_001997E8:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00199B28; } }
    c.budget -= 1;
L_001997F8:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00199B28; } }
    c.budget -= 1;
L_00199808:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00199B28; } }
    c.budget -= 1;
L_00199818:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00199B28; } }
    c.budget -= 1;
L_00199828:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00199B28; } }
    c.budget -= 1;
L_00199838:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    set32(c.r[3], 0u + 67u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 71u);  if (t) { goto L_001999C0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001999B0; } }
    set32(c.r[3], 0u + 70u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 35u);  if (t) { goto L_001999A0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00199990; } }
    set32(c.r[3], 0u + 33u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 28u);  if (t) { goto L_00199980; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00199970; } }
    set32(c.r[3], 0u + 20u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 19u);  if (t) { goto L_00199960; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00199950; } }
    set32(c.r[3], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 15u);  if (t) { goto L_00199940; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00199930; } }
    set32(c.r[3], 0u + 14u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 13u);  if (t) { goto L_00199920; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00199910; } }
    set32(c.r[3], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 7u);  if (t) { goto L_00199900; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001998F0; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001998E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00199B28; } }
    c.budget -= 1;
L_001998E0:
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00199B28; } }
    c.budget -= 1;
L_001998F0:
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00199B28; } }
    c.budget -= 1;
L_00199900:
    set32(c.r[3], 0u + 29u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00199B28; } }
    c.budget -= 1;
L_00199910:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00199B28; } }
    c.budget -= 1;
L_00199920:
    set32(c.r[3], 0u + 29u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00199B28; } }
    c.budget -= 1;
L_00199930:
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00199B28; } }
    c.budget -= 1;
L_00199940:
    set32(c.r[3], 0u + 29u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00199B28; } }
    c.budget -= 1;
L_00199950:
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_00199B28; } }
    c.budget -= 1;
L_00199960:
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_00199B28; } }
    c.budget -= 1;
L_00199970:
    set32(c.r[3], 0u + 48u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00199B28; } }
    c.budget -= 1;
L_00199980:
    set32(c.r[3], 0u + 34u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00199B28; } }
    c.budget -= 1;
L_00199990:
    set32(c.r[3], 0u + 40u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00199B28; } }
    c.budget -= 1;
L_001999A0:
    set32(c.r[3], 0u + 9u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00199B28; } }
    c.budget -= 1;
L_001999B0:
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00199B28; } }
    c.budget -= 1;
L_001999C0:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00199B28; } }
    c.budget -= 1;
L_001999D0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    set32(c.r[3], 0u + 67u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 71u);  if (t) { goto L_00199B20; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00199B10; } }
    set32(c.r[3], 0u + 33u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 28u);  if (t) { goto L_00199B00; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00199AF0; } }
    set32(c.r[3], 0u + 20u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 19u);  if (t) { goto L_00199AE0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00199AD0; } }
    set32(c.r[3], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 15u);  if (t) { goto L_00199AC0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00199AB0; } }
    set32(c.r[3], 0u + 14u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 13u);  if (t) { goto L_00199AA0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00199A90; } }
    set32(c.r[3], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 7u);  if (t) { goto L_00199A80; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00199A70; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00199A60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00199B28; } }
L_00199A60:
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00199B28; } }
    c.budget -= 1;
L_00199A70:
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00199B28; } }
    c.budget -= 1;
L_00199A80:
    set32(c.r[3], 0u + 29u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00199B28; } }
    c.budget -= 1;
L_00199A90:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00199B28; } }
    c.budget -= 1;
L_00199AA0:
    set32(c.r[3], 0u + 29u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00199B28; } }
    c.budget -= 1;
L_00199AB0:
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00199B28; } }
    c.budget -= 1;
L_00199AC0:
    set32(c.r[3], 0u + 29u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00199B28; } }
    c.budget -= 1;
L_00199AD0:
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_00199B28; } }
    c.budget -= 1;
L_00199AE0:
    set32(c.r[3], 0u + 2u);
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_00199B28; } }
L_00199AF0:
    set32(c.r[3], 0u + 48u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00199B28; } }
    c.budget -= 1;
L_00199B00:
    set32(c.r[3], 0u + 34u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00199B28; } }
    c.budget -= 1;
L_00199B10:
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00199B28; } }
    c.budget -= 1;
L_00199B20:
    set32(c.r[3], 0u + 3u);
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00199B28:
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], 0u + 34u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 13u);  if (t) { goto L_00199B50; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00199B50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00199BA0; } }
    c.budget -= 1;
L_00199B50:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    set32(c.r[3], 0u + 72u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 74u);  if (t) { goto L_00199B98; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00199B98; } }
    set32(c.r[3], 0u + 76u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 71u);  if (t) { goto L_00199B98; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00199B88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00199BA0; } }
    c.budget -= 1;
L_00199B88:
    set32(c.r[3], 0u + 9u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00199BA0; } }
    c.budget -= 1;
L_00199B98:
    set32(c.r[3], 0u + 23u);
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00199BA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00199BC0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 3;
    { c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20106u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001990E0u | kUnwind; return; } goto L_001990E0; }
L_00199BD0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 4u));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; c.r[21].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00199C98; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] + 20104u);
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    c.r[18].d[0] = 0ull + 0ull;
    c.r[20].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[16], c.r[16].w[0] + 20080u);
    c.budget -= 9;
L_00199C20:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00199C80; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != c.r[2].d[0];  if (t) { goto L_00199C80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00199C44u);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x00199C44u) [[unlikely]] return; }
L_00199C44:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[20].w[0] - c.r[19].w[0]);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00199C78; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00199C78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00199CE0; } }
L_00199C78:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 2;
L_00199C80:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00199C20u | kUnwind; return; } goto L_00199C20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00199CE0; } }
L_00199C98:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] + 20080u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
L_00199CA8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00199CD0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != c.r[2].d[0];  if (t) { goto L_00199CD0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00199CD0; } }
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_00199CD0:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00199CA8u | kUnwind; return; } goto L_00199CA8; } }
L_00199CE0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00199D10:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00199D2Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0026(c, 16u, depth + 1u); else { c.pc = 0x00198150u; return; } if (c.pc != 0x00199D2Cu) [[unlikely]] return; }
L_00199D2C:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00199D30:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] + 20112u);
    set32(c.r[16], c.r[16].w[0] + 21424u);
    c.budget -= 6;
L_00199D48:
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[3], 0u + 255u);
    c.r[4].d[0] = ld8((c.r[5].w[0]));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 8u);  if (t) { goto L_00199E28; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00199E20; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 5u);  if (t) { goto L_00199E10; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00199E00; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_00199DF0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00199DE0; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00199DD0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00199DC0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00199DB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00199E28; } }
L_00199DB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00199DB8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 103u, depth + 1u); else { c.pc = 0x00199E70u; return; } if (c.pc != 0x00199DB8u) [[unlikely]] return; }
L_00199DB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00199E28; } }
L_00199DC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00199DC8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001986F0u; return; } if (c.pc != 0x00199DC8u) [[unlikely]] return; }
L_00199DC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00199E28; } }
L_00199DD0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_00199E28; } }
    c.budget -= 1;
L_00199DE0:
    set32(c.r[3], c.r[5].w[0] + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_00199E28; } }
    c.budget -= 1;
L_00199DF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00199DF8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 72u, depth + 1u); else { c.pc = 0x001991E0u; return; } if (c.pc != 0x00199DF8u) [[unlikely]] return; }
L_00199DF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00199E28; } }
L_00199E00:
    set32(c.r[3], c.r[5].w[0] + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_00199E28; } }
    c.budget -= 1;
L_00199E10:
    set32(c.r[3], c.r[5].w[0] + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_00199E28; } }
    c.budget -= 1;
L_00199E20:
    set32(c.r[3], c.r[5].w[0] + 4u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_00199E28:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00199D48u | kUnwind; return; } goto L_00199D48; } }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00199D30u | kUnwind; return; } goto L_00199D30; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00199E70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[8].d[0] = c.r[4].d[0] & 1ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 20112u);
    set32(c.r[6], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[17], ld32((c.r[16].w[0])));
    set32(c.r[6], c.r[8].w[0] + c.r[6].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 38u)));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 2u));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00199EF0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 274u)));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 3u));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00199EF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00199ED4u); c.r[4].d[0] = ld8((c.r[17].w[0] + 1u));  if (depth < kMaxDepth) unit_0026(c, 27u, depth + 1u); else { c.pc = 0x001983D0u; return; } if (c.pc != 0x00199ED4u) [[unlikely]] return; }
L_00199ED4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_00199EF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00199EE4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 106u, depth + 1u); else { c.pc = 0x00199F10u; return; } if (c.pc != 0x00199EE4u) [[unlikely]] return; }
L_00199EE4:
    set32(c.r[3], c.r[17].w[0] + 28u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_00199EF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00199F10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00199F2Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 108u, depth + 1u); else { c.pc = 0x0019A040u; return; } if (c.pc != 0x00199F2Cu) [[unlikely]] return; }
L_00199F2C:
    c.r[6].d[0] = c.r[2].d[0] << 56;
    set32(c.r[3], 0u - 1u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0019A020; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 12u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00199F68; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[4], c.r[16].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 274u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00199F80; } }
L_00199F68:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[4], c.r[16].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 38u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 38u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_00199F80:
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[4], c.r[3].w[0] + c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[5], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + 18512u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[5].w[0] + 33u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 4u));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 5u));
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[5].w[0] + 34u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[5].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[5].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 24u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[5].w[0] + 24u), c.f[0]);
    st8((c.r[5].w[0] + 32u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 12u));
    c.budget -= 28;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00199FF8; } }
    st8((c.r[5].w[0] + 32u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 2;
L_00199FF8:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 6u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0019A018; } }
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 35u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0019A020; } }
    c.budget -= 1;
L_0019A018:
    st8((c.r[5].w[0] + 35u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.budget -= 2;
L_0019A020:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0019A040:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00830000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 18512u);
    c.budget -= 4;
L_0019A050:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[4].d[0] << 56;  if (t) { goto L_0019A068; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);  if (t) { goto L_0019A080; } }
    c.budget -= 1;
L_0019A068:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019A050u | kUnwind; return; } goto L_0019A050; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_0019A080:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0019A090:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0019A0B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019A0B0u);  if (depth < kMaxDepth) unit_0025(c, 11u, depth + 1u); else { c.pc = 0x001946A0u; return; } if (c.pc != 0x0019A0B0u) [[unlikely]] return; }
L_0019A0B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019A0C0; } }
L_0019A0B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019A0C0u);  if (depth < kMaxDepth) unit_0025(c, 16u, depth + 1u); else { c.pc = 0x00194740u; return; } if (c.pc != 0x0019A0C0u) [[unlikely]] return; }
L_0019A0C0:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 8687u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 8u);
    st8((c.r[16].w[0] + 513u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1934u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1938u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1939u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 1948u), static_cast<std::uint16_t>(0u));
    st8((c.r[16].w[0] + 1940u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1941u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1942u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1943u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1956u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 1958u), static_cast<std::uint16_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019A110:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8687u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0019A270; } }
    c.r[8].d[0] = ld8((c.r[4].w[0] + 515u));
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[5], c.r[8].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 326u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_0019A1E0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0019A1E0; } }
    set32(c.r[7], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], c.r[6].w[0] << (c.r[8].w[0] & 31u));
    c.r[5].d[0] = ld8((c.r[7].w[0] + 235u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[11].sd[0] = static_cast<std::int32_t>(0x00840000u);  if (t) { goto L_0019A1E0; } }
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[11], c.r[11].w[0] - 27856u);
    set32(c.r[9], c.r[7].w[0] + 236u);
    c.budget -= 3;
L_0019A170:
    c.budget -= 2;
    { const bool t = c.r[11].d[0] == c.r[4].d[0];  if (t) { goto L_0019A1D0; } }
    c.r[3].d[0] = ld8((c.r[9].w[0]));
    set32(c.r[5], c.r[6].w[0] << (c.r[10].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0019A1D0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0019A1D0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 8661u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[8].d[0];  if (t) { goto L_0019A1D0; } }
    c.r[3].d[0] = ld8((c.r[7].w[0] + 236u));
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[5].d[0];
    st8((c.r[7].w[0] + 236u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23788u)));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 8657u));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 236u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 236u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0019A1E0; } }
    c.budget -= 1;
L_0019A1D0:
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.r[3].d[0] = c.r[10].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[11], c.r[11].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019A170u | kUnwind; return; } goto L_0019A170; } }
L_0019A1E0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1970u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0019A270; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 237u));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0019A270; } }
    st16((c.r[4].w[0] + 1972u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], 0u + 240u);
    st16((c.r[4].w[0] + 1976u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], 0u + 300u);
    st16((c.r[4].w[0] + 1978u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 1980u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 515u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 326u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_0019A270; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1970u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0019A270; } }
    set32(c.r[7], ld32((c.r[28].w[0] - 23788u)));
    c.r[4].d[0] = c.r[3].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[3].d[0] = ld8((c.r[7].w[0] + 237u));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0019A270; } }
    c.r[4].d[0] = ld8((c.r[7].w[0] + 235u));
    set32(c.r[3], c.r[5].w[0] << (c.r[6].w[0] & 31u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0019A270; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019A270u);  if (depth < kMaxDepth) unit_0075(c, 6u, depth + 1u); else { c.pc = 0x002D4260u; return; } if (c.pc != 0x0019A270u) [[unlikely]] return; }
L_0019A270:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0019A280:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 49u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0019A2A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0019A478; } }
L_0019A2A8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8687u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0019A2C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019A478; } }
    c.budget -= 1;
L_0019A2C0:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 515u));
    set32(c.r[8], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[2].w[0] + c.r[8].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 326u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0019A2E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0019A478; } }
    c.budget -= 1;
L_0019A2E8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0019A300; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0019A478; } }
    c.budget -= 1;
L_0019A300:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_0019A318; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0019A478; } }
L_0019A318:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1970u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0019A330; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0019A478; } }
    c.budget -= 1;
L_0019A330:
    set32(c.r[6], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 237u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0019A348; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0019A478; } }
L_0019A348:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8693u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0019A360; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0019A478; } }
    c.budget -= 1;
L_0019A360:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1972u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0019A378; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0019A478; } }
    c.budget -= 1;
L_0019A378:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_0019A398; } }
    c.r[3].d[0] = ld8((c.r[6].w[0] + 238u));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0019A3D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0019A478; } }
L_0019A398:
    c.r[7].d[0] = ld8((c.r[6].w[0] + 238u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 151u)));
    set32(c.r[4], c.r[4].w[0] - 13264u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 150u)));
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[3].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0019A3D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0019A478; } }
L_0019A3D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019A3E0u); c.r[4].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0075(c, 10u, depth + 1u); else { c.pc = 0x002D42E0u; return; } if (c.pc != 0x0019A3E0u) [[unlikely]] return; }
L_0019A3E0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0019A3F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0019A478; } }
    c.budget -= 1;
L_0019A3F8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1976u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0019A468; } }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; st16((c.r[16].w[0] + 1976u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0019A450; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1978u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] & 63ull;
    st16((c.r[16].w[0] + 1978u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019A428u); c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1978u)));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0019A428u) [[unlikely]] return; }
L_0019A428:
    c.r[2].d[0] = c.r[2].d[0] & 63ull;
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019A470; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], 0u + 300u);
    st16((c.r[16].w[0] + 1972u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 1978u), static_cast<std::uint16_t>(0u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1980u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0019A478; } }
L_0019A450:
    set32(c.r[2], 0u + 1u);
    st16((c.r[16].w[0] + 1972u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 300u);
    st16((c.r[16].w[0] + 1978u), static_cast<std::uint16_t>(0u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1980u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0019A478; } }
L_0019A468:
    set32(c.r[2], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 1976u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0019A470:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0019A478:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0019A490:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 49u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0019A760; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8687u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0019A760; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1970u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0019A4D8; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 237u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0019A4E0; } }
    c.budget -= 1;
L_0019A4D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019A760; } }
L_0019A4E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0019A760; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[7], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != c.r[7].d[0];  if (t) { goto L_0019A760; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_0019A760; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 515u));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 326u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[7].d[0];  if (t) { goto L_0019A600; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1972u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[5].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0019A5C8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0019A580; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[7].d[0];  if (t) { goto L_0019A550; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0019A760; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019A760; } }
L_0019A550:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8693u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0019A760; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], 0u + 30u);
    st16((c.r[16].w[0] + 1972u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23788u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 238u));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[5].w[0] + 238u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1980u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0019A760; } }
L_0019A580:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1980u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] + 1u);  if (t) { goto L_0019A760; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st16((c.r[16].w[0] + 1972u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] - 26970u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 82u)));
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 9);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019A5BCu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 886u)));  if (depth < kMaxDepth) unit_004E(c, 228u, depth + 1u); else { c.pc = 0x0023BD20u; return; } if (c.pc != 0x0019A5BCu) [[unlikely]] return; }
L_0019A5BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019A760; } }
    c.budget -= 1;
L_0019A5C8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8693u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0019A760; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019A5DCu); st16((c.r[16].w[0] + 1972u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0019A5DCu) [[unlikely]] return; }
L_0019A5DC:
    c.r[4].d[0] = c.r[2].d[0] & 63ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[3].w[0] - 13088u);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1976u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0019A760; } }
    c.budget -= 1;
L_0019A600:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1972u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0019A730; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0019A6E0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0019A678; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[7].d[0];  if (t) { goto L_0019A638; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0019A760; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019A760; } }
L_0019A638:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st16((c.r[16].w[0] + 1972u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] - 26970u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 82u)));
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 9);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019A66Cu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 886u)));  if (depth < kMaxDepth) unit_004E(c, 228u, depth + 1u); else { c.pc = 0x0023BD20u; return; } if (c.pc != 0x0019A66Cu) [[unlikely]] return; }
L_0019A66C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019A760; } }
    c.budget -= 1;
L_0019A678:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1980u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0019A6D0; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != c.r[7].d[0];  if (t) { goto L_0019A760; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_0019A760; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 24576ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0019A760; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    st16((c.r[16].w[0] + 1972u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 1980u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019A6C4u); c.r[4].d[0] = ld8((c.r[16].w[0] + 515u));  if (depth < kMaxDepth) unit_0075(c, 6u, depth + 1u); else { c.pc = 0x002D4260u; return; } if (c.pc != 0x0019A6C4u) [[unlikely]] return; }
L_0019A6C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019A760; } }
    c.budget -= 1;
L_0019A6D0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1980u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0019A760; } }
    c.budget -= 1;
L_0019A6E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8693u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] + 1u);  if (t) { goto L_0019A708; } }
    st16((c.r[16].w[0] + 1972u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 238u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 238u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0019A760; } }
    c.budget -= 1;
L_0019A708:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1980u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    st16((c.r[16].w[0] + 1980u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1980u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0019A760; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 32ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0019A760; } }
L_0019A730:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8693u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0019A760; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019A744u); st16((c.r[16].w[0] + 1972u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0019A744u) [[unlikely]] return; }
L_0019A744:
    c.r[4].d[0] = c.r[2].d[0] & 63ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[3].w[0] - 13088u);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[16].w[0] + 1976u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 7;
L_0019A760:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019A770:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[5], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0019A7C0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0019A798; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019A7E8; } }
    c.budget -= 1;
L_0019A798:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8685u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0019A810; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 515u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 106u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1938u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0019A810; } }
L_0019A7C0:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 515u));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], c.r[3].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] << 1);  if (t) { goto L_0019A810; } }
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 106u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1938u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0019A810; } }
L_0019A7E8:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 515u));
    set32(c.r[6], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], c.r[3].w[0] + c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[2], c.r[3].w[0] << 1);  if (t) { goto L_0019A810; } }
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 106u));
    st8((c.r[4].w[0] + 1938u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0019A810:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1938u)));  c.pc = t; return; }
L_0019A820:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], c.r[28].w[0] - 23864u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 515u));
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0019AA18; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 1936u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0019A8E8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0019A8A8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0019A888; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019AA18; } }
    c.budget -= 1;
L_0019A888:
    st8((c.r[20].w[0] + 1936u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[20].w[0] + 1492u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0019AA18; } }
    c.r[3].d[0] = ld16((c.r[20].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0019AA18; } }
L_0019A8A8:
    set32(c.r[5], ld32((c.r[20].w[0] + 1492u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0019A8E0; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 1488u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0019AA18; } }
    st8((c.r[20].w[0] + 1936u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; set32(c.r[3], 0u + 300u);  if (t) { goto L_0019AA18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 1968u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0019AA18; } }
    c.budget -= 1;
L_0019A8E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 1936u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0019AA18; } }
L_0019A8E8:
    set32(c.r[19], ld32((c.r[20].w[0] + 1920u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0019A9F8; } }
    set32(c.r[18], ld32((c.r[20].w[0] + 1488u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0019A9F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019A908u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 60u, depth + 1u); else { c.pc = 0x00195400u; return; } if (c.pc != 0x0019A908u) [[unlikely]] return; }
L_0019A908:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0019A918; } }
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_0019A918:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0019A950; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 1968u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0019A948; } }
    set32(c.r[3], 0u + 300u);
    set32(c.r[16], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 1968u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0019A950; } }
L_0019A948:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[20].w[0] + 1968u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0019A950:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0019A9F8; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[18].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0019A980; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019A968u);  if (depth < kMaxDepth) unit_0025(c, 60u, depth + 1u); else { c.pc = 0x00195400u; return; } if (c.pc != 0x0019A968u) [[unlikely]] return; }
L_0019A968:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_0019A980; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 576u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0019A988; } }
L_0019A980:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_0019A9F8; } }
L_0019A988:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1u)));
    set32(c.r[4], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0019A9B0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0019A9B0; } }
    st32((c.r[20].w[0] + 1920u), c.r[18].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0019A9F8; } }
L_0019A9B0:
    set32(c.r[5], c.r[19].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019A9BCu); set32(c.r[4], c.r[20].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x0019A9BCu) [[unlikely]] return; }
L_0019A9BC:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8659u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[3].d[0] = ld8((c.r[20].w[0] + 8658u));
    set32(c.r[4], c.r[4].w[0] - 3552u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0019A9F8; } }
    set32(c.r[17], 0u + 1u);
    c.budget -= 2;
L_0019A9F8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_0019AA18; } }
    c.r[4].d[0] = ld16((c.r[20].w[0] + 1808u));
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = c.r[4].d[0] | 64ull;
    st16((c.r[20].w[0] + 1808u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[20].w[0] + 1936u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[20].w[0] + 1822u), static_cast<std::uint16_t>(0u));
    c.budget -= 6;
L_0019AA18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0019AA40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019AA5Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 266u, depth + 1u); else { c.pc = 0x003C6350u; return; } if (c.pc != 0x0019AA5Cu) [[unlikely]] return; }
L_0019AA5C:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0019AA70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0019AB78; } }
L_0019AA70:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1626u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019AAA0; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], 0u + 23u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 48u);  if (t) { goto L_0019AAA0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0019AAA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0019AB78; } }
    c.budget -= 1;
L_0019AAA0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], 0u + 23u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0019AAF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019AAB8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 276u, depth + 1u); else { c.pc = 0x003C6520u; return; } if (c.pc != 0x0019AAB8u) [[unlikely]] return; }
L_0019AAB8:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    set32(c.r[5], 0u + 1u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0019AAF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019AAD4u);  if (depth < kMaxDepth) unit_00B1(c, 276u, depth + 1u); else { c.pc = 0x003C6520u; return; } if (c.pc != 0x0019AAD4u) [[unlikely]] return; }
L_0019AAD4:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0019AAF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0019AB78; } }
L_0019AAF0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019AAFCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 267u, depth + 1u); else { c.pc = 0x003C6380u; return; } if (c.pc != 0x0019AAFCu) [[unlikely]] return; }
L_0019AAFC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 274u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0019AB30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019AB14u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 268u, depth + 1u); else { c.pc = 0x003C63D0u; return; } if (c.pc != 0x0019AB14u) [[unlikely]] return; }
L_0019AB14:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));  if (t) { goto L_0019AB24; } }
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_0019AB24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;  if (t) { goto L_0019AB78; } }
    c.budget -= 1;
L_0019AB30:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019AB3Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 276u, depth + 1u); else { c.pc = 0x003C6520u; return; } if (c.pc != 0x0019AB3Cu) [[unlikely]] return; }
L_0019AB3C:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0019AB58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019AB78; } }
L_0019AB58:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0019AB74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019AB68u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0019AB68u) [[unlikely]] return; }
L_0019AB68:
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { goto L_0019AB74; } }
L_0019AB74:
    c.budget -= 1;
L_0019AB78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0019AB90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1941u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0019ABB0; } }
    set32(c.r[2], 0u + 100u);
    st16((c.r[16].w[0] + 1820u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0019ABB0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1942u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 100u);  if (t) { goto L_0019ABC0; } }
    st16((c.r[16].w[0] + 1924u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0019ABC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019ABC8u);  if (depth < kMaxDepth) unit_00AC(c, 37u, depth + 1u); else { c.pc = 0x003B0350u; return; } if (c.pc != 0x0019ABC8u) [[unlikely]] return; }
L_0019ABC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 100u);  if (t) { goto L_0019ABD8; } }
    st16((c.r[16].w[0] + 1820u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 1924u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0019ABD8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1943u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 100u);  if (t) { goto L_0019ABE8; } }
    st16((c.r[16].w[0] + 1928u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0019ABE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019AC00:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0019AC40; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 1252u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.r[19].d[0] = c.r[2].d[0] << 48;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);  if (t) { goto L_0019AC98; } }
L_0019AC40:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[2], c.r[2].w[0] + 29024u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019AC64u); set32(c.r[4], c.r[2].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0019AC64u) [[unlikely]] return; }
L_0019AC64:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019AC74u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x0019AC74u) [[unlikely]] return; }
L_0019AC74:
    set32(c.r[4], c.r[16].w[0] + 8624u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019AC80u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x0019AC80u) [[unlikely]] return; }
L_0019AC80:
    c.f[13] = ld32((c.r[29].w[0] + 88u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019AC8Cu); c.f[12] = ld32((c.r[29].w[0] + 80u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x0019AC8Cu) [[unlikely]] return; }
L_0019AC8C:
    c.r[19].d[0] = c.r[2].d[0] << 48;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);
    c.budget -= 3;
L_0019AC98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019ACA0u); c.r[17].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0019ACA0u) [[unlikely]] return; }
L_0019ACA0:
    c.r[18].d[0] = c.r[19].d[0] << 48;
    c.r[16].d[0] = c.r[2].d[0] & 1ull;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019ACB4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 158u, depth + 1u); else { c.pc = 0x001260A0u; return; } if (c.pc != 0x0019ACB4u) [[unlikely]] return; }
L_0019ACB4:
    c.r[1].d[0] = c.r[2].sd[0] < 12289ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0019ACD8; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0019ACD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[17].d[0] | 2048ull;  if (t) { goto L_0019AD08; } }
L_0019ACD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[17].d[0] | 1024ull;  if (t) { goto L_0019AD08; } }
L_0019ACD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019ACE0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 158u, depth + 1u); else { c.pc = 0x001260A0u; return; } if (c.pc != 0x0019ACE0u) [[unlikely]] return; }
L_0019ACE0:
    c.r[2].d[0] = c.r[2].sd[0] < 20480ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019AD08; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0019AD00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[17].d[0] | 2048ull;  if (t) { goto L_0019AD08; } }
    c.budget -= 1;
L_0019AD00:
    c.r[17].d[0] = c.r[17].d[0] | 1024ull;
    c.budget -= 2;
L_0019AD08:
    c.r[2].d[0] = c.r[19].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] - 16384u);
    c.r[18].d[0] = c.r[2].d[0] << 48;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019AD24u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 158u, depth + 1u); else { c.pc = 0x001260A0u; return; } if (c.pc != 0x0019AD24u) [[unlikely]] return; }
L_0019AD24:
    c.r[1].d[0] = c.r[2].sd[0] < 12289ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0019AD48; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0019AD40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[17].d[0] | 8192ull;  if (t) { goto L_0019AD78; } }
L_0019AD40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[17].d[0] | 4096ull;  if (t) { goto L_0019AD78; } }
L_0019AD48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019AD50u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 158u, depth + 1u); else { c.pc = 0x001260A0u; return; } if (c.pc != 0x0019AD50u) [[unlikely]] return; }
L_0019AD50:
    c.r[2].d[0] = c.r[2].sd[0] < 20480ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019AD78; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0019AD70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[17].d[0] | 8192ull;  if (t) { goto L_0019AD78; } }
    c.budget -= 1;
L_0019AD70:
    c.r[17].d[0] = c.r[17].d[0] | 4096ull;
    c.budget -= 2;
L_0019AD78:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0019ADA0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 1920u)));
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0019AF10; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[16].w[0] + 32u);  if (t) { goto L_0019AE08; } }
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019ADDCu); set32(c.r[6], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0019ADDCu) [[unlikely]] return; }
L_0019ADDC:
    c.f[13] = ld32((c.r[29].w[0] + 72u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019ADE8u); c.f[12] = ld32((c.r[29].w[0] + 64u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x0019ADE8u) [[unlikely]] return; }
L_0019ADE8:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1252u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.r[18].d[0] = c.r[2].d[0] << 48;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);  if (t) { goto L_0019AE68; } }
    c.budget -= 1;
L_0019AE08:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8656u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[2], c.r[2].w[0] + 29024u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019AE2Cu); set32(c.r[4], c.r[2].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0019AE2Cu) [[unlikely]] return; }
L_0019AE2C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019AE3Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x0019AE3Cu) [[unlikely]] return; }
L_0019AE3C:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019AE48u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0019AE48u) [[unlikely]] return; }
L_0019AE48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019AE50u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x0019AE50u) [[unlikely]] return; }
L_0019AE50:
    c.f[13] = ld32((c.r[29].w[0] + 72u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019AE5Cu); c.f[12] = ld32((c.r[29].w[0] + 64u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x0019AE5Cu) [[unlikely]] return; }
L_0019AE5C:
    c.r[18].d[0] = c.r[2].d[0] << 48;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    c.budget -= 3;
L_0019AE68:
    c.r[16].d[0] = c.r[18].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019AE78u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 158u, depth + 1u); else { c.pc = 0x001260A0u; return; } if (c.pc != 0x0019AE78u) [[unlikely]] return; }
L_0019AE78:
    c.r[1].d[0] = c.r[2].sd[0] < 12289ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0019AE98; } }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0019AEB8; } }
    c.budget -= 1;
L_0019AE98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019AEA0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 158u, depth + 1u); else { c.pc = 0x001260A0u; return; } if (c.pc != 0x0019AEA0u) [[unlikely]] return; }
L_0019AEA0:
    c.r[2].d[0] = c.r[2].sd[0] < 20480ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019AEB8; } }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    st16((c.r[17].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0019AEB8:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] - 16384u);
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019AED4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 158u, depth + 1u); else { c.pc = 0x001260A0u; return; } if (c.pc != 0x0019AED4u) [[unlikely]] return; }
L_0019AED4:
    c.r[1].d[0] = c.r[2].sd[0] < 12289ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0019AEF0; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 1024ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0019AF10; } }
L_0019AEF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019AEF8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 158u, depth + 1u); else { c.pc = 0x001260A0u; return; } if (c.pc != 0x0019AEF8u) [[unlikely]] return; }
L_0019AEF8:
    c.r[3].d[0] = c.r[2].sd[0] < 20480ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0019AF10; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 2048ull;
    st16((c.r[17].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0019AF10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0019AF30:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1934u)));
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(47ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019AF48; } }
    set32(c.r[5], 0u + 47u);
    c.budget -= 1;
L_0019AF48:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 12960u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 150u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(95ll) ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019AF78; } }
    set32(c.r[5], 0u + 95u);
    c.budget -= 1;
L_0019AF78:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; return; }
L_0019AF80:
    st8((c.r[4].w[0] + 1804u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_0019AF90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019AFA8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 163u, depth + 1u); else { c.pc = 0x0019AF80u; return; } if (c.pc != 0x0019AFA8u) [[unlikely]] return; }
L_0019AFA8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], 0u + 8u);  if (t) { goto L_0019AFC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019AFE0; } }
    c.budget -= 1;
L_0019AFC8:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] - 14960u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 6;
L_0019AFE0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1938u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_0019B040; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 14512u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00198000u < 16384u) { entry = entries_0026[(t - 0x00198000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0019B008:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 6u);  if (t) { goto L_0019B040; } }
L_0019B010:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 2u);  if (t) { goto L_0019B040; } }
L_0019B018:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0019B040; } }
L_0019B020:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1939u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019B038; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0019B040; } }
    c.budget -= 1;
L_0019B038:
    set32(c.r[5], c.r[5].w[0] + 2u);
    c.budget -= 2;
L_0019B040:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B048u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 162u, depth + 1u); else { c.pc = 0x0019AF30u; return; } if (c.pc != 0x0019B048u) [[unlikely]] return; }
L_0019B048:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B050u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0019B050u) [[unlikely]] return; }
L_0019B050:
    set32(c.r[3], c.r[17].w[0] << 2);
    c.r[4].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] - 14880u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[16].w[0] + 1816u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0019B090:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], 0u + 8u);  if (t) { goto L_0019B0B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019B0D0; } }
L_0019B0B8:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] - 14112u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 6;
L_0019B0D0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1938u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_0019B130; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 14576u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00198000u < 16384u) { entry = entries_0026[(t - 0x00198000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0019B0F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 6u);  if (t) { goto L_0019B130; } }
L_0019B100:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 2u);  if (t) { goto L_0019B130; } }
L_0019B108:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0019B130; } }
L_0019B110:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1939u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019B128; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0019B130; } }
    c.budget -= 1;
L_0019B128:
    set32(c.r[5], c.r[5].w[0] + 2u);
    c.budget -= 2;
L_0019B130:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B138u);  if (depth < kMaxDepth) unit_0026(c, 162u, depth + 1u); else { c.pc = 0x0019AF30u; return; } if (c.pc != 0x0019B138u) [[unlikely]] return; }
L_0019B138:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B140u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0019B140u) [[unlikely]] return; }
L_0019B140:
    set32(c.r[3], c.r[16].w[0] << 2);
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] - 14032u);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019B170:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0019B1A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 12u);  if (t) { goto L_0019B1B8; } }
    c.budget -= 1;
L_0019B1A0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] - 13264u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 6;
L_0019B1B8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1938u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_0019B1F8; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 14640u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00198000u < 16384u) { entry = entries_0026[(t - 0x00198000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0019B1E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 6u);  if (t) { goto L_0019B1F8; } }
L_0019B1E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { goto L_0019B1F8; } }
L_0019B1F0:
    set32(c.r[5], c.r[5].w[0] + 2u);
    c.budget -= 2;
L_0019B1F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B200u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 162u, depth + 1u); else { c.pc = 0x0019AF30u; return; } if (c.pc != 0x0019B200u) [[unlikely]] return; }
L_0019B200:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B208u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0019B208u) [[unlikely]] return; }
L_0019B208:
    set32(c.r[3], c.r[17].w[0] << 2);
    c.r[4].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] - 13184u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    st8((c.r[16].w[0] + 1818u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0019B240:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0019B270; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 12u);  if (t) { goto L_0019B288; } }
    c.budget -= 1;
L_0019B270:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] - 13264u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 6;
L_0019B288:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1938u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_0019B2C8; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 14704u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00198000u < 16384u) { entry = entries_0026[(t - 0x00198000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0019B2B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 6u);  if (t) { goto L_0019B2C8; } }
L_0019B2B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { goto L_0019B2C8; } }
L_0019B2C0:
    set32(c.r[5], c.r[5].w[0] + 2u);
    c.budget -= 2;
L_0019B2C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B2D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 162u, depth + 1u); else { c.pc = 0x0019AF30u; return; } if (c.pc != 0x0019B2D0u) [[unlikely]] return; }
L_0019B2D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B2D8u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0019B2D8u) [[unlikely]] return; }
L_0019B2D8:
    set32(c.r[3], c.r[17].w[0] << 2);
    c.r[4].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] - 13184u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    st8((c.r[16].w[0] + 1819u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0019B310:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[5], 0u + 6u);  if (t) { goto L_0019B340; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019B358; } }
L_0019B340:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] - 12800u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 6;
L_0019B358:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1938u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_0019B3B8; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 14768u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00198000u < 16384u) { entry = entries_0026[(t - 0x00198000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0019B380:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] - 4u);  if (t) { goto L_0019B3B8; } }
L_0019B388:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 6u);  if (t) { goto L_0019B3B8; } }
L_0019B390:
    set32(c.r[3], 0u + 600u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1820u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0019B3F0; } }
    c.budget -= 1;
L_0019B3A0:
    set32(c.r[3], 0u + 480u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1820u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0019B3F0; } }
    c.budget -= 1;
L_0019B3B0:
    set32(c.r[5], c.r[5].w[0] - 4u);
    c.budget -= 2;
L_0019B3B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B3C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 162u, depth + 1u); else { c.pc = 0x0019AF30u; return; } if (c.pc != 0x0019B3C0u) [[unlikely]] return; }
L_0019B3C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B3C8u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0019B3C8u) [[unlikely]] return; }
L_0019B3C8:
    set32(c.r[3], c.r[17].w[0] << 2);
    c.r[4].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] - 12720u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[16].w[0] + 1820u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 10;
L_0019B3F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0019B410:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0019B458; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1940u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 90u);  if (t) { goto L_0019B450; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1924u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0019B500; } }
L_0019B450:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 6u);  if (t) { goto L_0019B470; } }
L_0019B458:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] - 11952u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 6;
L_0019B470:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1938u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_0019B4C8; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 14832u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00198000u < 16384u) { entry = entries_0026[(t - 0x00198000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0019B498:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 2u);  if (t) { goto L_0019B4C8; } }
L_0019B4A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] - 8u);  if (t) { goto L_0019B4C8; } }
L_0019B4A8:
    set32(c.r[3], 0u + 600u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1924u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0019B500; } }
    c.budget -= 1;
L_0019B4B8:
    set32(c.r[3], 0u + 480u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1924u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0019B500; } }
    c.budget -= 1;
L_0019B4C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B4D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 162u, depth + 1u); else { c.pc = 0x0019AF30u; return; } if (c.pc != 0x0019B4D0u) [[unlikely]] return; }
L_0019B4D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B4D8u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0019B4D8u) [[unlikely]] return; }
L_0019B4D8:
    set32(c.r[3], c.r[17].w[0] << 2);
    c.r[4].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] - 11872u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[16].w[0] + 1924u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 10;
L_0019B500:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0019B520:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0019B560; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1940u)));
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0019B558; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019B5F8; } }
L_0019B558:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 6u);  if (t) { goto L_0019B578; } }
L_0019B560:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] - 6976u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 6;
L_0019B578:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1938u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_0019B5C0; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 14896u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00198000u < 16384u) { entry = entries_0026[(t - 0x00198000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0019B5A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] - 4u);  if (t) { goto L_0019B5C0; } }
L_0019B5A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 6u);  if (t) { goto L_0019B5C0; } }
L_0019B5B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 12u);  if (t) { goto L_0019B5C0; } }
L_0019B5B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0019B5F8; } }
L_0019B5C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B5C8u);  if (depth < kMaxDepth) unit_0026(c, 162u, depth + 1u); else { c.pc = 0x0019AF30u; return; } if (c.pc != 0x0019B5C8u) [[unlikely]] return; }
L_0019B5C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B5D0u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0019B5D0u) [[unlikely]] return; }
L_0019B5D0:
    c.r[5].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[4], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] - 6896u);
    set32(c.r[4], c.r[4].w[0] << (c.r[5].w[0] & 31u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 10;
L_0019B5F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019B610:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 744u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019B644; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] - 10832u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[2].w[0]));  if (t) { goto L_0019B65C; } }
L_0019B644:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] - 10672u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 6;
L_0019B65C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B664u); c.r[16].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0019B664u) [[unlikely]] return; }
L_0019B664:
    c.r[4].d[0] = c.r[2].d[0] & 15ull;
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[2].w[0] << (c.r[4].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0019B688; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0019B688; } }
L_0019B688:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019B6A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0019B6E8; } }
    c.r[6].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8659u)));
    set32(c.r[3], c.r[3].w[0] - 10512u);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0019B720; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019B780; } }
    c.budget -= 1;
L_0019B6E8:
    c.r[6].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8660u)));
    set32(c.r[3], c.r[3].w[0] - 10112u);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0019B720; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019B780; } }
    c.budget -= 1;
L_0019B720:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);  if (t) { goto L_0019B73C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 10u);  if (t) { goto L_0019B748; } }
L_0019B73C:
    set32(c.r[2], c.r[2].w[0] - 11104u);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 3;
L_0019B748:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B750u);  if (depth < kMaxDepth) unit_0026(c, 162u, depth + 1u); else { c.pc = 0x0019AF30u; return; } if (c.pc != 0x0019B750u) [[unlikely]] return; }
L_0019B750:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B758u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0019B758u) [[unlikely]] return; }
L_0019B758:
    c.r[5].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[4], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] - 11024u);
    set32(c.r[4], c.r[4].w[0] << (c.r[5].w[0] & 31u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 10;
L_0019B780:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019B790:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B7A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 37u, depth + 1u); else { c.pc = 0x003B0350u; return; } if (c.pc != 0x0019B7A4u) [[unlikely]] return; }
L_0019B7A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019B7D0; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], 0u + 24u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 28u);  if (t) { goto L_0019B7C8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0019B7D0; } }
    c.budget -= 1;
L_0019B7C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0019B858; } }
L_0019B7D0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], 0u + 8u);  if (t) { goto L_0019B7F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019B808; } }
    c.budget -= 1;
L_0019B7F0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] - 9872u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 6;
L_0019B808:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1938u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_0019B838; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 14960u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00198000u < 16384u) { entry = entries_0026[(t - 0x00198000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0019B830:
    set32(c.r[5], c.r[5].w[0] + 6u);
    c.budget -= 2;
L_0019B838:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B840u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 162u, depth + 1u); else { c.pc = 0x0019AF30u; return; } if (c.pc != 0x0019B840u) [[unlikely]] return; }
L_0019B840:
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] - 9792u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
L_0019B858:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019B870:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0019B8A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 10u);  if (t) { goto L_0019B8B8; } }
    c.budget -= 1;
L_0019B8A0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] - 9408u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 6;
L_0019B8B8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1938u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_0019B8E8; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 15024u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00198000u < 16384u) { entry = entries_0026[(t - 0x00198000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0019B8E0:
    set32(c.r[5], c.r[5].w[0] + 6u);
    c.budget -= 2;
L_0019B8E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B8F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 162u, depth + 1u); else { c.pc = 0x0019AF30u; return; } if (c.pc != 0x0019B8F0u) [[unlikely]] return; }
L_0019B8F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B8F8u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0019B8F8u) [[unlikely]] return; }
L_0019B8F8:
    set32(c.r[3], c.r[17].w[0] << 2);
    c.r[4].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] - 9328u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[16].w[0] + 1928u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0019B930:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 744u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0019B978; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 8658u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[4], c.r[4].w[0] - 4224u);
    set32(c.r[2], c.r[2].w[0] - 3904u);
    set32(c.r[5], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_0019B9A0; } }
    c.budget -= 1;
L_0019B978:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 8658u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[4], c.r[4].w[0] - 4704u);
    set32(c.r[2], c.r[2].w[0] - 4384u);
    set32(c.r[5], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
L_0019B9A0:
    c.f[0] = ld32((c.r[4].w[0]));
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0019B9F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B9B8u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0019B9B8u) [[unlikely]] return; }
L_0019B9B8:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 8658u));
    c.r[4].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[2], c.r[3].w[0] << 4);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B9CCu); set32(c.r[17], c.r[2].w[0] + c.r[4].w[0]);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0019B9CCu) [[unlikely]] return; }
L_0019B9CC:
    set32(c.r[3], c.r[17].w[0] << 1);
    c.r[4].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    set32(c.r[4], c.r[2].w[0] << (c.r[4].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0019B9F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019BA00; } }
L_0019B9F8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0019BA00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0019BA20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019BA34u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 37u, depth + 1u); else { c.pc = 0x003B0350u; return; } if (c.pc != 0x0019BA34u) [[unlikely]] return; }
L_0019BA34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019BA48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0019BA98; } }
    c.budget -= 1;
L_0019BA48:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] - 4976u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019BA64u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 162u, depth + 1u); else { c.pc = 0x0019AF30u; return; } if (c.pc != 0x0019BA64u) [[unlikely]] return; }
L_0019BA64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019BA6Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0019BA6Cu) [[unlikely]] return; }
L_0019BA6C:
    c.r[5].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[4], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] - 4896u);
    set32(c.r[4], c.r[4].w[0] << (c.r[5].w[0] & 31u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 11;
L_0019BA98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019BAB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 29u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 44u);  if (t) { goto L_0019BB08; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0019BB30; } }
    set32(c.r[2], 0u + 28u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 24u);  if (t) { goto L_0019BB30; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0019BB30; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 9u);  if (t) { goto L_0019BB30; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0019BB30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019BB28; } }
    c.budget -= 1;
L_0019BB08:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8659u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0019BB28; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019BB30; } }
    c.budget -= 1;
L_0019BB28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0019BBD0; } }
L_0019BB30:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0019BB50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 10u);  if (t) { goto L_0019BB68; } }
    c.budget -= 1;
L_0019BB50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] - 3392u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 6;
L_0019BB68:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1938u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_0019BB98; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 15088u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00198000u < 16384u) { entry = entries_0026[(t - 0x00198000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0019BB90:
    set32(c.r[5], c.r[5].w[0] + 6u);
    c.budget -= 2;
L_0019BB98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019BBA0u);  if (depth < kMaxDepth) unit_0026(c, 162u, depth + 1u); else { c.pc = 0x0019AF30u; return; } if (c.pc != 0x0019BBA0u) [[unlikely]] return; }
L_0019BBA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019BBA8u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0019BBA8u) [[unlikely]] return; }
L_0019BBA8:
    c.r[5].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[4], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] - 3312u);
    set32(c.r[4], c.r[4].w[0] << (c.r[5].w[0] & 31u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 10;
L_0019BBD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019BBE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019BBF4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 37u, depth + 1u); else { c.pc = 0x003B0350u; return; } if (c.pc != 0x0019BBF4u) [[unlikely]] return; }
L_0019BBF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019BC98; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[3], 0u + 46u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 53u);  if (t) { goto L_0019BC18; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0019BC98; } }
    c.budget -= 1;
L_0019BC18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019BC20u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0019BC20u) [[unlikely]] return; }
L_0019BC20:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1934u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] + 256u);
    c.r[5].d[0] = c.r[2].d[0] & 31ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[1].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[7], c.r[16].w[0] + 304u);  if (t) { goto L_0019BC98; } }
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
L_0019BC50:
    set32(c.r[5], c.r[7].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 54u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0019BC70; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 64u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0019BC80; } }
    c.budget -= 1;
L_0019BC70:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019BC50u | kUnwind; return; } goto L_0019BC50; } }
L_0019BC80:
    c.r[1].d[0] = c.r[6].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 4u);  if (t) { goto L_0019BC98; } }
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_0019BC98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019BCB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019BCC4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0019BCC4u) [[unlikely]] return; }
L_0019BCC4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1934u)));
    c.r[4].d[0] = c.r[2].d[0] & 15ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], c.r[2].w[0] + 288u);
    set32(c.r[3], c.r[3].w[0] << 4);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019BD00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019BD14u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 37u, depth + 1u); else { c.pc = 0x003B0350u; return; } if (c.pc != 0x0019BD14u) [[unlikely]] return; }
L_0019BD14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019BD58; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0019BD58; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8659u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0019BD58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019BD40u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0019BD40u) [[unlikely]] return; }
L_0019BD40:
    c.r[3].d[0] = c.r[2].d[0] & 31ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_0019BD58; } }
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_0019BD58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019BD70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 46u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0019BD98; } }
    set32(c.r[2], 0u + 53u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0019BE20; } }
L_0019BD98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019BDA0u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0019BDA0u) [[unlikely]] return; }
L_0019BDA0:
    c.r[2].d[0] = c.r[2].d[0] & 31ull;
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[9], c.r[16].w[0] + 304u);  if (t) { goto L_0019BE20; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 48u);
    set32(c.r[3], 0u + 64u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 6;
L_0019BDC8:
    set32(c.r[6], c.r[9].w[0] + c.r[8].w[0]);
    c.r[2].d[0] = ld8((c.r[6].w[0] + 54u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0019BE00; } }
    c.r[2].d[0] = ld8((c.r[6].w[0] + 64u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019BDF8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_0019BDF8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0019BE00; } }
    c.budget -= 1;
L_0019BDF8:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 2;
L_0019BE00:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[2].d[0] = c.r[8].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[7].sd[0] < 3ll ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019BDC8u | kUnwind; return; } goto L_0019BDC8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019BE20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0019BE28; } }
L_0019BE20:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0019BE28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019BE40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[1].w[0] + 18332u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st32((c.r[1].w[0] + 18328u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st32((c.r[1].w[0] + 18324u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st32((c.r[1].w[0] + 18320u), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_0019BFB0; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 15152u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00198000u < 16384u) { entry = entries_0026[(t - 0x00198000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0019BE98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019BEA0u);  if (depth < kMaxDepth) unit_0070(c, 249u, depth + 1u); else { c.pc = 0x002C2F60u; return; } if (c.pc != 0x0019BEA0u) [[unlikely]] return; }
L_0019BEA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019BEA8u);  if (depth < kMaxDepth) unit_00C6(c, 290u, depth + 1u); else { c.pc = 0x0041BCF0u; return; } if (c.pc != 0x0019BEA8u) [[unlikely]] return; }
L_0019BEA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019BFB0; } }
L_0019BEB0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[4].w[0] + 21392u);
    st8((c.r[2].w[0] + 36u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[28].w[0] - 23868u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 37u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[28].w[0] - 23867u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 38u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[28].w[0] - 23872u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 39u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[28].w[0] - 23871u), static_cast<std::uint8_t>(0u));
    st16((c.r[28].w[0] - 23876u), static_cast<std::uint16_t>(0u));
    st16((c.r[28].w[0] - 23874u), static_cast<std::uint16_t>(0u));
    st8((c.r[28].w[0] - 23884u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23883u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    st16((c.r[28].w[0] - 23880u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 38;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019BF48u); st16((c.r[28].w[0] - 23878u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0026(c, 16u, depth + 1u); else { c.pc = 0x00198150u; return; } if (c.pc != 0x0019BF48u) [[unlikely]] return; }
L_0019BF48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019BF50u);  if (depth < kMaxDepth) unit_0026(c, 17u, depth + 1u); else { c.pc = 0x001981F0u; return; } if (c.pc != 0x0019BF50u) [[unlikely]] return; }
L_0019BF50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019BF58u);  if (depth < kMaxDepth) unit_0025(c, 207u, depth + 1u); else { c.pc = 0x001976A0u; return; } if (c.pc != 0x0019BF58u) [[unlikely]] return; }
L_0019BF58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019BFB0; } }
L_0019BF60:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 36u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[28].w[0] - 23868u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 37u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[28].w[0] - 23867u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 38u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[28].w[0] - 23872u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 39u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23871u), static_cast<std::uint8_t>(0u));
    st16((c.r[28].w[0] - 23876u), static_cast<std::uint16_t>(0u));
    st16((c.r[28].w[0] - 23874u), static_cast<std::uint16_t>(0u));
    st8((c.r[28].w[0] - 23884u), static_cast<std::uint8_t>(0u));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019BFA4u); st8((c.r[28].w[0] - 23883u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0026(c, 16u, depth + 1u); else { c.pc = 0x00198150u; return; } if (c.pc != 0x0019BFA4u) [[unlikely]] return; }
L_0019BFA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019BFACu);  if (depth < kMaxDepth) unit_0026(c, 17u, depth + 1u); else { c.pc = 0x001981F0u; return; } if (c.pc != 0x0019BFACu) [[unlikely]] return; }
L_0019BFAC:
    c.budget -= 1;
L_0019BFB0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0019BFC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019BFD0u);  if (depth < kMaxDepth) unit_0025(c, 136u, depth + 1u); else { c.pc = 0x00196910u; return; } if (c.pc != 0x0019BFD0u) [[unlikely]] return; }
L_0019BFD0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { [[clang::musttail]] return unit_0027(c, 8u, depth); } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 15184u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00198000u < 16384u) { entry = entries_0026[(t - 0x00198000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
}

}
