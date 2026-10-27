#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_002A[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0,
    0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 20,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0,
    0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 0,
    0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0,
    0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 60,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 64, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0,
    93, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0,
    98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 0,
    0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 131, 0, 0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0,
    0, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0,
    141, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 144, 0,
    0, 145, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 0, 0, 0, 149,
    0, 0, 0, 150, 0, 0, 0, 0, 151, 0, 0, 0, 0, 152, 0, 153, 0, 0, 154, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 0,
    159, 0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0,
    168, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 171, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 176, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 182, 0, 0, 0, 0, 0, 0, 183,
    0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0, 191, 0, 0, 0,
    0, 0, 0, 192, 0, 0, 0, 193, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0,
    0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0,
    207, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 0, 210, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    212, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0,
    0, 216, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 219, 0, 0, 220, 0, 0, 221, 0, 0, 222, 0,
    0, 223, 0, 0, 224, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0,
    228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 231, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0,
    0, 235, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 237, 0, 0, 0, 0, 238, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    240, 0, 0, 0, 0, 241, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    244, 0, 0, 0, 0, 245, 0, 0, 246, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 249, 0, 0, 250,
    0, 0, 251, 0, 0, 252, 0, 0, 253, 0, 0, 254, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 256, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 266, 0, 0, 0, 0, 0, 267, 0,
    0, 0, 0, 0, 268, 0, 0, 0, 0, 269, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 272, 0, 0,
    273, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 276, 0, 0,
    277, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 280, 0, 0, 281, 0, 0, 282, 0, 0, 283, 0, 0,
    284, 0, 0, 285, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0,
};

void unit_002A(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001A8000;
    case 2u: goto L_001A8058;
    case 3u: goto L_001A8088;
    case 4u: goto L_001A80A0;
    case 5u: goto L_001A80B4;
    case 6u: goto L_001A8188;
    case 7u: goto L_001A81D0;
    case 8u: goto L_001A82E8;
    case 9u: goto L_001A8308;
    case 10u: goto L_001A8338;
    case 11u: goto L_001A8430;
    case 12u: goto L_001A8438;
    case 13u: goto L_001A84C0;
    case 14u: goto L_001A8568;
    case 15u: goto L_001A857C;
    case 16u: goto L_001A85C0;
    case 17u: goto L_001A8618;
    case 18u: goto L_001A8650;
    case 19u: goto L_001A8668;
    case 20u: goto L_001A867C;
    case 21u: goto L_001A86CC;
    case 22u: goto L_001A8708;
    case 23u: goto L_001A8768;
    case 24u: goto L_001A8880;
    case 25u: goto L_001A8A94;
    case 26u: goto L_001A8AD0;
    case 27u: goto L_001A8B20;
    case 28u: goto L_001A8B58;
    case 29u: goto L_001A8B70;
    case 30u: goto L_001A8B84;
    case 31u: goto L_001A8B98;
    case 32u: goto L_001A8BE4;
    case 33u: goto L_001A8C20;
    case 34u: goto L_001A8C90;
    case 35u: goto L_001A8DA8;
    case 36u: goto L_001A8F0C;
    case 37u: goto L_001A8F50;
    case 38u: goto L_001A8FA0;
    case 39u: goto L_001A9024;
    case 40u: goto L_001A90A0;
    case 41u: goto L_001A911C;
    case 42u: goto L_001A9158;
    case 43u: goto L_001A9170;
    case 44u: goto L_001A9184;
    case 45u: goto L_001A919C;
    case 46u: goto L_001A91E0;
    case 47u: goto L_001A9228;
    case 48u: goto L_001A92E8;
    case 49u: goto L_001A9308;
    case 50u: goto L_001A9334;
    case 51u: goto L_001A937C;
    case 52u: goto L_001A941C;
    case 53u: goto L_001A943C;
    case 54u: goto L_001A9468;
    case 55u: goto L_001A9490;
    case 56u: goto L_001A9540;
    case 57u: goto L_001A9598;
    case 58u: goto L_001A95D0;
    case 59u: goto L_001A95E8;
    case 60u: goto L_001A95FC;
    case 61u: goto L_001A9660;
    case 62u: goto L_001A96D8;
    case 63u: goto L_001A9758;
    case 64u: goto L_001A9778;
    case 65u: goto L_001A9820;
    case 66u: goto L_001A9888;
    case 67u: goto L_001A98B8;
    case 68u: goto L_001A9940;
    case 69u: goto L_001A99B0;
    case 70u: goto L_001A9A5C;
    case 71u: goto L_001A9A98;
    case 72u: goto L_001A9AB0;
    case 73u: goto L_001A9AC4;
    case 74u: goto L_001A9B14;
    case 75u: goto L_001A9B54;
    case 76u: goto L_001A9C00;
    case 77u: goto L_001A9CC8;
    case 78u: goto L_001A9D64;
    case 79u: goto L_001A9DB0;
    case 80u: goto L_001A9DC0;
    case 81u: goto L_001A9E6C;
    case 82u: goto L_001A9EA8;
    case 83u: goto L_001A9EC0;
    case 84u: goto L_001A9ED4;
    case 85u: goto L_001A9F24;
    case 86u: goto L_001A9F64;
    case 87u: goto L_001AA010;
    case 88u: goto L_001AA0F8;
    case 89u: goto L_001AA194;
    case 90u: goto L_001AA1E0;
    case 91u: goto L_001AA230;
    case 92u: goto L_001AA268;
    case 93u: goto L_001AA280;
    case 94u: goto L_001AA294;
    case 95u: goto L_001AA308;
    case 96u: goto L_001AA350;
    case 97u: goto L_001AA368;
    case 98u: goto L_001AA380;
    case 99u: goto L_001AA398;
    case 100u: goto L_001AA3B0;
    case 101u: goto L_001AA3C8;
    case 102u: goto L_001AA428;
    case 103u: goto L_001AA530;
    case 104u: goto L_001AA5DC;
    case 105u: goto L_001AA620;
    case 106u: goto L_001AA66C;
    case 107u: goto L_001AA720;
    case 108u: goto L_001AA754;
    case 109u: goto L_001AA790;
    case 110u: goto L_001AA7F0;
    case 111u: goto L_001AA82C;
    case 112u: goto L_001AA848;
    case 113u: goto L_001AA864;
    case 114u: goto L_001AA8D0;
    case 115u: goto L_001AA904;
    case 116u: goto L_001AA93C;
    case 117u: goto L_001AA99C;
    case 118u: goto L_001AA9D8;
    case 119u: goto L_001AA9F4;
    case 120u: goto L_001AAA10;
    case 121u: goto L_001AAA70;
    case 122u: goto L_001AAB60;
    case 123u: goto L_001AAB98;
    case 124u: goto L_001AABBC;
    case 125u: goto L_001AAC00;
    case 126u: goto L_001AAC80;
    case 127u: goto L_001AAD28;
    case 128u: goto L_001AAD54;
    case 129u: goto L_001AAD60;
    case 130u: goto L_001AAE40;
    case 131u: goto L_001AAE88;
    case 132u: goto L_001AAE98;
    case 133u: goto L_001AAEA4;
    case 134u: goto L_001AAEC0;
    case 135u: goto L_001AAED0;
    case 136u: goto L_001AAEF0;
    case 137u: goto L_001AAF0C;
    case 138u: goto L_001AAF24;
    case 139u: goto L_001AAF40;
    case 140u: goto L_001AAF6C;
    case 141u: goto L_001AAF80;
    case 142u: goto L_001AAF90;
    case 143u: goto L_001AAFF0;
    case 144u: goto L_001AAFF8;
    case 145u: goto L_001AB004;
    case 146u: goto L_001AB010;
    case 147u: goto L_001AB054;
    case 148u: goto L_001AB064;
    case 149u: goto L_001AB07C;
    case 150u: goto L_001AB08C;
    case 151u: goto L_001AB0A0;
    case 152u: goto L_001AB0B4;
    case 153u: goto L_001AB0BC;
    case 154u: goto L_001AB0C8;
    case 155u: goto L_001AB0D4;
    case 156u: goto L_001AB0F4;
    case 157u: goto L_001AB158;
    case 158u: goto L_001AB168;
    case 159u: goto L_001AB180;
    case 160u: goto L_001AB194;
    case 161u: goto L_001AB1A0;
    case 162u: goto L_001AB1AC;
    case 163u: goto L_001AB1D8;
    case 164u: goto L_001AB218;
    case 165u: goto L_001AB230;
    case 166u: goto L_001AB248;
    case 167u: goto L_001AB270;
    case 168u: goto L_001AB280;
    case 169u: goto L_001AB290;
    case 170u: goto L_001AB2BC;
    case 171u: goto L_001AB2C4;
    case 172u: goto L_001AB2DC;
    case 173u: goto L_001AB2F0;
    case 174u: goto L_001AB31C;
    case 175u: goto L_001AB334;
    case 176u: goto L_001AB33C;
    case 177u: goto L_001AB348;
    case 178u: goto L_001AB398;
    case 179u: goto L_001AB3A8;
    case 180u: goto L_001AB3C0;
    case 181u: goto L_001AB3D8;
    case 182u: goto L_001AB3E0;
    case 183u: goto L_001AB3FC;
    case 184u: goto L_001AB408;
    case 185u: goto L_001AB454;
    case 186u: goto L_001AB498;
    case 187u: goto L_001AB4A8;
    case 188u: goto L_001AB4BC;
    case 189u: goto L_001AB4D0;
    case 190u: goto L_001AB4E4;
    case 191u: goto L_001AB4F0;
    case 192u: goto L_001AB50C;
    case 193u: goto L_001AB51C;
    case 194u: goto L_001AB524;
    case 195u: goto L_001AB548;
    case 196u: goto L_001AB5B0;
    case 197u: goto L_001AB5C0;
    case 198u: goto L_001AB5D0;
    case 199u: goto L_001AB5F4;
    case 200u: goto L_001AB620;
    case 201u: goto L_001AB660;
    case 202u: goto L_001AB670;
    case 203u: goto L_001AB68C;
    case 204u: goto L_001AB6B8;
    case 205u: goto L_001AB6C8;
    case 206u: goto L_001AB6E0;
    case 207u: goto L_001AB700;
    case 208u: goto L_001AB720;
    case 209u: goto L_001AB730;
    case 210u: goto L_001AB744;
    case 211u: goto L_001AB74C;
    case 212u: goto L_001AB780;
    case 213u: goto L_001AB794;
    case 214u: goto L_001AB7B8;
    case 215u: goto L_001AB7F0;
    case 216u: goto L_001AB804;
    case 217u: goto L_001AB80C;
    case 218u: goto L_001AB838;
    case 219u: goto L_001AB854;
    case 220u: goto L_001AB860;
    case 221u: goto L_001AB86C;
    case 222u: goto L_001AB878;
    case 223u: goto L_001AB884;
    case 224u: goto L_001AB890;
    case 225u: goto L_001AB8A8;
    case 226u: goto L_001AB8C0;
    case 227u: goto L_001AB8EC;
    case 228u: goto L_001AB900;
    case 229u: goto L_001AB92C;
    case 230u: goto L_001AB964;
    case 231u: goto L_001AB998;
    case 232u: goto L_001AB9A0;
    case 233u: goto L_001AB9B0;
    case 234u: goto L_001AB9F8;
    case 235u: goto L_001ABA04;
    case 236u: goto L_001ABA1C;
    case 237u: goto L_001ABA30;
    case 238u: goto L_001ABA44;
    case 239u: goto L_001ABA50;
    case 240u: goto L_001ABA80;
    case 241u: goto L_001ABA94;
    case 242u: goto L_001ABAA0;
    case 243u: goto L_001ABAC4;
    case 244u: goto L_001ABB00;
    case 245u: goto L_001ABB14;
    case 246u: goto L_001ABB20;
    case 247u: goto L_001ABB28;
    case 248u: goto L_001ABB54;
    case 249u: goto L_001ABB70;
    case 250u: goto L_001ABB7C;
    case 251u: goto L_001ABB88;
    case 252u: goto L_001ABB94;
    case 253u: goto L_001ABBA0;
    case 254u: goto L_001ABBAC;
    case 255u: goto L_001ABBC8;
    case 256u: goto L_001ABC08;
    case 257u: goto L_001ABC20;
    case 258u: goto L_001ABC4C;
    case 259u: goto L_001ABC60;
    case 260u: goto L_001ABC8C;
    case 261u: goto L_001ABCBC;
    case 262u: goto L_001ABCC8;
    case 263u: goto L_001ABCF8;
    case 264u: goto L_001ABD20;
    case 265u: goto L_001ABD54;
    case 266u: goto L_001ABD60;
    case 267u: goto L_001ABD78;
    case 268u: goto L_001ABD90;
    case 269u: goto L_001ABDA4;
    case 270u: goto L_001ABDB0;
    case 271u: goto L_001ABDE0;
    case 272u: goto L_001ABDF4;
    case 273u: goto L_001ABE00;
    case 274u: goto L_001ABE24;
    case 275u: goto L_001ABE60;
    case 276u: goto L_001ABE74;
    case 277u: goto L_001ABE80;
    case 278u: goto L_001ABE88;
    case 279u: goto L_001ABEB4;
    case 280u: goto L_001ABED0;
    case 281u: goto L_001ABEDC;
    case 282u: goto L_001ABEE8;
    case 283u: goto L_001ABEF4;
    case 284u: goto L_001ABF00;
    case 285u: goto L_001ABF0C;
    case 286u: goto L_001ABF28;
    case 287u: goto L_001ABF5C;
    case 288u: goto L_001ABFA8;
    case 289u: goto L_001ABFC0;
    case 290u: goto L_001ABFF4;
    default: bad_entry(c, 0x001A8000u); return;
    }
