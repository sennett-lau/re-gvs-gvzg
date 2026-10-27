#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00AB[4096] = {
    1, 0, 0, 2, 3, 0, 4, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0,
    0, 0, 0, 0, 8, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0,
    0, 0, 11, 0, 12, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 15, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 18, 0, 19, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 23, 0, 24, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    26, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 29, 0,
    30, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 36, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40,
    0, 0, 0, 0, 0, 0, 41, 0, 42, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 47, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 50, 0, 51, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0,
    59, 0, 0, 0, 0, 0, 0, 0, 60, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 64, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65,
    0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0,
    0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0,
    90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0,
    93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 94, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 102, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 105, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0,
    0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118,
    0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 135, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0,
    0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 145, 0, 146,
    0, 147, 0, 148, 0, 149, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0,
    156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 158, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 161,
    0, 162, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0,
    0, 167, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 170, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175,
    0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 179, 0, 0,
    0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0,
    183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 187, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    190, 0, 191, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 197, 0, 198, 0, 199, 0, 200, 0, 201, 0, 0, 0, 0, 0, 0,
    202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 204, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 208, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 0, 0,
    0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0,
    0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 222, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0,
    0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 226, 0, 227, 0, 0, 0, 0, 0, 228, 0,
    0, 0, 0, 0, 0, 229, 0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 0, 0, 233, 0, 0, 234, 0, 0, 235, 0,
    0, 0, 0, 236, 0, 0, 237, 0, 0, 0, 0, 0, 0, 238, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 242, 0, 0, 0, 243,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 249, 0, 250, 0, 0, 0, 0, 0,
    251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0,
    0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0,
    257, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    264, 0, 0, 0, 265, 0, 266, 0, 267, 0, 0, 0, 268, 0, 0, 0, 0, 269, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 274, 0, 0, 0,
    275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 281, 0,
    0, 282, 0, 0, 0, 0, 0, 0, 283, 0, 0, 284, 0, 0, 285, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 290, 0, 0, 0, 0, 0, 0,
    0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0,
    297, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 304, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 307, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 310, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0,
    319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0,
    0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 325, 0, 0, 0, 326, 0, 0, 0, 0, 0, 327, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0,
    330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 333, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    335, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 342, 0, 343, 344, 0, 0, 0, 0, 345, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0,
    0, 0, 0, 0, 350, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 354, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0,
    357, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 362, 0, 363, 0, 0, 0, 0, 0,
    364, 0, 365, 0, 366, 0, 0, 0, 0, 0, 367, 0, 368, 0, 369, 0, 370, 0, 371, 0, 0, 0, 0, 0, 372, 0, 373, 374, 375, 0, 376, 0,
};

void unit_00AB(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003AC000;
    case 2u: goto L_003AC00C;
    case 3u: goto L_003AC010;
    case 4u: goto L_003AC018;
    case 5u: goto L_003AC038;
    case 6u: goto L_003AC050;
    case 7u: goto L_003AC070;
    case 8u: goto L_003AC090;
    case 9u: goto L_003AC098;
    case 10u: goto L_003AC0EC;
    case 11u: goto L_003AC108;
    case 12u: goto L_003AC110;
    case 13u: goto L_003AC118;
    case 14u: goto L_003AC160;
    case 15u: goto L_003AC168;
    case 16u: goto L_003AC1BC;
    case 17u: goto L_003AC1D8;
    case 18u: goto L_003AC1E0;
    case 19u: goto L_003AC1E8;
    case 20u: goto L_003AC230;
    case 21u: goto L_003AC238;
    case 22u: goto L_003AC28C;
    case 23u: goto L_003AC2A8;
    case 24u: goto L_003AC2B0;
    case 25u: goto L_003AC2B8;
    case 26u: goto L_003AC300;
    case 27u: goto L_003AC308;
    case 28u: goto L_003AC35C;
    case 29u: goto L_003AC378;
    case 30u: goto L_003AC380;
    case 31u: goto L_003AC388;
    case 32u: goto L_003AC3D0;
    case 33u: goto L_003AC3D8;
    case 34u: goto L_003AC42C;
    case 35u: goto L_003AC448;
    case 36u: goto L_003AC450;
    case 37u: goto L_003AC458;
    case 38u: goto L_003AC4A0;
    case 39u: goto L_003AC4A8;
    case 40u: goto L_003AC4FC;
    case 41u: goto L_003AC518;
    case 42u: goto L_003AC520;
    case 43u: goto L_003AC528;
    case 44u: goto L_003AC540;
    case 45u: goto L_003AC560;
    case 46u: goto L_003AC5D8;
    case 47u: goto L_003AC608;
    case 48u: goto L_003AC610;
    case 49u: goto L_003AC6DC;
    case 50u: goto L_003AC6E4;
    case 51u: goto L_003AC6EC;
    case 52u: goto L_003AC7A8;
    case 53u: goto L_003AC7C0;
    case 54u: goto L_003AC830;
    case 55u: goto L_003AC850;
    case 56u: goto L_003AC878;
    case 57u: goto L_003AC8B0;
    case 58u: goto L_003AC8EC;
    case 59u: goto L_003AC900;
    case 60u: goto L_003AC920;
    case 61u: goto L_003AC928;
    case 62u: goto L_003AC940;
    case 63u: goto L_003AC9E8;
    case 64u: goto L_003AC9F0;
    case 65u: goto L_003ACA7C;
    case 66u: goto L_003ACA98;
    case 67u: goto L_003ACAB4;
    case 68u: goto L_003ACAE8;
    case 69u: goto L_003ACB80;
    case 70u: goto L_003ACC30;
    case 71u: goto L_003ACC58;
    case 72u: goto L_003ACC70;
    case 73u: goto L_003ACD1C;
    case 74u: goto L_003ACD30;
    case 75u: goto L_003ACD40;
    case 76u: goto L_003ACD4C;
    case 77u: goto L_003ACD88;
    case 78u: goto L_003ACD9C;
    case 79u: goto L_003ACDCC;
    case 80u: goto L_003ACDD8;
    case 81u: goto L_003ACE04;
    case 82u: goto L_003ACE30;
    case 83u: goto L_003ACE54;
    case 84u: goto L_003ACEAC;
    case 85u: goto L_003ACEC4;
    case 86u: goto L_003ACEEC;
    case 87u: goto L_003ACF04;
    case 88u: goto L_003ACF48;
    case 89u: goto L_003ACF78;
    case 90u: goto L_003ACF80;
    case 91u: goto L_003ACFB0;
    case 92u: goto L_003AD068;
    case 93u: goto L_003AD080;
    case 94u: goto L_003AD108;
    case 95u: goto L_003AD110;
    case 96u: goto L_003AD120;
    case 97u: goto L_003AD158;
    case 98u: goto L_003AD1B0;
    case 99u: goto L_003AD2B8;
    case 100u: goto L_003AD2C4;
    case 101u: goto L_003AD2F0;
    case 102u: goto L_003AD2F8;
    case 103u: goto L_003AD334;
    case 104u: goto L_003AD370;
    case 105u: goto L_003AD378;
    case 106u: goto L_003AD3A0;
    case 107u: goto L_003AD450;
    case 108u: goto L_003AD4B0;
    case 109u: goto L_003AD52C;
    case 110u: goto L_003AD538;
    case 111u: goto L_003AD550;
    case 112u: goto L_003AD5B4;
    case 113u: goto L_003AD5D0;
    case 114u: goto L_003AD664;
    case 115u: goto L_003AD678;
    case 116u: goto L_003AD688;
    case 117u: goto L_003AD6C0;
    case 118u: goto L_003AD77C;
    case 119u: goto L_003AD790;
    case 120u: goto L_003AD7A0;
    case 121u: goto L_003AD800;
    case 122u: goto L_003AD848;
    case 123u: goto L_003AD8DC;
    case 124u: goto L_003AD908;
    case 125u: goto L_003AD930;
    case 126u: goto L_003AD950;
    case 127u: goto L_003AD9B0;
    case 128u: goto L_003AD9E8;
    case 129u: goto L_003ADA50;
    case 130u: goto L_003ADABC;
    case 131u: goto L_003ADAE0;
    case 132u: goto L_003ADBF8;
    case 133u: goto L_003ADDE8;
    case 134u: goto L_003AE12C;
    case 135u: goto L_003AE138;
    case 136u: goto L_003AE144;
    case 137u: goto L_003AE154;
    case 138u: goto L_003AE170;
    case 139u: goto L_003AE190;
    case 140u: goto L_003AE1E0;
    case 141u: goto L_003AE220;
    case 142u: goto L_003AE230;
    case 143u: goto L_003AE240;
    case 144u: goto L_003AE26C;
    case 145u: goto L_003AE274;
    case 146u: goto L_003AE27C;
    case 147u: goto L_003AE284;
    case 148u: goto L_003AE28C;
    case 149u: goto L_003AE294;
    case 150u: goto L_003AE2A0;
    case 151u: goto L_003AE2C0;
    case 152u: goto L_003AE340;
    case 153u: goto L_003AE374;
    case 154u: goto L_003AE450;
    case 155u: goto L_003AE45C;
    case 156u: goto L_003AE480;
    case 157u: goto L_003AE4AC;
    case 158u: goto L_003AE4B4;
    case 159u: goto L_003AE4C0;
    case 160u: goto L_003AE4E0;
    case 161u: goto L_003AE4FC;
    case 162u: goto L_003AE504;
    case 163u: goto L_003AE510;
    case 164u: goto L_003AE520;
    case 165u: goto L_003AE550;
    case 166u: goto L_003AE560;
    case 167u: goto L_003AE584;
    case 168u: goto L_003AE590;
    case 169u: goto L_003AE5A8;
    case 170u: goto L_003AE5B0;
    case 171u: goto L_003AE5C0;
    case 172u: goto L_003AE5D0;
    case 173u: goto L_003AE650;
    case 174u: goto L_003AE664;
    case 175u: goto L_003AE67C;
    case 176u: goto L_003AE684;
    case 177u: goto L_003AE6B0;
    case 178u: goto L_003AE6D8;
    case 179u: goto L_003AE6F4;
    case 180u: goto L_003AE718;
    case 181u: goto L_003AE730;
    case 182u: goto L_003AE75C;
    case 183u: goto L_003AE780;
    case 184u: goto L_003AE7C0;
    case 185u: goto L_003AE7E0;
    case 186u: goto L_003AE82C;
    case 187u: goto L_003AE834;
    case 188u: goto L_003AE83C;
    case 189u: goto L_003AE850;
    case 190u: goto L_003AE880;
    case 191u: goto L_003AE888;
    case 192u: goto L_003AE890;
    case 193u: goto L_003AE8A0;
    case 194u: goto L_003AE8F0;
    case 195u: goto L_003AE918;
    case 196u: goto L_003AE93C;
    case 197u: goto L_003AE944;
    case 198u: goto L_003AE94C;
    case 199u: goto L_003AE954;
    case 200u: goto L_003AE95C;
    case 201u: goto L_003AE964;
    case 202u: goto L_003AE980;
    case 203u: goto L_003AE9B0;
    case 204u: goto L_003AE9BC;
    case 205u: goto L_003AE9D0;
    case 206u: goto L_003AEA10;
    case 207u: goto L_003AEAC0;
    case 208u: goto L_003AEAC8;
    case 209u: goto L_003AEAD8;
    case 210u: goto L_003AEB14;
    case 211u: goto L_003AEB2C;
    case 212u: goto L_003AEB38;
    case 213u: goto L_003AEB48;
    case 214u: goto L_003AEB58;
    case 215u: goto L_003AEB68;
    case 216u: goto L_003AEB88;
    case 217u: goto L_003AEBB0;
    case 218u: goto L_003AEBD0;
    case 219u: goto L_003AEBF0;
    case 220u: goto L_003AEC14;
    case 221u: goto L_003AEC48;
    case 222u: goto L_003AEC54;
    case 223u: goto L_003AEC70;
    case 224u: goto L_003AEC94;
    case 225u: goto L_003AECCC;
    case 226u: goto L_003AECD8;
    case 227u: goto L_003AECE0;
    case 228u: goto L_003AECF8;
    case 229u: goto L_003AED14;
    case 230u: goto L_003AED20;
    case 231u: goto L_003AED38;
    case 232u: goto L_003AED48;
    case 233u: goto L_003AED60;
    case 234u: goto L_003AED6C;
    case 235u: goto L_003AED78;
    case 236u: goto L_003AED8C;
    case 237u: goto L_003AED98;
    case 238u: goto L_003AEDB4;
    case 239u: goto L_003AEDC0;
    case 240u: goto L_003AEDD0;
    case 241u: goto L_003AEDE0;
    case 242u: goto L_003AEDEC;
    case 243u: goto L_003AEDFC;
    case 244u: goto L_003AEE40;
    case 245u: goto L_003AEE4C;
    case 246u: goto L_003AEE60;
    case 247u: goto L_003AEEA0;
    case 248u: goto L_003AEED8;
    case 249u: goto L_003AEEE0;
    case 250u: goto L_003AEEE8;
    case 251u: goto L_003AEF00;
    case 252u: goto L_003AEF40;
    case 253u: goto L_003AEF70;
    case 254u: goto L_003AEF90;
    case 255u: goto L_003AEFA8;
    case 256u: goto L_003AEFE0;
    case 257u: goto L_003AF000;
    case 258u: goto L_003AF010;
    case 259u: goto L_003AF04C;
    case 260u: goto L_003AF060;
    case 261u: goto L_003AF0A8;
    case 262u: goto L_003AF0B8;
    case 263u: goto L_003AF0D8;
    case 264u: goto L_003AF100;
    case 265u: goto L_003AF110;
    case 266u: goto L_003AF118;
    case 267u: goto L_003AF120;
    case 268u: goto L_003AF130;
    case 269u: goto L_003AF144;
    case 270u: goto L_003AF150;
    case 271u: goto L_003AF160;
    case 272u: goto L_003AF190;
    case 273u: goto L_003AF1E8;
    case 274u: goto L_003AF1F0;
    case 275u: goto L_003AF200;
    case 276u: goto L_003AF238;
    case 277u: goto L_003AF270;
    case 278u: goto L_003AF2A0;
    case 279u: goto L_003AF2C8;
    case 280u: goto L_003AF2E0;
    case 281u: goto L_003AF2F8;
    case 282u: goto L_003AF304;
    case 283u: goto L_003AF320;
    case 284u: goto L_003AF32C;
    case 285u: goto L_003AF338;
    case 286u: goto L_003AF350;
    case 287u: goto L_003AF384;
    case 288u: goto L_003AF3B0;
    case 289u: goto L_003AF3DC;
    case 290u: goto L_003AF3E4;
    case 291u: goto L_003AF408;
    case 292u: goto L_003AF490;
    case 293u: goto L_003AF4C8;
    case 294u: goto L_003AF540;
    case 295u: goto L_003AF550;
    case 296u: goto L_003AF560;
    case 297u: goto L_003AF580;
    case 298u: goto L_003AF590;
    case 299u: goto L_003AF5B8;
    case 300u: goto L_003AF5D0;
    case 301u: goto L_003AF5F0;
    case 302u: goto L_003AF618;
    case 303u: goto L_003AF65C;
    case 304u: goto L_003AF670;
    case 305u: goto L_003AF698;
    case 306u: goto L_003AF6DC;
    case 307u: goto L_003AF6F0;
    case 308u: goto L_003AF718;
    case 309u: goto L_003AF75C;
    case 310u: goto L_003AF770;
    case 311u: goto L_003AF798;
    case 312u: goto L_003AF7C8;
    case 313u: goto L_003AF7E0;
    case 314u: goto L_003AF808;
    case 315u: goto L_003AF854;
    case 316u: goto L_003AF870;
    case 317u: goto L_003AF898;
    case 318u: goto L_003AF8E4;
    case 319u: goto L_003AF900;
    case 320u: goto L_003AF928;
    case 321u: goto L_003AF974;
    case 322u: goto L_003AF990;
    case 323u: goto L_003AF9AC;
    case 324u: goto L_003AF9BC;
    case 325u: goto L_003AF9C8;
    case 326u: goto L_003AF9D8;
    case 327u: goto L_003AF9F0;
    case 328u: goto L_003AFA18;
    case 329u: goto L_003AFA68;
    case 330u: goto L_003AFA80;
    case 331u: goto L_003AFAB0;
    case 332u: goto L_003AFAE0;
    case 333u: goto L_003AFAE8;
    case 334u: goto L_003AFB40;
    case 335u: goto L_003AFB80;
    case 336u: goto L_003AFB8C;
    case 337u: goto L_003AFBD0;
    case 338u: goto L_003AFBE0;
    case 339u: goto L_003AFC10;
    case 340u: goto L_003AFC38;
    case 341u: goto L_003AFC50;
    case 342u: goto L_003AFC90;
    case 343u: goto L_003AFC98;
    case 344u: goto L_003AFC9C;
    case 345u: goto L_003AFCB0;
    case 346u: goto L_003AFCC4;
    case 347u: goto L_003AFD10;
    case 348u: goto L_003AFD50;
    case 349u: goto L_003AFD74;
    case 350u: goto L_003AFD90;
    case 351u: goto L_003AFD9C;
    case 352u: goto L_003AFDC8;
    case 353u: goto L_003AFDE8;
    case 354u: goto L_003AFE10;
    case 355u: goto L_003AFE18;
    case 356u: goto L_003AFE60;
    case 357u: goto L_003AFE80;
    case 358u: goto L_003AFEA0;
    case 359u: goto L_003AFEB8;
    case 360u: goto L_003AFF24;
    case 361u: goto L_003AFF58;
    case 362u: goto L_003AFF60;
    case 363u: goto L_003AFF68;
    case 364u: goto L_003AFF80;
    case 365u: goto L_003AFF88;
    case 366u: goto L_003AFF90;
    case 367u: goto L_003AFFA8;
    case 368u: goto L_003AFFB0;
    case 369u: goto L_003AFFB8;
    case 370u: goto L_003AFFC0;
    case 371u: goto L_003AFFC8;
    case 372u: goto L_003AFFE0;
    case 373u: goto L_003AFFE8;
    case 374u: goto L_003AFFEC;
    case 375u: goto L_003AFFF0;
    case 376u: goto L_003AFFF8;
    default: bad_entry(c, 0x003AC000u); return;
    }
