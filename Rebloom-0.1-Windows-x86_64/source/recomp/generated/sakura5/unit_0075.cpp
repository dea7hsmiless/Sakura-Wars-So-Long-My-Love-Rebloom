#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0075[4096] = {
    1, 0, 2, 0, 3, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14,
    0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 19, 0,
    0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0,
    0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0,
    0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0,
    0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 51, 0, 0, 52, 0, 0, 53, 0, 0, 54, 0, 0, 55, 0, 56, 0,
    0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 61,
    0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0,
    0, 72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 77, 0, 0, 78, 0, 79,
    0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 84, 0, 0, 0,
    0, 0, 85, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 95, 0, 96, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0,
    0, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 103, 0, 0, 0, 0, 0, 0,
    0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0,
    0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0,
    0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 132,
    0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 135, 0, 0, 136, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    147, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 0,
    0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0,
    0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 162, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 166, 0, 167, 0, 0, 0,
    168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 173, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 181,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184,
    0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190,
    0, 0, 0, 0, 191, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0,
    0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 203, 0, 0, 204, 0, 0, 0, 0, 0, 0,
    205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0,
    214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 217, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224,
    0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 229, 0, 0,
    0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 231, 0, 0, 232, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0,
    0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 239, 0, 0, 240, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 244, 0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0,
    247, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 0, 0,
    266, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0,
    0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    275, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 280, 0, 281, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    283, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286,
    0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0,
    0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0,
    0, 0, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0,
    0, 305, 0, 0, 306, 0, 0, 307, 0, 0, 308, 0, 0, 309, 0, 0, 310, 0, 311, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0,
    0, 313, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316,
    0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 319, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 321, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0,
    327, 0, 328, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 331, 0, 332, 0, 0, 333, 0, 0, 334,
    0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 336, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0,
    342, 0, 343, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 346, 0, 347, 0, 0, 348, 0, 0, 349,
    0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 351, 0, 0, 0, 0, 0, 0, 352, 0, 0, 353, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0,
    0, 356, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0,
    0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 369, 0, 0, 0, 0, 370, 0,
    371, 0, 0, 372, 0, 0, 373, 0, 0, 374, 0, 0, 375, 0, 0, 376, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 378, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 390, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0075(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002F4000;
    case 2u: goto L_002F4008;
    case 3u: goto L_002F4010;
    case 4u: goto L_002F4014;
    case 5u: goto L_002F4030;
    case 6u: goto L_002F4048;
    case 7u: goto L_002F4070;
    case 8u: goto L_002F40A0;
    case 9u: goto L_002F40C0;
    case 10u: goto L_002F40E0;
    case 11u: goto L_002F40F4;
    case 12u: goto L_002F4120;
    case 13u: goto L_002F4130;
    case 14u: goto L_002F417C;
    case 15u: goto L_002F4194;
    case 16u: goto L_002F41B4;
    case 17u: goto L_002F41C8;
    case 18u: goto L_002F41E8;
    case 19u: goto L_002F41F8;
    case 20u: goto L_002F4218;
    case 21u: goto L_002F4240;
    case 22u: goto L_002F4250;
    case 23u: goto L_002F4260;
    case 24u: goto L_002F4270;
    case 25u: goto L_002F4284;
    case 26u: goto L_002F42B0;
    case 27u: goto L_002F42C8;
    case 28u: goto L_002F42D4;
    case 29u: goto L_002F4334;
    case 30u: goto L_002F4340;
    case 31u: goto L_002F43A0;
    case 32u: goto L_002F43B8;
    case 33u: goto L_002F43D8;
    case 34u: goto L_002F4450;
    case 35u: goto L_002F4470;
    case 36u: goto L_002F44EC;
    case 37u: goto L_002F4578;
    case 38u: goto L_002F4598;
    case 39u: goto L_002F4614;
    case 40u: goto L_002F46A0;
    case 41u: goto L_002F46B4;
    case 42u: goto L_002F46E0;
    case 43u: goto L_002F46F0;
    case 44u: goto L_002F4758;
    case 45u: goto L_002F4794;
    case 46u: goto L_002F47B0;
    case 47u: goto L_002F47C4;
    case 48u: goto L_002F47EC;
    case 49u: goto L_002F4810;
    case 50u: goto L_002F4834;
    case 51u: goto L_002F4840;
    case 52u: goto L_002F484C;
    case 53u: goto L_002F4858;
    case 54u: goto L_002F4864;
    case 55u: goto L_002F4870;
    case 56u: goto L_002F4878;
    case 57u: goto L_002F4898;
    case 58u: goto L_002F48B4;
    case 59u: goto L_002F48D0;
    case 60u: goto L_002F48F4;
    case 61u: goto L_002F48FC;
    case 62u: goto L_002F4910;
    case 63u: goto L_002F4930;
    case 64u: goto L_002F496C;
    case 65u: goto L_002F49CC;
    case 66u: goto L_002F49D8;
    case 67u: goto L_002F49F0;
    case 68u: goto L_002F4A2C;
    case 69u: goto L_002F4A5C;
    case 70u: goto L_002F4A88;
    case 71u: goto L_002F4AE8;
    case 72u: goto L_002F4B04;
    case 73u: goto L_002F4B24;
    case 74u: goto L_002F4B90;
    case 75u: goto L_002F4BB0;
    case 76u: goto L_002F4BCC;
    case 77u: goto L_002F4BE8;
    case 78u: goto L_002F4BF4;
    case 79u: goto L_002F4BFC;
    case 80u: goto L_002F4C08;
    case 81u: goto L_002F4C38;
    case 82u: goto L_002F4C54;
    case 83u: goto L_002F4C68;
    case 84u: goto L_002F4C70;
    case 85u: goto L_002F4C88;
    case 86u: goto L_002F4C94;
    case 87u: goto L_002F4CB4;
    case 88u: goto L_002F4D20;
    case 89u: goto L_002F4D3C;
    case 90u: goto L_002F4D5C;
    case 91u: goto L_002F4DC8;
    case 92u: goto L_002F4DE8;
    case 93u: goto L_002F4E10;
    case 94u: goto L_002F4E24;
    case 95u: goto L_002F4E30;
    case 96u: goto L_002F4E38;
    case 97u: goto L_002F4E44;
    case 98u: goto L_002F4E74;
    case 99u: goto L_002F4E90;
    case 100u: goto L_002F4EA4;
    case 101u: goto L_002F4EAC;
    case 102u: goto L_002F4ED8;
    case 103u: goto L_002F4EE4;
    case 104u: goto L_002F4F04;
    case 105u: goto L_002F4F70;
    case 106u: goto L_002F4F8C;
    case 107u: goto L_002F4FA0;
    case 108u: goto L_002F4FAC;
    case 109u: goto L_002F4FDC;
    case 110u: goto L_002F4FF4;
    case 111u: goto L_002F502C;
    case 112u: goto L_002F50BC;
    case 113u: goto L_002F5158;
    case 114u: goto L_002F51EC;
    case 115u: goto L_002F5270;
    case 116u: goto L_002F52CC;
    case 117u: goto L_002F52F4;
    case 118u: goto L_002F5368;
    case 119u: goto L_002F538C;
    case 120u: goto L_002F53CC;
    case 121u: goto L_002F5418;
    case 122u: goto L_002F5498;
    case 123u: goto L_002F5524;
    case 124u: goto L_002F5574;
    case 125u: goto L_002F55A0;
    case 126u: goto L_002F5628;
    case 127u: goto L_002F5640;
    case 128u: goto L_002F5684;
    case 129u: goto L_002F56CC;
    case 130u: goto L_002F56DC;
    case 131u: goto L_002F56F0;
    case 132u: goto L_002F56FC;
    case 133u: goto L_002F5704;
    case 134u: goto L_002F5728;
    case 135u: goto L_002F5734;
    case 136u: goto L_002F5740;
    case 137u: goto L_002F574C;
    case 138u: goto L_002F5760;
    case 139u: goto L_002F5774;
    case 140u: goto L_002F57AC;
    case 141u: goto L_002F57D0;
    case 142u: goto L_002F580C;
    case 143u: goto L_002F58A0;
    case 144u: goto L_002F5924;
    case 145u: goto L_002F5964;
    case 146u: goto L_002F598C;
    case 147u: goto L_002F5A00;
    case 148u: goto L_002F5A24;
    case 149u: goto L_002F5A50;
    case 150u: goto L_002F5AE4;
    case 151u: goto L_002F5B48;
    case 152u: goto L_002F5B58;
    case 153u: goto L_002F5B6C;
    case 154u: goto L_002F5B8C;
    case 155u: goto L_002F5BA4;
    case 156u: goto L_002F5C4C;
    case 157u: goto L_002F5C5C;
    case 158u: goto L_002F5C6C;
    case 159u: goto L_002F5C84;
    case 160u: goto L_002F5CC0;
    case 161u: goto L_002F5CF0;
    case 162u: goto L_002F5D18;
    case 163u: goto L_002F5D20;
    case 164u: goto L_002F5D30;
    case 165u: goto L_002F5D58;
    case 166u: goto L_002F5D68;
    case 167u: goto L_002F5D70;
    case 168u: goto L_002F5D80;
    case 169u: goto L_002F5DE0;
    case 170u: goto L_002F5E18;
    case 171u: goto L_002F5E28;
    case 172u: goto L_002F5ED0;
    case 173u: goto L_002F5F04;
    case 174u: goto L_002F5F10;
    case 175u: goto L_002F5F28;
    case 176u: goto L_002F5F3C;
    case 177u: goto L_002F5F74;
    case 178u: goto L_002F5FB0;
    case 179u: goto L_002F5FB8;
    case 180u: goto L_002F5FF4;
    case 181u: goto L_002F5FFC;
    case 182u: goto L_002F6038;
    case 183u: goto L_002F6040;
    case 184u: goto L_002F607C;
    case 185u: goto L_002F6088;
    case 186u: goto L_002F60B0;
    case 187u: goto L_002F60C4;
    case 188u: goto L_002F60EC;
    case 189u: goto L_002F6150;
    case 190u: goto L_002F617C;
    case 191u: goto L_002F6190;
    case 192u: goto L_002F619C;
    case 193u: goto L_002F61D0;
    case 194u: goto L_002F61F0;
    case 195u: goto L_002F6208;
    case 196u: goto L_002F621C;
    case 197u: goto L_002F6228;
    case 198u: goto L_002F6240;
    case 199u: goto L_002F6258;
    case 200u: goto L_002F628C;
    case 201u: goto L_002F62AC;
    case 202u: goto L_002F62C4;
    case 203u: goto L_002F62D8;
    case 204u: goto L_002F62E4;
    case 205u: goto L_002F6300;
    case 206u: goto L_002F6344;
    case 207u: goto L_002F6358;
    case 208u: goto L_002F6380;
    case 209u: goto L_002F63B0;
    case 210u: goto L_002F6410;
    case 211u: goto L_002F642C;
    case 212u: goto L_002F6448;
    case 213u: goto L_002F646C;
    case 214u: goto L_002F6480;
    case 215u: goto L_002F64CC;
    case 216u: goto L_002F652C;
    case 217u: goto L_002F6534;
    case 218u: goto L_002F6544;
    case 219u: goto L_002F6554;
    case 220u: goto L_002F6560;
    case 221u: goto L_002F6574;
    case 222u: goto L_002F659C;
    case 223u: goto L_002F65D0;
    case 224u: goto L_002F65FC;
    case 225u: goto L_002F6618;
    case 226u: goto L_002F6640;
    case 227u: goto L_002F6654;
    case 228u: goto L_002F66E0;
    case 229u: goto L_002F66F4;
    case 230u: goto L_002F6710;
    case 231u: goto L_002F6788;
    case 232u: goto L_002F6794;
    case 233u: goto L_002F67AC;
    case 234u: goto L_002F67D0;
    case 235u: goto L_002F6848;
    case 236u: goto L_002F6854;
    case 237u: goto L_002F686C;
    case 238u: goto L_002F6890;
    case 239u: goto L_002F6908;
    case 240u: goto L_002F6914;
    case 241u: goto L_002F692C;
    case 242u: goto L_002F6950;
    case 243u: goto L_002F69AC;
    case 244u: goto L_002F69B8;
    case 245u: goto L_002F69C4;
    case 246u: goto L_002F69DC;
    case 247u: goto L_002F6A00;
    case 248u: goto L_002F6A10;
    case 249u: goto L_002F6A20;
    case 250u: goto L_002F6A30;
    case 251u: goto L_002F6A40;
    case 252u: goto L_002F6A50;
    case 253u: goto L_002F6A60;
    case 254u: goto L_002F6A90;
    case 255u: goto L_002F6AB0;
    case 256u: goto L_002F6AD0;
    case 257u: goto L_002F6AE4;
    case 258u: goto L_002F6B10;
    case 259u: goto L_002F6B20;
    case 260u: goto L_002F6B30;
    case 261u: goto L_002F6B40;
    case 262u: goto L_002F6B50;
    case 263u: goto L_002F6BB8;
    case 264u: goto L_002F6BD8;
    case 265u: goto L_002F6BE8;
    case 266u: goto L_002F6C00;
    case 267u: goto L_002F6C20;
    case 268u: goto L_002F6C34;
    case 269u: goto L_002F6C54;
    case 270u: goto L_002F6C68;
    case 271u: goto L_002F6C88;
    case 272u: goto L_002F6C98;
    case 273u: goto L_002F6CB0;
    case 274u: goto L_002F6CD0;
    case 275u: goto L_002F6D00;
    case 276u: goto L_002F6D14;
    case 277u: goto L_002F6D50;
    case 278u: goto L_002F6D64;
    case 279u: goto L_002F6DA0;
    case 280u: goto L_002F6DAC;
    case 281u: goto L_002F6DB4;
    case 282u: goto L_002F6DC0;
    case 283u: goto L_002F6E00;
    case 284u: goto L_002F6E1C;
    case 285u: goto L_002F6E3C;
    case 286u: goto L_002F6E7C;
    case 287u: goto L_002F6E90;
    case 288u: goto L_002F6EB0;
    case 289u: goto L_002F6EC4;
    case 290u: goto L_002F6EF0;
    case 291u: goto L_002F6F04;
    case 292u: goto L_002F6F50;
    case 293u: goto L_002F6F64;
    case 294u: goto L_002F6F90;
    case 295u: goto L_002F6FA0;
    case 296u: goto L_002F7008;
    case 297u: goto L_002F7044;
    case 298u: goto L_002F7080;
    case 299u: goto L_002F70BC;
    case 300u: goto L_002F70F8;
    case 301u: goto L_002F7110;
    case 302u: goto L_002F7124;
    case 303u: goto L_002F714C;
    case 304u: goto L_002F7160;
    case 305u: goto L_002F7184;
    case 306u: goto L_002F7190;
    case 307u: goto L_002F719C;
    case 308u: goto L_002F71A8;
    case 309u: goto L_002F71B4;
    case 310u: goto L_002F71C0;
    case 311u: goto L_002F71C8;
    case 312u: goto L_002F71E8;
    case 313u: goto L_002F7204;
    case 314u: goto L_002F7220;
    case 315u: goto L_002F7240;
    case 316u: goto L_002F727C;
    case 317u: goto L_002F7298;
    case 318u: goto L_002F72B0;
    case 319u: goto L_002F7304;
    case 320u: goto L_002F7324;
    case 321u: goto L_002F7384;
    case 322u: goto L_002F73A0;
    case 323u: goto L_002F73C0;
    case 324u: goto L_002F742C;
    case 325u: goto L_002F744C;
    case 326u: goto L_002F7468;
    case 327u: goto L_002F7480;
    case 328u: goto L_002F7488;
    case 329u: goto L_002F7494;
    case 330u: goto L_002F74C8;
    case 331u: goto L_002F74DC;
    case 332u: goto L_002F74E4;
    case 333u: goto L_002F74F0;
    case 334u: goto L_002F74FC;
    case 335u: goto L_002F751C;
    case 336u: goto L_002F7588;
    case 337u: goto L_002F75A4;
    case 338u: goto L_002F75C4;
    case 339u: goto L_002F7630;
    case 340u: goto L_002F7650;
    case 341u: goto L_002F766C;
    case 342u: goto L_002F7680;
    case 343u: goto L_002F7688;
    case 344u: goto L_002F7694;
    case 345u: goto L_002F76C8;
    case 346u: goto L_002F76DC;
    case 347u: goto L_002F76E4;
    case 348u: goto L_002F76F0;
    case 349u: goto L_002F76FC;
    case 350u: goto L_002F771C;
    case 351u: goto L_002F7788;
    case 352u: goto L_002F77A4;
    case 353u: goto L_002F77B0;
    case 354u: goto L_002F77BC;
    case 355u: goto L_002F77EC;
    case 356u: goto L_002F7804;
    case 357u: goto L_002F7824;
    case 358u: goto L_002F78B4;
    case 359u: goto L_002F7950;
    case 360u: goto L_002F79E4;
    case 361u: goto L_002F7A64;
    case 362u: goto L_002F7A88;
    case 363u: goto L_002F7AB0;
    case 364u: goto L_002F7B28;
    case 365u: goto L_002F7B4C;
    case 366u: goto L_002F7B78;
    case 367u: goto L_002F7BB0;
    case 368u: goto L_002F7BD4;
    case 369u: goto L_002F7BE4;
    case 370u: goto L_002F7BF8;
    case 371u: goto L_002F7C00;
    case 372u: goto L_002F7C0C;
    case 373u: goto L_002F7C18;
    case 374u: goto L_002F7C24;
    case 375u: goto L_002F7C30;
    case 376u: goto L_002F7C3C;
    case 377u: goto L_002F7C50;
    case 378u: goto L_002F7C88;
    case 379u: goto L_002F7CA4;
    case 380u: goto L_002F7CC0;
    case 381u: goto L_002F7D54;
    case 382u: goto L_002F7DD4;
    case 383u: goto L_002F7DF8;
    case 384u: goto L_002F7E20;
    case 385u: goto L_002F7E98;
    case 386u: goto L_002F7EBC;
    case 387u: goto L_002F7EE8;
    case 388u: goto L_002F7F6C;
    case 389u: goto L_002F7FBC;
    case 390u: goto L_002F7FCC;
    case 391u: goto L_002F7FE0;
    default: bad_entry(c, 0x002F4000u); return;
    }
