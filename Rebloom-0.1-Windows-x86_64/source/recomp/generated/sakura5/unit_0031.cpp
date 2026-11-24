#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0031[4096] = {
    1, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0,
    0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 15,
    0, 0, 0, 0, 0, 16, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0,
    0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0,
    0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 30, 0, 0,
    0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 37, 0,
    0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0,
    0, 0, 0, 0, 0, 49, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0,
    57, 0, 0, 0, 0, 58, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 76,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0,
    0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0,
    0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0,
    0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 93, 94, 0, 0, 0,
    0, 0, 95, 0, 0, 96, 0, 0, 0, 0, 0, 97, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 101, 0, 102, 0, 103, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0,
    0, 0, 109, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0,
    0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 129, 0, 0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0,
    0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 142, 0, 0, 143, 0, 0, 0, 0, 0, 0, 144,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0,
    0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 150, 0, 0, 151, 0, 0, 0, 0, 0, 0,
    152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0,
    157, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 161, 0, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 164,
    0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0,
    170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0,
    174, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 177, 0, 0,
    0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0,
    182, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 189, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0,
    0, 0, 201, 0, 0, 202, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0,
    0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209,
    0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 220, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0,
    0, 0, 228, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 233, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 0, 247, 0, 0,
    0, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0,
    254, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 258, 0, 259,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0,
    0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0,
    268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    272, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 276,
    0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 281, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0,
    0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0,
    0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0,
    0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    298, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0,
    305, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 310,
    0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 315, 0,
    0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 320, 0, 0, 0, 0,
    321, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326,
    0, 0, 327, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0,
    332, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0,
    0, 0, 336, 0, 0, 0, 0, 0, 337, 0, 0, 0, 338, 0, 0, 0, 339, 0, 0, 0, 0, 340, 0, 341, 0, 0, 342, 0, 0, 0, 0, 0,
    343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 345, 0, 0, 0, 0, 0, 0, 346, 0, 0, 347, 0, 0, 0, 0, 0, 348, 0,
    0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 350, 0, 0, 351, 0, 0, 0, 0, 352, 0, 0, 353, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0,
    0, 355, 0, 0, 356, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0,
    359, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 362, 0, 0, 363, 0, 0, 0, 0, 0, 0, 364, 0, 0,
    0, 0, 0, 0, 0, 365, 0, 0, 0, 366, 0, 0, 367, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 370,
    0, 0, 371, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0,
    0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0,
    0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 381, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 383, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 387, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 394, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 396, 0, 0, 397, 0, 0, 0,
    0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0,
    402, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 406, 0, 0, 0, 0, 0,
    407, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 409, 0, 0, 0, 410, 0, 0, 0, 411, 0, 0, 0, 0, 412, 0, 413, 0, 0, 414, 0,
    0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0,
};

void unit_0031(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001E4000;
    case 2u: goto L_001E4008;
    case 3u: goto L_001E4018;
    case 4u: goto L_001E4034;
    case 5u: goto L_001E4058;
    case 6u: goto L_001E4074;
    case 7u: goto L_001E40A8;
    case 8u: goto L_001E40D0;
    case 9u: goto L_001E40E8;
    case 10u: goto L_001E410C;
    case 11u: goto L_001E4124;
    case 12u: goto L_001E4130;
    case 13u: goto L_001E4148;
    case 14u: goto L_001E415C;
    case 15u: goto L_001E417C;
    case 16u: goto L_001E4194;
    case 17u: goto L_001E419C;
    case 18u: goto L_001E41A8;
    case 19u: goto L_001E41C4;
    case 20u: goto L_001E41E8;
    case 21u: goto L_001E4204;
    case 22u: goto L_001E4238;
    case 23u: goto L_001E4260;
    case 24u: goto L_001E4278;
    case 25u: goto L_001E429C;
    case 26u: goto L_001E42B4;
    case 27u: goto L_001E42C0;
    case 28u: goto L_001E42D8;
    case 29u: goto L_001E42EC;
    case 30u: goto L_001E42F4;
    case 31u: goto L_001E4318;
    case 32u: goto L_001E4330;
    case 33u: goto L_001E439C;
    case 34u: goto L_001E43B4;
    case 35u: goto L_001E43D8;
    case 36u: goto L_001E43F0;
    case 37u: goto L_001E43F8;
    case 38u: goto L_001E4408;
    case 39u: goto L_001E4430;
    case 40u: goto L_001E4454;
    case 41u: goto L_001E4470;
    case 42u: goto L_001E44A4;
    case 43u: goto L_001E44CC;
    case 44u: goto L_001E44D8;
    case 45u: goto L_001E44F0;
    case 46u: goto L_001E455C;
    case 47u: goto L_001E4574;
    case 48u: goto L_001E45F4;
    case 49u: goto L_001E4614;
    case 50u: goto L_001E4618;
    case 51u: goto L_001E4694;
    case 52u: goto L_001E46D0;
    case 53u: goto L_001E46E4;
    case 54u: goto L_001E46F8;
    case 55u: goto L_001E47B4;
    case 56u: goto L_001E47E8;
    case 57u: goto L_001E4800;
    case 58u: goto L_001E4814;
    case 59u: goto L_001E4820;
    case 60u: goto L_001E488C;
    case 61u: goto L_001E48C0;
    case 62u: goto L_001E48D8;
    case 63u: goto L_001E48EC;
    case 64u: goto L_001E4978;
    case 65u: goto L_001E49B4;
    case 66u: goto L_001E49C8;
    case 67u: goto L_001E49DC;
    case 68u: goto L_001E49F4;
    case 69u: goto L_001E4A34;
    case 70u: goto L_001E4A50;
    case 71u: goto L_001E4A84;
    case 72u: goto L_001E4AA0;
    case 73u: goto L_001E4AB8;
    case 74u: goto L_001E4B2C;
    case 75u: goto L_001E4B68;
    case 76u: goto L_001E4B7C;
    case 77u: goto L_001E4C6C;
    case 78u: goto L_001E4C84;
    case 79u: goto L_001E4CA8;
    case 80u: goto L_001E4CC4;
    case 81u: goto L_001E4CF8;
    case 82u: goto L_001E4D14;
    case 83u: goto L_001E4D2C;
    case 84u: goto L_001E4D68;
    case 85u: goto L_001E4D84;
    case 86u: goto L_001E4DB8;
    case 87u: goto L_001E4DD4;
    case 88u: goto L_001E4DEC;
    case 89u: goto L_001E4E64;
    case 90u: goto L_001E4E98;
    case 91u: goto L_001E4EB0;
    case 92u: goto L_001E4FDC;
    case 93u: goto L_001E4FEC;
    case 94u: goto L_001E4FF0;
    case 95u: goto L_001E5008;
    case 96u: goto L_001E5014;
    case 97u: goto L_001E502C;
    case 98u: goto L_001E5030;
    case 99u: goto L_001E5070;
    case 100u: goto L_001E509C;
    case 101u: goto L_001E50B4;
    case 102u: goto L_001E50BC;
    case 103u: goto L_001E50C4;
    case 104u: goto L_001E50E4;
    case 105u: goto L_001E50F4;
    case 106u: goto L_001E511C;
    case 107u: goto L_001E5140;
    case 108u: goto L_001E5168;
    case 109u: goto L_001E5188;
    case 110u: goto L_001E5194;
    case 111u: goto L_001E51E0;
    case 112u: goto L_001E5208;
    case 113u: goto L_001E5220;
    case 114u: goto L_001E5250;
    case 115u: goto L_001E526C;
    case 116u: goto L_001E5290;
    case 117u: goto L_001E52A0;
    case 118u: goto L_001E52CC;
    case 119u: goto L_001E5300;
    case 120u: goto L_001E533C;
    case 121u: goto L_001E5380;
    case 122u: goto L_001E53B0;
    case 123u: goto L_001E53E0;
    case 124u: goto L_001E5408;
    case 125u: goto L_001E542C;
    case 126u: goto L_001E5458;
    case 127u: goto L_001E5474;
    case 128u: goto L_001E54A4;
    case 129u: goto L_001E54C0;
    case 130u: goto L_001E54CC;
    case 131u: goto L_001E54E8;
    case 132u: goto L_001E5514;
    case 133u: goto L_001E5534;
    case 134u: goto L_001E5564;
    case 135u: goto L_001E5594;
    case 136u: goto L_001E55F4;
    case 137u: goto L_001E561C;
    case 138u: goto L_001E5640;
    case 139u: goto L_001E566C;
    case 140u: goto L_001E5688;
    case 141u: goto L_001E56B8;
    case 142u: goto L_001E56D4;
    case 143u: goto L_001E56E0;
    case 144u: goto L_001E56FC;
    case 145u: goto L_001E5724;
    case 146u: goto L_001E573C;
    case 147u: goto L_001E5770;
    case 148u: goto L_001E578C;
    case 149u: goto L_001E57BC;
    case 150u: goto L_001E57D8;
    case 151u: goto L_001E57E4;
    case 152u: goto L_001E5800;
    case 153u: goto L_001E5830;
    case 154u: goto L_001E5860;
    case 155u: goto L_001E58B8;
    case 156u: goto L_001E58DC;
    case 157u: goto L_001E5900;
    case 158u: goto L_001E5910;
    case 159u: goto L_001E5920;
    case 160u: goto L_001E5934;
    case 161u: goto L_001E593C;
    case 162u: goto L_001E5948;
    case 163u: goto L_001E5960;
    case 164u: goto L_001E597C;
    case 165u: goto L_001E5984;
    case 166u: goto L_001E59CC;
    case 167u: goto L_001E59E8;
    case 168u: goto L_001E5A14;
    case 169u: goto L_001E5A6C;
    case 170u: goto L_001E5A80;
    case 171u: goto L_001E5AB0;
    case 172u: goto L_001E5AD0;
    case 173u: goto L_001E5AE0;
    case 174u: goto L_001E5B00;
    case 175u: goto L_001E5B10;
    case 176u: goto L_001E5B68;
    case 177u: goto L_001E5B74;
    case 178u: goto L_001E5B90;
    case 179u: goto L_001E5BB8;
    case 180u: goto L_001E5BC8;
    case 181u: goto L_001E5BDC;
    case 182u: goto L_001E5C00;
    case 183u: goto L_001E5C20;
    case 184u: goto L_001E5C98;
    case 185u: goto L_001E5CBC;
    case 186u: goto L_001E5CD4;
    case 187u: goto L_001E5D20;
    case 188u: goto L_001E5DA4;
    case 189u: goto L_001E5DB4;
    case 190u: goto L_001E5DB8;
    case 191u: goto L_001E5E84;
    case 192u: goto L_001E5EC4;
    case 193u: goto L_001E5ED0;
    case 194u: goto L_001E5F18;
    case 195u: goto L_001E5FC0;
    case 196u: goto L_001E6020;
    case 197u: goto L_001E60D4;
    case 198u: goto L_001E61A4;
    case 199u: goto L_001E61D0;
    case 200u: goto L_001E61F0;
    case 201u: goto L_001E6208;
    case 202u: goto L_001E6214;
    case 203u: goto L_001E6230;
    case 204u: goto L_001E6248;
    case 205u: goto L_001E6270;
    case 206u: goto L_001E6290;
    case 207u: goto L_001E62D4;
    case 208u: goto L_001E62E4;
    case 209u: goto L_001E62FC;
    case 210u: goto L_001E6320;
    case 211u: goto L_001E6330;
    case 212u: goto L_001E6340;
    case 213u: goto L_001E636C;
    case 214u: goto L_001E6394;
    case 215u: goto L_001E63B0;
    case 216u: goto L_001E6408;
    case 217u: goto L_001E642C;
    case 218u: goto L_001E643C;
    case 219u: goto L_001E645C;
    case 220u: goto L_001E648C;
    case 221u: goto L_001E64A4;
    case 222u: goto L_001E64C0;
    case 223u: goto L_001E64EC;
    case 224u: goto L_001E6528;
    case 225u: goto L_001E6560;
    case 226u: goto L_001E6590;
    case 227u: goto L_001E65E8;
    case 228u: goto L_001E6608;
    case 229u: goto L_001E661C;
    case 230u: goto L_001E6638;
    case 231u: goto L_001E6648;
    case 232u: goto L_001E6658;
    case 233u: goto L_001E6674;
    case 234u: goto L_001E66A0;
    case 235u: goto L_001E66AC;
    case 236u: goto L_001E66D0;
    case 237u: goto L_001E66F4;
    case 238u: goto L_001E6728;
    case 239u: goto L_001E6744;
    case 240u: goto L_001E6768;
    case 241u: goto L_001E67A8;
    case 242u: goto L_001E67D0;
    case 243u: goto L_001E67F0;
    case 244u: goto L_001E6838;
    case 245u: goto L_001E684C;
    case 246u: goto L_001E6860;
    case 247u: goto L_001E6874;
    case 248u: goto L_001E688C;
    case 249u: goto L_001E68A0;
    case 250u: goto L_001E68FC;
    case 251u: goto L_001E6944;
    case 252u: goto L_001E69A8;
    case 253u: goto L_001E69E0;
    case 254u: goto L_001E6A00;
    case 255u: goto L_001E6A24;
    case 256u: goto L_001E6A40;
    case 257u: goto L_001E6A64;
    case 258u: goto L_001E6A74;
    case 259u: goto L_001E6A7C;
    case 260u: goto L_001E6AF0;
    case 261u: goto L_001E6B08;
    case 262u: goto L_001E6B30;
    case 263u: goto L_001E6B54;
    case 264u: goto L_001E6B70;
    case 265u: goto L_001E6BB4;
    case 266u: goto L_001E6BC4;
    case 267u: goto L_001E6BDC;
    case 268u: goto L_001E6C00;
    case 269u: goto L_001E6C50;
    case 270u: goto L_001E6CF0;
    case 271u: goto L_001E6DC0;
    case 272u: goto L_001E6E00;
    case 273u: goto L_001E6E20;
    case 274u: goto L_001E6E48;
    case 275u: goto L_001E6E64;
    case 276u: goto L_001E6E7C;
    case 277u: goto L_001E6E8C;
    case 278u: goto L_001E6E9C;
    case 279u: goto L_001E6F10;
    case 280u: goto L_001E6F9C;
    case 281u: goto L_001E6FA8;
    case 282u: goto L_001E6FC0;
    case 283u: goto L_001E6FEC;
    case 284u: goto L_001E7020;
    case 285u: goto L_001E703C;
    case 286u: goto L_001E7068;
    case 287u: goto L_001E7084;
    case 288u: goto L_001E70B4;
    case 289u: goto L_001E70C4;
    case 290u: goto L_001E70F4;
    case 291u: goto L_001E7104;
    case 292u: goto L_001E7134;
    case 293u: goto L_001E7144;
    case 294u: goto L_001E7178;
    case 295u: goto L_001E7188;
    case 296u: goto L_001E71BC;
    case 297u: goto L_001E71CC;
    case 298u: goto L_001E7200;
    case 299u: goto L_001E7210;
    case 300u: goto L_001E7244;
    case 301u: goto L_001E7254;
    case 302u: goto L_001E7288;
    case 303u: goto L_001E72B0;
    case 304u: goto L_001E72E4;
    case 305u: goto L_001E7300;
    case 306u: goto L_001E731C;
    case 307u: goto L_001E7338;
    case 308u: goto L_001E734C;
    case 309u: goto L_001E7368;
    case 310u: goto L_001E737C;
    case 311u: goto L_001E7398;
    case 312u: goto L_001E73AC;
    case 313u: goto L_001E73C8;
    case 314u: goto L_001E73DC;
    case 315u: goto L_001E73F8;
    case 316u: goto L_001E740C;
    case 317u: goto L_001E7428;
    case 318u: goto L_001E743C;
    case 319u: goto L_001E7458;
    case 320u: goto L_001E746C;
    case 321u: goto L_001E7480;
    case 322u: goto L_001E7498;
    case 323u: goto L_001E74AC;
    case 324u: goto L_001E74BC;
    case 325u: goto L_001E74D0;
    case 326u: goto L_001E74FC;
    case 327u: goto L_001E7508;
    case 328u: goto L_001E7520;
    case 329u: goto L_001E7540;
    case 330u: goto L_001E7550;
    case 331u: goto L_001E7574;
    case 332u: goto L_001E7580;
    case 333u: goto L_001E7588;
    case 334u: goto L_001E75C0;
    case 335u: goto L_001E75E8;
    case 336u: goto L_001E7608;
    case 337u: goto L_001E7620;
    case 338u: goto L_001E7630;
    case 339u: goto L_001E7640;
    case 340u: goto L_001E7654;
    case 341u: goto L_001E765C;
    case 342u: goto L_001E7668;
    case 343u: goto L_001E7680;
    case 344u: goto L_001E76AC;
    case 345u: goto L_001E76B8;
    case 346u: goto L_001E76D4;
    case 347u: goto L_001E76E0;
    case 348u: goto L_001E76F8;
    case 349u: goto L_001E7714;
    case 350u: goto L_001E7728;
    case 351u: goto L_001E7734;
    case 352u: goto L_001E7748;
    case 353u: goto L_001E7754;
    case 354u: goto L_001E7768;
    case 355u: goto L_001E7784;
    case 356u: goto L_001E7790;
    case 357u: goto L_001E779C;
    case 358u: goto L_001E77F4;
    case 359u: goto L_001E7800;
    case 360u: goto L_001E781C;
    case 361u: goto L_001E783C;
    case 362u: goto L_001E784C;
    case 363u: goto L_001E7858;
    case 364u: goto L_001E7874;
    case 365u: goto L_001E7894;
    case 366u: goto L_001E78A4;
    case 367u: goto L_001E78B0;
    case 368u: goto L_001E78CC;
    case 369u: goto L_001E78EC;
    case 370u: goto L_001E78FC;
    case 371u: goto L_001E7908;
    case 372u: goto L_001E7924;
    case 373u: goto L_001E7960;
    case 374u: goto L_001E7984;
    case 375u: goto L_001E79F8;
    case 376u: goto L_001E7A20;
    case 377u: goto L_001E7A6C;
    case 378u: goto L_001E7A90;
    case 379u: goto L_001E7AB8;
    case 380u: goto L_001E7AE4;
    case 381u: goto L_001E7AEC;
    case 382u: goto L_001E7B70;
    case 383u: goto L_001E7B78;
    case 384u: goto L_001E7BAC;
    case 385u: goto L_001E7BB4;
    case 386u: goto L_001E7BE8;
    case 387u: goto L_001E7BF0;
    case 388u: goto L_001E7C24;
    case 389u: goto L_001E7C40;
    case 390u: goto L_001E7C80;
    case 391u: goto L_001E7CAC;
    case 392u: goto L_001E7CD8;
    case 393u: goto L_001E7D24;
    case 394u: goto L_001E7D38;
    case 395u: goto L_001E7D4C;
    case 396u: goto L_001E7D64;
    case 397u: goto L_001E7D70;
    case 398u: goto L_001E7D90;
    case 399u: goto L_001E7DB0;
    case 400u: goto L_001E7DC8;
    case 401u: goto L_001E7DDC;
    case 402u: goto L_001E7E00;
    case 403u: goto L_001E7E20;
    case 404u: goto L_001E7E30;
    case 405u: goto L_001E7E5C;
    case 406u: goto L_001E7E68;
    case 407u: goto L_001E7E80;
    case 408u: goto L_001E7EA0;
    case 409u: goto L_001E7EB0;
    case 410u: goto L_001E7EC0;
    case 411u: goto L_001E7ED0;
    case 412u: goto L_001E7EE4;
    case 413u: goto L_001E7EEC;
    case 414u: goto L_001E7EF8;
    case 415u: goto L_001E7F10;
    case 416u: goto L_001E7F30;
    case 417u: goto L_001E7F40;
    case 418u: goto L_001E7F5C;
    case 419u: goto L_001E7F90;
    case 420u: goto L_001E7FD4;
    case 421u: goto L_001E7FF4;
    default: bad_entry(c, 0x001E4000u); return;
    }