L_003AC000:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC00Cu); st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008F(c, 80u, depth + 1u); else { c.pc = 0x0033D310u; return; } if (c.pc != 0x003AC00Cu) [[unlikely]] return; }
L_003AC00C:
    c.budget -= 1;
L_003AC010:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003AC528; } }
L_003AC018:
    set32(c.r[2], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003AC520; } }
    c.budget -= 1;
L_003AC038:
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003AC520; } }
L_003AC050:
    set32(c.r[2], 0u + 30u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003AC520; } }
    c.budget -= 1;
L_003AC070:
    set32(c.r[2], 0u + 50u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003AC520; } }
    c.budget -= 1;
L_003AC090:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC098u); set32(c.r[4], 0u + 132u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x003AC098u) [[unlikely]] return; }
L_003AC098:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003AC0D0; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4962u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003AC520; } }
L_003AC0D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.r[1].d[0] = c.r[2].sd[0] < 240ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003AC520; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC0ECu);  if (depth < kMaxDepth) unit_0098(c, 526u, depth + 1u); else { c.pc = 0x003636C0u; return; } if (c.pc != 0x003AC0ECu) [[unlikely]] return; }
L_003AC0EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003AC520; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4962u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003AC520; } }
L_003AC108:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_003AC520; } }
L_003AC110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC118u); set32(c.r[4], 0u + 135u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x003AC118u) [[unlikely]] return; }
L_003AC118:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4966u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003AC520; } }
    set32(c.r[2], 0u + 300u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4962u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003AC520; } }
    c.budget -= 1;
L_003AC160:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC168u); set32(c.r[4], 0u + 135u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x003AC168u) [[unlikely]] return; }
L_003AC168:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003AC1A0; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4962u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003AC520; } }
L_003AC1A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.r[1].d[0] = c.r[2].sd[0] < 240ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003AC520; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC1BCu);  if (depth < kMaxDepth) unit_0098(c, 526u, depth + 1u); else { c.pc = 0x003636C0u; return; } if (c.pc != 0x003AC1BCu) [[unlikely]] return; }
L_003AC1BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003AC520; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4962u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003AC520; } }
L_003AC1D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u - 1u);  if (t) { goto L_003AC520; } }
L_003AC1E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC1E8u); set32(c.r[4], 0u + 134u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x003AC1E8u) [[unlikely]] return; }
L_003AC1E8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4966u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003AC520; } }
    set32(c.r[2], 0u + 300u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4962u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003AC520; } }
    c.budget -= 1;
L_003AC230:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC238u); set32(c.r[4], 0u + 134u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x003AC238u) [[unlikely]] return; }
L_003AC238:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003AC270; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4962u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003AC520; } }
L_003AC270:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.r[1].d[0] = c.r[2].sd[0] < 240ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003AC520; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC28Cu);  if (depth < kMaxDepth) unit_0098(c, 526u, depth + 1u); else { c.pc = 0x003636C0u; return; } if (c.pc != 0x003AC28Cu) [[unlikely]] return; }
L_003AC28C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003AC520; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4962u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003AC520; } }
L_003AC2A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u - 1u);  if (t) { goto L_003AC520; } }
L_003AC2B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC2B8u); set32(c.r[4], 0u + 133u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x003AC2B8u) [[unlikely]] return; }
L_003AC2B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4966u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003AC520; } }
    set32(c.r[2], 0u + 300u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4962u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003AC520; } }
    c.budget -= 1;
L_003AC300:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC308u); set32(c.r[4], 0u + 133u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x003AC308u) [[unlikely]] return; }
L_003AC308:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003AC340; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4962u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003AC520; } }
L_003AC340:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.r[1].d[0] = c.r[2].sd[0] < 240ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003AC520; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC35Cu);  if (depth < kMaxDepth) unit_0098(c, 526u, depth + 1u); else { c.pc = 0x003636C0u; return; } if (c.pc != 0x003AC35Cu) [[unlikely]] return; }
L_003AC35C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003AC520; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4962u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003AC520; } }
L_003AC378:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u - 1u);  if (t) { goto L_003AC520; } }
L_003AC380:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC388u); set32(c.r[4], 0u + 141u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x003AC388u) [[unlikely]] return; }
L_003AC388:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4966u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003AC520; } }
    set32(c.r[2], 0u + 300u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4962u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003AC520; } }
    c.budget -= 1;
L_003AC3D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC3D8u); set32(c.r[4], 0u + 141u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x003AC3D8u) [[unlikely]] return; }
L_003AC3D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003AC410; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4962u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003AC520; } }
L_003AC410:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.r[1].d[0] = c.r[2].sd[0] < 240ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003AC520; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC42Cu);  if (depth < kMaxDepth) unit_0098(c, 526u, depth + 1u); else { c.pc = 0x003636C0u; return; } if (c.pc != 0x003AC42Cu) [[unlikely]] return; }
L_003AC42C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003AC520; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4962u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003AC520; } }
L_003AC448:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u - 1u);  if (t) { goto L_003AC520; } }
L_003AC450:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC458u); set32(c.r[4], 0u + 154u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x003AC458u) [[unlikely]] return; }
L_003AC458:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4966u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003AC520; } }
    set32(c.r[2], 0u + 300u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4962u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003AC520; } }
    c.budget -= 1;
L_003AC4A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC4A8u); set32(c.r[4], 0u + 154u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x003AC4A8u) [[unlikely]] return; }
L_003AC4A8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003AC4E0; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4962u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003AC520; } }
L_003AC4E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.r[1].d[0] = c.r[2].sd[0] < 240ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003AC520; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC4FCu);  if (depth < kMaxDepth) unit_0098(c, 526u, depth + 1u); else { c.pc = 0x003636C0u; return; } if (c.pc != 0x003AC4FCu) [[unlikely]] return; }
L_003AC4FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003AC520; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4962u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003AC520; } }
L_003AC518:
    set32(c.r[16], 0u - 1u);
    c.budget -= 2;
L_003AC520:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_003AC528:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AC540:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[2], c.r[2].w[0] - 13008u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003AC000u < 16384u) { entry = entries_00AB[(t - 0x003AC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003AC560:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], 0u + 2u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 12176u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    st8((c.r[4].w[0] + 271u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 41u)));
    c.budget -= 18;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003AC5E0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 42u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003AC5E0; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[2], c.r[2].w[0] - 27920u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] - 80u);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC5D8u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x003AC5D8u) [[unlikely]] return; }
L_003AC5D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AC608; } }
L_003AC5E0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 28128u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] - 80u);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC608u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x003AC608u) [[unlikely]] return; }
L_003AC608:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC610u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 130u, depth + 1u); else { c.pc = 0x0021DDA0u; return; } if (c.pc != 0x003AC610u) [[unlikely]] return; }
L_003AC610:
    st32((c.r[16].w[0] + 8664u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[16].w[0] + 8668u), 0u);
    set32(c.r[3], c.r[3].w[0] + 14384u);
    st32((c.r[16].w[0] + 8520u), 0u);
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 8524u), 0u);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[4], c.r[4].w[0] << 7);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[16].w[0] + 1608u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003AC658; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8661u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 515u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003AC670; } }
L_003AC658:
    set32(c.r[2], ld32((c.r[16].w[0] + 1608u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 106u)));
    st8((c.r[16].w[0] + 8661u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 515u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 8680u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_003AC670:
    set32(c.r[2], ld32((c.r[16].w[0] + 1608u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 100u)));
    st16((c.r[16].w[0] + 834u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 832u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 1608u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 102u)));
    st16((c.r[16].w[0] + 836u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 1608u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 104u)));
    st8((c.r[16].w[0] + 502u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 1608u)));
    c.f[0] = ld32((c.r[2].w[0] + 68u));
    st32((c.r[16].w[0] + 256u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1608u)));
    c.f[0] = ld32((c.r[2].w[0] + 72u));
    st32((c.r[16].w[0] + 260u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    st8((c.r[16].w[0] + 268u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8663u)));
    st8((c.r[16].w[0] + 269u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    st8((c.r[16].w[0] + 270u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 264u), c.r[16].w[0]);
    st8((c.r[16].w[0] + 747u), static_cast<std::uint8_t>(0u));
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC6DCu); st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0036(c, 145u, depth + 1u); else { c.pc = 0x001DB830u; return; } if (c.pc != 0x003AC6DCu) [[unlikely]] return; }
L_003AC6DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC6E4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 148u, depth + 1u); else { c.pc = 0x001DB900u; return; } if (c.pc != 0x003AC6E4u) [[unlikely]] return; }
L_003AC6E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC6ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 135u, depth + 1u); else { c.pc = 0x002A9EB0u; return; } if (c.pc != 0x003AC6ECu) [[unlikely]] return; }
L_003AC6EC:
    set32(c.r[2], 0u + 12u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    st8((c.r[16].w[0] + 503u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = 0ull | 32768ull;
    st16((c.r[16].w[0] + 562u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = 0ull | 62464ull;
    st16((c.r[16].w[0] + 566u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] + 17488u);
    st32((c.r[16].w[0] + 80u), 0u);
    set32(c.r[3], 0u - 1u);
    st32((c.r[16].w[0] + 88u), 0u);
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 104u), 0u);
    st32((c.r[16].w[0] + 168u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 1236u), c.r[3].w[0]);
    st8((c.r[16].w[0] + 963u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 504u), 0u);
    st32((c.r[16].w[0] + 508u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 22;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003AC780; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8684u)));
    set32(c.r[3], c.r[3].w[0] + 12912u);
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    st16((c.r[16].w[0] + 496u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 496u)));
    st16((c.r[16].w[0] + 498u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 496u)));
    st16((c.r[16].w[0] + 500u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 15;
L_003AC780:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 800u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[2], c.r[2].w[0] - 13312u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC7A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AC7A8u) [[unlikely]] return; }
L_003AC7A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AC7C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    st32((c.r[4].w[0] + 128u), c.f[3]);
    st32((c.r[4].w[0] + 132u), c.f[2]);
    st32((c.r[4].w[0] + 136u), c.f[1]);
    st32((c.r[4].w[0] + 140u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 80u)));
    st32((c.r[4].w[0] + 1272u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 84u)));
    st32((c.r[4].w[0] + 1276u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 88u)));
    st32((c.r[4].w[0] + 1280u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 22;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003AC828; } }
    set32(c.r[2], 0u + 1000u);
    st16((c.r[16].w[0] + 496u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 498u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 500u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_003AC828:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC830u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 106u, depth + 1u); else { c.pc = 0x003AD3A0u; return; } if (c.pc != 0x003AC830u) [[unlikely]] return; }
L_003AC830:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[2], c.r[2].w[0] - 13200u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC850u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AC850u) [[unlikely]] return; }
L_003AC850:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003AC918; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003AC880; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC878u);  if (depth < kMaxDepth) unit_00AB(c, 96u, depth + 1u); else { c.pc = 0x003AD120u; return; } if (c.pc != 0x003AC878u) [[unlikely]] return; }
L_003AC878:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AC918; } }
L_003AC880:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 776u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003AC918; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 564u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003AC900; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1810u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003AC900; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC8B0u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x003AC8B0u) [[unlikely]] return; }
L_003AC8B0:
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003AC900; } }
    set32(c.r[2], 0u + 600u);
    st16((c.r[16].w[0] + 1810u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 886u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003AC8F8; } }
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[1].d[0] = c.r[2].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003AC8F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC8ECu); set32(c.r[5], 0u + 17u);  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x003AC8ECu) [[unlikely]] return; }
L_003AC8EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AC900; } }
    c.budget -= 1;
L_003AC8F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC900u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 202u, depth + 1u); else { c.pc = 0x0023B490u; return; } if (c.pc != 0x003AC900u) [[unlikely]] return; }
L_003AC900:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1810u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003AC918; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 1810u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_003AC918:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC920u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 354u, depth + 1u); else { c.pc = 0x001BB8A0u; return; } if (c.pc != 0x003AC920u) [[unlikely]] return; }
L_003AC920:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC928u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 459u, depth + 1u); else { c.pc = 0x001C57C0u; return; } if (c.pc != 0x003AC928u) [[unlikely]] return; }
L_003AC928:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AC940:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[8], 0u + 2u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    st32((c.r[4].w[0] + 128u), c.f[3]);
    st32((c.r[4].w[0] + 132u), c.f[2]);
    st32((c.r[4].w[0] + 136u), c.f[1]);
    st32((c.r[4].w[0] + 140u), c.f[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 80u)));
    st32((c.r[4].w[0] + 1272u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 84u)));
    st32((c.r[4].w[0] + 1276u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 88u)));
    st32((c.r[4].w[0] + 1280u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 25;
    { const bool t = c.r[2].d[0] != c.r[8].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003ACF58; } }
    c.r[7].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 498u)));
    set32(c.r[3], c.r[3].w[0] - 26368u);
    set32(c.r[6], c.r[7].w[0] - 80u);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 3);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[19], c.r[3].w[0] + c.r[5].w[0]);  if (t) { goto L_003ACA00; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 13088u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC9E8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AC9E8u) [[unlikely]] return; }