L_002F4000:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F4014; } }
L_002F4008:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4010u); set32(c.r[5], 0u + 11000u);  if (depth < kMaxDepth) unit_0061(c, 355u, depth + 1u); else { c.pc = 0x002A7C30u; return; } if (c.pc != 0x002F4010u) [[unlikely]] return; }
L_002F4010:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_002F4014:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F4030:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 316u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4048u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x002F4048u) [[unlikely]] return; }
L_002F4048:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_002F4060; }
    set32(c.r[3], ld32((c.r[2].w[0] + 176u)));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st32((c.r[2].w[0] + 176u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
L_002F4060:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002F4070:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F40A0u); set32(c.r[4], 0u + 1424u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002F40A0u) [[unlikely]] return; }
L_002F40A0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_002F40C4; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F40C0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 10u, depth + 1u); else { c.pc = 0x002F40E0u; return; } if (c.pc != 0x002F40C0u) [[unlikely]] return; }
L_002F40C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_002F40C4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002F40E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F40F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 37u, depth + 1u); else { c.pc = 0x0027C290u; return; } if (c.pc != 0x002F40F4u) [[unlikely]] return; }
L_002F40F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 30768u);
    set32(c.r[3], c.r[3].w[0] + 30824u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F4120:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027CCC0u | kUnwind; return; } [[clang::musttail]] return unit_0057(c, 85u, depth); }
L_002F4130:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 15u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 12;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_002F41F0; } }
    set32(c.r[2], 0u + 14u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_002F4174; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F4224; } }
L_002F4174:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F417Cu);  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x002F417Cu) [[unlikely]] return; }
L_002F417C:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u + 160u);  goto L_002F41C0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4194u); set32(c.r[4], 0u + 136u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002F4194u) [[unlikely]] return; }
L_002F4194:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_002F4228; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F41B4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 40u, depth + 1u); else { c.pc = 0x002F46A0u; return; } if (c.pc != 0x002F41B4u) [[unlikely]] return; }
L_002F41B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F4224; } }
    set32(c.r[4], 0u + 160u);
    c.budget -= 1;
L_002F41C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F41C8u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002F41C8u) [[unlikely]] return; }
L_002F41C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F4224; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F41E8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 46u, depth + 1u); else { c.pc = 0x002F47B0u; return; } if (c.pc != 0x002F41E8u) [[unlikely]] return; }
L_002F41E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F4224; } }
L_002F41F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F41F8u); set32(c.r[4], 0u + 168u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002F41F8u) [[unlikely]] return; }
L_002F41F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F4224; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4218u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 186u, depth + 1u); else { c.pc = 0x002F60B0u; return; } if (c.pc != 0x002F4218u) [[unlikely]] return; }
L_002F4218:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F4224; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002F4224:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_002F4228:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002F4240:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x001A6280u | kUnwind; return; } [[clang::musttail]] return unit_0021(c, 177u, depth); }
L_002F4250:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027DC70u | kUnwind; return; } [[clang::musttail]] return unit_0057(c, 181u, depth); }
L_002F4260:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x001A62C0u | kUnwind; return; } [[clang::musttail]] return unit_0021(c, 181u, depth); }
L_002F4270:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4284u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 266u, depth + 1u); else { c.pc = 0x0028A510u; return; } if (c.pc != 0x002F4284u) [[unlikely]] return; }
L_002F4284:
    set32(c.r[4], ld32((c.r[16].w[0] + 148u)));
    c.r[3].d[0] = 0ull | 50001ull;
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002F468C; }
    set32(c.r[4], ld32((c.r[16].w[0] + 1104u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 4u);  goto L_002F438C; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F42B0u); set32(c.r[4], ld32((c.r[2].w[0] + 80u)));  if (depth < kMaxDepth) unit_005C(c, 251u, depth + 1u); else { c.pc = 0x002921E0u; return; } if (c.pc != 0x002F42B0u) [[unlikely]] return; }
L_002F42B0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 2u);  goto L_002F4320; }
    set32(c.r[2], ld32((c.r[16].w[0] + 608u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F42C8u); set32(c.r[4], c.r[2].w[0] + 2064u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x002F42C8u) [[unlikely]] return; }
L_002F42C8:
    st32((c.r[16].w[0] + 1084u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F42D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x002F42D4u) [[unlikely]] return; }
L_002F42D4:
    c.r[3].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F4688; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xDFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[16].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F4688; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 1364u), c.r[4].w[0]);  if (t) { goto L_002F4688; } }
L_002F4320:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002F4688; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 608u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4334u); set32(c.r[4], c.r[2].w[0] + 2072u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x002F4334u) [[unlikely]] return; }
L_002F4334:
    st32((c.r[16].w[0] + 1084u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4340u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x002F4340u) [[unlikely]] return; }
L_002F4340:
    c.r[3].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F4688; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xDFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[16].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F4688; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 1364u), c.r[4].w[0]);  if (t) { goto L_002F4688; } }
L_002F438C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002F4688; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F43A0u); set32(c.r[4], ld32((c.r[2].w[0] + 80u)));  if (depth < kMaxDepth) unit_005C(c, 251u, depth + 1u); else { c.pc = 0x002921E0u; return; } if (c.pc != 0x002F43A0u) [[unlikely]] return; }
L_002F43A0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 2u);  goto L_002F443C; }
    set32(c.r[2], ld32((c.r[16].w[0] + 608u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F43B8u); set32(c.r[4], c.r[2].w[0] + 2080u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x002F43B8u) [[unlikely]] return; }
L_002F43B8:
    st32((c.r[16].w[0] + 1084u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002F43D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002F4434; } }
L_002F43D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F43D8u); set32(c.r[5], 0u + 49u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002F43D8u) [[unlikely]] return; }
L_002F43D8:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002F43F8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002F4408; } }
L_002F43F8:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_002F4408:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002F4434; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8u));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0])));  goto L_002F4428; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002F442C; } }
L_002F4428:
    set32(c.r[3], c.r[3].w[0] + 40u);
    c.budget -= 1;
L_002F442C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F4434; } }
L_002F4434:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1072u), c.r[3].w[0]);  if (t) { goto L_002F4688; } }
L_002F443C:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 3u);  goto L_002F4564; }
    set32(c.r[2], ld32((c.r[16].w[0] + 608u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4450u); set32(c.r[4], c.r[2].w[0] + 2088u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x002F4450u) [[unlikely]] return; }
L_002F4450:
    st32((c.r[16].w[0] + 1084u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002F4468; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002F44CC; } }
L_002F4468:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4470u); set32(c.r[5], 0u + 49u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002F4470u) [[unlikely]] return; }
L_002F4470:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002F4490; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002F44A0; } }
L_002F4490:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_002F44A0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002F44CC; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8u));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0])));  goto L_002F44C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002F44C4; } }
L_002F44C0:
    set32(c.r[3], c.r[3].w[0] + 40u);
    c.budget -= 1;
L_002F44C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F44CC; } }
L_002F44CC:
    st32((c.r[16].w[0] + 1072u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002F44E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002F4548; } }
L_002F44E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F44ECu); set32(c.r[5], 0u + 48u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002F44ECu) [[unlikely]] return; }
L_002F44EC:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002F450C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002F451C; } }
L_002F450C:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_002F451C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002F4548; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8u));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0])));  goto L_002F453C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002F4540; } }
L_002F453C:
    set32(c.r[3], c.r[3].w[0] + 40u);
    c.budget -= 1;
L_002F4540:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F4548; } }
L_002F4548:
    st32((c.r[16].w[0] + 1076u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 164u), c.r[3].w[0]);  if (t) { goto L_002F4688; } }
L_002F4564:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002F4688; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 608u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4578u); set32(c.r[4], c.r[2].w[0] + 2096u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x002F4578u) [[unlikely]] return; }
L_002F4578:
    st32((c.r[16].w[0] + 1084u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002F4590; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002F45F4; } }
L_002F4590:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4598u); set32(c.r[5], 0u + 49u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002F4598u) [[unlikely]] return; }
L_002F4598:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002F45B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002F45C8; } }
L_002F45B8:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_002F45C8:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002F45F4; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8u));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0])));  goto L_002F45E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002F45EC; } }
L_002F45E8:
    set32(c.r[3], c.r[3].w[0] + 40u);
    c.budget -= 1;
L_002F45EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F45F4; } }
L_002F45F4:
    st32((c.r[16].w[0] + 1072u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002F460C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002F4670; } }
L_002F460C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4614u); set32(c.r[5], 0u + 48u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002F4614u) [[unlikely]] return; }
L_002F4614:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002F4634; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002F4644; } }
L_002F4634:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_002F4644:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002F4670; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8u));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0])));  goto L_002F4664; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002F4668; } }
L_002F4664:
    set32(c.r[3], c.r[3].w[0] + 40u);
    c.budget -= 1;
L_002F4668:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F4670; } }
L_002F4670:
    st32((c.r[16].w[0] + 1076u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 164u), c.r[3].w[0]);
    c.budget -= 6;
L_002F4688:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002F468C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F46A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F46B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 45u, depth + 1u); else { c.pc = 0x0026C620u; return; } if (c.pc != 0x002F46B4u) [[unlikely]] return; }
L_002F46B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 30672u);
    set32(c.r[3], c.r[3].w[0] + 30728u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F46E0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0026C870u | kUnwind; return; } [[clang::musttail]] return unit_0053(c, 57u, depth); }
L_002F46F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002F4714; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002F4798; } }
L_002F4714:
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 3028u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 144u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], ld32((c.r[3].w[0] + 144u)));  if (t) { goto L_002F4738; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 132u)));  if (t) { goto L_002F473C; } }
L_002F4738:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002F473C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42400000u);
    c.r[7].d[0] = 0ull + 0ull;
    c.f[13] = 0u;
    set32(c.r[8], 0u + 1u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4758u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0058(c, 252u, depth + 1u); else { c.pc = 0x002824C0u; return; } if (c.pc != 0x002F4758u) [[unlikely]] return; }
L_002F4758:
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 144u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], ld32((c.r[16].w[0] + 144u)));  if (t) { goto L_002F4774; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 132u)));  if (t) { goto L_002F4778; } }
L_002F4774:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002F4778:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x424C0000u);
    c.r[7].d[0] = 0ull + 0ull;
    c.f[13] = 0u;
    set32(c.r[8], 0u + 1u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4794u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0058(c, 252u, depth + 1u); else { c.pc = 0x002824C0u; return; } if (c.pc != 0x002F4794u) [[unlikely]] return; }
L_002F4794:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002F4798:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F47B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F47C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 45u, depth + 1u); else { c.pc = 0x0026C620u; return; } if (c.pc != 0x002F47C4u) [[unlikely]] return; }
L_002F47C4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 30576u);
    set32(c.r[2], c.r[2].w[0] + 30632u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 136u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F47ECu); set32(c.r[6], 0u + 20u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x002F47ECu) [[unlikely]] return; }
L_002F47EC:
    st32((c.r[16].w[0] + 156u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F4810:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4834u); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002F4834u) [[unlikely]] return; }
L_002F4834:
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4840u); set32(c.r[5], 0u + 10010u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002F4840u) [[unlikely]] return; }
L_002F4840:
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F484Cu); set32(c.r[5], 0u + 10020u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002F484Cu) [[unlikely]] return; }
L_002F484C:
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4858u); set32(c.r[5], 0u + 10030u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002F4858u) [[unlikely]] return; }
L_002F4858:
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4864u); set32(c.r[5], 0u + 10040u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002F4864u) [[unlikely]] return; }
L_002F4864:
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4870u); c.r[5].d[0] = 0ull | 50000ull;  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002F4870u) [[unlikely]] return; }
L_002F4870:
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[17].w[0] << 2);
    c.budget -= 2;
L_002F4878:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 136u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[2].w[0] + 136u);  if (t) { goto L_002F489C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4898u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F4898u) [[unlikely]] return; }
L_002F4898:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_002F489C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F4878u | kUnwind; return; } goto L_002F4878; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F48B4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 57u, depth + 1u); else { c.pc = 0x0026C870u; return; } if (c.pc != 0x002F48B4u) [[unlikely]] return; }
L_002F48B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002F48D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 188u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F48F4u); set32(c.r[5], 0u + 27u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F48F4u) [[unlikely]] return; }
L_002F48F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F48FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 67u, depth + 1u); else { c.pc = 0x0026C980u; return; } if (c.pc != 0x002F48FCu) [[unlikely]] return; }
L_002F48FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F4910:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[17].w[0] << 2);
    c.budget -= 8;