L_001A8000:
    c.budget -= 2;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001A8030; } }
    c.f[1] = ld32((c.r[16].w[0] + 1856u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44920000u);
    c.r[3].d[0] = c.r[3].d[0] | 57344ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001A8568; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1856u), c.f[0]);  if (t) { goto L_001A8568; } }
L_001A8030:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44770000u);
    c.f[1] = ld32((c.r[16].w[0] + 1856u));
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001A8568; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1856u), c.f[0]);  if (t) { goto L_001A8568; } }
L_001A8058:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1822u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A8070; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 1822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001A8070:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1822u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);  if (t) { goto L_001A8090; } }
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8088u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 124u, depth + 1u); else { c.pc = 0x00196720u; return; } if (c.pc != 0x001A8088u) [[unlikely]] return; }
L_001A8088:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A80A0; } }
L_001A8090:
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A80A0u); st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0025(c, 157u, depth + 1u); else { c.pc = 0x00196E10u; return; } if (c.pc != 0x001A80A0u) [[unlikely]] return; }
L_001A80A0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1820u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001A8200; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A80B4u);  if (depth < kMaxDepth) unit_0025(c, 155u, depth + 1u); else { c.pc = 0x00196DC0u; return; } if (c.pc != 0x001A80B4u) [[unlikely]] return; }
L_001A80B4:
    set32(c.r[3], ld32((c.r[16].w[0] + 1488u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A8428; } }
    c.f[1] = ld32((c.r[3].w[0] + 1088u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001A8428; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 516u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A8428; } }
    st32((c.r[16].w[0] + 1920u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 1488u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001A8120; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A8140; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001A8140; } }
    c.budget -= 1;
L_001A8120:
    c.f[1] = ld32((c.r[4].w[0] + 36u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001A8140; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 2;
L_001A8140:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A8170; } }
    c.r[4].d[0] = ld16((c.r[16].w[0] + 1808u));
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], 0u + 45u);
    c.r[4].d[0] = c.r[4].d[0] | 768ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001A8428; } }
    c.budget -= 1;
L_001A8170:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42AA0000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8188u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 93u, depth + 1u); else { c.pc = 0x00195DA0u; return; } if (c.pc != 0x001A8188u) [[unlikely]] return; }
L_001A8188:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A81B8; } }
    c.r[4].d[0] = ld16((c.r[16].w[0] + 1808u));
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], 0u + 45u);
    c.r[4].d[0] = c.r[4].d[0] | 256ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001A8428; } }
    c.budget -= 1;
L_001A81B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x435C0000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 16384u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A81D0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 93u, depth + 1u); else { c.pc = 0x00195DA0u; return; } if (c.pc != 0x001A81D0u) [[unlikely]] return; }
L_001A81D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A8428; } }
    c.r[4].d[0] = ld16((c.r[16].w[0] + 1808u));
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], 0u + 45u);
    c.r[4].d[0] = c.r[4].d[0] | 512ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001A8428; } }
    c.budget -= 1;
L_001A8200:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 1820u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 1488u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001A8428; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001A8240; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A8260; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001A8260; } }
    c.budget -= 1;
L_001A8240:
    c.f[1] = ld32((c.r[4].w[0] + 36u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001A8260; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 2;
L_001A8260:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A82E0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1805u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001A82B0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A8288; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A8428; } }
L_001A8288:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1F00000u);
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001A8428; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A8428; } }
    c.budget -= 1;
L_001A82B0:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1A00000u);
    c.f[0] = c.r[2].w[0];
    c.r[2].d[0] = c.r[3].d[0] | 4096ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001A8428; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A8428; } }
    c.budget -= 1;
L_001A82E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A82E8u); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x001A82E8u) [[unlikely]] return; }
L_001A82E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8308u); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x001A8308u) [[unlikely]] return; }
L_001A8308:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[17], c.r[29].w[0] + 52u);
    c.f[2] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45FA0000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 56u), c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8338u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0011(c, 203u, depth + 1u); else { c.pc = 0x001465C0u; return; } if (c.pc != 0x001A8338u) [[unlikely]] return; }
L_001A8338:
    st32((c.r[17].w[0]), c.f[0]);
    set32(c.r[4], 0u + 2u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1805u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_001A83F0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001A83B8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A8368; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A8428; } }
    c.budget -= 1;
L_001A8368:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[2] = ld32((c.r[17].w[0]));
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001A8390; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A8428; } }
L_001A8390:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001A8428; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_001A8428; } }
    c.budget -= 1;
L_001A83B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[1] = c.r[2].w[0];
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001A83E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A8428; } }
L_001A83E0:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001A8428; } }
L_001A83F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[1] = c.r[2].w[0];
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001A8418; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A8428; } }
L_001A8418:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_001A8428:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8430u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 105u, depth + 1u); else { c.pc = 0x001AA620u; return; } if (c.pc != 0x001A8430u) [[unlikely]] return; }
L_001A8430:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A8568; } }
L_001A8438:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    set32(c.r[4], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1805u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001A84A0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A8468; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A8568; } }
    c.budget -= 1;
L_001A8468:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A8480; } }
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A8568; } }
L_001A8480:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A8568; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_001A8568; } }
L_001A84A0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A8568; } }
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A8568; } }
    c.budget -= 1;
L_001A84C0:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    set32(c.r[4], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1805u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001A8538; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A84F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A8568; } }
L_001A84F8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A8510; } }
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A8568; } }
L_001A8510:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A8568; } }
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], 0u + 30u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A8568; } }
L_001A8538:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A8560; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A8568; } }
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A8568; } }
L_001A8560:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001A8568:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1954u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001A8590; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A857Cu);  if (depth < kMaxDepth) unit_0025(c, 159u, depth + 1u); else { c.pc = 0x00196E60u; return; } if (c.pc != 0x001A857Cu) [[unlikely]] return; }
L_001A857C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 45u);  if (t) { goto L_001A85A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1954u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A85A8; } }
    c.budget -= 1;
L_001A8590:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 1954u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
L_001A85A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001A85C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1804u)));
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001A89C0; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_001A8938; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_001A8888; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_001A8620; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001A8608; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A8A80; } }
L_001A8608:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8618u);  if (depth < kMaxDepth) unit_002A(c, 107u, depth + 1u); else { c.pc = 0x001AA720u; return; } if (c.pc != 0x001A8618u) [[unlikely]] return; }
L_001A8618:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A8A80; } }
L_001A8620:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1822u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A8638; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 1822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001A8638:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1822u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);  if (t) { goto L_001A8658; } }
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8650u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 124u, depth + 1u); else { c.pc = 0x00196720u; return; } if (c.pc != 0x001A8650u) [[unlikely]] return; }
L_001A8650:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A8668; } }
L_001A8658:
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8668u); st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0025(c, 157u, depth + 1u); else { c.pc = 0x00196E10u; return; } if (c.pc != 0x001A8668u) [[unlikely]] return; }
L_001A8668:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1820u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001A8750; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A867Cu);  if (depth < kMaxDepth) unit_0025(c, 155u, depth + 1u); else { c.pc = 0x00196DC0u; return; } if (c.pc != 0x001A867Cu) [[unlikely]] return; }
L_001A867C:
    set32(c.r[3], ld32((c.r[16].w[0] + 1488u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A8878; } }
    c.f[1] = ld32((c.r[3].w[0] + 1088u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001A8878; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 516u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);  if (t) { goto L_001A8878; } }
    st32((c.r[16].w[0] + 1920u), c.r[3].w[0]);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 16384u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A86CCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 93u, depth + 1u); else { c.pc = 0x00195DA0u; return; } if (c.pc != 0x001A86CCu) [[unlikely]] return; }
L_001A86CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A86F0; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001A8740; } }
    c.budget -= 1;
L_001A86F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44480000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 16384u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8708u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 93u, depth + 1u); else { c.pc = 0x00195DA0u; return; } if (c.pc != 0x001A8708u) [[unlikely]] return; }
L_001A8708:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A8728; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 512ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001A8740; } }
L_001A8728:
    set32(c.r[2], 0u + 3u);
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 768ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
L_001A8740:
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 45u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001A8878; } }
L_001A8750:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 1820u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8768u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 80u, depth + 1u); else { c.pc = 0x00195690u; return; } if (c.pc != 0x001A8768u) [[unlikely]] return; }
L_001A8768:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], 0u + 34u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x43910000u);  if (t) { goto L_001A8798; } }
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001A8798; } }
    c.f[0] = c.f[1];
    c.budget -= 2;
L_001A8798:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1805u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_001A8848; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001A8810; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A87C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A8878; } }
L_001A87C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[1] = c.r[2].w[0];
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001A87E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A8878; } }
    c.budget -= 1;
L_001A87E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001A8878; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_001A8878; } }
    c.budget -= 1;
L_001A8810:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.r[2].d[0] = c.r[3].d[0] | 4096ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001A8878; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A8878; } }
    c.budget -= 1;
L_001A8848:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.r[2].d[0] = c.r[3].d[0] | 8192ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001A8878; } }
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001A8878:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8880u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 105u, depth + 1u); else { c.pc = 0x001AA620u; return; } if (c.pc != 0x001A8880u) [[unlikely]] return; }
L_001A8880:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A8A80; } }
L_001A8888:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    set32(c.r[4], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1805u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001A8900; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A88C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A8A80; } }
L_001A88C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A88D8; } }
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A8A80; } }
L_001A88D8:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A8A80; } }
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], 0u + 64u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A8A80; } }
L_001A8900:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A8928; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A8A80; } }
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A8A80; } }
L_001A8928:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A8A80; } }
    c.budget -= 1;
L_001A8938:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    set32(c.r[4], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1805u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001A89A0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A8968; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A8A80; } }
    c.budget -= 1;
L_001A8968:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A8980; } }
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A8A80; } }
L_001A8980:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A8A80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_001A8A80; } }
L_001A89A0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A8A80; } }
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A8A80; } }
    c.budget -= 1;
L_001A89C0:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    set32(c.r[4], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1805u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001A8A30; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A89F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A8A80; } }
    c.budget -= 1;
L_001A89F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A8A08; } }
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A8A80; } }
L_001A8A08:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A8A80; } }
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_001A8A80; } }
    c.budget -= 1;
L_001A8A30:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A8A50; } }
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A8A80; } }
    c.budget -= 1;
L_001A8A50:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A8A78; } }
    set32(c.r[3], 0u + 6u);
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A8A80; } }
    c.budget -= 1;
L_001A8A78:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001A8A80:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1954u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001A8AA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8A94u);  if (depth < kMaxDepth) unit_0025(c, 159u, depth + 1u); else { c.pc = 0x00196E60u; return; } if (c.pc != 0x001A8A94u) [[unlikely]] return; }
L_001A8A94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 45u);  if (t) { goto L_001A8AC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1954u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A8AC0; } }
    c.budget -= 1;