L_003AC9E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC9F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 354u, depth + 1u); else { c.pc = 0x001BB8A0u; return; } if (c.pc != 0x003AC9F0u) [[unlikely]] return; }
L_003AC9F0:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003ACF88; } }
L_003ACA00:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003ACF10; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[8].d[0];  if (t) { goto L_003ACED0; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_003ACB90; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003ACA38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003ACF40; } }
    c.budget -= 1;
L_003ACA38:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43370000u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 728u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 732u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 736u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], c.r[2].w[0] - 80u);
    set32(c.r[2], c.r[4].w[0] << (c.r[2].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & 1157ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003ACB88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACA7Cu);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x003ACA7Cu) [[unlikely]] return; }
L_003ACA7C:
    set32(c.r[3], 0u + 14u);
    mmi::divu(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACA98u); st32((c.r[16].w[0] + 92u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x003ACA98u) [[unlikely]] return; }
L_003ACA98:
    set32(c.r[3], 0u + 29u);
    mmi::divu(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACAB4u); st32((c.r[16].w[0] + 100u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x003ACAB4u) [[unlikely]] return; }
L_003ACAB4:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003ACAD0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 4;
L_003ACAD0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003ACB00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACAE8u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x003ACAE8u) [[unlikely]] return; }
L_003ACAE8:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003ACB00; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st32((c.r[16].w[0] + 92u), c.r[2].w[0]);
    c.budget -= 3;
L_003ACB00:
    c.f[0] = ld32((c.r[16].w[0] + 2016u));
    c.f[2] = 0u;
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 2020u));
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 2024u));
    st32((c.r[16].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    c.f[3] = ld32((c.r[16].w[0] + 56u));
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 17;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_003ACB90; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003ACB70; } }
    st32((c.r[16].w[0] + 104u), c.f[2]);
    c.budget -= 2;
L_003ACB70:
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.f[12] = ld32((c.r[16].w[0] + 104u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACB80u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x003ACB80u) [[unlikely]] return; }
L_003ACB80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003ACB90; } }
L_003ACB88:
    st32((c.r[16].w[0] + 92u), 0u);
    st32((c.r[16].w[0] + 100u), 0u);
    c.budget -= 2;
L_003ACB90:
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 88u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[3], c.r[3].w[0] - 80u);
    set32(c.r[2], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & 1157ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003ACC90; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003ACC90; } }
    c.f[1] = ld32((c.r[16].w[0] + 2016u));
    c.f[0] = 0u;
    st32((c.r[16].w[0] + 48u), c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 2020u));
    st32((c.r[16].w[0] + 52u), c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 2024u));
    st32((c.r[16].w[0] + 56u), c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    c.f[2] = ld32((c.r[16].w[0] + 48u));
    c.f[3] = ld32((c.r[16].w[0] + 56u));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[2] = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 18;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003ACC88; } }
    c.f[12] = ld32((c.r[16].w[0] + 104u));
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACC30u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x003ACC30u) [[unlikely]] return; }
L_003ACC30:
    c.f[1] = ld32((c.r[16].w[0] + 1008u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = c.r[2].w[0];
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    set32(c.r[5], c.r[16].w[0] + 48u);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACC58u); st32((c.r[16].w[0] + 52u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x003ACC58u) [[unlikely]] return; }
L_003ACC58:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 32u);  if (t) { goto L_003ACC90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACC70u);  if (depth < kMaxDepth) unit_0011(c, 196u, depth + 1u); else { c.pc = 0x00146480u; return; } if (c.pc != 0x003ACC70u) [[unlikely]] return; }
L_003ACC70:
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_003ACC90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 728u), c.r[2].w[0]);  if (t) { goto L_003ACC90; } }
L_003ACC88:
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_003ACC90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[16].w[0] + 728u));
    c.f[2] = c.r[2].w[0];
    c.f[1] = 0u;
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    st32((c.r[16].w[0] + 728u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 732u));
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    st32((c.r[16].w[0] + 732u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 728u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003ACDA8; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], 0u + 104u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003ACD08; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[2], c.r[3].w[0] - 2u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_003ACCF8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003ACD08; } }
    c.budget -= 1;
L_003ACCF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 728u), c.r[2].w[0]);  if (t) { goto L_003ACF40; } }
    c.budget -= 1;
L_003ACD08:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[4], c.r[16].w[0] + 1984u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACD1Cu); st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003ACD1Cu) [[unlikely]] return; }
L_003ACD1C:
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003ACD60; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003ACD30:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACD40u); set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003ACD40u) [[unlikely]] return; }
L_003ACD40:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACD4Cu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0045(c, 210u, depth + 1u); else { c.pc = 0x00216220u; return; } if (c.pc != 0x003ACD4Cu) [[unlikely]] return; }
L_003ACD4C:
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ACD30u | kUnwind; return; } goto L_003ACD30; } }
L_003ACD60:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 21u)));
    c.r[1].d[0] = c.r[2].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003ACF40; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 99u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003ACD90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACD88u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x003ACD88u) [[unlikely]] return; }
L_003ACD88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003ACF40; } }
L_003ACD90:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACD9Cu); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x003ACD9Cu) [[unlikely]] return; }
L_003ACD9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003ACF40; } }
    c.budget -= 1;
L_003ACDA8:
    c.f[0] = ld32((c.r[16].w[0] + 732u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003ACF40; } }
    c.f[0] = ld32((c.r[19].w[0] + 8u));
    st32((c.r[16].w[0] + 732u), c.f[0]);
    set32(c.r[17], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACDCCu); set32(c.r[18], ld32((c.r[19].w[0])));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x003ACDCCu) [[unlikely]] return; }
L_003ACDCC:
    c.r[2].d[0] = c.r[2].d[0] & 63ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACDD8u); set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x003ACDD8u) [[unlikely]] return; }
L_003ACDD8:
    c.r[3].d[0] = c.r[2].d[0] & 31ull;
    set32(c.r[4], c.r[16].w[0] + 1984u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(24ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[6].d[0] = c.r[3].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACE04u); set32(c.r[5], c.r[18].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0045(c, 212u, depth + 1u); else { c.pc = 0x00216350u; return; } if (c.pc != 0x003ACE04u) [[unlikely]] return; }
L_003ACE04:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], 0u + 104u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003ACE28; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003ACE58; } }
L_003ACE28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACE30u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x003ACE30u) [[unlikely]] return; }
L_003ACE30:
    c.r[2].d[0] = c.r[2].d[0] & 31ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(20ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003ACE58; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACE54u); set32(c.r[5], c.r[18].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0046(c, 12u, depth + 1u); else { c.pc = 0x002181E0u; return; } if (c.pc != 0x003ACE54u) [[unlikely]] return; }
L_003ACE54:
    c.budget -= 1;
L_003ACE58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[16].w[0] + 736u));
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 736u), c.f[1]);  if (t) { goto L_003ACF40; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    st32((c.r[16].w[0] + 736u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 21u)));
    c.r[1].d[0] = c.r[2].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003ACF40; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 99u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003ACEB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACEACu); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x003ACEACu) [[unlikely]] return; }
L_003ACEAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003ACF40; } }
    c.budget -= 1;
L_003ACEB8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACEC4u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x003ACEC4u) [[unlikely]] return; }
L_003ACEC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003ACF40; } }
    c.budget -= 1;
L_003ACED0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 13088u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACEECu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003ACEECu) [[unlikely]] return; }
L_003ACEEC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003ACF08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACF04u);  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x003ACF04u) [[unlikely]] return; }
L_003ACF04:
    c.budget -= 1;
L_003ACF08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003ACF88; } }
L_003ACF10:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 568u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 578u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 808u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 498u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 500u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 832u)));
    st16((c.r[16].w[0] + 834u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 830u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 1216u), 0u);
    st32((c.r[16].w[0] + 1220u), 0u);
    c.budget -= 12;
L_003ACF40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACF48u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 354u, depth + 1u); else { c.pc = 0x001BB8A0u; return; } if (c.pc != 0x003ACF48u) [[unlikely]] return; }
L_003ACF48:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003ACF88; } }
    c.budget -= 1;
L_003ACF58:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[2], c.r[2].w[0] - 13088u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACF78u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003ACF78u) [[unlikely]] return; }
L_003ACF78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACF80u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 354u, depth + 1u); else { c.pc = 0x001BB8A0u; return; } if (c.pc != 0x003ACF80u) [[unlikely]] return; }
L_003ACF80:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003ACF88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003ACFB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 20u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003AD070; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003AD038; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003AD060; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 513u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003AD018; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 515u));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 274u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003AD060; } }
    c.budget -= 1;
L_003AD018:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 515u));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 38u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 38u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003AD060; } }
    c.budget -= 1;
L_003AD038:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 513u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003AD060; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 515u));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 38u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[3].w[0] + 38u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
L_003AD060:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD068u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 42u, depth + 1u); else { c.pc = 0x001C8A60u; return; } if (c.pc != 0x003AD068u) [[unlikely]] return; }
L_003AD068:
    set32(c.r[3], 0u - 1u);
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003AD070:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AD080:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003AD110; } }
    c.r[4].d[0] = ld16((c.r[16].w[0] + 564u));
    set32(c.r[3], 0u - 129u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AD110; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 834u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_003AD0D0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 832u)));
    st16((c.r[16].w[0] + 834u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 830u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
L_003AD0D0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 808u)));
    c.r[2].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_003AD0E8; } }
    st8((c.r[16].w[0] + 808u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003AD0E8:
    st8((c.r[16].w[0] + 568u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 578u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 1220u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD108u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0075(c, 31u, depth + 1u); else { c.pc = 0x002D4A30u; return; } if (c.pc != 0x003AD108u) [[unlikely]] return; }
L_003AD108:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD110u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 44u, depth + 1u); else { c.pc = 0x002D5100u; return; } if (c.pc != 0x003AD110u) [[unlikely]] return; }
L_003AD110:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AD120:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u - 1u);
    st8((c.r[4].w[0] + 516u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 776u)));
    c.budget -= 12;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003AD158; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD158u);  if (depth < kMaxDepth) unit_004E(c, 205u, depth + 1u); else { c.pc = 0x0023B530u; return; } if (c.pc != 0x003AD158u) [[unlikely]] return; }
L_003AD158:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 513u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AD180; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 515u));
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 274u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003AD198; } }
L_003AD180:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 515u));
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 38u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[4].w[0] + 38u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_003AD198:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AD1B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 26368u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[3], 0u + 2u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[7], c.r[6].w[0] - 80u);
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 3);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    c.budget -= 18;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);  if (t) { goto L_003AD380; } }
    c.f[3] = ld32((c.r[18].w[0] + 32u));
    set32(c.r[2], 0u + 1u);
    c.f[2] = ld32((c.r[18].w[0] + 36u));
    c.f[1] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = ld32((c.r[18].w[0] + 44u));
    st32((c.r[18].w[0] + 128u), c.f[3]);
    st32((c.r[18].w[0] + 132u), c.f[2]);
    st32((c.r[18].w[0] + 136u), c.f[1]);
    st32((c.r[18].w[0] + 140u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 80u)));
    st32((c.r[18].w[0] + 1272u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 84u)));
    st32((c.r[18].w[0] + 1276u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 88u)));
    st32((c.r[18].w[0] + 1280u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    c.budget -= 18;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003AD270; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AD250; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AD370; } }
L_003AD250:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[18].w[0] + 166u), static_cast<std::uint16_t>(0u));
    st32((c.r[18].w[0] + 732u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 736u), c.r[2].w[0]);
    st8((c.r[18].w[0] + 284u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
L_003AD270:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[18].w[0] + 732u));
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[18].w[0] + 732u), c.f[1]);  if (t) { goto L_003AD370; } }
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 732u), c.f[0]);
    set32(c.r[17], ld32((c.r[5].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD2B8u); set32(c.r[16], ld32((c.r[5].w[0] + 4u)));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x003AD2B8u) [[unlikely]] return; }
L_003AD2B8:
    c.r[2].d[0] = c.r[2].d[0] & 63ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD2C4u); set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x003AD2C4u) [[unlikely]] return; }
L_003AD2C4:
    c.r[3].d[0] = c.r[2].d[0] & 31ull;
    set32(c.r[4], c.r[18].w[0] + 1984u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(28ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[6].d[0] = c.r[3].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD2F0u); set32(c.r[5], c.r[17].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0045(c, 212u, depth + 1u); else { c.pc = 0x00216350u; return; } if (c.pc != 0x003AD2F0u) [[unlikely]] return; }
L_003AD2F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD2F8u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x003AD2F8u) [[unlikely]] return; }
L_003AD2F8:
    c.r[2].d[0] = c.r[2].d[0] & 31ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(26ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003AD338; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 166u)));
    c.r[1].d[0] = c.r[2].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003AD338; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st16((c.r[18].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD334u); set32(c.r[5], c.r[17].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0046(c, 12u, depth + 1u); else { c.pc = 0x002181E0u; return; } if (c.pc != 0x003AD334u) [[unlikely]] return; }
L_003AD334:
    c.budget -= 1;
L_003AD338:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[18].w[0] + 736u));
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[18].w[0] + 736u), c.f[1]);  if (t) { goto L_003AD370; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 736u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD370u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x003AD370u) [[unlikely]] return; }
L_003AD370:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD378u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 354u, depth + 1u); else { c.pc = 0x001BB8A0u; return; } if (c.pc != 0x003AD378u) [[unlikely]] return; }
L_003AD378:
    set32(c.r[3], 0u + 1u);
    st8((c.r[18].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003AD380:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003AD3A0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 830u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AD3D0; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 830u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003AD3D0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 832u)));
    st16((c.r[4].w[0] + 834u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_003AD3D0:
    c.f[2] = ld32((c.r[4].w[0] + 1216u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_003AD408; } }
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 1216u), c.f[0]);  if (t) { goto L_003AD408; } }
    st32((c.r[4].w[0] + 1216u), c.f[1]);
    st8((c.r[4].w[0] + 808u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_003AD408:
    c.f[2] = ld32((c.r[4].w[0] + 1220u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_003AD440; } }
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 1220u), c.f[0]);  if (t) { goto L_003AD440; } }
    st32((c.r[4].w[0] + 1220u), c.f[1]);
    c.budget -= 2;
L_003AD440:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003AD450:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003AD480; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    c.f[2] = ld32((c.r[4].w[0] + 32u));
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    c.f[3] = ld32((c.r[2].w[0] + 656u));
    c.f[1] = ld32((c.r[2].w[0] + 664u));
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.f[0] = fp::sub(c.f[1], c.f[0]);  if (t) { goto L_003AD4A0; } }
L_003AD480:
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    c.f[2] = ld32((c.r[4].w[0] + 32u));
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    c.f[3] = ld32((c.r[2].w[0] + 640u));
    c.f[1] = ld32((c.r[2].w[0] + 648u));
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 8;
L_003AD4A0:
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.budget -= 3;
    { c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00126110u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 161u, depth); }