L_002F4930:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 136u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[2].w[0] + 136u);  if (t) { goto L_002F4970; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_002F4974; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F4970; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F496Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F496Cu) [[unlikely]] return; }
L_002F496C:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_002F4970:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002F4974:
    c.r[2].d[0] = c.r[17].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F4930u | kUnwind; return; } goto L_002F4930; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002F49D0; }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002F49CC; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F49CC; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 156u)));
    set32(c.r[2], 0u + 49u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[18].w[0] + 156u), c.r[3].w[0]);  if (t) { goto L_002F49CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F49CCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 174u, depth + 1u); else { c.pc = 0x002F5F10u; return; } if (c.pc != 0x002F49CCu) [[unlikely]] return; }
L_002F49CC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002F49D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F49D8u);  if (depth < kMaxDepth) unit_0053(c, 77u, depth + 1u); else { c.pc = 0x0026CAC0u; return; } if (c.pc != 0x002F49D8u) [[unlikely]] return; }
L_002F49D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002F49F0:
    set32(c.r[29], c.r[29].w[0] - 448u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4A2Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 84u, depth + 1u); else { c.pc = 0x0028CF30u; return; } if (c.pc != 0x002F4A2Cu) [[unlikely]] return; }
L_002F4A2C:
    set32(c.r[3], c.r[16].w[0] - 44u);
    c.r[4].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_002F5C84; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 32400u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x002F4000u < 16384u) { entry = entries_0075[(t - 0x002F4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002F4A5C:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[16], 0u + 69u);  goto L_002F4A68; }
    set32(c.r[16], 0u + 67u);
    c.budget -= 1;
L_002F4A68:
    set32(c.r[17], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002F4A80; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002F4AD8; } }
L_002F4A80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4A88u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002F4A88u) [[unlikely]] return; }
L_002F4A88:
    set32(c.r[4], ld32((c.r[17].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002F4AA8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002F4AB8; } }
L_002F4AA8:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002F4AB8:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_002F4AD8; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  goto L_002F4AD0; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002F4AD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F4AD8; } }
L_002F4AD8:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[6], 0u + 10000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4AE8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x002F4AE8u) [[unlikely]] return; }
L_002F4AE8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], ld32((c.r[20].w[0] + 76u)));  goto L_002F4B08; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4B04u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x002F4B04u) [[unlikely]] return; }
L_002F4B04:
    set32(c.r[17], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 1;
L_002F4B08:
    set32(c.r[2], ld32((c.r[17].w[0] + 580u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_002F4B1C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002F4B80; } }
L_002F4B1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4B24u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002F4B24u) [[unlikely]] return; }
L_002F4B24:
    set32(c.r[4], ld32((c.r[17].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002F4B44; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002F4B54; } }
L_002F4B44:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002F4B54:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_002F4B80; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_002F4B74; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002F4B78; } }
L_002F4B74:
    set32(c.r[5], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_002F4B78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F4B80; } }
L_002F4B80:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[6], 0u + 10010u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4B90u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x002F4B90u) [[unlikely]] return; }
L_002F4B90:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002F4BC0; }
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4BB0u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x002F4BB0u) [[unlikely]] return; }
L_002F4BB0:
    set32(c.r[2], ld32((c.r[16].w[0] + 308u)));
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    st32((c.r[16].w[0] + 308u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 4;
L_002F4BC0:
    set32(c.r[2], ld32((c.r[2].w[0] + 3028u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4BCCu); set32(c.r[4], ld32((c.r[2].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x002F4BCCu) [[unlikely]] return; }
L_002F4BCC:
    c.r[2].d[0] = c.r[2].d[0] ^ 3ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  goto L_002F4BEC; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4BE8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 169u, depth + 1u); else { c.pc = 0x002F5DE0u; return; } if (c.pc != 0x002F4BE8u) [[unlikely]] return; }
L_002F4BE8:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 1;
L_002F4BEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4BF4u); set32(c.r[5], 0u + 10700u);  if (depth < kMaxDepth) unit_0062(c, 61u, depth + 1u); else { c.pc = 0x002A8760u; return; } if (c.pc != 0x002F4BF4u) [[unlikely]] return; }
L_002F4BF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_002F5C88; } }
L_002F4BFC:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4C08u); set32(c.r[5], 0u + 10010u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x002A8970u; return; } if (c.pc != 0x002F4C08u) [[unlikely]] return; }
L_002F4C08:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002F5C84; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 308u)));
    set32(c.r[2], 0u - 17u);
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4C38u); st32((c.r[16].w[0] + 308u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x002F4C38u) [[unlikely]] return; }
L_002F4C38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[8], ld32((c.r[2].w[0] + 32384u)));
    set32(c.r[5], 0u - 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4C54u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_00A8(c, 238u, depth + 1u); else { c.pc = 0x003C2D20u; return; } if (c.pc != 0x002F4C54u) [[unlikely]] return; }
L_002F4C54:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[5], 0u + 10010u);
    set32(c.r[6], 0u + 410u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4C68u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 55u, depth + 1u); else { c.pc = 0x002A8670u; return; } if (c.pc != 0x002F4C68u) [[unlikely]] return; }
L_002F4C68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F5C84; } }
L_002F4C70:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[16], 0u + 69u);  goto L_002F4C7C; }
    set32(c.r[16], 0u + 67u);
    c.budget -= 1;
L_002F4C7C:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4C88u); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002F4C88u) [[unlikely]] return; }
L_002F4C88:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4C94u); set32(c.r[5], 0u + 10010u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002F4C94u) [[unlikely]] return; }
L_002F4C94:
    set32(c.r[17], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002F4CAC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002F4D10; } }
L_002F4CAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4CB4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002F4CB4u) [[unlikely]] return; }
L_002F4CB4:
    set32(c.r[4], ld32((c.r[17].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002F4CD4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002F4CE4; } }
L_002F4CD4:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002F4CE4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_002F4D10; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_002F4D04; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002F4D08; } }
L_002F4D04:
    set32(c.r[5], c.r[2].w[0] + 24u);
    c.budget -= 1;
L_002F4D08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F4D10; } }
L_002F4D10:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[6], 0u + 10020u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4D20u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x002F4D20u) [[unlikely]] return; }
L_002F4D20:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], ld32((c.r[20].w[0] + 76u)));  goto L_002F4D40; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4D3Cu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x002F4D3Cu) [[unlikely]] return; }
L_002F4D3C:
    set32(c.r[17], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 1;
L_002F4D40:
    set32(c.r[2], ld32((c.r[17].w[0] + 580u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_002F4D54; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002F4DB8; } }
L_002F4D54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4D5Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002F4D5Cu) [[unlikely]] return; }
L_002F4D5C:
    set32(c.r[4], ld32((c.r[17].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002F4D7C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002F4D8C; } }
L_002F4D7C:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002F4D8C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_002F4DB8; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_002F4DAC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002F4DB0; } }
L_002F4DAC:
    set32(c.r[5], c.r[2].w[0] + 36u);
    c.budget -= 1;
L_002F4DB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F4DB8; } }
L_002F4DB8:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[6], 0u + 10030u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4DC8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x002F4DC8u) [[unlikely]] return; }
L_002F4DC8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002F4DF4; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4DE8u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x002F4DE8u) [[unlikely]] return; }
L_002F4DE8:
    set32(c.r[2], ld32((c.r[16].w[0] + 308u)));
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    st32((c.r[16].w[0] + 308u), c.r[2].w[0]);
    c.budget -= 3;
L_002F4DF4:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[16], 0u + 61u);  goto L_002F4E00; }
    set32(c.r[16], 0u + 22u);
    c.budget -= 1;
L_002F4E00:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4E10u); set32(c.r[6], 0u + 400u);  if (depth < kMaxDepth) unit_0062(c, 58u, depth + 1u); else { c.pc = 0x002A86F0u; return; } if (c.pc != 0x002F4E10u) [[unlikely]] return; }
L_002F4E10:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 420u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4E24u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 55u, depth + 1u); else { c.pc = 0x002A8670u; return; } if (c.pc != 0x002F4E24u) [[unlikely]] return; }
L_002F4E24:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4E30u); set32(c.r[5], 0u + 10700u);  if (depth < kMaxDepth) unit_0062(c, 61u, depth + 1u); else { c.pc = 0x002A8760u; return; } if (c.pc != 0x002F4E30u) [[unlikely]] return; }
L_002F4E30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F5C84; } }
L_002F4E38:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4E44u); set32(c.r[5], 0u + 10030u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x002A8970u; return; } if (c.pc != 0x002F4E44u) [[unlikely]] return; }
L_002F4E44:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002F5C84; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 308u)));
    set32(c.r[2], 0u - 17u);
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4E74u); st32((c.r[16].w[0] + 308u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x002F4E74u) [[unlikely]] return; }
L_002F4E74:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[8], ld32((c.r[2].w[0] + 32392u)));
    set32(c.r[5], 0u - 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4E90u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_00A8(c, 238u, depth + 1u); else { c.pc = 0x003C2D20u; return; } if (c.pc != 0x002F4E90u) [[unlikely]] return; }
L_002F4E90:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[5], 0u + 10030u);
    set32(c.r[6], 0u + 430u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4EA4u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 55u, depth + 1u); else { c.pc = 0x002A8670u; return; } if (c.pc != 0x002F4EA4u) [[unlikely]] return; }
L_002F4EA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F5C84; } }
L_002F4EAC:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[20].w[0] + 156u), 0u);  if (t) { goto L_002F4EBC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 67u);  if (t) { goto L_002F4EC0; } }
L_002F4EBC:
    set32(c.r[16], 0u + 69u);
    c.budget -= 1;
L_002F4EC0:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[22], 0u + 70u);  goto L_002F4ECC; }
    set32(c.r[22], 0u + 68u);
    c.budget -= 1;
L_002F4ECC:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4ED8u); set32(c.r[5], 0u + 10020u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002F4ED8u) [[unlikely]] return; }
L_002F4ED8:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4EE4u); set32(c.r[5], 0u + 10030u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002F4EE4u) [[unlikely]] return; }
L_002F4EE4:
    set32(c.r[17], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002F4EFC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002F4F60; } }
L_002F4EFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4F04u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002F4F04u) [[unlikely]] return; }
L_002F4F04:
    set32(c.r[4], ld32((c.r[17].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002F4F24; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002F4F34; } }
L_002F4F24:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002F4F34:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_002F4F60; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_002F4F54; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002F4F58; } }
L_002F4F54:
    set32(c.r[5], c.r[2].w[0] + 48u);
    c.budget -= 1;
L_002F4F58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F4F60; } }
L_002F4F60:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[6], 0u + 10040u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4F70u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x002F4F70u) [[unlikely]] return; }
L_002F4F70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F4F8C; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4F8Cu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x002F4F8Cu) [[unlikely]] return; }
L_002F4F8C:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[5], ld32((c.r[20].w[0] + 76u)));  goto L_002F4FB8; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4FA0u); set32(c.r[5], c.r[29].w[0] + 432u);  if (depth < kMaxDepth) unit_0075(c, 160u, depth + 1u); else { c.pc = 0x002F5CC0u; return; } if (c.pc != 0x002F4FA0u) [[unlikely]] return; }
L_002F4FA0:
    c.f[13] = ld32((c.r[29].w[0] + 440u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4FACu); c.f[12] = ld32((c.r[29].w[0] + 432u));  if (depth < kMaxDepth) unit_0019(c, 12u, depth + 1u); else { c.pc = 0x00184300u; return; } if (c.pc != 0x002F4FACu) [[unlikely]] return; }
L_002F4FAC:
    set32(c.r[3], ld32((c.r[20].w[0] + 76u)));
    st32((c.r[3].w[0] + 244u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 3;
L_002F4FB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x02000000u);
    set32(c.r[4], 0u + 5u);
    set32(c.r[3], ld32((c.r[5].w[0] + 164u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[5].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4FDCu); st32((c.r[5].w[0] + 176u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x002F4FDCu) [[unlikely]] return; }
L_002F4FDC:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.r[21].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    set32(c.r[23], ld32((c.r[3].w[0] + 3024u)));
    set32(c.r[2], c.r[3].w[0] + 112u);
    set32(c.r[30], c.r[2].w[0] + 2916u);
    c.budget -= 6;
L_002F4FF4:
    mmi::divu(c, 0, c.r[21].w[0], c.r[23].w[0]);
    set32(c.r[17], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 580u)));
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[30].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[29].w[0] + 224u), c.r[2].w[0]);  if (t) { goto L_002F5020; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F5098; } }
L_002F5020:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F502Cu); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002F502Cu) [[unlikely]] return; }
L_002F502C:
    set32(c.r[4], ld32((c.r[17].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002F504C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002F505C; } }
L_002F504C:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002F505C:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[5].w[0] + 8u));  goto L_002F506C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F5098; } }
L_002F506C:
    set32(c.r[3], c.r[21].w[0] << 1);
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[4].w[0] << 2);  goto L_002F5088; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F5098; } }
L_002F5088:
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_002F5098:
    st32((c.r[29].w[0] + 368u), c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 580u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002F50B4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F5118; } }
L_002F50B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F50BCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002F50BCu) [[unlikely]] return; }
L_002F50BC:
    set32(c.r[4], ld32((c.r[17].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002F50DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002F50EC; } }
L_002F50DC:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002F50EC:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002F5118; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_002F510C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F5110; } }
L_002F510C:
    set32(c.r[2], c.r[2].w[0] + 72u);
    c.budget -= 1;
L_002F5110:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F5118; } }
L_002F5118:
    st32((c.r[29].w[0] + 372u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    st32((c.r[29].w[0] + 376u), 0u);
    st32((c.r[29].w[0] + 388u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 380u), 0u);
    st32((c.r[29].w[0] + 392u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 384u), 0u);
    set32(c.r[17], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 580u)));
    c.budget -= 12;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002F5150; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F51C8; } }
L_002F5150:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5158u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002F5158u) [[unlikely]] return; }
L_002F5158:
    set32(c.r[4], ld32((c.r[17].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002F5178; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002F5188; } }
L_002F5178:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002F5188:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], c.r[21].w[0] << 1);  goto L_002F5198; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F51C8; } }
L_002F5198:
    c.r[2].d[0] = ld8((c.r[5].w[0] + 8u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[4].w[0] << 2);  goto L_002F51B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F51C8; } }
L_002F51B8:
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_002F51C8:
    st32((c.r[29].w[0] + 396u), c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 580u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002F51E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F5248; } }
L_002F51E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F51ECu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002F51ECu) [[unlikely]] return; }
L_002F51EC:
    set32(c.r[4], ld32((c.r[17].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002F520C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002F521C; } }
L_002F520C:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002F521C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002F5248; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_002F523C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F5240; } }
L_002F523C:
    set32(c.r[2], c.r[2].w[0] + 84u);
    c.budget -= 1;