L_001E4000:
    st32((c.r[21].w[0]), 0u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_001E4008:
    c.r[2].d[0] = c.r[16].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 956u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E3E40u | kUnwind; return; } [[clang::musttail]] return unit_0030(c, 461u, depth); }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 956u)));
    c.budget -= 1;
L_001E4018:
    set32(c.r[2], 0u + 62u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], c.r[29].w[0] + 944u);  goto L_001E4154; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4034u); set32(c.r[5], c.r[5].w[0] + 22348u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001E4034u) [[unlikely]] return; }
L_001E4034:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E4058; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E4058; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4058u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E4058u) [[unlikely]] return; }
L_001E4058:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 22363u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0]), 0u);  goto L_001E40B8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4074u); set32(c.r[4], c.r[4].w[0] + 22363u);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001E4074u) [[unlikely]] return; }
L_001E4074:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[5].w[0] + 22363u);
    c.budget -= 4;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001E40A8; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_001E409C; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E40A8; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001E409C:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E40A8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001E40A8u) [[unlikely]] return; }
L_001E40A8:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E40B8; } }
    st32((c.r[19].w[0]), 0u);
    c.budget -= 1;
L_001E40B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[2], c.r[2].w[0] + 10264u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E40D0u); st32((c.r[29].w[0] + 208u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 79u, depth + 1u); else { c.pc = 0x001A8BF0u; return; } if (c.pc != 0x001E40D0u) [[unlikely]] return; }
L_001E40D0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], c.r[5].w[0] + 29856u);
    set32(c.r[6], 0u + 20u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E40E8u); set32(c.r[7], 0u + 32u);  if (depth < kMaxDepth) unit_0008(c, 144u, depth + 1u); else { c.pc = 0x00141C40u; return; } if (c.pc != 0x001E40E8u) [[unlikely]] return; }
L_001E40E8:
    set32(c.r[4], ld32((c.r[29].w[0] + 972u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E410C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E410C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E410Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E410Cu) [[unlikely]] return; }
L_001E410C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 880u);
    set32(c.r[2], c.r[2].w[0] + 10264u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4124u); st32((c.r[29].w[0] + 880u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 79u, depth + 1u); else { c.pc = 0x001A8BF0u; return; } if (c.pc != 0x001E4124u) [[unlikely]] return; }
L_001E4124:
    set32(c.r[4], c.r[29].w[0] + 912u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4130u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 113u, depth + 1u); else { c.pc = 0x001E5220u; return; } if (c.pc != 0x001E4130u) [[unlikely]] return; }
L_001E4130:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 944u);
    set32(c.r[2], c.r[2].w[0] + 10264u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4148u); st32((c.r[29].w[0] + 944u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 79u, depth + 1u); else { c.pc = 0x001A8BF0u; return; } if (c.pc != 0x001E4148u) [[unlikely]] return; }
L_001E4148:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001E5030; } }
    set32(c.r[4], c.r[29].w[0] + 944u);
    c.budget -= 1;
L_001E4154:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E415Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0022(c, 86u, depth + 1u); else { c.pc = 0x001A8D00u; return; } if (c.pc != 0x001E415Cu) [[unlikely]] return; }
L_001E415C:
    set32(c.r[2], ld32((c.r[29].w[0] + 972u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[21], ld32((c.r[28].w[0] - 31912u)));  goto L_001E4174; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[2].w[0] + 12u);  if (t) { goto L_001E4174; } }
    set32(c.r[21], ld32((c.r[28].w[0] - 31912u)));
    c.budget -= 1;
L_001E4174:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E417Cu);  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x001E417Cu) [[unlikely]] return; }
L_001E417C:
    set32(c.r[5], ld32((c.r[20].w[0] + 672u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[20].w[0] + 676u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4194u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0036(c, 322u, depth + 1u); else { c.pc = 0x001FBD20u; return; } if (c.pc != 0x001E4194u) [[unlikely]] return; }
L_001E4194:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E419Cu); c.r[23].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x001E419Cu) [[unlikely]] return; }
L_001E419C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E41A8u); c.r[5].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 332u, depth + 1u); else { c.pc = 0x001FBE70u; return; } if (c.pc != 0x001E41A8u) [[unlikely]] return; }
L_001E41A8:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[22].d[0] != 0ull) { c.r[21].d[0] = 0ull + 0ull;  goto L_001E431C; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E41C4u); set32(c.r[5], c.r[5].w[0] + 22428u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001E41C4u) [[unlikely]] return; }
L_001E41C4:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E41E8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E41E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E41E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E41E8u) [[unlikely]] return; }
L_001E41E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 22445u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0]), 0u);  goto L_001E4248; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4204u); set32(c.r[4], c.r[4].w[0] + 22445u);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001E4204u) [[unlikely]] return; }
L_001E4204:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[5].w[0] + 22445u);
    c.budget -= 4;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001E4238; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_001E422C; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E4238; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001E422C:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4238u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001E4238u) [[unlikely]] return; }
L_001E4238:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E4248; } }
    st32((c.r[19].w[0]), 0u);
    c.budget -= 1;
L_001E4248:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[2], c.r[2].w[0] + 10264u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4260u); st32((c.r[29].w[0] + 208u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 79u, depth + 1u); else { c.pc = 0x001A8BF0u; return; } if (c.pc != 0x001E4260u) [[unlikely]] return; }
L_001E4260:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], c.r[5].w[0] + 29856u);
    set32(c.r[6], 0u + 20u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4278u); set32(c.r[7], 0u + 32u);  if (depth < kMaxDepth) unit_0008(c, 144u, depth + 1u); else { c.pc = 0x00141C40u; return; } if (c.pc != 0x001E4278u) [[unlikely]] return; }
L_001E4278:
    set32(c.r[4], ld32((c.r[29].w[0] + 972u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E429C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E429C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E429Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E429Cu) [[unlikely]] return; }
L_001E429C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 880u);
    set32(c.r[2], c.r[2].w[0] + 10264u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E42B4u); st32((c.r[29].w[0] + 880u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 79u, depth + 1u); else { c.pc = 0x001A8BF0u; return; } if (c.pc != 0x001E42B4u) [[unlikely]] return; }
L_001E42B4:
    set32(c.r[4], c.r[29].w[0] + 912u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E42C0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 113u, depth + 1u); else { c.pc = 0x001E5220u; return; } if (c.pc != 0x001E42C0u) [[unlikely]] return; }
L_001E42C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 944u);
    set32(c.r[2], c.r[2].w[0] + 10264u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E42D8u); st32((c.r[29].w[0] + 944u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 79u, depth + 1u); else { c.pc = 0x001A8BF0u; return; } if (c.pc != 0x001E42D8u) [[unlikely]] return; }
L_001E42D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001E5030; } }
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E431C; } }
L_001E42EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E42F4u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 315u, depth + 1u); else { c.pc = 0x001FE7D0u; return; } if (c.pc != 0x001E42F4u) [[unlikely]] return; }
L_001E42F4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    set32(c.r[2], c.r[21].w[0] << 2);
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4318u); set32(c.r[7], c.r[2].w[0] + 240u);  if (depth < kMaxDepth) unit_0037(c, 215u, depth + 1u); else { c.pc = 0x001FD9E0u; return; } if (c.pc != 0x001E4318u) [[unlikely]] return; }
L_001E4318:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_001E431C:
    c.r[2].d[0] = c.r[21].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E42ECu | kUnwind; return; } goto L_001E42EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4330u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 315u, depth + 1u); else { c.pc = 0x001FE7D0u; return; } if (c.pc != 0x001E4330u) [[unlikely]] return; }
L_001E4330:
    st32((c.r[2].w[0] + 1632u), c.r[16].w[0]);
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], ld32((c.r[20].w[0] + 936u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 10264u);
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 680u), c.r[23].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 936u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 684u), c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 936u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 688u), c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 936u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 692u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 936u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 936u), c.r[3].w[0]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E439Cu); st32((c.r[29].w[0] + 208u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 79u, depth + 1u); else { c.pc = 0x001A8BF0u; return; } if (c.pc != 0x001E439Cu) [[unlikely]] return; }
L_001E439C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], c.r[5].w[0] + 29856u);
    set32(c.r[6], 0u + 20u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E43B4u); set32(c.r[7], 0u + 32u);  if (depth < kMaxDepth) unit_0008(c, 144u, depth + 1u); else { c.pc = 0x00141C40u; return; } if (c.pc != 0x001E43B4u) [[unlikely]] return; }
L_001E43B4:
    set32(c.r[4], ld32((c.r[29].w[0] + 972u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E43D8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E43D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E43D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E43D8u) [[unlikely]] return; }
L_001E43D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 880u);
    set32(c.r[2], c.r[2].w[0] + 10264u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E43F0u); st32((c.r[29].w[0] + 880u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 79u, depth + 1u); else { c.pc = 0x001A8BF0u; return; } if (c.pc != 0x001E43F0u) [[unlikely]] return; }
L_001E43F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E4FEC; } }
L_001E43F8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 944u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4408u); set32(c.r[5], c.r[5].w[0] + 22466u);  if (depth < kMaxDepth) unit_0030(c, 197u, depth + 1u); else { c.pc = 0x001E1870u; return; } if (c.pc != 0x001E4408u) [[unlikely]] return; }
L_001E4408:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E4564; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 936u)));
    c.r[2].d[0] = c.r[3].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[3].w[0] << 4);  goto L_001E44FC; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4430u); set32(c.r[5], c.r[5].w[0] + 22388u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001E4430u) [[unlikely]] return; }
L_001E4430:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E4454; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E4454; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4454u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E4454u) [[unlikely]] return; }
L_001E4454:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 22407u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0]), 0u);  goto L_001E44B4; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4470u); set32(c.r[4], c.r[4].w[0] + 22407u);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001E4470u) [[unlikely]] return; }
L_001E4470:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[5].w[0] + 22407u);
    c.budget -= 4;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001E44A4; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_001E4498; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E44A4; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001E4498:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E44A4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001E44A4u) [[unlikely]] return; }
L_001E44A4:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E44B4; } }
    st32((c.r[19].w[0]), 0u);
    c.budget -= 1;
L_001E44B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 880u);
    set32(c.r[2], c.r[2].w[0] + 10264u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E44CCu); st32((c.r[29].w[0] + 880u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 79u, depth + 1u); else { c.pc = 0x001A8BF0u; return; } if (c.pc != 0x001E44CCu) [[unlikely]] return; }
L_001E44CC:
    set32(c.r[4], c.r[29].w[0] + 912u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E44D8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 113u, depth + 1u); else { c.pc = 0x001E5220u; return; } if (c.pc != 0x001E44D8u) [[unlikely]] return; }
L_001E44D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 944u);
    set32(c.r[2], c.r[2].w[0] + 10264u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E44F0u); st32((c.r[29].w[0] + 944u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 79u, depth + 1u); else { c.pc = 0x001A8BF0u; return; } if (c.pc != 0x001E44F0u) [[unlikely]] return; }
L_001E44F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001E5030; } }
    set32(c.r[2], c.r[3].w[0] << 4);
    c.budget -= 1;
L_001E44FC:
    set32(c.r[6], 0u + 4u);
    set32(c.r[3], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 880u);
    st32((c.r[3].w[0] + 680u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], ld32((c.r[20].w[0] + 936u)));
    set32(c.r[2], c.r[2].w[0] + 10264u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 684u), c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 936u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 688u), c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 936u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 692u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 936u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 936u), c.r[3].w[0]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E455Cu); st32((c.r[29].w[0] + 880u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 79u, depth + 1u); else { c.pc = 0x001A8BF0u; return; } if (c.pc != 0x001E455Cu) [[unlikely]] return; }
L_001E455C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E4FEC; } }
L_001E4564:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 944u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4574u); set32(c.r[5], c.r[5].w[0] + 22470u);  if (depth < kMaxDepth) unit_0030(c, 197u, depth + 1u); else { c.pc = 0x001E1870u; return; } if (c.pc != 0x001E4574u) [[unlikely]] return; }
L_001E4574:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E45FC; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 956u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[6].d[0] = 0ull + 0ull;  goto L_001E45D0; }
    set32(c.r[2], ld32((c.r[20].w[0] + 960u)));
    set32(c.r[3], c.r[2].w[0] + 2u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001E45AC; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 964u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]); c.r[2].d[0] = c.lo.d[0];  goto L_001E45BC; }
L_001E45AC:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E45D0; } }
    mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_001E45BC:
    set32(c.r[3], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[6], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 5;
L_001E45D0:
    set32(c.r[3], ld32((c.r[6].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 10264u);
    set32(c.r[4], c.r[29].w[0] + 880u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    st32((c.r[6].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E45F4u); st32((c.r[29].w[0] + 880u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 79u, depth + 1u); else { c.pc = 0x001A8BF0u; return; } if (c.pc != 0x001E45F4u) [[unlikely]] return; }
L_001E45F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E4FEC; } }
L_001E45FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 880u);
    set32(c.r[2], c.r[2].w[0] + 10264u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4614u); st32((c.r[29].w[0] + 880u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 79u, depth + 1u); else { c.pc = 0x001A8BF0u; return; } if (c.pc != 0x001E4614u) [[unlikely]] return; }
L_001E4614:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 956u)));
    c.budget -= 1;
L_001E4618:
    set32(c.r[2], 0u + 64u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E49E4; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 956u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_001E4678; }
    set32(c.r[2], ld32((c.r[20].w[0] + 960u)));
    set32(c.r[3], c.r[2].w[0] + 2u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001E4654; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 964u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]); c.r[2].d[0] = c.lo.d[0];  goto L_001E4664; }
L_001E4654:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E4678; } }
    mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_001E4664:
    set32(c.r[3], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[16], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 5;
L_001E4678:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 22474u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 944u);  goto L_001E46F0; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4694u); set32(c.r[4], c.r[4].w[0] + 22474u);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001E4694u) [[unlikely]] return; }
L_001E4694:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[6], c.r[6].w[0] + 22474u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[5], ld32((c.r[16].w[0])));  if (t) { goto L_001E46E8; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_001E46B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[5].w[0]);  if (t) { goto L_001E46EC; } }
L_001E46B4:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001E46DC; }
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E46D0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001E46D0u) [[unlikely]] return; }
L_001E46D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E46E8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001E46DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E46E4u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 65u, depth + 1u); else { c.pc = 0x001A8960u; return; } if (c.pc != 0x001E46E4u) [[unlikely]] return; }
L_001E46E4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001E46E8:
    st32((c.r[16].w[0]), c.r[5].w[0]);
    c.budget -= 1;
L_001E46EC:
    set32(c.r[4], c.r[29].w[0] + 944u);
    c.budget -= 1;