L_003AD4B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003AD4F8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    c.f[4] = ld32((c.r[4].w[0] + 32u));
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    c.f[5] = ld32((c.r[2].w[0] + 656u));
    c.f[3] = ld32((c.r[2].w[0] + 660u));
    c.f[1] = ld32((c.r[2].w[0] + 664u));
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    c.f[20] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.f[0] = fp::sub(c.f[1], c.f[0]);  if (t) { goto L_003AD520; } }
L_003AD4F8:
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    c.f[4] = ld32((c.r[4].w[0] + 32u));
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    c.f[5] = ld32((c.r[2].w[0] + 640u));
    c.f[3] = ld32((c.r[2].w[0] + 644u));
    c.f[1] = ld32((c.r[2].w[0] + 648u));
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    c.f[20] = fp::sub(c.f[3], c.f[2]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 10;
L_003AD520:
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD52Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003AD52Cu) [[unlikely]] return; }
L_003AD52C:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD538u); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003AD538u) [[unlikely]] return; }
L_003AD538:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AD550:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003AD588; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    c.f[2] = ld32((c.r[4].w[0] + 32u));
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    c.f[3] = ld32((c.r[2].w[0] + 656u));
    c.f[1] = ld32((c.r[2].w[0] + 664u));
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.f[0] = fp::sub(c.f[1], c.f[0]);  if (t) { goto L_003AD5A8; } }
L_003AD588:
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    c.f[2] = ld32((c.r[4].w[0] + 32u));
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    c.f[3] = ld32((c.r[2].w[0] + 640u));
    c.f[1] = ld32((c.r[2].w[0] + 648u));
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 8;
L_003AD5A8:
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD5B4u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003AD5B4u) [[unlikely]] return; }
L_003AD5B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44FA0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003AD5D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { goto L_003AD650; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43F40000u);
    c.f[0] = c.r[2].w[0];
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    c.f[2] = fp::sub(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x44B50000u);  if (t) { goto L_003AD648; } }
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::add(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003AD648; } }
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003AD648; } }
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_003AD648; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AD6A8; } }
    c.budget -= 1;
L_003AD648:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003AD6A8; } }
L_003AD650:
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    set32(c.r[6], c.r[4].w[0] + 32u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD664u); set32(c.r[5], c.r[2].w[0] + 656u);  if (depth < kMaxDepth) unit_0000(c, 239u, depth + 1u); else { c.pc = 0x00102678u; return; } if (c.pc != 0x003AD664u) [[unlikely]] return; }
L_003AD664:
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    c.f[1] = ld32((c.r[29].w[0] + 40u));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD678u); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003AD678u) [[unlikely]] return; }
L_003AD678:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 36u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD688u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003AD688u) [[unlikely]] return; }
L_003AD688:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[1], c.f[20]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_003AD6A8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003AD6A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003AD6C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { goto L_003AD768; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43F40000u);
    c.f[0] = c.r[2].w[0];
    c.f[3] = ld32((c.r[16].w[0] + 32u));
    c.f[2] = fp::sub(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x44B50000u);  if (t) { goto L_003AD738; } }
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::add(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003AD738; } }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003AD738; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003AD760; } }
    c.budget -= 1;
L_003AD738:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003AD758; } }
    st32((c.r[3].w[0] + 12u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    st32((c.r[2].w[0] + 16u), c.r[16].w[0]);
    c.budget -= 4;
L_003AD758:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003AD7E8; } }
L_003AD760:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003AD7E8; } }
L_003AD768:
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[6], c.r[16].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD77Cu); set32(c.r[5], c.r[2].w[0] + 656u);  if (depth < kMaxDepth) unit_0000(c, 239u, depth + 1u); else { c.pc = 0x00102678u; return; } if (c.pc != 0x003AD77Cu) [[unlikely]] return; }
L_003AD77C:
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    c.f[1] = ld32((c.r[29].w[0] + 56u));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD790u); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003AD790u) [[unlikely]] return; }
L_003AD790:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 52u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD7A0u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003AD7A0u) [[unlikely]] return; }
L_003AD7A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::add(c.f[1], c.f[20]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003AD7E0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003AD7D8; } }
    st32((c.r[3].w[0] + 12u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    st32((c.r[2].w[0] + 16u), c.r[16].w[0]);
    c.budget -= 3;
L_003AD7D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003AD7E8; } }
L_003AD7E0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003AD7E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003AD800:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 13680u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[16], c.r[6].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD848u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x003AD848u) [[unlikely]] return; }
L_003AD848:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003AD908; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], 0u + 18u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] - 13674u);
    set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.r[4].d[0] = ld8((c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[3], c.r[3].w[0] - 9936u);
    set32(c.r[2], c.r[2].w[0] - 13673u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[17].w[0] + 12u), c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 20;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003AD8A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AD8B8; } }
L_003AD8A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[2], c.r[2].w[0] - 7360u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 168u), c.r[2].w[0]);  if (t) { goto L_003AD8C8; } }
L_003AD8B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[2], c.r[2].w[0] - 7040u);
    st32((c.r[17].w[0] + 168u), c.r[2].w[0]);
    c.budget -= 4;
L_003AD8C8:
    st32((c.r[17].w[0] + 24u), c.r[20].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD8DCu); st32((c.r[17].w[0] + 28u), c.r[19].w[0]);  if (depth < kMaxDepth) unit_006B(c, 31u, depth + 1u); else { c.pc = 0x002AC5D0u; return; } if (c.pc != 0x003AD8DCu) [[unlikely]] return; }
L_003AD8DC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[3], c.r[3].w[0] - 13676u);
    set32(c.r[2], c.r[2].w[0] - 13675u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[20].w[0] + 176u)));
    c.r[6].d[0] = ld8((c.r[3].w[0]));
    c.r[7].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD908u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x003AD908u) [[unlikely]] return; }
L_003AD908:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003AD930:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[2], c.r[2].w[0] - 13152u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003AC000u < 16384u) { entry = entries_00AB[(t - 0x003AC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003AD950:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x008D0000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[6], 0u + 21728u);
    set32(c.r[5], c.r[5].w[0] - 1360u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[3].w[0] + 176u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 188u)));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 4u));
    mmi::mult(c, 0, c.r[7].w[0], c.r[6].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 96u));
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 100u));
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 104u));
    c.budget -= 24;
    { st32((c.r[4].w[0] + 40u), c.f[0]);  goto L_003AD9B0; }
L_003AD9B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 13136u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 14;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD9E8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AD9E8u) [[unlikely]] return; }
L_003AD9E8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003ADA18; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 750u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003ADA18; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 7u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_003ADA18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003ADA38; } }
L_003ADA18:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 769u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003ADA38; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 7u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_003ADA38; } }
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003ADA38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003ADA50:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 7u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 850u));
    st8((c.r[4].w[0] + 285u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 1236u)));
    set32(c.r[3], c.r[3].w[0] >> (c.r[6].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8513u)));
    c.budget -= 18;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003ADAB0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 757u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003ADAC8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003ADAC8; } }
    c.budget -= 1;
L_003ADAB0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADABCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 151u, depth + 1u); else { c.pc = 0x003AE2C0u; return; } if (c.pc != 0x003ADABCu) [[unlikely]] return; }
L_003ADABC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AE0D8; } }
    c.budget -= 1;
L_003ADAC8:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 850u));
    c.r[2].d[0] = c.r[2].d[0] & 240ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003ADAE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADAE0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 151u, depth + 1u); else { c.pc = 0x003AE2C0u; return; } if (c.pc != 0x003ADAE0u) [[unlikely]] return; }
L_003ADAE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AE0D8; } }
L_003ADAE8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[2], c.r[18].w[0] + 304u);  if (t) { goto L_003ADEE0; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_003ADE88; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003ADD38; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003ADC98; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003ADB28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003ADEE0; } }
L_003ADB28:
    set32(c.r[3], c.r[4].w[0] + 1u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 41u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00640000u);  if (t) { goto L_003ADB58; } }
    set32(c.r[3], c.r[3].w[0] - 13216u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_003ADB68; } }
    c.budget -= 1;
L_003ADB58:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[3], c.r[3].w[0] - 13632u);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 4;
L_003ADB68:
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.f[3] = ld32((c.r[3].w[0] + 16u));
    c.f[2] = ld32((c.r[3].w[0] + 20u));
    c.f[1] = ld32((c.r[3].w[0] + 24u));
    c.f[0] = ld32((c.r[3].w[0] + 28u));
    st32((c.r[18].w[0] + 48u), c.f[3]);
    st32((c.r[18].w[0] + 52u), c.f[2]);
    st32((c.r[18].w[0] + 56u), c.f[1]);
    st32((c.r[18].w[0] + 60u), c.f[0]);
    c.f[3] = ld32((c.r[18].w[0] + 48u));
    c.f[2] = ld32((c.r[18].w[0] + 52u));
    c.f[1] = ld32((c.r[18].w[0] + 56u));
    c.f[0] = ld32((c.r[18].w[0] + 60u));
    st32((c.r[18].w[0] + 32u), c.f[3]);
    st32((c.r[18].w[0] + 36u), c.f[2]);
    st32((c.r[18].w[0] + 40u), c.f[1]);
    st32((c.r[18].w[0] + 44u), c.f[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2u)));
    st32((c.r[18].w[0] + 92u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 4u)));
    st32((c.r[18].w[0] + 96u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 84u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 6u)));
    st32((c.r[18].w[0] + 100u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 88u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 41u)));
    c.budget -= 34;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 4u);  if (t) { goto L_003ADC98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003ADEE0; } }
L_003ADBF8:
    set32(c.r[3], c.r[4].w[0] - c.r[5].w[0]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[2].w[0] + 8u), c.f[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + 32u);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.f[3] = ld32((c.r[18].w[0] + 48u));
    c.f[2] = ld32((c.r[18].w[0] + 52u));
    c.f[1] = ld32((c.r[18].w[0] + 56u));
    c.f[0] = ld32((c.r[18].w[0] + 60u));
    st32((c.r[18].w[0] + 32u), c.f[3]);
    st32((c.r[18].w[0] + 36u), c.f[2]);
    st32((c.r[18].w[0] + 40u), c.f[1]);
    st32((c.r[18].w[0] + 44u), c.f[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.f[3] = ld32((c.r[3].w[0] + 16u));
    c.f[2] = ld32((c.r[3].w[0] + 20u));
    c.f[1] = ld32((c.r[3].w[0] + 24u));
    c.f[0] = ld32((c.r[3].w[0] + 28u));
    st32((c.r[18].w[0] + 48u), c.f[3]);
    st32((c.r[18].w[0] + 52u), c.f[2]);
    st32((c.r[18].w[0] + 56u), c.f[1]);
    st32((c.r[18].w[0] + 60u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 92u)));
    st32((c.r[18].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2u)));
    st32((c.r[18].w[0] + 92u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 96u)));
    st32((c.r[18].w[0] + 84u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 4u)));
    st32((c.r[18].w[0] + 96u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 100u)));
    st32((c.r[18].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 6u)));
    st32((c.r[18].w[0] + 100u), c.r[3].w[0]);
    c.budget -= 40;
L_003ADC98:
    set32(c.r[5], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[3], 0u + 9999u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 32u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003ADCD8; } }
    c.f[0] = ld32((c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ADBF8u | kUnwind; return; } goto L_003ADBF8; } }
    c.budget -= 1;
L_003ADCD8:
    set32(c.r[3], 0u + 8u);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 8252u));
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[2].w[0]), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8513u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003ADEE0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    c.f[0] = 0u;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003ADD30; } }
    c.f[0] = ld32((c.r[17].w[0] + 8252u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 8u), c.f[0]);  if (t) { goto L_003ADD38; } }
    c.budget -= 1;
L_003ADD30:
    st32((c.r[2].w[0] + 8u), c.f[0]);
    c.budget -= 2;
L_003ADD38:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8513u)));
    set32(c.r[3], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003ADEE0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[3], c.r[3].w[0] - 13440u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.f[3] = ld32((c.r[3].w[0] + 16u));
    c.f[2] = ld32((c.r[3].w[0] + 20u));
    c.f[1] = ld32((c.r[3].w[0] + 24u));
    c.f[0] = ld32((c.r[3].w[0] + 28u));
    st32((c.r[18].w[0] + 48u), c.f[3]);
    st32((c.r[18].w[0] + 52u), c.f[2]);
    st32((c.r[18].w[0] + 56u), c.f[1]);
    st32((c.r[18].w[0] + 60u), c.f[0]);
    c.f[3] = ld32((c.r[18].w[0] + 48u));
    c.f[2] = ld32((c.r[18].w[0] + 52u));
    c.f[1] = ld32((c.r[18].w[0] + 56u));
    c.f[0] = ld32((c.r[18].w[0] + 60u));
    st32((c.r[18].w[0] + 32u), c.f[3]);
    st32((c.r[18].w[0] + 36u), c.f[2]);
    st32((c.r[18].w[0] + 40u), c.f[1]);
    st32((c.r[18].w[0] + 44u), c.f[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2u)));
    st32((c.r[18].w[0] + 92u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 4u)));
    st32((c.r[18].w[0] + 96u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 84u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 6u)));
    st32((c.r[18].w[0] + 100u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 39;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 8u), 0u);  if (t) { goto L_003ADE88; } }
    c.budget -= 1;
L_003ADDE8:
    set32(c.r[3], c.r[4].w[0] - c.r[5].w[0]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[2].w[0] + 8u), c.f[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + 32u);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.f[3] = ld32((c.r[18].w[0] + 48u));
    c.f[2] = ld32((c.r[18].w[0] + 52u));
    c.f[1] = ld32((c.r[18].w[0] + 56u));
    c.f[0] = ld32((c.r[18].w[0] + 60u));
    st32((c.r[18].w[0] + 32u), c.f[3]);
    st32((c.r[18].w[0] + 36u), c.f[2]);
    st32((c.r[18].w[0] + 40u), c.f[1]);
    st32((c.r[18].w[0] + 44u), c.f[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.f[3] = ld32((c.r[3].w[0] + 16u));
    c.f[2] = ld32((c.r[3].w[0] + 20u));
    c.f[1] = ld32((c.r[3].w[0] + 24u));
    c.f[0] = ld32((c.r[3].w[0] + 28u));
    st32((c.r[18].w[0] + 48u), c.f[3]);
    st32((c.r[18].w[0] + 52u), c.f[2]);
    st32((c.r[18].w[0] + 56u), c.f[1]);
    st32((c.r[18].w[0] + 60u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 92u)));
    st32((c.r[18].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2u)));
    st32((c.r[18].w[0] + 92u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 96u)));
    st32((c.r[18].w[0] + 84u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 4u)));
    st32((c.r[18].w[0] + 96u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 100u)));
    st32((c.r[18].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 6u)));
    st32((c.r[18].w[0] + 100u), c.r[3].w[0]);
    c.budget -= 40;
L_003ADE88:
    set32(c.r[5], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[3], 0u + 9999u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 32u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003ADEC8; } }
    c.f[0] = ld32((c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ADDE8u | kUnwind; return; } goto L_003ADDE8; } }
    c.budget -= 1;
L_003ADEC8:
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 8252u));
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[2].w[0]), c.f[0]);
    c.budget -= 6;
L_003ADEE0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 6u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003ADF20; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003ADF00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003ADF50; } }
L_003ADF00:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8513u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[5].w[0] + 1u);  if (t) { goto L_003ADF50; } }
    set32(c.r[3], 0u + 23u);
    st8((c.r[18].w[0] + 6u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[18].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_003ADF20:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8513u)));
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003ADF50; } }
    st8((c.r[18].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] - 13674u);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[18].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