L_002F5240:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F5248; } }
L_002F5248:
    st32((c.r[29].w[0] + 400u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    c.budget -= 4;
    if (c.r[21].d[0] != c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);  goto L_002F5264; }
    c.f[0] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 404u), c.f[0]);  if (t) { goto L_002F5274; } }
L_002F5264:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5270u);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x002F5270u) [[unlikely]] return; }
L_002F5270:
    st32((c.r[29].w[0] + 404u), c.f[0]);
    c.budget -= 1;
L_002F5274:
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002F5294; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 404u), c.f[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 6;
L_002F5294:
    st32((c.r[29].w[0] + 408u), 0u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[29].w[0] + 412u), c.r[2].w[0]);  if (t) { goto L_002F52B0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41980000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002F52BC; } }
L_002F52B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
L_002F52BC:
    set32(c.r[4], 0u + 336u);
    st32((c.r[29].w[0] + 416u), c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F52CCu); st32((c.r[29].w[0] + 420u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002F52CCu) [[unlikely]] return; }
L_002F52CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002F536C; } }
    set32(c.r[17], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002F52EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_002F5350; } }
L_002F52EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F52F4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002F52F4u) [[unlikely]] return; }
L_002F52F4:
    set32(c.r[4], ld32((c.r[17].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002F5314; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002F5324; } }
L_002F5314:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002F5324:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[8].d[0] = 0ull + 0ull;  goto L_002F5350; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_002F5344; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_002F5348; } }
L_002F5344:
    set32(c.r[8], c.r[2].w[0] + 108u);
    c.budget -= 1;
L_002F5348:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F5350; } }
L_002F5350:
    set32(c.r[6], ld32((c.r[29].w[0] + 224u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], c.r[21].w[0] + 20000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5368u); c.r[9].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_007A(c, 353u, depth + 1u); else { c.pc = 0x0030B590u; return; } if (c.pc != 0x002F5368u) [[unlikely]] return; }
L_002F5368:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002F536C:
    set32(c.r[2], c.r[21].w[0] << 2);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 368u);
    st32((c.r[2].w[0] + 136u), c.r[18].w[0]);
    set32(c.r[17], c.r[2].w[0] + 136u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F538Cu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_007A(c, 366u, depth + 1u); else { c.pc = 0x0030B7E0u; return; } if (c.pc != 0x002F538Cu) [[unlikely]] return; }
L_002F538C:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[5].d[0] = 0ull | 50000ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    set32(c.r[3], 0u + 15u);
    c.f[12] = c.r[2].w[0];
    st32((c.r[4].w[0] + 280u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    st32((c.r[2].w[0] + 288u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 296u), 0u);
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    c.f[0] = ld32((c.r[2].w[0] + 720u));
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 14;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[12] = c.f[0];  goto L_002F53C4; }
L_002F53C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F53CCu); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_007B(c, 20u, depth + 1u); else { c.pc = 0x0030C1A0u; return; } if (c.pc != 0x002F53CCu) [[unlikely]] return; }
L_002F53CC:
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 80u)));
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    st32((c.r[4].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 80u)));
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 80u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F4FF4u | kUnwind; return; } goto L_002F4FF4; } }
    set32(c.r[17], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = c.r[22].d[0] + 0ull;  goto L_002F5410; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F5474; } }
L_002F5410:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5418u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002F5418u) [[unlikely]] return; }
L_002F5418:
    set32(c.r[4], ld32((c.r[17].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002F5438; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002F5448; } }
L_002F5438:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002F5448:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002F5474; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 8u));
    c.r[1].d[0] = c.r[2].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0])));  goto L_002F5468; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F546C; } }
L_002F5468:
    set32(c.r[2], c.r[2].w[0] + 360u);
    c.budget -= 1;
L_002F546C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F5474; } }
L_002F5474:
    st32((c.r[29].w[0] + 368u), c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 580u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002F5490; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F54F4; } }
L_002F5490:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5498u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002F5498u) [[unlikely]] return; }
L_002F5498:
    set32(c.r[4], ld32((c.r[17].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002F54B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002F54C8; } }
L_002F54B8:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002F54C8:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002F54F4; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_002F54E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F54EC; } }
L_002F54E8:
    set32(c.r[2], c.r[2].w[0] + 84u);
    c.budget -= 1;
L_002F54EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F54F4; } }
L_002F54F4:
    st32((c.r[29].w[0] + 372u), c.r[2].w[0]);
    set32(c.r[3], 0u + 4u);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    c.budget -= 5;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);  goto L_002F5518; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002F5538; } }
L_002F5518:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5524u);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x002F5524u) [[unlikely]] return; }
L_002F5524:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
L_002F5538:
    st32((c.r[29].w[0] + 380u), 0u);
    st32((c.r[29].w[0] + 376u), c.f[0]);
    c.budget -= 4;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[29].w[0] + 384u), c.r[2].w[0]);  if (t) { goto L_002F5558; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41980000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002F5564; } }
L_002F5558:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
L_002F5564:
    set32(c.r[4], 0u + 336u);
    st32((c.r[29].w[0] + 388u), c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5574u); st32((c.r[29].w[0] + 392u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002F5574u) [[unlikely]] return; }
L_002F5574:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002F562C; } }
    set32(c.r[17], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 580u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[21], ld32((c.r[20].w[0] + 76u)));  if (t) { goto L_002F5594; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_002F55FC; } }
L_002F5594:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F55A0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002F55A0u) [[unlikely]] return; }
L_002F55A0:
    set32(c.r[4], ld32((c.r[17].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002F55C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002F55D0; } }
L_002F55C0:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002F55D0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[8].d[0] = 0ull + 0ull;  goto L_002F55FC; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_002F55F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_002F55F4; } }
L_002F55F0:
    set32(c.r[8], c.r[2].w[0] + 108u);
    c.budget -= 1;
L_002F55F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F55FC; } }
L_002F55FC:
    set32(c.r[9], 0u + 4u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    mmi::divu(c, 0, c.r[9].w[0], c.r[23].w[0]);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[30].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5628u); set32(c.r[7], 0u + 20004u);  if (depth < kMaxDepth) unit_007A(c, 353u, depth + 1u); else { c.pc = 0x0030B590u; return; } if (c.pc != 0x002F5628u) [[unlikely]] return; }
L_002F5628:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002F562C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 368u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5640u); st32((c.r[20].w[0] + 152u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_007A(c, 366u, depth + 1u); else { c.pc = 0x0030B7E0u; return; } if (c.pc != 0x002F5640u) [[unlikely]] return; }
L_002F5640:
    set32(c.r[3], 0u + 4u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    mmi::divu(c, 0, c.r[3].w[0], c.r[23].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 152u)));
    c.f[12] = c.r[2].w[0];
    c.r[5].d[0] = 0ull | 50000ull;
    st32((c.r[4].w[0] + 280u), c.r[5].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[30].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.f[0] = ld32((c.r[2].w[0] + 720u));
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 15;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[12] = c.f[0];  goto L_002F567C; }
L_002F567C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5684u); set32(c.r[4], ld32((c.r[20].w[0] + 152u)));  if (depth < kMaxDepth) unit_007B(c, 20u, depth + 1u); else { c.pc = 0x0030C1A0u; return; } if (c.pc != 0x002F5684u) [[unlikely]] return; }
L_002F5684:
    set32(c.r[5], ld32((c.r[20].w[0] + 152u)));
    set32(c.r[3], 0u + 14u);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    set32(c.r[4], ld32((c.r[5].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | 8ull;
    st32((c.r[5].w[0] + 80u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 136u)));
    c.budget -= 11;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[2].w[0] + 292u), c.r[3].w[0]);  if (t) { goto L_002F56B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 22u);  if (t) { goto L_002F56BC; } }
L_002F56B8:
    set32(c.r[16], 0u + 61u);
    c.budget -= 1;
L_002F56BC:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F56CCu); set32(c.r[6], 0u + 400u);  if (depth < kMaxDepth) unit_0062(c, 58u, depth + 1u); else { c.pc = 0x002A86F0u; return; } if (c.pc != 0x002F56CCu) [[unlikely]] return; }
L_002F56CC:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F56DCu); set32(c.r[6], 0u + 420u);  if (depth < kMaxDepth) unit_0062(c, 58u, depth + 1u); else { c.pc = 0x002A86F0u; return; } if (c.pc != 0x002F56DCu) [[unlikely]] return; }
L_002F56DC:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 440u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F56F0u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 55u, depth + 1u); else { c.pc = 0x002A8670u; return; } if (c.pc != 0x002F56F0u) [[unlikely]] return; }
L_002F56F0:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F56FCu); set32(c.r[5], 0u + 10700u);  if (depth < kMaxDepth) unit_0062(c, 61u, depth + 1u); else { c.pc = 0x002A8760u; return; } if (c.pc != 0x002F56FCu) [[unlikely]] return; }
L_002F56FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F5C84; } }
L_002F5704:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[18], 0u + 69u);  goto L_002F5710; }
    set32(c.r[18], 0u + 67u);
    c.budget -= 1;
L_002F5710:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[23], 0u + 70u);  goto L_002F571C; }
    set32(c.r[23], 0u + 68u);
    c.budget -= 1;
L_002F571C:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5728u); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002F5728u) [[unlikely]] return; }
L_002F5728:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5734u); set32(c.r[5], 0u + 10010u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002F5734u) [[unlikely]] return; }
L_002F5734:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5740u); set32(c.r[5], 0u + 10020u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002F5740u) [[unlikely]] return; }
L_002F5740:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F574Cu); set32(c.r[5], 0u + 10030u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002F574Cu) [[unlikely]] return; }
L_002F574C:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  goto L_002F5780; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5760u); set32(c.r[5], c.r[29].w[0] + 352u);  if (depth < kMaxDepth) unit_0075(c, 160u, depth + 1u); else { c.pc = 0x002F5CC0u; return; } if (c.pc != 0x002F5760u) [[unlikely]] return; }
L_002F5760:
    c.f[1] = ld32((c.r[29].w[0] + 352u));
    c.f[0] = ld32((c.r[29].w[0] + 360u));
    c.f[12] = c.f[1] ^ fp::kSign;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5774u); c.f[13] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0019(c, 12u, depth + 1u); else { c.pc = 0x00184300u; return; } if (c.pc != 0x002F5774u) [[unlikely]] return; }
L_002F5774:
    set32(c.r[3], ld32((c.r[20].w[0] + 76u)));
    st32((c.r[3].w[0] + 244u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 3;
L_002F5780:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x02000000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[4].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[4].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[22], c.r[2].w[0] + 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F57ACu); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x002F57ACu) [[unlikely]] return; }
L_002F57AC:
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], c.r[2].w[0] + 112u);
    set32(c.r[2], ld32((c.r[2].w[0] + 3024u)));
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    set32(c.r[2], c.r[3].w[0] + 2916u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);  if (t) { goto L_002F5B04; } }
L_002F57D0:
    set32(c.r[16], ld32((c.r[20].w[0] + 76u)));
    mmi::divu(c, 0, c.r[17].w[0], c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 580u)));
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[2].w[0] << 2);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[30], ld32((c.r[2].w[0])));  if (t) { goto L_002F5800; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F587C; } }
L_002F5800:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F580Cu); c.r[5].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002F580Cu) [[unlikely]] return; }
L_002F580C:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002F582C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002F583C; } }
L_002F582C:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002F583C:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], c.r[17].w[0] << 1);  goto L_002F584C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F587C; } }
L_002F584C:
    c.r[2].d[0] = ld8((c.r[5].w[0] + 8u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[4].w[0] << 2);  goto L_002F586C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F587C; } }
L_002F586C:
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_002F587C:
    st32((c.r[29].w[0] + 320u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002F5898; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F58FC; } }
L_002F5898:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F58A0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002F58A0u) [[unlikely]] return; }
L_002F58A0:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002F58C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002F58D0; } }
L_002F58C0:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002F58D0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002F58FC; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_002F58F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F58F4; } }
L_002F58F0:
    set32(c.r[2], c.r[2].w[0] + 60u);
    c.budget -= 1;
L_002F58F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F58FC; } }
L_002F58FC:
    st32((c.r[29].w[0] + 324u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    c.budget -= 4;
    if (c.r[17].d[0] != c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);  goto L_002F5918; }
    c.f[0] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002F5928; } }
L_002F5918:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5924u);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x002F5924u) [[unlikely]] return; }
L_002F5924:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002F5928:
    st32((c.r[29].w[0] + 332u), 0u);
    st32((c.r[29].w[0] + 328u), c.f[0]);
    c.budget -= 4;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[29].w[0] + 336u), c.r[2].w[0]);  if (t) { goto L_002F5948; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41980000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002F5954; } }
L_002F5948:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
L_002F5954:
    set32(c.r[4], 0u + 336u);
    st32((c.r[29].w[0] + 340u), c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5964u); st32((c.r[29].w[0] + 344u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002F5964u) [[unlikely]] return; }
L_002F5964:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002F5A04; } }
    set32(c.r[21], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_002F5984; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_002F59E8; } }
L_002F5984:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F598Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002F598Cu) [[unlikely]] return; }
L_002F598C:
    set32(c.r[4], ld32((c.r[21].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002F59AC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002F59BC; } }
L_002F59AC:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002F59BC:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[8].d[0] = 0ull + 0ull;  goto L_002F59E8; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_002F59DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_002F59E0; } }
L_002F59DC:
    set32(c.r[8], c.r[2].w[0] + 96u);
    c.budget -= 1;
L_002F59E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F59E8; } }
L_002F59E8:
    set32(c.r[9], ld32((c.r[20].w[0] + 96u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[7], c.r[17].w[0] + 20000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5A00u); c.r[6].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_007A(c, 353u, depth + 1u); else { c.pc = 0x0030B590u; return; } if (c.pc != 0x002F5A00u) [[unlikely]] return; }
L_002F5A00:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002F5A04:
    set32(c.r[2], c.r[17].w[0] << 2);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 320u);
    st32((c.r[2].w[0] + 136u), c.r[16].w[0]);
    set32(c.r[6], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5A24u); set32(c.r[16], c.r[2].w[0] + 136u);  if (depth < kMaxDepth) unit_007A(c, 366u, depth + 1u); else { c.pc = 0x0030B7E0u; return; } if (c.pc != 0x002F5A24u) [[unlikely]] return; }
L_002F5A24:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[3].d[0] = 0ull | 50000ull;
    st32((c.r[2].w[0] + 280u), c.r[3].w[0]);
    set32(c.r[21], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 580u)));
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_002F5A48; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002F5AAC; } }
L_002F5A48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5A50u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002F5A50u) [[unlikely]] return; }
L_002F5A50:
    set32(c.r[4], ld32((c.r[21].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002F5A70; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002F5A80; } }
L_002F5A70:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002F5A80:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_002F5AAC; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_002F5AA0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002F5AA4; } }
L_002F5AA0:
    set32(c.r[5], c.r[2].w[0] + 120u);
    c.budget -= 1;
