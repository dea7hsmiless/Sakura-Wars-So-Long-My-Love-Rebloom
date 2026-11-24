#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00AF[4096] = {
    1, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0,
    0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0,
    0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0,
    0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0,
    0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0,
    0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0,
    0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0,
    0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0,
    0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0,
    0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0,
    0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0,
    93, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 112, 0,
    0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0,
    118, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 124, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0,
    0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 137, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 142, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0,
    0, 145, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0,
    0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0,
    0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0,
    170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0,
    0, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0,
    0, 0, 0, 0, 180, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 191,
    0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 194, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 203, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 205, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0,
    0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0,
    0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0,
    0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0,
    0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223,
    0, 224, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    227, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 233, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 238, 0, 0, 239, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0,
    243, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0,
    0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0,
    250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0,
    258, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 262, 0, 0,
    0, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 265, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0,
    0, 0, 0, 0, 0, 0, 268, 0, 269, 0, 270, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0, 0, 276, 0, 0, 0,
    0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    279, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 282, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 293, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    297, 0, 0, 0, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 302,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 305, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0,
    0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0,
    0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0,
    0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    318, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 321, 0, 0, 0, 322, 0, 0, 323, 0, 0, 0, 0, 0, 324, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 331, 0, 0,
    0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0,
    0, 0, 0, 0, 0, 335, 0, 0, 336, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0,
    0, 339, 0, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 343, 0, 0, 0, 344, 0, 0, 0, 345,
    0, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 355, 0,
    0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0,
    360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 362, 0, 0, 363, 0, 0, 0, 364, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0,
    367, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 374, 0, 0, 0,
    0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 378, 0,
    0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0,
    383, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 387,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00AF(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003DC000;
    case 2u: goto L_003DC004;
    case 3u: goto L_003DC01C;
    case 4u: goto L_003DC050;
    case 5u: goto L_003DC070;
    case 6u: goto L_003DC0A0;
    case 7u: goto L_003DC0B8;
    case 8u: goto L_003DC0D0;
    case 9u: goto L_003DC0F8;
    case 10u: goto L_003DC114;
    case 11u: goto L_003DC130;
    case 12u: goto L_003DC140;
    case 13u: goto L_003DC168;
    case 14u: goto L_003DC184;
    case 15u: goto L_003DC1D8;
    case 16u: goto L_003DC210;
    case 17u: goto L_003DC254;
    case 18u: goto L_003DC2E0;
    case 19u: goto L_003DC364;
    case 20u: goto L_003DC378;
    case 21u: goto L_003DC388;
    case 22u: goto L_003DC3D0;
    case 23u: goto L_003DC3E4;
    case 24u: goto L_003DC410;
    case 25u: goto L_003DC450;
    case 26u: goto L_003DC460;
    case 27u: goto L_003DC510;
    case 28u: goto L_003DC57C;
    case 29u: goto L_003DC5CC;
    case 30u: goto L_003DC5E0;
    case 31u: goto L_003DC5F4;
    case 32u: goto L_003DC658;
    case 33u: goto L_003DC670;
    case 34u: goto L_003DC6A0;
    case 35u: goto L_003DC6B8;
    case 36u: goto L_003DC6D0;
    case 37u: goto L_003DC6F8;
    case 38u: goto L_003DC714;
    case 39u: goto L_003DC730;
    case 40u: goto L_003DC740;
    case 41u: goto L_003DC768;
    case 42u: goto L_003DC784;
    case 43u: goto L_003DC7D8;
    case 44u: goto L_003DC810;
    case 45u: goto L_003DC864;
    case 46u: goto L_003DC884;
    case 47u: goto L_003DC8C8;
    case 48u: goto L_003DC92C;
    case 49u: goto L_003DC940;
    case 50u: goto L_003DC994;
    case 51u: goto L_003DC9A8;
    case 52u: goto L_003DC9D0;
    case 53u: goto L_003DC9E4;
    case 54u: goto L_003DCA10;
    case 55u: goto L_003DCA64;
    case 56u: goto L_003DCA78;
    case 57u: goto L_003DCA90;
    case 58u: goto L_003DCB60;
    case 59u: goto L_003DCBCC;
    case 60u: goto L_003DCC1C;
    case 61u: goto L_003DCC30;
    case 62u: goto L_003DCC8C;
    case 63u: goto L_003DCC9C;
    case 64u: goto L_003DCCAC;
    case 65u: goto L_003DCCF0;
    case 66u: goto L_003DCD74;
    case 67u: goto L_003DCD84;
    case 68u: goto L_003DCDBC;
    case 69u: goto L_003DCE00;
    case 70u: goto L_003DCE14;
    case 71u: goto L_003DCE70;
    case 72u: goto L_003DCEA0;
    case 73u: goto L_003DCEB8;
    case 74u: goto L_003DCED0;
    case 75u: goto L_003DCEF8;
    case 76u: goto L_003DCF14;
    case 77u: goto L_003DCF30;
    case 78u: goto L_003DCF40;
    case 79u: goto L_003DCF60;
    case 80u: goto L_003DCF74;
    case 81u: goto L_003DCFA0;
    case 82u: goto L_003DD01C;
    case 83u: goto L_003DD030;
    case 84u: goto L_003DD098;
    case 85u: goto L_003DD0B0;
    case 86u: goto L_003DD0C4;
    case 87u: goto L_003DD140;
    case 88u: goto L_003DD170;
    case 89u: goto L_003DD188;
    case 90u: goto L_003DD1A0;
    case 91u: goto L_003DD1C8;
    case 92u: goto L_003DD1E4;
    case 93u: goto L_003DD200;
    case 94u: goto L_003DD210;
    case 95u: goto L_003DD224;
    case 96u: goto L_003DD23C;
    case 97u: goto L_003DD258;
    case 98u: goto L_003DD2A0;
    case 99u: goto L_003DD2F4;
    case 100u: goto L_003DD334;
    case 101u: goto L_003DD358;
    case 102u: goto L_003DD3A0;
    case 103u: goto L_003DD3B4;
    case 104u: goto L_003DD3E0;
    case 105u: goto L_003DD424;
    case 106u: goto L_003DD430;
    case 107u: goto L_003DD460;
    case 108u: goto L_003DD470;
    case 109u: goto L_003DD4B8;
    case 110u: goto L_003DD4C0;
    case 111u: goto L_003DD4DC;
    case 112u: goto L_003DD4F8;
    case 113u: goto L_003DD514;
    case 114u: goto L_003DD530;
    case 115u: goto L_003DD560;
    case 116u: goto L_003DD5BC;
    case 117u: goto L_003DD5DC;
    case 118u: goto L_003DD600;
    case 119u: goto L_003DD614;
    case 120u: goto L_003DD680;
    case 121u: goto L_003DD6B0;
    case 122u: goto L_003DD6C8;
    case 123u: goto L_003DD6E0;
    case 124u: goto L_003DD708;
    case 125u: goto L_003DD724;
    case 126u: goto L_003DD740;
    case 127u: goto L_003DD750;
    case 128u: goto L_003DD764;
    case 129u: goto L_003DD774;
    case 130u: goto L_003DD784;
    case 131u: goto L_003DD7D0;
    case 132u: goto L_003DD824;
    case 133u: goto L_003DD834;
    case 134u: goto L_003DD890;
    case 135u: goto L_003DD8A4;
    case 136u: goto L_003DD8D0;
    case 137u: goto L_003DD914;
    case 138u: goto L_003DD920;
    case 139u: goto L_003DD950;
    case 140u: goto L_003DD960;
    case 141u: goto L_003DD9A8;
    case 142u: goto L_003DD9B0;
    case 143u: goto L_003DD9CC;
    case 144u: goto L_003DD9E8;
    case 145u: goto L_003DDA04;
    case 146u: goto L_003DDA20;
    case 147u: goto L_003DDA50;
    case 148u: goto L_003DDAAC;
    case 149u: goto L_003DDACC;
    case 150u: goto L_003DDAF0;
    case 151u: goto L_003DDB04;
    case 152u: goto L_003DDB70;
    case 153u: goto L_003DDBA0;
    case 154u: goto L_003DDBB8;
    case 155u: goto L_003DDBD0;
    case 156u: goto L_003DDBF8;
    case 157u: goto L_003DDC14;
    case 158u: goto L_003DDC30;
    case 159u: goto L_003DDC40;
    case 160u: goto L_003DDC54;
    case 161u: goto L_003DDC80;
    case 162u: goto L_003DDCD4;
    case 163u: goto L_003DDCE4;
    case 164u: goto L_003DDD30;
    case 165u: goto L_003DDD44;
    case 166u: goto L_003DDD70;
    case 167u: goto L_003DDDB4;
    case 168u: goto L_003DDDC0;
    case 169u: goto L_003DDDF0;
    case 170u: goto L_003DDE00;
    case 171u: goto L_003DDE48;
    case 172u: goto L_003DDE50;
    case 173u: goto L_003DDE6C;
    case 174u: goto L_003DDE88;
    case 175u: goto L_003DDEA4;
    case 176u: goto L_003DDEC0;
    case 177u: goto L_003DDEF0;
    case 178u: goto L_003DDF4C;
    case 179u: goto L_003DDF6C;
    case 180u: goto L_003DDF90;
    case 181u: goto L_003DDFA4;
    case 182u: goto L_003DE010;
    case 183u: goto L_003DE040;
    case 184u: goto L_003DE058;
    case 185u: goto L_003DE070;
    case 186u: goto L_003DE098;
    case 187u: goto L_003DE0B4;
    case 188u: goto L_003DE0D0;
    case 189u: goto L_003DE0E0;
    case 190u: goto L_003DE0F4;
    case 191u: goto L_003DE0FC;
    case 192u: goto L_003DE120;
    case 193u: goto L_003DE16C;
    case 194u: goto L_003DE178;
    case 195u: goto L_003DE1A0;
    case 196u: goto L_003DE1B4;
    case 197u: goto L_003DE1E0;
    case 198u: goto L_003DE224;
    case 199u: goto L_003DE230;
    case 200u: goto L_003DE260;
    case 201u: goto L_003DE270;
    case 202u: goto L_003DE2B8;
    case 203u: goto L_003DE2C0;
    case 204u: goto L_003DE2DC;
    case 205u: goto L_003DE2F8;
    case 206u: goto L_003DE350;
    case 207u: goto L_003DE36C;
    case 208u: goto L_003DE388;
    case 209u: goto L_003DE3D4;
    case 210u: goto L_003DE3F0;
    case 211u: goto L_003DE40C;
    case 212u: goto L_003DE41C;
    case 213u: goto L_003DE438;
    case 214u: goto L_003DE454;
    case 215u: goto L_003DE484;
    case 216u: goto L_003DE4B8;
    case 217u: goto L_003DE4F0;
    case 218u: goto L_003DE510;
    case 219u: goto L_003DE56C;
    case 220u: goto L_003DE58C;
    case 221u: goto L_003DE5B0;
    case 222u: goto L_003DE5CC;
    case 223u: goto L_003DE5FC;
    case 224u: goto L_003DE604;
    case 225u: goto L_003DE614;
    case 226u: goto L_003DE644;
    case 227u: goto L_003DE680;
    case 228u: goto L_003DE694;
    case 229u: goto L_003DE700;
    case 230u: goto L_003DE730;
    case 231u: goto L_003DE748;
    case 232u: goto L_003DE760;
    case 233u: goto L_003DE788;
    case 234u: goto L_003DE7A4;
    case 235u: goto L_003DE7C0;
    case 236u: goto L_003DE7D0;
    case 237u: goto L_003DE8D8;
    case 238u: goto L_003DE8E4;
    case 239u: goto L_003DE8F0;
    case 240u: goto L_003DE930;
    case 241u: goto L_003DE94C;
    case 242u: goto L_003DE978;
    case 243u: goto L_003DE980;
    case 244u: goto L_003DE990;
    case 245u: goto L_003DE9C0;
    case 246u: goto L_003DE9F0;
    case 247u: goto L_003DEA04;
    case 248u: goto L_003DEA30;
    case 249u: goto L_003DEA74;
    case 250u: goto L_003DEA80;
    case 251u: goto L_003DEAB0;
    case 252u: goto L_003DEAC0;
    case 253u: goto L_003DEAD4;
    case 254u: goto L_003DEAE8;
    case 255u: goto L_003DEB64;
    case 256u: goto L_003DEBC0;
    case 257u: goto L_003DEBF4;
    case 258u: goto L_003DEC00;
    case 259u: goto L_003DEC18;
    case 260u: goto L_003DEC30;
    case 261u: goto L_003DEC58;
    case 262u: goto L_003DEC74;
    case 263u: goto L_003DEC90;
    case 264u: goto L_003DECA0;
    case 265u: goto L_003DED04;
    case 266u: goto L_003DED24;
    case 267u: goto L_003DED74;
    case 268u: goto L_003DED98;
    case 269u: goto L_003DEDA0;
    case 270u: goto L_003DEDA8;
    case 271u: goto L_003DEDBC;
    case 272u: goto L_003DEDD4;
    case 273u: goto L_003DEE20;
    case 274u: goto L_003DEE4C;
    case 275u: goto L_003DEE5C;
    case 276u: goto L_003DEE70;
    case 277u: goto L_003DEE84;
    case 278u: goto L_003DEEB0;
    case 279u: goto L_003DEF00;
    case 280u: goto L_003DEF10;
    case 281u: goto L_003DEF5C;
    case 282u: goto L_003DEF64;
    case 283u: goto L_003DEF94;
    case 284u: goto L_003DF040;
    case 285u: goto L_003DF084;
    case 286u: goto L_003DF0B0;
    case 287u: goto L_003DF0C0;
    case 288u: goto L_003DF0D4;
    case 289u: goto L_003DF100;
    case 290u: goto L_003DF130;
    case 291u: goto L_003DF148;
    case 292u: goto L_003DF160;
    case 293u: goto L_003DF188;
    case 294u: goto L_003DF1A4;
    case 295u: goto L_003DF1C0;
    case 296u: goto L_003DF1D0;
    case 297u: goto L_003DF200;
    case 298u: goto L_003DF218;
    case 299u: goto L_003DF228;
    case 300u: goto L_003DF240;
    case 301u: goto L_003DF264;
    case 302u: goto L_003DF27C;
    case 303u: goto L_003DF2A8;
    case 304u: goto L_003DF2B8;
    case 305u: goto L_003DF2C4;
    case 306u: goto L_003DF2DC;
    case 307u: goto L_003DF2F4;
    case 308u: goto L_003DF304;
    case 309u: goto L_003DF328;
    case 310u: goto L_003DF338;
    case 311u: goto L_003DF374;
    case 312u: goto L_003DF390;
    case 313u: goto L_003DF3C0;
    case 314u: goto L_003DF3CC;
    case 315u: goto L_003DF3EC;
    case 316u: goto L_003DF410;
    case 317u: goto L_003DF458;
    case 318u: goto L_003DF480;
    case 319u: goto L_003DF4A0;
    case 320u: goto L_003DF4B0;
    case 321u: goto L_003DF4BC;
    case 322u: goto L_003DF4CC;
    case 323u: goto L_003DF4D8;
    case 324u: goto L_003DF4F0;
    case 325u: goto L_003DF51C;
    case 326u: goto L_003DF52C;
    case 327u: goto L_003DF538;
    case 328u: goto L_003DF548;
    case 329u: goto L_003DF558;
    case 330u: goto L_003DF568;
    case 331u: goto L_003DF574;
    case 332u: goto L_003DF598;
    case 333u: goto L_003DF5D4;
    case 334u: goto L_003DF5F0;
    case 335u: goto L_003DF614;
    case 336u: goto L_003DF620;
    case 337u: goto L_003DF638;
    case 338u: goto L_003DF668;
    case 339u: goto L_003DF684;
    case 340u: goto L_003DF698;
    case 341u: goto L_003DF6A8;
    case 342u: goto L_003DF6C8;
    case 343u: goto L_003DF6DC;
    case 344u: goto L_003DF6EC;
    case 345u: goto L_003DF6FC;
    case 346u: goto L_003DF710;
    case 347u: goto L_003DF720;
    case 348u: goto L_003DF740;
    case 349u: goto L_003DF750;
    case 350u: goto L_003DF78C;
    case 351u: goto L_003DF7B0;
    case 352u: goto L_003DF7C4;
    case 353u: goto L_003DF830;
    case 354u: goto L_003DF860;
    case 355u: goto L_003DF878;
    case 356u: goto L_003DF890;
    case 357u: goto L_003DF8B8;
    case 358u: goto L_003DF8D4;
    case 359u: goto L_003DF8F0;
    case 360u: goto L_003DF900;
    case 361u: goto L_003DF940;
    case 362u: goto L_003DF98C;
    case 363u: goto L_003DF998;
    case 364u: goto L_003DF9A8;
    case 365u: goto L_003DF9BC;
    case 366u: goto L_003DFA64;
    case 367u: goto L_003DFA80;
    case 368u: goto L_003DFA98;
    case 369u: goto L_003DFBD0;
    case 370u: goto L_003DFBE4;
    case 371u: goto L_003DFC10;
    case 372u: goto L_003DFCB4;
    case 373u: goto L_003DFCE0;
    case 374u: goto L_003DFCF0;
    case 375u: goto L_003DFD04;
    case 376u: goto L_003DFD30;
    case 377u: goto L_003DFD60;
    case 378u: goto L_003DFD78;
    case 379u: goto L_003DFD90;
    case 380u: goto L_003DFDB8;
    case 381u: goto L_003DFDD4;
    case 382u: goto L_003DFDF0;
    case 383u: goto L_003DFE00;
    case 384u: goto L_003DFE10;
    case 385u: goto L_003DFE44;
    case 386u: goto L_003DFE60;
    case 387u: goto L_003DFE7C;
    case 388u: goto L_003DFF40;
    case 389u: goto L_003DFF54;
    case 390u: goto L_003DFF80;
    default: bad_entry(c, 0x003DC000u); return;
    }