L_003ADF50:
    c.f[2] = ld32((c.r[17].w[0] + 8252u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003AE0D8; } }
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003AE0D8; } }
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003AE098; } }
    fpu_div(c, 2u, c.f[1], c.f[2]);
    c.f[1] = ld32((c.r[18].w[0] + 48u));
    c.f[0] = ld32((c.r[18].w[0] + 32u));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    fpu_div(c, 1u, c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 32u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 52u));
    c.f[0] = ld32((c.r[18].w[0] + 36u));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    fpu_div(c, 1u, c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 36u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 56u));
    c.f[0] = ld32((c.r[18].w[0] + 40u));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    fpu_div(c, 1u, c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 40u), c.f[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 16);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 16));
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[18].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 16);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 16));
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[18].w[0] + 84u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 100u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 16);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 16));
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[18].w[0] + 88u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[17].w[0] + 8252u));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 68;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 8u), c.f[0]);  if (t) { goto L_003AE0D8; } }
    c.budget -= 1;
L_003AE098:
    st32((c.r[2].w[0] + 8u), c.f[0]);
    c.f[3] = ld32((c.r[18].w[0] + 48u));
    c.f[2] = ld32((c.r[18].w[0] + 52u));
    c.f[1] = ld32((c.r[18].w[0] + 56u));
    c.f[0] = ld32((c.r[18].w[0] + 60u));
    st32((c.r[18].w[0] + 32u), c.f[3]);
    st32((c.r[18].w[0] + 36u), c.f[2]);
    st32((c.r[18].w[0] + 40u), c.f[1]);
    st32((c.r[18].w[0] + 44u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 92u)));
    st32((c.r[18].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    st32((c.r[18].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 100u)));
    st32((c.r[18].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 16;
L_003AE0D8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 326u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[16], c.r[17].w[0] + 326u);  if (t) { goto L_003AE148; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 851u)));
    c.r[2].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[19], 0u + 6u);  if (t) { goto L_003AE100; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AE120; } }
L_003AE100:
    c.r[2].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[19], 0u + 3u);  if (t) { goto L_003AE118; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AE120; } }
    c.budget -= 1;
L_003AE118:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003AE120:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE12Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 31u, depth + 1u); else { c.pc = 0x002AC5D0u; return; } if (c.pc != 0x003AE12Cu) [[unlikely]] return; }
L_003AE12C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE138u); set32(c.r[5], 0u + 206u);  if (depth < kMaxDepth) unit_001A(c, 166u, depth + 1u); else { c.pc = 0x0016AA50u; return; } if (c.pc != 0x003AE138u) [[unlikely]] return; }
L_003AE138:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE144u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003AE144u) [[unlikely]] return; }
L_003AE144:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_003AE148:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE154u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 143u, depth + 1u); else { c.pc = 0x003AE240u; return; } if (c.pc != 0x003AE154u) [[unlikely]] return; }
L_003AE154:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003AE170:
    set32(c.r[3], ld32((c.r[5].w[0] + 1236u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[3], c.r[3].w[0] >> (c.r[5].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003AE190:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[3], 0u + 6u);
    set32(c.r[6], ld32((c.r[5].w[0] + 1236u)));
    set32(c.r[6], c.r[6].w[0] >> (c.r[7].w[0] & 31u));
    c.r[6].d[0] = c.r[6].d[0] & 1ull;
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8512u)));
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[3], 0u - 1u);  if (t) { goto L_003AE1D0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_003AE1D8; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 757u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_003AE1D8; } }
    c.budget -= 1;
L_003AE1D0:
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_003AE1D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003AE1E0:
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 1u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8512u)));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_003AE200; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_003AE218; } }
    c.budget -= 1;
L_003AE200:
    set32(c.r[3], ld32((c.r[5].w[0] + 1236u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[3], c.r[3].w[0] >> (c.r[5].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_003AE218:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003AE220:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003AE230:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC040u | kUnwind; return; } [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_003AE240:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE26Cu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003AE26Cu) [[unlikely]] return; }
L_003AE26C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE274u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x003AE274u) [[unlikely]] return; }
L_003AE274:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE27Cu); set32(c.r[4], ld32((c.r[17].w[0] + 88u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x003AE27Cu) [[unlikely]] return; }
L_003AE27C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE284u); set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x003AE284u) [[unlikely]] return; }
L_003AE284:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE28Cu); set32(c.r[4], ld32((c.r[17].w[0] + 80u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x003AE28Cu) [[unlikely]] return; }
L_003AE28C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE294u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x003AE294u) [[unlikely]] return; }
L_003AE294:
    set32(c.r[5], c.r[17].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE2A0u); set32(c.r[4], c.r[16].w[0] + 336u);  if (depth < kMaxDepth) unit_0000(c, 251u, depth + 1u); else { c.pc = 0x00102880u; return; } if (c.pc != 0x003AE2A0u) [[unlikely]] return; }
L_003AE2A0:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 335u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003AE2C0:
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00640000u);
    st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x008D0000u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] - 13674u);
    set32(c.r[7], 0u + 21728u);
    set32(c.r[6], c.r[6].w[0] - 1360u);
    set32(c.r[8], c.r[8].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[5].w[0] + 176u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 188u)));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 4u)));
    c.r[5].d[0] = ld8((c.r[3].w[0] + 4u));
    mmi::mult(c, 0, c.r[8].w[0], c.r[7].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[5], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 96u));
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 100u));
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 104u));
    st32((c.r[4].w[0] + 40u), c.f[0]);
    st32((c.r[4].w[0] + 80u), 0u);
    st32((c.r[4].w[0] + 84u), 0u);
    c.budget -= 32;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 88u), 0u);  c.pc = t; return; }
L_003AE340:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 285u)));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 850u));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003AE428; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_003AE380; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE374u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 151u, depth + 1u); else { c.pc = 0x003AE2C0u; return; } if (c.pc != 0x003AE374u) [[unlikely]] return; }
L_003AE374:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AE428; } }
    c.budget -= 1;
L_003AE380:
    set32(c.r[3], 0u + 2u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 23u);
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00640000u);
    st32((c.r[17].w[0] + 308u), 0u);
    set32(c.r[3], c.r[3].w[0] - 13216u);
    st32((c.r[17].w[0] + 304u), 0u);
    st32((c.r[17].w[0] + 316u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 316u)));
    c.f[3] = ld32((c.r[3].w[0] + 16u));
    c.f[2] = ld32((c.r[3].w[0] + 20u));
    c.f[1] = ld32((c.r[3].w[0] + 24u));
    c.f[0] = ld32((c.r[3].w[0] + 28u));
    st32((c.r[17].w[0] + 48u), c.f[3]);
    st32((c.r[17].w[0] + 52u), c.f[2]);
    st32((c.r[17].w[0] + 56u), c.f[1]);
    st32((c.r[17].w[0] + 60u), c.f[0]);
    c.f[3] = ld32((c.r[17].w[0] + 48u));
    c.f[2] = ld32((c.r[17].w[0] + 52u));
    c.f[1] = ld32((c.r[17].w[0] + 56u));
    c.f[0] = ld32((c.r[17].w[0] + 60u));
    st32((c.r[17].w[0] + 32u), c.f[3]);
    st32((c.r[17].w[0] + 36u), c.f[2]);
    st32((c.r[17].w[0] + 40u), c.f[1]);
    st32((c.r[17].w[0] + 44u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 316u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2u)));
    st32((c.r[17].w[0] + 92u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 316u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 4u)));
    st32((c.r[17].w[0] + 96u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 84u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 316u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 6u)));
    st32((c.r[17].w[0] + 100u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 88u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 312u), 0u);
    c.budget -= 42;
L_003AE428:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 1236u)));
    set32(c.r[3], c.r[3].w[0] >> (c.r[4].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    st8((c.r[17].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 7u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003AE460; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE450u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 143u, depth + 1u); else { c.pc = 0x003AE240u; return; } if (c.pc != 0x003AE450u) [[unlikely]] return; }
L_003AE450:
    set32(c.r[5], ld32((c.r[17].w[0] + 188u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE45Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 89u, depth + 1u); else { c.pc = 0x002A25C0u; return; } if (c.pc != 0x003AE45Cu) [[unlikely]] return; }
L_003AE45C:
    c.budget -= 1;
L_003AE460:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003AE480:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE4ACu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003AE4ACu) [[unlikely]] return; }
L_003AE4AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE4B4u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x003AE4B4u) [[unlikely]] return; }
L_003AE4B4:
    set32(c.r[5], ld32((c.r[17].w[0] + 188u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE4C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 89u, depth + 1u); else { c.pc = 0x002A25C0u; return; } if (c.pc != 0x003AE4C0u) [[unlikely]] return; }
L_003AE4C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003AE4E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 8064u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE4FCu); set32(c.r[6], 0u + 2176u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003AE4FCu) [[unlikely]] return; }
L_003AE4FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE504u);  if (depth < kMaxDepth) unit_00AB(c, 277u, depth + 1u); else { c.pc = 0x003AF270u; return; } if (c.pc != 0x003AE504u) [[unlikely]] return; }
L_003AE504:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003AE510:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE520u);  if (depth < kMaxDepth) unit_00AB(c, 165u, depth + 1u); else { c.pc = 0x003AE550u; return; } if (c.pc != 0x003AE520u) [[unlikely]] return; }
L_003AE520:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003AE538; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 2u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
L_003AE538:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003AE550:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE560u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x003AE560u) [[unlikely]] return; }
L_003AE560:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[2], c.r[2].w[0] - 13088u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE584u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AE584u) [[unlikely]] return; }
L_003AE584:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003AE590:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE5A8u); st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_006A(c, 292u, depth + 1u); else { c.pc = 0x002ABC40u; return; } if (c.pc != 0x003AE5A8u) [[unlikely]] return; }
L_003AE5A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE5B0u);  if (depth < kMaxDepth) unit_000A(c, 245u, depth + 1u); else { c.pc = 0x0012B850u; return; } if (c.pc != 0x003AE5B0u) [[unlikely]] return; }
L_003AE5B0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003AE5C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE5D0u);  if (depth < kMaxDepth) unit_0045(c, 24u, depth + 1u); else { c.pc = 0x00214260u; return; } if (c.pc != 0x003AE5D0u) [[unlikely]] return; }
L_003AE5D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);  if (t) { goto L_003AE698; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st8((c.r[1].w[0] + 8067u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 54u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[4], c.r[4].w[0] + 8128u);
    st8((c.r[1].w[0] + 8069u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 117u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st8((c.r[1].w[0] + 8117u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], 0u + 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st8((c.r[1].w[0] + 8066u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st8((c.r[1].w[0] + 8065u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st8((c.r[1].w[0] + 8064u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st8((c.r[1].w[0] + 8068u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st8((c.r[1].w[0] + 8118u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st8((c.r[1].w[0] + 8072u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st8((c.r[1].w[0] + 8073u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st8((c.r[1].w[0] + 8074u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE650u); st8((c.r[1].w[0] + 8075u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003AE650u) [[unlikely]] return; }
L_003AE650:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 8836u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE664u); set32(c.r[6], 0u + 1280u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003AE664u) [[unlikely]] return; }
L_003AE664:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[4], c.r[4].w[0] + 7392u);
    set32(c.r[5], c.r[5].w[0] + 8176u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE67Cu); set32(c.r[6], 0u + 660u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x003AE67Cu) [[unlikely]] return; }
L_003AE67C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE684u);  if (depth < kMaxDepth) unit_008F(c, 159u, depth + 1u); else { c.pc = 0x0033DE10u; return; } if (c.pc != 0x003AE684u) [[unlikely]] return; }
L_003AE684:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 2u);
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 82u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_003AE698:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003AE6B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 8118u));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] + 8064u);  if (t) { goto L_003AE6F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE6D8u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_004E(c, 55u, depth + 1u); else { c.pc = 0x00238800u; return; } if (c.pc != 0x003AE6D8u) [[unlikely]] return; }
L_003AE6D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003AE6F8; } }
    set32(c.r[2], 0u + 54u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE6F4u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8069u)));  if (depth < kMaxDepth) unit_004E(c, 35u, depth + 1u); else { c.pc = 0x002382B0u; return; } if (c.pc != 0x003AE6F4u) [[unlikely]] return; }
L_003AE6F4:
    c.budget -= 1;
L_003AE6F8:
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[2], c.r[2].w[0] - 13064u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE718u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AE718u) [[unlikely]] return; }
L_003AE718:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AE730:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 8064u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00CE0000u);  if (t) { goto L_003AE778; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[4], c.r[4].w[0] + 7392u);
    set32(c.r[5], c.r[5].w[0] + 8176u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE75Cu); set32(c.r[6], 0u + 660u);  if (depth < kMaxDepth) unit_0006(c, 189u, depth + 1u); else { c.pc = 0x0011A900u; return; } if (c.pc != 0x003AE75Cu) [[unlikely]] return; }
L_003AE75C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);  if (t) { goto L_003AE788; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 8064u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st8((c.r[1].w[0] + 8064u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_003AE778:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE780u);  if (depth < kMaxDepth) unit_008F(c, 165u, depth + 1u); else { c.pc = 0x0033DF10u; return; } if (c.pc != 0x003AE780u) [[unlikely]] return; }
L_003AE780:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003AE7D0; } }
L_003AE788:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[2], 0u + 46u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8069u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003AE7C8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[5], 0u + 20u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE7C0u); st16((c.r[2].w[0] + 8u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x003AE7C0u) [[unlikely]] return; }
L_003AE7C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AE7D0; } }
L_003AE7C8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st16((c.r[2].w[0] + 8u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_003AE7D0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003AE7E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 10;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003AE810; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AE840; } }
L_003AE810:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 2u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[3].w[0]), c.r[2].d[0]);
    st64((c.r[3].w[0] + 8u), 0ull);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE82Cu); st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0009(c, 25u, depth + 1u); else { c.pc = 0x001246A0u; return; } if (c.pc != 0x003AE82Cu) [[unlikely]] return; }
L_003AE82C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE834u);  if (depth < kMaxDepth) unit_006A(c, 292u, depth + 1u); else { c.pc = 0x002ABC40u; return; } if (c.pc != 0x003AE834u) [[unlikely]] return; }
L_003AE834:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE83Cu);  if (depth < kMaxDepth) unit_000A(c, 245u, depth + 1u); else { c.pc = 0x0012B850u; return; } if (c.pc != 0x003AE83Cu) [[unlikely]] return; }
L_003AE83C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003AE840:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003AE850:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 8065u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[2], c.r[2].w[0] - 13008u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE880u); set32(c.r[4], c.r[4].w[0] + 8064u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AE880u) [[unlikely]] return; }
L_003AE880:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE888u);  if (depth < kMaxDepth) unit_00AB(c, 264u, depth + 1u); else { c.pc = 0x003AF100u; return; } if (c.pc != 0x003AE888u) [[unlikely]] return; }
L_003AE888:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE890u);  if (depth < kMaxDepth) unit_00AB(c, 268u, depth + 1u); else { c.pc = 0x003AF130u; return; } if (c.pc != 0x003AE890u) [[unlikely]] return; }
L_003AE890:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003AE8A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 2u));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003AE9E8; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 2u);  if (t) { goto L_003AE9C8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003AE978; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003AE910; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003AE8E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AEA00; } }
L_003AE8E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE8F0u);  if (depth < kMaxDepth) unit_0045(c, 81u, depth + 1u); else { c.pc = 0x00214AA0u; return; } if (c.pc != 0x003AE8F0u) [[unlikely]] return; }
L_003AE8F0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003AEA00; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003AEA00; } }
    c.budget -= 1;