L_002F5AA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F5AAC; } }
L_002F5AAC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[3], 0u + 15u);
    st32((c.r[4].w[0] + 284u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[2].w[0] + 288u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 296u), 0u);
    c.f[0] = ld32((c.r[30].w[0] + 720u));
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 12;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[12] = c.f[0];  goto L_002F5ADC; }
L_002F5ADC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5AE4u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_007B(c, 20u, depth + 1u); else { c.pc = 0x0030C1A0u; return; } if (c.pc != 0x002F5AE4u) [[unlikely]] return; }
L_002F5AE4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.f[0] = ld32((c.r[28].w[0] - 32664u));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st32((c.r[3].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[2].w[0] + 168u), c.f[0]);
    c.budget -= 8;
L_002F5B04:
    c.r[2].d[0] = c.r[17].d[0] < c.r[22].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F57D0u | kUnwind; return; } goto L_002F57D0; }
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    set32(c.r[3], c.r[22].w[0] + 9u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 136u)));
    c.budget -= 7;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[2].w[0] + 292u), c.r[3].w[0]);  if (t) { goto L_002F5B34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 22u);  if (t) { goto L_002F5B38; } }
L_002F5B34:
    set32(c.r[16], 0u + 61u);
    c.budget -= 1;
L_002F5B38:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5B48u); set32(c.r[6], 0u + 400u);  if (depth < kMaxDepth) unit_0062(c, 58u, depth + 1u); else { c.pc = 0x002A86F0u; return; } if (c.pc != 0x002F5B48u) [[unlikely]] return; }
L_002F5B48:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5B58u); set32(c.r[6], 0u + 420u);  if (depth < kMaxDepth) unit_0062(c, 58u, depth + 1u); else { c.pc = 0x002A86F0u; return; } if (c.pc != 0x002F5B58u) [[unlikely]] return; }
L_002F5B58:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 450u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5B6Cu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 55u, depth + 1u); else { c.pc = 0x002A8670u; return; } if (c.pc != 0x002F5B6Cu) [[unlikely]] return; }
L_002F5B6C:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 3424u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_002F5B80; }
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_002F5B80:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5B8Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x002A8970u; return; } if (c.pc != 0x002F5B8Cu) [[unlikely]] return; }
L_002F5B8C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002F5C78; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  goto L_002F5C7C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5BA4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002F5BA4u) [[unlikely]] return; }
L_002F5BA4:
    c.f[0] = ld32((c.r[17].w[0] + 736u));
    st32((c.r[29].w[0] + 240u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 740u));
    st32((c.r[29].w[0] + 244u), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 744u));
    st32((c.r[29].w[0] + 248u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 748u));
    c.budget -= 9;
    { const bool t = c.r[19].d[0] != 0ull; st32((c.r[29].w[0] + 252u), c.f[0]);  if (t) { goto L_002F5BDC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43160000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 244u), c.f[0]);
    c.budget -= 5;
L_002F5BDC:
    set32(c.r[3], ld32((c.r[20].w[0] + 76u)));
    c.f[0] = ld32((c.r[29].w[0] + 240u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x02000000u);
    set32(c.r[4], c.r[29].w[0] + 256u);
    st32((c.r[3].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 244u));
    st32((c.r[3].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 248u));
    st32((c.r[3].w[0] + 200u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 252u));
    st32((c.r[3].w[0] + 204u), c.f[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st32((c.r[3].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[3].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 76u)));
    st32((c.r[3].w[0] + 240u), 0u);
    st32((c.r[3].w[0] + 244u), 0u);
    st32((c.r[3].w[0] + 248u), 0u);
    set32(c.r[2], ld32((c.r[3].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st32((c.r[3].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5C4Cu); st32((c.r[3].w[0] + 176u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001C(c, 2u, depth + 1u); else { c.pc = 0x00190050u; return; } if (c.pc != 0x002F5C4Cu) [[unlikely]] return; }
L_002F5C4C:
    set32(c.r[4], c.r[29].w[0] + 256u);
    set32(c.r[6], c.r[29].w[0] + 240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5C5Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x002F5C5Cu) [[unlikely]] return; }
L_002F5C5C:
    set32(c.r[4], c.r[16].w[0] + 352u);
    set32(c.r[5], c.r[29].w[0] + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5C6Cu); st32((c.r[16].w[0] + 416u), 0u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x002F5C6Cu) [[unlikely]] return; }
L_002F5C6C:
    set32(c.r[2], ld32((c.r[16].w[0] + 308u)));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[16].w[0] + 308u), c.r[2].w[0]);
    c.budget -= 3;
L_002F5C78:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 1;
L_002F5C7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5C84u); set32(c.r[5], 0u + 10700u);  if (depth < kMaxDepth) unit_0062(c, 61u, depth + 1u); else { c.pc = 0x002A8760u; return; } if (c.pc != 0x002F5C84u) [[unlikely]] return; }
L_002F5C84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_002F5C88:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 448u);  c.pc = t; return; }
L_002F5CC0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[18], ld32((c.r[3].w[0] + 3028u)));
    set32(c.r[17], ld32((c.r[18].w[0] + 1320u)));
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002F5DA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5CF0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002F5CF0u) [[unlikely]] return; }
L_002F5CF0:
    c.f[0] = ld32((c.r[17].w[0] + 688u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 692u));
    st32((c.r[29].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 696u));
    st32((c.r[29].w[0] + 120u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 700u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5D18u); st32((c.r[29].w[0] + 124u), c.f[0]);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002F5D18u) [[unlikely]] return; }
L_002F5D18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5D20u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002F5D20u) [[unlikely]] return; }
L_002F5D20:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[17].w[0] + 704u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5D30u); set32(c.r[6], c.r[17].w[0] + 688u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x002F5D30u) [[unlikely]] return; }
L_002F5D30:
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[2] = ld32((c.r[29].w[0] + 80u));
    c.f[1] = ld32((c.r[29].w[0] + 84u));
    st32((c.r[29].w[0] + 136u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 92u));
    st32((c.r[29].w[0] + 128u), c.f[2]);
    st32((c.r[29].w[0] + 132u), c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5D58u); st32((c.r[29].w[0] + 140u), c.f[0]);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002F5D58u) [[unlikely]] return; }
L_002F5D58:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[18].w[0] + 736u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5D68u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0017(c, 183u, depth + 1u); else { c.pc = 0x0017DE50u; return; } if (c.pc != 0x002F5D68u) [[unlikely]] return; }
L_002F5D68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5D70u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002F5D70u) [[unlikely]] return; }
L_002F5D70:
    set32(c.r[6], c.r[18].w[0] + 736u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5D80u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x002F5D80u) [[unlikely]] return; }
L_002F5D80:
    c.f[3] = ld32((c.r[29].w[0] + 68u));
    c.f[2] = ld32((c.r[29].w[0] + 72u));
    c.f[1] = ld32((c.r[29].w[0] + 76u));
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    st32((c.r[16].w[0]), c.f[0]);
    st32((c.r[16].w[0] + 4u), c.f[3]);
    st32((c.r[16].w[0] + 8u), c.f[2]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.f[1]);  if (t) { goto L_002F5DBC; } }
L_002F5DA4:
    st32((c.r[16].w[0]), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 6;
L_002F5DBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_002F5DE0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[18], ld32((c.r[4].w[0] + 3024u)));
    set32(c.r[3], c.r[4].w[0] + 112u);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[3].w[0] + 2916u);  if (t) { goto L_002F5EA0; } }
L_002F5E18:
    set32(c.r[16], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5E28u); set32(c.r[4], ld32((c.r[2].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x002F5E28u) [[unlikely]] return; }
L_002F5E28:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_002F5EA0; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002F5E9C; } }
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  goto L_002F5E68; }
    set32(c.r[3], 0u + 530u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 196u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 196u), c.f[0]);  if (t) { goto L_002F5E7C; } }
L_002F5E68:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43960000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = ld32((c.r[4].w[0] + 196u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 196u), c.f[0]);
    c.budget -= 5;
L_002F5E7C:
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    set32(c.r[4], ld32((c.r[5].w[0] + 164u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[5].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 176u)));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st32((c.r[5].w[0] + 176u), c.r[3].w[0]);
    c.budget -= 8;
L_002F5E9C:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_002F5EA0:
    c.r[3].d[0] = c.r[19].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[19].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F5E18u | kUnwind; return; } goto L_002F5E18; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002F5ED0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 96u)));
    c.budget -= 6;
    if (c.r[5].d[0] != c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_002F5F08; }
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[5], 0u + 27u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5F04u); set32(c.r[7], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F5F04u) [[unlikely]] return; }
L_002F5F04:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002F5F08:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002F5F10:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5F28u); set32(c.r[5], 0u + 61u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x002A8970u; return; } if (c.pc != 0x002F5F28u) [[unlikely]] return; }
L_002F5F28:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002F6098; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5F3Cu); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x002F5F3Cu) [[unlikely]] return; }
L_002F5F3C:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 3028u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 148u)));
    set32(c.r[2], c.r[2].w[0] - 2000u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002F6040; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 32432u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002F4000u < 16384u) { entry = entries_0075[(t - 0x002F4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002F5F74:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[2].w[0] + 19712u));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[1] = ld32((c.r[3].w[0] + 19716u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[2].w[0] + 19724u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3340000u);
    st32((c.r[29].w[0] + 88u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 80u), c.f[2]);
    st32((c.r[29].w[0] + 84u), c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5FB0u); st32((c.r[29].w[0] + 92u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x002F5FB0u) [[unlikely]] return; }
L_002F5FB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[16].w[0] + 352u);  if (t) { goto L_002F6080; } }
L_002F5FB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[2].w[0] + 19712u));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[1] = ld32((c.r[3].w[0] + 19716u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[2].w[0] + 19724u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC38C0000u);
    st32((c.r[29].w[0] + 72u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 64u), c.f[2]);
    st32((c.r[29].w[0] + 68u), c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5FF4u); st32((c.r[29].w[0] + 76u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x002F5FF4u) [[unlikely]] return; }
L_002F5FF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F607C; } }
L_002F5FFC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[2].w[0] + 19712u));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[1] = ld32((c.r[3].w[0] + 19716u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[2].w[0] + 19724u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3BE0000u);
    st32((c.r[29].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 48u), c.f[2]);
    st32((c.r[29].w[0] + 52u), c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6038u); st32((c.r[29].w[0] + 60u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x002F6038u) [[unlikely]] return; }
L_002F6038:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F607C; } }
L_002F6040:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[2].w[0] + 19728u));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[1] = ld32((c.r[3].w[0] + 19736u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[2].w[0] + 19740u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x430C0000u);
    st32((c.r[29].w[0] + 36u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 32u), c.f[2]);
    st32((c.r[29].w[0] + 40u), c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F607Cu); st32((c.r[29].w[0] + 44u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x002F607Cu) [[unlikely]] return; }
L_002F607C:
    set32(c.r[4], c.r[16].w[0] + 352u);
    c.budget -= 1;
L_002F6080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6088u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x002F6088u) [[unlikely]] return; }
L_002F6088:
    set32(c.r[3], ld32((c.r[16].w[0] + 308u)));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st32((c.r[16].w[0] + 308u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
L_002F6098:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_002F60B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F60C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 143u, depth + 1u); else { c.pc = 0x0026D670u; return; } if (c.pc != 0x002F60C4u) [[unlikely]] return; }
L_002F60C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 30432u);
    set32(c.r[3], c.r[3].w[0] + 30488u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 164u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F60ECu); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x002F60ECu) [[unlikely]] return; }
L_002F60EC:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_002F6140; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], 0u + 5u);
    set32(c.r[3], c.r[3].w[0] + 29504u);
    st32((c.r[16].w[0] + 104u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 29744u);
    set32(c.r[2], 0u + 53u);
    st32((c.r[16].w[0] + 112u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[16].w[0] + 116u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 32288u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 32336u);
    st32((c.r[16].w[0] + 120u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 124u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 17;
L_002F6140:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F6150:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u - 5u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 76u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[5].w[0] + 176u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[5].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F617Cu); set32(c.r[4], ld32((c.r[4].w[0] + 76u)));  if (depth < kMaxDepth) unit_006D(c, 163u, depth + 1u); else { c.pc = 0x002D5D30u; return; } if (c.pc != 0x002F617Cu) [[unlikely]] return; }
L_002F617C:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_002F6194; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6190u);  if (depth < kMaxDepth) unit_005B(c, 82u, depth + 1u); else { c.pc = 0x0028CF00u; return; } if (c.pc != 0x002F6190u) [[unlikely]] return; }
L_002F6190:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_002F6194:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F619Cu);  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x002F619Cu) [[unlikely]] return; }
L_002F619C:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_002F61F8; }
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.r[2].d[0] = 0ull | 50001ull;
    set32(c.r[3], ld32((c.r[3].w[0] + 148u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002F61C8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_002F61D0; } }
L_002F61C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F61D0u); set32(c.r[4], ld32((c.r[2].w[0] + 80u)));  if (depth < kMaxDepth) unit_005C(c, 251u, depth + 1u); else { c.pc = 0x002921E0u; return; } if (c.pc != 0x002F61D0u) [[unlikely]] return; }
L_002F61D0:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002F6220; }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 188u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F61F0u); set32(c.r[5], c.r[2].w[0] + 29u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F61F0u) [[unlikely]] return; }
L_002F61F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F621C; } }
L_002F61F8:
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 188u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6208u); set32(c.r[5], 0u + 25u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F6208u) [[unlikely]] return; }
L_002F6208:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 188u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F621Cu); set32(c.r[5], 0u + 26u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F621Cu) [[unlikely]] return; }
L_002F621C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002F6220:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6228u);  if (depth < kMaxDepth) unit_0053(c, 154u, depth + 1u); else { c.pc = 0x0026D8E0u; return; } if (c.pc != 0x002F6228u) [[unlikely]] return; }
L_002F6228:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F6240:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6258u); set32(c.r[4], ld32((c.r[4].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x002F6258u) [[unlikely]] return; }
L_002F6258:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_002F62B4; }
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.r[2].d[0] = 0ull | 50001ull;
    set32(c.r[3], ld32((c.r[3].w[0] + 148u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002F6284; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_002F628C; } }
L_002F6284:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F628Cu); set32(c.r[4], ld32((c.r[2].w[0] + 80u)));  if (depth < kMaxDepth) unit_005C(c, 251u, depth + 1u); else { c.pc = 0x002921E0u; return; } if (c.pc != 0x002F628Cu) [[unlikely]] return; }
L_002F628C:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002F62DC; }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 188u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F62ACu); set32(c.r[5], c.r[2].w[0] + 29u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F62ACu) [[unlikely]] return; }
L_002F62AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F62D8; } }
L_002F62B4:
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 188u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F62C4u); set32(c.r[5], 0u + 25u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F62C4u) [[unlikely]] return; }
L_002F62C4:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 188u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F62D8u); set32(c.r[5], 0u + 26u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F62D8u) [[unlikely]] return; }
L_002F62D8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002F62DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F62E4u);  if (depth < kMaxDepth) unit_0053(c, 159u, depth + 1u); else { c.pc = 0x0026D950u; return; } if (c.pc != 0x002F62E4u) [[unlikely]] return; }
L_002F62E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F6300:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = 0ull | 50001ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] | 16ull;
    st32((c.r[4].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 148u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002F6338; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 2u);  if (t) { goto L_002F6348; } }