L_001A8AA8:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 1954u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
L_001A8AC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001A8AD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1804u)));
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001A8E40; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_001A8DB0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_001A8B28; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001A8B10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A8EF8; } }
L_001A8B10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8B20u);  if (depth < kMaxDepth) unit_002A(c, 107u, depth + 1u); else { c.pc = 0x001AA720u; return; } if (c.pc != 0x001A8B20u) [[unlikely]] return; }
L_001A8B20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A8EF8; } }
L_001A8B28:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1822u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A8B40; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 1822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001A8B40:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1822u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);  if (t) { goto L_001A8B60; } }
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8B58u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 124u, depth + 1u); else { c.pc = 0x00196720u; return; } if (c.pc != 0x001A8B58u) [[unlikely]] return; }
L_001A8B58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A8B70; } }
L_001A8B60:
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8B70u); st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0025(c, 157u, depth + 1u); else { c.pc = 0x00196E10u; return; } if (c.pc != 0x001A8B70u) [[unlikely]] return; }
L_001A8B70:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1820u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001A8C78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8B84u);  if (depth < kMaxDepth) unit_0025(c, 155u, depth + 1u); else { c.pc = 0x00196DC0u; return; } if (c.pc != 0x001A8B84u) [[unlikely]] return; }
L_001A8B84:
    set32(c.r[5], ld32((c.r[16].w[0] + 1488u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001A8DA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8B98u);  if (depth < kMaxDepth) unit_0028(c, 150u, depth + 1u); else { c.pc = 0x001A2310u; return; } if (c.pc != 0x001A8B98u) [[unlikely]] return; }
L_001A8B98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A8DA0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1488u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[3].w[0] + 1088u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001A8DA0; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 516u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x42FA0000u);  if (t) { goto L_001A8DA0; } }
    st32((c.r[16].w[0] + 1920u), c.r[3].w[0]);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 16384u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8BE4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 93u, depth + 1u); else { c.pc = 0x00195DA0u; return; } if (c.pc != 0x001A8BE4u) [[unlikely]] return; }
L_001A8BE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A8C08; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    set32(c.r[2], 0u + 2u);
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001A8C58; } }
    c.budget -= 1;
L_001A8C08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44160000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 16384u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8C20u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 93u, depth + 1u); else { c.pc = 0x00195DA0u; return; } if (c.pc != 0x001A8C20u) [[unlikely]] return; }
L_001A8C20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A8C40; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    set32(c.r[2], 0u + 3u);
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001A8C58; } }
L_001A8C40:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    set32(c.r[2], 0u + 2u);
    c.r[3].d[0] = c.r[3].d[0] | 768ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_001A8C58:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    set32(c.r[2], 0u + 45u);
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001A8DA0; } }
    c.budget -= 1;
L_001A8C78:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 1820u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8C90u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 80u, depth + 1u); else { c.pc = 0x00195690u; return; } if (c.pc != 0x001A8C90u) [[unlikely]] return; }
L_001A8C90:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], 0u + 34u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x43910000u);  if (t) { goto L_001A8CC0; } }
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001A8CC0; } }
    c.f[0] = c.f[1];
    c.budget -= 2;
L_001A8CC0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1805u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_001A8D70; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001A8D38; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A8CE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A8DA0; } }
L_001A8CE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[1] = c.r[2].w[0];
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001A8D10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A8DA0; } }
    c.budget -= 1;
L_001A8D10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42960000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001A8DA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_001A8DA0; } }
    c.budget -= 1;
L_001A8D38:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.r[2].d[0] = c.r[3].d[0] | 4096ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001A8DA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A8DA0; } }
    c.budget -= 1;
L_001A8D70:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42960000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.r[2].d[0] = c.r[3].d[0] | 8192ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001A8DA0; } }
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001A8DA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8DA8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 105u, depth + 1u); else { c.pc = 0x001AA620u; return; } if (c.pc != 0x001A8DA8u) [[unlikely]] return; }
L_001A8DA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A8EF8; } }
L_001A8DB0:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    set32(c.r[4], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1805u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001A8E20; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A8DE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A8EF8; } }
L_001A8DE8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A8E00; } }
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A8EF8; } }
L_001A8E00:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A8EF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_001A8EF8; } }
L_001A8E20:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A8EF8; } }
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A8EF8; } }
    c.budget -= 1;
L_001A8E40:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    set32(c.r[4], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1805u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001A8EC8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A8E88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A8EF8; } }
    c.budget -= 1;
L_001A8E88:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A8EA0; } }
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A8EF8; } }
L_001A8EA0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A8EF8; } }
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], 0u + 64u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A8EF8; } }
L_001A8EC8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A8EF0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A8EF8; } }
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A8EF8; } }
L_001A8EF0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001A8EF8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1954u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001A8F20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8F0Cu);  if (depth < kMaxDepth) unit_0025(c, 159u, depth + 1u); else { c.pc = 0x00196E60u; return; } if (c.pc != 0x001A8F0Cu) [[unlikely]] return; }
L_001A8F0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 45u);  if (t) { goto L_001A8F38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1954u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A8F38; } }
    c.budget -= 1;
L_001A8F20:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 1954u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
L_001A8F38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001A8F50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[5], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1804u)));
    c.budget -= 8;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001A9498; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_001A9128; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001A8F90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A9520; } }
    c.budget -= 1;
L_001A8F90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8FA0u);  if (depth < kMaxDepth) unit_002A(c, 107u, depth + 1u); else { c.pc = 0x001AA720u; return; } if (c.pc != 0x001A8FA0u) [[unlikely]] return; }
L_001A8FA0:
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], 0u + 32u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001A9520; } }
    c.f[1] = ld32((c.r[16].w[0] + 1856u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43950000u);
    c.f[12] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[12]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x44400000u);  if (t) { goto L_001A9030; } }
    c.f[13] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[13]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001A9030; } }
    c.f[0] = ld32((c.r[16].w[0] + 1864u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44840000u);
    c.r[3].d[0] = c.r[3].d[0] | 57344ull;
    c.f[14] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[14]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x44960000u);  if (t) { goto L_001A9030; } }
    c.r[3].d[0] = c.r[3].d[0] | 24576ull;
    c.f[15] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[15]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[16].w[0] + 1856u);  if (t) { goto L_001A9030; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9024u);  if (depth < kMaxDepth) unit_002A(c, 121u, depth + 1u); else { c.pc = 0x001AAA70u; return; } if (c.pc != 0x001A9024u) [[unlikely]] return; }
L_001A9024:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A9520; } }
    c.budget -= 1;
L_001A9030:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x446B0000u);
    c.r[3].d[0] = c.r[3].d[0] | 49152ull;
    c.f[12] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[12]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x44A70000u);  if (t) { goto L_001A90A8; } }
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.f[13] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[13]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001A90A8; } }
    c.f[0] = ld32((c.r[16].w[0] + 1864u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44020000u);
    c.r[3].d[0] = c.r[3].d[0] | 49152ull;
    c.f[14] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[14]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x449C0000u);  if (t) { goto L_001A90A8; } }
    c.f[15] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[15]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[16].w[0] + 1856u);  if (t) { goto L_001A90A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A90A0u);  if (depth < kMaxDepth) unit_002A(c, 121u, depth + 1u); else { c.pc = 0x001AAA70u; return; } if (c.pc != 0x001A90A0u) [[unlikely]] return; }
L_001A90A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A9520; } }
L_001A90A8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44950000u);
    c.r[3].d[0] = c.r[3].d[0] | 49152ull;
    c.f[12] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[12]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x44A30000u);  if (t) { goto L_001A9520; } }
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[13] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[13]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001A9520; } }
    c.f[0] = ld32((c.r[16].w[0] + 1864u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44880000u);
    c.r[3].d[0] = c.r[3].d[0] | 40960ull;
    c.f[14] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[14]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x44C50000u);  if (t) { goto L_001A9520; } }
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.f[15] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[15]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[16].w[0] + 1856u);  if (t) { goto L_001A9520; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A911Cu);  if (depth < kMaxDepth) unit_002A(c, 121u, depth + 1u); else { c.pc = 0x001AAA70u; return; } if (c.pc != 0x001A911Cu) [[unlikely]] return; }
L_001A911C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A9520; } }
    c.budget -= 1;
L_001A9128:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1822u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A9140; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 1822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001A9140:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1822u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);  if (t) { goto L_001A9160; } }
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9158u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 124u, depth + 1u); else { c.pc = 0x00196720u; return; } if (c.pc != 0x001A9158u) [[unlikely]] return; }
L_001A9158:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A9170; } }
L_001A9160:
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9170u); st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0025(c, 157u, depth + 1u); else { c.pc = 0x00196E10u; return; } if (c.pc != 0x001A9170u) [[unlikely]] return; }
L_001A9170:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1820u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001A92A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9184u);  if (depth < kMaxDepth) unit_0025(c, 155u, depth + 1u); else { c.pc = 0x00196DC0u; return; } if (c.pc != 0x001A9184u) [[unlikely]] return; }
L_001A9184:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43960000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 8192u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A919Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 93u, depth + 1u); else { c.pc = 0x00195DA0u; return; } if (c.pc != 0x001A919Cu) [[unlikely]] return; }
L_001A919C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A91C8; } }
    c.r[4].d[0] = ld16((c.r[16].w[0] + 1808u));
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], 0u + 45u);
    c.r[4].d[0] = c.r[4].d[0] | 512ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001A92A8; } }
L_001A91C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A91E0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 93u, depth + 1u); else { c.pc = 0x00195DA0u; return; } if (c.pc != 0x001A91E0u) [[unlikely]] return; }
L_001A91E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A92A8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1488u)));
    st32((c.r[16].w[0] + 1920u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1934u)));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_001A9204; } }
    set32(c.r[2], c.r[3].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_001A9204:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9228u); c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001A9228u) [[unlikely]] return; }
L_001A9228:
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[4], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 256u);
    c.r[4].d[0] = c.r[4].d[0] << 48;
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001A9278; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A9268; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A9288; } }
    c.budget -= 1;
L_001A9268:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001A9288; } }
L_001A9278:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 768ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_001A9288:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 45u);
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001A92A8; } }
L_001A92A0:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 1820u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001A92A8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1806u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001A93F0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001A93D0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001A92D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A9488; } }
L_001A92D0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 824u)));
    c.r[2].d[0] = c.r[2].sd[0] < 4000ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A9358; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A92E8u); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x001A92E8u) [[unlikely]] return; }
L_001A92E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x420C0000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9308u); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x001A9308u) [[unlikely]] return; }
L_001A9308:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x420C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[2] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45FA0000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9334u); st32((c.r[29].w[0] + 56u), c.f[0]);  if (depth < kMaxDepth) unit_0011(c, 203u, depth + 1u); else { c.pc = 0x001465C0u; return; } if (c.pc != 0x001A9334u) [[unlikely]] return; }
L_001A9334:
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_001A9358; } }
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_001A9358:
    c.f[3] = ld32((c.r[16].w[0] + 1856u));
    c.f[2] = ld32((c.r[16].w[0] + 32u));
    c.f[1] = ld32((c.r[16].w[0] + 1864u));
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A937Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001A937Cu) [[unlikely]] return; }
L_001A937C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x438C0000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001A9488; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A93C0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1822u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A9488; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001A9488; } }
L_001A93C0:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001A9488; } }
L_001A93D0:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 744u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A9488; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A9488; } }
L_001A93F0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A9408; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A9488; } }
    c.budget -= 1;
L_001A9408:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A941Cu); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x001A941Cu) [[unlikely]] return; }
L_001A941C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x420C0000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A943Cu); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x001A943Cu) [[unlikely]] return; }
L_001A943C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x420C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[2] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45FA0000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9468u); st32((c.r[29].w[0] + 56u), c.f[0]);  if (depth < kMaxDepth) unit_0011(c, 203u, depth + 1u); else { c.pc = 0x001465C0u; return; } if (c.pc != 0x001A9468u) [[unlikely]] return; }
L_001A9468:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[1] = c.r[2].w[0];
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001A9488; } }
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001A9488:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9490u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 234u, depth + 1u); else { c.pc = 0x001A3340u; return; } if (c.pc != 0x001A9490u) [[unlikely]] return; }
L_001A9490:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A9520; } }
L_001A9498:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A94B0; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_001A94B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1805u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001A9508; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A94D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A9520; } }
L_001A94D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A94E8; } }
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A9520; } }
L_001A94E8:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A9520; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_001A9520; } }
L_001A9508:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A9520; } }
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001A9520:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001A9540:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1804u)));
    c.budget -= 10;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001A98B0; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_001A95A0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001A9588; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A9928; } }
    c.budget -= 1;