L_003AE910:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE918u);  if (depth < kMaxDepth) unit_0045(c, 24u, depth + 1u); else { c.pc = 0x00214260u; return; } if (c.pc != 0x003AE918u) [[unlikely]] return; }
L_003AE918:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003AEA00; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 54u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE93Cu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));  if (depth < kMaxDepth) unit_004E(c, 35u, depth + 1u); else { c.pc = 0x002382B0u; return; } if (c.pc != 0x003AE93Cu) [[unlikely]] return; }
L_003AE93C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE944u);  if (depth < kMaxDepth) unit_006A(c, 292u, depth + 1u); else { c.pc = 0x002ABC40u; return; } if (c.pc != 0x003AE944u) [[unlikely]] return; }
L_003AE944:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE94Cu);  if (depth < kMaxDepth) unit_000A(c, 245u, depth + 1u); else { c.pc = 0x0012B850u; return; } if (c.pc != 0x003AE94Cu) [[unlikely]] return; }
L_003AE94C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE954u);  if (depth < kMaxDepth) unit_000B(c, 24u, depth + 1u); else { c.pc = 0x0012C850u; return; } if (c.pc != 0x003AE954u) [[unlikely]] return; }
L_003AE954:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE95Cu);  if (depth < kMaxDepth) unit_00C0(c, 297u, depth + 1u); else { c.pc = 0x00403180u; return; } if (c.pc != 0x003AE95Cu) [[unlikely]] return; }
L_003AE95C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE964u);  if (depth < kMaxDepth) unit_00BE(c, 115u, depth + 1u); else { c.pc = 0x003F9E10u; return; } if (c.pc != 0x003AE964u) [[unlikely]] return; }
L_003AE964:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 54u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_003AEA00; } }
    c.budget -= 1;
L_003AE978:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE980u);  if (depth < kMaxDepth) unit_00BE(c, 114u, depth + 1u); else { c.pc = 0x003F9DE0u; return; } if (c.pc != 0x003AE980u) [[unlikely]] return; }
L_003AE980:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003AEA00; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[4], 0u + 128u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 54u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], ld32((c.r[16].w[0] + 816u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE9B0u); set32(c.r[7], 0u + 16u);  if (depth < kMaxDepth) unit_004B(c, 96u, depth + 1u); else { c.pc = 0x0022D4F0u; return; } if (c.pc != 0x003AE9B0u) [[unlikely]] return; }
L_003AE9B0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE9BCu); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x003AE9BCu) [[unlikely]] return; }
L_003AE9BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AEA00; } }
    c.budget -= 1;
L_003AE9C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE9D0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x003AE9D0u) [[unlikely]] return; }
L_003AE9D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003AEA00; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003AEA00; } }
L_003AE9E8:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_003AEA00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AEA10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 13u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 2u));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003AEC20; } }
    set32(c.r[3], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 11u);  if (t) { goto L_003AEBE8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003AEBC8; } }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_003AEBA8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_003AEB80; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_003AEB60; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003AEA70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AEC60; } }
    c.budget -= 1;
L_003AEA70:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[3], c.r[3].w[0] - 13040u);
    set32(c.r[2], c.r[2].w[0] - 13039u);
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEAC0u); st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00C2(c, 172u, depth + 1u); else { c.pc = 0x00409CF0u; return; } if (c.pc != 0x003AEAC0u) [[unlikely]] return; }
L_003AEAC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEAC8u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AB(c, 295u, depth + 1u); else { c.pc = 0x003AF550u; return; } if (c.pc != 0x003AEAC8u) [[unlikely]] return; }
L_003AEAC8:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[1].d[0] = c.r[4].sd[0] < 462ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003AEB00; } }
L_003AEAD8:
    set32(c.r[2], c.r[16].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 129u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003AEAF0; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 2;
L_003AEAF0:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < 462ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AEAD8u | kUnwind; return; } goto L_003AEAD8; } }
L_003AEB00:
    set32(c.r[2], 0u + 461u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 5u);  if (t) { goto L_003AEB50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEB14u); set32(c.r[5], 0u + 23u);  if (depth < kMaxDepth) unit_00AB(c, 310u, depth + 1u); else { c.pc = 0x003AF770u; return; } if (c.pc != 0x003AEB14u) [[unlikely]] return; }
L_003AEB14:
    set32(c.r[2], 0u + 100u);
    set32(c.r[4], 0u + 10u);
    st8((c.r[16].w[0] + 128u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEB2Cu); st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (depth < kMaxDepth) unit_00BE(c, 146u, depth + 1u); else { c.pc = 0x003FA130u; return; } if (c.pc != 0x003AEB2Cu) [[unlikely]] return; }
L_003AEB2C:
    set32(c.r[4], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEB38u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00BE(c, 146u, depth + 1u); else { c.pc = 0x003FA130u; return; } if (c.pc != 0x003AEB38u) [[unlikely]] return; }
L_003AEB38:
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 30u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEB48u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x003AEB48u) [[unlikely]] return; }
L_003AEB48:
    st8((c.r[16].w[0] + 54u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_003AEB50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEB58u);  if (depth < kMaxDepth) unit_00AB(c, 297u, depth + 1u); else { c.pc = 0x003AF580u; return; } if (c.pc != 0x003AEB58u) [[unlikely]] return; }
L_003AEB58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AEC60; } }
L_003AEB60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEB68u); set32(c.r[4], ld32((c.r[16].w[0] + 56u)));  if (depth < kMaxDepth) unit_00C2(c, 260u, depth + 1u); else { c.pc = 0x0040A950u; return; } if (c.pc != 0x003AEB68u) [[unlikely]] return; }
L_003AEB68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003AEC60; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003AEC60; } }
L_003AEB80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEB88u); set32(c.r[4], ld32((c.r[16].w[0] + 56u)));  if (depth < kMaxDepth) unit_00C2(c, 261u, depth + 1u); else { c.pc = 0x0040A960u; return; } if (c.pc != 0x003AEB88u) [[unlikely]] return; }
L_003AEB88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003AEC60; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003AEC60; } }
    c.budget -= 1;
L_003AEBA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEBB0u); set32(c.r[4], ld32((c.r[16].w[0] + 56u)));  if (depth < kMaxDepth) unit_00C2(c, 260u, depth + 1u); else { c.pc = 0x0040A950u; return; } if (c.pc != 0x003AEBB0u) [[unlikely]] return; }
L_003AEBB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003AEC60; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003AEC60; } }
L_003AEBC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEBD0u); set32(c.r[4], ld32((c.r[16].w[0] + 56u)));  if (depth < kMaxDepth) unit_00C2(c, 261u, depth + 1u); else { c.pc = 0x0040A960u; return; } if (c.pc != 0x003AEBD0u) [[unlikely]] return; }
L_003AEBD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003AEC60; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003AEC60; } }
L_003AEBE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEBF0u); set32(c.r[4], 0u + 7u);  if (depth < kMaxDepth) unit_00BE(c, 114u, depth + 1u); else { c.pc = 0x003F9DE0u; return; } if (c.pc != 0x003AEBF0u) [[unlikely]] return; }
L_003AEBF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003AEC60; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], 0u + 16u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEC14u); st8((c.r[16].w[0] + 11u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_00C2(c, 172u, depth + 1u); else { c.pc = 0x00409CF0u; return; } if (c.pc != 0x003AEC14u) [[unlikely]] return; }
L_003AEC14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AEC60; } }
    c.budget -= 1;
L_003AEC20:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 11u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003AEC60; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[4], 0u + 4u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEC48u); st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00BE(c, 154u, depth + 1u); else { c.pc = 0x003FA260u; return; } if (c.pc != 0x003AEC48u) [[unlikely]] return; }
L_003AEC48:
    set32(c.r[4], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEC54u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00BE(c, 154u, depth + 1u); else { c.pc = 0x003FA260u; return; } if (c.pc != 0x003AEC54u) [[unlikely]] return; }
L_003AEC54:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 54u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_003AEC60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AEC70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEC94u); set32(c.r[4], ld32((c.r[4].w[0] + 56u)));  if (depth < kMaxDepth) unit_00C2(c, 263u, depth + 1u); else { c.pc = 0x0040A990u; return; } if (c.pc != 0x003AEC94u) [[unlikely]] return; }
L_003AEC94:
    c.r[4].d[0] = ld8((c.r[18].w[0] + 2u));
    set32(c.r[3], 0u + 9u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003AEE68; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003AECD0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003AECC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AEE80; } }
L_003AECC0:
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AECCCu); st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AC(c, 20u, depth + 1u); else { c.pc = 0x003B0180u; return; } if (c.pc != 0x003AECCCu) [[unlikely]] return; }
L_003AECCC:
    c.budget -= 1;
L_003AECD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AECD8u);  if (depth < kMaxDepth) unit_00AC(c, 21u, depth + 1u); else { c.pc = 0x003B01A0u; return; } if (c.pc != 0x003AECD8u) [[unlikely]] return; }
L_003AECD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AECE0u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x003AECE0u) [[unlikely]] return; }
L_003AECE0:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003AED30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AECF8u);  if (depth < kMaxDepth) unit_00AB(c, 337u, depth + 1u); else { c.pc = 0x003AFBD0u; return; } if (c.pc != 0x003AECF8u) [[unlikely]] return; }
L_003AECF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003AED30; } }
    set32(c.r[2], 0u + 9u);
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AED14u); set32(c.r[5], 0u + 165u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x003AED14u) [[unlikely]] return; }
L_003AED14:
    set32(c.r[4], 0u + 15u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AED20u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 172u, depth + 1u); else { c.pc = 0x00409CF0u; return; } if (c.pc != 0x003AED20u) [[unlikely]] return; }
L_003AED20:
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 8075u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003AEE80; } }
L_003AED30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AED38u);  if (depth < kMaxDepth) unit_00BE(c, 240u, depth + 1u); else { c.pc = 0x003FB040u; return; } if (c.pc != 0x003AED38u) [[unlikely]] return; }
L_003AED38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003AED90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AED48u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8u)));  if (depth < kMaxDepth) unit_00AB(c, 247u, depth + 1u); else { c.pc = 0x003AEEA0u; return; } if (c.pc != 0x003AED48u) [[unlikely]] return; }
L_003AED48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003AED80; } }
    set32(c.r[2], 0u + 3u);
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AED60u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8u)));  if (depth < kMaxDepth) unit_00BE(c, 135u, depth + 1u); else { c.pc = 0x003F9FF0u; return; } if (c.pc != 0x003AED60u) [[unlikely]] return; }
L_003AED60:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AED6Cu); set32(c.r[5], 0u + 165u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x003AED6Cu) [[unlikely]] return; }
L_003AED6C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AED78u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x003AED78u) [[unlikely]] return; }
L_003AED78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AEE80; } }
L_003AED80:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AED8Cu); set32(c.r[5], 0u + 171u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x003AED8Cu) [[unlikely]] return; }
L_003AED8C:
    c.budget -= 1;
L_003AED90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AED98u);  if (depth < kMaxDepth) unit_00BE(c, 241u, depth + 1u); else { c.pc = 0x003FB050u; return; } if (c.pc != 0x003AED98u) [[unlikely]] return; }
L_003AED98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003AEDC8; } }
    set32(c.r[2], 0u + 4u);
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEDB4u); set32(c.r[5], 0u + 167u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x003AEDB4u) [[unlikely]] return; }
L_003AEDB4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEDC0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x003AEDC0u) [[unlikely]] return; }
L_003AEDC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AEE80; } }
L_003AEDC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEDD0u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x003AEDD0u) [[unlikely]] return; }
L_003AEDD0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 9u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEDE0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0049(c, 385u, depth + 1u); else { c.pc = 0x00227830u; return; } if (c.pc != 0x003AEDE0u) [[unlikely]] return; }
L_003AEDE0:
    st8((c.r[18].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEDECu); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x003AEDECu) [[unlikely]] return; }
L_003AEDEC:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEDFCu); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0049(c, 388u, depth + 1u); else { c.pc = 0x002278D0u; return; } if (c.pc != 0x003AEDFCu) [[unlikely]] return; }
L_003AEDFC:
    st8((c.r[18].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    c.r[3].d[0] = c.r[17].d[0] << 56;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 9u)));
    set32(c.r[4], c.r[4].w[0] - 13056u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    st8((c.r[18].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8u)));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003AEE58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEE40u); set32(c.r[5], 0u + 166u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x003AEE40u) [[unlikely]] return; }
L_003AEE40:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEE4Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x003AEE4Cu) [[unlikely]] return; }
L_003AEE4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AEE80; } }
    c.budget -= 1;
L_003AEE58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEE60u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 62u, depth + 1u); else { c.pc = 0x003B0A00u; return; } if (c.pc != 0x003AEE60u) [[unlikely]] return; }
L_003AEE60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AEE80; } }
L_003AEE68:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8075u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003AEE80; } }
    st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_003AEE80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003AEEA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00690000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 8624u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 10;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[2], 0u + 8u);  if (t) { goto L_003AEEF8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_003AEEF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEED8u);  if (depth < kMaxDepth) unit_00AB(c, 295u, depth + 1u); else { c.pc = 0x003AF550u; return; } if (c.pc != 0x003AEED8u) [[unlikely]] return; }
L_003AEED8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEEE0u);  if (depth < kMaxDepth) unit_00B2(c, 9u, depth + 1u); else { c.pc = 0x003C81E0u; return; } if (c.pc != 0x003AEEE0u) [[unlikely]] return; }
L_003AEEE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEEE8u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 297u, depth + 1u); else { c.pc = 0x003AF580u; return; } if (c.pc != 0x003AEEE8u) [[unlikely]] return; }
L_003AEEE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003AEF78; } }
L_003AEEF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003AEF78; } }
L_003AEEF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEF00u);  if (depth < kMaxDepth) unit_00AB(c, 292u, depth + 1u); else { c.pc = 0x003AF490u; return; } if (c.pc != 0x003AEF00u) [[unlikely]] return; }
L_003AEF00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[3], c.r[17].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 20848u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] + 20808u);
    set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003AEF68; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[2], c.r[2].w[0] + 8064u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 3;
L_003AEF40:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 129u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003AEF50; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_003AEF50:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AEF40u | kUnwind; return; } goto L_003AEF40; } }
    c.budget -= 1;
L_003AEF68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEF70u);  if (depth < kMaxDepth) unit_00AB(c, 288u, depth + 1u); else { c.pc = 0x003AF3B0u; return; } if (c.pc != 0x003AEF70u) [[unlikely]] return; }
L_003AEF70:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_003AEF78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003AEF90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEFA8u); set32(c.r[4], ld32((c.r[4].w[0] + 56u)));  if (depth < kMaxDepth) unit_00C2(c, 263u, depth + 1u); else { c.pc = 0x0040A990u; return; } if (c.pc != 0x003AEFA8u) [[unlikely]] return; }
L_003AEFA8:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003AF028; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003AF008; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003AEFD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AF050; } }
    c.budget -= 1;