L_001E46F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E46F8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0022(c, 86u, depth + 1u); else { c.pc = 0x001A8D00u; return; } if (c.pc != 0x001E46F8u) [[unlikely]] return; }
L_001E46F8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 956u)));
    set32(c.r[2], 0u + 64u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[20].w[0] + 956u)));  goto L_001E4748; }
    set32(c.r[2], 0u + 47u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E4744; } }
    set32(c.r[2], 0u + 110u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E4744; } }
    set32(c.r[2], 0u + 78u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E4744; } }
    set32(c.r[2], 0u + 120u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E4744; } }
    set32(c.r[2], 0u + 88u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 960u)));  goto L_001E48F0; }
L_001E4744:
    set32(c.r[4], ld32((c.r[20].w[0] + 956u)));
    c.budget -= 1;
L_001E4748:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[21], c.r[29].w[0] + 956u);  if (t) { goto L_001E4774; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 960u)));
    set32(c.r[3], c.r[2].w[0] + 2u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_001E4798; }
    set32(c.r[2], ld32((c.r[20].w[0] + 964u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]); c.r[2].d[0] = c.lo.d[0];  goto L_001E4784; }
L_001E4774:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E4798; } }
    mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_001E4784:
    set32(c.r[3], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[16], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 5;
L_001E4798:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 944u);  goto L_001E480C; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E4808; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E47B4u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001E47B4u) [[unlikely]] return; }
L_001E47B4:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; set32(c.r[5], ld32((c.r[16].w[0])));  if (t) { goto L_001E4804; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_001E47CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[5].w[0]);  if (t) { goto L_001E4808; } }
L_001E47CC:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { c.r[6].d[0] = c.r[21].d[0] + 0ull;  goto L_001E47F4; }
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E47E8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001E47E8u) [[unlikely]] return; }
L_001E47E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E4804; } }
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_001E47F4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4800u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 65u, depth + 1u); else { c.pc = 0x001A8960u; return; } if (c.pc != 0x001E4800u) [[unlikely]] return; }
L_001E4800:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001E4804:
    st32((c.r[16].w[0]), c.r[5].w[0]);
    c.budget -= 1;
L_001E4808:
    set32(c.r[4], c.r[29].w[0] + 944u);
    c.budget -= 1;
L_001E480C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4814u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0022(c, 86u, depth + 1u); else { c.pc = 0x001A8D00u; return; } if (c.pc != 0x001E4814u) [[unlikely]] return; }
L_001E4814:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E4FEC; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 956u)));
    c.budget -= 1;
L_001E4820:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[21], c.r[29].w[0] + 956u);  if (t) { goto L_001E484C; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 960u)));
    set32(c.r[3], c.r[2].w[0] + 2u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_001E4870; }
    set32(c.r[2], ld32((c.r[20].w[0] + 964u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]); c.r[2].d[0] = c.lo.d[0];  goto L_001E485C; }
L_001E484C:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E4870; } }
    mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_001E485C:
    set32(c.r[3], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[16], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 5;
L_001E4870:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 944u);  goto L_001E48E4; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E48E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E488Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001E488Cu) [[unlikely]] return; }
L_001E488C:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; set32(c.r[5], ld32((c.r[16].w[0])));  if (t) { goto L_001E48DC; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_001E48A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[5].w[0]);  if (t) { goto L_001E48E0; } }
L_001E48A4:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { c.r[6].d[0] = c.r[21].d[0] + 0ull;  goto L_001E48CC; }
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E48C0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001E48C0u) [[unlikely]] return; }
L_001E48C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E48DC; } }
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_001E48CC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E48D8u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 65u, depth + 1u); else { c.pc = 0x001A8960u; return; } if (c.pc != 0x001E48D8u) [[unlikely]] return; }
L_001E48D8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001E48DC:
    st32((c.r[16].w[0]), c.r[5].w[0]);
    c.budget -= 1;
L_001E48E0:
    set32(c.r[4], c.r[29].w[0] + 944u);
    c.budget -= 1;
L_001E48E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E48ECu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0022(c, 86u, depth + 1u); else { c.pc = 0x001A8D00u; return; } if (c.pc != 0x001E48ECu) [[unlikely]] return; }
L_001E48EC:
    set32(c.r[2], ld32((c.r[29].w[0] + 960u)));
    c.budget -= 1;
L_001E48F0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 956u)));  goto L_001E490C; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 956u)));
    set32(c.r[2], 0u + 58u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[20].w[0] + 956u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E4820u | kUnwind; return; } goto L_001E4820; }
    set32(c.r[4], ld32((c.r[20].w[0] + 956u)));
    c.budget -= 1;
L_001E490C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_001E495C; }
    set32(c.r[2], ld32((c.r[20].w[0] + 960u)));
    set32(c.r[3], c.r[2].w[0] + 2u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001E4938; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 964u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]); c.r[2].d[0] = c.lo.d[0];  goto L_001E4948; }
L_001E4938:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E495C; } }
    mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_001E4948:
    set32(c.r[3], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[16], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 5;
L_001E495C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 22476u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 944u);  goto L_001E49D4; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4978u); set32(c.r[4], c.r[4].w[0] + 22476u);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001E4978u) [[unlikely]] return; }
L_001E4978:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[6], c.r[6].w[0] + 22476u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[5], ld32((c.r[16].w[0])));  if (t) { goto L_001E49CC; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_001E4998; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[5].w[0]);  if (t) { goto L_001E49D0; } }
L_001E4998:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001E49C0; }
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E49B4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001E49B4u) [[unlikely]] return; }
L_001E49B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E49CC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001E49C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E49C8u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 65u, depth + 1u); else { c.pc = 0x001A8960u; return; } if (c.pc != 0x001E49C8u) [[unlikely]] return; }
L_001E49C8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001E49CC:
    st32((c.r[16].w[0]), c.r[5].w[0]);
    c.budget -= 1;
L_001E49D0:
    set32(c.r[4], c.r[29].w[0] + 944u);
    c.budget -= 1;
L_001E49D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E49DCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0022(c, 86u, depth + 1u); else { c.pc = 0x001A8D00u; return; } if (c.pc != 0x001E49DCu) [[unlikely]] return; }
L_001E49DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E4FEC; } }
L_001E49E4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 944u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E49F4u); set32(c.r[5], c.r[5].w[0] + 22478u);  if (depth < kMaxDepth) unit_0030(c, 197u, depth + 1u); else { c.pc = 0x001E1870u; return; } if (c.pc != 0x001E49F4u) [[unlikely]] return; }
L_001E49F4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 960u)));  goto L_001E4C4C; }
    set32(c.r[3], ld32((c.r[20].w[0] + 964u)));
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 956u)));  goto L_001E4AC4; }
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E4A34; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E4A34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4A34u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E4A34u) [[unlikely]] return; }
L_001E4A34:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 22323u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0]), 0u);  goto L_001E4A94; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4A50u); set32(c.r[4], c.r[4].w[0] + 22323u);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001E4A50u) [[unlikely]] return; }
L_001E4A50:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[5].w[0] + 22323u);
    c.budget -= 4;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001E4A84; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_001E4A78; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E4A84; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001E4A78:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4A84u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001E4A84u) [[unlikely]] return; }
L_001E4A84:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 912u);  if (t) { goto L_001E4A98; } }
    st32((c.r[19].w[0]), 0u);
    c.budget -= 1;
L_001E4A94:
    set32(c.r[4], c.r[29].w[0] + 912u);
    c.budget -= 1;
L_001E4A98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4AA0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 113u, depth + 1u); else { c.pc = 0x001E5220u; return; } if (c.pc != 0x001E4AA0u) [[unlikely]] return; }
L_001E4AA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 944u);
    set32(c.r[2], c.r[2].w[0] + 10264u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4AB8u); st32((c.r[29].w[0] + 944u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 79u, depth + 1u); else { c.pc = 0x001A8BF0u; return; } if (c.pc != 0x001E4AB8u) [[unlikely]] return; }
L_001E4AB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001E5030; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 956u)));
    c.budget -= 1;
L_001E4AC4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_001E4B10; }
    set32(c.r[2], ld32((c.r[20].w[0] + 960u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001E4AEC; } }
    c.r[1].d[0] = c.r[3].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { mmi::mult(c, 0, c.r[17].w[0], c.r[2].w[0]); c.r[2].d[0] = c.lo.d[0];  goto L_001E4AFC; }
L_001E4AEC:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E4B10; } }
    mmi::mult(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_001E4AFC:
    set32(c.r[3], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[16], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 5;
L_001E4B10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 22478u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 956u)));  goto L_001E4B88; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4B2Cu); set32(c.r[4], c.r[4].w[0] + 22478u);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001E4B2Cu) [[unlikely]] return; }
L_001E4B2C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[6], c.r[6].w[0] + 22478u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[5], ld32((c.r[16].w[0])));  if (t) { goto L_001E4B80; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_001E4B4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[5].w[0]);  if (t) { goto L_001E4B84; } }
L_001E4B4C:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001E4B74; }
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4B68u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001E4B68u) [[unlikely]] return; }
L_001E4B68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E4B80; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001E4B74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4B7Cu); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 65u, depth + 1u); else { c.pc = 0x001A8960u; return; } if (c.pc != 0x001E4B7Cu) [[unlikely]] return; }
L_001E4B7C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001E4B80:
    st32((c.r[16].w[0]), c.r[5].w[0]);
    c.budget -= 1;
L_001E4B84:
    set32(c.r[4], ld32((c.r[20].w[0] + 956u)));
    c.budget -= 1;
L_001E4B88:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001E4BD8; }
    set32(c.r[2], ld32((c.r[20].w[0] + 960u)));
    set32(c.r[3], c.r[2].w[0] + 2u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001E4BB4; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 964u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]); c.r[2].d[0] = c.lo.d[0];  goto L_001E4BC4; }
L_001E4BB4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E4BD8; } }
    mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_001E4BC4:
    set32(c.r[3], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 5;
L_001E4BD8:
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[4], ld32((c.r[20].w[0] + 956u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_001E4C30; }
    set32(c.r[2], ld32((c.r[20].w[0] + 960u)));
    set32(c.r[3], c.r[2].w[0] + 2u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001E4C0C; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 964u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]); c.r[2].d[0] = c.lo.d[0];  goto L_001E4C1C; }
L_001E4C0C:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E4C30; } }
    mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_001E4C1C:
    set32(c.r[3], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 5;
L_001E4C30:
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E4FEC; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 960u)));
    c.budget -= 1;
L_001E4C4C:
    c.r[1].d[0] = c.r[2].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001E4C74; } }
    c.budget -= 2;
    if (c.r[18].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[20].w[0] + 4u)));  goto L_001E4D38; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4C6Cu); set32(c.r[5], c.r[29].w[0] + 956u);  if (depth < kMaxDepth) unit_0031(c, 99u, depth + 1u); else { c.pc = 0x001E5070u; return; } if (c.pc != 0x001E4C6Cu) [[unlikely]] return; }
L_001E4C6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E4D34; } }
L_001E4C74:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4C84u); set32(c.r[5], c.r[5].w[0] + 22306u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001E4C84u) [[unlikely]] return; }
L_001E4C84:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E4CA8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E4CA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4CA8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E4CA8u) [[unlikely]] return; }
L_001E4CA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 22323u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0]), 0u);  goto L_001E4D08; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4CC4u); set32(c.r[4], c.r[4].w[0] + 22323u);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001E4CC4u) [[unlikely]] return; }
L_001E4CC4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[5].w[0] + 22323u);
    c.budget -= 4;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001E4CF8; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_001E4CEC; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E4CF8; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001E4CEC:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4CF8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001E4CF8u) [[unlikely]] return; }
L_001E4CF8:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 912u);  if (t) { goto L_001E4D0C; } }
    st32((c.r[19].w[0]), 0u);
    c.budget -= 1;
L_001E4D08:
    set32(c.r[4], c.r[29].w[0] + 912u);
    c.budget -= 1;
L_001E4D0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4D14u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 113u, depth + 1u); else { c.pc = 0x001E5220u; return; } if (c.pc != 0x001E4D14u) [[unlikely]] return; }
L_001E4D14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 944u);
    set32(c.r[2], c.r[2].w[0] + 10264u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4D2Cu); st32((c.r[29].w[0] + 944u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 79u, depth + 1u); else { c.pc = 0x001A8BF0u; return; } if (c.pc != 0x001E4D2Cu) [[unlikely]] return; }
L_001E4D2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001E5030; } }
L_001E4D34:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 1;
L_001E4D38:
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 956u)));  goto L_001E4DF8; }
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E4D68; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E4D68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4D68u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E4D68u) [[unlikely]] return; }
L_001E4D68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 22481u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0]), 0u);  goto L_001E4DC8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4D84u); set32(c.r[4], c.r[4].w[0] + 22481u);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001E4D84u) [[unlikely]] return; }
L_001E4D84:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[5].w[0] + 22481u);
    c.budget -= 4;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001E4DB8; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_001E4DAC; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E4DB8; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001E4DAC:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4DB8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001E4DB8u) [[unlikely]] return; }
L_001E4DB8:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 912u);  if (t) { goto L_001E4DCC; } }
    st32((c.r[19].w[0]), 0u);
    c.budget -= 1;
L_001E4DC8:
    set32(c.r[4], c.r[29].w[0] + 912u);
    c.budget -= 1;
L_001E4DCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4DD4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 113u, depth + 1u); else { c.pc = 0x001E5220u; return; } if (c.pc != 0x001E4DD4u) [[unlikely]] return; }
L_001E4DD4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 944u);
    set32(c.r[2], c.r[2].w[0] + 10264u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4DECu); st32((c.r[29].w[0] + 944u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 79u, depth + 1u); else { c.pc = 0x001A8BF0u; return; } if (c.pc != 0x001E4DECu) [[unlikely]] return; }
L_001E4DEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001E5030; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 956u)));
    c.budget -= 1;
L_001E4DF8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[21], c.r[29].w[0] + 956u);  if (t) { goto L_001E4E24; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 960u)));
    set32(c.r[3], c.r[2].w[0] + 2u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_001E4E48; }
    set32(c.r[2], ld32((c.r[20].w[0] + 964u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]); c.r[2].d[0] = c.lo.d[0];  goto L_001E4E34; }
L_001E4E24:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E4E48; } }
    mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_001E4E34:
    set32(c.r[3], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[16], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 5;
L_001E4E48:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_001E4EB8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E4EB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4E64u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001E4E64u) [[unlikely]] return; }
L_001E4E64:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; set32(c.r[5], ld32((c.r[16].w[0])));  if (t) { goto L_001E4EB4; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_001E4E7C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[5].w[0]);  if (t) { goto L_001E4EB8; } }
L_001E4E7C:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { c.r[6].d[0] = c.r[21].d[0] + 0ull;  goto L_001E4EA4; }
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4E98u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001E4E98u) [[unlikely]] return; }
L_001E4E98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E4EB4; } }
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_001E4EA4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4EB0u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 65u, depth + 1u); else { c.pc = 0x001A8960u; return; } if (c.pc != 0x001E4EB0u) [[unlikely]] return; }
L_001E4EB0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001E4EB4:
    st32((c.r[16].w[0]), c.r[5].w[0]);
    c.budget -= 1;
L_001E4EB8:
    c.budget -= 2;
    if (c.r[30].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 956u)));  goto L_001E4F80; }
    set32(c.r[4], ld32((c.r[20].w[0] + 956u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001E4F14; }
    set32(c.r[2], ld32((c.r[20].w[0] + 960u)));
    set32(c.r[3], c.r[2].w[0] + 2u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001E4EF0; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 964u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]); c.r[2].d[0] = c.lo.d[0];  goto L_001E4F00; }
L_001E4EF0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E4F14; } }
    mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_001E4F00:
    set32(c.r[3], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 5;
L_001E4F14:
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[4], ld32((c.r[20].w[0] + 956u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_001E4F6C; }
    set32(c.r[2], ld32((c.r[20].w[0] + 960u)));
    set32(c.r[3], c.r[2].w[0] + 2u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001E4F48; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 964u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]); c.r[2].d[0] = c.lo.d[0];  goto L_001E4F58; }
L_001E4F48:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E4F6C; } }
    mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_001E4F58:
    set32(c.r[3], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 5;
L_001E4F6C:
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E4FDC; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 956u)));
    c.budget -= 1;
L_001E4F80:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_001E4FD0; }
    set32(c.r[2], ld32((c.r[20].w[0] + 960u)));
    set32(c.r[3], c.r[2].w[0] + 2u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001E4FAC; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 964u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]); c.r[2].d[0] = c.lo.d[0];  goto L_001E4FBC; }
L_001E4FAC:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E4FD0; } }
    mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_001E4FBC:
    set32(c.r[3], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 5;
L_001E4FD0:
    set32(c.r[4], c.r[29].w[0] + 912u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4FDCu);  if (depth < kMaxDepth) unit_0031(c, 117u, depth + 1u); else { c.pc = 0x001E52A0u; return; } if (c.pc != 0x001E4FDCu) [[unlikely]] return; }
L_001E4FDC:
    set32(c.r[4], c.r[29].w[0] + 944u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4FECu); set32(c.r[18], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_0022(c, 86u, depth + 1u); else { c.pc = 0x001A8D00u; return; } if (c.pc != 0x001E4FECu) [[unlikely]] return; }