L_002F6338:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6344u); set32(c.r[4], ld32((c.r[2].w[0] + 80u)));  if (depth < kMaxDepth) unit_005C(c, 251u, depth + 1u); else { c.pc = 0x002921E0u; return; } if (c.pc != 0x002F6344u) [[unlikely]] return; }
L_002F6344:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002F6348:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[6], c.r[17].w[0] + 73u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6358u); set32(c.r[5], 0u + 33u);  if (depth < kMaxDepth) unit_006D(c, 157u, depth + 1u); else { c.pc = 0x002D5C40u; return; } if (c.pc != 0x002F6358u) [[unlikely]] return; }
L_002F6358:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 3u);  goto L_002F6384; }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[5], c.r[17].w[0] + 29u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6380u); set32(c.r[7], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F6380u) [[unlikely]] return; }
L_002F6380:
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_002F6384:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_002F63A0; }
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 164u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 5;
L_002F63A0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F63B0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002F63E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[3].w[0] + 132u)));  if (t) { goto L_002F63E8; } }
L_002F63E4:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002F63E8:
    set32(c.r[2], ld32((c.r[17].w[0] + 140u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  goto L_002F6440; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_002F6404; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 124u)));
    c.budget -= 2;
L_002F6404:
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6410u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0052(c, 85u, depth + 1u); else { c.pc = 0x00268C10u; return; } if (c.pc != 0x002F6410u) [[unlikely]] return; }
L_002F6410:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_002F6420; }
    set32(c.r[4], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 1;
L_002F6420:
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F642Cu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005B(c, 290u, depth + 1u); else { c.pc = 0x0028ECF0u; return; } if (c.pc != 0x002F642Cu) [[unlikely]] return; }
L_002F642C:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 180u)));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 180u), c.r[3].w[0]);  if (t) { goto L_002F6618; } }
L_002F6440:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6448u);  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x002F6448u) [[unlikely]] return; }
L_002F6448:
    c.r[3].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));  goto L_002F6588; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[3].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[4].w[0] + 3028u)));  if (t) { goto L_002F64DC; } }
L_002F646C:
    c.f[12] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[20], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6480u); set32(c.r[19], ld32((c.r[18].w[0] + 144u)));  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x002F6480u) [[unlikely]] return; }
L_002F6480:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40900000u);
    c.f[13] = 0u;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.f[2] = c.r[3].w[0];
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.f[3] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.facc = fp::ee::add(c.fcr31, c.f[13], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[20]);
    c.r[7].d[0] = 0ull + 0ull;
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    set32(c.r[8], 0u + 1u);
    c.f[1] = c.r[2].w[0];
    c.f[12] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F64CCu); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0058(c, 252u, depth + 1u); else { c.pc = 0x002824C0u; return; } if (c.pc != 0x002F64CCu) [[unlikely]] return; }
L_002F64CC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[20] = fp::ee::add(c.fcr31, c.f[20], c.f[0]);
    c.budget -= 4;
L_002F64DC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F646Cu | kUnwind; return; } goto L_002F646C; }
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 164u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_002F661C; }
    set32(c.r[5], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], 0u + 2000u);
    set32(c.r[16], ld32((c.r[5].w[0] + 3028u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002F6618; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F652Cu); set32(c.r[5], 0u + 33u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x002A8970u; return; } if (c.pc != 0x002F652Cu) [[unlikely]] return; }
L_002F652C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002F6578; } }
L_002F6534:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002F654C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6544u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002F6544u) [[unlikely]] return; }
L_002F6544:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[18].w[0] + 352u);  if (t) { goto L_002F6558; } }
L_002F654C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6554u);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002F6554u) [[unlikely]] return; }
L_002F6554:
    set32(c.r[5], c.r[16].w[0] + 352u);
    c.budget -= 1;
L_002F6558:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6560u); set32(c.r[4], c.r[19].w[0] + 352u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x002F6560u) [[unlikely]] return; }
L_002F6560:
    set32(c.r[2], ld32((c.r[19].w[0] + 308u)));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[19].w[0] + 308u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6574u); set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  if (depth < kMaxDepth) unit_0062(c, 76u, depth + 1u); else { c.pc = 0x002A89C0u; return; } if (c.pc != 0x002F6574u) [[unlikely]] return; }
L_002F6574:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002F6578:
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { set32(c.r[18], ld32((c.r[16].w[0] + 1320u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F6534u | kUnwind; return; } goto L_002F6534; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F6618; } }
L_002F6588:
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[19], ld32((c.r[3].w[0] + 3024u)));
    set32(c.r[2], c.r[3].w[0] + 112u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[2].w[0] + 2916u);  if (t) { goto L_002F65D4; } }
L_002F659C:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[3], c.r[18].w[0] + c.r[2].w[0]);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42DC0000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 144u)));
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    set32(c.r[8], 0u + 1u);
    set32(c.r[6], ld32((c.r[3].w[0] + 144u)));
    c.f[14] = c.f[13];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F65D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 252u, depth + 1u); else { c.pc = 0x002824C0u; return; } if (c.pc != 0x002F65D0u) [[unlikely]] return; }
L_002F65D0:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_002F65D4:
    c.r[2].d[0] = c.r[20].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[20].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F659Cu | kUnwind; return; } goto L_002F659C; }
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[5], 0u + 25u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F65FCu); set32(c.r[7], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F65FCu) [[unlikely]] return; }
L_002F65FC:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[5], 0u + 26u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6618u); set32(c.r[7], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F6618u) [[unlikely]] return; }
L_002F6618:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_002F661C:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002F6640:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6654u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 177u, depth + 1u); else { c.pc = 0x001A6280u; return; } if (c.pc != 0x002F6654u) [[unlikely]] return; }
L_002F6654:
    set32(c.r[3], ld32((c.r[16].w[0] + 140u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 76u)));  goto L_002F66A0; }
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[3], 0u + 14u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002F669C; } }
    c.f[1] = ld32((c.r[16].w[0] + 100u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F669C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 176u)));
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    st32((c.r[4].w[0] + 176u), c.r[3].w[0]);
    c.budget -= 4;
L_002F669C:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_002F66A0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002F6700; }
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_002F66FC; } }
    set32(c.r[4], c.r[3].w[0] + 1u);
    set32(c.r[3], 0u + 200u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st32((c.r[16].w[0] + 164u), c.r[4].w[0]);  if (t) { goto L_002F66E8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_002F66D8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F66FC; } }
L_002F66D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F66E0u); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_005B(c, 80u, depth + 1u); else { c.pc = 0x0028CEC0u; return; } if (c.pc != 0x002F66E0u) [[unlikely]] return; }
L_002F66E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F66FC; } }
L_002F66E8:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F66F4u); set32(c.r[5], 0u + 21u);  if (depth < kMaxDepth) unit_005B(c, 80u, depth + 1u); else { c.pc = 0x0028CEC0u; return; } if (c.pc != 0x002F66F4u) [[unlikely]] return; }
L_002F66F4:
    set32(c.r[3], 0u - 1u);
    st32((c.r[16].w[0] + 164u), c.r[3].w[0]);
    c.budget -= 2;
L_002F66FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002F6700:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F6710:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002F67AC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 30432u);
    set32(c.r[2], c.r[2].w[0] + 30488u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_002F6794; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 21632u);
    set32(c.r[2], c.r[2].w[0] + 21688u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_002F6794; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6788u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x002F6788u) [[unlikely]] return; }
L_002F6788:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6794u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x002F6794u) [[unlikely]] return; }
L_002F6794:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002F67B0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F67ACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x002F67ACu) [[unlikely]] return; }
L_002F67AC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002F67B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F67D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002F686C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 30576u);
    set32(c.r[2], c.r[2].w[0] + 30632u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_002F6854; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 21536u);
    set32(c.r[2], c.r[2].w[0] + 21592u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_002F6854; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6848u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x002F6848u) [[unlikely]] return; }
L_002F6848:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6854u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x002F6854u) [[unlikely]] return; }
L_002F6854:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002F6870; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F686Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x002F686Cu) [[unlikely]] return; }
L_002F686C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002F6870:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F6890:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002F692C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 30672u);
    set32(c.r[2], c.r[2].w[0] + 30728u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_002F6914; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 21536u);
    set32(c.r[2], c.r[2].w[0] + 21592u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_002F6914; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6908u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x002F6908u) [[unlikely]] return; }
L_002F6908:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6914u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x002F6914u) [[unlikely]] return; }
L_002F6914:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002F6930; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F692Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x002F692Cu) [[unlikely]] return; }
L_002F692C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002F6930:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F6950:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002F69DC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 30768u);
    set32(c.r[2], c.r[2].w[0] + 30824u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_002F69C4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 28176u);
    set32(c.r[2], c.r[2].w[0] + 28232u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 816u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F69ACu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x002F69ACu) [[unlikely]] return; }
L_002F69AC:
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F69B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x002F69B8u) [[unlikely]] return; }
L_002F69B8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F69C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x002F69C4u) [[unlikely]] return; }
L_002F69C4:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_002F69E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F69DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x002F69DCu) [[unlikely]] return; }
L_002F69DC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002F69E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F6A00:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F6950u | kUnwind; return; } goto L_002F6950; }
L_002F6A10:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F6890u | kUnwind; return; } goto L_002F6890; }
L_002F6A20:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F46F0u | kUnwind; return; } goto L_002F46F0; }
L_002F6A30:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F67D0u | kUnwind; return; } goto L_002F67D0; }
L_002F6A40:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F49F0u | kUnwind; return; } goto L_002F49F0; }
L_002F6A50:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F6710u | kUnwind; return; } goto L_002F6710; }
L_002F6A60:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6A90u); set32(c.r[4], 0u + 1424u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002F6A90u) [[unlikely]] return; }
L_002F6A90:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_002F6AB4; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6AB0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 256u, depth + 1u); else { c.pc = 0x002F6AD0u; return; } if (c.pc != 0x002F6AB0u) [[unlikely]] return; }
L_002F6AB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_002F6AB4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002F6AD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6AE4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 37u, depth + 1u); else { c.pc = 0x0027C290u; return; } if (c.pc != 0x002F6AE4u) [[unlikely]] return; }
L_002F6AE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 31536u);
    set32(c.r[3], c.r[3].w[0] + 31592u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F6B10:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027CCC0u | kUnwind; return; } [[clang::musttail]] return unit_0057(c, 85u, depth); }
L_002F6B20:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x001A6280u | kUnwind; return; } [[clang::musttail]] return unit_0021(c, 177u, depth); }
L_002F6B30:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027DC70u | kUnwind; return; } [[clang::musttail]] return unit_0057(c, 181u, depth); }
L_002F6B40:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x001A62C0u | kUnwind; return; } [[clang::musttail]] return unit_0021(c, 181u, depth); }
L_002F6B50:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 20u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 12;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_002F6C90; } }
    set32(c.r[2], 0u + 15u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 180u);  goto L_002F6C60; }
    set32(c.r[2], 0u + 14u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_002F6BE0; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 100u);  goto L_002F6BB0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F6CDC; } }
    set32(c.r[4], 0u + 100u);
    c.budget -= 1;
L_002F6BB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6BB8u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002F6BB8u) [[unlikely]] return; }
L_002F6BB8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_002F6CE0; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6BD8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 288u, depth + 1u); else { c.pc = 0x002F6EB0u; return; } if (c.pc != 0x002F6BD8u) [[unlikely]] return; }
L_002F6BD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F6CDC; } }
L_002F6BE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6BE8u);  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x002F6BE8u) [[unlikely]] return; }
L_002F6BE8:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u + 156u);  goto L_002F6C2C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6C00u); set32(c.r[4], 0u + 136u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002F6C00u) [[unlikely]] return; }
L_002F6C00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F6CDC; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6C20u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 292u, depth + 1u); else { c.pc = 0x002F6F50u; return; } if (c.pc != 0x002F6C20u) [[unlikely]] return; }
L_002F6C20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F6CDC; } }
    set32(c.r[4], 0u + 156u);
    c.budget -= 1;
L_002F6C2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6C34u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002F6C34u) [[unlikely]] return; }
L_002F6C34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F6CDC; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6C54u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 301u, depth + 1u); else { c.pc = 0x002F7110u; return; } if (c.pc != 0x002F6C54u) [[unlikely]] return; }
L_002F6C54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F6CDC; } }
    set32(c.r[4], 0u + 180u);
    c.budget -= 1;
L_002F6C60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6C68u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002F6C68u) [[unlikely]] return; }
L_002F6C68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F6CDC; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6C88u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 22u, depth + 1u); else { c.pc = 0x002F8310u; return; } if (c.pc != 0x002F6C88u) [[unlikely]] return; }
L_002F6C88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F6CDC; } }
L_002F6C90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6C98u);  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x002F6C98u) [[unlikely]] return; }
L_002F6C98:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F6CD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6CB0u); set32(c.r[4], 0u + 100u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002F6CB0u) [[unlikely]] return; }
L_002F6CB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F6CDC; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6CD0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 275u, depth + 1u); else { c.pc = 0x002F6D00u; return; } if (c.pc != 0x002F6CD0u) [[unlikely]] return; }
L_002F6CD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F6CDC; } }
L_002F6CD8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002F6CDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_002F6CE0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002F6D00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6D14u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 272u, depth + 1u); else { c.pc = 0x00272480u; return; } if (c.pc != 0x002F6D14u) [[unlikely]] return; }
L_002F6D14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 31440u);
    set32(c.r[3], c.r[3].w[0] + 31496u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F6D50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6D64u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 278u, depth + 1u); else { c.pc = 0x00272520u; return; } if (c.pc != 0x002F6D64u) [[unlikely]] return; }
L_002F6D64:
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_002F6E4C; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_002F6DD0; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_002F6D90; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002F6E80; } }
L_002F6D90:
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6DA0u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_006D(c, 10u, depth + 1u); else { c.pc = 0x002D4150u; return; } if (c.pc != 0x002F6DA0u) [[unlikely]] return; }
L_002F6DA0:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6DACu); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_005A(c, 335u, depth + 1u); else { c.pc = 0x0028B6D0u; return; } if (c.pc != 0x002F6DACu) [[unlikely]] return; }
L_002F6DAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6DB4u); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_005A(c, 338u, depth + 1u); else { c.pc = 0x0028B760u; return; } if (c.pc != 0x002F6DB4u) [[unlikely]] return; }
L_002F6DB4:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6DC0u); set32(c.r[5], ld32((c.r[4].w[0] + 476u)));  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002F6DC0u) [[unlikely]] return; }
L_002F6DC0:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 4;
L_002F6DD0:
    set32(c.r[3], ld32((c.r[4].w[0] + 464u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 176u)));  goto L_002F6DE8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002F6DF0; } }