L_003DC000:
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 1;
L_003DC004:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003DC054; } }
L_003DC01C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 100u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 112u), 0u);
    st32((c.r[16].w[0] + 124u), 0u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC050u); st32((c.r[16].w[0] + 116u), 0u);  if (depth < kMaxDepth) unit_00AF(c, 26u, depth + 1u); else { c.pc = 0x003DC460u; return; } if (c.pc != 0x003DC050u) [[unlikely]] return; }
L_003DC050:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003DC054:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003DC070:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003DC0B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 8352u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC0A0u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003DC0A0u) [[unlikely]] return; }
L_003DC0A0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003DC0BC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC0B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003DC0B8u) [[unlikely]] return; }
L_003DC0B8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003DC0BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003DC0D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC0F8u); set32(c.r[4], 0u + 128u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003DC0F8u) [[unlikely]] return; }
L_003DC0F8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003DC118; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC114u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 291u, depth + 1u); else { c.pc = 0x003DBFD0u; return; } if (c.pc != 0x003DC114u) [[unlikely]] return; }
L_003DC114:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003DC118:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003DC130:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 10u);  c.pc = t; return; }
L_003DC140:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[17], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC168u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 333u, depth + 1u); else { c.pc = 0x003C3B70u; return; } if (c.pc != 0x003DC168u) [[unlikely]] return; }
L_003DC168:
    st32((c.r[16].w[0] + 124u), c.f[0]);
    set32(c.r[8], 0u + 1u);
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.f[20] = 0u;
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003DC1B8; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_003DC184:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.f[0] = ld32((c.r[4].w[0] + 16u));  goto L_003DC1A0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_003DC1B8; } }
L_003DC1A0:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = fp::ee::add(c.fcr31, c.f[20], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DC184u | kUnwind; return; } goto L_003DC184; } }
    c.budget -= 1;
L_003DC1B8:
    c.budget -= 2;
    if (c.r[8].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  goto L_003DC1E8; }
    c.f[12] = ld32((c.r[16].w[0] + 124u));
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003DC1E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC1D8u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0005(c, 136u, depth + 1u); else { c.pc = 0x001372A8u; return; } if (c.pc != 0x003DC1D8u) [[unlikely]] return; }
L_003DC1D8:
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[20]);
    st32((c.r[16].w[0] + 124u), c.f[0]);
    st32((c.r[16].w[0] + 124u), c.f[1]);
    c.budget -= 3;
L_003DC1E4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003DC1E8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003DC210:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { goto L_003DC3B8; } }
    c.f[1] = ld32((c.r[17].w[0] + 120u));
    c.f[2] = ld32((c.r[17].w[0] + 124u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[16], ld32((c.r[17].w[0] + 112u)));  if (t) { goto L_003DC2F8; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 116u)));
    c.budget -= 1;
L_003DC254:
    set32(c.r[3], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.f[0] = ld32((c.r[17].w[0] + 124u));  goto L_003DC284; }
    c.f[0] = ld32((c.r[17].w[0] + 96u));
    st32((c.r[17].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 100u));
    st32((c.r[17].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    st32((c.r[17].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 108u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 76u), c.f[0]);  if (t) { goto L_003DC378; } }
L_003DC284:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 124u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 112u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003DC2B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 112u), 0u);  if (t) { goto L_003DC2B8; } }
L_003DC2B0:
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[17].w[0] + 112u), c.r[3].w[0]);
    c.budget -= 2;
L_003DC2B8:
    set32(c.r[3], ld32((c.r[17].w[0] + 112u)));
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003DC2D8; }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_003DC3B8; } }
L_003DC2D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC2E0u);  if (depth < kMaxDepth) unit_00AF(c, 26u, depth + 1u); else { c.pc = 0x003DC460u; return; } if (c.pc != 0x003DC2E0u) [[unlikely]] return; }
L_003DC2E0:
    c.f[1] = ld32((c.r[17].w[0] + 120u));
    c.f[2] = ld32((c.r[17].w[0] + 124u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[3], ld32((c.r[17].w[0] + 116u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003DC254u | kUnwind; return; } goto L_003DC254; }
    c.budget -= 1;
L_003DC2F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[17].w[0] + 120u));
    c.f[0] = 0u;
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    st32((c.r[17].w[0] + 120u), c.f[1]);
    st32((c.r[17].w[0] + 124u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 116u)));
    c.f[13] = ld32((c.r[2].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[13]));
    c.budget -= 12;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[17].w[0] + 120u));  goto L_003DC34C; }
    c.f[0] = ld32((c.r[17].w[0] + 96u));
    st32((c.r[17].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 100u));
    st32((c.r[17].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    st32((c.r[17].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 108u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 76u), c.f[0]);  if (t) { goto L_003DC378; } }
L_003DC34C:
    set32(c.r[5], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 24u)));
    c.f[14] = ld32((c.r[2].w[0] + 20u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC364u); c.f[12] = fp::ee::sub(c.fcr31, c.f[13], c.f[0]);  if (depth < kMaxDepth) unit_00A9(c, 18u, depth + 1u); else { c.pc = 0x003C4170u; return; } if (c.pc != 0x003DC364u) [[unlikely]] return; }
L_003DC364:
    c.f[12] = c.f[0];
    set32(c.r[4], c.r[17].w[0] + 64u);
    set32(c.r[5], c.r[17].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC378u); set32(c.r[6], c.r[17].w[0] + 96u);  if (depth < kMaxDepth) unit_001B(c, 157u, depth + 1u); else { c.pc = 0x0018EB60u; return; } if (c.pc != 0x003DC378u) [[unlikely]] return; }
L_003DC378:
    c.f[12] = c.f[20];
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC388u); set32(c.r[5], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003DC388u) [[unlikely]] return; }
L_003DC388:
    c.f[1] = ld32((c.r[17].w[0] + 48u));
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.f[3] = ld32((c.r[29].w[0] + 68u));
    c.f[2] = ld32((c.r[29].w[0] + 72u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 56u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[17].w[0] + 56u), c.f[0]);
    c.budget -= 12;
L_003DC3B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003DC3D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC3E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 331u, depth + 1u); else { c.pc = 0x003C3B20u; return; } if (c.pc != 0x003DC3E4u) [[unlikely]] return; }
L_003DC3E4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003DC404; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
L_003DC404:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003DC410:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003DC454; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[6], c.r[4].w[0] + 48u);  goto L_003DC448; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DC450; } }
    set32(c.r[6], c.r[4].w[0] + 48u);
    c.budget -= 1;
L_003DC448:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC450u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x003DC450u) [[unlikely]] return; }
L_003DC450:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003DC454:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003DC460:
    set32(c.r[5], ld32((c.r[4].w[0] + 44u)));
    c.f[1] = ld32((c.r[4].w[0] + 96u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = 0u;
    set32(c.r[5], ld32((c.r[5].w[0])));
    st32((c.r[4].w[0] + 80u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 100u));
    st32((c.r[4].w[0] + 84u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 104u));
    st32((c.r[4].w[0] + 88u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 108u));
    st32((c.r[4].w[0] + 92u), c.f[1]);
    set32(c.r[6], ld32((c.r[4].w[0] + 112u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[5], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[4].w[0] + 116u), c.r[5].w[0]);
    c.f[1] = ld32((c.r[5].w[0] + 16u));
    st32((c.r[4].w[0] + 120u), c.f[1]);
    set32(c.r[5], ld32((c.r[4].w[0] + 116u)));
    c.f[3] = ld32((c.r[5].w[0] + 8u));
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = ld32((c.r[5].w[0]));
    st32((c.r[4].w[0] + 96u), c.f[1]);
    st32((c.r[4].w[0] + 100u), c.f[2]);
    st32((c.r[4].w[0] + 104u), c.f[3]);
    st32((c.r[4].w[0] + 108u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[4].w[0] + 120u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 33;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003DC504; } }
    c.f[0] = ld32((c.r[4].w[0] + 96u));
    st32((c.r[4].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 100u));
    st32((c.r[4].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    st32((c.r[4].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 108u));
    st32((c.r[4].w[0] + 76u), c.f[0]);
    c.budget -= 8;
L_003DC504:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003DC510:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003DC584; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 116u)));  goto L_003DC530; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003DC5D0; } }
L_003DC530:
    set32(c.r[5], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_003DC5CC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[1].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003DC5CC; } }
    st32((c.r[4].w[0] + 112u), c.r[5].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 64u));
    st32((c.r[4].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 68u));
    st32((c.r[4].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 72u));
    st32((c.r[4].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 76u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC57Cu); st32((c.r[4].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_00AF(c, 26u, depth + 1u); else { c.pc = 0x003DC460u; return; } if (c.pc != 0x003DC57Cu) [[unlikely]] return; }
L_003DC57C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DC5CC; } }
L_003DC584:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_003DC5CC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[1].d[0] = c.r[6].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003DC5CC; } }
    st32((c.r[4].w[0] + 112u), c.r[6].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 64u));
    st32((c.r[4].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 68u));
    st32((c.r[4].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 72u));
    st32((c.r[4].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 76u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC5CCu); st32((c.r[4].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_00AF(c, 26u, depth + 1u); else { c.pc = 0x003DC460u; return; } if (c.pc != 0x003DC5CCu) [[unlikely]] return; }
L_003DC5CC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003DC5D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003DC5E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC5F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003DC5F4u) [[unlikely]] return; }
L_003DC5F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 8416u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    if (c.r[2].d[0] != 0ull) { st32((c.r[16].w[0] + 88u), 0u);  goto L_003DC62C; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003DC65C; } }
L_003DC62C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 84u), 0u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 80u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 92u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 100u), 0u);
    st32((c.r[16].w[0] + 112u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC658u); st32((c.r[16].w[0] + 96u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AF(c, 57u, depth + 1u); else { c.pc = 0x003DCA90u; return; } if (c.pc != 0x003DC658u) [[unlikely]] return; }
L_003DC658:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003DC65C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003DC670:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003DC6B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 8416u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC6A0u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003DC6A0u) [[unlikely]] return; }
L_003DC6A0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003DC6BC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC6B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003DC6B8u) [[unlikely]] return; }
L_003DC6B8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003DC6BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003DC6D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC6F8u); set32(c.r[4], 0u + 128u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003DC6F8u) [[unlikely]] return; }
L_003DC6F8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003DC718; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC714u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 30u, depth + 1u); else { c.pc = 0x003DC5E0u; return; } if (c.pc != 0x003DC714u) [[unlikely]] return; }
L_003DC714:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003DC718:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003DC730:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 8u);  c.pc = t; return; }
L_003DC740:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[17], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC768u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 333u, depth + 1u); else { c.pc = 0x003C3B70u; return; } if (c.pc != 0x003DC768u) [[unlikely]] return; }
L_003DC768:
    st32((c.r[16].w[0] + 112u), c.f[0]);
    set32(c.r[8], 0u + 1u);
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.f[20] = 0u;
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003DC7B8; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_003DC784:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.f[0] = ld32((c.r[4].w[0] + 16u));  goto L_003DC7A0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_003DC7B8; } }
L_003DC7A0:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = fp::ee::add(c.fcr31, c.f[20], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DC784u | kUnwind; return; } goto L_003DC784; } }
    c.budget -= 1;
L_003DC7B8:
    c.budget -= 2;
    if (c.r[8].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  goto L_003DC7E8; }
    c.f[12] = ld32((c.r[16].w[0] + 112u));
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003DC7E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC7D8u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0005(c, 136u, depth + 1u); else { c.pc = 0x001372A8u; return; } if (c.pc != 0x003DC7D8u) [[unlikely]] return; }
L_003DC7D8:
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[20]);
    st32((c.r[16].w[0] + 112u), c.f[0]);
    st32((c.r[16].w[0] + 112u), c.f[1]);
    c.budget -= 3;
L_003DC7E4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003DC7E8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003DC810:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { goto L_003DC9A8; } }
    c.f[2] = ld32((c.r[19].w[0] + 108u));
    set32(c.r[16], ld32((c.r[19].w[0] + 100u)));
    c.f[1] = ld32((c.r[19].w[0] + 112u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003DC908; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 104u)));
    c.budget -= 1;