L_001E4FEC:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 1;
L_001E4FF0:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 960u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E345Cu | kUnwind; return; } [[clang::musttail]] return unit_0030(c, 397u, depth); }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5008u); set32(c.r[4], c.r[29].w[0] + 912u);  if (depth < kMaxDepth) unit_0031(c, 119u, depth + 1u); else { c.pc = 0x001E5300u; return; } if (c.pc != 0x001E5008u) [[unlikely]] return; }
L_001E5008:
    set32(c.r[4], c.r[29].w[0] + 912u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5014u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 113u, depth + 1u); else { c.pc = 0x001E5220u; return; } if (c.pc != 0x001E5014u) [[unlikely]] return; }
L_001E5014:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 944u);
    set32(c.r[2], c.r[2].w[0] + 10264u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E502Cu); st32((c.r[29].w[0] + 944u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 79u, depth + 1u); else { c.pc = 0x001A8BF0u; return; } if (c.pc != 0x001E502Cu) [[unlikely]] return; }
L_001E502C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001E5030:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 976u);  c.pc = t; return; }
L_001E5070:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001E5094; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001E5120; } }
L_001E5094:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E509Cu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0022(c, 78u, depth + 1u); else { c.pc = 0x001A8BD0u; return; } if (c.pc != 0x001E509Cu) [[unlikely]] return; }
L_001E509C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[5], c.r[17].w[0] + 952u);
    set32(c.r[2], c.r[2].w[0] + 10264u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E50B4u); st32((c.r[29].w[0] + 48u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 81u, depth + 1u); else { c.pc = 0x001A8C40u; return; } if (c.pc != 0x001E50B4u) [[unlikely]] return; }
L_001E50B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 64u)));  if (t) { goto L_001E50F8; } }
L_001E50BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E50C4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00147660u; return; } if (c.pc != 0x001E50C4u) [[unlikely]] return; }
L_001E50C4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 48u);  goto L_001E50EC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] + 10264u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E50E4u); st32((c.r[29].w[0] + 48u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 79u, depth + 1u); else { c.pc = 0x001A8BF0u; return; } if (c.pc != 0x001E50E4u) [[unlikely]] return; }
L_001E50E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001E5120; } }
L_001E50EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E50F4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0022(c, 86u, depth + 1u); else { c.pc = 0x001A8D00u; return; } if (c.pc != 0x001E50F4u) [[unlikely]] return; }
L_001E50F4:
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    c.budget -= 1;
L_001E50F8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], c.r[29].w[0] + 60u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E50BCu | kUnwind; return; } goto L_001E50BC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] + 10264u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E511Cu); st32((c.r[29].w[0] + 48u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 79u, depth + 1u); else { c.pc = 0x001A8BF0u; return; } if (c.pc != 0x001E511Cu) [[unlikely]] return; }
L_001E511C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E5120:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001E5140:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001E51B0; } }
L_001E5168:
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[3].w[0] + 680u);
    set32(c.r[3], ld32((c.r[3].w[0] + 692u)));
    c.budget -= 6;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_001E51B0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5188u);  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x001E5188u) [[unlikely]] return; }
L_001E5188:
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5194u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 332u, depth + 1u); else { c.pc = 0x001FBE70u; return; } if (c.pc != 0x001E5194u) [[unlikely]] return; }
L_001E5194:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 3u);  goto L_001E51A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_001E51AC; } }
L_001E51A4:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[16].w[0]), 0u);
    c.budget -= 2;
L_001E51AC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001E51B0:
    set32(c.r[2], ld32((c.r[19].w[0] + 940u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[17].w[0] << 4);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E5168u | kUnwind; return; } goto L_001E5168; }
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001E51E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5208u); set32(c.r[4], c.r[5].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x001E5208u) [[unlikely]] return; }
L_001E5208:
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E5220:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001E526C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_001E5258; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5250u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x001E5250u) [[unlikely]] return; }
L_001E5250:
    st32((c.r[17].w[0] + 16u), 0u);
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 2;
L_001E5258:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001E5270; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E526Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001E526Cu) [[unlikely]] return; }
L_001E526C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001E5270:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E5290:
    st32((c.r[4].w[0]), c.f[12]);
    st32((c.r[4].w[0] + 4u), c.f[13]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), 0u);  c.pc = t; return; }
L_001E52A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 16u)));  goto L_001E52D4; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E52CCu); set32(c.r[4], c.r[4].w[0] + 22500u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001E52CCu) [[unlikely]] return; }
L_001E52CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001E52F0; } }
L_001E52D4:
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 7;
L_001E52F0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001E5300:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_001E5378; } }
    c.f[0] = c.r[3].w[0];
    c.r[6].d[0] = 0ull + 0ull;
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[3] = ld32((c.r[4].w[0] + 4u));
    c.f[2] = ld32((c.r[4].w[0]));
    c.f[0] = 0u;
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[3] = fp::ee::div(c.fcr31, c.f[2], c.f[1]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E5368; } }
L_001E533C:
    c.f[1] = c.r[6].w[0];
    set32(c.r[5], c.r[6].w[0] << 2);
    c.f[2] = fp::cvt_s_w(c.f[1]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.f[1] = ld32((c.r[4].w[0]));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[2]);
    st32((c.r[3].w[0] + 4u), c.f[1]);
    c.budget -= 11;
L_001E5368:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E533Cu | kUnwind; return; } goto L_001E533C; } }
L_001E5378:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E5380:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E53B0u); st32((c.r[29].w[0] + 156u), 0u);  if (depth < kMaxDepth) unit_0022(c, 78u, depth + 1u); else { c.pc = 0x001A8BD0u; return; } if (c.pc != 0x001E53B0u) [[unlikely]] return; }
L_001E53B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 10264u);
    st32((c.r[29].w[0] + 128u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001E53D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[2].w[0] + 12u);  if (t) { goto L_001E53D4; } }
L_001E53D0:
    set32(c.r[4], ld32((c.r[28].w[0] - 31912u)));
    c.budget -= 1;
L_001E53D4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E53E0u); set32(c.r[5], c.r[5].w[0] + 21919u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00147660u; return; } if (c.pc != 0x001E53E0u) [[unlikely]] return; }
L_001E53E0:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 156u)));  goto L_001E5438; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[2], c.r[2].w[0] + 10264u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5408u); st32((c.r[29].w[0] + 128u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 79u, depth + 1u); else { c.pc = 0x001A8BF0u; return; } if (c.pc != 0x001E5408u) [[unlikely]] return; }
L_001E5408:
    set32(c.r[4], ld32((c.r[29].w[0] + 156u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_001E58E0; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001E58DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E542Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E542Cu) [[unlikely]] return; }
L_001E542C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E58DC; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 156u)));
    c.budget -= 1;
L_001E5438:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], ld32((c.r[28].w[0] - 31840u)));  if (t) { goto L_001E5458; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E5458; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5458u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E5458u) [[unlikely]] return; }
L_001E5458:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { st32((c.r[29].w[0] + 156u), 0u);  goto L_001E54B4; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E54B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5474u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001E5474u) [[unlikely]] return; }
L_001E5474:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001E54A4; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[5].d[0] = c.r[19].d[0] + 0ull;  goto L_001E5494; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E54A4; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001E5494:
    set32(c.r[4], c.r[29].w[0] + 156u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E54A4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001E54A4u) [[unlikely]] return; }
L_001E54A4:
    st32((c.r[29].w[0] + 156u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 128u);  if (t) { goto L_001E54B8; } }
L_001E54B0:
    st32((c.r[29].w[0] + 156u), 0u);
    c.budget -= 1;
L_001E54B4:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 1;
L_001E54B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E54C0u); set32(c.r[5], c.r[29].w[0] + 156u);  if (depth < kMaxDepth) unit_0022(c, 81u, depth + 1u); else { c.pc = 0x001A8C40u; return; } if (c.pc != 0x001E54C0u) [[unlikely]] return; }
L_001E54C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 144u)));  if (t) { goto L_001E5568; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_001E54CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[29].w[0] + 140u);  if (t) { goto L_001E54DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[2].w[0] + 12u);  if (t) { goto L_001E54E0; } }
L_001E54DC:
    set32(c.r[4], ld32((c.r[28].w[0] - 31912u)));
    c.budget -= 1;
L_001E54E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E54E8u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00147660u; return; } if (c.pc != 0x001E54E8u) [[unlikely]] return; }
L_001E54E8:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 128u);  goto L_001E550C; }
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 2048ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_001E5574; } }
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 1;
L_001E550C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5514u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0022(c, 86u, depth + 1u); else { c.pc = 0x001A8D00u; return; } if (c.pc != 0x001E5514u) [[unlikely]] return; }
L_001E5514:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[29].w[0] + 140u);  if (t) { goto L_001E5528; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[2].w[0] + 12u);  if (t) { goto L_001E552C; } }
L_001E5528:
    set32(c.r[4], ld32((c.r[28].w[0] - 31912u)));
    c.budget -= 1;
L_001E552C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5534u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00147660u; return; } if (c.pc != 0x001E5534u) [[unlikely]] return; }
L_001E5534:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 128u);  goto L_001E555C; }
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], 0u - 2049u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_001E5574; } }
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 1;
L_001E555C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5564u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0022(c, 86u, depth + 1u); else { c.pc = 0x001A8D00u; return; } if (c.pc != 0x001E5564u) [[unlikely]] return; }
L_001E5564:
    set32(c.r[3], ld32((c.r[29].w[0] + 144u)));
    c.budget -= 1;
L_001E5568:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E54CCu | kUnwind; return; } goto L_001E54CC; }
L_001E5574:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 156u)));  goto L_001E564C; }
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5594u); set32(c.r[6], 0u + 31u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x001E5594u) [[unlikely]] return; }
L_001E5594:
    set32(c.r[3], ld32((c.r[29].w[0] + 112u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001E55AC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 96u)));  if (t) { goto L_001E55CC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001E55AC:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_001E55CC; }
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 100u)));  if (t) { goto L_001E55D0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E55CC:
    set32(c.r[4], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 1;
L_001E55D0:
    c.r[19].d[0] = c.r[2].d[0] ^ 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[19].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_001E55F4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E55F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E55F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E55F4u) [[unlikely]] return; }
L_001E55F4:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_001E5648; } }
    st32((c.r[18].w[0] + 992u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 10264u);
    st32((c.r[18].w[0] + 988u), 0u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    st32((c.r[29].w[0] + 128u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E561Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 79u, depth + 1u); else { c.pc = 0x001A8BF0u; return; } if (c.pc != 0x001E561Cu) [[unlikely]] return; }
L_001E561C:
    set32(c.r[4], ld32((c.r[29].w[0] + 156u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E58DC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001E58DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5640u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E5640u) [[unlikely]] return; }
L_001E5640:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E58DC; } }
L_001E5648:
    set32(c.r[4], ld32((c.r[29].w[0] + 156u)));
    c.budget -= 1;
L_001E564C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], ld32((c.r[28].w[0] - 31836u)));  if (t) { goto L_001E566C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E566C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E566Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E566Cu) [[unlikely]] return; }
L_001E566C:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { st32((c.r[29].w[0] + 156u), 0u);  goto L_001E56C8; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E56C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5688u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001E5688u) [[unlikely]] return; }
L_001E5688:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001E56B8; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[5].d[0] = c.r[19].d[0] + 0ull;  goto L_001E56A8; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E56B8; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001E56A8:
    set32(c.r[4], c.r[29].w[0] + 156u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E56B8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001E56B8u) [[unlikely]] return; }
L_001E56B8:
    st32((c.r[29].w[0] + 156u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 128u);  if (t) { goto L_001E56CC; } }
L_001E56C4:
    st32((c.r[29].w[0] + 156u), 0u);
    c.budget -= 1;
L_001E56C8:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 1;
L_001E56CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E56D4u); set32(c.r[5], c.r[29].w[0] + 156u);  if (depth < kMaxDepth) unit_0022(c, 81u, depth + 1u); else { c.pc = 0x001A8C40u; return; } if (c.pc != 0x001E56D4u) [[unlikely]] return; }
L_001E56D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 144u)));  if (t) { goto L_001E5728; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_001E56E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[29].w[0] + 140u);  if (t) { goto L_001E56F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[2].w[0] + 12u);  if (t) { goto L_001E56F4; } }
L_001E56F0:
    set32(c.r[4], ld32((c.r[28].w[0] - 31912u)));
    c.budget -= 1;
L_001E56F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E56FCu);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00147660u; return; } if (c.pc != 0x001E56FCu) [[unlikely]] return; }
L_001E56FC:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 128u);  goto L_001E571C; }
    set32(c.r[3], ld32((c.r[18].w[0] + 988u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_001E5880; } }
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 1;
L_001E571C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5724u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0022(c, 86u, depth + 1u); else { c.pc = 0x001A8D00u; return; } if (c.pc != 0x001E5724u) [[unlikely]] return; }
L_001E5724:
    set32(c.r[3], ld32((c.r[29].w[0] + 144u)));
    c.budget -= 1;
L_001E5728:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E56E0u | kUnwind; return; } goto L_001E56E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_001E5844; } }
L_001E573C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1344u);
    set32(c.r[4], ld32((c.r[29].w[0] + 156u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], ld32((c.r[2].w[0])));  if (t) { goto L_001E5770; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E5770; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5770u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E5770u) [[unlikely]] return; }
L_001E5770:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { st32((c.r[29].w[0] + 156u), 0u);  goto L_001E57CC; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E57C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E578Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001E578Cu) [[unlikely]] return; }
L_001E578C:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001E57BC; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[5].d[0] = c.r[19].d[0] + 0ull;  goto L_001E57AC; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E57BC; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001E57AC:
    set32(c.r[4], c.r[29].w[0] + 156u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E57BCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001E57BCu) [[unlikely]] return; }
L_001E57BC:
    st32((c.r[29].w[0] + 156u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 128u);  if (t) { goto L_001E57D0; } }
L_001E57C8:
    st32((c.r[29].w[0] + 156u), 0u);
    c.budget -= 1;
L_001E57CC:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 1;
L_001E57D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E57D8u); set32(c.r[5], c.r[29].w[0] + 156u);  if (depth < kMaxDepth) unit_0022(c, 81u, depth + 1u); else { c.pc = 0x001A8C40u; return; } if (c.pc != 0x001E57D8u) [[unlikely]] return; }
L_001E57D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 144u)));  if (t) { goto L_001E5834; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_001E57E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[29].w[0] + 140u);  if (t) { goto L_001E57F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[2].w[0] + 12u);  if (t) { goto L_001E57F8; } }
L_001E57F4:
    set32(c.r[4], ld32((c.r[28].w[0] - 31912u)));
    c.budget -= 1;
L_001E57F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5800u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00147660u; return; } if (c.pc != 0x001E5800u) [[unlikely]] return; }
L_001E5800:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 128u);  goto L_001E5828; }
    set32(c.r[3], ld32((c.r[18].w[0] + 988u)));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[3].d[0];  if (t) { goto L_001E5880; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001E5880; } }
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 1;
L_001E5828:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5830u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0022(c, 86u, depth + 1u); else { c.pc = 0x001A8D00u; return; } if (c.pc != 0x001E5830u) [[unlikely]] return; }
L_001E5830:
    set32(c.r[3], ld32((c.r[29].w[0] + 144u)));
    c.budget -= 1;
L_001E5834:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E57E4u | kUnwind; return; } goto L_001E57E4; }
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_001E5844:
    c.r[2].d[0] = c.r[20].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E573Cu | kUnwind; return; } goto L_001E573C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5860u);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x001E5860u) [[unlikely]] return; }
L_001E5860:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 988u)));
    set32(c.r[16], c.f[0]);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E5880; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001E5880:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_001E58A0; } }
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { st32((c.r[18].w[0] + 988u), c.r[16].w[0]);  goto L_001E58A0; }
    set32(c.r[2], ld32((c.r[18].w[0] + 992u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001E58A0; } }
    st32((c.r[18].w[0] + 988u), c.r[16].w[0]);
    c.budget -= 1;
L_001E58A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[2], c.r[2].w[0] + 10264u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E58B8u); st32((c.r[29].w[0] + 128u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 79u, depth + 1u); else { c.pc = 0x001A8BF0u; return; } if (c.pc != 0x001E58B8u) [[unlikely]] return; }
L_001E58B8:
    set32(c.r[4], ld32((c.r[29].w[0] + 156u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E58DC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001E58DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E58DCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E58DCu) [[unlikely]] return; }
L_001E58DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_001E58E0:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_001E5900:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5910u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001E5910u) [[unlikely]] return; }
L_001E5910:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E5920:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5934u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 367u, depth + 1u); else { c.pc = 0x001E30C0u; return; } if (c.pc != 0x001E5934u) [[unlikely]] return; }
L_001E5934:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E593Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 362u, depth + 1u); else { c.pc = 0x001E2FF0u; return; } if (c.pc != 0x001E593Cu) [[unlikely]] return; }
L_001E593C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5948u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001E5948u) [[unlikely]] return; }
L_001E5948:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E5960:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E597Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 367u, depth + 1u); else { c.pc = 0x001E30C0u; return; } if (c.pc != 0x001E597Cu) [[unlikely]] return; }
L_001E597C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5984u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 362u, depth + 1u); else { c.pc = 0x001E2FF0u; return; } if (c.pc != 0x001E5984u) [[unlikely]] return; }
L_001E5984:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 960u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    st32((c.r[16].w[0] + 964u), c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 9;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 68u)));  goto L_001E5A28; }
    set32(c.r[4], ld32((c.r[16].w[0] + 952u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E59CC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E59CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E59CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E59CCu) [[unlikely]] return; }
L_001E59CC:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0] + 952u), 0u);  goto L_001E5A24; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E5A20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E59E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001E59E8u) [[unlikely]] return; }
L_001E59E8:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001E5A14; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_001E5A04; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E5A14; } }
L_001E5A04:
    set32(c.r[4], c.r[16].w[0] + 952u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5A14u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001E5A14u) [[unlikely]] return; }