L_001A9588:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40D00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9598u);  if (depth < kMaxDepth) unit_002A(c, 107u, depth + 1u); else { c.pc = 0x001AA720u; return; } if (c.pc != 0x001A9598u) [[unlikely]] return; }
L_001A9598:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A9928; } }
L_001A95A0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1822u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A95B8; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[17].w[0] + 1822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001A95B8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1822u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);  if (t) { goto L_001A95D8; } }
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A95D0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 124u, depth + 1u); else { c.pc = 0x00196720u; return; } if (c.pc != 0x001A95D0u) [[unlikely]] return; }
L_001A95D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A95E8; } }
L_001A95D8:
    st8((c.r[17].w[0] + 1804u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A95E8u); st8((c.r[17].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0025(c, 157u, depth + 1u); else { c.pc = 0x00196E10u; return; } if (c.pc != 0x001A95E8u) [[unlikely]] return; }
L_001A95E8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1820u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001A9760; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A95FCu);  if (depth < kMaxDepth) unit_0025(c, 155u, depth + 1u); else { c.pc = 0x00196DC0u; return; } if (c.pc != 0x001A95FCu) [[unlikely]] return; }
L_001A95FC:
    set32(c.r[3], ld32((c.r[17].w[0] + 1488u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A9750; } }
    c.f[1] = ld32((c.r[3].w[0] + 1088u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001A9750; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 516u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A9750; } }
    st32((c.r[17].w[0] + 1920u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 1920u)));
    c.f[2] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[3] = ld32((c.r[2].w[0] + 32u));
    c.f[1] = ld32((c.r[2].w[0] + 40u));
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9660u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001A9660u) [[unlikely]] return; }
L_001A9660:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43160000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001A96A0; } }
    c.r[4].d[0] = ld16((c.r[17].w[0] + 1808u));
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], 0u + 45u);
    c.r[4].d[0] = c.r[4].d[0] | 768ull;
    st16((c.r[17].w[0] + 1808u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[17].w[0] + 1804u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1812u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001A9750; } }
    c.budget -= 1;
L_001A96A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1934u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_001A96B4; } }
    set32(c.r[2], c.r[3].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_001A96B4:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.r[18].d[0] = c.r[2].d[0] << 48;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A96D8u); c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001A96D8u) [[unlikely]] return; }
L_001A96D8:
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[4], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 128u);
    c.r[4].d[0] = c.r[4].d[0] << 48;
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001A9728; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A9718; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A9738; } }
    c.budget -= 1;
L_001A9718:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 512ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001A9738; } }
L_001A9728:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    st16((c.r[17].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_001A9738:
    set32(c.r[2], 0u + 2u);
    st8((c.r[17].w[0] + 1804u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 45u);
    st8((c.r[17].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 1812u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_001A9750:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9758u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 234u, depth + 1u); else { c.pc = 0x001A3340u; return; } if (c.pc != 0x001A9758u) [[unlikely]] return; }
L_001A9758:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A9928; } }
L_001A9760:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[17].w[0] + 1820u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9778u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 80u, depth + 1u); else { c.pc = 0x00195690u; return; } if (c.pc != 0x001A9778u) [[unlikely]] return; }
L_001A9778:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42FA0000u);
    c.f[2] = c.r[4].w[0];
    c.f[1] = c.r[3].w[0];
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.f[2] = fp::add(c.f[2], c.f[0]);
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.f[1] = fp::add(c.f[1], c.f[0]);  if (t) { goto L_001A97C8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], 0u + 14u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);  if (t) { goto L_001A97C8; } }
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::add(c.f[2], c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    c.budget -= 5;
L_001A97C8:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1805u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_001A9890; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001A9828; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001A97F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A9928; } }
L_001A97F0:
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001A9808; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A9818; } }
L_001A9808:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001A9818; } }
    st8((c.r[17].w[0] + 1805u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 1;
L_001A9818:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9820u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 234u, depth + 1u); else { c.pc = 0x001A3340u; return; } if (c.pc != 0x001A9820u) [[unlikely]] return; }
L_001A9820:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A9928; } }
L_001A9828:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A9858; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1822u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A9868; } }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001A9868; } }
    c.budget -= 1;
L_001A9858:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st16((c.r[17].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_001A9868:
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001A9880; } }
    st8((c.r[17].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001A9880:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9888u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 234u, depth + 1u); else { c.pc = 0x001A3340u; return; } if (c.pc != 0x001A9888u) [[unlikely]] return; }
L_001A9888:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A9928; } }
L_001A9890:
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001A98A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A9928; } }
L_001A98A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_001A9928; } }
L_001A98B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A98B8u);  if (depth < kMaxDepth) unit_0028(c, 234u, depth + 1u); else { c.pc = 0x001A3340u; return; } if (c.pc != 0x001A98B8u) [[unlikely]] return; }
L_001A98B8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1805u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001A9910; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A98D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A9928; } }
L_001A98D8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A98F0; } }
    st8((c.r[17].w[0] + 1804u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A9928; } }
L_001A98F0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[17].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A9928; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1805u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_001A9928; } }
L_001A9910:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A9928; } }
    st8((c.r[17].w[0] + 1804u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[17].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001A9928:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_001A9998; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9940u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 80u, depth + 1u); else { c.pc = 0x00195690u; return; } if (c.pc != 0x001A9940u) [[unlikely]] return; }
L_001A9940:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[1] = c.r[3].w[0];
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001A9998; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A9988; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1822u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A9998; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A9998; } }
L_001A9988:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[17].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_001A9998:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001A99B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1961u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001A9A20; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1962u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001A9A18; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A99F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A9A20; } }
    c.budget -= 1;
L_001A99F0:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 814u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001A9A20; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1962u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_001A9D90; } }
    c.budget -= 1;
L_001A9A18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1962u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A9D90; } }
L_001A9A20:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1804u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_001A9CD0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_001A9A68; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001A9A48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A9D50; } }
L_001A9A48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40E60000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9A5Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 107u, depth + 1u); else { c.pc = 0x001AA720u; return; } if (c.pc != 0x001A9A5Cu) [[unlikely]] return; }
L_001A9A5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A9D50; } }
    c.budget -= 1;
L_001A9A68:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1822u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A9A80; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 1822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001A9A80:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1822u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);  if (t) { goto L_001A9AA0; } }
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9A98u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 124u, depth + 1u); else { c.pc = 0x00196720u; return; } if (c.pc != 0x001A9A98u) [[unlikely]] return; }
L_001A9A98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A9AB0; } }
L_001A9AA0:
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9AB0u); st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0025(c, 157u, depth + 1u); else { c.pc = 0x00196E10u; return; } if (c.pc != 0x001A9AB0u) [[unlikely]] return; }
L_001A9AB0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1820u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001A9BC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9AC4u);  if (depth < kMaxDepth) unit_0025(c, 155u, depth + 1u); else { c.pc = 0x00196DC0u; return; } if (c.pc != 0x001A9AC4u) [[unlikely]] return; }
L_001A9AC4:
    set32(c.r[3], ld32((c.r[16].w[0] + 1488u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A9CC0; } }
    c.f[1] = ld32((c.r[3].w[0] + 1088u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001A9CC0; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 516u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x43FA0000u);  if (t) { goto L_001A9CC0; } }
    st32((c.r[16].w[0] + 1920u), c.r[3].w[0]);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 8192u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9B14u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 93u, depth + 1u); else { c.pc = 0x00195DA0u; return; } if (c.pc != 0x001A9B14u) [[unlikely]] return; }
L_001A9B14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A9CC0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1934u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_001A9B30; } }
    set32(c.r[2], c.r[3].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_001A9B30:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9B54u); c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001A9B54u) [[unlikely]] return; }
L_001A9B54:
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[4], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0]);
    c.r[4].d[0] = c.r[4].d[0] << 48;
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001A9BA0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A9B90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A9BB0; } }
L_001A9B90:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 512ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001A9BB0; } }
L_001A9BA0:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_001A9BB0:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 45u);
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001A9CC0; } }
L_001A9BC8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1940u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A9BE8; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001A9CC0; } }
L_001A9BE8:
    set32(c.r[2], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 1820u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9C00u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 80u, depth + 1u); else { c.pc = 0x00195690u; return; } if (c.pc != 0x001A9C00u) [[unlikely]] return; }
L_001A9C00:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[2] = c.r[3].w[0];
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1805u)));
    c.f[1] = c.r[2].w[0];
    c.f[2] = fp::add(c.f[2], c.f[0]);
    set32(c.r[3], 0u + 2u);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.f[1] = fp::add(c.f[1], c.f[0]);  if (t) { goto L_001A9CA0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001A9C78; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001A9C48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A9CC0; } }
    c.budget -= 1;
L_001A9C48:
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001A9C60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001A9CC0; } }
L_001A9C60:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001A9CC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A9CC0; } }
    c.budget -= 1;
L_001A9C78:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001A9CC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A9CC0; } }
    c.budget -= 1;
L_001A9CA0:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001A9CC0; } }
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001A9CC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9CC8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 105u, depth + 1u); else { c.pc = 0x001AA620u; return; } if (c.pc != 0x001A9CC8u) [[unlikely]] return; }
L_001A9CC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A9D50; } }
L_001A9CD0:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    set32(c.r[4], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1805u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001A9D38; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A9D00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A9D50; } }
    c.budget -= 1;
L_001A9D00:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A9D18; } }
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A9D50; } }
L_001A9D18:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A9D50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_001A9D50; } }
L_001A9D38:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A9D50; } }
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001A9D50:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1954u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001A9D78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9D64u);  if (depth < kMaxDepth) unit_0025(c, 159u, depth + 1u); else { c.pc = 0x00196E60u; return; } if (c.pc != 0x001A9D64u) [[unlikely]] return; }
L_001A9D64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 45u);  if (t) { goto L_001A9D90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1954u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A9D90; } }
    c.budget -= 1;
L_001A9D78:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 1954u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
L_001A9D90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001A9DB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A9DC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1961u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001A9E30; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1962u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001A9E28; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A9E00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A9E30; } }
    c.budget -= 1;
L_001A9E00:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 814u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001A9E30; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1962u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_001AA1C0; } }
    c.budget -= 1;
L_001A9E28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1962u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001AA1C0; } }
L_001A9E30:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1804u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_001AA100; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_001A9E78; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001A9E58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AA180; } }
L_001A9E58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40E60000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9E6Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 107u, depth + 1u); else { c.pc = 0x001AA720u; return; } if (c.pc != 0x001A9E6Cu) [[unlikely]] return; }
L_001A9E6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AA180; } }
    c.budget -= 1;
L_001A9E78:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1822u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A9E90; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 1822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001A9E90:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1822u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);  if (t) { goto L_001A9EB0; } }
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9EA8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 124u, depth + 1u); else { c.pc = 0x00196720u; return; } if (c.pc != 0x001A9EA8u) [[unlikely]] return; }
L_001A9EA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A9EC0; } }
L_001A9EB0:
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9EC0u); st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0025(c, 157u, depth + 1u); else { c.pc = 0x00196E10u; return; } if (c.pc != 0x001A9EC0u) [[unlikely]] return; }
L_001A9EC0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1820u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001A9FD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9ED4u);  if (depth < kMaxDepth) unit_0025(c, 155u, depth + 1u); else { c.pc = 0x00196DC0u; return; } if (c.pc != 0x001A9ED4u) [[unlikely]] return; }
L_001A9ED4:
    set32(c.r[3], ld32((c.r[16].w[0] + 1488u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001AA0F0; } }
    c.f[1] = ld32((c.r[3].w[0] + 1088u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001AA0F0; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 516u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x43FA0000u);  if (t) { goto L_001AA0F0; } }
    st32((c.r[16].w[0] + 1920u), c.r[3].w[0]);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 8192u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9F24u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 93u, depth + 1u); else { c.pc = 0x00195DA0u; return; } if (c.pc != 0x001A9F24u) [[unlikely]] return; }
L_001A9F24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AA0F0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1934u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_001A9F40; } }
    set32(c.r[2], c.r[3].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_001A9F40:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9F64u); c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001A9F64u) [[unlikely]] return; }
L_001A9F64:
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[4], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 128u);
    c.r[4].d[0] = c.r[4].d[0] << 48;
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001A9FB0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A9FA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A9FC0; } }
L_001A9FA0:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 512ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001A9FC0; } }
L_001A9FB0:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_001A9FC0:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 45u);
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001AA0F0; } }
L_001A9FD8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1940u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A9FF8; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001AA0F0; } }
L_001A9FF8:
    set32(c.r[2], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 1820u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA010u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 80u, depth + 1u); else { c.pc = 0x00195690u; return; } if (c.pc != 0x001AA010u) [[unlikely]] return; }