L_003DC864:
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.f[0] = ld32((c.r[19].w[0] + 112u));  goto L_003DC88C; }
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[19].w[0] + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC884u); set32(c.r[7], c.r[19].w[0] + 80u);  if (depth < kMaxDepth) unit_00AF(c, 65u, depth + 1u); else { c.pc = 0x003DCCF0u; return; } if (c.pc != 0x003DC884u) [[unlikely]] return; }
L_003DC884:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_003DC9AC; } }
L_003DC88C:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[19].w[0] + 112u), c.f[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 100u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003DC8B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 100u), 0u);  if (t) { goto L_003DC8C0; } }
L_003DC8B8:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 2;
L_003DC8C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC8C8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 57u, depth + 1u); else { c.pc = 0x003DCA90u; return; } if (c.pc != 0x003DC8C8u) [[unlikely]] return; }
L_003DC8C8:
    set32(c.r[3], ld32((c.r[19].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[3].d[0]; c.r[17].d[0] = c.r[17].d[0] | c.r[2].d[0];  if (t) { goto L_003DC8F0; } }
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.f[2] = ld32((c.r[19].w[0] + 108u));  goto L_003DC8F4; }
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.r[3].w[0]);  if (t) { goto L_003DC9A8; } }
L_003DC8F0:
    c.f[2] = ld32((c.r[19].w[0] + 108u));
    c.budget -= 1;
L_003DC8F4:
    c.f[1] = ld32((c.r[19].w[0] + 112u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[2], ld32((c.r[19].w[0] + 104u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003DC864u | kUnwind; return; } goto L_003DC864; }
    c.budget -= 1;
L_003DC908:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[0] = ld32((c.r[19].w[0] + 108u));
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], c.r[19].w[0] + 64u);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 108u), c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC92Cu); st32((c.r[19].w[0] + 112u), c.f[20]);  if (depth < kMaxDepth) unit_00AF(c, 61u, depth + 1u); else { c.pc = 0x003DCC30u; return; } if (c.pc != 0x003DC92Cu) [[unlikely]] return; }
L_003DC92C:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC940u); set32(c.r[7], c.r[19].w[0] + 80u);  if (depth < kMaxDepth) unit_00AF(c, 65u, depth + 1u); else { c.pc = 0x003DCCF0u; return; } if (c.pc != 0x003DC940u) [[unlikely]] return; }
L_003DC940:
    set32(c.r[3], ld32((c.r[19].w[0] + 104u)));
    c.f[0] = 0u;
    c.f[13] = ld32((c.r[3].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[13]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[19].w[0] + 108u));  goto L_003DC97C; }
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    st32((c.r[19].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 100u));
    st32((c.r[19].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 104u));
    st32((c.r[19].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 108u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 60u), c.f[0]);  if (t) { goto L_003DC9A8; } }
L_003DC97C:
    set32(c.r[5], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 24u)));
    c.f[14] = ld32((c.r[3].w[0] + 20u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC994u); c.f[12] = fp::ee::sub(c.fcr31, c.f[13], c.f[0]);  if (depth < kMaxDepth) unit_00A9(c, 18u, depth + 1u); else { c.pc = 0x003C4170u; return; } if (c.pc != 0x003DC994u) [[unlikely]] return; }
L_003DC994:
    set32(c.r[4], c.r[19].w[0] + 48u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.f[12] = c.f[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC9A8u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_001B(c, 157u, depth + 1u); else { c.pc = 0x0018EB60u; return; } if (c.pc != 0x003DC9A8u) [[unlikely]] return; }
L_003DC9A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_003DC9AC:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003DC9D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC9E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 331u, depth + 1u); else { c.pc = 0x003C3B20u; return; } if (c.pc != 0x003DC9E4u) [[unlikely]] return; }
L_003DC9E4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003DCA04; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
L_003DCA04:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003DCA10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 8;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003DCA7C; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[6].w[0] + 104u)));  goto L_003DCA4C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DCA78; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 104u)));
    c.budget -= 1;
L_003DCA4C:
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[5].d[0] + 0ull;  goto L_003DCA70; }
    set32(c.r[6], c.r[6].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCA64u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x003DCA64u) [[unlikely]] return; }
L_003DCA64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DCA78; } }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_003DCA70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCA78u); set32(c.r[5], c.r[6].w[0] + 48u);  if (depth < kMaxDepth) unit_001B(c, 226u, depth + 1u); else { c.pc = 0x0018FA70u; return; } if (c.pc != 0x003DCA78u) [[unlikely]] return; }
L_003DCA78:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003DCA7C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003DCA90:
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    c.f[0] = ld32((c.r[4].w[0] + 80u));
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[4].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 84u));
    st32((c.r[4].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 88u));
    st32((c.r[4].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 92u));
    st32((c.r[4].w[0] + 76u), c.f[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 104u)));
    c.budget -= 13;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 100u)));  goto L_003DCADC; }
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st32((c.r[4].w[0] + 96u), 0u);  goto L_003DCAD8; }
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 2;
L_003DCAD8:
    set32(c.r[5], ld32((c.r[4].w[0] + 100u)));
    c.budget -= 1;
L_003DCADC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.f[0] = 0u;
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[4].w[0] + 104u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[3].w[0] + 16u));
    st32((c.r[4].w[0] + 108u), c.f[1]);
    set32(c.r[3], ld32((c.r[4].w[0] + 104u)));
    c.f[3] = ld32((c.r[3].w[0] + 8u));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0]));
    st32((c.r[4].w[0] + 80u), c.f[1]);
    st32((c.r[4].w[0] + 84u), c.f[2]);
    st32((c.r[4].w[0] + 88u), c.f[3]);
    st32((c.r[4].w[0] + 92u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[4].w[0] + 108u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 22;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[2], 0u + 1u);  goto L_003DCB58; }
    c.f[0] = ld32((c.r[4].w[0] + 80u));
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 84u));
    st32((c.r[4].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 88u));
    st32((c.r[4].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 92u));
    st32((c.r[4].w[0] + 60u), c.f[0]);
    c.budget -= 9;
L_003DCB58:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003DCB60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003DCBD4; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 104u)));  goto L_003DCB80; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003DCC20; } }
L_003DCB80:
    set32(c.r[5], ld32((c.r[3].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_003DCC1C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[1].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003DCC1C; } }
    st32((c.r[4].w[0] + 100u), c.r[5].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 48u));
    st32((c.r[4].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 52u));
    st32((c.r[4].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 56u));
    st32((c.r[4].w[0] + 88u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 60u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCBCCu); st32((c.r[4].w[0] + 92u), c.f[0]);  if (depth < kMaxDepth) unit_00AF(c, 57u, depth + 1u); else { c.pc = 0x003DCA90u; return; } if (c.pc != 0x003DCBCCu) [[unlikely]] return; }
L_003DCBCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DCC1C; } }
L_003DCBD4:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_003DCC1C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[1].d[0] = c.r[6].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003DCC1C; } }
    st32((c.r[4].w[0] + 100u), c.r[6].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 48u));
    st32((c.r[4].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 52u));
    st32((c.r[4].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 56u));
    st32((c.r[4].w[0] + 88u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 60u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCC1Cu); st32((c.r[4].w[0] + 92u), c.f[0]);  if (depth < kMaxDepth) unit_00AF(c, 57u, depth + 1u); else { c.pc = 0x003DCA90u; return; } if (c.pc != 0x003DCC1Cu) [[unlikely]] return; }
L_003DCC1C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003DCC20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003DCC30:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_003DCC64; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 96u)));
    c.r[3].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] ^ 1ull;  if (t) { goto L_003DCC6C; } }
L_003DCC64:
    set32(c.r[4], ld32((c.r[4].w[0] + 96u)));
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 2;
L_003DCC6C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.f[0] = ld32((c.r[16].w[0]));  goto L_003DCCB4; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[5].d[0] = c.r[6].d[0] + 0ull;  goto L_003DCC94; }
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCC8Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 229u, depth + 1u); else { c.pc = 0x0018FAB0u; return; } if (c.pc != 0x003DCC8Cu) [[unlikely]] return; }
L_003DCC8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003DCCD4; } }
L_003DCC94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCC9Cu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_001B(c, 222u, depth + 1u); else { c.pc = 0x0018F5B0u; return; } if (c.pc != 0x003DCC9Cu) [[unlikely]] return; }
L_003DCC9C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCCACu); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_001B(c, 229u, depth + 1u); else { c.pc = 0x0018FAB0u; return; } if (c.pc != 0x003DCCACu) [[unlikely]] return; }
L_003DCCAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DCCD0; } }
L_003DCCB4:
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[17].w[0] + 12u), c.f[0]);
    c.budget -= 7;
L_003DCCD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003DCCD4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003DCCF0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[8], ld32((c.r[4].w[0] + 104u)));
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[8].w[0] + 28u)));
    c.budget -= 10;
    { const bool t = c.r[7].d[0] == c.r[3].d[0]; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003DCDB0; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    if (c.r[7].d[0] == c.r[5].d[0]) { c.f[0] = ld32((c.r[16].w[0]));  goto L_003DCD90; }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_003DCD8C; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[7].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[4].w[0] + 36u)));  goto L_003DCD40; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003DCDF0; } }
L_003DCD40:
    set32(c.r[3], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003DCDEC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_003DCD64; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 1;
L_003DCD64:
    set32(c.r[7], ld32((c.r[8].w[0] + 32u)));
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCD74u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000E(c, 169u, depth + 1u); else { c.pc = 0x00159180u; return; } if (c.pc != 0x003DCD74u) [[unlikely]] return; }
L_003DCD74:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCD84u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_001B(c, 229u, depth + 1u); else { c.pc = 0x0018FAB0u; return; } if (c.pc != 0x003DCD84u) [[unlikely]] return; }
L_003DCD84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DCDEC; } }
L_003DCD8C:
    c.f[0] = ld32((c.r[16].w[0]));
    c.budget -= 1;
L_003DCD90:
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 12u), c.f[0]);  if (t) { goto L_003DCDEC; } }
L_003DCDB0:
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCDBCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 225u, depth + 1u); else { c.pc = 0x0018FA60u; return; } if (c.pc != 0x003DCDBCu) [[unlikely]] return; }
L_003DCDBC:
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.budget -= 12;
L_003DCDEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003DCDF0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003DCE00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCE14u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003DCE14u) [[unlikely]] return; }
L_003DCE14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 8480u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] - 5u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_003DCE54; }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
L_003DCE54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003DCE70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003DCEB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 8480u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCEA0u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003DCEA0u) [[unlikely]] return; }
L_003DCEA0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003DCEBC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCEB8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003DCEB8u) [[unlikely]] return; }
L_003DCEB8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003DCEBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003DCED0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCEF8u); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003DCEF8u) [[unlikely]] return; }
L_003DCEF8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003DCF18; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCF14u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 69u, depth + 1u); else { c.pc = 0x003DCE00u; return; } if (c.pc != 0x003DCF14u) [[unlikely]] return; }
L_003DCF14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003DCF18:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003DCF30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003DCF40:
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_003DCF60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCF74u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 331u, depth + 1u); else { c.pc = 0x003C3B20u; return; } if (c.pc != 0x003DCF74u) [[unlikely]] return; }
L_003DCF74:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003DCF94; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
L_003DCF94:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003DCFA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003DD020; }
    c.r[3].d[0] = c.r[6].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 44u)));  goto L_003DCFD4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DD01C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 1;
L_003DCFD4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[7], c.r[29].w[0] + 16u);
    c.f[3] = ld32((c.r[3].w[0] + 8u));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[12]);
    st32((c.r[29].w[0] + 28u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 24u), c.f[3]);
    st32((c.r[29].w[0] + 16u), c.f[1]);
    st32((c.r[29].w[0] + 24u), c.f[0]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[12]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[12]);
    st32((c.r[29].w[0] + 20u), c.f[2]);
    st32((c.r[29].w[0] + 16u), c.f[1]);
    st32((c.r[29].w[0] + 20u), c.f[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD01Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 340u, depth + 1u); else { c.pc = 0x003C3D70u; return; } if (c.pc != 0x003DD01Cu) [[unlikely]] return; }
L_003DD01C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003DD020:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003DD030:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003DD09C; }
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = ld32((c.r[3].w[0] + 8u));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[12]);
    st32((c.r[29].w[0] + 28u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 24u), c.f[3]);
    st32((c.r[29].w[0] + 16u), c.f[1]);
    st32((c.r[29].w[0] + 24u), c.f[0]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[12]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[12]);
    st32((c.r[29].w[0] + 20u), c.f[2]);
    st32((c.r[29].w[0] + 16u), c.f[1]);
    st32((c.r[29].w[0] + 20u), c.f[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[8], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD098u); set32(c.r[7], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_00A8(c, 352u, depth + 1u); else { c.pc = 0x003C3EF0u; return; } if (c.pc != 0x003DD098u) [[unlikely]] return; }
L_003DD098:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003DD09C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003DD0B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD0C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003DD0C4u) [[unlikely]] return; }
L_003DD0C4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], c.r[3].w[0] + 8544u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 72u), 0u);
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 64u), 0u);
    st32((c.r[16].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] - 5u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 18;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_003DD128; }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
L_003DD128:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003DD140:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003DD188; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 8544u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD170u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003DD170u) [[unlikely]] return; }
L_003DD170:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003DD18C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD188u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003DD188u) [[unlikely]] return; }
L_003DD188:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003DD18C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003DD1A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD1C8u); set32(c.r[4], 0u + 96u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003DD1C8u) [[unlikely]] return; }
L_003DD1C8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003DD1E8; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD1E4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 85u, depth + 1u); else { c.pc = 0x003DD0B0u; return; } if (c.pc != 0x003DD1E4u) [[unlikely]] return; }
L_003DD1E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003DD1E8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003DD200:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 5u);  c.pc = t; return; }
L_003DD210:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD224u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 108u, depth + 1u); else { c.pc = 0x003DD470u; return; } if (c.pc != 0x003DD224u) [[unlikely]] return; }
L_003DD224:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 4;
    if (c.r[5].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  goto L_003DD27C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD23Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 333u, depth + 1u); else { c.pc = 0x003C3B70u; return; } if (c.pc != 0x003DD23Cu) [[unlikely]] return; }
L_003DD23C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[5], c.r[16].w[0] + 80u);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD258u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003DD258u) [[unlikely]] return; }
L_003DD258:
    c.f[3] = ld32((c.r[29].w[0] + 36u));
    c.f[2] = ld32((c.r[29].w[0] + 40u));
    c.f[1] = ld32((c.r[29].w[0] + 44u));
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    st32((c.r[16].w[0] + 48u), c.f[0]);
    st32((c.r[16].w[0] + 52u), c.f[3]);
    st32((c.r[16].w[0] + 56u), c.f[2]);
    st32((c.r[16].w[0] + 60u), c.f[1]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 9;
L_003DD27C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003DD2A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_003DD324; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.f[1] = ld32((c.r[16].w[0] + 64u));  goto L_003DD2F8; }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003DD2F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD2F4u);  if (depth < kMaxDepth) unit_00AF(c, 108u, depth + 1u); else { c.pc = 0x003DD470u; return; } if (c.pc != 0x003DD2F4u) [[unlikely]] return; }
L_003DD2F4:
    c.f[1] = ld32((c.r[16].w[0] + 64u));
    c.budget -= 1;