L_002F6DE8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 2;
L_002F6DF0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F6E7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6E00u); set32(c.r[5], ld32((c.r[4].w[0] + 476u)));  if (depth < kMaxDepth) unit_0061(c, 355u, depth + 1u); else { c.pc = 0x002A7C30u; return; } if (c.pc != 0x002F6E00u) [[unlikely]] return; }
L_002F6E00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F6E7C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6E1Cu); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_006D(c, 10u, depth + 1u); else { c.pc = 0x002D4150u; return; } if (c.pc != 0x002F6E1Cu) [[unlikely]] return; }
L_002F6E1C:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 176u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[4].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6E3Cu); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_005A(c, 335u, depth + 1u); else { c.pc = 0x0028B6D0u; return; } if (c.pc != 0x002F6E3Cu) [[unlikely]] return; }
L_002F6E3C:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 4;
L_002F6E4C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 176u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F6E7C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.f[12] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6E7Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005A(c, 195u, depth + 1u); else { c.pc = 0x00289AC0u; return; } if (c.pc != 0x002F6E7Cu) [[unlikely]] return; }
L_002F6E7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002F6E80:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F6E90:
    set32(c.r[3], ld32((c.r[4].w[0] + 72u)));
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { st32((c.r[4].w[0] + 72u), c.r[2].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002724D0u | kUnwind; return; } [[clang::musttail]] return unit_0054(c, 274u, depth); }
L_002F6EB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6EC4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0055(c, 284u, depth + 1u); else { c.pc = 0x00276A70u; return; } if (c.pc != 0x002F6EC4u) [[unlikely]] return; }
L_002F6EC4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 31344u);
    set32(c.r[3], c.r[3].w[0] + 31400u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F6EF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6F04u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0055(c, 381u, depth + 1u); else { c.pc = 0x00277740u; return; } if (c.pc != 0x002F6F04u) [[unlikely]] return; }
L_002F6F04:
    set32(c.r[5], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], 0u + 12u);
    set32(c.r[4], ld32((c.r[5].w[0] + 476u)));
    c.budget -= 5;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002F6F38; }
    set32(c.r[3], ld32((c.r[5].w[0] + 608u)));
    c.f[0] = ld32((c.r[5].w[0] + 492u));
    c.f[2] = ld32((c.r[3].w[0] + 788u));
    c.f[1] = ld32((c.r[3].w[0] + 784u));
    c.f[1] = fp::ee::div(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[5].w[0] + 492u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 8;
L_002F6F38:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F6F50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6F64u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 45u, depth + 1u); else { c.pc = 0x0026C620u; return; } if (c.pc != 0x002F6F64u) [[unlikely]] return; }
L_002F6F64:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 31248u);
    set32(c.r[3], c.r[3].w[0] + 31304u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F6F90:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0026C870u | kUnwind; return; } [[clang::musttail]] return unit_0053(c, 57u, depth); }
L_002F6FA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002F6FC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002F70FC; } }
L_002F6FC4:
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 3028u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 144u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], ld32((c.r[3].w[0] + 144u)));  if (t) { goto L_002F6FE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 132u)));  if (t) { goto L_002F6FEC; } }
L_002F6FE8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002F6FEC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42040000u);
    c.r[7].d[0] = 0ull + 0ull;
    c.f[13] = 0u;
    set32(c.r[8], 0u + 1u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7008u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0058(c, 252u, depth + 1u); else { c.pc = 0x002824C0u; return; } if (c.pc != 0x002F7008u) [[unlikely]] return; }
L_002F7008:
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 144u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], ld32((c.r[16].w[0] + 144u)));  if (t) { goto L_002F7024; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 132u)));  if (t) { goto L_002F7028; } }
L_002F7024:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002F7028:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42180000u);
    c.r[7].d[0] = 0ull + 0ull;
    c.f[13] = 0u;
    set32(c.r[8], 0u + 1u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7044u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0058(c, 252u, depth + 1u); else { c.pc = 0x002824C0u; return; } if (c.pc != 0x002F7044u) [[unlikely]] return; }
L_002F7044:
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 144u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], ld32((c.r[16].w[0] + 144u)));  if (t) { goto L_002F7060; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 132u)));  if (t) { goto L_002F7064; } }
L_002F7060:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002F7064:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42280000u);
    c.r[7].d[0] = 0ull + 0ull;
    c.f[13] = 0u;
    set32(c.r[8], 0u + 1u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7080u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0058(c, 252u, depth + 1u); else { c.pc = 0x002824C0u; return; } if (c.pc != 0x002F7080u) [[unlikely]] return; }
L_002F7080:
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 144u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], ld32((c.r[16].w[0] + 144u)));  if (t) { goto L_002F709C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 132u)));  if (t) { goto L_002F70A0; } }
L_002F709C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002F70A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42340000u);
    c.r[7].d[0] = 0ull + 0ull;
    c.f[13] = 0u;
    set32(c.r[8], 0u + 1u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F70BCu); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0058(c, 252u, depth + 1u); else { c.pc = 0x002824C0u; return; } if (c.pc != 0x002F70BCu) [[unlikely]] return; }
L_002F70BC:
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 144u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], ld32((c.r[16].w[0] + 144u)));  if (t) { goto L_002F70D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 132u)));  if (t) { goto L_002F70DC; } }
L_002F70D8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002F70DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C00000u);
    c.r[7].d[0] = 0ull + 0ull;
    c.f[13] = 0u;
    set32(c.r[8], 0u + 1u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F70F8u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0058(c, 252u, depth + 1u); else { c.pc = 0x002824C0u; return; } if (c.pc != 0x002F70F8u) [[unlikely]] return; }
L_002F70F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002F70FC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F7110:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7124u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 45u, depth + 1u); else { c.pc = 0x0026C620u; return; } if (c.pc != 0x002F7124u) [[unlikely]] return; }
L_002F7124:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 31152u);
    set32(c.r[2], c.r[2].w[0] + 31208u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 136u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F714Cu); set32(c.r[6], 0u + 20u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x002F714Cu) [[unlikely]] return; }
L_002F714C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F7160:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7184u); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002F7184u) [[unlikely]] return; }
L_002F7184:
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7190u); set32(c.r[5], 0u + 10010u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002F7190u) [[unlikely]] return; }
L_002F7190:
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F719Cu); set32(c.r[5], 0u + 10020u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002F719Cu) [[unlikely]] return; }
L_002F719C:
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F71A8u); set32(c.r[5], 0u + 10030u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002F71A8u) [[unlikely]] return; }
L_002F71A8:
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F71B4u); set32(c.r[5], 0u + 10040u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002F71B4u) [[unlikely]] return; }
L_002F71B4:
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F71C0u); c.r[5].d[0] = 0ull | 50000ull;  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002F71C0u) [[unlikely]] return; }
L_002F71C0:
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[17].w[0] << 2);
    c.budget -= 2;
L_002F71C8:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 136u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[2].w[0] + 136u);  if (t) { goto L_002F71EC; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F71E8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F71E8u) [[unlikely]] return; }
L_002F71E8:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_002F71EC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F71C8u | kUnwind; return; } goto L_002F71C8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7204u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 57u, depth + 1u); else { c.pc = 0x0026C870u; return; } if (c.pc != 0x002F7204u) [[unlikely]] return; }
L_002F7204:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002F7220:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 8;
L_002F7240:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 136u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[18], c.r[2].w[0] + 136u);  if (t) { goto L_002F7280; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002F7284; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F7280; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F727Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F727Cu) [[unlikely]] return; }
L_002F727C:
    st32((c.r[18].w[0]), 0u);
    c.budget -= 1;
L_002F7280:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002F7284:
    c.r[2].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F7240u | kUnwind; return; } goto L_002F7240; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7298u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 77u, depth + 1u); else { c.pc = 0x0026CAC0u; return; } if (c.pc != 0x002F7298u) [[unlikely]] return; }
L_002F7298:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002F72B0:
    set32(c.r[29], c.r[29].w[0] - 352u);
    set32(c.r[3], c.r[5].w[0] - 44u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_0076(c, 6u, depth); } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 31696u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x002F4000u < 16384u) { entry = entries_0075[(t - 0x002F4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002F7304:
    set32(c.r[16], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002F731C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002F7374; } }
L_002F731C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7324u); set32(c.r[5], 0u + 67u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002F7324u) [[unlikely]] return; }
L_002F7324:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002F7344; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002F7354; } }
L_002F7344:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002F7354:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_002F7374; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  goto L_002F736C; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002F736C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F7374; } }
L_002F7374:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[6], 0u + 10000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7384u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x002F7384u) [[unlikely]] return; }
L_002F7384:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[17].w[0] + 76u)));  goto L_002F73A4; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F73A0u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x002F73A0u) [[unlikely]] return; }
L_002F73A0:
    set32(c.r[16], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 1;
L_002F73A4:
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002F73B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002F741C; } }
L_002F73B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F73C0u); set32(c.r[5], 0u + 67u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002F73C0u) [[unlikely]] return; }
L_002F73C0:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002F73E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002F73F0; } }
L_002F73E0:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002F73F0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_002F741C; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_002F7410; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002F7414; } }
L_002F7410:
    set32(c.r[5], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_002F7414:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F741C; } }
L_002F741C:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[6], 0u + 10010u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F742Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x002F742Cu) [[unlikely]] return; }
L_002F742C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002F745C; }
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F744Cu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x002F744Cu) [[unlikely]] return; }
L_002F744C:
    set32(c.r[2], ld32((c.r[16].w[0] + 308u)));
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    st32((c.r[16].w[0] + 308u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 4;
L_002F745C:
    set32(c.r[2], ld32((c.r[2].w[0] + 3028u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7468u); set32(c.r[4], ld32((c.r[2].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x002F7468u) [[unlikely]] return; }
L_002F7468:
    c.r[3].d[0] = c.r[2].d[0] ^ 3ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  [[clang::musttail]] return unit_0076(c, 7u, depth); }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7480u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 17u, depth + 1u); else { c.pc = 0x002F8220u; return; } if (c.pc != 0x002F7480u) [[unlikely]] return; }
L_002F7480:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0076(c, 6u, depth); } }
L_002F7488:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7494u); set32(c.r[5], 0u + 10010u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x002A8970u; return; } if (c.pc != 0x002F7494u) [[unlikely]] return; }
L_002F7494:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0076(c, 6u, depth); } }
    set32(c.r[8], ld32((c.r[2].w[0] + 308u)));
    set32(c.r[3], 0u - 17u);
    set32(c.r[4], c.r[2].w[0] + 32u);
    set32(c.r[5], 0u - 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[8].d[0] = c.r[8].d[0] & c.r[3].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[2].w[0] + 308u), c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[3].w[0] - 31712u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F74C8u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_00A8(c, 238u, depth + 1u); else { c.pc = 0x003C2D20u; return; } if (c.pc != 0x002F74C8u) [[unlikely]] return; }
L_002F74C8:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[5], 0u + 10010u);
    set32(c.r[6], 0u + 410u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F74DCu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 55u, depth + 1u); else { c.pc = 0x002A8670u; return; } if (c.pc != 0x002F74DCu) [[unlikely]] return; }
L_002F74DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0076(c, 6u, depth); } }
L_002F74E4:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F74F0u); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002F74F0u) [[unlikely]] return; }
L_002F74F0:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F74FCu); set32(c.r[5], 0u + 10010u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002F74FCu) [[unlikely]] return; }
L_002F74FC:
    set32(c.r[16], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002F7514; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002F7578; } }
L_002F7514:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F751Cu); set32(c.r[5], 0u + 67u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002F751Cu) [[unlikely]] return; }
L_002F751C:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002F753C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002F754C; } }
L_002F753C:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002F754C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_002F7578; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_002F756C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002F7570; } }
L_002F756C:
    set32(c.r[5], c.r[2].w[0] + 24u);
    c.budget -= 1;
L_002F7570:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F7578; } }
L_002F7578:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[6], 0u + 10020u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7588u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x002F7588u) [[unlikely]] return; }
L_002F7588:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[17].w[0] + 76u)));  goto L_002F75A8; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F75A4u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x002F75A4u) [[unlikely]] return; }
L_002F75A4:
    set32(c.r[16], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 1;
L_002F75A8:
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002F75BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002F7620; } }
L_002F75BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F75C4u); set32(c.r[5], 0u + 67u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002F75C4u) [[unlikely]] return; }
L_002F75C4:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002F75E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002F75F4; } }
L_002F75E4:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002F75F4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_002F7620; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_002F7614; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002F7618; } }
L_002F7614:
    set32(c.r[5], c.r[2].w[0] + 36u);
    c.budget -= 1;
L_002F7618:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F7620; } }
L_002F7620:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[6], 0u + 10030u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7630u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x002F7630u) [[unlikely]] return; }
L_002F7630:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  goto L_002F7660; }
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7650u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x002F7650u) [[unlikely]] return; }
L_002F7650:
    set32(c.r[2], ld32((c.r[16].w[0] + 308u)));
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    st32((c.r[16].w[0] + 308u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 4;
L_002F7660:
    set32(c.r[5], 0u + 22u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F766Cu); set32(c.r[6], 0u + 400u);  if (depth < kMaxDepth) unit_0062(c, 58u, depth + 1u); else { c.pc = 0x002A86F0u; return; } if (c.pc != 0x002F766Cu) [[unlikely]] return; }
L_002F766C:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[5], 0u + 22u);
    set32(c.r[6], 0u + 420u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7680u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 55u, depth + 1u); else { c.pc = 0x002A8670u; return; } if (c.pc != 0x002F7680u) [[unlikely]] return; }
L_002F7680:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0076(c, 6u, depth); } }
L_002F7688:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7694u); set32(c.r[5], 0u + 10030u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x002A8970u; return; } if (c.pc != 0x002F7694u) [[unlikely]] return; }
L_002F7694:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0076(c, 6u, depth); } }
    set32(c.r[8], ld32((c.r[2].w[0] + 308u)));
    set32(c.r[3], 0u - 17u);
    set32(c.r[4], c.r[2].w[0] + 32u);
    set32(c.r[5], 0u - 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[8].d[0] = c.r[8].d[0] & c.r[3].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[2].w[0] + 308u), c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[3].w[0] - 31704u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F76C8u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_00A8(c, 238u, depth + 1u); else { c.pc = 0x003C2D20u; return; } if (c.pc != 0x002F76C8u) [[unlikely]] return; }
L_002F76C8:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[5], 0u + 10030u);
    set32(c.r[6], 0u + 430u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F76DCu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 55u, depth + 1u); else { c.pc = 0x002A8670u; return; } if (c.pc != 0x002F76DCu) [[unlikely]] return; }
L_002F76DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0076(c, 6u, depth); } }
L_002F76E4:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F76F0u); set32(c.r[5], 0u + 10020u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002F76F0u) [[unlikely]] return; }
L_002F76F0:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F76FCu); set32(c.r[5], 0u + 10030u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002F76FCu) [[unlikely]] return; }
L_002F76FC:
    set32(c.r[16], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002F7714; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002F7778; } }
L_002F7714:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F771Cu); set32(c.r[5], 0u + 67u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002F771Cu) [[unlikely]] return; }
L_002F771C:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002F773C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002F774C; } }
L_002F773C:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002F774C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_002F7778; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_002F776C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002F7770; } }
L_002F776C:
    set32(c.r[5], c.r[2].w[0] + 48u);
    c.budget -= 1;
L_002F7770:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F7778; } }
L_002F7778:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[6], 0u + 10000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7788u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x002F7788u) [[unlikely]] return; }
L_002F7788:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002F77A8; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F77A4u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x002F77A4u) [[unlikely]] return; }
L_002F77A4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002F77A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F77B0u); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002F8100u; return; } if (c.pc != 0x002F77B0u) [[unlikely]] return; }
L_002F77B0:
    c.f[13] = ld32((c.r[29].w[0] + 344u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F77BCu); c.f[12] = ld32((c.r[29].w[0] + 336u));  if (depth < kMaxDepth) unit_0019(c, 12u, depth + 1u); else { c.pc = 0x00184300u; return; } if (c.pc != 0x002F77BCu) [[unlikely]] return; }