L_001AA010:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1805u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_001AA0C0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001AA088; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AA038; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AA0F0; } }
L_001AA038:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[1] = c.r[2].w[0];
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001AA060; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001AA0F0; } }
    c.budget -= 1;
L_001AA060:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001AA0F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_001AA0F0; } }
    c.budget -= 1;
L_001AA088:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.r[2].d[0] = c.r[3].d[0] | 4096ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001AA0F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001AA0F0; } }
    c.budget -= 1;
L_001AA0C0:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.r[2].d[0] = c.r[3].d[0] | 8192ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001AA0F0; } }
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001AA0F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA0F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 105u, depth + 1u); else { c.pc = 0x001AA620u; return; } if (c.pc != 0x001AA0F8u) [[unlikely]] return; }
L_001AA0F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AA180; } }
L_001AA100:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    set32(c.r[4], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1805u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001AA168; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001AA130; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AA180; } }
    c.budget -= 1;
L_001AA130:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001AA148; } }
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001AA180; } }
L_001AA148:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001AA180; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_001AA180; } }
L_001AA168:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001AA180; } }
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001AA180:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1954u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001AA1A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA194u);  if (depth < kMaxDepth) unit_0025(c, 159u, depth + 1u); else { c.pc = 0x00196E60u; return; } if (c.pc != 0x001AA194u) [[unlikely]] return; }
L_001AA194:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 45u);  if (t) { goto L_001AA1C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1954u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001AA1C0; } }
    c.budget -= 1;
L_001AA1A8:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 1954u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
L_001AA1C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001AA1E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1804u)));
    c.budget -= 8;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001AA538; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_001AA238; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001AA220; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AA5C8; } }
    c.budget -= 1;
L_001AA220:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40F00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA230u);  if (depth < kMaxDepth) unit_002A(c, 107u, depth + 1u); else { c.pc = 0x001AA720u; return; } if (c.pc != 0x001AA230u) [[unlikely]] return; }
L_001AA230:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AA5C8; } }
L_001AA238:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1822u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AA250; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 1822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001AA250:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1822u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);  if (t) { goto L_001AA270; } }
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA268u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 124u, depth + 1u); else { c.pc = 0x00196720u; return; } if (c.pc != 0x001AA268u) [[unlikely]] return; }
L_001AA268:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AA280; } }
L_001AA270:
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA280u); st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0025(c, 157u, depth + 1u); else { c.pc = 0x00196E10u; return; } if (c.pc != 0x001AA280u) [[unlikely]] return; }
L_001AA280:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1820u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001AA3F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA294u);  if (depth < kMaxDepth) unit_0025(c, 155u, depth + 1u); else { c.pc = 0x00196DC0u; return; } if (c.pc != 0x001AA294u) [[unlikely]] return; }
L_001AA294:
    set32(c.r[4], ld32((c.r[16].w[0] + 1488u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001AA5C8; } }
    c.f[1] = ld32((c.r[4].w[0] + 1088u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001AA5C8; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 516u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001AA5C8; } }
    st32((c.r[16].w[0] + 1920u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1934u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_001AA2E4; } }
    set32(c.r[2], c.r[3].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_001AA2E4:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA308u); c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001AA308u) [[unlikely]] return; }
L_001AA308:
    c.r[4].d[0] = c.r[2].d[0] & 15ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] - 512u);
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_001AA3D8; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 15728u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x001A8000u < 16384u) { entry = entries_002A[(t - 0x001A8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001AA350:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(0u));  if (t) { goto L_001AA3D8; } }
    c.budget -= 1;
L_001AA368:
    c.r[4].d[0] = ld16((c.r[16].w[0] + 1808u));
    set32(c.r[3], 0u + 8192u);
    c.r[4].d[0] = c.r[4].d[0] | 8448ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001AA3D8; } }
L_001AA380:
    c.r[4].d[0] = ld16((c.r[16].w[0] + 1808u));
    set32(c.r[3], 0u + 1024u);
    c.r[4].d[0] = c.r[4].d[0] | 1280ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001AA3D8; } }
L_001AA398:
    c.r[4].d[0] = ld16((c.r[16].w[0] + 1808u));
    set32(c.r[3], 0u + 2048u);
    c.r[4].d[0] = c.r[4].d[0] | 2304ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001AA3D8; } }
L_001AA3B0:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(0u));  if (t) { goto L_001AA3D8; } }
    c.budget -= 1;
L_001AA3C8:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 768ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(0u));
    c.budget -= 4;
L_001AA3D8:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 45u);
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001AA5C8; } }
L_001AA3F0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1940u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001AA410; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001AA528; } }
L_001AA410:
    set32(c.r[2], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 1820u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA428u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 80u, depth + 1u); else { c.pc = 0x00195690u; return; } if (c.pc != 0x001AA428u) [[unlikely]] return; }
L_001AA428:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44AF0000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001AA448; } }
    c.f[0] = c.f[1];
    c.budget -= 2;
L_001AA448:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1805u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_001AA4F8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001AA4C0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AA470; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AA528; } }
L_001AA470:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[1] = c.r[2].w[0];
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001AA498; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001AA528; } }
    c.budget -= 1;
L_001AA498:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001AA528; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_001AA528; } }
    c.budget -= 1;
L_001AA4C0:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.r[2].d[0] = c.r[3].d[0] | 4096ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001AA528; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001AA528; } }
    c.budget -= 1;
L_001AA4F8:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.r[2].d[0] = c.r[3].d[0] | 8192ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001AA528; } }
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001AA528:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA530u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 105u, depth + 1u); else { c.pc = 0x001AA620u; return; } if (c.pc != 0x001AA530u) [[unlikely]] return; }
L_001AA530:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AA5C8; } }
L_001AA538:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    set32(c.r[5], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1805u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001AA5B0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001AA568; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AA5C8; } }
    c.budget -= 1;
L_001AA568:
    c.r[4].d[0] = ld16((c.r[16].w[0] + 1926u));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001AA590; } }
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001AA5C8; } }
L_001AA590:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001AA5C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_001AA5C8; } }
L_001AA5B0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001AA5C8; } }
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001AA5C8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1954u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001AA5F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA5DCu);  if (depth < kMaxDepth) unit_0025(c, 159u, depth + 1u); else { c.pc = 0x00196E60u; return; } if (c.pc != 0x001AA5DCu) [[unlikely]] return; }
L_001AA5DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 45u);  if (t) { goto L_001AA608; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1954u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001AA608; } }
    c.budget -= 1;
L_001AA5F0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 1954u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
L_001AA608:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001AA620:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1940u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001AA650; } }
    c.f[0] = ld32((c.r[16].w[0] + 1888u));
    st32((c.r[16].w[0] + 1856u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1896u));
    st32((c.r[16].w[0] + 1864u), c.f[0]);
    c.budget -= 5;
L_001AA650:
    c.f[3] = ld32((c.r[16].w[0] + 1856u));
    c.f[2] = ld32((c.r[16].w[0] + 32u));
    c.f[1] = ld32((c.r[16].w[0] + 1864u));
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[12] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA66Cu); c.f[13] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001AA66Cu) [[unlikely]] return; }
L_001AA66C:
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < 4096ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 32769ull;  if (t) { goto L_001AA6A8; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001AA6A8; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 2048ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001AA708; } }
    c.budget -= 1;
L_001AA6A8:
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = 0ull | 61441ull;  if (t) { goto L_001AA6D8; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001AA6D8; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 1024ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001AA708; } }
    c.budget -= 1;
L_001AA6D8:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1822u)));
    c.r[1].d[0] = c.r[3].sd[0] < 31ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001AA708; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 514u));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 30u);  if (t) { goto L_001AA708; } }
    st16((c.r[16].w[0] + 1822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001AA708:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AA720:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 1816u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { goto L_001AA880; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA754u);  if (depth < kMaxDepth) unit_0025(c, 20u, depth + 1u); else { c.pc = 0x00194800u; return; } if (c.pc != 0x001AA754u) [[unlikely]] return; }
L_001AA754:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AA870; } }
    st32((c.r[17].w[0] + 1920u), c.r[2].w[0]);
    set32(c.r[4], 0u + 1u);
    st8((c.r[17].w[0] + 1804u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].d[0] = c.r[16].d[0] << 56;
    set32(c.r[2], 0u + 300u);
    st8((c.r[17].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    st16((c.r[17].w[0] + 1822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1822u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st16((c.r[17].w[0] + 1822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA790u); set32(c.r[16], ld32((c.r[17].w[0] + 1920u)));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001AA790u) [[unlikely]] return; }
L_001AA790:
    c.r[7].d[0] = ld8((c.r[17].w[0] + 8658u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8659u)));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    set32(c.r[5], c.r[5].w[0] - 7760u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 7776u);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[20]);
    st32((c.r[17].w[0] + 1824u), c.f[1]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA7F0u); st32((c.r[17].w[0] + 1824u), c.f[0]);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001AA7F0u) [[unlikely]] return; }
L_001AA7F0:
    c.r[3].d[0] = c.r[2].d[0] & 15ull;
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] - 7360u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[17].w[0] + 1832u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 1832u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[18].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA82Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x001AA82Cu) [[unlikely]] return; }
L_001AA82C:
    c.f[2] = ld32((c.r[17].w[0] + 1824u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA848u); st32((c.r[17].w[0] + 1856u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x001AA848u) [[unlikely]] return; }
L_001AA848:
    c.f[2] = ld32((c.r[17].w[0] + 1824u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA864u); st32((c.r[17].w[0] + 1864u), c.f[0]);  if (depth < kMaxDepth) unit_0029(c, 26u, depth + 1u); else { c.pc = 0x001A41C0u; return; } if (c.pc != 0x001AA864u) [[unlikely]] return; }
L_001AA864:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AA8A8; } }
    c.budget -= 1;
L_001AA870:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 1816u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001AA8A8; } }
    c.budget -= 1;
L_001AA880:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 1816u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1816u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001AA8A8; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st16((c.r[17].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_001AA8A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001AA8D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 1816u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { goto L_001AAA28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA904u);  if (depth < kMaxDepth) unit_0025(c, 20u, depth + 1u); else { c.pc = 0x00194800u; return; } if (c.pc != 0x001AA904u) [[unlikely]] return; }
L_001AA904:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AAA18; } }
    st32((c.r[17].w[0] + 1920u), c.r[2].w[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], 0u + 300u);
    st8((c.r[17].w[0] + 1804u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[17].w[0] + 1822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = c.r[16].d[0] << 56;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1822u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st16((c.r[17].w[0] + 1822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA93Cu); set32(c.r[16], ld32((c.r[17].w[0] + 1920u)));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001AA93Cu) [[unlikely]] return; }
L_001AA93C:
    c.r[7].d[0] = ld8((c.r[17].w[0] + 8658u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8659u)));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    set32(c.r[5], c.r[5].w[0] - 7760u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 7776u);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[20]);
    st32((c.r[17].w[0] + 1824u), c.f[1]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA99Cu); st32((c.r[17].w[0] + 1824u), c.f[0]);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001AA99Cu) [[unlikely]] return; }
L_001AA99C:
    c.r[3].d[0] = c.r[2].d[0] & 15ull;
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] - 7360u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[17].w[0] + 1832u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 1832u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[18].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA9D8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x001AA9D8u) [[unlikely]] return; }
L_001AA9D8:
    c.f[2] = ld32((c.r[17].w[0] + 1824u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA9F4u); st32((c.r[17].w[0] + 1856u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x001AA9F4u) [[unlikely]] return; }
L_001AA9F4:
    c.f[2] = ld32((c.r[17].w[0] + 1824u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAA10u); st32((c.r[17].w[0] + 1864u), c.f[0]);  if (depth < kMaxDepth) unit_0029(c, 26u, depth + 1u); else { c.pc = 0x001A41C0u; return; } if (c.pc != 0x001AAA10u) [[unlikely]] return; }
L_001AAA10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AAA50; } }
L_001AAA18:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 1816u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001AAA50; } }
    c.budget -= 1;