L_003DD2F8:
    c.f[0] = ld32((c.r[16].w[0] + 48u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 68u));
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 72u));
    c.f[0] = ld32((c.r[16].w[0] + 56u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 56u), c.f[0]);
    c.budget -= 11;
L_003DD324:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD334u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 333u, depth + 1u); else { c.pc = 0x003C3B70u; return; } if (c.pc != 0x003DD334u) [[unlikely]] return; }
L_003DD334:
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[16].w[0] + 80u);
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[1]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[0], c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD358u); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003DD358u) [[unlikely]] return; }
L_003DD358:
    c.f[3] = ld32((c.r[29].w[0] + 52u));
    c.f[2] = ld32((c.r[29].w[0] + 56u));
    c.f[1] = ld32((c.r[29].w[0] + 60u));
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    st32((c.r[16].w[0] + 64u), c.f[0]);
    st32((c.r[16].w[0] + 68u), c.f[3]);
    st32((c.r[16].w[0] + 72u), c.f[2]);
    st32((c.r[16].w[0] + 76u), c.f[1]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003DD3A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD3B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 331u, depth + 1u); else { c.pc = 0x003C3B20u; return; } if (c.pc != 0x003DD3B4u) [[unlikely]] return; }
L_003DD3B4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003DD3D4; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
L_003DD3D4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003DD3E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003DD428; }
    c.r[3].d[0] = c.r[6].d[0] & 2ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 44u)));  goto L_003DD414; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DD424; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 1;
L_003DD414:
    set32(c.r[7], c.r[4].w[0] + 48u);
    set32(c.r[6], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD424u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 340u, depth + 1u); else { c.pc = 0x003C3D70u; return; } if (c.pc != 0x003DD424u) [[unlikely]] return; }
L_003DD424:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003DD428:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003DD430:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003DD464; }
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[8], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD460u); set32(c.r[7], c.r[4].w[0] + 48u);  if (depth < kMaxDepth) unit_00A8(c, 352u, depth + 1u); else { c.pc = 0x003C3EF0u; return; } if (c.pc != 0x003DD460u) [[unlikely]] return; }
L_003DD460:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003DD464:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003DD470:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003DD4C8; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 40u)));  goto L_003DD4B0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 44u)));  if (t) { goto L_003DD4E4; } }
L_003DD4B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD4B8u); c.r[17].d[0] = ld16((c.r[2].w[0] + 86u));  if (depth < kMaxDepth) unit_00A8(c, 332u, depth + 1u); else { c.pc = 0x003C3B40u; return; } if (c.pc != 0x003DD4B8u) [[unlikely]] return; }
L_003DD4B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD4C0u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 400u, depth + 1u); else { c.pc = 0x00173CE0u; return; } if (c.pc != 0x003DD4C0u) [[unlikely]] return; }
L_003DD4C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] + c.r[17].w[0]);  if (t) { goto L_003DD4E0; } }
L_003DD4C8:
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.f[12] = ld32((c.r[2].w[0] + 64u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD4DCu); c.r[17].d[0] = ld16((c.r[3].w[0] + 86u));  if (depth < kMaxDepth) unit_0014(c, 400u, depth + 1u); else { c.pc = 0x00173CE0u; return; } if (c.pc != 0x003DD4DCu) [[unlikely]] return; }
L_003DD4DC:
    set32(c.r[17], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 1;
L_003DD4E0:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 1;
L_003DD4E4:
    set32(c.r[5], c.r[17].w[0] + 2u);
    c.f[12] = ld32((c.r[2].w[0] + 8u));
    c.f[13] = ld32((c.r[2].w[0] + 20u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD4F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 115u, depth + 1u); else { c.pc = 0x003DD560u; return; } if (c.pc != 0x003DD4F8u) [[unlikely]] return; }
L_003DD4F8:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.f[21] = c.f[0];
    set32(c.r[5], c.r[17].w[0] + 1u);
    c.f[12] = ld32((c.r[2].w[0] + 4u));
    c.f[13] = ld32((c.r[2].w[0] + 16u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD514u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 115u, depth + 1u); else { c.pc = 0x003DD560u; return; } if (c.pc != 0x003DD514u) [[unlikely]] return; }
L_003DD514:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[20] = c.f[0];
    c.f[12] = ld32((c.r[2].w[0]));
    c.f[13] = ld32((c.r[2].w[0] + 12u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD530u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 115u, depth + 1u); else { c.pc = 0x003DD560u; return; } if (c.pc != 0x003DD530u) [[unlikely]] return; }
L_003DD530:
    st32((c.r[16].w[0] + 80u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 84u), c.f[20]);
    st32((c.r[16].w[0] + 88u), c.f[21]);
    st32((c.r[16].w[0] + 92u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003DD560:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    c.f[21] = c.f[12];
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.f[20] = fp::ee::sub(c.fcr31, c.f[13], c.f[21]);  if (t) { goto L_003DD5D0; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.f[12] = c.f[20];  goto L_003DD5D4; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[5].d[0] + 0ull;  goto L_003DD5B4; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003DD5B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003DD5E4; } }
L_003DD5B0:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_003DD5B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD5BCu);  if (depth < kMaxDepth) unit_00A9(c, 273u, depth + 1u); else { c.pc = 0x003C6AA0u; return; } if (c.pc != 0x003DD5BCu) [[unlikely]] return; }
L_003DD5BC:
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[21]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[0]);  if (t) { goto L_003DD5E0; } }
L_003DD5D0:
    c.f[12] = c.f[20];
    c.budget -= 1;
L_003DD5D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD5DCu);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003DD5DCu) [[unlikely]] return; }
L_003DD5DC:
    c.f[0] = fp::ee::add(c.fcr31, c.f[21], c.f[0]);
    c.budget -= 1;
L_003DD5E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003DD5E4:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003DD600:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD614u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003DD614u) [[unlikely]] return; }
L_003DD614:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], c.r[3].w[0] + 8608u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] - 5u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 14;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_003DD668; }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
L_003DD668:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003DD680:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003DD6C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 8608u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD6B0u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003DD6B0u) [[unlikely]] return; }
L_003DD6B0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003DD6CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD6C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003DD6C8u) [[unlikely]] return; }
L_003DD6C8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003DD6CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003DD6E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD708u); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003DD708u) [[unlikely]] return; }
L_003DD708:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003DD728; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD724u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 118u, depth + 1u); else { c.pc = 0x003DD600u; return; } if (c.pc != 0x003DD724u) [[unlikely]] return; }
L_003DD724:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003DD728:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003DD740:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 4u);  c.pc = t; return; }
L_003DD750:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD764u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 140u, depth + 1u); else { c.pc = 0x003DD960u; return; } if (c.pc != 0x003DD764u) [[unlikely]] return; }
L_003DD764:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD774u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 333u, depth + 1u); else { c.pc = 0x003C3B70u; return; } if (c.pc != 0x003DD774u) [[unlikely]] return; }
L_003DD774:
    c.f[12] = c.f[0];
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD784u); set32(c.r[5], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003DD784u) [[unlikely]] return; }
L_003DD784:
    c.f[3] = ld32((c.r[29].w[0] + 36u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.f[2] = ld32((c.r[29].w[0] + 40u));
    c.f[1] = ld32((c.r[29].w[0] + 44u));
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    st32((c.r[16].w[0] + 48u), c.f[0]);
    st32((c.r[16].w[0] + 52u), c.f[3]);
    st32((c.r[16].w[0] + 56u), c.f[2]);
    st32((c.r[16].w[0] + 60u), c.f[1]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003DD7D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_003DD864; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.f[12] = c.f[20];  goto L_003DD828; }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003DD824; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD824u);  if (depth < kMaxDepth) unit_00AF(c, 140u, depth + 1u); else { c.pc = 0x003DD960u; return; } if (c.pc != 0x003DD824u) [[unlikely]] return; }
L_003DD824:
    c.f[12] = c.f[20];
    c.budget -= 1;
L_003DD828:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD834u); set32(c.r[5], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003DD834u) [[unlikely]] return; }
L_003DD834:
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    c.f[3] = ld32((c.r[29].w[0] + 52u));
    c.f[2] = ld32((c.r[29].w[0] + 56u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 56u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[0]);
    c.budget -= 12;
L_003DD864:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003DD890:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD8A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 331u, depth + 1u); else { c.pc = 0x003C3B20u; return; } if (c.pc != 0x003DD8A4u) [[unlikely]] return; }
L_003DD8A4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003DD8C4; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
L_003DD8C4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003DD8D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003DD918; }
    c.r[3].d[0] = c.r[6].d[0] & 2ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 44u)));  goto L_003DD904; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DD914; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 1;
L_003DD904:
    set32(c.r[7], c.r[4].w[0] + 48u);
    set32(c.r[6], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD914u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 340u, depth + 1u); else { c.pc = 0x003C3D70u; return; } if (c.pc != 0x003DD914u) [[unlikely]] return; }
L_003DD914:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003DD918:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003DD920:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003DD954; }
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[8], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD950u); set32(c.r[7], c.r[4].w[0] + 48u);  if (depth < kMaxDepth) unit_00A8(c, 352u, depth + 1u); else { c.pc = 0x003C3EF0u; return; } if (c.pc != 0x003DD950u) [[unlikely]] return; }
L_003DD950:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003DD954:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003DD960:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003DD9B8; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 40u)));  goto L_003DD9A0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 44u)));  if (t) { goto L_003DD9D4; } }
L_003DD9A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD9A8u); c.r[17].d[0] = ld16((c.r[2].w[0] + 86u));  if (depth < kMaxDepth) unit_00A8(c, 332u, depth + 1u); else { c.pc = 0x003C3B40u; return; } if (c.pc != 0x003DD9A8u) [[unlikely]] return; }
L_003DD9A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD9B0u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 400u, depth + 1u); else { c.pc = 0x00173CE0u; return; } if (c.pc != 0x003DD9B0u) [[unlikely]] return; }
L_003DD9B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] + c.r[17].w[0]);  if (t) { goto L_003DD9D0; } }
L_003DD9B8:
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.f[12] = ld32((c.r[2].w[0] + 64u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD9CCu); c.r[17].d[0] = ld16((c.r[3].w[0] + 86u));  if (depth < kMaxDepth) unit_0014(c, 400u, depth + 1u); else { c.pc = 0x00173CE0u; return; } if (c.pc != 0x003DD9CCu) [[unlikely]] return; }
L_003DD9CC:
    set32(c.r[17], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 1;
L_003DD9D0:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 1;
L_003DD9D4:
    set32(c.r[5], c.r[17].w[0] + 2u);
    c.f[12] = ld32((c.r[2].w[0] + 8u));
    c.f[13] = ld32((c.r[2].w[0] + 20u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD9E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 147u, depth + 1u); else { c.pc = 0x003DDA50u; return; } if (c.pc != 0x003DD9E8u) [[unlikely]] return; }
L_003DD9E8:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.f[21] = c.f[0];
    set32(c.r[5], c.r[17].w[0] + 1u);
    c.f[12] = ld32((c.r[2].w[0] + 4u));
    c.f[13] = ld32((c.r[2].w[0] + 16u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDA04u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 147u, depth + 1u); else { c.pc = 0x003DDA50u; return; } if (c.pc != 0x003DDA04u) [[unlikely]] return; }
L_003DDA04:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[20] = c.f[0];
    c.f[12] = ld32((c.r[2].w[0]));
    c.f[13] = ld32((c.r[2].w[0] + 12u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDA20u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 147u, depth + 1u); else { c.pc = 0x003DDA50u; return; } if (c.pc != 0x003DDA20u) [[unlikely]] return; }
L_003DDA20:
    st32((c.r[16].w[0] + 64u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 68u), c.f[20]);
    st32((c.r[16].w[0] + 72u), c.f[21]);
    st32((c.r[16].w[0] + 76u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003DDA50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    c.f[21] = c.f[12];
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.f[20] = fp::ee::sub(c.fcr31, c.f[13], c.f[21]);  if (t) { goto L_003DDAC0; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.f[12] = c.f[20];  goto L_003DDAC4; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[5].d[0] + 0ull;  goto L_003DDAA4; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003DDAA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003DDAD4; } }
L_003DDAA0:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_003DDAA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDAACu);  if (depth < kMaxDepth) unit_00A9(c, 273u, depth + 1u); else { c.pc = 0x003C6AA0u; return; } if (c.pc != 0x003DDAACu) [[unlikely]] return; }
L_003DDAAC:
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[21]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[0]);  if (t) { goto L_003DDAD0; } }
L_003DDAC0:
    c.f[12] = c.f[20];
    c.budget -= 1;
L_003DDAC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDACCu);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003DDACCu) [[unlikely]] return; }
L_003DDACC:
    c.f[0] = fp::ee::add(c.fcr31, c.f[21], c.f[0]);
    c.budget -= 1;
L_003DDAD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003DDAD4:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003DDAF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDB04u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003DDB04u) [[unlikely]] return; }
L_003DDB04:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], c.r[3].w[0] + 8672u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] - 5u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 14;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_003DDB58; }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
L_003DDB58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003DDB70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003DDBB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 8672u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDBA0u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003DDBA0u) [[unlikely]] return; }
L_003DDBA0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003DDBBC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDBB8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003DDBB8u) [[unlikely]] return; }
L_003DDBB8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003DDBBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003DDBD0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDBF8u); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003DDBF8u) [[unlikely]] return; }
L_003DDBF8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003DDC18; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDC14u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 150u, depth + 1u); else { c.pc = 0x003DDAF0u; return; } if (c.pc != 0x003DDC14u) [[unlikely]] return; }
L_003DDC14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003DDC18:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003DDC30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 3u);  c.pc = t; return; }
L_003DDC40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDC54u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 170u, depth + 1u); else { c.pc = 0x003DDE00u; return; } if (c.pc != 0x003DDC54u) [[unlikely]] return; }
L_003DDC54:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003DDC80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.f[20] = c.f[12];  if (t) { goto L_003DDCD4; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[12] = c.f[20];  goto L_003DDCD8; }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003DDCD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDCD4u);  if (depth < kMaxDepth) unit_00AF(c, 170u, depth + 1u); else { c.pc = 0x003DDE00u; return; } if (c.pc != 0x003DDCD4u) [[unlikely]] return; }
L_003DDCD4:
    c.f[12] = c.f[20];
    c.budget -= 1;
L_003DDCD8:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDCE4u); set32(c.r[5], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003DDCE4u) [[unlikely]] return; }
L_003DDCE4:
    c.f[3] = ld32((c.r[29].w[0] + 52u));
    c.f[2] = ld32((c.r[29].w[0] + 56u));
    c.f[1] = ld32((c.r[29].w[0] + 60u));
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    st32((c.r[16].w[0] + 48u), c.f[0]);
    st32((c.r[16].w[0] + 52u), c.f[3]);
    st32((c.r[16].w[0] + 56u), c.f[2]);
    st32((c.r[16].w[0] + 60u), c.f[1]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003DDD30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDD44u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 331u, depth + 1u); else { c.pc = 0x003C3B20u; return; } if (c.pc != 0x003DDD44u) [[unlikely]] return; }
L_003DDD44:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003DDD64; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
L_003DDD64:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003DDD70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003DDDB8; }
    c.r[3].d[0] = c.r[6].d[0] & 2ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 44u)));  goto L_003DDDA4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DDDB4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 1;