L_001E5A14:
    st32((c.r[16].w[0] + 952u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E5A24; } }
L_001E5A20:
    st32((c.r[16].w[0] + 952u), 0u);
    c.budget -= 1;
L_001E5A24:
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 1;
L_001E5A28:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_001E5A40; }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_001E5A50; } }
L_001E5A40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 32767ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
L_001E5A50:
    set32(c.r[18], ld32((c.r[16].w[0] + 72u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[17], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5A6Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 340u, depth + 1u); else { c.pc = 0x001B2710u; return; } if (c.pc != 0x001E5A6Cu) [[unlikely]] return; }
L_001E5A6C:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0] + 976u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5A80u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x001E5A80u) [[unlikely]] return; }
L_001E5A80:
    set32(c.r[4], ld32((c.r[16].w[0] + 964u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 960u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 5;
    if (c.r[2].sd[0] <= 0) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001E5AD8; }
    set32(c.r[2], c.r[3].w[0] + 2u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5AB0u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x001E5AB0u) [[unlikely]] return; }
L_001E5AB0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 23296u);
    set32(c.r[6], c.r[6].w[0] + 12576u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5AD0u); set32(c.r[7], 0u + 12u);  if (depth < kMaxDepth) unit_0008(c, 152u, depth + 1u); else { c.pc = 0x00141DA0u; return; } if (c.pc != 0x001E5AD0u) [[unlikely]] return; }
L_001E5AD0:
    st32((c.r[16].w[0] + 956u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_001E5AD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5AE0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001E5AE0u) [[unlikely]] return; }
L_001E5AE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001E5B00:
    st32((c.r[4].w[0]), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_001E5B10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    st32((c.r[4].w[0] + 672u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    st32((c.r[4].w[0] + 676u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001E5B48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[16].w[0] + 72u)));  if (t) { goto L_001E5B4C; } }
L_001E5B48:
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_001E5B4C:
    set32(c.r[2], ld32((c.r[16].w[0] + 956u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st32((c.r[29].w[0] + 60u), 0u);  goto L_001E5B7C; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5B68u); set32(c.r[5], c.r[5].w[0] + 22520u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001E5B68u) [[unlikely]] return; }
L_001E5B68:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5B74u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001E5B74u) [[unlikely]] return; }
L_001E5B74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001E5C04; } }
L_001E5B7C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[6], c.r[29].w[0] + 60u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5B90u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 386u, depth + 1u); else { c.pc = 0x001E3330u; return; } if (c.pc != 0x001E5B90u) [[unlikely]] return; }
L_001E5B90:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 976u)));  goto L_001E5BBC; }
    set32(c.r[2], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[28].w[0] - 31912u)));  goto L_001E5BA8; }
    set32(c.r[5], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_001E5BA8:
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5BB8u); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_0030(c, 386u, depth + 1u); else { c.pc = 0x001E3330u; return; } if (c.pc != 0x001E5BB8u) [[unlikely]] return; }
L_001E5BB8:
    set32(c.r[5], ld32((c.r[16].w[0] + 976u)));
    c.budget -= 1;
L_001E5BBC:
    set32(c.r[6], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5BC8u); set32(c.r[4], c.r[16].w[0] + 152u);  if (depth < kMaxDepth) unit_003C(c, 67u, depth + 1u); else { c.pc = 0x00210DD0u; return; } if (c.pc != 0x001E5BC8u) [[unlikely]] return; }
L_001E5BC8:
    set32(c.r[2], ld32((c.r[16].w[0] + 216u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5BDCu); st32((c.r[16].w[0] + 984u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001E5BDCu) [[unlikely]] return; }
L_001E5BDC:
    set32(c.r[4], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E5C00; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001E5C00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5C00u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E5C00u) [[unlikely]] return; }
L_001E5C00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001E5C04:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001E5C20:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 11;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 2u);  goto L_001E6198; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[19].w[0] + 4u)));  goto L_001E5CA8; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 4u)));  goto L_001E5C68; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_001E61D4; } }
L_001E5C68:
    set32(c.r[2], 0u - 20481u);
    set32(c.r[4], c.r[19].w[0] + 152u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 968u), 0u);
    st32((c.r[19].w[0] + 972u), 0u);
    st32((c.r[19].w[0] + 944u), 0u);
    st32((c.r[19].w[0] + 948u), 0u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5C98u); st32((c.r[19].w[0] + 940u), 0u);  if (depth < kMaxDepth) unit_003B(c, 237u, depth + 1u); else { c.pc = 0x0020E420u; return; } if (c.pc != 0x001E5C98u) [[unlikely]] return; }
L_001E5C98:
    set32(c.r[3], ld32((c.r[19].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 4;
L_001E5CA8:
    c.r[3].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_001E5DB4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5CBCu);  if (depth < kMaxDepth) unit_0030(c, 299u, depth + 1u); else { c.pc = 0x001E2550u; return; } if (c.pc != 0x001E5CBCu) [[unlikely]] return; }
L_001E5CBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E5DB0; } }
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5CD4u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x001E5CD4u) [[unlikely]] return; }
L_001E5CD4:
    set32(c.r[4], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_001E5CE8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[29].w[0] + 80u)));  if (t) { goto L_001E5CFC; } }
L_001E5CE8:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[16].d[0] = 0ull + 0ull;  goto L_001E5CFC; }
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.budget -= 3;
L_001E5CFC:
    set32(c.r[4], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E5D20; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001E5D20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5D20u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E5D20u) [[unlikely]] return; }
L_001E5D20:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_001E5DB0; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.f[0] = 0u;
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[19].w[0] + 968u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E5DB0; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 956u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 944u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[6], ld32((c.r[19].w[0] + 948u)));  if (t) { goto L_001E5D7C; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 960u)));
    set32(c.r[3], c.r[2].w[0] + 2u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_001E5D9C; }
    set32(c.r[2], ld32((c.r[19].w[0] + 964u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { mmi::mult(c, 0, c.r[6].w[0], c.r[3].w[0]); c.r[2].d[0] = c.lo.d[0];  goto L_001E5D88; }
L_001E5D7C:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E5D9C; } }
L_001E5D88:
    set32(c.r[3], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[16], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 5;
L_001E5D9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5DA4u);  if (depth < kMaxDepth) unit_0030(c, 310u, depth + 1u); else { c.pc = 0x001E2810u; return; } if (c.pc != 0x001E5DA4u) [[unlikely]] return; }
L_001E5DA4:
    c.f[1] = ld32((c.r[19].w[0] + 968u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.budget -= 3;
L_001E5DB0:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E5DB4:
    set32(c.r[3], ld32((c.r[19].w[0] + 956u)));
    c.budget -= 1;
L_001E5DB8:
    set32(c.r[6], ld32((c.r[19].w[0] + 944u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[7], ld32((c.r[19].w[0] + 948u)));  if (t) { goto L_001E5DE8; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 960u)));
    set32(c.r[5], c.r[4].w[0] + 2u);
    c.r[1].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_001E5E08; }
    set32(c.r[4], ld32((c.r[19].w[0] + 964u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { mmi::mult(c, 0, c.r[7].w[0], c.r[5].w[0]); c.r[4].d[0] = c.lo.d[0];  goto L_001E5DF4; }
L_001E5DE8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E5E08; } }
L_001E5DF4:
    set32(c.r[5], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 5;
L_001E5E08:
    set32(c.r[17], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.r[4].d[0] = c.r[4].d[0] & 16384ull;
    c.budget -= 5;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 940u)));  goto L_001E5F30; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_001E5E68; }
    set32(c.r[4], ld32((c.r[19].w[0] + 960u)));
    set32(c.r[5], c.r[4].w[0] + 2u);
    c.r[1].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001E5E48; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 964u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { mmi::mult(c, 0, c.r[7].w[0], c.r[5].w[0]); c.r[4].d[0] = c.lo.d[0];  goto L_001E5E54; }
L_001E5E48:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E5E68; } }
L_001E5E54:
    set32(c.r[5], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 5;
L_001E5E68:
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 968u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E6140; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E5F2C; } }
L_001E5E84:
    set32(c.r[2], ld32((c.r[19].w[0] + 944u)));
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[3].w[0] + 680u);
    set32(c.r[3], ld32((c.r[3].w[0] + 684u)));
    c.budget -= 6;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = c.r[17].d[0] & 4096ull;  goto L_001E5F44; }
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 948u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E5F40; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 4u);  goto L_001E5F08; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5EC4u);  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x001E5EC4u) [[unlikely]] return; }
L_001E5EC4:
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5ED0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 332u, depth + 1u); else { c.pc = 0x001FBE70u; return; } if (c.pc != 0x001E5ED0u) [[unlikely]] return; }
L_001E5ED0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  goto L_001E5EE8; }
    set32(c.r[2], 0u + 3u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), 0u);  if (t) { goto L_001E5EF8; } }
L_001E5EE8:
    set32(c.r[3], 0u + 2u);
    c.r[4].d[0] = c.r[4].d[0] | 4096ull;
    st32((c.r[2].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 4;
L_001E5EF8:
    set32(c.r[2], ld32((c.r[19].w[0] + 940u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 940u), c.r[2].w[0]);  if (t) { goto L_001E5F2C; } }
L_001E5F08:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E5F2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5F18u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 107u, depth + 1u); else { c.pc = 0x001E5140u; return; } if (c.pc != 0x001E5F18u) [[unlikely]] return; }
L_001E5F18:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_001E61D0; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 940u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[19].w[0] + 940u), c.r[2].w[0]);
    c.budget -= 3;
L_001E5F2C:
    set32(c.r[3], ld32((c.r[19].w[0] + 940u)));
    c.budget -= 1;
L_001E5F30:
    set32(c.r[2], ld32((c.r[19].w[0] + 936u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] << 4);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E5E84u | kUnwind; return; } goto L_001E5E84; }
L_001E5F40:
    c.r[2].d[0] = c.r[17].d[0] & 4096ull;
    c.budget -= 1;
L_001E5F44:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 956u)));  goto L_001E5F58; }
    set32(c.r[2], ld32((c.r[19].w[0] + 984u)));
    st32((c.r[19].w[0] + 216u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 956u)));
    c.budget -= 3;
L_001E5F58:
    set32(c.r[5], ld32((c.r[19].w[0] + 944u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[6], ld32((c.r[19].w[0] + 948u)));  if (t) { goto L_001E5F88; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 960u)));
    set32(c.r[3], c.r[2].w[0] + 2u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001E5FA8; }
    set32(c.r[2], ld32((c.r[19].w[0] + 964u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { mmi::mult(c, 0, c.r[6].w[0], c.r[3].w[0]); c.r[2].d[0] = c.lo.d[0];  goto L_001E5F94; }
L_001E5F88:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E5FA8; } }
L_001E5F94:
    set32(c.r[3], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 5;
L_001E5FA8:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[28].w[0] - 31912u)));  goto L_001E5FB8; }
    set32(c.r[5], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_001E5FB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5FC0u); set32(c.r[4], c.r[19].w[0] + 152u);  if (depth < kMaxDepth) unit_003B(c, 314u, depth + 1u); else { c.pc = 0x0020FC40u; return; } if (c.pc != 0x001E5FC0u) [[unlikely]] return; }
L_001E5FC0:
    set32(c.r[4], ld32((c.r[19].w[0] + 956u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 944u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[6], ld32((c.r[19].w[0] + 948u)));  if (t) { goto L_001E5FF4; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 960u)));
    set32(c.r[3], c.r[2].w[0] + 2u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_001E6014; }
    set32(c.r[2], ld32((c.r[19].w[0] + 964u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { mmi::mult(c, 0, c.r[6].w[0], c.r[3].w[0]); c.r[2].d[0] = c.lo.d[0];  goto L_001E6000; }
L_001E5FF4:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E6014; } }
L_001E6000:
    set32(c.r[3], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 5;
L_001E6014:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6020u);  if (depth < kMaxDepth) unit_0031(c, 121u, depth + 1u); else { c.pc = 0x001E5380u; return; } if (c.pc != 0x001E6020u) [[unlikely]] return; }
L_001E6020:
    c.r[3].d[0] = c.r[17].d[0] & 32768ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[17].d[0] & 16384ull;  goto L_001E6040; }
    set32(c.r[3], ld32((c.r[19].w[0] + 948u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 948u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 944u), 0u);  if (t) { goto L_001E6058; } }
L_001E6040:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 944u)));  goto L_001E6050; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 1u);  if (t) { goto L_001E6140; } }
L_001E6050:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 944u), c.r[3].w[0]);
    c.budget -= 2;
L_001E6058:
    set32(c.r[5], ld32((c.r[19].w[0] + 956u)));
    set32(c.r[6], ld32((c.r[19].w[0] + 944u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[7], ld32((c.r[19].w[0] + 948u)));  if (t) { goto L_001E608C; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 960u)));
    set32(c.r[4], c.r[3].w[0] + 2u);
    c.r[1].d[0] = c.r[4].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_001E60AC; }
    set32(c.r[3], ld32((c.r[19].w[0] + 964u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { mmi::mult(c, 0, c.r[7].w[0], c.r[4].w[0]); c.r[3].d[0] = c.lo.d[0];  goto L_001E6098; }
L_001E608C:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E60AC; } }
L_001E6098:
    set32(c.r[4], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 5;
L_001E60AC:
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E60CC; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 956u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E5DB8u | kUnwind; return; } goto L_001E5DB8; }
L_001E60CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E60D4u);  if (depth < kMaxDepth) unit_0030(c, 310u, depth + 1u); else { c.pc = 0x001E2810u; return; } if (c.pc != 0x001E60D4u) [[unlikely]] return; }
L_001E60D4:
    c.f[1] = ld32((c.r[19].w[0] + 972u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 972u), c.f[0]);
    set32(c.r[5], ld32((c.r[19].w[0] + 956u)));
    set32(c.r[6], ld32((c.r[19].w[0] + 944u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[7], ld32((c.r[19].w[0] + 948u)));  if (t) { goto L_001E6114; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 960u)));
    set32(c.r[4], c.r[3].w[0] + 2u);
    c.r[1].d[0] = c.r[4].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_001E6134; }
    set32(c.r[3], ld32((c.r[19].w[0] + 964u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { mmi::mult(c, 0, c.r[7].w[0], c.r[4].w[0]); c.r[3].d[0] = c.lo.d[0];  goto L_001E6120; }
L_001E6114:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E6134; } }
L_001E6120:
    set32(c.r[4], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 5;
L_001E6134:
    c.f[0] = ld32((c.r[19].w[0] + 972u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 4u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E5DB4u | kUnwind; return; } goto L_001E5DB4; } }
L_001E6140:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 27072u)));
    c.budget -= 4;
    if (c.r[3].sd[0] < 0) { set32(c.r[4], c.r[3].w[0] >> 1);  goto L_001E615C; }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001E6174; } }
L_001E615C:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 6;
L_001E6174:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[19].w[0] + 968u));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[3].w[0] + 27140u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[2]);
    c.budget -= 8;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[19].w[0] + 968u), c.f[0]);  if (t) { goto L_001E61D0; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_001E6198:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E61A4u); st32((c.r[19].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0031(c, 107u, depth + 1u); else { c.pc = 0x001E5140u; return; } if (c.pc != 0x001E61A4u) [[unlikely]] return; }
L_001E61A4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_001E61D0; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], 0u - 24577u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 992u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E61D0u); st32((c.r[19].w[0] + 988u), 0u);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001E61D0u) [[unlikely]] return; }
L_001E61D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_001E61D4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001E61F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6208u); set32(c.r[4], c.r[16].w[0] + 152u);  if (depth < kMaxDepth) unit_003B(c, 237u, depth + 1u); else { c.pc = 0x0020E420u; return; } if (c.pc != 0x001E6208u) [[unlikely]] return; }
L_001E6208:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6214u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001E6214u) [[unlikely]] return; }
L_001E6214:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E6230:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 279u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6248u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 352u, depth + 1u); else { c.pc = 0x001CF1C0u; return; } if (c.pc != 0x001E6248u) [[unlikely]] return; }
L_001E6248:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x50490000u);
    set32(c.r[3], c.r[3].w[0] + 14512u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 19533ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6270u); set32(c.r[5], c.r[5].w[0] + 22544u);  if (depth < kMaxDepth) unit_002C(c, 63u, depth + 1u); else { c.pc = 0x001D0A40u; return; } if (c.pc != 0x001E6270u) [[unlikely]] return; }
L_001E6270:
    st32((c.r[16].w[0] + 148u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 152u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E6290:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001E62FC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 14512u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 152u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001E62DC; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001E62D4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001E62D4u) [[unlikely]] return; }
L_001E62D4:
    st32((c.r[17].w[0] + 152u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_001E62DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E62E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 358u, depth + 1u); else { c.pc = 0x001CF260u; return; } if (c.pc != 0x001E62E4u) [[unlikely]] return; }