L_001AAA28:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 1816u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1816u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001AAA50; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st16((c.r[17].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_001AAA50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001AAA70:
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[13]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[0] = c.f[12];  if (t) { goto L_001AAA88; } }
    c.f[12] = c.f[13];
    c.f[13] = c.f[0];
    c.budget -= 3;
L_001AAA88:
    fpu_compare(c, fp::key(c.f[14]) <= fp::key(c.f[15]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[0] = c.f[14];  if (t) { goto L_001AAAA0; } }
    c.f[14] = c.f[15];
    c.f[15] = c.f[0];
    c.budget -= 3;
L_001AAAA0:
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.f[3] = fp::sub(c.f[1], c.f[12]);
    c.f[2] = fp::sub(c.f[13], c.f[1]);
    c.f[1] = fp::sub(c.f[0], c.f[14]);
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[0] = fp::sub(c.f[15], c.f[0]);  if (t) { goto L_001AAB08; } }
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001AAAE8; } }
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001AAAE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.f[12]);  if (t) { goto L_001AAB50; } }
L_001AAAE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 8u), c.f[14]);  if (t) { goto L_001AAB50; } }
L_001AAAE8:
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001AAB00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.f[12]);  if (t) { goto L_001AAB50; } }
    c.budget -= 1;
L_001AAB00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 8u), c.f[15]);  if (t) { goto L_001AAB50; } }
L_001AAB08:
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001AAB30; } }
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001AAB28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.f[13]);  if (t) { goto L_001AAB50; } }
L_001AAB28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 8u), c.f[14]);  if (t) { goto L_001AAB50; } }
L_001AAB30:
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001AAB48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.f[13]);  if (t) { goto L_001AAB50; } }
    c.budget -= 1;
L_001AAB48:
    st32((c.r[4].w[0] + 8u), c.f[15]);
    c.budget -= 2;
L_001AAB50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AAB60:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[17], c.r[17].w[0] - 12448u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 14;
L_001AAB98:
    c.f[3] = ld32((c.r[20].w[0] + 32u));
    c.f[2] = ld32((c.r[17].w[0]));
    c.f[1] = ld32((c.r[20].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AABBCu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001AABBCu) [[unlikely]] return; }
L_001AABBC:
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_001AABD0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001AABD0:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001AAC48; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001AAC40; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001AAC40; } }
    set32(c.r[16], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 11968u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAC00u); set32(c.r[17], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001AAC00u) [[unlikely]] return; }
L_001AAC00:
    c.r[3].d[0] = c.r[2].d[0] & 31ull;
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 11904u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[17].w[0]));
    st32((c.r[19].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[19].w[0] + 4u), c.f[0]);
    c.budget -= 16;
L_001AAC40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001AAC60; } }
L_001AAC48:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AAB98u | kUnwind; return; } goto L_001AAB98; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001AAC60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001AAC80:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[3], c.r[29].w[0] + 128u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[0] = 0u;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[4].w[0] - 24656u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[5], c.r[5].w[0] << 6);
    set32(c.r[19], c.r[4].w[0] + c.r[5].w[0]);
    c.f[4] = ld32((c.r[19].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 4u));
    c.f[2] = ld32((c.r[19].w[0] + 8u));
    c.f[1] = ld32((c.r[19].w[0] + 12u));
    st32((c.r[3].w[0]), c.f[4]);
    st32((c.r[3].w[0] + 4u), c.f[3]);
    st32((c.r[3].w[0] + 8u), c.f[2]);
    st32((c.r[3].w[0] + 12u), c.f[1]);
    c.f[5] = ld32((c.r[29].w[0] + 128u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[5]));
    c.budget -= 30;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[19], c.r[19].w[0] + 16u);  if (t) { goto L_001AAD10; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x457A0000u);
    st32((c.r[20].w[0] + 1888u), c.r[4].w[0]);
    st32((c.r[20].w[0] + 1892u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 1896u), c.r[4].w[0]);  if (t) { goto L_001AAE10; } }
L_001AAD10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x459C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.f[20] = c.r[2].w[0];
    set32(c.r[17], c.r[29].w[0] + 132u);
    set32(c.r[16], c.r[29].w[0] + 136u);
    c.budget -= 6;
L_001AAD28:
    c.f[4] = ld32((c.r[20].w[0] + 32u));
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = ld32((c.r[20].w[0] + 40u));
    c.f[3] = ld32((c.r[17].w[0]));
    c.f[2] = ld32((c.r[20].w[0] + 36u));
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.f[21] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAD54u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001AAD54u) [[unlikely]] return; }
L_001AAD54:
    c.facc = fp::mul(c.f[21], c.f[21]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAD60u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001AAD60u) [[unlikely]] return; }
L_001AAD60:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], c.r[29].w[0] + 128u);  if (t) { goto L_001AAD80; } }
    set32(c.r[4], c.r[29].w[0] + 112u);
    ld128((c.r[3].w[0]) & ~15u, c.r[3]);
    c.f[20] = c.f[0];
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    c.budget -= 5;
L_001AAD80:
    set32(c.r[3], c.r[29].w[0] + 128u);
    c.f[4] = ld32((c.r[19].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 4u));
    c.f[2] = ld32((c.r[19].w[0] + 8u));
    c.f[1] = ld32((c.r[19].w[0] + 12u));
    c.f[0] = 0u;
    st32((c.r[3].w[0]), c.f[4]);
    st32((c.r[3].w[0] + 4u), c.f[3]);
    st32((c.r[3].w[0] + 8u), c.f[2]);
    st32((c.r[3].w[0] + 12u), c.f[1]);
    c.f[5] = ld32((c.r[29].w[0] + 128u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[5]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[19], c.r[19].w[0] + 16u);  if (t) { goto L_001AADE0; } }
    set32(c.r[3], c.r[29].w[0] + 112u);
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[20].w[0] + 1888u), c.f[3]);
    st32((c.r[20].w[0] + 1892u), c.f[2]);
    st32((c.r[20].w[0] + 1896u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 1900u), c.f[0]);  if (t) { goto L_001AAE10; } }
L_001AADE0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[29].w[0] + 112u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AAD28u | kUnwind; return; } goto L_001AAD28; } }
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[20].w[0] + 1888u), c.f[3]);
    st32((c.r[20].w[0] + 1892u), c.f[2]);
    st32((c.r[20].w[0] + 1896u), c.f[1]);
    st32((c.r[20].w[0] + 1900u), c.f[0]);
    c.budget -= 8;
L_001AAE10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001AAE40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001AAE70; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 11728u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 636u), c.r[2].w[0]);  if (t) { goto L_001AAE80; } }
    c.budget -= 1;
L_001AAE70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 11824u);
    st32((c.r[16].w[0] + 636u), c.r[2].w[0]);
    c.budget -= 4;
L_001AAE80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAE88u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 186u, depth + 1u); else { c.pc = 0x0016EB40u; return; } if (c.pc != 0x001AAE88u) [[unlikely]] return; }
L_001AAE88:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAE98u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x001AAE98u) [[unlikely]] return; }
L_001AAE98:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAEA4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0077(c, 370u, depth + 1u); else { c.pc = 0x002DF630u; return; } if (c.pc != 0x001AAEA4u) [[unlikely]] return; }
L_001AAEA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AAEC0:
    st32((c.r[4].w[0] + 304u), 0u);
    st32((c.r[4].w[0] + 1244u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 1240u), 0u);  c.pc = t; return; }
L_001AAED0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 704u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 11488u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001A8000u < 16384u) { entry = entries_002A[(t - 0x001A8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001AAEF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 744u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_001AAF18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAF0Cu); st8((c.r[4].w[0] + 704u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_002A(c, 169u, depth + 1u); else { c.pc = 0x001AB290u; return; } if (c.pc != 0x001AAF0Cu) [[unlikely]] return; }
L_001AAF0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AAF28; } }
    c.budget -= 1;
L_001AAF18:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAF24u); st8((c.r[4].w[0] + 704u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_002A(c, 139u, depth + 1u); else { c.pc = 0x001AAF40u; return; } if (c.pc != 0x001AAF24u) [[unlikely]] return; }
L_001AAF24:
    c.budget -= 1;
L_001AAF28:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001AAF40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 11472u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 705u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAF6Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AAF6Cu) [[unlikely]] return; }
L_001AAF6C:
    set32(c.r[2], 0u + 2u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAF80u); st8((c.r[16].w[0] + 746u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0039(c, 127u, depth + 1u); else { c.pc = 0x001E5A90u; return; } if (c.pc != 0x001AAF80u) [[unlikely]] return; }
L_001AAF80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AAF90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F8C0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[3].d[0] = c.r[2].d[0] | 52429ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[8], 0u + 4096u);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 705u)));
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 8u);
    set32(c.r[7], 0u + 5u);
    set32(c.r[9], c.r[9].w[0] + 1u);
    st8((c.r[4].w[0] + 705u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st32((c.r[4].w[0] + 108u), 0u);
    st32((c.r[4].w[0] + 104u), 0u);
    st16((c.r[4].w[0] + 560u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 276u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 280u), 0u);
    st8((c.r[4].w[0] + 286u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 104u), c.r[3].w[0]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAFF0u); st32((c.r[4].w[0] + 712u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002C(c, 88u, depth + 1u); else { c.pc = 0x001B0B00u; return; } if (c.pc != 0x001AAFF0u) [[unlikely]] return; }
L_001AAFF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAFF8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 183u, depth + 1u); else { c.pc = 0x001EBFA0u; return; } if (c.pc != 0x001AAFF8u) [[unlikely]] return; }
L_001AAFF8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB004u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 115u, depth + 1u); else { c.pc = 0x001EA8D0u; return; } if (c.pc != 0x001AB004u) [[unlikely]] return; }
L_001AB004:
    set32(c.r[5], ld32((c.r[16].w[0] + 1268u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB010u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 57u, depth + 1u); else { c.pc = 0x001E4C20u; return; } if (c.pc != 0x001AB010u) [[unlikely]] return; }
L_001AB010:
    set32(c.r[2], ld32((c.r[16].w[0] + 1488u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_001AB070; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = 0u;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB054u); st16((c.r[16].w[0] + 560u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_002C(c, 88u, depth + 1u); else { c.pc = 0x001B0B00u; return; } if (c.pc != 0x001AB054u) [[unlikely]] return; }
L_001AB054:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB064u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x001AB064u) [[unlikely]] return; }
L_001AB064:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AB090; } }
    c.budget -= 1;
L_001AB070:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB07Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x001AB07Cu) [[unlikely]] return; }
L_001AB07C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB08Cu); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_004E(c, 149u, depth + 1u); else { c.pc = 0x0023A0D0u; return; } if (c.pc != 0x001AB08Cu) [[unlikely]] return; }
L_001AB08C:
    c.budget -= 1;
L_001AB090:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AB0A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB0B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x001AB0B4u) [[unlikely]] return; }
L_001AB0B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB0BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 183u, depth + 1u); else { c.pc = 0x001EBFA0u; return; } if (c.pc != 0x001AB0BCu) [[unlikely]] return; }
L_001AB0BC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB0C8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 115u, depth + 1u); else { c.pc = 0x001EA8D0u; return; } if (c.pc != 0x001AB0C8u) [[unlikely]] return; }
L_001AB0C8:
    set32(c.r[5], ld32((c.r[16].w[0] + 1268u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB0D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 57u, depth + 1u); else { c.pc = 0x001E4C20u; return; } if (c.pc != 0x001AB0D4u) [[unlikely]] return; }
L_001AB0D4:
    c.f[1] = ld32((c.r[16].w[0] + 1016u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41880000u);
    c.f[0] = ld32((c.r[16].w[0] + 712u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB0F4u); st32((c.r[16].w[0] + 712u), c.f[0]);  if (depth < kMaxDepth) unit_003B(c, 8u, depth + 1u); else { c.pc = 0x001EC1A0u; return; } if (c.pc != 0x001AB0F4u) [[unlikely]] return; }
L_001AB0F4:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001AB118; } }
    c.f[1] = ld32((c.r[16].w[0] + 712u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001AB168; } }
L_001AB118:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 705u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = c.r[2].w[0];
    set32(c.r[5], 0u + 1u);
    c.f[12] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB158u); st16((c.r[16].w[0] + 560u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_002C(c, 88u, depth + 1u); else { c.pc = 0x001B0B00u; return; } if (c.pc != 0x001AB158u) [[unlikely]] return; }
L_001AB158:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB168u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x001AB168u) [[unlikely]] return; }
L_001AB168:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AB180:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB194u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 183u, depth + 1u); else { c.pc = 0x001EBFA0u; return; } if (c.pc != 0x001AB194u) [[unlikely]] return; }
L_001AB194:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB1A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 115u, depth + 1u); else { c.pc = 0x001EA8D0u; return; } if (c.pc != 0x001AB1A0u) [[unlikely]] return; }
L_001AB1A0:
    set32(c.r[5], ld32((c.r[16].w[0] + 1268u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB1ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 57u, depth + 1u); else { c.pc = 0x001E4C20u; return; } if (c.pc != 0x001AB1ACu) [[unlikely]] return; }
L_001AB1AC:
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001AB1D0; } }
    st32((c.r[16].w[0] + 108u), c.f[0]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.budget -= 3;
L_001AB1D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB1D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x001AB1D8u) [[unlikely]] return; }
L_001AB1D8:
    c.f[1] = ld32((c.r[16].w[0] + 8308u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001AB218; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 705u)));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 40u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB218u); st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_002C(c, 88u, depth + 1u); else { c.pc = 0x001B0B00u; return; } if (c.pc != 0x001AB218u) [[unlikely]] return; }