L_003DDDA4:
    set32(c.r[7], c.r[4].w[0] + 48u);
    set32(c.r[6], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDDB4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 340u, depth + 1u); else { c.pc = 0x003C3D70u; return; } if (c.pc != 0x003DDDB4u) [[unlikely]] return; }
L_003DDDB4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003DDDB8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003DDDC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003DDDF4; }
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[8], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDDF0u); set32(c.r[7], c.r[4].w[0] + 48u);  if (depth < kMaxDepth) unit_00A8(c, 352u, depth + 1u); else { c.pc = 0x003C3EF0u; return; } if (c.pc != 0x003DDDF0u) [[unlikely]] return; }
L_003DDDF0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003DDDF4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003DDE00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003DDE58; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 40u)));  goto L_003DDE40; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 44u)));  if (t) { goto L_003DDE74; } }
L_003DDE40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDE48u); c.r[17].d[0] = ld16((c.r[2].w[0] + 86u));  if (depth < kMaxDepth) unit_00A8(c, 332u, depth + 1u); else { c.pc = 0x003C3B40u; return; } if (c.pc != 0x003DDE48u) [[unlikely]] return; }
L_003DDE48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDE50u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 400u, depth + 1u); else { c.pc = 0x00173CE0u; return; } if (c.pc != 0x003DDE50u) [[unlikely]] return; }
L_003DDE50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] + c.r[17].w[0]);  if (t) { goto L_003DDE70; } }
L_003DDE58:
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.f[12] = ld32((c.r[2].w[0] + 64u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDE6Cu); c.r[17].d[0] = ld16((c.r[3].w[0] + 86u));  if (depth < kMaxDepth) unit_0014(c, 400u, depth + 1u); else { c.pc = 0x00173CE0u; return; } if (c.pc != 0x003DDE6Cu) [[unlikely]] return; }
L_003DDE6C:
    set32(c.r[17], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 1;
L_003DDE70:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 1;
L_003DDE74:
    set32(c.r[5], c.r[17].w[0] + 2u);
    c.f[12] = ld32((c.r[2].w[0] + 8u));
    c.f[13] = ld32((c.r[2].w[0] + 20u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDE88u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 177u, depth + 1u); else { c.pc = 0x003DDEF0u; return; } if (c.pc != 0x003DDE88u) [[unlikely]] return; }
L_003DDE88:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.f[21] = c.f[0];
    set32(c.r[5], c.r[17].w[0] + 1u);
    c.f[12] = ld32((c.r[2].w[0] + 4u));
    c.f[13] = ld32((c.r[2].w[0] + 16u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDEA4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 177u, depth + 1u); else { c.pc = 0x003DDEF0u; return; } if (c.pc != 0x003DDEA4u) [[unlikely]] return; }
L_003DDEA4:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[20] = c.f[0];
    c.f[12] = ld32((c.r[2].w[0]));
    c.f[13] = ld32((c.r[2].w[0] + 12u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDEC0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 177u, depth + 1u); else { c.pc = 0x003DDEF0u; return; } if (c.pc != 0x003DDEC0u) [[unlikely]] return; }
L_003DDEC0:
    st32((c.r[16].w[0] + 64u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 68u), c.f[20]);
    st32((c.r[16].w[0] + 72u), c.f[21]);
    st32((c.r[16].w[0] + 76u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003DDEF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    c.f[21] = c.f[12];
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.f[20] = fp::ee::sub(c.fcr31, c.f[13], c.f[21]);  if (t) { goto L_003DDF60; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.f[12] = c.f[20];  goto L_003DDF64; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[5].d[0] + 0ull;  goto L_003DDF44; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003DDF40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003DDF74; } }
L_003DDF40:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_003DDF44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDF4Cu);  if (depth < kMaxDepth) unit_00A9(c, 273u, depth + 1u); else { c.pc = 0x003C6AA0u; return; } if (c.pc != 0x003DDF4Cu) [[unlikely]] return; }
L_003DDF4C:
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[21]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[0]);  if (t) { goto L_003DDF70; } }
L_003DDF60:
    c.f[12] = c.f[20];
    c.budget -= 1;
L_003DDF64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDF6Cu);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003DDF6Cu) [[unlikely]] return; }
L_003DDF6C:
    c.f[0] = fp::ee::add(c.fcr31, c.f[21], c.f[0]);
    c.budget -= 1;
L_003DDF70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003DDF74:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003DDF90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDFA4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003DDFA4u) [[unlikely]] return; }
L_003DDFA4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], c.r[3].w[0] + 8736u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 72u)));
    set32(c.r[2], c.r[2].w[0] - 5u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 14;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_003DDFF8; }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
L_003DDFF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003DE010:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003DE058; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 8736u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE040u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003DE040u) [[unlikely]] return; }
L_003DE040:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003DE05C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE058u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003DE058u) [[unlikely]] return; }
L_003DE058:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003DE05C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003DE070:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE098u); set32(c.r[4], 0u + 128u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003DE098u) [[unlikely]] return; }
L_003DE098:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003DE0B8; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE0B4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 180u, depth + 1u); else { c.pc = 0x003DDF90u; return; } if (c.pc != 0x003DE0B4u) [[unlikely]] return; }
L_003DE0B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003DE0B8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003DE0D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 7u);  c.pc = t; return; }
L_003DE0E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE0F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 201u, depth + 1u); else { c.pc = 0x003DE270u; return; } if (c.pc != 0x003DE0F4u) [[unlikely]] return; }
L_003DE0F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE0FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 221u, depth + 1u); else { c.pc = 0x003DE5B0u; return; } if (c.pc != 0x003DE0FCu) [[unlikely]] return; }
L_003DE0FC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003DE120:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003DE178; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], ld32((c.r[3].w[0] + 64u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_003DE170; }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[12]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003DE16C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE16Cu);  if (depth < kMaxDepth) unit_00AF(c, 201u, depth + 1u); else { c.pc = 0x003DE270u; return; } if (c.pc != 0x003DE16Cu) [[unlikely]] return; }
L_003DE16C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003DE170:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE178u);  if (depth < kMaxDepth) unit_00AF(c, 221u, depth + 1u); else { c.pc = 0x003DE5B0u; return; } if (c.pc != 0x003DE178u) [[unlikely]] return; }
L_003DE178:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003DE1A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE1B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 331u, depth + 1u); else { c.pc = 0x003C3B20u; return; } if (c.pc != 0x003DE1B4u) [[unlikely]] return; }
L_003DE1B4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003DE1D4; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
L_003DE1D4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003DE1E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003DE228; }
    c.r[3].d[0] = c.r[6].d[0] & 2ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 44u)));  goto L_003DE214; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DE224; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 1;
L_003DE214:
    set32(c.r[7], c.r[4].w[0] + 48u);
    set32(c.r[6], ld32((c.r[2].w[0] + 72u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE224u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 340u, depth + 1u); else { c.pc = 0x003C3D70u; return; } if (c.pc != 0x003DE224u) [[unlikely]] return; }
L_003DE224:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003DE228:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003DE230:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003DE264; }
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 72u)));
    set32(c.r[8], ld32((c.r[2].w[0] + 76u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE260u); set32(c.r[7], c.r[4].w[0] + 48u);  if (depth < kMaxDepth) unit_00A8(c, 352u, depth + 1u); else { c.pc = 0x003C3EF0u; return; } if (c.pc != 0x003DE260u) [[unlikely]] return; }
L_003DE260:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003DE264:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003DE270:
    set32(c.r[29], c.r[29].w[0] - 144u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 64u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003DE2C8; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 40u)));  goto L_003DE2B0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 44u)));  if (t) { goto L_003DE2E4; } }
L_003DE2B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE2B8u); c.r[16].d[0] = ld16((c.r[2].w[0] + 86u));  if (depth < kMaxDepth) unit_00A8(c, 332u, depth + 1u); else { c.pc = 0x003C3B40u; return; } if (c.pc != 0x003DE2B8u) [[unlikely]] return; }
L_003DE2B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE2C0u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 400u, depth + 1u); else { c.pc = 0x00173CE0u; return; } if (c.pc != 0x003DE2C0u) [[unlikely]] return; }
L_003DE2C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + c.r[16].w[0]);  if (t) { goto L_003DE2E0; } }
L_003DE2C8:
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.f[12] = ld32((c.r[2].w[0] + 64u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE2DCu); c.r[16].d[0] = ld16((c.r[3].w[0] + 86u));  if (depth < kMaxDepth) unit_0014(c, 400u, depth + 1u); else { c.pc = 0x00173CE0u; return; } if (c.pc != 0x003DE2DCu) [[unlikely]] return; }
L_003DE2DC:
    set32(c.r[16], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 1;
L_003DE2E0:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 1;
L_003DE2E4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = ld32((c.r[2].w[0]));
    c.f[13] = ld32((c.r[2].w[0] + 4u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE2F8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 218u, depth + 1u); else { c.pc = 0x003DE510u; return; } if (c.pc != 0x003DE2F8u) [[unlikely]] return; }
L_003DE2F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[1] = c.r[2].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[5], c.r[16].w[0] + 1u);
    st32((c.r[17].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 15968u));
    c.f[2] = ld32((c.r[6].w[0] + 15972u));
    c.f[1] = ld32((c.r[3].w[0] + 15976u));
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 15980u));
    st32((c.r[29].w[0] + 132u), c.f[2]);
    st32((c.r[29].w[0] + 136u), c.f[1]);
    st32((c.r[29].w[0] + 140u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.f[12] = ld32((c.r[2].w[0] + 16u));
    c.f[13] = ld32((c.r[2].w[0] + 20u));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE350u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 218u, depth + 1u); else { c.pc = 0x003DE510u; return; } if (c.pc != 0x003DE350u) [[unlikely]] return; }
L_003DE350:
    st32((c.r[29].w[0] + 128u), c.f[0]);
    set32(c.r[5], c.r[16].w[0] + 2u);
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.f[12] = ld32((c.r[2].w[0] + 32u));
    c.f[13] = ld32((c.r[2].w[0] + 36u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE36Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 218u, depth + 1u); else { c.pc = 0x003DE510u; return; } if (c.pc != 0x003DE36Cu) [[unlikely]] return; }
L_003DE36C:
    st32((c.r[29].w[0] + 132u), c.f[0]);
    set32(c.r[5], c.r[16].w[0] + 3u);
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.f[12] = ld32((c.r[2].w[0] + 48u));
    c.f[13] = ld32((c.r[2].w[0] + 52u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE388u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 218u, depth + 1u); else { c.pc = 0x003DE510u; return; } if (c.pc != 0x003DE388u) [[unlikely]] return; }
L_003DE388:
    st32((c.r[29].w[0] + 136u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[2].w[0] + 15984u));
    set32(c.r[5], c.r[16].w[0] + 4u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[2].w[0] + 15988u));
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[1] = ld32((c.r[2].w[0] + 15992u));
    st32((c.r[29].w[0] + 116u), c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[2].w[0] + 15996u));
    st32((c.r[29].w[0] + 120u), c.f[1]);
    st32((c.r[29].w[0] + 124u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.f[12] = ld32((c.r[2].w[0] + 8u));
    c.f[13] = ld32((c.r[2].w[0] + 12u));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE3D4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 218u, depth + 1u); else { c.pc = 0x003DE510u; return; } if (c.pc != 0x003DE3D4u) [[unlikely]] return; }
L_003DE3D4:
    st32((c.r[29].w[0] + 112u), c.f[0]);
    set32(c.r[5], c.r[16].w[0] + 5u);
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.f[12] = ld32((c.r[2].w[0] + 24u));
    c.f[13] = ld32((c.r[2].w[0] + 28u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE3F0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 218u, depth + 1u); else { c.pc = 0x003DE510u; return; } if (c.pc != 0x003DE3F0u) [[unlikely]] return; }
L_003DE3F0:
    st32((c.r[29].w[0] + 116u), c.f[0]);
    set32(c.r[5], c.r[16].w[0] + 6u);
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.f[12] = ld32((c.r[2].w[0] + 40u));
    c.f[13] = ld32((c.r[2].w[0] + 44u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE40Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 218u, depth + 1u); else { c.pc = 0x003DE510u; return; } if (c.pc != 0x003DE40Cu) [[unlikely]] return; }
L_003DE40C:
    c.f[1] = ld32((c.r[29].w[0] + 136u));
    st32((c.r[29].w[0] + 120u), c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE41Cu); c.f[12] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x003DE41Cu) [[unlikely]] return; }
L_003DE41C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[3] = c.r[2].w[0];
    c.f[2] = ld32((c.r[29].w[0] + 116u));
    c.f[1] = ld32((c.r[29].w[0] + 132u));
    c.f[20] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE438u); c.f[12] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x003DE438u) [[unlikely]] return; }
L_003DE438:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[3] = c.r[2].w[0];
    c.f[2] = ld32((c.r[29].w[0] + 112u));
    c.f[1] = ld32((c.r[29].w[0] + 128u));
    c.f[21] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE454u); c.f[12] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x003DE454u) [[unlikely]] return; }
L_003DE454:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[6], c.r[29].w[0] + 128u);
    st32((c.r[17].w[0] + 96u), c.f[0]);
    st32((c.r[17].w[0] + 100u), c.f[21]);
    st32((c.r[17].w[0] + 104u), c.f[20]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE484u); st32((c.r[17].w[0] + 108u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x003DE484u) [[unlikely]] return; }
L_003DE484:
    c.f[0] = ld32((c.r[29].w[0] + 72u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = ld32((c.r[29].w[0] + 64u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[1] = ld32((c.r[29].w[0] + 68u));
    set32(c.r[5], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 76u));
    c.f[12] = c.r[2].w[0];
    st32((c.r[29].w[0] + 96u), c.f[2]);
    st32((c.r[29].w[0] + 100u), c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE4B8u); st32((c.r[29].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003DE4B8u) [[unlikely]] return; }
L_003DE4B8:
    c.f[3] = ld32((c.r[29].w[0] + 84u));
    set32(c.r[5], c.r[16].w[0] + 7u);
    c.f[2] = ld32((c.r[29].w[0] + 88u));
    c.f[1] = ld32((c.r[29].w[0] + 92u));
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    st32((c.r[17].w[0] + 80u), c.f[0]);
    st32((c.r[17].w[0] + 84u), c.f[3]);
    st32((c.r[17].w[0] + 88u), c.f[2]);
    st32((c.r[17].w[0] + 92u), c.f[1]);
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.f[12] = ld32((c.r[2].w[0] + 56u));
    c.f[13] = ld32((c.r[2].w[0] + 60u));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE4F0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 218u, depth + 1u); else { c.pc = 0x003DE510u; return; } if (c.pc != 0x003DE4F0u) [[unlikely]] return; }
L_003DE4F0:
    st32((c.r[17].w[0] + 112u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003DE510:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    c.f[21] = c.f[12];
    set32(c.r[3], ld32((c.r[3].w[0] + 64u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.f[20] = fp::ee::sub(c.fcr31, c.f[13], c.f[21]);  if (t) { goto L_003DE580; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.f[12] = c.f[20];  goto L_003DE584; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[5].d[0] + 0ull;  goto L_003DE564; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003DE560; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003DE594; } }
L_003DE560:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_003DE564:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE56Cu);  if (depth < kMaxDepth) unit_00A9(c, 273u, depth + 1u); else { c.pc = 0x003C6AA0u; return; } if (c.pc != 0x003DE56Cu) [[unlikely]] return; }
L_003DE56C:
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[21]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[0]);  if (t) { goto L_003DE590; } }
L_003DE580:
    c.f[12] = c.f[20];
    c.budget -= 1;
L_003DE584:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE58Cu);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003DE58Cu) [[unlikely]] return; }
L_003DE58C:
    c.f[0] = fp::ee::add(c.fcr31, c.f[21], c.f[0]);
    c.budget -= 1;