L_001E62E4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001E6300; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E62FCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x001E62FCu) [[unlikely]] return; }
L_001E62FC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001E6300:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E6320:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6330u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001E6330u) [[unlikely]] return; }
L_001E6330:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E6340:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 152u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 148u), 0u);  goto L_001E6374; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001E636Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001E636Cu) [[unlikely]] return; }
L_001E636C:
    st32((c.r[16].w[0] + 152u), 0u);
    st32((c.r[16].w[0] + 148u), 0u);
    c.budget -= 2;
L_001E6374:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 32767ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6394u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001E6394u) [[unlikely]] return; }
L_001E6394:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E63B0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 12;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[20].w[0] + 152u)));  goto L_001E65FC; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[20].w[0] + 152u)));  goto L_001E65A0; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 152u)));  goto L_001E6444; }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u - 1u);  goto L_001E640C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_001E66B0; } }
L_001E6408:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_001E640C:
    st32((c.r[20].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 152u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_001E6434; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001E642Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001E642Cu) [[unlikely]] return; }
L_001E642C:
    st32((c.r[20].w[0] + 152u), 0u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 2;
L_001E6434:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E643Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001E643Cu) [[unlikely]] return; }
L_001E643C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E66AC; } }
L_001E6444:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 4u)));  goto L_001E6464; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001E645Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001E645Cu) [[unlikely]] return; }
L_001E645C:
    st32((c.r[20].w[0] + 152u), 0u);
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 2;
L_001E6464:
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u + 360u);  goto L_001E6498; }
    set32(c.r[3], ld32((c.r[20].w[0] + 148u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 56u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E6494; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E648Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001E648Cu) [[unlikely]] return; }
L_001E648C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E66AC; } }
L_001E6494:
    set32(c.r[4], 0u + 360u);
    c.budget -= 1;
L_001E6498:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E64A4u); c.r[18].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001E64A4u) [[unlikely]] return; }
L_001E64A4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { st32((c.r[20].w[0] + 152u), c.r[17].w[0]);  goto L_001E6530; }
    set32(c.r[6], ld32((c.r[20].w[0] + 56u)));
    set32(c.r[4], c.r[29].w[0] + 116u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E64C0u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_002B(c, 254u, depth + 1u); else { c.pc = 0x001CE000u; return; } if (c.pc != 0x001E64C0u) [[unlikely]] return; }
L_001E64C0:
    set32(c.r[2], ld32((c.r[29].w[0] + 116u)));
    set32(c.r[19], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[29].w[0] + 116u);  if (t) { goto L_001E64DC; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + 12u);  if (t) { goto L_001E64E0; } }
L_001E64DC:
    set32(c.r[16], ld32((c.r[28].w[0] - 31912u)));
    c.budget -= 1;
L_001E64E0:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E64ECu); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_002B(c, 270u, depth + 1u); else { c.pc = 0x001CE260u; return; } if (c.pc != 0x001E64ECu) [[unlikely]] return; }
L_001E64EC:
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    set32(c.r[18], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[29].w[0] + 112u);  if (t) { goto L_001E6508; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[2].w[0] + 12u);  if (t) { goto L_001E650C; } }
L_001E6508:
    set32(c.r[6], ld32((c.r[28].w[0] - 31912u)));
    c.budget -= 1;
L_001E650C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6528u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 368u, depth + 1u); else { c.pc = 0x00207EF0u; return; } if (c.pc != 0x001E6528u) [[unlikely]] return; }
L_001E6528:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[20].w[0] + 152u), c.r[17].w[0]);
    c.budget -= 2;
L_001E6530:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001E6560; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E6560; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001E6560; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 112u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6560u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E6560u) [[unlikely]] return; }
L_001E6560:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 88u)));  goto L_001E6594; }
    set32(c.r[4], ld32((c.r[29].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E6590; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001E6590; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 116u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6590u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E6590u) [[unlikely]] return; }
L_001E6590:
    set32(c.r[3], ld32((c.r[20].w[0] + 88u)));
    c.budget -= 1;
L_001E6594:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 152u)));
    c.budget -= 3;
L_001E65A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E66AC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], ld32((c.r[20].w[0] + 56u)));  goto L_001E65D8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 88u)));  goto L_001E65F0; }
    set32(c.r[6], ld32((c.r[20].w[0] + 56u)));
    c.budget -= 1;
L_001E65D8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E65E8u); set32(c.r[5], c.r[5].w[0] + 22681u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001E65E8u) [[unlikely]] return; }
L_001E65E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E6408u | kUnwind; return; } goto L_001E6408; } }
L_001E65F0:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[20].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 152u)));
    c.budget -= 3;
L_001E65FC:
    set32(c.r[16], ld32((c.r[2].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6608u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_002B(c, 300u, depth + 1u); else { c.pc = 0x001CE680u; return; } if (c.pc != 0x001E6608u) [[unlikely]] return; }
L_001E6608:
    c.r[1].d[0] = c.r[2].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[16], ld32((c.r[20].w[0] + 152u)));  goto L_001E6640; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E661Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_002B(c, 300u, depth + 1u); else { c.pc = 0x001CE680u; return; } if (c.pc != 0x001E661Cu) [[unlikely]] return; }
L_001E661C:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], ld32((c.r[20].w[0] + 152u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[2].w[0] + 76u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6638u); set32(c.r[5], c.r[5].w[0] + 22706u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001E6638u) [[unlikely]] return; }
L_001E6638:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E6408u | kUnwind; return; } goto L_001E6408; } }
L_001E6640:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6648u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_002B(c, 301u, depth + 1u); else { c.pc = 0x001CE6A0u; return; } if (c.pc != 0x001E6648u) [[unlikely]] return; }
L_001E6648:
    set32(c.r[5], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6658u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x001E6658u) [[unlikely]] return; }
L_001E6658:
    set32(c.r[4], ld32((c.r[20].w[0] + 152u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 56u)));  goto L_001E667C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6674u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001E6674u) [[unlikely]] return; }
L_001E6674:
    st32((c.r[20].w[0] + 152u), 0u);
    set32(c.r[2], ld32((c.r[20].w[0] + 56u)));
    c.budget -= 2;
L_001E667C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[20].w[0] + 148u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[20].w[0] + 56u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E66A0u); set32(c.r[5], c.r[5].w[0] + 22749u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x001E66A0u) [[unlikely]] return; }
L_001E66A0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E66ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001E66ACu) [[unlikely]] return; }
L_001E66AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_001E66B0:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001E66D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E66F4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001E66F4u) [[unlikely]] return; }
L_001E66F4:
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], 0u + 2u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E6728; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001E6728; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6728u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E6728u) [[unlikely]] return; }
L_001E6728:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0] + 8u), 0u);  goto L_001E6778; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E6774; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6744u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001E6744u) [[unlikely]] return; }
L_001E6744:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E6754; } }
    c.budget -= 2;
    if (c.r[6].sd[0] > 0) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_001E675C; }
L_001E6754:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001E676C; } }
L_001E675C:
    set32(c.r[4], c.r[16].w[0] + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6768u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001E6768u) [[unlikely]] return; }
L_001E6768:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001E676C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001E6778; } }
L_001E6774:
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 1;
L_001E6778:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_001E67D4; }
    set32(c.r[2], ld32((c.r[18].w[0] + 148u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[28].w[0] - 31832u)));
    set32(c.r[6], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 64u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E67A8u); st32((c.r[29].w[0] + 72u), 0u);  if (depth < kMaxDepth) unit_0022(c, 304u, depth + 1u); else { c.pc = 0x001AB1B0u; return; } if (c.pc != 0x001E67A8u) [[unlikely]] return; }
L_001E67A8:
    set32(c.r[4], ld32((c.r[29].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E67D0; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001E67D0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 64u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E67D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E67D0u) [[unlikely]] return; }
L_001E67D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_001E67D4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001E67F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[6].w[0])));
    st32((c.r[29].w[0] + 40u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[29].w[0] + 44u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 12;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001E6884; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[28].w[0] - 31832u)));  goto L_001E6830; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001E6890; } }
L_001E6830:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6838u); set32(c.r[4], c.r[29].w[0] + 40u);  if (depth < kMaxDepth) unit_0022(c, 145u, depth + 1u); else { c.pc = 0x001A96E0u; return; } if (c.pc != 0x001E6838u) [[unlikely]] return; }
L_001E6838:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], ld32((c.r[28].w[0] - 31832u)));  goto L_001E6854; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E684Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001E684Cu) [[unlikely]] return; }
L_001E684C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E688C; } }
L_001E6854:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6860u); set32(c.r[5], c.r[29].w[0] + 40u);  if (depth < kMaxDepth) unit_0022(c, 138u, depth + 1u); else { c.pc = 0x001A9600u; return; } if (c.pc != 0x001E6860u) [[unlikely]] return; }
L_001E6860:
    set32(c.r[6], ld32((c.r[29].w[0] + 36u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01170000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6874u); c.r[5].d[0] = c.r[2].d[0] | 4096ull;  if (depth < kMaxDepth) unit_002C(c, 39u, depth + 1u); else { c.pc = 0x001D0660u; return; } if (c.pc != 0x001E6874u) [[unlikely]] return; }
L_001E6874:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_001E688C; } }
L_001E6884:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E688Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001E688Cu) [[unlikely]] return; }
L_001E688C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001E6890:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001E68A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001E68F0; } }
    set32(c.r[9], ld32((c.r[5].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x474C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 18768ull;
    set32(c.r[4], c.r[9].w[0] << 8);
    set32(c.r[8], c.r[9].w[0] << 24);
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[9].w[0] >> 8);
    c.r[4].d[0] = c.r[8].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[3], c.r[9].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 15;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[5].w[0] + 8u)));  goto L_001E6910; }
L_001E68F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E68FCu); set32(c.r[4], c.r[4].w[0] + 22791u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001E68FCu) [[unlikely]] return; }
L_001E68FC:
    st32((c.r[16].w[0]), 0u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), 0u);  if (t) { goto L_001E69E4; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 1;
L_001E6910:
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[9], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[9].sd[0] >= 0; set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 1));  if (t) { goto L_001E696C; } }
    set32(c.r[2], c.r[9].w[0] + 1u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = c.r[9].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;  if (t) { goto L_001E6970; } }
    c.r[1].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_001E6944:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { set32(c.r[8], c.r[5].w[0] + 1u);  goto L_001E6958; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[9], c.r[5].w[0] - 1u);  if (t) { goto L_001E6958; } }
    set32(c.r[8], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_001E6958:
    set32(c.r[2], c.r[9].w[0] + c.r[8].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_001E696C; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_001E696C:
    c.r[1].d[0] = c.r[9].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_001E6970:
    c.budget -= 2;
    if (c.r[1].d[0] != 0ull) { c.r[1].d[0] = c.r[9].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;  goto L_001E6990; }
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[6].d[0] != c.r[2].d[0]) { c.r[1].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E6944u | kUnwind; return; } goto L_001E6944; }
    c.r[1].d[0] = c.r[9].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_001E6990:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[5].w[0] << 3);  goto L_001E69BC; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E69A8u); set32(c.r[4], c.r[4].w[0] + 22813u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001E69A8u) [[unlikely]] return; }
L_001E69A8:
    st32((c.r[16].w[0]), 0u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), 0u);  if (t) { goto L_001E69E4; } }
    set32(c.r[2], c.r[5].w[0] << 3);
    c.budget -= 1;
L_001E69BC:
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[7].sd[0] <= 0; st32((c.r[16].w[0] + 4u), 0u);  if (t) { goto L_001E69E0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E69E0u); c.r[5].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 256u, depth + 1u); else { c.pc = 0x001E6A40u; return; } if (c.pc != 0x001E69E0u) [[unlikely]] return; }
L_001E69E0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001E69E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E6A00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_001E6A18; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[2].w[0]));  goto L_001E6A2C; }
L_001E6A18:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6A24u); set32(c.r[4], c.r[4].w[0] + 22837u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001E6A24u) [[unlikely]] return; }
L_001E6A24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 6u);  if (t) { goto L_001E6A34; } }
L_001E6A2C:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 2;
L_001E6A34:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001E6A40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_001E6A58; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[8].d[0] = 0ull + 0ull;  goto L_001E6A6C; }
L_001E6A58:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6A64u); set32(c.r[4], c.r[4].w[0] + 22837u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001E6A64u) [[unlikely]] return; }
L_001E6A64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001E6AD8; } }
L_001E6A6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 6u);  if (t) { goto L_001E6AC8; } }
L_001E6A74:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_001E6A7C:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[6].d[0]; c.r[7].d[0] = c.r[3].d[0] & 31ull;  if (t) { goto L_001E6AA0; } }
    st32((c.r[4].w[0] + 4u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001E6AD8; } }
L_001E6AA0:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[8], c.r[8].w[0] + 1u);  goto L_001E6AC8; }
    set32(c.r[2], c.r[3].w[0] - c.r[7].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E6A7Cu | kUnwind; return; } goto L_001E6A7C; } }
L_001E6AC8:
    c.r[2].d[0] = c.r[8].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E6A74u | kUnwind; return; } goto L_001E6A74; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E6AD8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001E6AF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 280u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6B08u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 352u, depth + 1u); else { c.pc = 0x001CF1C0u; return; } if (c.pc != 0x001E6B08u) [[unlikely]] return; }
L_001E6B08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 14576u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 148u), 0u);
    st32((c.r[16].w[0] + 160u), 0u);
    st32((c.r[16].w[0] + 164u), 0u);
    st32((c.r[16].w[0] + 168u), 0u);
    st32((c.r[16].w[0] + 172u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6B30u); st32((c.r[16].w[0] + 176u), 0u);  if (depth < kMaxDepth) unit_0024(c, 206u, depth + 1u); else { c.pc = 0x001B1730u; return; } if (c.pc != 0x001E6B30u) [[unlikely]] return; }
L_001E6B30:
    st32((c.r[16].w[0] + 152u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x524C0000u);
    st32((c.r[16].w[0] + 156u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 16973ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6B54u); set32(c.r[5], c.r[5].w[0] + 22864u);  if (depth < kMaxDepth) unit_002C(c, 63u, depth + 1u); else { c.pc = 0x001D0A40u; return; } if (c.pc != 0x001E6B54u) [[unlikely]] return; }
L_001E6B54:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E6B70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001E6BDC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 14576u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001E6BBC; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6BB4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001E6BB4u) [[unlikely]] return; }
L_001E6BB4:
    st32((c.r[17].w[0] + 148u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_001E6BBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6BC4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 358u, depth + 1u); else { c.pc = 0x001CF260u; return; } if (c.pc != 0x001E6BC4u) [[unlikely]] return; }
L_001E6BC4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001E6BE0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6BDCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x001E6BDCu) [[unlikely]] return; }
L_001E6BDC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001E6BE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E6C00:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E6C1C; } }
    c.f[12] = c.f[0];
    c.budget -= 1;
L_001E6C1C:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { st32((c.r[4].w[0] + 160u), c.f[12]);  goto L_001E6C38; }
    c.f[12] = c.f[0];
    st32((c.r[4].w[0] + 160u), c.f[12]);
    c.budget -= 2;
L_001E6C38:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  c.pc = t; return; }
L_001E6C50:
    c.f[1] = ld32((c.r[4].w[0] + 160u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E6C70; } }
    c.f[1] = c.f[0];
    c.budget -= 1;
L_001E6C70:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);  goto L_001E6C8C; }
    c.f[1] = c.f[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.budget -= 2;
L_001E6C8C:
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0] + 168u), c.f[1]);  if (t) { goto L_001E6CA4; } }
    c.f[12] = c.f[0];
    c.budget -= 1;
L_001E6CA4:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_001E6CC0; }
    c.f[12] = c.f[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 2;
L_001E6CC0:
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[13]) < fp::key(c.f[0]));
    st32((c.r[4].w[0] + 164u), c.f[12]);
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 172u), c.f[13]);  if (t) { goto L_001E6CDC; } }
    st32((c.r[4].w[0] + 172u), c.f[0]);
    c.budget -= 1;
L_001E6CDC:
    st32((c.r[4].w[0] + 176u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  c.pc = t; return; }
L_001E6CF0:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E6DB8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 27072u)));
    c.budget -= 4;
    if (c.r[3].sd[0] < 0) { set32(c.r[5], c.r[3].w[0] >> 1);  goto L_001E6D1C; }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001E6D34; } }
L_001E6D1C:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.f[0] = c.r[5].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 6;
L_001E6D34:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[4].w[0] + 176u));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[3].w[0] + 27140u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[2]);
    st32((c.r[4].w[0] + 176u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 172u));
    c.f[0] = ld32((c.r[4].w[0] + 176u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[3] = ld32((c.r[4].w[0] + 176u));  goto L_001E6D6C; }
    st32((c.r[4].w[0] + 176u), c.f[1]);
    c.f[3] = ld32((c.r[4].w[0] + 176u));
    c.budget -= 2;
L_001E6D6C:
    c.f[2] = ld32((c.r[4].w[0] + 172u));
    c.f[4] = ld32((c.r[4].w[0] + 168u));
    c.f[0] = 0u;
    c.f[2] = fp::ee::div(c.fcr31, c.f[3], c.f[2]);
    c.f[1] = ld32((c.r[4].w[0] + 164u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[4]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[4]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[0]);
    st32((c.r[4].w[0] + 160u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 176u));
    c.f[0] = ld32((c.r[4].w[0] + 172u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E6DB8; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 5;
L_001E6DB8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E6DC0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[0] = 0u;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[4].w[0] + 160u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001E6E0C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_001E6FAC; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6E00u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001E6E00u) [[unlikely]] return; }
L_001E6E00:
    st32((c.r[17].w[0] + 148u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E6FA8; } }
L_001E6E0C:
    set32(c.r[2], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 152u)));  goto L_001E6E50; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6E20u); set32(c.r[4], 0u + 72u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001E6E20u) [[unlikely]] return; }