L_001AB218:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AB230:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 1268u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB248u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 57u, depth + 1u); else { c.pc = 0x001E4C20u; return; } if (c.pc != 0x001AB248u) [[unlikely]] return; }
L_001AB248:
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001AB268; } }
    st32((c.r[16].w[0] + 108u), c.f[0]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.budget -= 2;
L_001AB268:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB270u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x001AB270u) [[unlikely]] return; }
L_001AB270:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001AB280; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB280u); set32(c.r[5], 0u + 15u);  if (depth < kMaxDepth) unit_002E(c, 68u, depth + 1u); else { c.pc = 0x001B9070u; return; } if (c.pc != 0x001AB280u) [[unlikely]] return; }
L_001AB280:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AB290:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 11456u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 705u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB2BCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AB2BCu) [[unlikely]] return; }
L_001AB2BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB2C4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 56u, depth + 1u); else { c.pc = 0x001D0960u; return; } if (c.pc != 0x001AB2C4u) [[unlikely]] return; }
L_001AB2C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AB2E0; } }
    set32(c.r[2], 0u + 2u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB2DCu); st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0039(c, 127u, depth + 1u); else { c.pc = 0x001E5A90u; return; } if (c.pc != 0x001AB2DCu) [[unlikely]] return; }
L_001AB2DC:
    c.budget -= 1;
L_001AB2E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AB2F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 705u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 705u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[4].w[0] + 560u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 52u), 0u);
    set32(c.r[5], ld32((c.r[4].w[0] + 1268u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB31Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 69u, depth + 1u); else { c.pc = 0x001E4E00u; return; } if (c.pc != 0x001AB31Cu) [[unlikely]] return; }
L_001AB31C:
    set32(c.r[2], 0u + 32u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 280u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB334u); st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x001AB334u) [[unlikely]] return; }
L_001AB334:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB33Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 183u, depth + 1u); else { c.pc = 0x001EBFA0u; return; } if (c.pc != 0x001AB33Cu) [[unlikely]] return; }
L_001AB33C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB348u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 118u, depth + 1u); else { c.pc = 0x001EAA20u; return; } if (c.pc != 0x001AB348u) [[unlikely]] return; }
L_001AB348:
    set32(c.r[3], ld32((c.r[16].w[0] + 1488u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001AB3A8; } }
    set32(c.r[2], 0u + 3u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[12] = 0u;
    st32((c.r[16].w[0] + 712u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = c.r[2].w[0];
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB398u); st16((c.r[16].w[0] + 560u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_002C(c, 88u, depth + 1u); else { c.pc = 0x001B0B00u; return; } if (c.pc != 0x001AB398u) [[unlikely]] return; }
L_001AB398:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB3A8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x001AB3A8u) [[unlikely]] return; }
L_001AB3A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AB3C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 1268u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB3D8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 69u, depth + 1u); else { c.pc = 0x001E4E00u; return; } if (c.pc != 0x001AB3D8u) [[unlikely]] return; }
L_001AB3D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB3E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x001AB3E0u) [[unlikely]] return; }
L_001AB3E0:
    c.f[1] = ld32((c.r[16].w[0] + 712u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB3FCu); st32((c.r[16].w[0] + 712u), c.f[0]);  if (depth < kMaxDepth) unit_003A(c, 183u, depth + 1u); else { c.pc = 0x001EBFA0u; return; } if (c.pc != 0x001AB3FCu) [[unlikely]] return; }
L_001AB3FC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB408u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 118u, depth + 1u); else { c.pc = 0x001EAA20u; return; } if (c.pc != 0x001AB408u) [[unlikely]] return; }
L_001AB408:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001AB428; } }
    c.f[1] = ld32((c.r[16].w[0] + 712u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001AB4C0; } }
L_001AB428:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 705u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 8u);
    set32(c.r[7], 0u + 5u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB454u); st32((c.r[16].w[0] + 712u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002C(c, 88u, depth + 1u); else { c.pc = 0x001B0B00u; return; } if (c.pc != 0x001AB454u) [[unlikely]] return; }
L_001AB454:
    set32(c.r[2], ld32((c.r[16].w[0] + 1488u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_001AB4B0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = 0u;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB498u); st16((c.r[16].w[0] + 560u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_002C(c, 88u, depth + 1u); else { c.pc = 0x001B0B00u; return; } if (c.pc != 0x001AB498u) [[unlikely]] return; }
L_001AB498:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB4A8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x001AB4A8u) [[unlikely]] return; }
L_001AB4A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AB4C0; } }
L_001AB4B0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB4BCu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x001AB4BCu) [[unlikely]] return; }
L_001AB4BC:
    c.budget -= 1;
L_001AB4C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AB4D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB4E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 183u, depth + 1u); else { c.pc = 0x001EBFA0u; return; } if (c.pc != 0x001AB4E4u) [[unlikely]] return; }
L_001AB4E4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB4F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 115u, depth + 1u); else { c.pc = 0x001EA8D0u; return; } if (c.pc != 0x001AB4F0u) [[unlikely]] return; }
L_001AB4F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F990000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB50Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 205u, depth + 1u); else { c.pc = 0x001EE330u; return; } if (c.pc != 0x001AB50Cu) [[unlikely]] return; }
L_001AB50C:
    set32(c.r[5], ld32((c.r[16].w[0] + 1268u)));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB51Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 73u, depth + 1u); else { c.pc = 0x001E4ED0u; return; } if (c.pc != 0x001AB51Cu) [[unlikely]] return; }
L_001AB51C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB524u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x001AB524u) [[unlikely]] return; }
L_001AB524:
    c.f[1] = ld32((c.r[16].w[0] + 712u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41880000u);
    c.f[12] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB548u); st32((c.r[16].w[0] + 712u), c.f[0]);  if (depth < kMaxDepth) unit_003B(c, 8u, depth + 1u); else { c.pc = 0x001EC1A0u; return; } if (c.pc != 0x001AB548u) [[unlikely]] return; }
L_001AB548:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001AB570; } }
    c.f[1] = ld32((c.r[16].w[0] + 712u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001AB5C0; } }
    c.budget -= 1;
L_001AB570:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 705u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = c.r[2].w[0];
    set32(c.r[5], 0u + 1u);
    c.f[12] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB5B0u); st16((c.r[16].w[0] + 560u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_002C(c, 88u, depth + 1u); else { c.pc = 0x001B0B00u; return; } if (c.pc != 0x001AB5B0u) [[unlikely]] return; }
L_001AB5B0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB5C0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x001AB5C0u) [[unlikely]] return; }
L_001AB5C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AB5D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[12] = 0u;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[4].w[0] + 1268u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB5F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 73u, depth + 1u); else { c.pc = 0x001E4ED0u; return; } if (c.pc != 0x001AB5F4u) [[unlikely]] return; }
L_001AB5F4:
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001AB618; } }
    st32((c.r[16].w[0] + 108u), c.f[0]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.budget -= 3;
L_001AB618:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB620u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x001AB620u) [[unlikely]] return; }
L_001AB620:
    c.f[1] = ld32((c.r[16].w[0] + 8308u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001AB660; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 705u)));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 40u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB660u); st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_002C(c, 88u, depth + 1u); else { c.pc = 0x001B0B00u; return; } if (c.pc != 0x001AB660u) [[unlikely]] return; }
L_001AB660:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AB670:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[12] = 0u;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 1268u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB68Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 73u, depth + 1u); else { c.pc = 0x001E4ED0u; return; } if (c.pc != 0x001AB68Cu) [[unlikely]] return; }
L_001AB68C:
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001AB6B0; } }
    st32((c.r[16].w[0] + 108u), c.f[0]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.budget -= 3;
L_001AB6B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB6B8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x001AB6B8u) [[unlikely]] return; }
L_001AB6B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001AB6C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB6C8u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_002E(c, 68u, depth + 1u); else { c.pc = 0x001B9070u; return; } if (c.pc != 0x001AB6C8u) [[unlikely]] return; }
L_001AB6C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AB6E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 704u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 11432u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001A8000u < 16384u) { entry = entries_002A[(t - 0x001A8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001AB700:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 705u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 11408u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001A8000u < 16384u) { entry = entries_002A[(t - 0x001A8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001AB720:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 705u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 705u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001AB730:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB744u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 155u, depth + 1u); else { c.pc = 0x001AD340u; return; } if (c.pc != 0x001AB744u) [[unlikely]] return; }
L_001AB744:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB74Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 173u, depth + 1u); else { c.pc = 0x001AD680u; return; } if (c.pc != 0x001AB74Cu) [[unlikely]] return; }
L_001AB74C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AB768; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 705u)));
    set32(c.r[3], 0u + 16u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
L_001AB768:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AB780:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB794u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 173u, depth + 1u); else { c.pc = 0x001AD680u; return; } if (c.pc != 0x001AB794u) [[unlikely]] return; }
L_001AB794:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001AB7C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB7B8u);  if (depth < kMaxDepth) unit_002B(c, 155u, depth + 1u); else { c.pc = 0x001AD340u; return; } if (c.pc != 0x001AB7B8u) [[unlikely]] return; }
L_001AB7B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001AB7D8; } }
L_001AB7C0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 705u)));
    set32(c.r[3], 0u + 16u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
L_001AB7D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AB7F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB804u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 173u, depth + 1u); else { c.pc = 0x001AD680u; return; } if (c.pc != 0x001AB804u) [[unlikely]] return; }
L_001AB804:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB80Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 155u, depth + 1u); else { c.pc = 0x001AD340u; return; } if (c.pc != 0x001AB80Cu) [[unlikely]] return; }
L_001AB80C:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001AB8A8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 705u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB838u); st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00B1(c, 280u, depth + 1u); else { c.pc = 0x003C6600u; return; } if (c.pc != 0x001AB838u) [[unlikely]] return; }
L_001AB838:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AB898; } }
    set32(c.r[2], 0u + 70u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB854u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x001AB854u) [[unlikely]] return; }
L_001AB854:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB860u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x001AB860u) [[unlikely]] return; }
L_001AB860:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB86Cu); set32(c.r[5], 0u + 106u);  if (depth < kMaxDepth) unit_001A(c, 156u, depth + 1u); else { c.pc = 0x0016A7C0u; return; } if (c.pc != 0x001AB86Cu) [[unlikely]] return; }
L_001AB86C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB878u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 157u, depth + 1u); else { c.pc = 0x0023A290u; return; } if (c.pc != 0x001AB878u) [[unlikely]] return; }
L_001AB878:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8656u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB884u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004B(c, 27u, depth + 1u); else { c.pc = 0x0022C640u; return; } if (c.pc != 0x001AB884u) [[unlikely]] return; }
L_001AB884:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB890u); set32(c.r[5], 0u + 13u);  if (depth < kMaxDepth) unit_0049(c, 393u, depth + 1u); else { c.pc = 0x00227A20u; return; } if (c.pc != 0x001AB890u) [[unlikely]] return; }
L_001AB890:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AB8A8; } }
L_001AB898:
    set32(c.r[2], 0u + 10u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB8A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 162u, depth + 1u); else { c.pc = 0x0023A310u; return; } if (c.pc != 0x001AB8A8u) [[unlikely]] return; }
L_001AB8A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AB8C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_001AB8F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB8ECu);  if (depth < kMaxDepth) unit_002E(c, 79u, depth + 1u); else { c.pc = 0x001B9200u; return; } if (c.pc != 0x001AB8ECu) [[unlikely]] return; }
L_001AB8EC:
    c.budget -= 1;
L_001AB8F0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001AB900:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 11376u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 705u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB92Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AB92Cu) [[unlikely]] return; }
L_001AB92C:
    c.f[1] = ld32((c.r[16].w[0] + 304u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[16].w[0] + 304u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 1268u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB964u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 57u, depth + 1u); else { c.pc = 0x001E4C20u; return; } if (c.pc != 0x001AB964u) [[unlikely]] return; }