L_002F77BC:
    set32(c.r[5], ld32((c.r[17].w[0] + 76u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    set32(c.r[4], 0u + 4u);
    st32((c.r[5].w[0] + 244u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[5].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F77ECu); st32((c.r[5].w[0] + 176u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x002F77ECu) [[unlikely]] return; }
L_002F77EC:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[21].d[0] = 0ull + 0ull;
    set32(c.r[16], ld32((c.r[3].w[0] + 3024u)));
    set32(c.r[2], c.r[3].w[0] + 112u);
    set32(c.r[22], c.r[2].w[0] + 2916u);
    c.budget -= 6;
L_002F7804:
    set32(c.r[19], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_002F781C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F7890; } }
L_002F781C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7824u); set32(c.r[5], 0u + 69u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002F7824u) [[unlikely]] return; }
L_002F7824:
    set32(c.r[4], ld32((c.r[19].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002F7844; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002F7854; } }
L_002F7844:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002F7854:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[5].w[0] + 8u));  goto L_002F7864; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F7890; } }
L_002F7864:
    set32(c.r[3], c.r[21].w[0] << 1);
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[4].w[0] << 2);  goto L_002F7880; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F7890; } }
L_002F7880:
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_002F7890:
    st32((c.r[29].w[0] + 272u), c.r[2].w[0]);
    set32(c.r[19], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 580u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_002F78AC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F7910; } }
L_002F78AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F78B4u); set32(c.r[5], 0u + 67u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002F78B4u) [[unlikely]] return; }
L_002F78B4:
    set32(c.r[4], ld32((c.r[19].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002F78D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002F78E4; } }
L_002F78D4:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002F78E4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002F7910; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_002F7904; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F7908; } }
L_002F7904:
    set32(c.r[2], c.r[2].w[0] + 72u);
    c.budget -= 1;
L_002F7908:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F7910; } }
L_002F7910:
    st32((c.r[29].w[0] + 276u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    st32((c.r[29].w[0] + 280u), 0u);
    st32((c.r[29].w[0] + 292u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 284u), 0u);
    st32((c.r[29].w[0] + 296u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 288u), 0u);
    set32(c.r[19], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 580u)));
    c.budget -= 12;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_002F7948; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F79C0; } }
L_002F7948:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7950u); set32(c.r[5], 0u + 69u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002F7950u) [[unlikely]] return; }
L_002F7950:
    set32(c.r[4], ld32((c.r[19].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002F7970; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002F7980; } }
L_002F7970:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002F7980:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], c.r[21].w[0] << 1);  goto L_002F7990; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F79C0; } }
L_002F7990:
    c.r[2].d[0] = ld8((c.r[5].w[0] + 8u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[4].w[0] << 2);  goto L_002F79B0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F79C0; } }
L_002F79B0:
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_002F79C0:
    st32((c.r[29].w[0] + 300u), c.r[2].w[0]);
    set32(c.r[19], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 580u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_002F79DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F7A40; } }
L_002F79DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F79E4u); set32(c.r[5], 0u + 67u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002F79E4u) [[unlikely]] return; }
L_002F79E4:
    set32(c.r[4], ld32((c.r[19].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002F7A04; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002F7A14; } }
L_002F7A04:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002F7A14:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002F7A40; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_002F7A34; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F7A38; } }
L_002F7A34:
    set32(c.r[2], c.r[2].w[0] + 84u);
    c.budget -= 1;
L_002F7A38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F7A40; } }
L_002F7A40:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != c.r[18].d[0]; st32((c.r[29].w[0] + 304u), c.r[2].w[0]);  if (t) { goto L_002F7A54; } }
    c.f[0] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002F7A68; } }
L_002F7A54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7A64u);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x002F7A64u) [[unlikely]] return; }
L_002F7A64:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_002F7A68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[29].w[0] + 308u), c.f[0]);
    st32((c.r[29].w[0] + 320u), c.r[2].w[0]);
    set32(c.r[4], 0u + 336u);
    st32((c.r[29].w[0] + 316u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 324u), c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7A88u); st32((c.r[29].w[0] + 312u), 0u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002F7A88u) [[unlikely]] return; }
L_002F7A88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002F7B2C; } }
    set32(c.r[19], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_002F7AA8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_002F7B00; } }
L_002F7AA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7AB0u); set32(c.r[5], 0u + 68u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002F7AB0u) [[unlikely]] return; }
L_002F7AB0:
    set32(c.r[4], ld32((c.r[19].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002F7AD0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002F7AE0; } }
L_002F7AD0:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002F7AE0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[8].d[0] = 0ull + 0ull;  goto L_002F7B00; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[8], ld32((c.r[3].w[0] + 4u)));  goto L_002F7AF8; }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002F7AF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F7B00; } }
L_002F7B00:
    mmi::divu(c, 0, c.r[21].w[0], c.r[16].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[7], c.r[21].w[0] + 20000u);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7B28u); c.r[9].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_007A(c, 353u, depth + 1u); else { c.pc = 0x0030B590u; return; } if (c.pc != 0x002F7B28u) [[unlikely]] return; }
L_002F7B28:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002F7B2C:
    set32(c.r[2], c.r[21].w[0] << 2);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 272u);
    st32((c.r[2].w[0] + 136u), c.r[20].w[0]);
    set32(c.r[19], c.r[2].w[0] + 136u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7B4Cu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_007A(c, 366u, depth + 1u); else { c.pc = 0x0030B7E0u; return; } if (c.pc != 0x002F7B4Cu) [[unlikely]] return; }
L_002F7B4C:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.r[5].d[0] = 0ull | 50000ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x420C0000u);
    set32(c.r[3], 0u + 15u);
    c.f[12] = c.r[2].w[0];
    st32((c.r[4].w[0] + 280u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    st32((c.r[2].w[0] + 288u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 296u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7B78u); set32(c.r[4], ld32((c.r[19].w[0])));  if (depth < kMaxDepth) unit_007B(c, 20u, depth + 1u); else { c.pc = 0x0030C1A0u; return; } if (c.pc != 0x002F7B78u) [[unlikely]] return; }
L_002F7B78:
    set32(c.r[4], ld32((c.r[19].w[0])));
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 80u)));
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 80u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F7804u | kUnwind; return; } goto L_002F7804; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[5], 0u + 26u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7BB0u); set32(c.r[7], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F7BB0u) [[unlikely]] return; }
L_002F7BB0:
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[3], 0u + 14u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[5], 0u + 22u);
    set32(c.r[2], ld32((c.r[2].w[0] + 136u)));
    st32((c.r[2].w[0] + 292u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7BD4u); set32(c.r[6], 0u + 400u);  if (depth < kMaxDepth) unit_0062(c, 58u, depth + 1u); else { c.pc = 0x002A86F0u; return; } if (c.pc != 0x002F7BD4u) [[unlikely]] return; }
L_002F7BD4:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[5], 0u + 22u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7BE4u); set32(c.r[6], 0u + 420u);  if (depth < kMaxDepth) unit_0062(c, 58u, depth + 1u); else { c.pc = 0x002A86F0u; return; } if (c.pc != 0x002F7BE4u) [[unlikely]] return; }
L_002F7BE4:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[5], 0u + 22u);
    set32(c.r[6], 0u + 440u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7BF8u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 55u, depth + 1u); else { c.pc = 0x002A8670u; return; } if (c.pc != 0x002F7BF8u) [[unlikely]] return; }
L_002F7BF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0076(c, 6u, depth); } }
L_002F7C00:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7C0Cu); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002F7C0Cu) [[unlikely]] return; }
L_002F7C0C:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7C18u); set32(c.r[5], 0u + 10010u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002F7C18u) [[unlikely]] return; }
L_002F7C18:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7C24u); set32(c.r[5], 0u + 10020u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002F7C24u) [[unlikely]] return; }
L_002F7C24:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7C30u); set32(c.r[5], 0u + 10030u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002F7C30u) [[unlikely]] return; }
L_002F7C30:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7C3Cu); set32(c.r[5], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002F8100u; return; } if (c.pc != 0x002F7C3Cu) [[unlikely]] return; }
L_002F7C3C:
    c.f[1] = ld32((c.r[29].w[0] + 256u));
    c.f[0] = ld32((c.r[29].w[0] + 264u));
    c.f[12] = c.f[1] ^ fp::kSign;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7C50u); c.f[13] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0019(c, 12u, depth + 1u); else { c.pc = 0x00184300u; return; } if (c.pc != 0x002F7C50u) [[unlikely]] return; }
L_002F7C50:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    st32((c.r[4].w[0] + 244u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[4].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[4].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[20], c.r[2].w[0] + 1u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7C88u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x002F7C88u) [[unlikely]] return; }
L_002F7C88:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[22], ld32((c.r[3].w[0] + 3024u)));
    set32(c.r[2], c.r[3].w[0] + 112u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[23], c.r[2].w[0] + 2916u);  if (t) { goto L_002F7F8C; } }
L_002F7CA4:
    set32(c.r[2], ld32((c.r[18].w[0] + 580u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002F7CB8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F7D30; } }
L_002F7CB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7CC0u); set32(c.r[5], 0u + 69u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002F7CC0u) [[unlikely]] return; }
L_002F7CC0:
    set32(c.r[4], ld32((c.r[18].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002F7CE0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002F7CF0; } }
L_002F7CE0:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002F7CF0:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 1);  goto L_002F7D00; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F7D30; } }
L_002F7D00:
    c.r[2].d[0] = ld8((c.r[5].w[0] + 8u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[4].w[0] << 2);  goto L_002F7D20; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F7D30; } }
L_002F7D20:
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_002F7D30:
    st32((c.r[29].w[0] + 224u), c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 580u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002F7D4C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F7DB0; } }
L_002F7D4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7D54u); set32(c.r[5], 0u + 67u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002F7D54u) [[unlikely]] return; }
L_002F7D54:
    set32(c.r[4], ld32((c.r[18].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002F7D74; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002F7D84; } }
L_002F7D74:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002F7D84:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002F7DB0; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_002F7DA4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F7DA8; } }
L_002F7DA4:
    set32(c.r[2], c.r[2].w[0] + 60u);
    c.budget -= 1;
L_002F7DA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F7DB0; } }
L_002F7DB0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[21].d[0]; st32((c.r[29].w[0] + 228u), c.r[2].w[0]);  if (t) { goto L_002F7DC4; } }
    c.f[0] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002F7DD8; } }
L_002F7DC4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7DD4u);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x002F7DD4u) [[unlikely]] return; }
L_002F7DD4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_002F7DD8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42240000u);
    st32((c.r[29].w[0] + 232u), c.f[0]);
    st32((c.r[29].w[0] + 244u), c.r[2].w[0]);
    set32(c.r[4], 0u + 336u);
    st32((c.r[29].w[0] + 240u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 248u), c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7DF8u); st32((c.r[29].w[0] + 236u), 0u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002F7DF8u) [[unlikely]] return; }
L_002F7DF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002F7E9C; } }
    set32(c.r[18], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002F7E18; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_002F7E70; } }
L_002F7E18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7E20u); set32(c.r[5], 0u + 68u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002F7E20u) [[unlikely]] return; }
L_002F7E20:
    set32(c.r[4], ld32((c.r[18].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002F7E40; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002F7E50; } }
L_002F7E40:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002F7E50:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[8].d[0] = 0ull + 0ull;  goto L_002F7E70; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[8], ld32((c.r[3].w[0] + 4u)));  goto L_002F7E68; }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002F7E68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F7E70; } }
L_002F7E70:
    mmi::divu(c, 0, c.r[16].w[0], c.r[22].w[0]);
    set32(c.r[9], ld32((c.r[17].w[0] + 96u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[23].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7E98u); set32(c.r[7], c.r[16].w[0] + 20000u);  if (depth < kMaxDepth) unit_007A(c, 353u, depth + 1u); else { c.pc = 0x0030B590u; return; } if (c.pc != 0x002F7E98u) [[unlikely]] return; }
L_002F7E98:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002F7E9C:
    set32(c.r[2], c.r[16].w[0] << 2);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 224u);
    st32((c.r[2].w[0] + 136u), c.r[19].w[0]);
    set32(c.r[6], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7EBCu); set32(c.r[19], c.r[2].w[0] + 136u);  if (depth < kMaxDepth) unit_007A(c, 366u, depth + 1u); else { c.pc = 0x0030B7E0u; return; } if (c.pc != 0x002F7EBCu) [[unlikely]] return; }
L_002F7EBC:
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[3].d[0] = 0ull | 50000ull;
    st32((c.r[2].w[0] + 280u), c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 580u)));
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002F7EE0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002F7F44; } }
L_002F7EE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7EE8u); set32(c.r[5], 0u + 68u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002F7EE8u) [[unlikely]] return; }
L_002F7EE8:
    set32(c.r[4], ld32((c.r[18].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002F7F08; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002F7F18; } }
L_002F7F08:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002F7F18:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_002F7F44; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_002F7F38; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002F7F3C; } }
L_002F7F38:
    set32(c.r[5], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_002F7F3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F7F44; } }
L_002F7F44:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x420C0000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[3], 0u + 15u);
    st32((c.r[4].w[0] + 284u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    st32((c.r[2].w[0] + 288u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 296u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7F6Cu); set32(c.r[4], ld32((c.r[19].w[0])));  if (depth < kMaxDepth) unit_007B(c, 20u, depth + 1u); else { c.pc = 0x0030C1A0u; return; } if (c.pc != 0x002F7F6Cu) [[unlikely]] return; }
L_002F7F6C:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], ld32((c.r[4].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st32((c.r[4].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 8;
L_002F7F8C:
    c.r[2].d[0] = c.r[16].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 76u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F7CA4u | kUnwind; return; } goto L_002F7CA4; }
    set32(c.r[2], c.r[21].w[0] << 2);
    set32(c.r[3], c.r[20].w[0] + 9u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[5], 0u + 22u);
    set32(c.r[2], ld32((c.r[2].w[0] + 136u)));
    st32((c.r[2].w[0] + 292u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7FBCu); set32(c.r[6], 0u + 400u);  if (depth < kMaxDepth) unit_0062(c, 58u, depth + 1u); else { c.pc = 0x002A86F0u; return; } if (c.pc != 0x002F7FBCu) [[unlikely]] return; }
L_002F7FBC:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[5], 0u + 22u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7FCCu); set32(c.r[6], 0u + 420u);  if (depth < kMaxDepth) unit_0062(c, 58u, depth + 1u); else { c.pc = 0x002A86F0u; return; } if (c.pc != 0x002F7FCCu) [[unlikely]] return; }
L_002F7FCC:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[5], 0u + 22u);
    set32(c.r[6], 0u + 450u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7FE0u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 55u, depth + 1u); else { c.pc = 0x002A8670u; return; } if (c.pc != 0x002F7FE0u) [[unlikely]] return; }
L_002F7FE0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 3424u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_002F7FF4; }
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_002F7FF4:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8000u); set32(c.r[5], 0u + 22u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x002A8970u; return; } if (c.pc != 0x002F8000u) [[unlikely]] return; }
    [[clang::musttail]] return unit_0076(c, 1u, depth);
}

}