L_001E6E20:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 148u), c.r[2].w[0]);  goto L_001E6E4C; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0xF2000000u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6E48u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 105u, depth + 1u); else { c.pc = 0x0015CFA0u; return; } if (c.pc != 0x001E6E48u) [[unlikely]] return; }
L_001E6E48:
    st32((c.r[17].w[0] + 148u), c.r[2].w[0]);
    c.budget -= 1;
L_001E6E4C:
    set32(c.r[5], ld32((c.r[17].w[0] + 152u)));
    c.budget -= 1;
L_001E6E50:
    set32(c.r[7], 0u + 1u);
    set32(c.r[6], ld32((c.r[17].w[0] + 156u)));
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6E64u); c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 356u, depth + 1u); else { c.pc = 0x00207D10u; return; } if (c.pc != 0x001E6E64u) [[unlikely]] return; }
L_001E6E64:
    set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[5], c.r[29].w[0] + 188u);
    set32(c.r[6], c.r[29].w[0] + 184u);
    set32(c.r[16], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6E7Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 38u, depth + 1u); else { c.pc = 0x0015C3D0u; return; } if (c.pc != 0x001E6E7Cu) [[unlikely]] return; }
L_001E6E7C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 180u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6E8Cu); set32(c.r[6], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0015C5C0u; return; } if (c.pc != 0x001E6E8Cu) [[unlikely]] return; }
L_001E6E8C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 172u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6E9Cu); set32(c.r[6], c.r[29].w[0] + 168u);  if (depth < kMaxDepth) unit_000F(c, 49u, depth + 1u); else { c.pc = 0x0015C560u; return; } if (c.pc != 0x001E6E9Cu) [[unlikely]] return; }
L_001E6E9C:
    c.f[5] = ld32((c.r[29].w[0] + 188u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44800000u);
    c.f[4] = ld32((c.r[29].w[0] + 180u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x44000000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[3], c.r[29].w[0] + 48u);
    c.f[0] = ld32((c.r[17].w[0] + 160u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.f[4] = fp::ee::div(c.fcr31, c.f[5], c.f[4]);
    c.r[4].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[2], 0u + 96u);
    c.f[5] = fp::ee::div(c.fcr31, c.f[5], c.f[1]);
    c.f[3] = ld32((c.r[29].w[0] + 184u));
    c.f[2] = ld32((c.r[29].w[0] + 176u));
    c.f[7] = ld32((c.r[29].w[0] + 172u));
    c.f[6] = ld32((c.r[29].w[0] + 168u));
    c.f[1] = fp::ee::div(c.fcr31, c.f[3], c.f[2]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[6], c.f[1]);
    c.f[1] = c.r[5].w[0];
    c.f[1] = fp::ee::div(c.fcr31, c.f[3], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[5], c.r[5].w[0] << 24);
    c.f[4] = fp::ee::add(c.fcr31, c.f[7], c.f[4]);
    c.budget -= 29;
    { const bool t = c.r[3].d[0] == 0ull; c.r[7].d[0] = c.r[5].d[0] | c.r[4].d[0];  if (t) { goto L_001E6F2C; } }
L_001E6F10:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E6F10u | kUnwind; return; } goto L_001E6F10; } }
L_001E6F2C:
    st32((c.r[29].w[0] + 48u), c.f[7]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 72u), c.f[7]);
    set32(c.r[5], 0u + 4u);
    st32((c.r[29].w[0] + 52u), c.f[6]);
    set32(c.r[6], 0u + 1u);
    st32((c.r[29].w[0] + 100u), c.f[6]);
    st32((c.r[29].w[0] + 68u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 76u), c.f[2]);
    st32((c.r[29].w[0] + 92u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 124u), c.f[2]);
    st32((c.r[29].w[0] + 116u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 88u), c.f[1]);
    st32((c.r[29].w[0] + 140u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 136u), c.f[1]);
    st32((c.r[29].w[0] + 56u), 0u);
    st32((c.r[29].w[0] + 96u), c.f[4]);
    st32((c.r[29].w[0] + 60u), 0u);
    st32((c.r[29].w[0] + 120u), c.f[4]);
    st32((c.r[29].w[0] + 64u), 0u);
    st32((c.r[29].w[0] + 108u), c.f[5]);
    st32((c.r[29].w[0] + 80u), 0u);
    st32((c.r[29].w[0] + 132u), c.f[5]);
    st32((c.r[29].w[0] + 84u), 0u);
    st32((c.r[29].w[0] + 104u), 0u);
    st32((c.r[29].w[0] + 112u), 0u);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6F9Cu); st32((c.r[29].w[0] + 128u), 0u);  if (depth < kMaxDepth) unit_000E(c, 337u, depth + 1u); else { c.pc = 0x0015AE70u; return; } if (c.pc != 0x001E6F9Cu) [[unlikely]] return; }
L_001E6F9C:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6FA8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0039(c, 362u, depth + 1u); else { c.pc = 0x00207E10u; return; } if (c.pc != 0x001E6FA8u) [[unlikely]] return; }
L_001E6FA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001E6FAC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_001E6FC0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6FECu); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001E6FECu) [[unlikely]] return; }
L_001E6FEC:
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], 0u + 2u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E7020; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E7020; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7020u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E7020u) [[unlikely]] return; }
L_001E7020:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0] + 8u), 0u);  goto L_001E7078; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E7074; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E703Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001E703Cu) [[unlikely]] return; }
L_001E703C:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001E7068; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_001E7058; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E7068; } }
L_001E7058:
    set32(c.r[4], c.r[16].w[0] + 8u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7068u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001E7068u) [[unlikely]] return; }
L_001E7068:
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = ld16((c.r[18].w[0] + 4u));  if (t) { goto L_001E707C; } }
L_001E7074:
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 1;
L_001E7078:
    c.r[19].d[0] = ld16((c.r[18].w[0] + 4u));
    c.budget -= 1;
L_001E707C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7084u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001E7084u) [[unlikely]] return; }
L_001E7084:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E70B4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E70B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E70B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E70B4u) [[unlikely]] return; }
L_001E70B4:
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[19], ld32((c.r[18].w[0] + 152u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E70C4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001E70C4u) [[unlikely]] return; }
L_001E70C4:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E70F4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E70F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E70F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E70F4u) [[unlikely]] return; }
L_001E70F4:
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[19], ld32((c.r[18].w[0] + 156u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7104u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001E7104u) [[unlikely]] return; }
L_001E7104:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E7134; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E7134; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7134u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E7134u) [[unlikely]] return; }
L_001E7134:
    st32((c.r[17].w[0] + 8u), 0u);
    c.f[20] = ld32((c.r[18].w[0] + 160u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7144u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001E7144u) [[unlikely]] return; }
L_001E7144:
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 12u), c.f[20]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E7178; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E7178; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7178u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E7178u) [[unlikely]] return; }
L_001E7178:
    st32((c.r[17].w[0] + 8u), 0u);
    c.f[20] = ld32((c.r[18].w[0] + 164u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7188u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001E7188u) [[unlikely]] return; }
L_001E7188:
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 12u), c.f[20]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E71BC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E71BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E71BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E71BCu) [[unlikely]] return; }
L_001E71BC:
    st32((c.r[17].w[0] + 8u), 0u);
    c.f[20] = ld32((c.r[18].w[0] + 168u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E71CCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001E71CCu) [[unlikely]] return; }
L_001E71CC:
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 12u), c.f[20]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E7200; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E7200; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7200u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E7200u) [[unlikely]] return; }
L_001E7200:
    st32((c.r[17].w[0] + 8u), 0u);
    c.f[20] = ld32((c.r[18].w[0] + 172u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7210u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001E7210u) [[unlikely]] return; }
L_001E7210:
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 12u), c.f[20]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E7244; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E7244; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7244u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E7244u) [[unlikely]] return; }
L_001E7244:
    st32((c.r[17].w[0] + 8u), 0u);
    c.f[20] = ld32((c.r[18].w[0] + 176u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7254u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001E7254u) [[unlikely]] return; }
L_001E7254:
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 12u), c.f[20]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E7288; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001E7288; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7288u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E7288u) [[unlikely]] return; }
L_001E7288:
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001E72B0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 160u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[29].w[0] + 152u);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E72E4u); st32((c.r[29].w[0] + 164u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x001E72E4u) [[unlikely]] return; }
L_001E72E4:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[29].w[0] + 152u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7300u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001E7300u) [[unlikely]] return; }
L_001E7300:
    c.r[3].d[0] = ld16((c.r[29].w[0] + 148u));
    set32(c.r[4], c.r[29].w[0] + 136u);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], c.r[29].w[0] + 152u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E731Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001E731Cu) [[unlikely]] return; }
L_001E731C:
    set32(c.r[3], ld32((c.r[29].w[0] + 136u)));
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[2], ld32((c.r[29].w[0] + 140u)));
    set32(c.r[5], c.r[29].w[0] + 152u);
    st32((c.r[29].w[0] + 152u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7338u); st32((c.r[29].w[0] + 156u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001E7338u) [[unlikely]] return; }
L_001E7338:
    set32(c.r[2], ld32((c.r[29].w[0] + 132u)));
    set32(c.r[4], c.r[29].w[0] + 120u);
    set32(c.r[5], c.r[29].w[0] + 152u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E734Cu); st32((c.r[16].w[0] + 152u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001E734Cu) [[unlikely]] return; }
L_001E734C:
    set32(c.r[3], ld32((c.r[29].w[0] + 120u)));
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[5], c.r[29].w[0] + 152u);
    st32((c.r[29].w[0] + 152u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7368u); st32((c.r[29].w[0] + 156u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001E7368u) [[unlikely]] return; }
L_001E7368:
    set32(c.r[2], ld32((c.r[29].w[0] + 116u)));
    set32(c.r[4], c.r[29].w[0] + 104u);
    set32(c.r[5], c.r[29].w[0] + 152u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E737Cu); st32((c.r[16].w[0] + 156u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001E737Cu) [[unlikely]] return; }
L_001E737C:
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[5], c.r[29].w[0] + 152u);
    st32((c.r[29].w[0] + 152u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7398u); st32((c.r[29].w[0] + 156u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001E7398u) [[unlikely]] return; }
L_001E7398:
    c.f[0] = ld32((c.r[29].w[0] + 100u));
    set32(c.r[4], c.r[29].w[0] + 88u);
    set32(c.r[5], c.r[29].w[0] + 152u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E73ACu); st32((c.r[16].w[0] + 160u), c.f[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001E73ACu) [[unlikely]] return; }
L_001E73AC:
    set32(c.r[3], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[2], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[5], c.r[29].w[0] + 152u);
    st32((c.r[29].w[0] + 152u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E73C8u); st32((c.r[29].w[0] + 156u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001E73C8u) [[unlikely]] return; }
L_001E73C8:
    c.f[0] = ld32((c.r[29].w[0] + 84u));
    set32(c.r[4], c.r[29].w[0] + 72u);
    set32(c.r[5], c.r[29].w[0] + 152u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E73DCu); st32((c.r[16].w[0] + 164u), c.f[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001E73DCu) [[unlikely]] return; }
L_001E73DC:
    set32(c.r[3], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[2], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[5], c.r[29].w[0] + 152u);
    st32((c.r[29].w[0] + 152u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E73F8u); st32((c.r[29].w[0] + 156u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001E73F8u) [[unlikely]] return; }
L_001E73F8:
    c.f[0] = ld32((c.r[29].w[0] + 68u));
    set32(c.r[4], c.r[29].w[0] + 56u);
    set32(c.r[5], c.r[29].w[0] + 152u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E740Cu); st32((c.r[16].w[0] + 168u), c.f[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001E740Cu) [[unlikely]] return; }
L_001E740C:
    set32(c.r[3], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[2], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[5], c.r[29].w[0] + 152u);
    st32((c.r[29].w[0] + 152u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7428u); st32((c.r[29].w[0] + 156u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001E7428u) [[unlikely]] return; }
L_001E7428:
    c.f[0] = ld32((c.r[29].w[0] + 52u));
    set32(c.r[4], c.r[29].w[0] + 40u);
    set32(c.r[5], c.r[29].w[0] + 152u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E743Cu); st32((c.r[16].w[0] + 172u), c.f[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001E743Cu) [[unlikely]] return; }
L_001E743C:
    set32(c.r[3], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[2], ld32((c.r[29].w[0] + 44u)));
    set32(c.r[5], c.r[29].w[0] + 152u);
    st32((c.r[29].w[0] + 152u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7458u); st32((c.r[29].w[0] + 156u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001E7458u) [[unlikely]] return; }
L_001E7458:
    c.f[0] = ld32((c.r[29].w[0] + 36u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E746Cu); st32((c.r[16].w[0] + 176u), c.f[0]);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001E746Cu) [[unlikely]] return; }
L_001E746C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_001E7480:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 281u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7498u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 352u, depth + 1u); else { c.pc = 0x001CF1C0u; return; } if (c.pc != 0x001E7498u) [[unlikely]] return; }
L_001E7498:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 14640u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E74ACu); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0031(c, 329u, depth + 1u); else { c.pc = 0x001E7540u; return; } if (c.pc != 0x001E74ACu) [[unlikely]] return; }
L_001E74AC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E74BCu); set32(c.r[5], c.r[5].w[0] + 22912u);  if (depth < kMaxDepth) unit_002C(c, 63u, depth + 1u); else { c.pc = 0x001D0A40u; return; } if (c.pc != 0x001E74BCu) [[unlikely]] return; }
L_001E74BC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E74D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001E7520; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 14640u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E74FCu); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0031(c, 330u, depth + 1u); else { c.pc = 0x001E7550u; return; } if (c.pc != 0x001E74FCu) [[unlikely]] return; }
L_001E74FC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7508u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 358u, depth + 1u); else { c.pc = 0x001CF260u; return; } if (c.pc != 0x001E7508u) [[unlikely]] return; }
L_001E7508:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001E7524; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7520u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x001E7520u) [[unlikely]] return; }
L_001E7520:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001E7524:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E7540:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 148u), 0u);  c.pc = t; return; }
L_001E7550:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 148u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 148u), 0u);  if (t) { goto L_001E758C; } }
L_001E7574:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7580u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 334u, depth + 1u); else { c.pc = 0x001E75C0u; return; } if (c.pc != 0x001E7580u) [[unlikely]] return; }
L_001E7580:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7588u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001E7588u) [[unlikely]] return; }
L_001E7588:
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001E758C:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[16], ld32((c.r[17].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E7574u | kUnwind; return; } goto L_001E7574; }
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001E75C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001E75EC; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001E75E8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001E75E8u) [[unlikely]] return; }
L_001E75E8:
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 1;
L_001E75EC:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001E7610; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7608u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001E7608u) [[unlikely]] return; }
L_001E7608:
    st32((c.r[16].w[0] + 12u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_001E7610:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E7620:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7630u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001E7630u) [[unlikely]] return; }