L_001AB964:
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001AB988; } }
    st32((c.r[16].w[0] + 108u), c.f[0]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.budget -= 3;
L_001AB988:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB998u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 127u, depth + 1u); else { c.pc = 0x001E5A90u; return; } if (c.pc != 0x001AB998u) [[unlikely]] return; }
L_001AB998:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB9A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x001AB9A0u) [[unlikely]] return; }
L_001AB9A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AB9B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[0] = c.r[2].w[0];
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 705u)));
    set32(c.r[2], 0u + 32u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 705u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[1] = ld32((c.r[4].w[0] + 104u));
    c.f[1] = c.f[1] ^ fp::kSign;
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 108u), c.f[0]);
    st32((c.r[4].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 280u), 0u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB9F8u); st8((c.r[4].w[0] + 286u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_003B(c, 6u, depth + 1u); else { c.pc = 0x001EC130u; return; } if (c.pc != 0x001AB9F8u) [[unlikely]] return; }
L_001AB9F8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABA04u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003A(c, 118u, depth + 1u); else { c.pc = 0x001EAA20u; return; } if (c.pc != 0x001ABA04u) [[unlikely]] return; }
L_001ABA04:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABA1Cu); set32(c.r[7], 0u + 11u);  if (depth < kMaxDepth) unit_002C(c, 88u, depth + 1u); else { c.pc = 0x001B0B00u; return; } if (c.pc != 0x001ABA1Cu) [[unlikely]] return; }
L_001ABA1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001ABA30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABA44u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 6u, depth + 1u); else { c.pc = 0x001EC130u; return; } if (c.pc != 0x001ABA44u) [[unlikely]] return; }
L_001ABA44:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABA50u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003A(c, 118u, depth + 1u); else { c.pc = 0x001EAA20u; return; } if (c.pc != 0x001ABA50u) [[unlikely]] return; }
L_001ABA50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ABA70; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 705u)));
    set32(c.r[3], 0u + 16u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
L_001ABA70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001ABA80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABA94u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 6u, depth + 1u); else { c.pc = 0x001EC130u; return; } if (c.pc != 0x001ABA94u) [[unlikely]] return; }
L_001ABA94:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABAA0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003A(c, 118u, depth + 1u); else { c.pc = 0x001EAA20u; return; } if (c.pc != 0x001ABAA0u) [[unlikely]] return; }
L_001ABAA0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001ABAD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABAC4u);  if (depth < kMaxDepth) unit_002B(c, 155u, depth + 1u); else { c.pc = 0x001AD340u; return; } if (c.pc != 0x001ABAC4u) [[unlikely]] return; }
L_001ABAC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001ABAE8; } }
    c.budget -= 1;
L_001ABAD0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 705u)));
    set32(c.r[3], 0u + 16u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
L_001ABAE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001ABB00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABB14u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 6u, depth + 1u); else { c.pc = 0x001EC130u; return; } if (c.pc != 0x001ABB14u) [[unlikely]] return; }
L_001ABB14:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABB20u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003A(c, 118u, depth + 1u); else { c.pc = 0x001EAA20u; return; } if (c.pc != 0x001ABB20u) [[unlikely]] return; }
L_001ABB20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABB28u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 155u, depth + 1u); else { c.pc = 0x001AD340u; return; } if (c.pc != 0x001ABB28u) [[unlikely]] return; }
L_001ABB28:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001ABC08; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 705u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABB54u); st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00B1(c, 280u, depth + 1u); else { c.pc = 0x003C6600u; return; } if (c.pc != 0x001ABB54u) [[unlikely]] return; }
L_001ABB54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ABBF8; } }
    set32(c.r[2], 0u + 70u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABB70u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x001ABB70u) [[unlikely]] return; }
L_001ABB70:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABB7Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x001ABB7Cu) [[unlikely]] return; }
L_001ABB7C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABB88u); set32(c.r[5], 0u + 106u);  if (depth < kMaxDepth) unit_001A(c, 156u, depth + 1u); else { c.pc = 0x0016A7C0u; return; } if (c.pc != 0x001ABB88u) [[unlikely]] return; }
L_001ABB88:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABB94u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 157u, depth + 1u); else { c.pc = 0x0023A290u; return; } if (c.pc != 0x001ABB94u) [[unlikely]] return; }
L_001ABB94:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8656u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABBA0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004B(c, 27u, depth + 1u); else { c.pc = 0x0022C640u; return; } if (c.pc != 0x001ABBA0u) [[unlikely]] return; }
L_001ABBA0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABBACu); set32(c.r[5], 0u + 13u);  if (depth < kMaxDepth) unit_0049(c, 393u, depth + 1u); else { c.pc = 0x00227A20u; return; } if (c.pc != 0x001ABBACu) [[unlikely]] return; }
L_001ABBAC:
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] + 32767u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    st32((c.r[16].w[0] + 1268u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABBC8u); set32(c.r[4], ld32((c.r[16].w[0] + 1244u)));  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x001ABBC8u) [[unlikely]] return; }
L_001ABBC8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBDA30000u);
    c.r[4].d[0] = c.r[4].d[0] | 52429ull;
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.f[2] = c.r[4].w[0];
    c.f[1] = c.r[3].w[0];
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 104u), c.f[2]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.f[0]);  if (t) { goto L_001ABC08; } }
L_001ABBF8:
    set32(c.r[2], 0u + 10u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABC08u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 162u, depth + 1u); else { c.pc = 0x0023A310u; return; } if (c.pc != 0x001ABC08u) [[unlikely]] return; }
L_001ABC08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001ABC20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_001ABC50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABC4Cu);  if (depth < kMaxDepth) unit_002E(c, 68u, depth + 1u); else { c.pc = 0x001B9070u; return; } if (c.pc != 0x001ABC4Cu) [[unlikely]] return; }
L_001ABC4C:
    c.budget -= 1;
L_001ABC50:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001ABC60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 11344u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 705u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABC8Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001ABC8Cu) [[unlikely]] return; }
L_001ABC8C:
    c.f[1] = ld32((c.r[16].w[0] + 304u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABCBCu); st32((c.r[16].w[0] + 304u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x001ABCBCu) [[unlikely]] return; }
L_001ABCBC:
    set32(c.r[5], ld32((c.r[16].w[0] + 1268u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABCC8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 69u, depth + 1u); else { c.pc = 0x001E4E00u; return; } if (c.pc != 0x001ABCC8u) [[unlikely]] return; }
L_001ABCC8:
    c.f[2] = ld32((c.r[16].w[0] + 104u));
    c.f[1] = ld32((c.r[16].w[0] + 108u));
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001ABCF0; } }
    st32((c.r[16].w[0] + 108u), c.f[0]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.budget -= 2;
L_001ABCF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABCF8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 56u, depth + 1u); else { c.pc = 0x001D0960u; return; } if (c.pc != 0x001ABCF8u) [[unlikely]] return; }
L_001ABCF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_001ABD08; } }
    st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001ABD08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001ABD20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 705u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 705u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 280u), 0u);
    st8((c.r[4].w[0] + 286u), static_cast<std::uint8_t>(0u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABD54u); st32((c.r[4].w[0] + 108u), 0u);  if (depth < kMaxDepth) unit_003B(c, 6u, depth + 1u); else { c.pc = 0x001EC130u; return; } if (c.pc != 0x001ABD54u) [[unlikely]] return; }
L_001ABD54:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABD60u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003A(c, 118u, depth + 1u); else { c.pc = 0x001EAA20u; return; } if (c.pc != 0x001ABD60u) [[unlikely]] return; }
L_001ABD60:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABD78u); set32(c.r[7], 0u + 11u);  if (depth < kMaxDepth) unit_002C(c, 88u, depth + 1u); else { c.pc = 0x001B0B00u; return; } if (c.pc != 0x001ABD78u) [[unlikely]] return; }
L_001ABD78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001ABD90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABDA4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 6u, depth + 1u); else { c.pc = 0x001EC130u; return; } if (c.pc != 0x001ABDA4u) [[unlikely]] return; }
L_001ABDA4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABDB0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003A(c, 118u, depth + 1u); else { c.pc = 0x001EAA20u; return; } if (c.pc != 0x001ABDB0u) [[unlikely]] return; }
L_001ABDB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ABDD0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 705u)));
    set32(c.r[3], 0u + 16u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
L_001ABDD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001ABDE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABDF4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 6u, depth + 1u); else { c.pc = 0x001EC130u; return; } if (c.pc != 0x001ABDF4u) [[unlikely]] return; }
L_001ABDF4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABE00u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003A(c, 118u, depth + 1u); else { c.pc = 0x001EAA20u; return; } if (c.pc != 0x001ABE00u) [[unlikely]] return; }
L_001ABE00:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001ABE30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABE24u);  if (depth < kMaxDepth) unit_002B(c, 155u, depth + 1u); else { c.pc = 0x001AD340u; return; } if (c.pc != 0x001ABE24u) [[unlikely]] return; }
L_001ABE24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001ABE48; } }
    c.budget -= 1;
L_001ABE30:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 705u)));
    set32(c.r[3], 0u + 16u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
L_001ABE48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001ABE60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABE74u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 6u, depth + 1u); else { c.pc = 0x001EC130u; return; } if (c.pc != 0x001ABE74u) [[unlikely]] return; }
L_001ABE74:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABE80u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003A(c, 118u, depth + 1u); else { c.pc = 0x001EAA20u; return; } if (c.pc != 0x001ABE80u) [[unlikely]] return; }
L_001ABE80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABE88u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 155u, depth + 1u); else { c.pc = 0x001AD340u; return; } if (c.pc != 0x001ABE88u) [[unlikely]] return; }
L_001ABE88:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001ABFA8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 705u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABEB4u); st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00B1(c, 280u, depth + 1u); else { c.pc = 0x003C6600u; return; } if (c.pc != 0x001ABEB4u) [[unlikely]] return; }
L_001ABEB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ABF78; } }
    set32(c.r[2], 0u + 70u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABED0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x001ABED0u) [[unlikely]] return; }
L_001ABED0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABEDCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x001ABEDCu) [[unlikely]] return; }
L_001ABEDC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABEE8u); set32(c.r[5], 0u + 106u);  if (depth < kMaxDepth) unit_001A(c, 156u, depth + 1u); else { c.pc = 0x0016A7C0u; return; } if (c.pc != 0x001ABEE8u) [[unlikely]] return; }
L_001ABEE8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABEF4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 157u, depth + 1u); else { c.pc = 0x0023A290u; return; } if (c.pc != 0x001ABEF4u) [[unlikely]] return; }
L_001ABEF4:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8656u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABF00u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004B(c, 27u, depth + 1u); else { c.pc = 0x0022C640u; return; } if (c.pc != 0x001ABF00u) [[unlikely]] return; }
L_001ABF00:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABF0Cu); set32(c.r[5], 0u + 13u);  if (depth < kMaxDepth) unit_0049(c, 393u, depth + 1u); else { c.pc = 0x00227A20u; return; } if (c.pc != 0x001ABF0Cu) [[unlikely]] return; }
L_001ABF0C:
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] + 32767u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    st32((c.r[16].w[0] + 1268u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABF28u); set32(c.r[4], ld32((c.r[16].w[0] + 1244u)));  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x001ABF28u) [[unlikely]] return; }
L_001ABF28:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBCA30000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[2] = c.r[3].w[0];
    c.f[1] = c.r[2].w[0];
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 104u), c.f[2]);
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABF5Cu); set32(c.r[4], ld32((c.r[16].w[0] + 1244u)));  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x001ABF5Cu) [[unlikely]] return; }
L_001ABF5C:
    c.f[1] = c.f[0] ^ fp::kSign;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.f[0]);  if (t) { goto L_001ABFA8; } }
L_001ABF78:
    set32(c.r[2], 0u + 10u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABFA8u); st32((c.r[16].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_004E(c, 162u, depth + 1u); else { c.pc = 0x0023A310u; return; } if (c.pc != 0x001ABFA8u) [[unlikely]] return; }
L_001ABFA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001ABFC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001ABFF8; } }
    st32((c.r[4].w[0] + 108u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABFF4u); st32((c.r[4].w[0] + 104u), 0u);  if (depth < kMaxDepth) unit_002E(c, 68u, depth + 1u); else { c.pc = 0x001B9070u; return; } if (c.pc != 0x001ABFF4u) [[unlikely]] return; }
L_001ABFF4:
    c.budget -= 1;
L_001ABFF8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
}

}