L_003AEFD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEFE0u);  if (depth < kMaxDepth) unit_00AC(c, 64u, depth + 1u); else { c.pc = 0x003B0A80u; return; } if (c.pc != 0x003AEFE0u) [[unlikely]] return; }
L_003AEFE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003AF050; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF000u); set32(c.r[5], 0u + 31u);  if (depth < kMaxDepth) unit_00C2(c, 264u, depth + 1u); else { c.pc = 0x0040A9A0u; return; } if (c.pc != 0x003AF000u) [[unlikely]] return; }
L_003AF000:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AF050; } }
L_003AF008:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF010u);  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B0B20u; return; } if (c.pc != 0x003AF010u) [[unlikely]] return; }
L_003AF010:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003AF050; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003AF050; } }
L_003AF028:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8u)));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF04Cu); set32(c.r[4], ld32((c.r[16].w[0] + 56u)));  if (depth < kMaxDepth) unit_00BE(c, 305u, depth + 1u); else { c.pc = 0x003FB5D0u; return; } if (c.pc != 0x003AF04Cu) [[unlikely]] return; }
L_003AF04C:
    c.budget -= 1;
L_003AF050:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AF060:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 2u));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003AF0D0; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_003AF0B0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003AF098; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AF0F0; } }
L_003AF098:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF0A8u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x003AF0A8u) [[unlikely]] return; }
L_003AF0A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 54u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003AF0F0; } }
L_003AF0B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF0B8u);  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x003AF0B8u) [[unlikely]] return; }
L_003AF0B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003AF0F0; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003AF0F0; } }
L_003AF0D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF0D8u);  if (depth < kMaxDepth) unit_006A(c, 292u, depth + 1u); else { c.pc = 0x002ABC40u; return; } if (c.pc != 0x003AF0D8u) [[unlikely]] return; }
L_003AF0D8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 3u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_003AF0F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AF100:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF110u);  if (depth < kMaxDepth) unit_006B(c, 17u, depth + 1u); else { c.pc = 0x002AC350u; return; } if (c.pc != 0x003AF110u) [[unlikely]] return; }
L_003AF110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF118u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_006B(c, 9u, depth + 1u); else { c.pc = 0x002AC1A0u; return; } if (c.pc != 0x003AF118u) [[unlikely]] return; }
L_003AF118:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF120u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x003AF120u) [[unlikely]] return; }
L_003AF120:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003AF130:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF144u); set32(c.r[4], c.r[4].w[0] - 15136u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x003AF144u) [[unlikely]] return; }
L_003AF144:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF150u); set32(c.r[4], c.r[4].w[0] - 15024u);  if (depth < kMaxDepth) unit_0043(c, 416u, depth + 1u); else { c.pc = 0x0020FEF0u; return; } if (c.pc != 0x003AF150u) [[unlikely]] return; }
L_003AF150:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003AF160:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 8065u));
    set32(c.r[2], c.r[2].w[0] - 12984u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003AC000u < 16384u) { entry = entries_00AB[(t - 0x003AC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003AF190:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st8((c.r[1].w[0] + 8072u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[2], c.r[2].w[0] + 20792u);
    c.r[7].d[0] = ld8((c.r[1].w[0] + 8065u));
    set32(c.r[4], c.r[4].w[0] + 10196u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8068u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[1].w[0] + 8065u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF1E8u); st8((c.r[1].w[0] + 8070u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003AF1E8u) [[unlikely]] return; }
L_003AF1E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF1F0u);  if (depth < kMaxDepth) unit_00AB(c, 275u, depth + 1u); else { c.pc = 0x003AF200u; return; } if (c.pc != 0x003AF1F0u) [[unlikely]] return; }
L_003AF1F0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003AF200:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 12976u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8068u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[16], c.r[16].w[0] + 8064u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 14;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF238u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AF238u) [[unlikely]] return; }
L_003AF238:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003AF250; } }
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_003AF250:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AF270:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 8176u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[6], 0u + 660u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF2A0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003AF2A0u) [[unlikely]] return; }
L_003AF2A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 20992u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] + 18016u);
    set32(c.r[16], c.r[16].w[0] + 20808u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st32((c.r[1].w[0] + 8188u), c.r[2].w[0]);
    c.budget -= 10;
L_003AF2C8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[18], ld32((c.r[17].w[0])));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_003AF368; } }
    c.budget -= 1;
L_003AF2E0:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 2u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_003AF308; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF2F8u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 313u, depth + 1u); else { c.pc = 0x003AF7E0u; return; } if (c.pc != 0x003AF2F8u) [[unlikely]] return; }
L_003AF2F8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF304u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 316u, depth + 1u); else { c.pc = 0x003AF870u; return; } if (c.pc != 0x003AF304u) [[unlikely]] return; }
L_003AF304:
    c.budget -= 1;
L_003AF308:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 2u));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_003AF338; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF320u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 310u, depth + 1u); else { c.pc = 0x003AF770u; return; } if (c.pc != 0x003AF320u) [[unlikely]] return; }
L_003AF320:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF32Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 313u, depth + 1u); else { c.pc = 0x003AF7E0u; return; } if (c.pc != 0x003AF32Cu) [[unlikely]] return; }
L_003AF32C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF338u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 316u, depth + 1u); else { c.pc = 0x003AF870u; return; } if (c.pc != 0x003AF338u) [[unlikely]] return; }
L_003AF338:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 2u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_003AF350; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF350u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 316u, depth + 1u); else { c.pc = 0x003AF870u; return; } if (c.pc != 0x003AF350u) [[unlikely]] return; }
L_003AF350:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF2E0u | kUnwind; return; } goto L_003AF2E0; } }
    c.budget -= 1;
L_003AF368:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < 11ll ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF2C8u | kUnwind; return; } goto L_003AF2C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF384u);  if (depth < kMaxDepth) unit_00AB(c, 297u, depth + 1u); else { c.pc = 0x003AF580u; return; } if (c.pc != 0x003AF384u) [[unlikely]] return; }
L_003AF384:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003AF3B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 8116u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AF470; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF3DCu); set32(c.r[16], c.r[16].w[0] + 8176u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x003AF3DCu) [[unlikely]] return; }
L_003AF3DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF3E4u); set32(c.r[17], c.r[2].w[0] << 8);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x003AF3E4u) [[unlikely]] return; }
L_003AF3E4:
    c.r[3].d[0] = c.r[17].d[0] | c.r[2].d[0];
    set32(c.r[7], c.r[16].w[0] + 2u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[8].d[0] = c.r[3].d[0] & 65535ull;
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(0u));
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.r[9].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull | 65363ull;
    c.budget -= 9;
L_003AF408:
    c.r[6].d[0] = ld16((c.r[7].w[0]));
    c.r[4].d[0] = ld16((c.r[16].w[0]));
    c.r[3].d[0] = c.r[8].d[0] & 65535ull;
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[16].w[0]));
    c.r[4].d[0] = c.r[4].d[0] ^ c.r[8].d[0];
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 2u);  if (t) { goto L_003AF438; } }
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_003AF438:
    c.r[6].d[0] = c.r[8].d[0] & 65535ull;
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[4], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    c.r[3].d[0] = c.r[9].sd[0] < 328ll ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    mmi::div(c, 0, c.r[4].w[0], c.r[5].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; c.r[8].d[0] = c.r[4].d[0] & 65535ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF408u | kUnwind; return; } goto L_003AF408; } }
L_003AF470:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003AF490:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 8116u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[9].sd[0] = static_cast<std::int32_t>(0x00CE0000u);  if (t) { goto L_003AF540; } }
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[9].w[0] + 8176u);
    c.r[10].d[0] = 0ull + 0ull;
    c.r[6].d[0] = ld16((c.r[9].w[0]));
    c.r[8].d[0] = ld16((c.r[9].w[0] + 2u));
    set32(c.r[9], c.r[9].w[0] + 4u);
    c.r[5].d[0] = 0ull | 65363ull;
    c.budget -= 8;
L_003AF4C8:
    c.r[4].d[0] = ld16((c.r[9].w[0]));
    c.r[3].d[0] = c.r[6].d[0] & 65535ull;
    c.r[4].d[0] = c.r[4].d[0] ^ c.r[6].d[0];
    st16((c.r[9].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[9].w[0]));
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    set32(c.r[9], c.r[9].w[0] + 2u);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[7].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_003AF4F0; } }
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003AF4F0:
    c.r[6].d[0] = c.r[6].d[0] & 65535ull;
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + 1u);
    set32(c.r[4], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    c.r[3].d[0] = c.r[10].sd[0] < 328ll ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    mmi::div(c, 0, c.r[4].w[0], c.r[5].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; c.r[6].d[0] = c.r[4].d[0] & 65535ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF4C8u | kUnwind; return; } goto L_003AF4C8; } }
    c.r[4].d[0] = c.r[7].d[0] & 65535ull;
    c.r[3].d[0] = c.r[8].d[0] & 65535ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003AF540; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF540u);  if (depth < kMaxDepth) unit_00AB(c, 277u, depth + 1u); else { c.pc = 0x003AF270u; return; } if (c.pc != 0x003AF540u) [[unlikely]] return; }
L_003AF540:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003AF550:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF560u);  if (depth < kMaxDepth) unit_00AB(c, 292u, depth + 1u); else { c.pc = 0x003AF490u; return; } if (c.pc != 0x003AF560u) [[unlikely]] return; }
L_003AF560:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st8((c.r[1].w[0] + 8116u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003AF580:
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.budget -= 4;
    { st8((c.r[1].w[0] + 8116u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF3B0u | kUnwind; return; } goto L_003AF3B0; }
L_003AF590:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 20848u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF5B8u); set32(c.r[16], c.r[5].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AB(c, 292u, depth + 1u); else { c.pc = 0x003AF490u; return; } if (c.pc != 0x003AF5B8u) [[unlikely]] return; }
L_003AF5B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[3], c.r[16].w[0] + 129u);
    set32(c.r[2], c.r[2].w[0] + 8064u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF5D0u); c.r[16].d[0] = ld8((c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AB(c, 288u, depth + 1u); else { c.pc = 0x003AF3B0u; return; } if (c.pc != 0x003AF5D0u) [[unlikely]] return; }
L_003AF5D0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AF5F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 20848u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF618u); set32(c.r[16], c.r[5].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AB(c, 292u, depth + 1u); else { c.pc = 0x003AF490u; return; } if (c.pc != 0x003AF618u) [[unlikely]] return; }
L_003AF618:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 3));  if (t) { goto L_003AF628; } }
    set32(c.r[2], c.r[16].w[0] + 7u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    c.budget -= 2;
L_003AF628:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[2], c.r[2].w[0] + 8064u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[2].w[0] + 591u));
    c.budget -= 6;
    { const bool t = c.r[16].sd[0] >= 0; c.r[3].d[0] = c.r[16].d[0] & 7ull;  if (t) { goto L_003AF64C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003AF650; } }
    set32(c.r[3], c.r[3].w[0] - 8u);
    c.budget -= 1;
L_003AF64C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003AF650:
    set32(c.r[2], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF65Cu); c.r[16].d[0] = c.r[4].d[0] & c.r[2].d[0];  if (depth < kMaxDepth) unit_00AB(c, 288u, depth + 1u); else { c.pc = 0x003AF3B0u; return; } if (c.pc != 0x003AF65Cu) [[unlikely]] return; }
L_003AF65C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AF670:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 20848u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF698u); set32(c.r[16], c.r[5].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AB(c, 292u, depth + 1u); else { c.pc = 0x003AF490u; return; } if (c.pc != 0x003AF698u) [[unlikely]] return; }
L_003AF698:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 3));  if (t) { goto L_003AF6A8; } }
    set32(c.r[2], c.r[16].w[0] + 7u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    c.budget -= 2;
L_003AF6A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[2], c.r[2].w[0] + 8064u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[2].w[0] + 650u));
    c.budget -= 6;
    { const bool t = c.r[16].sd[0] >= 0; c.r[3].d[0] = c.r[16].d[0] & 7ull;  if (t) { goto L_003AF6CC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003AF6D0; } }
    set32(c.r[3], c.r[3].w[0] - 8u);
    c.budget -= 1;
L_003AF6CC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003AF6D0:
    set32(c.r[2], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF6DCu); c.r[16].d[0] = c.r[4].d[0] & c.r[2].d[0];  if (depth < kMaxDepth) unit_00AB(c, 288u, depth + 1u); else { c.pc = 0x003AF3B0u; return; } if (c.pc != 0x003AF6DCu) [[unlikely]] return; }
L_003AF6DC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AF6F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 20848u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF718u); set32(c.r[16], c.r[5].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AB(c, 292u, depth + 1u); else { c.pc = 0x003AF490u; return; } if (c.pc != 0x003AF718u) [[unlikely]] return; }
L_003AF718:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 3));  if (t) { goto L_003AF728; } }
    set32(c.r[2], c.r[16].w[0] + 7u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    c.budget -= 2;
L_003AF728:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[2], c.r[2].w[0] + 8064u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[2].w[0] + 709u));
    c.budget -= 6;
    { const bool t = c.r[16].sd[0] >= 0; c.r[3].d[0] = c.r[16].d[0] & 7ull;  if (t) { goto L_003AF74C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003AF750; } }
    set32(c.r[3], c.r[3].w[0] - 8u);
    c.budget -= 1;
L_003AF74C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003AF750:
    set32(c.r[2], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF75Cu); c.r[16].d[0] = c.r[4].d[0] & c.r[2].d[0];  if (depth < kMaxDepth) unit_00AB(c, 288u, depth + 1u); else { c.pc = 0x003AF3B0u; return; } if (c.pc != 0x003AF75Cu) [[unlikely]] return; }
L_003AF75C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AF770:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 20848u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF798u); set32(c.r[16], c.r[5].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AB(c, 292u, depth + 1u); else { c.pc = 0x003AF490u; return; } if (c.pc != 0x003AF798u) [[unlikely]] return; }
L_003AF798:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[3], c.r[16].w[0] + 129u);
    set32(c.r[2], c.r[2].w[0] + 8064u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.r[1].d[0] = c.r[2].sd[0] < 99ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003AF7C0; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003AF7C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF7C8u);  if (depth < kMaxDepth) unit_00AB(c, 288u, depth + 1u); else { c.pc = 0x003AF3B0u; return; } if (c.pc != 0x003AF7C8u) [[unlikely]] return; }
L_003AF7C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AF7E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 20848u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF808u); set32(c.r[16], c.r[5].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AB(c, 292u, depth + 1u); else { c.pc = 0x003AF490u; return; } if (c.pc != 0x003AF808u) [[unlikely]] return; }
L_003AF808:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; c.r[4].d[0] = c.r[16].d[0] & 7ull;  if (t) { goto L_003AF81C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003AF820; } }
    set32(c.r[4], c.r[4].w[0] - 8u);
    c.budget -= 1;
L_003AF81C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003AF820:
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 3));
    set32(c.r[2], c.r[2].w[0] << (c.r[4].w[0] & 31u));
    c.budget -= 4;
    { const bool t = c.r[16].sd[0] >= 0; c.r[4].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_003AF838; } }
    set32(c.r[2], c.r[16].w[0] + 7u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    c.budget -= 2;
L_003AF838:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[2], c.r[2].w[0] + 8064u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 591u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF854u); st8((c.r[3].w[0] + 591u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AB(c, 288u, depth + 1u); else { c.pc = 0x003AF3B0u; return; } if (c.pc != 0x003AF854u) [[unlikely]] return; }
L_003AF854:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AF870:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 20848u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF898u); set32(c.r[16], c.r[5].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AB(c, 292u, depth + 1u); else { c.pc = 0x003AF490u; return; } if (c.pc != 0x003AF898u) [[unlikely]] return; }
L_003AF898:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; c.r[4].d[0] = c.r[16].d[0] & 7ull;  if (t) { goto L_003AF8AC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003AF8B0; } }
    set32(c.r[4], c.r[4].w[0] - 8u);
    c.budget -= 1;