L_003DE590:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003DE594:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003DE5B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 68u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE5CCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 333u, depth + 1u); else { c.pc = 0x003C3B70u; return; } if (c.pc != 0x003DE5CCu) [[unlikely]] return; }
L_003DE5CC:
    c.f[3] = ld32((c.r[16].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.f[4] = ld32((c.r[16].w[0] + 64u));
    c.r[2].d[0] = c.r[2].d[0] | 2913ull;
    c.f[2] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE5FCu); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003DE5FCu) [[unlikely]] return; }
L_003DE5FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE604u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 7u, depth + 1u); else { c.pc = 0x00184090u; return; } if (c.pc != 0x003DE604u) [[unlikely]] return; }
L_003DE604:
    c.f[12] = c.f[0];
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE614u); set32(c.r[5], c.r[16].w[0] + 96u);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003DE614u) [[unlikely]] return; }
L_003DE614:
    c.f[0] = ld32((c.r[29].w[0] + 40u));
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[2] = ld32((c.r[29].w[0] + 32u));
    set32(c.r[5], c.r[16].w[0] + 80u);
    c.f[1] = ld32((c.r[29].w[0] + 36u));
    set32(c.r[6], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 44u));
    st32((c.r[29].w[0] + 64u), c.f[2]);
    st32((c.r[29].w[0] + 68u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE644u); st32((c.r[29].w[0] + 76u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x003DE644u) [[unlikely]] return; }
L_003DE644:
    c.f[3] = ld32((c.r[29].w[0] + 52u));
    c.f[2] = ld32((c.r[29].w[0] + 56u));
    c.f[1] = ld32((c.r[29].w[0] + 60u));
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    st32((c.r[16].w[0] + 48u), c.f[0]);
    st32((c.r[16].w[0] + 52u), c.f[3]);
    st32((c.r[16].w[0] + 56u), c.f[2]);
    st32((c.r[16].w[0] + 60u), c.f[1]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003DE680:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE694u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003DE694u) [[unlikely]] return; }
L_003DE694:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], c.r[3].w[0] + 8800u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] - 5u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 14;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_003DE6E8; }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
L_003DE6E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003DE700:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003DE748; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 8800u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE730u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003DE730u) [[unlikely]] return; }
L_003DE730:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003DE74C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE748u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003DE748u) [[unlikely]] return; }
L_003DE748:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003DE74C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003DE760:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE788u); set32(c.r[4], 0u + 112u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003DE788u) [[unlikely]] return; }
L_003DE788:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003DE7A8; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE7A4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 227u, depth + 1u); else { c.pc = 0x003DE680u; return; } if (c.pc != 0x003DE7A4u) [[unlikely]] return; }
L_003DE7A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003DE7A8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003DE7C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 6u);  c.pc = t; return; }
L_003DE7D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[2] = c.r[2].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], ld32((c.r[4].w[0] + 44u)));
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[0] = fp::ee::div(c.fcr31, c.f[2], c.f[0]);
    st32((c.r[4].w[0] + 64u), c.f[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    c.f[3] = ld32((c.r[2].w[0] + 20u));
    c.f[2] = ld32((c.r[2].w[0] + 12u));
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[4].w[0] + 96u), c.f[0]);
    st32((c.r[4].w[0] + 100u), c.f[2]);
    st32((c.r[4].w[0] + 104u), c.f[3]);
    st32((c.r[4].w[0] + 108u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    c.f[3] = ld32((c.r[2].w[0] + 24u));
    c.f[2] = ld32((c.r[2].w[0] + 16u));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[4].w[0] + 80u), c.f[0]);
    st32((c.r[4].w[0] + 84u), c.f[2]);
    st32((c.r[4].w[0] + 88u), c.f[3]);
    st32((c.r[4].w[0] + 92u), c.r[3].w[0]);
    c.f[2] = ld32((c.r[4].w[0] + 80u));
    c.f[0] = ld32((c.r[4].w[0] + 96u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[4].w[0] + 96u), c.f[0]);
    c.f[2] = ld32((c.r[4].w[0] + 84u));
    c.f[0] = ld32((c.r[4].w[0] + 100u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[4].w[0] + 100u), c.f[0]);
    c.f[2] = ld32((c.r[4].w[0] + 88u));
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[4].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 96u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 100u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 104u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 96u));
    c.f[0] = ld32((c.r[4].w[0] + 80u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 80u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 100u));
    c.f[0] = ld32((c.r[4].w[0] + 84u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 84u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 104u));
    c.f[0] = ld32((c.r[4].w[0] + 88u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 88u), c.f[0]);
    c.f[12] = ld32((c.r[4].w[0] + 104u));
    c.budget -= 66;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE8D8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x003DE8D8u) [[unlikely]] return; }
L_003DE8D8:
    c.f[12] = ld32((c.r[16].w[0] + 100u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE8E4u); c.f[21] = c.f[0];  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x003DE8E4u) [[unlikely]] return; }
L_003DE8E4:
    c.f[12] = ld32((c.r[16].w[0] + 96u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE8F0u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x003DE8F0u) [[unlikely]] return; }
L_003DE8F0:
    st32((c.r[16].w[0] + 96u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 100u), c.f[20]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[16].w[0] + 104u), c.f[21]);
    st32((c.r[16].w[0] + 108u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003DE930:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE94Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 333u, depth + 1u); else { c.pc = 0x003C3B70u; return; } if (c.pc != 0x003DE94Cu) [[unlikely]] return; }
L_003DE94C:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.r[2].d[0] = c.r[2].d[0] | 2913ull;
    c.f[4] = ld32((c.r[16].w[0] + 64u));
    c.f[3] = ld32((c.r[3].w[0] + 28u));
    c.f[2] = 0u;
    c.f[1] = c.r[2].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE978u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003DE978u) [[unlikely]] return; }
L_003DE978:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE980u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 7u, depth + 1u); else { c.pc = 0x00184090u; return; } if (c.pc != 0x003DE980u) [[unlikely]] return; }
L_003DE980:
    c.f[12] = c.f[0];
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE990u); set32(c.r[5], c.r[16].w[0] + 96u);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003DE990u) [[unlikely]] return; }
L_003DE990:
    c.f[0] = ld32((c.r[29].w[0] + 40u));
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[2] = ld32((c.r[29].w[0] + 32u));
    set32(c.r[5], c.r[16].w[0] + 80u);
    c.f[1] = ld32((c.r[29].w[0] + 36u));
    set32(c.r[6], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 44u));
    st32((c.r[29].w[0] + 64u), c.f[2]);
    st32((c.r[29].w[0] + 68u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE9C0u); st32((c.r[29].w[0] + 76u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x003DE9C0u) [[unlikely]] return; }
L_003DE9C0:
    c.f[3] = ld32((c.r[29].w[0] + 52u));
    c.f[2] = ld32((c.r[29].w[0] + 56u));
    c.f[1] = ld32((c.r[29].w[0] + 60u));
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    st32((c.r[16].w[0] + 48u), c.f[0]);
    st32((c.r[16].w[0] + 52u), c.f[3]);
    st32((c.r[16].w[0] + 56u), c.f[2]);
    st32((c.r[16].w[0] + 60u), c.f[1]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003DE9F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEA04u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 331u, depth + 1u); else { c.pc = 0x003C3B20u; return; } if (c.pc != 0x003DEA04u) [[unlikely]] return; }
L_003DEA04:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003DEA24; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
L_003DEA24:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003DEA30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003DEA78; }
    c.r[3].d[0] = c.r[6].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 44u)));  goto L_003DEA64; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DEA74; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 1;
L_003DEA64:
    set32(c.r[7], c.r[4].w[0] + 48u);
    set32(c.r[6], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEA74u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 340u, depth + 1u); else { c.pc = 0x003C3D70u; return; } if (c.pc != 0x003DEA74u) [[unlikely]] return; }
L_003DEA74:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003DEA78:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003DEA80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003DEAB4; }
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[8], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEAB0u); set32(c.r[7], c.r[4].w[0] + 48u);  if (depth < kMaxDepth) unit_00A8(c, 352u, depth + 1u); else { c.pc = 0x003C3EF0u; return; } if (c.pc != 0x003DEAB0u) [[unlikely]] return; }
L_003DEAB0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003DEAB4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003DEAC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEAD4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003DEAD4u) [[unlikely]] return; }
L_003DEAD4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[4], c.r[16].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] + 8864u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEAE8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0018(c, 121u, depth + 1u); else { c.pc = 0x00181080u; return; } if (c.pc != 0x003DEAE8u) [[unlikely]] return; }
L_003DEAE8:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { st32((c.r[16].w[0] + 104u), 0u);  goto L_003DEB18; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003DEBB0; } }
L_003DEB18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 100u), 0u);
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 5u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 10;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_003DEB5C; }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
L_003DEB5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEB64u);  if (depth < kMaxDepth) unit_00A8(c, 336u, depth + 1u); else { c.pc = 0x003C3C10u; return; } if (c.pc != 0x003DEB64u) [[unlikely]] return; }
L_003DEB64:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 44u)));  goto L_003DEB7C; }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 4;
L_003DEB7C:
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { st32((c.r[16].w[0] + 176u), c.r[2].w[0]);  goto L_003DEBAC; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], 0u + 2u);  goto L_003DEBA8; }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { st32((c.r[16].w[0] + 176u), 0u);  goto L_003DEBAC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 176u), c.r[3].w[0]);  if (t) { goto L_003DEBAC; } }
L_003DEBA8:
    st32((c.r[16].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 1;
L_003DEBAC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003DEBB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003DEBC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003DEC18; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[4], c.r[17].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] + 8864u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEBF4u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0018(c, 126u, depth + 1u); else { c.pc = 0x00181170u; return; } if (c.pc != 0x003DEBF4u) [[unlikely]] return; }
L_003DEBF4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEC00u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003DEC00u) [[unlikely]] return; }
L_003DEC00:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003DEC1C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEC18u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003DEC18u) [[unlikely]] return; }
L_003DEC18:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003DEC1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003DEC30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEC58u); set32(c.r[4], 0u + 192u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003DEC58u) [[unlikely]] return; }
L_003DEC58:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003DEC78; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEC74u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 252u, depth + 1u); else { c.pc = 0x003DEAC0u; return; } if (c.pc != 0x003DEC74u) [[unlikely]] return; }
L_003DEC74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003DEC78:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003DEC90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 9u);  c.pc = t; return; }
L_003DECA0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 16u), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull; c.r[22].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003DEDF4; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[20], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[20].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DED04u); set32(c.r[4], c.r[2].w[0] << 3);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x003DED04u) [[unlikely]] return; }
L_003DED04:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[19].d[0] == 0ull) { set32(c.r[4], ld32((c.r[21].w[0])));  goto L_003DEDE8; }
    c.f[20] = 0u;
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003DED88; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 2;
L_003DED24:
    set32(c.r[2], ld32((c.r[21].w[0] + 44u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    c.f[20] = fp::ee::add(c.fcr31, c.f[20], c.f[1]);
    st32((c.r[29].w[0]), c.f[0]);
    c.f[13] = ld32((c.r[2].w[0] + 4u));
    c.f[14] = ld32((c.r[2].w[0] + 8u));
    c.f[15] = ld32((c.r[2].w[0] + 12u));
    c.f[16] = ld32((c.r[2].w[0] + 16u));
    c.f[17] = ld32((c.r[2].w[0] + 20u));
    c.f[18] = ld32((c.r[2].w[0] + 24u));
    c.f[19] = ld32((c.r[2].w[0] + 28u));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DED74u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0018(c, 150u, depth + 1u); else { c.pc = 0x00181D50u; return; } if (c.pc != 0x003DED74u) [[unlikely]] return; }
L_003DED74:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.r[2].d[0] = c.r[18].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 88u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DED24u | kUnwind; return; } goto L_003DED24; } }
L_003DED88:
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[4], c.r[21].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DED98u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 130u, depth + 1u); else { c.pc = 0x00181230u; return; } if (c.pc != 0x003DED98u) [[unlikely]] return; }
L_003DED98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEDA0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x003DEDA0u) [[unlikely]] return; }
L_003DEDA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEDA8u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 336u, depth + 1u); else { c.pc = 0x003C3C10u; return; } if (c.pc != 0x003DEDA8u) [[unlikely]] return; }
L_003DEDA8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[21].w[0])));  goto L_003DEDD8; }
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEDBCu); set32(c.r[4], c.r[21].w[0] + 112u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x003DEDBCu) [[unlikely]] return; }
L_003DEDBC:
    set32(c.r[4], ld32((c.r[21].w[0] + 176u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003DEDD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEDD4u); set32(c.r[4], c.r[21].w[0] + 112u);  if (depth < kMaxDepth) unit_001B(c, 216u, depth + 1u); else { c.pc = 0x0018F420u; return; } if (c.pc != 0x003DEDD4u) [[unlikely]] return; }
L_003DEDD4:
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.budget -= 1;
L_003DEDD8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0]), c.r[3].w[0]);  if (t) { goto L_003DEDF4; } }
L_003DEDE8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[21].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_003DEDF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.f[20] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_003DEE20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003DEE5C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEE4Cu); set32(c.r[5], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_00A8(c, 333u, depth + 1u); else { c.pc = 0x003C3B70u; return; } if (c.pc != 0x003DEE4Cu) [[unlikely]] return; }
L_003DEE4C:
    c.f[12] = c.f[0];
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEE5Cu); set32(c.r[5], c.r[16].w[0] + 96u);  if (depth < kMaxDepth) unit_0018(c, 142u, depth + 1u); else { c.pc = 0x00181A10u; return; } if (c.pc != 0x003DEE5Cu) [[unlikely]] return; }
L_003DEE5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003DEE70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEE84u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 331u, depth + 1u); else { c.pc = 0x003C3B20u; return; } if (c.pc != 0x003DEE84u) [[unlikely]] return; }
L_003DEE84:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003DEEA4; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
L_003DEEA4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003DEEB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003DEF04; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003DEF00; } }
    c.r[3].d[0] = c.r[6].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[6], ld32((c.r[4].w[0] + 176u)));  goto L_003DEEF4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DEF00; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 176u)));
    c.budget -= 1;
L_003DEEF4:
    set32(c.r[7], c.r[4].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEF00u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 340u, depth + 1u); else { c.pc = 0x003C3D70u; return; } if (c.pc != 0x003DEF00u) [[unlikely]] return; }