L_001E7630:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E7640:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7654u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 330u, depth + 1u); else { c.pc = 0x001E7550u; return; } if (c.pc != 0x001E7654u) [[unlikely]] return; }
L_001E7654:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E765Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 329u, depth + 1u); else { c.pc = 0x001E7540u; return; } if (c.pc != 0x001E765Cu) [[unlikely]] return; }
L_001E765C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7668u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001E7668u) [[unlikely]] return; }
L_001E7668:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E7680:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u + 261u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E76ACu); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001E76ACu) [[unlikely]] return; }
L_001E76AC:
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E76B8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 329u, depth + 1u); else { c.pc = 0x001CABB0u; return; } if (c.pc != 0x001E76B8u) [[unlikely]] return; }
L_001E76B8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[20], ld32((c.r[2].w[0] + 184u)));  goto L_001E76E8; }
    set32(c.r[6], ld32((c.r[16].w[0] + 56u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E76D4u); set32(c.r[5], c.r[5].w[0] + 23047u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001E76D4u) [[unlikely]] return; }
L_001E76D4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E76E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001E76E0u) [[unlikely]] return; }
L_001E76E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_001E7A70; } }
L_001E76E8:
    set32(c.r[19], ld32((c.r[2].w[0] + 188u)));
    set32(c.r[18], ld32((c.r[2].w[0] + 192u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E76F8u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001E76F8u) [[unlikely]] return; }
L_001E76F8:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 84u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7714u); st32((c.r[2].w[0] + 4u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001E7714u) [[unlikely]] return; }
L_001E7714:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  goto L_001E772C; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7728u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 217u, depth + 1u); else { c.pc = 0x00212A20u; return; } if (c.pc != 0x001E7728u) [[unlikely]] return; }
L_001E7728:
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 1;
L_001E772C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7734u); set32(c.r[4], 0u + 84u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001E7734u) [[unlikely]] return; }
L_001E7734:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 12u), c.r[2].w[0]);  goto L_001E774C; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7748u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 217u, depth + 1u); else { c.pc = 0x00212A20u; return; } if (c.pc != 0x001E7748u) [[unlikely]] return; }
L_001E7748:
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 1;
L_001E774C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7754u); set32(c.r[4], 0u + 84u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001E7754u) [[unlikely]] return; }
L_001E7754:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  goto L_001E776C; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7768u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 217u, depth + 1u); else { c.pc = 0x00212A20u; return; } if (c.pc != 0x001E7768u) [[unlikely]] return; }
L_001E7768:
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 1;
L_001E776C:
    set32(c.r[2], ld32((c.r[16].w[0] + 148u)));
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 148u), c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7784u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 231u, depth + 1u); else { c.pc = 0x00212BB0u; return; } if (c.pc != 0x001E7784u) [[unlikely]] return; }
L_001E7784:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7790u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 231u, depth + 1u); else { c.pc = 0x00212BB0u; return; } if (c.pc != 0x001E7790u) [[unlikely]] return; }
L_001E7790:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E779Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 231u, depth + 1u); else { c.pc = 0x00212BB0u; return; } if (c.pc != 0x001E779Cu) [[unlikely]] return; }
L_001E779C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.f[20] = c.r[2].w[0];
    set32(c.r[2], 0u + 1u);
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 4u)));  goto L_001E77D4; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 4u)));  goto L_001E77C4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (t) { goto L_001E77E8; } }
L_001E77C4:
    c.f[20] = 0u;
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_001E77E4; } }
L_001E77D4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[3].w[0];
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
L_001E77E4:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 1;
L_001E77E8:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E77F4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 245u, depth + 1u); else { c.pc = 0x00212D50u; return; } if (c.pc != 0x001E77F4u) [[unlikely]] return; }
L_001E77F4:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7800u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 248u, depth + 1u); else { c.pc = 0x00212DD0u; return; } if (c.pc != 0x001E7800u) [[unlikely]] return; }
L_001E7800:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E781Cu); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_003C(c, 203u, depth + 1u); else { c.pc = 0x002125C0u; return; } if (c.pc != 0x001E781Cu) [[unlikely]] return; }
L_001E781C:
    c.f[14] = ld32((c.r[16].w[0] + 64u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[15] = ld32((c.r[16].w[0] + 76u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[13] = c.r[2].w[0];
    c.f[12] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E783Cu); c.f[16] = c.f[20];  if (depth < kMaxDepth) unit_003C(c, 206u, depth + 1u); else { c.pc = 0x00212630u; return; } if (c.pc != 0x001E783Cu) [[unlikely]] return; }
L_001E783C:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E784Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_003C(c, 245u, depth + 1u); else { c.pc = 0x00212D50u; return; } if (c.pc != 0x001E784Cu) [[unlikely]] return; }
L_001E784C:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7858u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 248u, depth + 1u); else { c.pc = 0x00212DD0u; return; } if (c.pc != 0x001E7858u) [[unlikely]] return; }
L_001E7858:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7874u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_003C(c, 203u, depth + 1u); else { c.pc = 0x002125C0u; return; } if (c.pc != 0x001E7874u) [[unlikely]] return; }
L_001E7874:
    c.f[14] = ld32((c.r[16].w[0] + 68u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[15] = ld32((c.r[16].w[0] + 80u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[13] = c.r[2].w[0];
    c.f[12] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7894u); c.f[16] = c.f[20];  if (depth < kMaxDepth) unit_003C(c, 206u, depth + 1u); else { c.pc = 0x00212630u; return; } if (c.pc != 0x001E7894u) [[unlikely]] return; }
L_001E7894:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E78A4u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_003C(c, 245u, depth + 1u); else { c.pc = 0x00212D50u; return; } if (c.pc != 0x001E78A4u) [[unlikely]] return; }
L_001E78A4:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E78B0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 248u, depth + 1u); else { c.pc = 0x00212DD0u; return; } if (c.pc != 0x001E78B0u) [[unlikely]] return; }
L_001E78B0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E78CCu); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_003C(c, 203u, depth + 1u); else { c.pc = 0x002125C0u; return; } if (c.pc != 0x001E78CCu) [[unlikely]] return; }
L_001E78CC:
    c.f[14] = ld32((c.r[16].w[0] + 72u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[15] = ld32((c.r[16].w[0] + 84u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = 0u;
    c.f[13] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E78ECu); c.f[16] = c.f[20];  if (depth < kMaxDepth) unit_003C(c, 206u, depth + 1u); else { c.pc = 0x00212630u; return; } if (c.pc != 0x001E78ECu) [[unlikely]] return; }
L_001E78EC:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[5], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E78FCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 245u, depth + 1u); else { c.pc = 0x00212D50u; return; } if (c.pc != 0x001E78FCu) [[unlikely]] return; }
L_001E78FC:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7908u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 248u, depth + 1u); else { c.pc = 0x00212DD0u; return; } if (c.pc != 0x001E7908u) [[unlikely]] return; }
L_001E7908:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7924u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_003C(c, 203u, depth + 1u); else { c.pc = 0x002125C0u; return; } if (c.pc != 0x001E7924u) [[unlikely]] return; }
L_001E7924:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.f[13] = ld32((c.r[28].w[0] - 32200u));  goto L_001E79DC; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.f[13] = ld32((c.r[28].w[0] - 32200u));  goto L_001E7944; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001E7A64; } }
L_001E7944:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[14] = c.r[2].w[0];
    c.f[15] = c.f[12];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7960u); c.f[16] = c.f[12];  if (depth < kMaxDepth) unit_003C(c, 206u, depth + 1u); else { c.pc = 0x00212630u; return; } if (c.pc != 0x001E7960u) [[unlikely]] return; }
L_001E7960:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = 0u;
    c.f[12] = ld32((c.r[28].w[0] - 32196u));
    c.f[16] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7984u); c.f[15] = c.f[14];  if (depth < kMaxDepth) unit_003C(c, 206u, depth + 1u); else { c.pc = 0x00212630u; return; } if (c.pc != 0x001E7984u) [[unlikely]] return; }
L_001E7984:
    set32(c.r[2], ld32((c.r[19].w[0] + 160u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[2].d[0] = c.r[2].d[0] << 40;
    c.r[2].d[0] = c.r[2].d[0] >> 40;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[19].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] << 40;
    c.r[2].d[0] = c.r[2].d[0] >> 40;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[19].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 168u)));
    c.r[2].d[0] = c.r[2].d[0] << 40;
    c.r[2].d[0] = c.r[2].d[0] >> 40;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[19].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] << 40;
    c.r[2].d[0] = c.r[2].d[0] >> 40;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 22;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 172u), c.r[2].w[0]);  if (t) { goto L_001E7A60; } }
L_001E79DC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = 0u;
    c.f[14] = c.f[12];
    c.f[15] = c.f[12];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E79F8u); c.f[16] = c.f[12];  if (depth < kMaxDepth) unit_003C(c, 206u, depth + 1u); else { c.pc = 0x00212630u; return; } if (c.pc != 0x001E79F8u) [[unlikely]] return; }
L_001E79F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[15] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = ld32((c.r[28].w[0] - 32196u));
    c.f[16] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7A20u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 206u, depth + 1u); else { c.pc = 0x00212630u; return; } if (c.pc != 0x001E7A20u) [[unlikely]] return; }
L_001E7A20:
    set32(c.r[2], ld32((c.r[19].w[0] + 160u)));
    c.r[2].d[0] = c.r[2].d[0] << 40;
    c.r[2].d[0] = c.r[2].d[0] >> 40;
    st32((c.r[19].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] << 40;
    c.r[2].d[0] = c.r[2].d[0] >> 40;
    st32((c.r[19].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 168u)));
    c.r[2].d[0] = c.r[2].d[0] << 40;
    c.r[2].d[0] = c.r[2].d[0] >> 40;
    st32((c.r[19].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] << 40;
    c.r[2].d[0] = c.r[2].d[0] >> 40;
    st32((c.r[19].w[0] + 172u), c.r[2].w[0]);
    c.budget -= 16;
L_001E7A60:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001E7A64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7A6Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001E7A6Cu) [[unlikely]] return; }
L_001E7A6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_001E7A70:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001E7A90:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[4], 0u + 261u);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7AB8u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001E7AB8u) [[unlikely]] return; }
L_001E7AB8:
    set32(c.r[4], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E7D1C; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[5].d[0]) { set32(c.r[16], ld32((c.r[18].w[0] + 148u)));  goto L_001E7CFC; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[17], ld32((c.r[18].w[0] + 148u)));  goto L_001E7B18; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_001E7D94; } }
L_001E7AE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7AECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 329u, depth + 1u); else { c.pc = 0x001CABB0u; return; } if (c.pc != 0x001E7AECu) [[unlikely]] return; }
L_001E7AEC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], ld32((c.r[17].w[0] + 20u)));  goto L_001E7B18; }
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[3], 0u - 65u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 188u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    st32((c.r[4].w[0] + 292u), c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 9;
L_001E7B18:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[5], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E7AE4u | kUnwind; return; } goto L_001E7AE4; }
    c.f[1] = ld32((c.r[18].w[0] + 56u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], ld32((c.r[18].w[0] + 4u)));  goto L_001E7B44; }
    st32((c.r[18].w[0] + 56u), c.f[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 2;
L_001E7B44:
    c.r[3].d[0] = c.r[4].d[0] & 32768ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.f[21] = ld32((c.r[28].w[0] - 32196u));  goto L_001E7B54; }
    c.f[21] = 0u;
    c.budget -= 1;
L_001E7B54:
    c.r[3].d[0] = c.r[4].d[0] & 16384ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.f[20] = ld32((c.r[28].w[0] - 32200u));  goto L_001E7B68; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[20] = c.r[3].w[0];
    c.budget -= 2;
L_001E7B68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[18].w[0] + 148u)));  if (t) { goto L_001E7C28; } }
L_001E7B70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7B78u);  if (depth < kMaxDepth) unit_0030(c, 339u, depth + 1u); else { c.pc = 0x001E2D40u; return; } if (c.pc != 0x001E7B78u) [[unlikely]] return; }
L_001E7B78:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.f[1] = c.r[2].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 56u));
    c.f[12] = c.f[21];
    c.f[13] = c.f[20];
    c.f[14] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7BACu);  if (depth < kMaxDepth) unit_003C(c, 233u, depth + 1u); else { c.pc = 0x00212C00u; return; } if (c.pc != 0x001E7BACu) [[unlikely]] return; }
L_001E7BAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7BB4u);  if (depth < kMaxDepth) unit_0030(c, 339u, depth + 1u); else { c.pc = 0x001E2D40u; return; } if (c.pc != 0x001E7BB4u) [[unlikely]] return; }
L_001E7BB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.f[1] = c.r[2].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 56u));
    c.f[12] = c.f[21];
    c.f[13] = c.f[20];
    c.f[14] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7BE8u);  if (depth < kMaxDepth) unit_003C(c, 233u, depth + 1u); else { c.pc = 0x00212C00u; return; } if (c.pc != 0x001E7BE8u) [[unlikely]] return; }
L_001E7BE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7BF0u);  if (depth < kMaxDepth) unit_0030(c, 339u, depth + 1u); else { c.pc = 0x001E2D40u; return; } if (c.pc != 0x001E7BF0u) [[unlikely]] return; }
L_001E7BF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.f[1] = c.r[2].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 56u));
    c.f[12] = c.f[21];
    c.f[13] = c.f[20];
    c.f[14] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7C24u);  if (depth < kMaxDepth) unit_003C(c, 233u, depth + 1u); else { c.pc = 0x00212C00u; return; } if (c.pc != 0x001E7C24u) [[unlikely]] return; }
L_001E7C24:
    set32(c.r[16], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 1;
L_001E7C28:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E7B70u | kUnwind; return; } goto L_001E7B70; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_001E7D90; } }
L_001E7C40:
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E7C78; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E7C78; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[16], ld32((c.r[16].w[0] + 20u)));  goto L_001E7CFC; }
L_001E7C78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7C80u);  if (depth < kMaxDepth) unit_0030(c, 339u, depth + 1u); else { c.pc = 0x001E2D40u; return; } if (c.pc != 0x001E7C80u) [[unlikely]] return; }
L_001E7C80:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 56u));
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7CACu); st32((c.r[2].w[0] + 72u), c.f[0]);  if (depth < kMaxDepth) unit_0030(c, 339u, depth + 1u); else { c.pc = 0x001E2D40u; return; } if (c.pc != 0x001E7CACu) [[unlikely]] return; }
L_001E7CAC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 56u));
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7CD8u); st32((c.r[2].w[0] + 72u), c.f[0]);  if (depth < kMaxDepth) unit_0030(c, 339u, depth + 1u); else { c.pc = 0x001E2D40u; return; } if (c.pc != 0x001E7CD8u) [[unlikely]] return; }
L_001E7CD8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.f[1] = c.r[4].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 56u));
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 72u), c.f[0]);
    set32(c.r[16], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 9;
L_001E7CFC:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E7C40u | kUnwind; return; } goto L_001E7C40; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001E7D90; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_001E7D90; } }
L_001E7D1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[18].w[0] + 148u)));  if (t) { goto L_001E7D3C; } }
L_001E7D24:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], ld32((c.r[17].w[0] + 20u)));  goto L_001E7D3C; }
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7D38u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 325u, depth + 1u); else { c.pc = 0x001CAB10u; return; } if (c.pc != 0x001E7D38u) [[unlikely]] return; }
L_001E7D38:
    set32(c.r[17], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 1;
L_001E7D3C:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E7D24u | kUnwind; return; } goto L_001E7D24; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7D4Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 330u, depth + 1u); else { c.pc = 0x001E7550u; return; } if (c.pc != 0x001E7D4Cu) [[unlikely]] return; }
L_001E7D4C:
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001E7D88; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7D64u);  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x001E7D64u) [[unlikely]] return; }
L_001E7D64:
    set32(c.r[5], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7D70u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 332u, depth + 1u); else { c.pc = 0x001FBE70u; return; } if (c.pc != 0x001E7D70u) [[unlikely]] return; }
L_001E7D70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E7D84; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[2].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 3;
L_001E7D84:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001E7D88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7D90u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001E7D90u) [[unlikely]] return; }
L_001E7D90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_001E7D94:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001E7DB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 271u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7DC8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 337u, depth + 1u); else { c.pc = 0x001C6120u; return; } if (c.pc != 0x001E7DC8u) [[unlikely]] return; }
L_001E7DC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 14768u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7DDCu); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0031(c, 403u, depth + 1u); else { c.pc = 0x001E7E20u; return; } if (c.pc != 0x001E7DDCu) [[unlikely]] return; }
L_001E7DDC:
    set32(c.r[3], 0u + 4u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4C4C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[16].w[0] + 160u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 17229ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7E00u); set32(c.r[5], c.r[5].w[0] + 23072u);  if (depth < kMaxDepth) unit_002C(c, 63u, depth + 1u); else { c.pc = 0x001D0A40u; return; } if (c.pc != 0x001E7E00u) [[unlikely]] return; }
L_001E7E00:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E7E20:
    st32((c.r[4].w[0] + 180u), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 184u), 0u);  c.pc = t; return; }
L_001E7E30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001E7E80; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 14768u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7E5Cu); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0031(c, 408u, depth + 1u); else { c.pc = 0x001E7EA0u; return; } if (c.pc != 0x001E7E5Cu) [[unlikely]] return; }
L_001E7E5C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7E68u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0029(c, 349u, depth + 1u); else { c.pc = 0x001C62B0u; return; } if (c.pc != 0x001E7E68u) [[unlikely]] return; }
L_001E7E68:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001E7E84; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7E80u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x001E7E80u) [[unlikely]] return; }
L_001E7E80:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001E7E84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E7EA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E7EB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7EC0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001E7EC0u) [[unlikely]] return; }
L_001E7EC0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E7ED0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7EE4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 408u, depth + 1u); else { c.pc = 0x001E7EA0u; return; } if (c.pc != 0x001E7EE4u) [[unlikely]] return; }
L_001E7EE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7EECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 403u, depth + 1u); else { c.pc = 0x001E7E20u; return; } if (c.pc != 0x001E7EECu) [[unlikely]] return; }
L_001E7EEC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7EF8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001E7EF8u) [[unlikely]] return; }
L_001E7EF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E7F10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    st32((c.r[4].w[0] + 180u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 1332u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7F30u); st32((c.r[4].w[0] + 184u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001E7F30u) [[unlikely]] return; }
L_001E7F30:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E7F40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7F5Cu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x001E7F5Cu) [[unlikely]] return; }
L_001E7F5C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 14704u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 52u), c.r[16].w[0]);
    st32((c.r[17].w[0] + 56u), 0u);
    st32((c.r[17].w[0] + 60u), 0u);
    st32((c.r[17].w[0] + 80u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E7F90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_0032(c, 3u, depth); } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 14704u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 60u)));  goto L_001E7FDC; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7FD4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001E7FD4u) [[unlikely]] return; }
L_001E7FD4:
    st32((c.r[17].w[0] + 56u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 2;
L_001E7FDC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001E7FFC; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7FF4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001E7FF4u) [[unlikely]] return; }
L_001E7FF4:
    st32((c.r[17].w[0] + 60u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_001E7FFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8004u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x001E8004u) [[unlikely]] return; }
    [[clang::musttail]] return unit_0032(c, 2u, depth);
}

}