L_003AF8AC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003AF8B0:
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 3));
    set32(c.r[2], c.r[2].w[0] << (c.r[4].w[0] & 31u));
    c.budget -= 4;
    { const bool t = c.r[16].sd[0] >= 0; c.r[4].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_003AF8C8; } }
    set32(c.r[2], c.r[16].w[0] + 7u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    c.budget -= 2;
L_003AF8C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[2], c.r[2].w[0] + 8064u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 650u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF8E4u); st8((c.r[3].w[0] + 650u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AB(c, 288u, depth + 1u); else { c.pc = 0x003AF3B0u; return; } if (c.pc != 0x003AF8E4u) [[unlikely]] return; }
L_003AF8E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AF900:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 20848u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF928u); set32(c.r[16], c.r[5].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AB(c, 292u, depth + 1u); else { c.pc = 0x003AF490u; return; } if (c.pc != 0x003AF928u) [[unlikely]] return; }
L_003AF928:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; c.r[4].d[0] = c.r[16].d[0] & 7ull;  if (t) { goto L_003AF93C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003AF940; } }
    set32(c.r[4], c.r[4].w[0] - 8u);
    c.budget -= 1;
L_003AF93C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003AF940:
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 3));
    set32(c.r[2], c.r[2].w[0] << (c.r[4].w[0] & 31u));
    c.budget -= 4;
    { const bool t = c.r[16].sd[0] >= 0; c.r[4].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_003AF958; } }
    set32(c.r[2], c.r[16].w[0] + 7u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    c.budget -= 2;
L_003AF958:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[2], c.r[2].w[0] + 8064u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 709u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF974u); st8((c.r[3].w[0] + 709u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AB(c, 288u, depth + 1u); else { c.pc = 0x003AF3B0u; return; } if (c.pc != 0x003AF974u) [[unlikely]] return; }
L_003AF974:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AF990:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF9ACu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 301u, depth + 1u); else { c.pc = 0x003AF5F0u; return; } if (c.pc != 0x003AF9ACu) [[unlikely]] return; }
L_003AF9AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003AF9D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF9BCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 313u, depth + 1u); else { c.pc = 0x003AF7E0u; return; } if (c.pc != 0x003AF9BCu) [[unlikely]] return; }
L_003AF9BC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF9C8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 319u, depth + 1u); else { c.pc = 0x003AF900u; return; } if (c.pc != 0x003AF9C8u) [[unlikely]] return; }
L_003AF9C8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003AF9D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF9D8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 316u, depth + 1u); else { c.pc = 0x003AF870u; return; } if (c.pc != 0x003AF9D8u) [[unlikely]] return; }
L_003AF9D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003AF9F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 20848u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFA18u); set32(c.r[16], c.r[5].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AB(c, 292u, depth + 1u); else { c.pc = 0x003AF490u; return; } if (c.pc != 0x003AFA18u) [[unlikely]] return; }
L_003AFA18:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; c.r[4].d[0] = c.r[16].d[0] & 7ull;  if (t) { goto L_003AFA2C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003AFA30; } }
    set32(c.r[4], c.r[4].w[0] - 8u);
    c.budget -= 1;
L_003AFA2C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003AFA30:
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 3));
    set32(c.r[2], c.r[2].w[0] << (c.r[4].w[0] & 31u));
    c.r[2].d[0] = ~(c.r[2].d[0] | 0ull);
    c.budget -= 5;
    { const bool t = c.r[16].sd[0] >= 0; c.r[4].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_003AFA4C; } }
    set32(c.r[2], c.r[16].w[0] + 7u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    c.budget -= 2;
L_003AFA4C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[2], c.r[2].w[0] + 8064u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 709u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFA68u); st8((c.r[3].w[0] + 709u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AB(c, 288u, depth + 1u); else { c.pc = 0x003AF3B0u; return; } if (c.pc != 0x003AFA68u) [[unlikely]] return; }
L_003AFA68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AFA80:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 18016u);
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 2u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] & 128ull;  c.pc = t; return; }
L_003AFAB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], c.r[2].w[0] + 20808u);
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003AFB20; } }
    c.budget -= 1;
L_003AFAE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFAE8u); c.r[4].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 330u, depth + 1u); else { c.pc = 0x003AFA80u; return; } if (c.pc != 0x003AFAE8u) [[unlikely]] return; }
L_003AFAE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003AFB08; } }
    set32(c.r[7], c.r[7].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[7].sd[0] >= 0; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003AFB08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AFB28; } }
    c.budget -= 1;
L_003AFB08:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AFAE0u | kUnwind; return; } goto L_003AFAE0; } }
    c.budget -= 1;
L_003AFB20:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003AFB28:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003AFB40:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 20808u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[19], c.r[2].w[0] + c.r[4].w[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003AFBB0; } }
    c.budget -= 1;
L_003AFB80:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFB8Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 298u, depth + 1u); else { c.pc = 0x003AF590u; return; } if (c.pc != 0x003AFB8Cu) [[unlikely]] return; }
L_003AFB8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003AFB98; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_003AFB98:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AFB80u | kUnwind; return; } goto L_003AFB80; } }
    c.budget -= 1;
L_003AFBB0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003AFBD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFBE0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00AB(c, 292u, depth + 1u); else { c.pc = 0x003AF490u; return; } if (c.pc != 0x003AFBE0u) [[unlikely]] return; }
L_003AFBE0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[16].d[0] = 0ull + 0ull;
    c.r[3].d[0] = ld16((c.r[1].w[0] + 20862u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20815u)));
    c.r[1].d[0] = 0ll < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003AFC30; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[2], c.r[2].w[0] + 8064u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_003AFC10:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 129u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003AFC20; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_003AFC20:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AFC10u | kUnwind; return; } goto L_003AFC10; } }
L_003AFC30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFC38u);  if (depth < kMaxDepth) unit_00AB(c, 288u, depth + 1u); else { c.pc = 0x003AF3B0u; return; } if (c.pc != 0x003AFC38u) [[unlikely]] return; }
L_003AFC38:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AFC50:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 20808u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[19], c.r[2].w[0] + c.r[4].w[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003AFCF0; } }
    c.budget -= 1;
L_003AFC90:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFC9Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 298u, depth + 1u); else { c.pc = 0x003AF590u; return; } if (c.pc != 0x003AFC9Cu) [[unlikely]] return; }
    goto L_003AFC9C;
L_003AFC98:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003AFC9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003AFCD0; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFCB0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 301u, depth + 1u); else { c.pc = 0x003AF5F0u; return; } if (c.pc != 0x003AFCB0u) [[unlikely]] return; }
L_003AFCB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003AFCD0; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFCC4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 304u, depth + 1u); else { c.pc = 0x003AF670u; return; } if (c.pc != 0x003AFCC4u) [[unlikely]] return; }
L_003AFCC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003AFCD8; } }
    c.budget -= 1;
L_003AFCD0:
    set32(c.r[16], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_003AFCD8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AFC90u | kUnwind; return; } goto L_003AFC90; } }
    c.budget -= 1;
L_003AFCF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[2], c.r[2].w[0] - 13112u);
    set32(c.r[3], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], 0u + 6u);
    c.budget -= 6;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; c.r[17].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_003AFD20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFD10u);  if (depth < kMaxDepth) unit_00AF(c, 212u, depth + 1u); else { c.pc = 0x003BDAC0u; return; } if (c.pc != 0x003AFD10u) [[unlikely]] return; }
L_003AFD10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003AFD20; } }
    set32(c.r[17], 0u + 69u);
    c.budget -= 2;
L_003AFD20:
    c.r[1].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    if (c.r[1].d[0] == 0) c.r[17].d[0] = c.r[16].d[0];
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003AFD50:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFD74u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 295u, depth + 1u); else { c.pc = 0x003AF550u; return; } if (c.pc != 0x003AFD74u) [[unlikely]] return; }
L_003AFD74:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[2], c.r[2].w[0] + 20808u);
    set32(c.r[19], c.r[2].w[0] + c.r[18].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003AFDC0; } }
L_003AFD90:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFD9Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 301u, depth + 1u); else { c.pc = 0x003AF5F0u; return; } if (c.pc != 0x003AFD9Cu) [[unlikely]] return; }
L_003AFD9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003AFDA8; } }
    set32(c.r[16], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_003AFDA8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AFD90u | kUnwind; return; } goto L_003AFD90; } }
    c.budget -= 1;
L_003AFDC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFDC8u);  if (depth < kMaxDepth) unit_00AB(c, 297u, depth + 1u); else { c.pc = 0x003AF580u; return; } if (c.pc != 0x003AFDC8u) [[unlikely]] return; }
L_003AFDC8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[2], 0u + 6u);
    set32(c.r[3], c.r[3].w[0] - 13112u);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.budget -= 6;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; c.r[17].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_003AFDF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFDE8u);  if (depth < kMaxDepth) unit_00AF(c, 212u, depth + 1u); else { c.pc = 0x003BDAC0u; return; } if (c.pc != 0x003AFDE8u) [[unlikely]] return; }
L_003AFDE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003AFDF8; } }
    set32(c.r[17], 0u + 69u);
    c.budget -= 2;
L_003AFDF8:
    c.r[1].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    if (c.r[1].d[0] == 0) c.r[17].d[0] = c.r[16].d[0];
    c.r[1].d[0] = 0ll < c.r[17].sd[0] ? 1ull : 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003AFE38; } }
L_003AFE10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFE18u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 330u, depth + 1u); else { c.pc = 0x003AFA80u; return; } if (c.pc != 0x003AFE18u) [[unlikely]] return; }
L_003AFE18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003AFE28; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 2;
L_003AFE28:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AFE10u | kUnwind; return; } goto L_003AFE10; } }
L_003AFE38:
    set32(c.r[2], c.r[17].w[0] - c.r[6].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003AFE60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_00AC(c, 1u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFE80u);  if (depth < kMaxDepth) unit_00AB(c, 295u, depth + 1u); else { c.pc = 0x003AF550u; return; } if (c.pc != 0x003AFE80u) [[unlikely]] return; }
L_003AFE80:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[28].w[0] - 23788u)));
    c.r[9].d[0] = 0ull + 0ull;
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 56u)));
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 8;
L_003AFEA0:
    set32(c.r[3], c.r[5].w[0] << (c.r[9].w[0] & 31u));
    c.r[3].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AFED0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 68u)));
    c.r[3].d[0] = c.r[4].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 2;
L_003AFEB8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[4].sd[0] < 47ll ? 1ull : 0ull;  if (t) { goto L_003AFED0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003AFED0; } }
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 2;
L_003AFED0:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[3].d[0] = c.r[9].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AFEA0u | kUnwind; return; } goto L_003AFEA0; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 20u)));
    set32(c.r[3], 0u + 13u);
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    c.r[5].d[0] = c.r[5].d[0] & 1ull;
    c.r[5].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.r[5].d[0] = c.r[5].d[0] ^ 1ull;
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 144u)));
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 11u);  if (t) { goto L_003AFFD0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 10u);  if (t) { goto L_003AFF98; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 4u);  if (t) { goto L_003AFF70; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003AFF70; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_003AFF24:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_003AFF70; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003AFF70; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003AFF70; } }
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_003AFF58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AFFF8; } }
    c.budget -= 1;
L_003AFF58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFF60u);  if (depth < kMaxDepth) unit_00C2(c, 39u, depth + 1u); else { c.pc = 0x004086A0u; return; } if (c.pc != 0x003AFF60u) [[unlikely]] return; }
L_003AFF60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFF68u); set32(c.r[4], 0u + 18u);  if (depth < kMaxDepth) unit_00C2(c, 39u, depth + 1u); else { c.pc = 0x004086A0u; return; } if (c.pc != 0x003AFF68u) [[unlikely]] return; }
L_003AFF68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AFFF8; } }
L_003AFF70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_003AFF80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFF80u);  if (depth < kMaxDepth) unit_00C2(c, 39u, depth + 1u); else { c.pc = 0x004086A0u; return; } if (c.pc != 0x003AFF80u) [[unlikely]] return; }
L_003AFF80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFF88u); set32(c.r[4], 0u + 11u);  if (depth < kMaxDepth) unit_00C2(c, 39u, depth + 1u); else { c.pc = 0x004086A0u; return; } if (c.pc != 0x003AFF88u) [[unlikely]] return; }
L_003AFF88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFF90u); set32(c.r[4], 0u + 19u);  if (depth < kMaxDepth) unit_00C2(c, 39u, depth + 1u); else { c.pc = 0x004086A0u; return; } if (c.pc != 0x003AFF90u) [[unlikely]] return; }
L_003AFF90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AFFF8; } }
L_003AFF98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_003AFFA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFFA8u);  if (depth < kMaxDepth) unit_00C2(c, 39u, depth + 1u); else { c.pc = 0x004086A0u; return; } if (c.pc != 0x003AFFA8u) [[unlikely]] return; }
L_003AFFA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFFB0u); set32(c.r[4], 0u + 11u);  if (depth < kMaxDepth) unit_00C2(c, 39u, depth + 1u); else { c.pc = 0x004086A0u; return; } if (c.pc != 0x003AFFB0u) [[unlikely]] return; }
L_003AFFB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFFB8u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_00C2(c, 39u, depth + 1u); else { c.pc = 0x004086A0u; return; } if (c.pc != 0x003AFFB8u) [[unlikely]] return; }
L_003AFFB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFFC0u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_00C2(c, 39u, depth + 1u); else { c.pc = 0x004086A0u; return; } if (c.pc != 0x003AFFC0u) [[unlikely]] return; }
L_003AFFC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFFC8u); set32(c.r[4], 0u + 19u);  if (depth < kMaxDepth) unit_00C2(c, 39u, depth + 1u); else { c.pc = 0x004086A0u; return; } if (c.pc != 0x003AFFC8u) [[unlikely]] return; }
L_003AFFC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AFFF8; } }
L_003AFFD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_003AFFE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFFE0u);  if (depth < kMaxDepth) unit_00C2(c, 39u, depth + 1u); else { c.pc = 0x004086A0u; return; } if (c.pc != 0x003AFFE0u) [[unlikely]] return; }
L_003AFFE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFFE8u); set32(c.r[4], 0u + 11u);  if (depth < kMaxDepth) unit_00C2(c, 39u, depth + 1u); else { c.pc = 0x004086A0u; return; } if (c.pc != 0x003AFFE8u) [[unlikely]] return; }
L_003AFFE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFFF0u); set32(c.r[4], 0u + 9u);  if (depth < kMaxDepth) unit_00C2(c, 39u, depth + 1u); else { c.pc = 0x004086A0u; return; } if (c.pc != 0x003AFFF0u) [[unlikely]] return; }
    goto L_003AFFF0;
L_003AFFEC:
    set32(c.r[4], 0u + 9u);
    c.budget -= 1;
L_003AFFF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFFF8u); set32(c.r[4], 0u + 19u);  if (depth < kMaxDepth) unit_00C2(c, 39u, depth + 1u); else { c.pc = 0x004086A0u; return; } if (c.pc != 0x003AFFF8u) [[unlikely]] return; }
L_003AFFF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B0000u);  if (depth < kMaxDepth) unit_00AB(c, 297u, depth + 1u); else { c.pc = 0x003AF580u; return; } if (c.pc != 0x003B0000u) [[unlikely]] return; }
    [[clang::musttail]] return unit_00AC(c, 1u, depth);
}

}