L_003DEF00:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003DEF04:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003DEF10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003DF0B0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 44u)));  goto L_003DEF4C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003DF0B4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 1;
L_003DEF4C:
    set32(c.r[6], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[8], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEF5Cu); set32(c.r[7], c.r[16].w[0] + 96u);  if (depth < kMaxDepth) unit_00A8(c, 352u, depth + 1u); else { c.pc = 0x003C3EF0u; return; } if (c.pc != 0x003DEF5Cu) [[unlikely]] return; }
L_003DEF5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEF64u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 336u, depth + 1u); else { c.pc = 0x003C3C10u; return; } if (c.pc != 0x003DEF64u) [[unlikely]] return; }
L_003DEF64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003DF0B0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.f[12] = 0u;
    set32(c.r[5], ld32((c.r[3].w[0])));
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003DF060; } }
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] - 8u);  if (t) { goto L_003DF028; } }
    set32(c.r[6], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 1;
L_003DEF94:
    set32(c.r[11], ld32((c.r[6].w[0])));
    set32(c.r[7], c.r[7].w[0] + 8u);
    set32(c.r[10], ld32((c.r[6].w[0] + 4u)));
    c.r[8].d[0] = c.r[7].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    set32(c.r[9], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[11], ld32((c.r[11].w[0] + 4u)));
    set32(c.r[10], ld32((c.r[10].w[0] + 4u)));
    set32(c.r[9], ld32((c.r[9].w[0] + 4u)));
    c.f[2] = ld32((c.r[11].w[0]));
    c.f[1] = ld32((c.r[10].w[0]));
    c.f[0] = ld32((c.r[9].w[0]));
    c.f[2] = fp::ee::add(c.fcr31, c.f[12], c.f[2]);
    set32(c.r[11], ld32((c.r[6].w[0] + 12u)));
    set32(c.r[10], ld32((c.r[6].w[0] + 16u)));
    set32(c.r[9], ld32((c.r[6].w[0] + 20u)));
    set32(c.r[13], ld32((c.r[11].w[0] + 4u)));
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    set32(c.r[12], ld32((c.r[10].w[0] + 4u)));
    set32(c.r[11], ld32((c.r[9].w[0] + 4u)));
    set32(c.r[10], ld32((c.r[6].w[0] + 24u)));
    c.f[3] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[9], ld32((c.r[6].w[0] + 28u)));
    set32(c.r[10], ld32((c.r[10].w[0] + 4u)));
    c.f[2] = ld32((c.r[13].w[0]));
    set32(c.r[9], ld32((c.r[9].w[0] + 4u)));
    c.f[1] = ld32((c.r[12].w[0]));
    set32(c.r[6], c.r[6].w[0] + 32u);
    c.f[0] = ld32((c.r[11].w[0]));
    c.f[2] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[10].w[0]));
    c.f[0] = ld32((c.r[9].w[0]));
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    c.budget -= 36;
    { const bool t = c.r[8].d[0] != 0ull; c.f[12] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DEF94u | kUnwind; return; } goto L_003DEF94; } }
    c.budget -= 1;
L_003DF028:
    c.r[1].d[0] = c.r[7].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003DF060; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[5], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 3;
L_003DF040:
    set32(c.r[5], ld32((c.r[6].w[0])));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    set32(c.r[5], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.f[0] = ld32((c.r[5].w[0]));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.f[12] = fp::ee::add(c.fcr31, c.f[12], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DF040u | kUnwind; return; } goto L_003DF040; } }
L_003DF060:
    set32(c.r[4], ld32((c.r[16].w[0] + 176u)));
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], 0u + 2u);  goto L_003DF090; }
    set32(c.r[4], c.r[16].w[0] + 48u);
    set32(c.r[5], c.r[16].w[0] + 112u);
    set32(c.r[6], 0u + 100u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF084u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_00A9(c, 277u, depth + 1u); else { c.pc = 0x003C6B30u; return; } if (c.pc != 0x003DF084u) [[unlikely]] return; }
L_003DF084:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DF0B0; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_003DF090:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003DF0B0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[4], c.r[16].w[0] + 48u);
    set32(c.r[5], c.r[5].w[0] - 4864u);
    set32(c.r[6], 0u + 100u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF0B0u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_00A9(c, 277u, depth + 1u); else { c.pc = 0x003C6B30u; return; } if (c.pc != 0x003DF0B0u) [[unlikely]] return; }
L_003DF0B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003DF0B4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003DF0C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF0D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003DF0D4u) [[unlikely]] return; }
L_003DF0D4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 8928u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003DF100:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003DF148; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 8928u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF130u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003DF130u) [[unlikely]] return; }
L_003DF130:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003DF14C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF148u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003DF148u) [[unlikely]] return; }
L_003DF148:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003DF14C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003DF160:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF188u); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003DF188u) [[unlikely]] return; }
L_003DF188:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003DF1A8; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF1A4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 287u, depth + 1u); else { c.pc = 0x003DF0C0u; return; } if (c.pc != 0x003DF1A4u) [[unlikely]] return; }
L_003DF1A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003DF1A8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003DF1C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 150u);  c.pc = t; return; }
L_003DF1D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003DF22C; }
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_003DF208; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF200u);  if (depth < kMaxDepth) unit_00AF(c, 300u, depth + 1u); else { c.pc = 0x003DF240u; return; } if (c.pc != 0x003DF200u) [[unlikely]] return; }
L_003DF200:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DF228; } }
L_003DF208:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003DF220; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF218u);  if (depth < kMaxDepth) unit_00AF(c, 318u, depth + 1u); else { c.pc = 0x003DF480u; return; } if (c.pc != 0x003DF218u) [[unlikely]] return; }
L_003DF218:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DF228; } }
L_003DF220:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF228u);  if (depth < kMaxDepth) unit_00AF(c, 334u, depth + 1u); else { c.pc = 0x003DF5F0u; return; } if (c.pc != 0x003DF228u) [[unlikely]] return; }
L_003DF228:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003DF22C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003DF240:
    set32(c.r[29], c.r[29].w[0] - 272u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF264u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_001B(c, 225u, depth + 1u); else { c.pc = 0x0018FA60u; return; } if (c.pc != 0x003DF264u) [[unlikely]] return; }
L_003DF264:
    set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[6], c.r[29].w[0] + 192u);
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF27Cu); set32(c.r[5], c.r[2].w[0] + 224u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x003DF27Cu) [[unlikely]] return; }
L_003DF27C:
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.f[2] = ld32((c.r[29].w[0] + 80u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = ld32((c.r[29].w[0] + 84u));
    st32((c.r[29].w[0] + 184u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 92u));
    st32((c.r[29].w[0] + 176u), c.f[2]);
    st32((c.r[29].w[0] + 180u), c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF2A8u); st32((c.r[29].w[0] + 188u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 222u, depth + 1u); else { c.pc = 0x0018F5B0u; return; } if (c.pc != 0x003DF2A8u) [[unlikely]] return; }
L_003DF2A8:
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF2B8u); set32(c.r[6], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_001B(c, 232u, depth + 1u); else { c.pc = 0x0018FB30u; return; } if (c.pc != 0x003DF2B8u) [[unlikely]] return; }
L_003DF2B8:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF2C4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x003DF2C4u) [[unlikely]] return; }
L_003DF2C4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[6], c.r[6].w[0] + 25776u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF2DCu); set32(c.r[7], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_00AF(c, 312u, depth + 1u); else { c.pc = 0x003DF390u; return; } if (c.pc != 0x003DF2DCu) [[unlikely]] return; }
L_003DF2DC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_003DF2F8; }
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.r[6].d[0] = 0ull | 32768ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF2F4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 241u, depth + 1u); else { c.pc = 0x0018FD70u; return; } if (c.pc != 0x003DF2F4u) [[unlikely]] return; }
L_003DF2F4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003DF2F8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF304u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_001B(c, 217u, depth + 1u); else { c.pc = 0x0018F450u; return; } if (c.pc != 0x003DF304u) [[unlikely]] return; }
L_003DF304:
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    c.f[0] = 0u;
    c.f[20] = ld32((c.r[3].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003DF378; }
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF328u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x003DF328u) [[unlikely]] return; }
L_003DF328:
    c.f[12] = c.f[20];
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF338u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003DF338u) [[unlikely]] return; }
L_003DF338:
    c.f[1] = ld32((c.r[29].w[0] + 192u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.f[3] = ld32((c.r[29].w[0] + 196u));
    c.f[2] = ld32((c.r[29].w[0] + 68u));
    c.f[4] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 200u));
    c.f[0] = ld32((c.r[29].w[0] + 72u));
    c.f[2] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 192u), c.f[4]);
    st32((c.r[29].w[0] + 196u), c.f[2]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF374u); st32((c.r[29].w[0] + 200u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 226u, depth + 1u); else { c.pc = 0x0018FA70u; return; } if (c.pc != 0x003DF374u) [[unlikely]] return; }
L_003DF374:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003DF378:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_003DF390:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF3C0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 150u, depth + 1u); else { c.pc = 0x0018EA40u; return; } if (c.pc != 0x003DF3C0u) [[unlikely]] return; }
L_003DF3C0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF3CCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 151u, depth + 1u); else { c.pc = 0x0018EA60u; return; } if (c.pc != 0x003DF3CCu) [[unlikely]] return; }
L_003DF3CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[2] = c.r[3].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF3ECu); c.f[12] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 5u, depth + 1u); else { c.pc = 0x00184060u; return; } if (c.pc != 0x003DF3ECu) [[unlikely]] return; }
L_003DF3EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    if (!(c.fcr31 & kFpuCondition)) { c.f[4] = ld32((c.r[29].w[0] + 80u));  goto L_003DF418; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF410u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x003DF410u) [[unlikely]] return; }
L_003DF410:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003DF45C; } }
L_003DF418:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[3] = ld32((c.r[29].w[0] + 84u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[2] = ld32((c.r[29].w[0] + 88u));
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.f[4] = fp::ee::div(c.fcr31, c.f[4], c.f[0]);
    c.f[3] = fp::ee::div(c.fcr31, c.f[3], c.f[0]);
    c.f[2] = fp::ee::div(c.fcr31, c.f[2], c.f[0]);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 64u), c.f[4]);
    st32((c.r[29].w[0] + 68u), c.f[3]);
    st32((c.r[29].w[0] + 72u), c.f[2]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF458u); st32((c.r[29].w[0] + 76u), c.f[0]);  if (depth < kMaxDepth) unit_001C(c, 10u, depth + 1u); else { c.pc = 0x00190210u; return; } if (c.pc != 0x003DF458u) [[unlikely]] return; }
L_003DF458:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003DF45C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003DF480:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF4A0u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_001B(c, 225u, depth + 1u); else { c.pc = 0x0018FA60u; return; } if (c.pc != 0x003DF4A0u) [[unlikely]] return; }
L_003DF4A0:
    set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF4B0u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000D(c, 361u, depth + 1u); else { c.pc = 0x001575A0u; return; } if (c.pc != 0x003DF4B0u) [[unlikely]] return; }
L_003DF4B0:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF4BCu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 224u, depth + 1u); else { c.pc = 0x0018FA10u; return; } if (c.pc != 0x003DF4BCu) [[unlikely]] return; }
L_003DF4BC:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF4CCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_001C(c, 3u, depth + 1u); else { c.pc = 0x00190080u; return; } if (c.pc != 0x003DF4CCu) [[unlikely]] return; }
L_003DF4CC:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF4D8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x003DF4D8u) [[unlikely]] return; }
L_003DF4D8:
    set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[6], c.r[29].w[0] + 128u);
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF4F0u); set32(c.r[5], c.r[2].w[0] + 224u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x003DF4F0u) [[unlikely]] return; }
L_003DF4F0:
    c.f[0] = ld32((c.r[29].w[0] + 72u));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[2] = ld32((c.r[29].w[0] + 64u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = ld32((c.r[29].w[0] + 68u));
    st32((c.r[29].w[0] + 120u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 76u));
    st32((c.r[29].w[0] + 112u), c.f[2]);
    st32((c.r[29].w[0] + 116u), c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF51Cu); st32((c.r[29].w[0] + 124u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x003DF51Cu) [[unlikely]] return; }
L_003DF51C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF52Cu); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_001B(c, 150u, depth + 1u); else { c.pc = 0x0018EA40u; return; } if (c.pc != 0x003DF52Cu) [[unlikely]] return; }
L_003DF52C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF538u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x003DF538u) [[unlikely]] return; }
L_003DF538:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF548u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_001C(c, 4u, depth + 1u); else { c.pc = 0x001900A0u; return; } if (c.pc != 0x003DF548u) [[unlikely]] return; }
L_003DF548:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF558u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_001C(c, 4u, depth + 1u); else { c.pc = 0x001900A0u; return; } if (c.pc != 0x003DF558u) [[unlikely]] return; }
L_003DF558:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF568u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_001C(c, 4u, depth + 1u); else { c.pc = 0x001900A0u; return; } if (c.pc != 0x003DF568u) [[unlikely]] return; }
L_003DF568:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF574u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_001B(c, 226u, depth + 1u); else { c.pc = 0x0018FA70u; return; } if (c.pc != 0x003DF574u) [[unlikely]] return; }
L_003DF574:
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    c.f[0] = 0u;
    c.f[12] = ld32((c.r[3].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[12]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_003DF5D8; }
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF598u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003DF598u) [[unlikely]] return; }
L_003DF598:
    c.f[1] = ld32((c.r[29].w[0] + 128u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.f[3] = ld32((c.r[29].w[0] + 132u));
    c.f[2] = ld32((c.r[29].w[0] + 52u));
    c.f[4] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 136u));
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    c.f[2] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 128u), c.f[4]);
    st32((c.r[29].w[0] + 132u), c.f[2]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF5D4u); st32((c.r[29].w[0] + 136u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 226u, depth + 1u); else { c.pc = 0x0018FA70u; return; } if (c.pc != 0x003DF5D4u) [[unlikely]] return; }
L_003DF5D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003DF5D8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_003DF5F0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF614u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_001B(c, 222u, depth + 1u); else { c.pc = 0x0018F5B0u; return; } if (c.pc != 0x003DF614u) [[unlikely]] return; }
L_003DF614:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF620u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 225u, depth + 1u); else { c.pc = 0x0018FA60u; return; } if (c.pc != 0x003DF620u) [[unlikely]] return; }
L_003DF620:
    set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[6], c.r[29].w[0] + 96u);
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF638u); set32(c.r[5], c.r[2].w[0] + 224u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x003DF638u) [[unlikely]] return; }
L_003DF638:
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.f[2] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.f[1] = ld32((c.r[29].w[0] + 84u));
    set32(c.r[6], c.r[29].w[0] + 192u);
    st32((c.r[29].w[0] + 200u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 92u));
    st32((c.r[29].w[0] + 192u), c.f[2]);
    st32((c.r[29].w[0] + 196u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF668u); st32((c.r[29].w[0] + 204u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 232u, depth + 1u); else { c.pc = 0x0018FB30u; return; } if (c.pc != 0x003DF668u) [[unlikely]] return; }
L_003DF668:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = ld32((c.r[2].w[0] + 4u));  if (t) { goto L_003DF6B0; } }
    c.f[13] = ld32((c.r[29].w[0] + 184u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF684u); c.f[12] = ld32((c.r[29].w[0] + 180u));  if (depth < kMaxDepth) unit_0005(c, 135u, depth + 1u); else { c.pc = 0x00137290u; return; } if (c.pc != 0x003DF684u) [[unlikely]] return; }
L_003DF684:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x46220000u);
    c.r[2].d[0] = c.r[2].d[0] | 63875ull;
    c.f[1] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF698u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003DF698u) [[unlikely]] return; }
L_003DF698:
    set32(c.r[6], 0u - c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF6A8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 239u, depth + 1u); else { c.pc = 0x0018FCE0u; return; } if (c.pc != 0x003DF6A8u) [[unlikely]] return; }
L_003DF6A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DF720; } }
L_003DF6B0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.f[12] = ld32((c.r[29].w[0] + 180u));  goto L_003DF6F4; }
    c.f[13] = ld32((c.r[29].w[0] + 184u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF6C8u); c.f[12] = ld32((c.r[29].w[0] + 176u));  if (depth < kMaxDepth) unit_0005(c, 135u, depth + 1u); else { c.pc = 0x00137290u; return; } if (c.pc != 0x003DF6C8u) [[unlikely]] return; }
L_003DF6C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x46220000u);
    c.r[2].d[0] = c.r[2].d[0] | 63875ull;
    c.f[1] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF6DCu); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003DF6DCu) [[unlikely]] return; }
L_003DF6DC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF6ECu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 241u, depth + 1u); else { c.pc = 0x0018FD70u; return; } if (c.pc != 0x003DF6ECu) [[unlikely]] return; }
L_003DF6EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DF720; } }
L_003DF6F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF6FCu); c.f[13] = ld32((c.r[29].w[0] + 176u));  if (depth < kMaxDepth) unit_0005(c, 135u, depth + 1u); else { c.pc = 0x00137290u; return; } if (c.pc != 0x003DF6FCu) [[unlikely]] return; }
L_003DF6FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x46220000u);
    c.r[2].d[0] = c.r[2].d[0] | 63875ull;
    c.f[1] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF710u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003DF710u) [[unlikely]] return; }
L_003DF710:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF720u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 243u, depth + 1u); else { c.pc = 0x0018FE00u; return; } if (c.pc != 0x003DF720u) [[unlikely]] return; }
L_003DF720:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003DF790; }
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF740u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x003DF740u) [[unlikely]] return; }
L_003DF740:
    c.f[12] = c.f[20];
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF750u); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003DF750u) [[unlikely]] return; }
L_003DF750:
    c.f[1] = ld32((c.r[29].w[0] + 96u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.f[3] = ld32((c.r[29].w[0] + 100u));
    c.f[2] = ld32((c.r[29].w[0] + 68u));
    c.f[4] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 104u));
    c.f[0] = ld32((c.r[29].w[0] + 72u));
    c.f[2] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 96u), c.f[4]);
    st32((c.r[29].w[0] + 100u), c.f[2]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF78Cu); st32((c.r[29].w[0] + 104u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 226u, depth + 1u); else { c.pc = 0x0018FA70u; return; } if (c.pc != 0x003DF78Cu) [[unlikely]] return; }
L_003DF78C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003DF790:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_003DF7B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF7C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003DF7C4u) [[unlikely]] return; }
L_003DF7C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 8992u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  goto L_003DF7F8; }
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { st32((c.r[16].w[0] + 48u), 0u);  goto L_003DF80C; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003DF7F8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003DF814; } }
L_003DF80C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 52u), 0u);
    c.budget -= 2;
L_003DF814:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003DF830:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003DF878; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 8992u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF860u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003DF860u) [[unlikely]] return; }
L_003DF860:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003DF87C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF878u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003DF878u) [[unlikely]] return; }
L_003DF878:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003DF87C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003DF890:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF8B8u); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003DF8B8u) [[unlikely]] return; }
L_003DF8B8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003DF8D8; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF8D4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 351u, depth + 1u); else { c.pc = 0x003DF7B0u; return; } if (c.pc != 0x003DF8D4u) [[unlikely]] return; }
L_003DF8D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003DF8D8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003DF8F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 300u);  c.pc = t; return; }
L_003DF900:
    set32(c.r[6], ld32((c.r[4].w[0] + 44u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.f[2] = ld32((c.r[6].w[0] + 8u));
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = ld32((c.r[6].w[0]));
    st32((c.r[4].w[0] + 64u), c.f[0]);
    st32((c.r[4].w[0] + 68u), c.f[1]);
    st32((c.r[4].w[0] + 72u), c.f[2]);
    st32((c.r[4].w[0] + 76u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_003DF940:
    set32(c.r[29], c.r[29].w[0] - 256u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 16;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  goto L_003DFBA4; }
    set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF98Cu); set32(c.r[4], ld32((c.r[2].w[0] + 36u)));  if (depth < kMaxDepth) unit_000D(c, 364u, depth + 1u); else { c.pc = 0x001575E0u; return; } if (c.pc != 0x003DF98Cu) [[unlikely]] return; }
L_003DF98C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF998u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_001B(c, 224u, depth + 1u); else { c.pc = 0x0018FA10u; return; } if (c.pc != 0x003DF998u) [[unlikely]] return; }
L_003DF998:
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF9A8u); set32(c.r[6], c.r[22].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 232u, depth + 1u); else { c.pc = 0x0018FB30u; return; } if (c.pc != 0x003DF9A8u) [[unlikely]] return; }
L_003DF9A8:
    c.f[12] = ld32((c.r[29].w[0] + 160u));
    c.f[13] = ld32((c.r[29].w[0] + 164u));
    c.f[14] = ld32((c.r[29].w[0] + 168u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF9BCu); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_00A9(c, 297u, depth + 1u); else { c.pc = 0x003C6F40u; return; } if (c.pc != 0x003DF9BCu) [[unlikely]] return; }
L_003DF9BC:
    set32(c.r[3], ld32((c.r[29].w[0] + 148u)));
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { c.r[1].d[0] = c.r[3].sd[0] < -32768ll ? 1ull : 0ull;  goto L_003DF9E0; }
    set32(c.r[2], c.r[3].w[0] - 32768u);
    set32(c.r[2], c.r[2].w[0] - 32768u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 148u), c.r[2].w[0]);  if (t) { goto L_003DF9F4; } }
L_003DF9E0:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 144u)));  goto L_003DF9F8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 148u), c.r[2].w[0]);
    c.budget -= 3;
L_003DF9F4:
    set32(c.r[3], ld32((c.r[29].w[0] + 144u)));
    c.budget -= 1;
L_003DF9F8:
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { c.r[1].d[0] = c.r[3].sd[0] < -32768ll ? 1ull : 0ull;  goto L_003DFA18; }
    set32(c.r[2], c.r[3].w[0] - 32768u);
    set32(c.r[2], c.r[2].w[0] - 32768u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 144u), c.r[2].w[0]);  if (t) { goto L_003DFA2C; } }
L_003DFA18:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { c.f[1] = ld32((c.r[29].w[0] + 148u));  goto L_003DFA30; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 144u), c.r[2].w[0]);
    c.budget -= 3;
L_003DFA2C:
    c.f[1] = ld32((c.r[29].w[0] + 148u));
    c.budget -= 1;
L_003DFA30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3BB40000u);
    c.f[0] = ld32((c.r[29].w[0] + 144u));
    c.r[21].d[0] = 0ull + 0ull;
    c.f[2] = c.r[2].w[0];
    c.r[19].d[0] = 0ull + 0ull;
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[18], c.r[29].w[0] + 248u);
    c.r[17].d[0] = c.r[22].d[0] + 0ull;
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    st32((c.r[29].w[0] + 248u), c.f[1]);
    st32((c.r[29].w[0] + 252u), c.f[0]);
    c.budget -= 13;
L_003DFA64:
    set32(c.r[2], ld32((c.r[22].w[0] + 44u)));
    c.f[12] = ld32((c.r[18].w[0]));
    c.f[20] = 0u;
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFA80u); c.r[20].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x003DFA80u) [[unlikely]] return; }
L_003DFA80:
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003DFB28; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.f[1] = c.f[20];
    c.budget -= 3;
L_003DFA98:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.f[4] = ld32((c.r[4].w[0]));
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003DFB00; } }
    c.f[2] = ld32((c.r[4].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003DFB00; } }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[4]);
    c.f[1] = 0u;
    c.f[2] = ld32((c.r[4].w[0] + 8u));
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[20]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[0]);
    st32((c.r[17].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003DFAF8; } }
    c.f[0] = ld32((c.r[17].w[0] + 48u));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[17].w[0] + 48u), c.f[0]);
    c.budget -= 4;
L_003DFAF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], 0u + 1u);  if (t) { goto L_003DFB28; } }
L_003DFB00:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.f[2] = ld32((c.r[4].w[0] + 4u));
    c.r[3].d[0] = c.r[7].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.f[3] = ld32((c.r[4].w[0] + 8u));
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[20]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[4]);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[2]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DFA98u | kUnwind; return; } goto L_003DFA98; } }
    c.budget -= 1;
L_003DFB28:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { goto L_003DFB38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 48u), 0u);  if (t) { goto L_003DFB88; } }
L_003DFB38:
    c.f[1] = ld32((c.r[17].w[0] + 48u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003DFB68; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 48u), c.f[0]);  if (t) { goto L_003DFB88; } }
L_003DFB68:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003DFB88; } }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 48u), c.f[0]);
    c.budget -= 2;
L_003DFB88:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[3].d[0] = c.r[21].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[19], c.r[19].w[0] + 4u);
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DFA64u | kUnwind; return; } goto L_003DFA64; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_003DFBA4:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_003DFBD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFBE4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 331u, depth + 1u); else { c.pc = 0x003C3B20u; return; } if (c.pc != 0x003DFBE4u) [[unlikely]] return; }
L_003DFBE4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003DFC04; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
L_003DFC04:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003DFC10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003DFCE4; }
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[3], 0u + 8u);
    set32(c.r[4], ld32((c.r[5].w[0] + 44u)));
    c.budget -= 5;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[5].w[0] + 32u)));  goto L_003DFC98; }
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    c.f[0] = ld32((c.r[5].w[0] + 60u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[5].w[0] + 60u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = ld32((c.r[3].w[0] + 64u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 64u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    c.f[0] = ld32((c.r[3].w[0] + 68u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 68u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = ld32((c.r[3].w[0] + 72u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 72u), c.f[0]);  if (t) { goto L_003DFCE0; } }
L_003DFC98:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003DFCE0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[6], c.r[29].w[0] + 44u);
    set32(c.r[5], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFCB4u); set32(c.r[7], c.r[29].w[0] + 40u);  if (depth < kMaxDepth) unit_000E(c, 185u, depth + 1u); else { c.pc = 0x00159420u; return; } if (c.pc != 0x003DFCB4u) [[unlikely]] return; }
L_003DFCB4:
    c.f[2] = ld32((c.r[16].w[0] + 48u));
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.f[0] = ld32((c.r[29].w[0] + 44u));
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    set32(c.r[4], ld32((c.r[3].w[0] + 32u)));
    c.f[12] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    set32(c.r[5], ld32((c.r[2].w[0] + 12u)));
    c.f[0] = ld32((c.r[29].w[0] + 40u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFCE0u); c.f[13] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_000E(c, 183u, depth + 1u); else { c.pc = 0x001593D0u; return; } if (c.pc != 0x003DFCE0u) [[unlikely]] return; }
L_003DFCE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003DFCE4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003DFCF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFD04u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003DFD04u) [[unlikely]] return; }
L_003DFD04:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 9056u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003DFD30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003DFD78; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 9056u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFD60u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003DFD60u) [[unlikely]] return; }
L_003DFD60:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003DFD7C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFD78u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003DFD78u) [[unlikely]] return; }
L_003DFD78:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003DFD7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003DFD90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFDB8u); set32(c.r[4], 0u + 56u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003DFDB8u) [[unlikely]] return; }
L_003DFDB8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003DFDD8; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFDD4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 374u, depth + 1u); else { c.pc = 0x003DFCF0u; return; } if (c.pc != 0x003DFDD4u) [[unlikely]] return; }
L_003DFDD4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003DFDD8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003DFDF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 301u);  c.pc = t; return; }
L_003DFE00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003DFE10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003DFE90; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFE44u); set32(c.r[5], ld32((c.r[2].w[0] + 12u)));  if (depth < kMaxDepth) unit_00A8(c, 333u, depth + 1u); else { c.pc = 0x003C3B70u; return; } if (c.pc != 0x003DFE44u) [[unlikely]] return; }
L_003DFE44:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.f[20] = c.f[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[2].w[0];
    c.f[0] = ld32((c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFE60u); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0005(c, 136u, depth + 1u); else { c.pc = 0x001372A8u; return; } if (c.pc != 0x003DFE60u) [[unlikely]] return; }
L_003DFE60:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.f[21] = c.f[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[2].w[0];
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFE7Cu); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0005(c, 136u, depth + 1u); else { c.pc = 0x001372A8u; return; } if (c.pc != 0x003DFE7Cu) [[unlikely]] return; }
L_003DFE7C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003DFF1C; } }
L_003DFE90:
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[21] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[12]);
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 10;
    if (!(c.fcr31 & kFpuCondition)) { c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_003DFEC8; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[3].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[21] = fp::ee::add(c.fcr31, c.f[21], c.f[3]);  if (t) { goto L_003DFEE0; } }
L_003DFEC8:
    c.f[3] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[3]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[16].w[0] + 52u));  goto L_003DFEE4; }
    c.f[21] = fp::ee::sub(c.fcr31, c.f[21], c.f[3]);
    c.budget -= 1;
L_003DFEE0:
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    c.budget -= 1;
L_003DFEE4:
    c.f[2] = ld32((c.r[4].w[0] + 4u));
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[12]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003DFF0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);  if (t) { goto L_003DFF1C; } }
L_003DFF0C:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[16].w[0] + 48u), c.f[21]);  goto L_003DFF20; }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[3]);
    c.budget -= 1;
L_003DFF1C:
    st32((c.r[16].w[0] + 48u), c.f[21]);
    c.budget -= 1;
L_003DFF20:
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003DFF40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFF54u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 331u, depth + 1u); else { c.pc = 0x003C3B20u; return; } if (c.pc != 0x003DFF54u) [[unlikely]] return; }
L_003DFF54:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003DFF74; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
L_003DFF74:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003DFF80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  [[clang::musttail]] return unit_00B0(c, 6u, depth); }
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[3], 0u + 8u);
    set32(c.r[4], ld32((c.r[5].w[0] + 44u)));
    c.budget -= 5;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[5].w[0] + 32u)));  [[clang::musttail]] return unit_00B0(c, 2u, depth); }
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    c.f[0] = ld32((c.r[5].w[0] + 60u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[5].w[0] + 60u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = ld32((c.r[3].w[0] + 64u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 64u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    c.f[0] = ld32((c.r[3].w[0] + 68u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 68u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = ld32((c.r[3].w[0] + 72u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 18;
    [[clang::musttail]] return unit_00B0(c, 1u, depth);
}

}
