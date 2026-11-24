#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_007A[4096] = {
    1, 0, 0, 0, 0, 0, 2, 3, 0, 0, 0, 4, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0,
    0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    14, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 19, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0,
    0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0,
    24, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 26, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 32, 0, 0, 0, 0, 0, 33,
    0, 0, 0, 0, 0, 34, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 36, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 41, 0, 0, 0, 0, 0, 42,
    0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 45,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 51, 0, 0,
    0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 54, 0, 55, 56, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0,
    61, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0,
    69, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0,
    73, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    76, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0,
    0, 83, 0, 0, 0, 84, 0, 0, 85, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0,
    0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    96, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0,
    0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 113, 0,
    0, 114, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 125, 0,
    0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    130, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 138, 0,
    0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0,
    0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 152, 0,
    0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    157, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 167,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 186, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0,
    0, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 193, 0, 0, 194, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 199,
    0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 203, 0, 0, 204, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 208, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0,
    0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0,
    0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 223,
    0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 226, 0,
    0, 227, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    231, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 234, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 236, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 241,
    0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 243, 0, 0, 244, 0, 0, 0, 0, 0, 245, 0, 0, 246, 0, 0, 0, 0, 0, 247, 0, 0, 248,
    0, 0, 0, 0, 0, 249, 0, 0, 250, 0, 0, 0, 0, 0, 251, 0, 0, 252, 0, 0, 0, 0, 0, 253, 0, 0, 254, 0, 0, 0, 0, 0,
    255, 0, 0, 256, 0, 0, 0, 0, 0, 257, 0, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0,
    0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    263, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0,
    267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 276, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 280, 0, 0, 281, 0, 282, 0, 283, 0, 284, 0, 0, 0, 0, 0, 0, 0,
    285, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 289, 0, 0, 0, 0, 0, 290, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 295, 0, 0, 0, 0, 296, 0, 0, 297, 0, 0, 0, 0, 298,
    0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 303, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 308, 0, 0, 0, 0, 309, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 310, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 313, 0, 314, 0, 315, 0, 316, 0, 317, 0, 318, 0, 319, 0, 320, 0, 321, 0, 322, 0, 323, 0, 0, 0, 0, 324, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 327, 0, 328, 0, 329, 0, 330,
    0, 331, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0,
    334, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 343, 0, 0,
    0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 346, 0, 0, 347, 0, 0, 348, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 351, 0, 0, 0,
    352, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 358, 0, 0, 0, 359, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0,
    363, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 368, 0, 369, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0,
    0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 380, 0, 0, 381, 0, 0, 382, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 385, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 390,
    0, 0, 0, 0, 0, 391, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 396, 0,
    397, 0, 398, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 403, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0,
};

void unit_007A(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00308000;
    case 2u: goto L_00308018;
    case 3u: goto L_0030801C;
    case 4u: goto L_0030802C;
    case 5u: goto L_00308030;
    case 6u: goto L_00308050;
    case 7u: goto L_00308094;
    case 8u: goto L_003080C8;
    case 9u: goto L_003080EC;
    case 10u: goto L_00308110;
    case 11u: goto L_00308130;
    case 12u: goto L_00308150;
    case 13u: goto L_0030819C;
    case 14u: goto L_00308200;
    case 15u: goto L_00308214;
    case 16u: goto L_00308290;
    case 17u: goto L_003082B4;
    case 18u: goto L_003082C8;
    case 19u: goto L_003082D4;
    case 20u: goto L_003082F0;
    case 21u: goto L_00308304;
    case 22u: goto L_00308340;
    case 23u: goto L_0030836C;
    case 24u: goto L_00308380;
    case 25u: goto L_003083A0;
    case 26u: goto L_00308418;
    case 27u: goto L_00308424;
    case 28u: goto L_0030843C;
    case 29u: goto L_00308454;
    case 30u: goto L_00308460;
    case 31u: goto L_003084D8;
    case 32u: goto L_003084E4;
    case 33u: goto L_003084FC;
    case 34u: goto L_00308514;
    case 35u: goto L_00308520;
    case 36u: goto L_00308598;
    case 37u: goto L_003085A4;
    case 38u: goto L_003085BC;
    case 39u: goto L_003085E0;
    case 40u: goto L_00308658;
    case 41u: goto L_00308664;
    case 42u: goto L_0030867C;
    case 43u: goto L_003086A0;
    case 44u: goto L_003086D8;
    case 45u: goto L_003086FC;
    case 46u: goto L_00308728;
    case 47u: goto L_00308734;
    case 48u: goto L_0030874C;
    case 49u: goto L_00308770;
    case 50u: goto L_003087E8;
    case 51u: goto L_003087F4;
    case 52u: goto L_0030880C;
    case 53u: goto L_00308830;
    case 54u: goto L_0030888C;
    case 55u: goto L_00308894;
    case 56u: goto L_00308898;
    case 57u: goto L_003088A4;
    case 58u: goto L_003088BC;
    case 59u: goto L_003088E0;
    case 60u: goto L_003088F0;
    case 61u: goto L_00308900;
    case 62u: goto L_00308910;
    case 63u: goto L_00308920;
    case 64u: goto L_00308930;
    case 65u: goto L_00308940;
    case 66u: goto L_00308950;
    case 67u: goto L_00308960;
    case 68u: goto L_00308970;
    case 69u: goto L_00308980;
    case 70u: goto L_00308990;
    case 71u: goto L_003089C0;
    case 72u: goto L_003089E0;
    case 73u: goto L_00308A00;
    case 74u: goto L_00308A14;
    case 75u: goto L_00308A40;
    case 76u: goto L_00308A80;
    case 77u: goto L_00308AA0;
    case 78u: goto L_00308AD0;
    case 79u: goto L_00308AE4;
    case 80u: goto L_00308B20;
    case 81u: goto L_00308B8C;
    case 82u: goto L_00308BF4;
    case 83u: goto L_00308C04;
    case 84u: goto L_00308C14;
    case 85u: goto L_00308C20;
    case 86u: goto L_00308C2C;
    case 87u: goto L_00308C44;
    case 88u: goto L_00308C54;
    case 89u: goto L_00308C60;
    case 90u: goto L_00308C98;
    case 91u: goto L_00308CF0;
    case 92u: goto L_00308D14;
    case 93u: goto L_00308D2C;
    case 94u: goto L_00308D44;
    case 95u: goto L_00308D50;
    case 96u: goto L_00308E00;
    case 97u: goto L_00308E10;
    case 98u: goto L_00308E58;
    case 99u: goto L_00308E68;
    case 100u: goto L_00308EB4;
    case 101u: goto L_00308ECC;
    case 102u: goto L_00308EE8;
    case 103u: goto L_00308F10;
    case 104u: goto L_00308F34;
    case 105u: goto L_00308F4C;
    case 106u: goto L_00308F84;
    case 107u: goto L_00308FD0;
    case 108u: goto L_00309048;
    case 109u: goto L_00309054;
    case 110u: goto L_0030906C;
    case 111u: goto L_00309090;
    case 112u: goto L_003090EC;
    case 113u: goto L_003090F8;
    case 114u: goto L_00309104;
    case 115u: goto L_0030911C;
    case 116u: goto L_00309140;
    case 117u: goto L_00309150;
    case 118u: goto L_00309160;
    case 119u: goto L_00309190;
    case 120u: goto L_003091B0;
    case 121u: goto L_003091D0;
    case 122u: goto L_003091E4;
    case 123u: goto L_00309210;
    case 124u: goto L_0030926C;
    case 125u: goto L_00309278;
    case 126u: goto L_00309284;
    case 127u: goto L_0030929C;
    case 128u: goto L_003092C0;
    case 129u: goto L_003092D0;
    case 130u: goto L_00309300;
    case 131u: goto L_00309320;
    case 132u: goto L_00309340;
    case 133u: goto L_00309354;
    case 134u: goto L_00309390;
    case 135u: goto L_003093AC;
    case 136u: goto L_00309510;
    case 137u: goto L_0030956C;
    case 138u: goto L_00309578;
    case 139u: goto L_00309584;
    case 140u: goto L_0030959C;
    case 141u: goto L_003095C0;
    case 142u: goto L_003095D0;
    case 143u: goto L_003095E0;
    case 144u: goto L_00309610;
    case 145u: goto L_00309630;
    case 146u: goto L_00309650;
    case 147u: goto L_00309664;
    case 148u: goto L_00309690;
    case 149u: goto L_003096F8;
    case 150u: goto L_00309710;
    case 151u: goto L_0030976C;
    case 152u: goto L_00309778;
    case 153u: goto L_00309784;
    case 154u: goto L_0030979C;
    case 155u: goto L_003097C0;
    case 156u: goto L_003097D0;
    case 157u: goto L_00309800;
    case 158u: goto L_00309820;
    case 159u: goto L_00309840;
    case 160u: goto L_00309854;
    case 161u: goto L_00309890;
    case 162u: goto L_00309984;
    case 163u: goto L_003099B0;
    case 164u: goto L_00309A20;
    case 165u: goto L_00309A3C;
    case 166u: goto L_00309A5C;
    case 167u: goto L_00309A7C;
    case 168u: goto L_00309AB0;
    case 169u: goto L_00309ACC;
    case 170u: goto L_00309B20;
    case 171u: goto L_00309B3C;
    case 172u: goto L_00309B74;
    case 173u: goto L_00309BD4;
    case 174u: goto L_00309BE4;
    case 175u: goto L_00309C1C;
    case 176u: goto L_00309C2C;
    case 177u: goto L_00309CA0;
    case 178u: goto L_00309CD8;
    case 179u: goto L_00309D00;
    case 180u: goto L_00309D28;
    case 181u: goto L_00309D34;
    case 182u: goto L_00309D64;
    case 183u: goto L_00309DB0;
    case 184u: goto L_00309E18;
    case 185u: goto L_00309E28;
    case 186u: goto L_00309E30;
    case 187u: goto L_00309E38;
    case 188u: goto L_00309E70;
    case 189u: goto L_00309E88;
    case 190u: goto L_00309EA4;
    case 191u: goto L_00309ED4;
    case 192u: goto L_00309F50;
    case 193u: goto L_00309F8C;
    case 194u: goto L_00309F98;
    case 195u: goto L_00309FA0;
    case 196u: goto L_00309FB0;
    case 197u: goto L_0030A00C;
    case 198u: goto L_0030A068;
    case 199u: goto L_0030A07C;
    case 200u: goto L_0030A08C;
    case 201u: goto L_0030A0A0;
    case 202u: goto L_0030A0D4;
    case 203u: goto L_0030A118;
    case 204u: goto L_0030A124;
    case 205u: goto L_0030A13C;
    case 206u: goto L_0030A160;
    case 207u: goto L_0030A1BC;
    case 208u: goto L_0030A1C8;
    case 209u: goto L_0030A1D4;
    case 210u: goto L_0030A1EC;
    case 211u: goto L_0030A210;
    case 212u: goto L_0030A220;
    case 213u: goto L_0030A230;
    case 214u: goto L_0030A240;
    case 215u: goto L_0030A270;
    case 216u: goto L_0030A290;
    case 217u: goto L_0030A2B0;
    case 218u: goto L_0030A2C4;
    case 219u: goto L_0030A300;
    case 220u: goto L_0030A3D8;
    case 221u: goto L_0030A400;
    case 222u: goto L_0030A460;
    case 223u: goto L_0030A47C;
    case 224u: goto L_0030A490;
    case 225u: goto L_0030A4EC;
    case 226u: goto L_0030A4F8;
    case 227u: goto L_0030A504;
    case 228u: goto L_0030A51C;
    case 229u: goto L_0030A540;
    case 230u: goto L_0030A550;
    case 231u: goto L_0030A580;
    case 232u: goto L_0030A5A0;
    case 233u: goto L_0030A5C0;
    case 234u: goto L_0030A618;
    case 235u: goto L_0030A624;
    case 236u: goto L_0030A68C;
    case 237u: goto L_0030A698;
    case 238u: goto L_0030A790;
    case 239u: goto L_0030A7C8;
    case 240u: goto L_0030A7E4;
    case 241u: goto L_0030A7FC;
    case 242u: goto L_0030A81C;
    case 243u: goto L_0030A828;
    case 244u: goto L_0030A834;
    case 245u: goto L_0030A84C;
    case 246u: goto L_0030A858;
    case 247u: goto L_0030A870;
    case 248u: goto L_0030A87C;
    case 249u: goto L_0030A894;
    case 250u: goto L_0030A8A0;
    case 251u: goto L_0030A8B8;
    case 252u: goto L_0030A8C4;
    case 253u: goto L_0030A8DC;
    case 254u: goto L_0030A8E8;
    case 255u: goto L_0030A900;
    case 256u: goto L_0030A90C;
    case 257u: goto L_0030A924;
    case 258u: goto L_0030A930;
    case 259u: goto L_0030A948;
    case 260u: goto L_0030A954;
    case 261u: goto L_0030A978;
    case 262u: goto L_0030A984;
    case 263u: goto L_0030AA00;
    case 264u: goto L_0030AA14;
    case 265u: goto L_0030AA50;
    case 266u: goto L_0030AA6C;
    case 267u: goto L_0030AA80;
    case 268u: goto L_0030AAB0;
    case 269u: goto L_0030AB30;
    case 270u: goto L_0030AB40;
    case 271u: goto L_0030AB74;
    case 272u: goto L_0030ABA0;
    case 273u: goto L_0030AC10;
    case 274u: goto L_0030AC2C;
    case 275u: goto L_0030AC58;
    case 276u: goto L_0030AC78;
    case 277u: goto L_0030ACC0;
    case 278u: goto L_0030ACD4;
    case 279u: goto L_0030AD20;
    case 280u: goto L_0030AD3C;
    case 281u: goto L_0030AD48;
    case 282u: goto L_0030AD50;
    case 283u: goto L_0030AD58;
    case 284u: goto L_0030AD60;
    case 285u: goto L_0030AD80;
    case 286u: goto L_0030AD94;
    case 287u: goto L_0030ADE0;
    case 288u: goto L_0030AE20;
    case 289u: goto L_0030AE88;
    case 290u: goto L_0030AEA0;
    case 291u: goto L_0030AEAC;
    case 292u: goto L_0030AECC;
    case 293u: goto L_0030AF2C;
    case 294u: goto L_0030AF3C;
    case 295u: goto L_0030AF48;
    case 296u: goto L_0030AF5C;
    case 297u: goto L_0030AF68;
    case 298u: goto L_0030AF7C;
    case 299u: goto L_0030AF88;
    case 300u: goto L_0030AFB4;
    case 301u: goto L_0030B004;
    case 302u: goto L_0030B028;
    case 303u: goto L_0030B040;
    case 304u: goto L_0030B04C;
    case 305u: goto L_0030B098;
    case 306u: goto L_0030B0AC;
    case 307u: goto L_0030B0CC;
    case 308u: goto L_0030B0E0;
    case 309u: goto L_0030B0F4;
    case 310u: goto L_0030B11C;
    case 311u: goto L_0030B124;
    case 312u: goto L_0030B150;
    case 313u: goto L_0030B18C;
    case 314u: goto L_0030B194;
    case 315u: goto L_0030B19C;
    case 316u: goto L_0030B1A4;
    case 317u: goto L_0030B1AC;
    case 318u: goto L_0030B1B4;
    case 319u: goto L_0030B1BC;
    case 320u: goto L_0030B1C4;
    case 321u: goto L_0030B1CC;
    case 322u: goto L_0030B1D4;
    case 323u: goto L_0030B1DC;
    case 324u: goto L_0030B1F0;
    case 325u: goto L_0030B22C;
    case 326u: goto L_0030B25C;
    case 327u: goto L_0030B264;
    case 328u: goto L_0030B26C;
    case 329u: goto L_0030B274;
    case 330u: goto L_0030B27C;
    case 331u: goto L_0030B284;
    case 332u: goto L_0030B28C;
    case 333u: goto L_0030B2E4;
    case 334u: goto L_0030B300;
    case 335u: goto L_0030B31C;
    case 336u: goto L_0030B338;
    case 337u: goto L_0030B350;
    case 338u: goto L_0030B3AC;
    case 339u: goto L_0030B3B8;
    case 340u: goto L_0030B3D0;
    case 341u: goto L_0030B3F0;
    case 342u: goto L_0030B468;
    case 343u: goto L_0030B474;
    case 344u: goto L_0030B48C;
    case 345u: goto L_0030B4B0;
    case 346u: goto L_0030B50C;
    case 347u: goto L_0030B518;
    case 348u: goto L_0030B524;
    case 349u: goto L_0030B53C;
    case 350u: goto L_0030B560;
    case 351u: goto L_0030B570;
    case 352u: goto L_0030B580;
    case 353u: goto L_0030B590;
    case 354u: goto L_0030B5CC;
    case 355u: goto L_0030B5E0;
    case 356u: goto L_0030B60C;
    case 357u: goto L_0030B650;
    case 358u: goto L_0030B658;
    case 359u: goto L_0030B668;
    case 360u: goto L_0030B69C;
    case 361u: goto L_0030B750;
    case 362u: goto L_0030B76C;
    case 363u: goto L_0030B780;
    case 364u: goto L_0030B7A0;
    case 365u: goto L_0030B7B8;
    case 366u: goto L_0030B7E0;
    case 367u: goto L_0030B820;
    case 368u: goto L_0030B840;
    case 369u: goto L_0030B848;
    case 370u: goto L_0030B85C;
    case 371u: goto L_0030B890;
    case 372u: goto L_0030B904;
    case 373u: goto L_0030B94C;
    case 374u: goto L_0030B968;
    case 375u: goto L_0030B988;
    case 376u: goto L_0030B9B0;
    case 377u: goto L_0030B9D4;
    case 378u: goto L_0030BA20;
    case 379u: goto L_0030BA4C;
    case 380u: goto L_0030BA58;
    case 381u: goto L_0030BA64;
    case 382u: goto L_0030BA70;
    case 383u: goto L_0030BA98;
    case 384u: goto L_0030BAAC;
    case 385u: goto L_0030BAC4;
    case 386u: goto L_0030BAD0;
    case 387u: goto L_0030BB00;
    case 388u: goto L_0030BB4C;
    case 389u: goto L_0030BBE8;
    case 390u: goto L_0030BBFC;
    case 391u: goto L_0030BC14;
    case 392u: goto L_0030BC24;
    case 393u: goto L_0030BC40;
    case 394u: goto L_0030BC70;
    case 395u: goto L_0030BCEC;
    case 396u: goto L_0030BCF8;
    case 397u: goto L_0030BD00;
    case 398u: goto L_0030BD08;
    case 399u: goto L_0030BD20;
    case 400u: goto L_0030BDA8;
    case 401u: goto L_0030BDD8;
    case 402u: goto L_0030BE58;
    case 403u: goto L_0030BE78;
    case 404u: goto L_0030BEA4;
    case 405u: goto L_0030BED8;
    case 406u: goto L_0030BF14;
    case 407u: goto L_0030BF34;
    case 408u: goto L_0030BF4C;
    case 409u: goto L_0030BFCC;
    case 410u: goto L_0030BFE8;
    default: bad_entry(c, 0x00308000u); return;
    }
L_00308000:
    c.f[1] = c.r[4].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[3].w[0] + 496u), c.f[0]);
    c.budget -= 6;
L_00308018:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0030801C:
    set32(c.r[3], ld32((c.r[19].w[0] + 168u)));
    c.r[3].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 164u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00307ED8u | kUnwind; return; } [[clang::musttail]] return unit_0079(c, 355u, depth); }
L_0030802C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00308030:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00308050:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00308088; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[3].w[0] + 132u)));  if (t) { goto L_0030808C; } }
L_00308088:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0030808C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003081C8; } }
L_00308094:
    set32(c.r[16], c.r[17].w[0] << 2);
    set32(c.r[3], 0u + 6000u);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[5].w[0] + 148u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003080C0; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 172u)));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_003081C8; }
L_003080C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003080C8u);  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x003080C8u) [[unlikely]] return; }
L_003080C8:
    c.r[3].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_00308124; }
    set32(c.r[2], ld32((c.r[19].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003080ECu); set32(c.r[4], ld32((c.r[2].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x003080ECu) [[unlikely]] return; }
L_003080EC:
    c.r[3].d[0] = c.r[2].d[0] ^ 7ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00308120; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308110u); set32(c.r[4], ld32((c.r[2].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x00308110u) [[unlikely]] return; }
L_00308110:
    c.r[3].d[0] = c.r[2].d[0] ^ 3ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003081C4; } }
L_00308120:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_00308124:
    c.f[20] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x41300000u);  if (t) { goto L_003081B0; } }
L_00308130:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[19].w[0] + 76u)));
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[21], ld32((c.r[3].w[0] + 144u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308150u); set32(c.r[20], ld32((c.r[2].w[0] + 144u)));  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x00308150u) [[unlikely]] return; }
L_00308150:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[13] = 0u;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.f[2] = c.r[3].w[0];
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.f[3] = c.r[2].w[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.facc = fp::ee::add(c.fcr31, c.f[13], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[20]);
    c.r[7].d[0] = 0ull + 0ull;
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    set32(c.r[8], 0u + 1u);
    c.f[1] = c.r[2].w[0];
    c.f[12] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030819Cu); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0058(c, 252u, depth + 1u); else { c.pc = 0x002824C0u; return; } if (c.pc != 0x0030819Cu) [[unlikely]] return; }
L_0030819C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[20] = fp::ee::add(c.fcr31, c.f[20], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41300000u);
    c.budget -= 5;
L_003081B0:
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[3], ld32((c.r[19].w[0] + 164u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00308130u | kUnwind; return; } goto L_00308130; }
L_003081C4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_003081C8:
    set32(c.r[3], ld32((c.r[19].w[0] + 168u)));
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 164u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00308094u | kUnwind; return; } goto L_00308094; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00308200:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308214u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 143u, depth + 1u); else { c.pc = 0x0026D670u; return; } if (c.pc != 0x00308214u) [[unlikely]] return; }
L_00308214:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 28768u);
    set32(c.r[2], c.r[2].w[0] - 28712u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 25808u);
    set32(c.r[2], 0u + 5u);
    st32((c.r[16].w[0] + 104u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 25568u);
    set32(c.r[2], 0u + 57u);
    st32((c.r[16].w[0] + 112u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[16].w[0] + 116u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 22832u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[16].w[0] + 120u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 22784u);
    st32((c.r[16].w[0] + 124u), c.r[2].w[0]);
    set32(c.r[3], 0u - 1u);
    st32((c.r[16].w[0] + 164u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 168u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 30;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00308290:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 188u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003082B4u); set32(c.r[5], 0u + 25u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003082B4u) [[unlikely]] return; }
L_003082B4:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_003082CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003082C8u);  if (depth < kMaxDepth) unit_005B(c, 82u, depth + 1u); else { c.pc = 0x0028CF00u; return; } if (c.pc != 0x003082C8u) [[unlikely]] return; }
L_003082C8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003082CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003082D4u);  if (depth < kMaxDepth) unit_0053(c, 154u, depth + 1u); else { c.pc = 0x0026D8E0u; return; } if (c.pc != 0x003082D4u) [[unlikely]] return; }
L_003082D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003082F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308304u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 177u, depth + 1u); else { c.pc = 0x001A6280u; return; } if (c.pc != 0x00308304u) [[unlikely]] return; }
L_00308304:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    c.budget -= 3;
    if (c.r[3].sd[0] < 0) { set32(c.r[3], ld32((c.r[16].w[0] + 168u)));  goto L_00308344; }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; st32((c.r[16].w[0] + 164u), c.r[3].w[0]);  if (t) { goto L_00308340; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00308340; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[5], 0u + 25u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00308340u); set32(c.r[7], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00308340u) [[unlikely]] return; }
L_00308340:
    set32(c.r[3], ld32((c.r[16].w[0] + 168u)));
    c.budget -= 1;
L_00308344:
    c.budget -= 2;
    if (c.r[3].sd[0] < 0) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00308370; }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; st32((c.r[16].w[0] + 168u), c.r[3].w[0]);  if (t) { goto L_0030836C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0030836C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030836Cu); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_005B(c, 80u, depth + 1u); else { c.pc = 0x0028CEC0u; return; } if (c.pc != 0x0030836Cu) [[unlikely]] return; }
L_0030836C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00308370:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00308380:
    set32(c.r[3], 0u + 57u);
    st32((c.r[4].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], 0u + 90u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 168u), c.r[3].w[0]);  c.pc = t; return; }
L_003083A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0030843C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 28768u);
    set32(c.r[2], c.r[2].w[0] - 28712u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00308424; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 21632u);
    set32(c.r[2], c.r[2].w[0] + 21688u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00308424; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308418u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x00308418u) [[unlikely]] return; }
L_00308418:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308424u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00308424u) [[unlikely]] return; }
L_00308424:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00308440; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030843Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0030843Cu) [[unlikely]] return; }
L_0030843C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00308440:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00308454:
    c.budget -= 3;
L_00308460:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003084FC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 28624u);
    set32(c.r[2], c.r[2].w[0] - 28568u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_003084E4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 21632u);
    set32(c.r[2], c.r[2].w[0] + 21688u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_003084E4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003084D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x003084D8u) [[unlikely]] return; }
L_003084D8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003084E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x003084E4u) [[unlikely]] return; }
L_003084E4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00308500; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003084FCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x003084FCu) [[unlikely]] return; }
L_003084FC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00308500:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00308514:
    c.budget -= 3;
L_00308520:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003085BC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 28480u);
    set32(c.r[2], c.r[2].w[0] - 28424u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_003085A4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 21536u);
    set32(c.r[2], c.r[2].w[0] + 21592u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_003085A4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308598u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x00308598u) [[unlikely]] return; }
L_00308598:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003085A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x003085A4u) [[unlikely]] return; }
L_003085A4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003085C0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003085BCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x003085BCu) [[unlikely]] return; }
L_003085BC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003085C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003085E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0030867C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 28384u);
    set32(c.r[2], c.r[2].w[0] - 28328u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00308664; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 21536u);
    set32(c.r[2], c.r[2].w[0] + 21592u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00308664; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308658u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x00308658u) [[unlikely]] return; }
L_00308658:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308664u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00308664u) [[unlikely]] return; }
L_00308664:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00308680; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030867Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0030867Cu) [[unlikely]] return; }
L_0030867C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00308680:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003086A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0030874C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 28288u);
    set32(c.r[2], c.r[2].w[0] - 28232u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00308734; } }
L_003086D8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 22736u);
    set32(c.r[2], c.r[2].w[0] + 22792u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 96u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003086FCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0018(c, 126u, depth + 1u); else { c.pc = 0x00181170u; return; } if (c.pc != 0x003086FCu) [[unlikely]] return; }
L_003086FC:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_00308738; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308728u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x00308728u) [[unlikely]] return; }
L_00308728:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308734u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00308734u) [[unlikely]] return; }
L_00308734:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_00308738:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00308750; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030874Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0030874Cu) [[unlikely]] return; }
L_0030874C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00308750:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00308770:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0030880C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 28192u);
    set32(c.r[2], c.r[2].w[0] - 28136u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_003087F4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 22928u);
    set32(c.r[2], c.r[2].w[0] + 22984u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_003087F4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003087E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x003087E8u) [[unlikely]] return; }
L_003087E8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003087F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x003087F4u) [[unlikely]] return; }
L_003087F4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00308810; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030880Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0030880Cu) [[unlikely]] return; }
L_0030880C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00308810:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00308830:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003088BC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 28096u);
    set32(c.r[2], c.r[2].w[0] - 28040u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_003088A4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 28176u);
    set32(c.r[2], c.r[2].w[0] + 28232u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 816u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030888Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x0030888Cu) [[unlikely]] return; }
L_0030888C:
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308898u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x00308898u) [[unlikely]] return; }
    goto L_00308898;
L_00308894:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00308898:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003088A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x003088A4u) [[unlikely]] return; }
L_003088A4:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_003088C0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003088BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x003088BCu) [[unlikely]] return; }
L_003088BC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003088C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003088E0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00308830u | kUnwind; return; } goto L_00308830; }
L_003088F0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00308770u | kUnwind; return; } goto L_00308770; }
L_00308900:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00305180u | kUnwind; return; } [[clang::musttail]] return unit_0079(c, 115u, depth); }
L_00308910:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003086A0u | kUnwind; return; } goto L_003086A0; }
L_00308920:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003085E0u | kUnwind; return; } goto L_003085E0; }
L_00308930:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003053B0u | kUnwind; return; } [[clang::musttail]] return unit_0079(c, 127u, depth); }
L_00308940:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00308520u | kUnwind; return; } goto L_00308520; }
L_00308950:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003059F0u | kUnwind; return; } [[clang::musttail]] return unit_0079(c, 168u, depth); }
L_00308960:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00308460u | kUnwind; return; } goto L_00308460; }
L_00308970:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00307E70u | kUnwind; return; } [[clang::musttail]] return unit_0079(c, 353u, depth); }
L_00308980:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003083A0u | kUnwind; return; } goto L_003083A0; }
L_00308990:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003089C0u); set32(c.r[4], 0u + 1424u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x003089C0u) [[unlikely]] return; }
L_003089C0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_003089E4; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003089E0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007A(c, 73u, depth + 1u); else { c.pc = 0x00308A00u; return; } if (c.pc != 0x003089E0u) [[unlikely]] return; }
L_003089E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003089E4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00308A00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308A14u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 37u, depth + 1u); else { c.pc = 0x0027C290u; return; } if (c.pc != 0x00308A14u) [[unlikely]] return; }
L_00308A14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] - 27760u);
    set32(c.r[3], c.r[3].w[0] - 27704u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00308A40:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 14u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 12;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00308A78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00308AAC; } }
L_00308A78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308A80u); set32(c.r[4], 0u + 136u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00308A80u) [[unlikely]] return; }
L_00308A80:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_00308AB0; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308AA0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007A(c, 78u, depth + 1u); else { c.pc = 0x00308AD0u; return; } if (c.pc != 0x00308AA0u) [[unlikely]] return; }
L_00308AA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00308AAC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00308AAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00308AB0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00308AD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308AE4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 45u, depth + 1u); else { c.pc = 0x0026C620u; return; } if (c.pc != 0x00308AE4u) [[unlikely]] return; }
L_00308AE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] - 27856u);
    set32(c.r[3], c.r[3].w[0] - 27800u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] | 32ull;
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00308B20:
    set32(c.r[29], c.r[29].w[0] - 320u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));
    set32(c.r[19], ld32((c.r[5].w[0] + 3024u)));
    set32(c.r[4], c.r[5].w[0] + 112u);
    c.budget -= 19;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[22], c.r[4].w[0] + 2916u);  if (t) { goto L_00308B74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[3].w[0] + 132u)));  if (t) { goto L_00308B78; } }
L_00308B74:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00308B78:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  goto L_00308F98; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308B8Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0058(c, 262u, depth + 1u); else { c.pc = 0x00282740u; return; } if (c.pc != 0x00308B8Cu) [[unlikely]] return; }
L_00308B8C:
    set32(c.r[18], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[3], 0u + 104u);
    set32(c.r[4], ld32((c.r[18].w[0] + 148u)));
    c.budget -= 5;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 112u);  goto L_00308BB4; }
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00308BCC; } }
    set32(c.r[3], 0u + 112u);
    c.budget -= 1;
L_00308BB4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00308F00; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00308F00; } }
L_00308BCC:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[20], ld32((c.r[18].w[0] + 1320u)));  goto L_00308BE4; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[20], ld32((c.r[18].w[0] + 1320u)));  goto L_00308C34; }
    set32(c.r[20], ld32((c.r[18].w[0] + 1320u)));
    c.budget -= 1;
L_00308BE4:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_00308BFC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308BF4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00308BF4u) [[unlikely]] return; }
L_00308BF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[20].w[0] + 352u);  if (t) { goto L_00308C08; } }
L_00308BFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308C04u);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00308C04u) [[unlikely]] return; }
L_00308C04:
    set32(c.r[5], c.r[18].w[0] + 352u);
    c.budget -= 1;
L_00308C08:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308C14u); set32(c.r[6], 0u - 16384u);  if (depth < kMaxDepth) unit_001B(c, 241u, depth + 1u); else { c.pc = 0x0018FD70u; return; } if (c.pc != 0x00308C14u) [[unlikely]] return; }
L_00308C14:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308C20u); set32(c.r[5], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x00308C20u) [[unlikely]] return; }
L_00308C20:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308C2Cu); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_001B(c, 222u, depth + 1u); else { c.pc = 0x0018F5B0u; return; } if (c.pc != 0x00308C2Cu) [[unlikely]] return; }
L_00308C2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[17].w[0] + 96u)));  if (t) { goto L_00308C64; } }
L_00308C34:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_00308C4C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308C44u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00308C44u) [[unlikely]] return; }
L_00308C44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[20].w[0] + 352u);  if (t) { goto L_00308C58; } }
L_00308C4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308C54u);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00308C54u) [[unlikely]] return; }
L_00308C54:
    set32(c.r[5], c.r[18].w[0] + 352u);
    c.budget -= 1;
L_00308C58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308C60u); set32(c.r[4], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_001B(c, 222u, depth + 1u); else { c.pc = 0x0018F5B0u; return; } if (c.pc != 0x00308C60u) [[unlikely]] return; }
L_00308C60:
    set32(c.r[5], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 1;
L_00308C64:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[18], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] - 22592u);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 580u)));
    c.f[22] = ld32((c.r[4].w[0]));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 27u);  if (t) { goto L_00308C90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_00308CE8; } }
L_00308C90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308C98u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x00308C98u) [[unlikely]] return; }
L_00308C98:
    set32(c.r[4], ld32((c.r[18].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_00308CB8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00308CC8; } }
L_00308CB8:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_00308CC8:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[20].d[0] = 0ull + 0ull;  goto L_00308CE8; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 9u));
    c.budget -= 3;
    if (c.r[3].sd[0] > 0) { set32(c.r[20], ld32((c.r[4].w[0] + 4u)));  goto L_00308CE0; }
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00308CE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00308CE8; } }
L_00308CE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_00308EEC; } }
L_00308CF0:
    set32(c.r[8], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[9], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308D14u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 281u, depth + 1u); else { c.pc = 0x00282B00u; return; } if (c.pc != 0x00308D14u) [[unlikely]] return; }
L_00308D14:
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    c.f[20] = c.f[0];
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[18].w[0] + 192u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308D2Cu); set32(c.r[6], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x00308D2Cu) [[unlikely]] return; }
L_00308D2C:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], c.r[29].w[0] + 256u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308D44u); st128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_001B(c, 232u, depth + 1u); else { c.pc = 0x0018FB30u; return; } if (c.pc != 0x00308D44u) [[unlikely]] return; }
L_00308D44:
    c.f[13] = ld32((c.r[29].w[0] + 248u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308D50u); c.f[12] = ld32((c.r[29].w[0] + 240u));  if (depth < kMaxDepth) unit_0019(c, 12u, depth + 1u); else { c.pc = 0x00184300u; return; } if (c.pc != 0x00308D50u) [[unlikely]] return; }
L_00308D50:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { c.r[3].d[0] = c.r[2].d[0] & 65535ull;  goto L_00308D64; }
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull | 65535ull;  if (t) { goto L_00308D70; } }
L_00308D64:
    c.r[5].d[0] = 0ull | 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 3;
L_00308D70:
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[1].d[0] = c.r[4].sd[0] < -32768ll ? 1ull : 0ull;  goto L_00308D88; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);  if (t) { goto L_00308D94; } }
L_00308D88:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00308D94; } }
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 1;
L_00308D94:
    c.budget -= 2;
    if (c.r[4].sd[0] < 0) { set32(c.r[2], 0u - c.r[4].w[0]);  goto L_00308DA0; }
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_00308DA0:
    c.r[1].d[0] = c.r[2].sd[0] < 910ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 96u)));  goto L_00308DB4; }
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 2;
L_00308DB4:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00308E40; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00308E40; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00308DE8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00308DE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[13] = c.f[20];  if (t) { goto L_00308E8C; } }
L_00308DE8:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_00308DF8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_00308DF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308E00u);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x00308E00u) [[unlikely]] return; }
L_00308E00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3BB40000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308E10u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x00308E10u) [[unlikely]] return; }
L_00308E10:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41300000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.f[21] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00308E88; } }
L_00308E40:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_00308E50; } }
    set32(c.r[2], c.r[4].w[0] - 32768u);
    set32(c.r[4], c.r[2].w[0] - 32768u);
    c.budget -= 2;
L_00308E50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308E58u);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x00308E58u) [[unlikely]] return; }
L_00308E58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3BB40000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308E68u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x00308E68u) [[unlikely]] return; }
L_00308E68:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.f[21] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 8;
L_00308E88:
    c.f[13] = c.f[20];
    c.budget -= 1;
L_00308E8C:
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    c.f[20] = fp::ee::add(c.fcr31, c.f[22], c.f[21]);
    set32(c.r[6], ld32((c.r[18].w[0] + 144u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    set32(c.r[8], 0u + 1u);
    c.f[14] = 0u;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308EB4u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0058(c, 252u, depth + 1u); else { c.pc = 0x002824C0u; return; } if (c.pc != 0x00308EB4u) [[unlikely]] return; }
L_00308EB4:
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308ECCu); set32(c.r[6], c.r[2].w[0] + 10100u);  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x00308ECCu) [[unlikely]] return; }
L_00308ECC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[21], c.r[21].w[0] + 1u);  goto L_00308EEC; }
    st32((c.r[4].w[0] + 328u), c.f[20]);
    set32(c.r[5], ld32((c.r[18].w[0] + 144u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308EE8u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x00308EE8u) [[unlikely]] return; }
L_00308EE8:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_00308EEC:
    c.r[3].d[0] = c.r[21].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[21].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00308CF0u | kUnwind; return; } goto L_00308CF0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00308F94; } }
L_00308F00:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.f[22] = ld32((c.r[3].w[0] - 22576u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_00308F88; } }
L_00308F10:
    set32(c.r[8], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[9], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308F34u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 281u, depth + 1u); else { c.pc = 0x00282B00u; return; } if (c.pc != 0x00308F34u) [[unlikely]] return; }
L_00308F34:
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    c.f[21] = ld32((c.r[18].w[0] + 656u));
    c.f[20] = c.f[0];
    set32(c.r[5], c.r[18].w[0] + 192u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308F4Cu); set32(c.r[4], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_0017(c, 50u, depth + 1u); else { c.pc = 0x0017C690u; return; } if (c.pc != 0x00308F4Cu) [[unlikely]] return; }
L_00308F4C:
    c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[21]);
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[6], ld32((c.r[18].w[0] + 144u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 1u);
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.f[0] = ld32((c.r[28].w[0] - 32152u));
    c.f[14] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[14], c.f[22]);
    c.f[13] = c.f[20];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308F84u); c.f[12] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0058(c, 252u, depth + 1u); else { c.pc = 0x002824C0u; return; } if (c.pc != 0x00308F84u) [[unlikely]] return; }
L_00308F84:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_00308F88:
    c.r[3].d[0] = c.r[20].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[20].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00308F10u | kUnwind; return; } goto L_00308F10; }
L_00308F94:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_00308F98:
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_00308FD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0030906C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 27856u);
    set32(c.r[2], c.r[2].w[0] - 27800u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00309054; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 21536u);
    set32(c.r[2], c.r[2].w[0] + 21592u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00309054; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309048u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x00309048u) [[unlikely]] return; }
L_00309048:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309054u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00309054u) [[unlikely]] return; }
L_00309054:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00309070; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030906Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0030906Cu) [[unlikely]] return; }
L_0030906C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00309070:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00309090:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0030911C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 27760u);
    set32(c.r[2], c.r[2].w[0] - 27704u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00309104; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 28176u);
    set32(c.r[2], c.r[2].w[0] + 28232u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 816u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003090ECu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x003090ECu) [[unlikely]] return; }
L_003090EC:
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003090F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x003090F8u) [[unlikely]] return; }
L_003090F8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309104u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00309104u) [[unlikely]] return; }
L_00309104:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00309120; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030911Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0030911Cu) [[unlikely]] return; }
L_0030911C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00309120:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00309140:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00309090u | kUnwind; return; } goto L_00309090; }
L_00309150:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00308FD0u | kUnwind; return; } goto L_00308FD0; }
L_00309160:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309190u); set32(c.r[4], 0u + 1424u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00309190u) [[unlikely]] return; }
L_00309190:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_003091B4; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003091B0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007A(c, 121u, depth + 1u); else { c.pc = 0x003091D0u; return; } if (c.pc != 0x003091B0u) [[unlikely]] return; }
L_003091B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003091B4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003091D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003091E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 37u, depth + 1u); else { c.pc = 0x0027C290u; return; } if (c.pc != 0x003091E4u) [[unlikely]] return; }
L_003091E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] - 27520u);
    set32(c.r[3], c.r[3].w[0] - 27464u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00309210:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0030929C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 27520u);
    set32(c.r[2], c.r[2].w[0] - 27464u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00309284; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 28176u);
    set32(c.r[2], c.r[2].w[0] + 28232u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 816u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030926Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x0030926Cu) [[unlikely]] return; }
L_0030926C:
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309278u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x00309278u) [[unlikely]] return; }
L_00309278:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309284u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00309284u) [[unlikely]] return; }
L_00309284:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_003092A0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030929Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0030929Cu) [[unlikely]] return; }
L_0030929C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003092A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003092C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00309210u | kUnwind; return; } goto L_00309210; }
L_003092D0:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309300u); set32(c.r[4], 0u + 1440u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00309300u) [[unlikely]] return; }
L_00309300:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_00309324; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309320u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007A(c, 132u, depth + 1u); else { c.pc = 0x00309340u; return; } if (c.pc != 0x00309320u) [[unlikely]] return; }
L_00309320:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00309324:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00309340:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309354u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 37u, depth + 1u); else { c.pc = 0x0027C290u; return; } if (c.pc != 0x00309354u) [[unlikely]] return; }
L_00309354:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] - 27280u);
    set32(c.r[3], c.r[3].w[0] - 27224u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 1424u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00309390:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003093ACu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 134u, depth + 1u); else { c.pc = 0x002CDC50u; return; } if (c.pc != 0x003093ACu) [[unlikely]] return; }
L_003093AC:
    set32(c.r[3], 0u + 13u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 1424u)));  goto L_003094AC; }
    set32(c.r[3], 0u + 12u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[28].w[0] - 30284u)));  goto L_003093CC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003094F8; } }
L_003093CC:
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003094F4; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003094F4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], c.r[4].w[0] + 112u);
    set32(c.r[4], ld32((c.r[4].w[0] + 116u)));
    c.budget -= 5;
    if (c.r[4].d[0] != c.r[16].d[0]) { set32(c.r[4], ld32((c.r[5].w[0] + 2916u)));  goto L_00309450; }
    set32(c.r[6], ld32((c.r[16].w[0] + 240u)));
    set32(c.r[5], 0u + 16384u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x02000000u);
    st32((c.r[16].w[0] + 256u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 244u)));
    st32((c.r[16].w[0] + 260u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 248u)));
    st32((c.r[16].w[0] + 264u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 252u)));
    st32((c.r[16].w[0] + 268u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 240u), 0u);
    st32((c.r[16].w[0] + 244u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 248u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 164u)));
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[16].w[0] + 164u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 176u)));
    c.r[4].d[0] = c.r[4].d[0] | 64ull;
    st32((c.r[16].w[0] + 176u), c.r[4].w[0]);
    c.budget -= 21;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1424u), c.r[3].w[0]);  if (t) { goto L_003094F4; } }
L_00309450:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[16].d[0];  if (t) { goto L_003094F4; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 240u)));
    c.r[5].d[0] = 0ull | 49152ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x02000000u);
    st32((c.r[16].w[0] + 256u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 244u)));
    st32((c.r[16].w[0] + 260u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 248u)));
    st32((c.r[16].w[0] + 264u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 252u)));
    st32((c.r[16].w[0] + 268u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 240u), 0u);
    st32((c.r[16].w[0] + 244u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 248u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 164u)));
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[16].w[0] + 164u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 176u)));
    c.r[4].d[0] = c.r[4].d[0] | 64ull;
    st32((c.r[16].w[0] + 176u), c.r[4].w[0]);
    c.budget -= 21;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1424u), c.r[3].w[0]);  if (t) { goto L_003094F4; } }
L_003094AC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003094F4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 256u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    st32((c.r[16].w[0] + 240u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 260u)));
    st32((c.r[16].w[0] + 244u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 264u)));
    st32((c.r[16].w[0] + 248u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 268u)));
    st32((c.r[16].w[0] + 252u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st32((c.r[16].w[0] + 176u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 1424u), 0u);
    c.budget -= 16;
L_003094F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003094F8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00309510:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0030959C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 27280u);
    set32(c.r[2], c.r[2].w[0] - 27224u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00309584; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 28176u);
    set32(c.r[2], c.r[2].w[0] + 28232u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 816u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030956Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x0030956Cu) [[unlikely]] return; }
L_0030956C:
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309578u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x00309578u) [[unlikely]] return; }
L_00309578:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309584u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00309584u) [[unlikely]] return; }
L_00309584:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_003095A0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030959Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0030959Cu) [[unlikely]] return; }
L_0030959C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003095A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003095C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00309510u | kUnwind; return; } goto L_00309510; }
L_003095D0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00309390u | kUnwind; return; } goto L_00309390; }
L_003095E0:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309610u); set32(c.r[4], 0u + 1424u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00309610u) [[unlikely]] return; }
L_00309610:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_00309634; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309630u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007A(c, 146u, depth + 1u); else { c.pc = 0x00309650u; return; } if (c.pc != 0x00309630u) [[unlikely]] return; }
L_00309630:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00309634:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00309650:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309664u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 37u, depth + 1u); else { c.pc = 0x0027C290u; return; } if (c.pc != 0x00309664u) [[unlikely]] return; }
L_00309664:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] - 27040u);
    set32(c.r[3], c.r[3].w[0] - 26984u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00309690:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 115u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 148u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003096F0; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 148u)));
    set32(c.r[2], 0u + 20030u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_003096F8; }
    set32(c.r[2], 0u + 20029u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003096E4; } }
    set32(c.r[2], 0u + 20028u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003096E4; } }
    set32(c.r[2], 0u + 20027u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003096E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003096F0; } }
L_003096E4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003096F8; } }
L_003096F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003096F8u);  if (depth < kMaxDepth) unit_0057(c, 243u, depth + 1u); else { c.pc = 0x0027ED10u; return; } if (c.pc != 0x003096F8u) [[unlikely]] return; }
L_003096F8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00309710:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0030979C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 27040u);
    set32(c.r[2], c.r[2].w[0] - 26984u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00309784; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 28176u);
    set32(c.r[2], c.r[2].w[0] + 28232u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 816u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030976Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x0030976Cu) [[unlikely]] return; }
L_0030976C:
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309778u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x00309778u) [[unlikely]] return; }
L_00309778:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309784u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00309784u) [[unlikely]] return; }
L_00309784:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_003097A0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030979Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0030979Cu) [[unlikely]] return; }
L_0030979C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003097A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003097C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00309710u | kUnwind; return; } goto L_00309710; }
L_003097D0:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309800u); set32(c.r[4], 0u + 1440u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00309800u) [[unlikely]] return; }
L_00309800:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_00309824; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309820u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007A(c, 159u, depth + 1u); else { c.pc = 0x00309840u; return; } if (c.pc != 0x00309820u) [[unlikely]] return; }
L_00309820:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00309824:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00309840:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309854u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 37u, depth + 1u); else { c.pc = 0x0027C290u; return; } if (c.pc != 0x00309854u) [[unlikely]] return; }
L_00309854:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 26704u);
    set32(c.r[2], c.r[2].w[0] - 26648u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], 0u - 1u);
    st32((c.r[16].w[0] + 1424u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00309890:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_003098D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00309A88; } }
L_003098D0:
    set32(c.r[2], ld32((c.r[19].w[0] + 140u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[19].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[19].w[0] + 1424u)));  if (t) { goto L_0030995C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u - 1u);  goto L_00309960; }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);  goto L_00309944; }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_00309940; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_00309940; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_00309940; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_00309940; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00309954; } }
L_00309940:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 1;
L_00309944:
    c.r[2].d[0] = c.r[2].d[0] | 33464ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 1424u), c.r[2].w[0]);  if (t) { goto L_00309964; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_00309954:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 1424u), c.r[2].w[0]);  if (t) { goto L_00309964; } }
L_0030995C:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_00309960:
    st32((c.r[19].w[0] + 1424u), c.r[2].w[0]);
    c.budget -= 1;
L_00309964:
    set32(c.r[2], ld32((c.r[19].w[0] + 1424u)));
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 14u);  goto L_00309A40; }
    c.budget -= 2;
    if (c.r[4].sd[0] < 0) { set32(c.r[2], ld32((c.r[19].w[0] + 1424u)));  goto L_00309988; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309984u); set32(c.r[5], 0u + 11100u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00309984u) [[unlikely]] return; }
L_00309984:
    set32(c.r[2], ld32((c.r[19].w[0] + 1424u)));
    c.budget -= 1;
L_00309988:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00309A3C; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 580u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_003099A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00309A10; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_003099A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003099B0u); set32(c.r[5], 0u + 67u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x003099B0u) [[unlikely]] return; }
L_003099B0:
    set32(c.r[4], ld32((c.r[19].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_003099D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003099E4; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 1;
L_003099D4:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_003099E4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_00309A10; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  goto L_00309A04; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00309A04; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 1;
L_00309A04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00309A10; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00309A10:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 11100u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309A20u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x00309A20u) [[unlikely]] return; }
L_00309A20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00309A3C; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 1320u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309A3Cu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x00309A3Cu) [[unlikely]] return; }
L_00309A3C:
    set32(c.r[2], 0u + 14u);
    c.budget -= 1;
L_00309A40:
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 272u);  goto L_00309A54; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00309A88; } }
    set32(c.r[4], 0u + 272u);
    c.budget -= 1;
L_00309A54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309A5Cu);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00309A5Cu) [[unlikely]] return; }
L_00309A5C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_00309A8C; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309A7Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007A(c, 170u, depth + 1u); else { c.pc = 0x00309B20u; return; } if (c.pc != 0x00309A7Cu) [[unlikely]] return; }
L_00309A7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00309A88; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00309A88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00309A8C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00309AB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309ACCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 134u, depth + 1u); else { c.pc = 0x002CDC50u; return; } if (c.pc != 0x00309ACCu) [[unlikely]] return; }
L_00309ACC:
    set32(c.r[3], 0u + 28u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));  goto L_00309AE0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00309B04; } }
L_00309AE0:
    set32(c.r[3], ld32((c.r[3].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[16].d[0];  if (t) { goto L_00309B00; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xF7FF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 164u), c.r[3].w[0]);
    c.budget -= 5;
L_00309B00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00309B04:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00309B20:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309B3Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0053(c, 45u, depth + 1u); else { c.pc = 0x0026C620u; return; } if (c.pc != 0x00309B3Cu) [[unlikely]] return; }
L_00309B3C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 26800u);
    set32(c.r[2], c.r[2].w[0] - 26744u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 10;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00309B6C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00309BC4; } }
L_00309B6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309B74u); set32(c.r[5], 0u + 22u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x00309B74u) [[unlikely]] return; }
L_00309B74:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_00309B94; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00309BA4; } }
L_00309B94:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00309BA4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_00309BC4; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  goto L_00309BBC; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00309BBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00309BC4; } }
L_00309BC4:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[6], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309BD4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x00309BD4u) [[unlikely]] return; }
L_00309BD4:
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 608u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309BE4u); set32(c.r[4], c.r[2].w[0] + 2064u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x00309BE4u) [[unlikely]] return; }
L_00309BE4:
    st32((c.r[17].w[0] + 256u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43160000u);
    c.f[0] = ld32((c.r[17].w[0] + 256u));
    c.r[16].d[0] = 0ull + 0ull;
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 260u), c.f[0]);
    st32((c.r[17].w[0] + 264u), 0u);
    ld128((c.r[2].w[0] + 20256u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[2]);
    c.f[0] = ld32((c.r[17].w[0] + 256u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 14;
L_00309C1C:
    set32(c.r[5], c.r[16].w[0] + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309C2Cu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x00309C2Cu) [[unlikely]] return; }
L_00309C2C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[16].w[0] << 4);  goto L_00309C5C; }
    set32(c.r[4], ld32((c.r[2].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00309C58; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 172u)));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.f[0] = ld32((c.r[2].w[0] + 192u));  goto L_00309C6C; }
L_00309C58:
    set32(c.r[2], c.r[16].w[0] << 4);
    c.budget -= 1;
L_00309C5C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 148u), c.r[3].w[0]);  if (t) { goto L_00309CC8; } }
L_00309C6C:
    set32(c.r[18], c.r[16].w[0] << 4);
    set32(c.r[3], c.r[17].w[0] + c.r[18].w[0]);
    set32(c.r[6], c.r[29].w[0] + 64u);
    set32(c.r[4], c.r[3].w[0] + 144u);
    st32((c.r[3].w[0] + 144u), c.f[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = ld32((c.r[2].w[0] + 196u));
    st32((c.r[3].w[0] + 148u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 200u));
    st32((c.r[3].w[0] + 152u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 204u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309CA0u); st32((c.r[3].w[0] + 156u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x00309CA0u) [[unlikely]] return; }
L_00309CA0:
    set32(c.r[2], 0u + 2750u);
    set32(c.r[3], c.r[17].w[0] + c.r[18].w[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 148u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], c.r[3].w[0] + 148u);  if (t) { goto L_00309CC8; } }
    st32((c.r[2].w[0]), c.f[0]);
    c.budget -= 1;
L_00309CC8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00309C1Cu | kUnwind; return; } goto L_00309C1C; }
L_00309CD8:
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 32ull;
    st32((c.r[17].w[0] + 72u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00309D00:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309D28u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0053(c, 57u, depth + 1u); else { c.pc = 0x0026C870u; return; } if (c.pc != 0x00309D28u) [[unlikely]] return; }
L_00309D28:
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[17].w[0] << 4);
    c.budget -= 3;
L_00309D34:
    set32(c.r[16], c.r[20].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 148u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[21], c.r[16].w[0] + 148u);  if (t) { goto L_00309E38; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], c.r[17].w[0] + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309D64u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x00309D64u) [[unlikely]] return; }
L_00309D64:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[19].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_00309E3C; }
    c.f[0] = ld32((c.r[16].w[0] + 144u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x02000000u);
    st32((c.r[19].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0]));
    st32((c.r[19].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 152u));
    st32((c.r[19].w[0] + 200u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 156u));
    st32((c.r[19].w[0] + 204u), c.f[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 164u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[19].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 176u), c.r[2].w[0]);  if (t) { goto L_00309E0C; } }
L_00309DB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1A00000u);
    c.f[4] = 0u;
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.f[1] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = fp::ee::add(c.fcr31, c.f[0], c.f[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.r[1].d[0] = c.r[18].sd[0] < 101ll ? 1ull : 0ull;
    c.f[0] = ld32((c.r[19].w[0] + 192u));
    c.f[2] = ld32((c.r[19].w[0] + 196u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[4]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    st32((c.r[19].w[0] + 192u), c.f[0]);
    st32((c.r[19].w[0] + 196u), c.f[1]);
    st32((c.r[19].w[0] + 200u), c.f[3]);
    st32((c.r[19].w[0] + 204u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 164u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[19].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    c.budget -= 23;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[19].w[0] + 176u), c.r[2].w[0]);  if (t) { goto L_00309E20; } }
L_00309E0C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309E18u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_007A(c, 192u, depth + 1u); else { c.pc = 0x00309F50u; return; } if (c.pc != 0x00309E18u) [[unlikely]] return; }
L_00309E18:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.f[0] = ld32((c.r[19].w[0] + 200u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00309DB0u | kUnwind; return; } goto L_00309DB0; }
L_00309E20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309E28u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00309E28u) [[unlikely]] return; }
L_00309E28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309E30u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 359u, depth + 1u); else { c.pc = 0x002D3C70u; return; } if (c.pc != 0x00309E30u) [[unlikely]] return; }
L_00309E30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309E38u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 269u, depth + 1u); else { c.pc = 0x002D2C80u; return; } if (c.pc != 0x00309E38u) [[unlikely]] return; }
L_00309E38:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00309E3C:
    c.r[3].d[0] = c.r[17].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[17].w[0] << 4);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00309D34u | kUnwind; return; } goto L_00309D34; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00309E70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309E88u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0021(c, 177u, depth + 1u); else { c.pc = 0x001A6280u; return; } if (c.pc != 0x00309E88u) [[unlikely]] return; }
L_00309E88:
    set32(c.r[3], ld32((c.r[17].w[0] + 264u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].d[0] = c.r[3].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; st32((c.r[17].w[0] + 264u), c.r[3].w[0]);  if (t) { goto L_00309F3C; } }
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[16].w[0] << 4);
    c.budget -= 2;
L_00309EA4:
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[3].w[0] + 148u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_00309F30; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], c.r[16].w[0] + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309ED4u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x00309ED4u) [[unlikely]] return; }
L_00309ED4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00309F2C; } }
    c.f[0] = ld32((c.r[2].w[0] + 200u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = 0u;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.f[2] = ld32((c.r[2].w[0] + 196u));
    c.f[3] = fp::ee::add(c.fcr31, c.f[0], c.f[4]);
    c.f[0] = ld32((c.r[2].w[0] + 192u));
    c.f[1] = ld32((c.r[17].w[0] + 260u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[4]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    st32((c.r[2].w[0] + 192u), c.f[0]);
    st32((c.r[2].w[0] + 196u), c.f[1]);
    st32((c.r[2].w[0] + 200u), c.f[3]);
    st32((c.r[2].w[0] + 204u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 164u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[2].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 176u)));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st32((c.r[2].w[0] + 176u), c.r[3].w[0]);
    c.budget -= 20;
L_00309F2C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00309F30:
    c.r[3].d[0] = c.r[16].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 4);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00309EA4u | kUnwind; return; } goto L_00309EA4; }
L_00309F3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00309F50:
    set32(c.r[29], c.r[29].w[0] - 304u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 80u);  goto L_00309F70; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0030A090; } }
L_00309F70:
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 288u), 0u);
    st32((c.r[29].w[0] + 272u), 0u);
    st32((c.r[29].w[0] + 276u), 0u);
    st32((c.r[29].w[0] + 280u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309F8Cu); st32((c.r[29].w[0] + 284u), 0u);  if (depth < kMaxDepth) unit_0051(c, 303u, depth + 1u); else { c.pc = 0x00266780u; return; } if (c.pc != 0x00309F8Cu) [[unlikely]] return; }
L_00309F8C:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309F98u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_0051(c, 331u, depth + 1u); else { c.pc = 0x00266D40u; return; } if (c.pc != 0x00309F98u) [[unlikely]] return; }
L_00309F98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309FA0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00309FA0u) [[unlikely]] return; }
L_00309FA0:
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[16].w[0] + 624u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309FB0u); set32(c.r[6], 0u + 48u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x00309FB0u) [[unlikely]] return; }
L_00309FB0:
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    set32(c.r[2], 0u + 1u);
    c.f[1] = ld32((c.r[29].w[0] + 36u));
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 40u));
    st32((c.r[29].w[0] + 84u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 44u));
    st32((c.r[29].w[0] + 88u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    st32((c.r[29].w[0] + 92u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 52u));
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    st32((c.r[29].w[0] + 100u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 60u));
    st32((c.r[29].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    st32((c.r[29].w[0] + 108u), c.f[1]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A00Cu); st32((c.r[29].w[0] + 112u), c.f[0]);  if (depth < kMaxDepth) unit_0026(c, 380u, depth + 1u); else { c.pc = 0x001BB3A0u; return; } if (c.pc != 0x0030A00Cu) [[unlikely]] return; }
L_0030A00C:
    set32(c.r[3], ld32((c.r[16].w[0] + 144u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 258u)));
    st16((c.r[29].w[0] + 256u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);  if (t) { goto L_0030A028; } }
    st16((c.r[29].w[0] + 258u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0030A028:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], 0u - 17u);
    set32(c.r[4], ld32((c.r[3].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 280u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 280u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0030A054; } }
    set32(c.r[5], c.r[2].w[0] + 304u);
    c.budget -= 1;
L_0030A054:
    set32(c.r[4], c.r[2].w[0] + 80u);
    set32(c.r[6], c.r[29].w[0] + 80u);
    set32(c.r[7], c.r[29].w[0] + 272u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A068u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0026(c, 417u, depth + 1u); else { c.pc = 0x001BBAD0u; return; } if (c.pc != 0x0030A068u) [[unlikely]] return; }
L_0030A068:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 80u);  goto L_0030A084; }
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A07Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x0030A07Cu) [[unlikely]] return; }
L_0030A07C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0030A090; } }
L_0030A084:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A08Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x0030A08Cu) [[unlikely]] return; }
L_0030A08C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0030A090:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 304u);  c.pc = t; return; }
L_0030A0A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0030A13C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 26800u);
    set32(c.r[2], c.r[2].w[0] - 26744u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0030A124; } }
    goto L_0030A0D8;
L_0030A0D4:
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 1;
L_0030A0D8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 21536u);
    set32(c.r[2], c.r[2].w[0] + 21592u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0030A124; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A118u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x0030A118u) [[unlikely]] return; }
L_0030A118:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A124u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0030A124u) [[unlikely]] return; }
L_0030A124:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0030A140; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A13Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0030A13Cu) [[unlikely]] return; }
L_0030A13C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0030A140:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0030A160:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0030A1EC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 26704u);
    set32(c.r[2], c.r[2].w[0] - 26648u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0030A1D4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 28176u);
    set32(c.r[2], c.r[2].w[0] + 28232u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 816u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A1BCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x0030A1BCu) [[unlikely]] return; }
L_0030A1BC:
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A1C8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x0030A1C8u) [[unlikely]] return; }
L_0030A1C8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A1D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0030A1D4u) [[unlikely]] return; }
L_0030A1D4:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0030A1F0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A1ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0030A1ECu) [[unlikely]] return; }
L_0030A1EC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0030A1F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0030A210:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0030A160u | kUnwind; return; } goto L_0030A160; }
L_0030A220:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00309AB0u | kUnwind; return; } goto L_00309AB0; }
L_0030A230:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0030A0A0u | kUnwind; return; } goto L_0030A0A0; }
L_0030A240:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A270u); set32(c.r[4], 0u + 1440u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0030A270u) [[unlikely]] return; }
L_0030A270:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0030A294; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A290u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007A(c, 217u, depth + 1u); else { c.pc = 0x0030A2B0u; return; } if (c.pc != 0x0030A290u) [[unlikely]] return; }
L_0030A290:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0030A294:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0030A2B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A2C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 37u, depth + 1u); else { c.pc = 0x0027C290u; return; } if (c.pc != 0x0030A2C4u) [[unlikely]] return; }
L_0030A2C4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 26464u);
    set32(c.r[2], c.r[2].w[0] - 26408u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], 0u - 1u);
    st32((c.r[16].w[0] + 1424u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030A300:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0030A328; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0030A480; } }
L_0030A328:
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[16].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 1424u)));  if (t) { goto L_0030A3B0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u - 1u);  goto L_0030A3B4; }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);  goto L_0030A39C; }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0030A398; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0030A398; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0030A398; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0030A398; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0030A3A8; } }
L_0030A398:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 1;
L_0030A39C:
    c.r[2].d[0] = c.r[2].d[0] | 33464ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1424u), c.r[2].w[0]);  if (t) { goto L_0030A3B8; } }
L_0030A3A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1424u), c.r[2].w[0]);  if (t) { goto L_0030A3B8; } }
L_0030A3B0:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0030A3B4:
    st32((c.r[16].w[0] + 1424u), c.r[2].w[0]);
    c.budget -= 1;
L_0030A3B8:
    set32(c.r[2], ld32((c.r[16].w[0] + 1424u)));
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0030A480; }
    c.budget -= 2;
    if (c.r[4].sd[0] < 0) { set32(c.r[2], ld32((c.r[16].w[0] + 1424u)));  goto L_0030A3DC; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A3D8u); set32(c.r[5], 0u + 11100u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x0030A3D8u) [[unlikely]] return; }
L_0030A3D8:
    set32(c.r[2], ld32((c.r[16].w[0] + 1424u)));
    c.budget -= 1;
L_0030A3DC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0030A47C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0030A3F8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0030A450; } }
L_0030A3F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A400u); set32(c.r[5], 0u + 67u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0030A400u) [[unlikely]] return; }
L_0030A400:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0030A420; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0030A430; } }
L_0030A420:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0030A430:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0030A450; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  goto L_0030A448; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0030A448:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030A450; } }
L_0030A450:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 11100u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A460u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x0030A460u) [[unlikely]] return; }
L_0030A460:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030A47C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1320u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[3].w[0] + 144u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A47Cu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x0030A47Cu) [[unlikely]] return; }
L_0030A47C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0030A480:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030A490:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0030A51C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 26464u);
    set32(c.r[2], c.r[2].w[0] - 26408u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0030A504; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 28176u);
    set32(c.r[2], c.r[2].w[0] + 28232u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 816u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A4ECu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x0030A4ECu) [[unlikely]] return; }
L_0030A4EC:
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A4F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x0030A4F8u) [[unlikely]] return; }
L_0030A4F8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A504u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0030A504u) [[unlikely]] return; }
L_0030A504:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0030A520; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A51Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0030A51Cu) [[unlikely]] return; }
L_0030A51C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0030A520:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0030A540:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0030A490u | kUnwind; return; } goto L_0030A490; }
L_0030A550:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A580u); set32(c.r[4], 0u + 1440u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0030A580u) [[unlikely]] return; }
L_0030A580:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0030A5A4; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A5A0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007A(c, 263u, depth + 1u); else { c.pc = 0x0030AA00u; return; } if (c.pc != 0x0030A5A0u) [[unlikely]] return; }
L_0030A5A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0030A5A4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0030A5C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.f[22] = c.r[2].w[0];
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 14;
    { const bool t = c.r[17].d[0] == 0ull; c.f[21] = c.f[22];  if (t) { goto L_0030A664; } }
    c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 108u)));
    c.budget -= 3;
    if (c.r[18].sd[0] > 0) { c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 110u)));  goto L_0030A610; }
    c.f[22] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030A664; } }
L_0030A610:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A618u);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x0030A618u) [[unlikely]] return; }
L_0030A618:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A624u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x0030A624u) [[unlikely]] return; }
L_0030A624:
    c.f[22] = fp::ee::div(c.fcr31, c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[22]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0030A64C; } }
    c.f[22] = c.f[0];
    c.budget -= 1;
L_0030A64C:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0030A664; } }
    c.f[22] = c.f[0];
    c.budget -= 1;
L_0030A664:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0030A6D8; } }
    c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 108u)));
    c.budget -= 3;
    if (c.r[18].sd[0] > 0) { c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 110u)));  goto L_0030A684; }
    c.f[21] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030A6D8; } }
L_0030A684:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A68Cu);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x0030A68Cu) [[unlikely]] return; }
L_0030A68C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A698u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x0030A698u) [[unlikely]] return; }
L_0030A698:
    c.f[21] = fp::ee::div(c.fcr31, c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0030A6C0; } }
    c.f[21] = c.f[0];
    c.budget -= 1;
L_0030A6C0:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0030A6D8; } }
    c.f[21] = c.f[0];
    c.budget -= 1;
L_0030A6D8:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[22]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0030A70C; } }
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0030A70C; } }
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[21]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { c.r[17].d[0] = c.r[16].d[0] + 0ull;  goto L_0030A704; }
L_0030A704:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0030A760; } }
L_0030A70C:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[22]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0030A734; } }
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0030A734; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0030A760; } }
L_0030A734:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].d[0] = 0ull + 0ull;  goto L_0030A760; }
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0030A75C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0030A760; } }
L_0030A75C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0030A760:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0030A790:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_0030A7EC; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], 0u + 1008u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A7C8u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x0030A7C8u) [[unlikely]] return; }
L_0030A7C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0030A958; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], 0u + 1000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A7E4u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x0030A7E4u) [[unlikely]] return; }
L_0030A7E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0030A958; } }
L_0030A7EC:
    set32(c.r[5], 0u + 1013u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A7FCu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x0030A7FCu) [[unlikely]] return; }
L_0030A7FC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0030A82C; }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 108u)));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_0030A828; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A81Cu); c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 110u)));  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x0030A81Cu) [[unlikely]] return; }
L_0030A81C:
    c.r[4].d[0] = c.r[16].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A828u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x0030A828u) [[unlikely]] return; }
L_0030A828:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0030A82C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A834u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_007A(c, 233u, depth + 1u); else { c.pc = 0x0030A5C0u; return; } if (c.pc != 0x0030A834u) [[unlikely]] return; }
L_0030A834:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1008u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A84Cu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x0030A84Cu) [[unlikely]] return; }
L_0030A84C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A858u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007A(c, 233u, depth + 1u); else { c.pc = 0x0030A5C0u; return; } if (c.pc != 0x0030A858u) [[unlikely]] return; }
L_0030A858:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1002u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A870u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x0030A870u) [[unlikely]] return; }
L_0030A870:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A87Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007A(c, 233u, depth + 1u); else { c.pc = 0x0030A5C0u; return; } if (c.pc != 0x0030A87Cu) [[unlikely]] return; }
L_0030A87C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1011u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A894u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x0030A894u) [[unlikely]] return; }
L_0030A894:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A8A0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007A(c, 233u, depth + 1u); else { c.pc = 0x0030A5C0u; return; } if (c.pc != 0x0030A8A0u) [[unlikely]] return; }
L_0030A8A0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1007u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A8B8u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x0030A8B8u) [[unlikely]] return; }
L_0030A8B8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A8C4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007A(c, 233u, depth + 1u); else { c.pc = 0x0030A5C0u; return; } if (c.pc != 0x0030A8C4u) [[unlikely]] return; }
L_0030A8C4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1009u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A8DCu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x0030A8DCu) [[unlikely]] return; }
L_0030A8DC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A8E8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007A(c, 233u, depth + 1u); else { c.pc = 0x0030A5C0u; return; } if (c.pc != 0x0030A8E8u) [[unlikely]] return; }
L_0030A8E8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1010u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A900u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x0030A900u) [[unlikely]] return; }
L_0030A900:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A90Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007A(c, 233u, depth + 1u); else { c.pc = 0x0030A5C0u; return; } if (c.pc != 0x0030A90Cu) [[unlikely]] return; }
L_0030A90C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1001u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A924u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x0030A924u) [[unlikely]] return; }
L_0030A924:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A930u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007A(c, 233u, depth + 1u); else { c.pc = 0x0030A5C0u; return; } if (c.pc != 0x0030A930u) [[unlikely]] return; }
L_0030A930:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1004u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A948u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x0030A948u) [[unlikely]] return; }
L_0030A948:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A954u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007A(c, 233u, depth + 1u); else { c.pc = 0x0030A5C0u; return; } if (c.pc != 0x0030A954u) [[unlikely]] return; }
L_0030A954:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0030A958:
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 108u)));
    c.budget -= 3;
    if (c.r[17].sd[0] > 0) { c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 110u)));  goto L_0030A970; }
    c.f[1] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[28].w[0] - 32128u));  if (t) { goto L_0030A9C8; } }
L_0030A970:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A978u);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x0030A978u) [[unlikely]] return; }
L_0030A978:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A984u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x0030A984u) [[unlikely]] return; }
L_0030A984:
    c.f[1] = fp::ee::div(c.fcr31, c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0030A9AC; } }
    c.f[1] = c.f[0];
    c.budget -= 1;
L_0030A9AC:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0030A9C4; } }
    c.f[1] = c.f[0];
    c.budget -= 1;
L_0030A9C4:
    c.f[0] = ld32((c.r[28].w[0] - 32128u));
    c.budget -= 1;
L_0030A9C8:
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0030A9DC; }
    c.r[16].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_0030A9DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0030AA00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AA14u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 37u, depth + 1u); else { c.pc = 0x0027C290u; return; } if (c.pc != 0x0030AA14u) [[unlikely]] return; }
L_0030AA14:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 26032u);
    set32(c.r[2], c.r[2].w[0] - 25976u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], 0u - 1u);
    st32((c.r[16].w[0] + 1424u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030AA50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AA6Cu); set32(c.r[4], 0u + 660u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0030AA6Cu) [[unlikely]] return; }
L_0030AA6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0030AA98; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AA80u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 8u, depth + 1u); else { c.pc = 0x002AC0E0u; return; } if (c.pc != 0x0030AA80u) [[unlikely]] return; }
L_0030AA80:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 26224u);
    set32(c.r[2], c.r[2].w[0] - 26168u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 6;
L_0030AA98:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0030AAB0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 140u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 1424u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[19].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0030AB4C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u - 1u);  goto L_0030AB50; }
    set32(c.r[2], c.r[18].w[0] - 3u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], 0u - 1u);  goto L_0030AB44; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 22560u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00308000u < 16384u) { entry = entries_007A[(t - 0x00308000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0030AB30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] | 33464ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 1424u), c.r[2].w[0]);  if (t) { goto L_0030AB54; } }
L_0030AB40:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0030AB44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 1424u), c.r[2].w[0]);  if (t) { goto L_0030AB54; } }
L_0030AB4C:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0030AB50:
    st32((c.r[19].w[0] + 1424u), c.r[2].w[0]);
    c.budget -= 1;
L_0030AB54:
    set32(c.r[2], ld32((c.r[19].w[0] + 1424u)));
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 5u);  goto L_0030AC30; }
    c.budget -= 2;
    if (c.r[5].sd[0] < 0) { set32(c.r[2], ld32((c.r[19].w[0] + 1424u)));  goto L_0030AB78; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AB74u); set32(c.r[5], 0u + 11100u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x0030AB74u) [[unlikely]] return; }
L_0030AB74:
    set32(c.r[2], ld32((c.r[19].w[0] + 1424u)));
    c.budget -= 1;
L_0030AB78:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0030AC2C; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 580u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_0030AB98; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0030AC00; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0030AB98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030ABA0u); set32(c.r[5], 0u + 67u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0030ABA0u) [[unlikely]] return; }
L_0030ABA0:
    set32(c.r[4], ld32((c.r[19].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0030ABC4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0030ABD4; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 1;
L_0030ABC4:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0030ABD4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0030AC00; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  goto L_0030ABF4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0030ABF4; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 1;
L_0030ABF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030AC00; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0030AC00:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 11100u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AC10u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x0030AC10u) [[unlikely]] return; }
L_0030AC10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030AC2C; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 1320u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AC2Cu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x0030AC2Cu) [[unlikely]] return; }
L_0030AC2C:
    set32(c.r[2], 0u + 5u);
    c.budget -= 1;
L_0030AC30:
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[19].w[0] + 164u)));  goto L_0030AC84; }
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 124u);  goto L_0030AC50; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0030ACA0; } }
    set32(c.r[4], 0u + 124u);
    c.budget -= 1;
L_0030AC50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AC58u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0030AC58u) [[unlikely]] return; }
L_0030AC58:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0030ACA4; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AC78u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007A(c, 277u, depth + 1u); else { c.pc = 0x0030ACC0u; return; } if (c.pc != 0x0030AC78u) [[unlikely]] return; }
L_0030AC78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030ACA0; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 164u)));
    c.budget -= 1;
L_0030AC84:
    set32(c.r[3], 0u - 2u);
    set32(c.r[2], 0u - 3u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[19].w[0] + 164u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 164u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 7;
L_0030ACA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0030ACA4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0030ACC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030ACD4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 10u, depth + 1u); else { c.pc = 0x00278110u; return; } if (c.pc != 0x0030ACD4u) [[unlikely]] return; }
L_0030ACD4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] - 26128u);
    set32(c.r[3], c.r[3].w[0] - 26072u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 112u), 0u);
    st32((c.r[16].w[0] + 116u), 0u);
    st32((c.r[16].w[0] + 120u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 32ull;
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030AD20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AD3Cu); set32(c.r[5], 0u + 20000u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x0030AD3Cu) [[unlikely]] return; }
L_0030AD3C:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AD48u); set32(c.r[5], 0u + 20001u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x0030AD48u) [[unlikely]] return; }
L_0030AD48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AD50u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 12u, depth + 1u); else { c.pc = 0x00278170u; return; } if (c.pc != 0x0030AD50u) [[unlikely]] return; }
L_0030AD50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 2;
L_0030AD58:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030AD60:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AD80u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0056(c, 19u, depth + 1u); else { c.pc = 0x002781E0u; return; } if (c.pc != 0x0030AD80u) [[unlikely]] return; }
L_0030AD80:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], 0u + 1000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AD94u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x0030AD94u) [[unlikely]] return; }
L_0030AD94:
    set32(c.r[4], ld32((c.r[17].w[0] + 116u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0030B12C; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 112u)));  goto L_0030B0B0; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 120u)));  goto L_0030AFC4; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[18], ld32((c.r[17].w[0] + 76u)));  goto L_0030AE04; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0030ADD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0030B130; } }
L_0030ADD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030ADE0u);  if (depth < kMaxDepth) unit_007A(c, 238u, depth + 1u); else { c.pc = 0x0030A790u; return; } if (c.pc != 0x0030ADE0u) [[unlikely]] return; }
L_0030ADE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 112u), c.r[2].w[0]);  if (t) { goto L_0030ADF4; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 116u), c.r[3].w[0]);  if (t) { goto L_0030AE00; } }
L_0030ADF4:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 116u), c.r[3].w[0]);  if (t) { goto L_0030B12C; } }
L_0030AE00:
    set32(c.r[18], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 1;
L_0030AE04:
    set32(c.r[3], ld32((c.r[18].w[0] + 580u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_0030AE18; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0030AE70; } }
L_0030AE18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AE20u); set32(c.r[5], 0u + 19u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0030AE20u) [[unlikely]] return; }
L_0030AE20:
    set32(c.r[4], ld32((c.r[18].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0030AE40; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0030AE50; } }
L_0030AE40:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_0030AE50:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0030AE70; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 9u));
    c.budget -= 3;
    if (c.r[3].sd[0] > 0) { set32(c.r[5], ld32((c.r[4].w[0] + 4u)));  goto L_0030AE68; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0030AE68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030AE70; } }
L_0030AE70:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0030B12C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[6], 0u + 20000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AE88u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x0030AE88u) [[unlikely]] return; }
L_0030AE88:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0030AFC0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 144u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AEA0u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x0030AEA0u) [[unlikely]] return; }
L_0030AEA0:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AEACu); set32(c.r[5], 0u + 11100u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x0030AEACu) [[unlikely]] return; }
L_0030AEAC:
    set32(c.r[18], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_0030AEC4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0030AF1C; } }
L_0030AEC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AECCu); set32(c.r[5], 0u + 68u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0030AECCu) [[unlikely]] return; }
L_0030AECC:
    set32(c.r[4], ld32((c.r[18].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0030AEEC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0030AEFC; } }
L_0030AEEC:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0030AEFC:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0030AF1C; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  goto L_0030AF14; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0030AF14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030AF1C; } }
L_0030AF1C:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[6], 0u + 20001u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AF2Cu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x0030AF2Cu) [[unlikely]] return; }
L_0030AF2C:
    set32(c.r[5], ld32((c.r[16].w[0] + 144u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AF3Cu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x0030AF3Cu) [[unlikely]] return; }
L_0030AF3C:
    set32(c.r[5], ld32((c.r[17].w[0] + 112u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AF48u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_007A(c, 312u, depth + 1u); else { c.pc = 0x0030B150u; return; } if (c.pc != 0x0030AF48u) [[unlikely]] return; }
L_0030AF48:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 20000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AF5Cu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 55u, depth + 1u); else { c.pc = 0x002A8670u; return; } if (c.pc != 0x0030AF5Cu) [[unlikely]] return; }
L_0030AF5C:
    set32(c.r[5], ld32((c.r[17].w[0] + 112u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AF68u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_007A(c, 324u, depth + 1u); else { c.pc = 0x0030B1F0u; return; } if (c.pc != 0x0030AF68u) [[unlikely]] return; }
L_0030AF68:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 20001u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AF7Cu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 55u, depth + 1u); else { c.pc = 0x002A8670u; return; } if (c.pc != 0x0030AF7Cu) [[unlikely]] return; }
L_0030AF7C:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AF88u); c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 126u)));  if (depth < kMaxDepth) unit_005A(c, 312u, depth + 1u); else { c.pc = 0x0028B280u; return; } if (c.pc != 0x0030AF88u) [[unlikely]] return; }
L_0030AF88:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0030AF98; }
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 1;
L_0030AF98:
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 20u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AFB4u); set32(c.r[8], 0u - 1u);  if (depth < kMaxDepth) unit_0068(c, 247u, depth + 1u); else { c.pc = 0x002C2D00u; return; } if (c.pc != 0x0030AFB4u) [[unlikely]] return; }
L_0030AFB4:
    set32(c.r[3], 0u + 2u);
    st32((c.r[17].w[0] + 116u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 120u), 0u);
    c.budget -= 3;
L_0030AFC0:
    set32(c.r[3], ld32((c.r[17].w[0] + 120u)));
    c.budget -= 1;
L_0030AFC4:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].d[0] = c.r[3].sd[0] < 21ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; st32((c.r[17].w[0] + 120u), c.r[3].w[0]);  if (t) { goto L_0030B12C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[2].w[0] + 512u)));  goto L_0030AFE8; }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0030AFE8:
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 160u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 112u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B004u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 108u)));  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x0030B004u) [[unlikely]] return; }
L_0030B004:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 112u)));
    c.f[1] = c.r[2].w[0];
    c.f[20] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B028u);  if (depth < kMaxDepth) unit_005B(c, 32u, depth + 1u); else { c.pc = 0x0028C6D0u; return; } if (c.pc != 0x0030B028u) [[unlikely]] return; }
L_0030B028:
    set32(c.r[2], ld32((c.r[17].w[0] + 112u)));
    c.f[0] = ld32((c.r[2].w[0] + 1148u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[20]);
    st32((c.r[2].w[0] + 1148u), c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B040u); set32(c.r[4], ld32((c.r[17].w[0] + 112u)));  if (depth < kMaxDepth) unit_005A(c, 365u, depth + 1u); else { c.pc = 0x0028BB30u; return; } if (c.pc != 0x0030B040u) [[unlikely]] return; }
L_0030B040:
    set32(c.r[2], ld32((c.r[17].w[0] + 112u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B04Cu); set32(c.r[4], ld32((c.r[2].w[0] + 1312u)));  if (depth < kMaxDepth) unit_0059(c, 335u, depth + 1u); else { c.pc = 0x00286550u; return; } if (c.pc != 0x0030B04Cu) [[unlikely]] return; }
L_0030B04C:
    set32(c.r[2], 0u + 3u);
    st32((c.r[17].w[0] + 116u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st32((c.r[3].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 80u)));
    c.f[0] = ld32((c.r[2].w[0] + 1152u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 592u)));
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[2].w[0] + 1152u), c.f[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B098u); set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  if (depth < kMaxDepth) unit_005A(c, 365u, depth + 1u); else { c.pc = 0x0028BB30u; return; } if (c.pc != 0x0030B098u) [[unlikely]] return; }
L_0030B098:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B0ACu); set32(c.r[5], 0u + 35u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030B0ACu) [[unlikely]] return; }
L_0030B0AC:
    set32(c.r[2], ld32((c.r[17].w[0] + 112u)));
    c.budget -= 1;
L_0030B0B0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  goto L_0030B0E4; }
    set32(c.r[4], ld32((c.r[2].w[0] + 1312u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 112u)));  goto L_0030B0D8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B0CCu);  if (depth < kMaxDepth) unit_0059(c, 328u, depth + 1u); else { c.pc = 0x00286460u; return; } if (c.pc != 0x0030B0CCu) [[unlikely]] return; }
L_0030B0CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030B12C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 112u)));
    c.budget -= 1;
L_0030B0D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B0E0u);  if (depth < kMaxDepth) unit_005B(c, 35u, depth + 1u); else { c.pc = 0x0028C720u; return; } if (c.pc != 0x0030B0E0u) [[unlikely]] return; }
L_0030B0E0:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 1;
L_0030B0E4:
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B0F4u); set32(c.r[5], 0u + 36u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030B0F4u) [[unlikely]] return; }
L_0030B0F4:
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], ld32((c.r[3].w[0] + 1104u)));  if (t) { goto L_0030B10C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    c.budget -= 2;
L_0030B10C:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B11Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005A(c, 344u, depth + 1u); else { c.pc = 0x0028B8A0u; return; } if (c.pc != 0x0030B11Cu) [[unlikely]] return; }
L_0030B11C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B124u); set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  if (depth < kMaxDepth) unit_005A(c, 290u, depth + 1u); else { c.pc = 0x0028AF40u; return; } if (c.pc != 0x0030B124u) [[unlikely]] return; }
L_0030B124:
    set32(c.r[3], 0u + 4u);
    st32((c.r[17].w[0] + 116u), c.r[3].w[0]);
    c.budget -= 2;
L_0030B12C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0030B130:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0030B150:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[2], ld32((c.r[5].w[0] + 148u)));  goto L_0030B160; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0030B1E0; } }
L_0030B160:
    set32(c.r[2], c.r[2].w[0] - 1000u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(14ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0030B1E0; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 22512u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00308000u < 16384u) { entry = entries_007A[(t - 0x00308000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0030B18C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 700u);  if (t) { goto L_0030B1E0; } }
L_0030B194:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 710u);  if (t) { goto L_0030B1E0; } }
L_0030B19C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 720u);  if (t) { goto L_0030B1E0; } }
L_0030B1A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 730u);  if (t) { goto L_0030B1E0; } }
L_0030B1AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 740u);  if (t) { goto L_0030B1E0; } }
L_0030B1B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 750u);  if (t) { goto L_0030B1E0; } }
L_0030B1BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 760u);  if (t) { goto L_0030B1E0; } }
L_0030B1C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 770u);  if (t) { goto L_0030B1E0; } }
L_0030B1CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 780u);  if (t) { goto L_0030B1E0; } }
L_0030B1D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 790u);  if (t) { goto L_0030B1E0; } }
L_0030B1DC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0030B1E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0030B1F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);  goto L_0030B210; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0030B2E8; } }
L_0030B210:
    ld128((c.r[2].w[0] + 20272u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[2]);
    set32(c.r[5], ld32((c.r[16].w[0] + 420u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_0030B22C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B22Cu); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 232u, depth + 1u); else { c.pc = 0x0018FB30u; return; } if (c.pc != 0x0030B22Cu) [[unlikely]] return; }
L_0030B22C:
    set32(c.r[2], ld32((c.r[16].w[0] + 148u)));
    set32(c.r[2], c.r[2].w[0] - 1000u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(14ll) ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], 0u + 780u);  goto L_0030B2E8; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 22448u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00308000u < 16384u) { entry = entries_007A[(t - 0x00308000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0030B25C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 700u);  if (t) { goto L_0030B2E8; } }
L_0030B264:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 710u);  if (t) { goto L_0030B2E8; } }
L_0030B26C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 720u);  if (t) { goto L_0030B2E8; } }
L_0030B274:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 730u);  if (t) { goto L_0030B2E8; } }
L_0030B27C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 770u);  if (t) { goto L_0030B2E8; } }
L_0030B284:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 780u);  if (t) { goto L_0030B2E8; } }
L_0030B28C:
    set32(c.r[2], ld32((c.r[16].w[0] + 420u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 740u);  goto L_0030B2E8; }
    c.f[1] = ld32((c.r[29].w[0] + 40u));
    c.f[0] = ld32((c.r[28].w[0] - 32664u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[1] = ld32((c.r[29].w[0] + 32u));  goto L_0030B2B8; }
    set32(c.r[2], 0u + 740u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030B2E8; } }
L_0030B2B8:
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[28].w[0] - 32124u));  goto L_0030B2CC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 750u);  if (t) { goto L_0030B2E8; } }
L_0030B2CC:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[2], 0u + 790u);  goto L_0030B2DC; }
    set32(c.r[2], 0u + 760u);
    c.budget -= 1;
L_0030B2DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030B2E8; } }
L_0030B2E4:
    set32(c.r[2], 0u + 780u);
    c.budget -= 1;
L_0030B2E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0030B300:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0030B330; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B31Cu);  if (depth < kMaxDepth) unit_007A(c, 238u, depth + 1u); else { c.pc = 0x0030A790u; return; } if (c.pc != 0x0030B31Cu) [[unlikely]] return; }
L_0030B31C:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[16].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0030B328; }
    set32(c.r[2], 0u + 100u);
    c.budget -= 1;
L_0030B328:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0030B33C; } }
L_0030B330:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B338u);  if (depth < kMaxDepth) unit_0063(c, 165u, depth + 1u); else { c.pc = 0x002ADB90u; return; } if (c.pc != 0x0030B338u) [[unlikely]] return; }
L_0030B338:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0030B33C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030B350:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0030B3D0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 26224u);
    set32(c.r[2], c.r[2].w[0] - 26168u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0030B3B8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 25440u);
    set32(c.r[2], c.r[2].w[0] + 25496u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 52u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B3ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x0030B3ACu) [[unlikely]] return; }
L_0030B3AC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B3B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0030B3B8u) [[unlikely]] return; }
L_0030B3B8:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0030B3D4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B3D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0030B3D0u) [[unlikely]] return; }
L_0030B3D0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0030B3D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0030B3F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0030B48C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 26128u);
    set32(c.r[2], c.r[2].w[0] - 26072u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0030B474; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23120u);
    set32(c.r[2], c.r[2].w[0] + 23176u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0030B474; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B468u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x0030B468u) [[unlikely]] return; }
L_0030B468:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B474u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0030B474u) [[unlikely]] return; }
L_0030B474:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0030B490; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B48Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0030B48Cu) [[unlikely]] return; }
L_0030B48C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0030B490:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0030B4B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0030B53C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 26032u);
    set32(c.r[2], c.r[2].w[0] - 25976u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0030B524; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 28176u);
    set32(c.r[2], c.r[2].w[0] + 28232u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 816u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B50Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x0030B50Cu) [[unlikely]] return; }
L_0030B50C:
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B518u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x0030B518u) [[unlikely]] return; }
L_0030B518:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B524u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0030B524u) [[unlikely]] return; }
L_0030B524:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0030B540; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B53Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0030B53Cu) [[unlikely]] return; }
L_0030B53C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0030B540:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0030B560:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0030B4B0u | kUnwind; return; } goto L_0030B4B0; }
L_0030B570:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0030B3F0u | kUnwind; return; } goto L_0030B3F0; }
L_0030B580:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0030B350u | kUnwind; return; } goto L_0030B350; }
L_0030B590:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B5CCu); c.r[16].d[0] = c.r[9].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x0030B5CCu) [[unlikely]] return; }
L_0030B5CC:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0030B5D8; } }
    set32(c.r[5], c.r[20].w[0] + 52u);
    c.budget -= 1;
L_0030B5D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B5E0u); set32(c.r[4], c.r[21].w[0] + 52u);  if (depth < kMaxDepth) unit_0056(c, 112u, depth + 1u); else { c.pc = 0x00278F30u; return; } if (c.pc != 0x0030B5E0u) [[unlikely]] return; }
L_0030B5E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 25792u);
    set32(c.r[2], c.r[2].w[0] - 25736u);
    st32((c.r[21].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[21].w[0] + 96u);
    st32((c.r[21].w[0] + 52u), c.r[2].w[0]);
    st32((c.r[21].w[0] + 72u), c.r[20].w[0]);
    st32((c.r[21].w[0] + 76u), c.r[19].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B60Cu); st32((c.r[21].w[0] + 80u), 0u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x0030B60Cu) [[unlikely]] return; }
L_0030B60C:
    st32((c.r[21].w[0] + 160u), c.r[16].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[21].w[0] + 168u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[21].w[0] + 184u), 0u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[21].w[0] + 172u), c.r[2].w[0]);
    st32((c.r[21].w[0] + 176u), c.r[2].w[0]);
    st32((c.r[21].w[0] + 180u), 0u);
    st32((c.r[21].w[0] + 200u), 0u);
    st32((c.r[21].w[0] + 196u), 0u);
    st32((c.r[21].w[0] + 192u), 0u);
    st32((c.r[21].w[0] + 204u), c.r[3].w[0]);
    st32((c.r[21].w[0] + 216u), 0u);
    st32((c.r[21].w[0] + 212u), 0u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B650u); st32((c.r[21].w[0] + 208u), 0u);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x0030B650u) [[unlikely]] return; }
L_0030B650:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B658u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x0030B658u) [[unlikely]] return; }
L_0030B658:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[19].w[0] + 688u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B668u); set32(c.r[6], c.r[19].w[0] + 704u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x0030B668u) [[unlikely]] return; }
L_0030B668:
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = ld32((c.r[29].w[0] + 112u));
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.f[1] = ld32((c.r[29].w[0] + 116u));
    set32(c.r[5], c.r[29].w[0] + 144u);
    st32((c.r[29].w[0] + 152u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 124u));
    c.f[12] = c.r[2].w[0];
    st32((c.r[29].w[0] + 144u), c.f[2]);
    st32((c.r[29].w[0] + 148u), c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B69Cu); st32((c.r[29].w[0] + 156u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x0030B69Cu) [[unlikely]] return; }
L_0030B69C:
    c.f[3] = ld32((c.r[29].w[0] + 132u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[29].w[0] + 136u));
    set32(c.r[4], 0u - 1u);
    c.f[1] = ld32((c.r[29].w[0] + 140u));
    set32(c.r[3], 0u + 1u);
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[21].w[0] + 224u), c.f[0]);
    st32((c.r[21].w[0] + 228u), c.f[3]);
    st32((c.r[21].w[0] + 232u), c.f[2]);
    st32((c.r[21].w[0] + 236u), c.f[1]);
    st32((c.r[21].w[0] + 248u), 0u);
    st32((c.r[21].w[0] + 244u), 0u);
    st32((c.r[21].w[0] + 240u), 0u);
    st32((c.r[21].w[0] + 252u), c.r[5].w[0]);
    st32((c.r[21].w[0] + 264u), 0u);
    st32((c.r[21].w[0] + 260u), 0u);
    st32((c.r[21].w[0] + 256u), 0u);
    st32((c.r[21].w[0] + 268u), c.r[5].w[0]);
    st32((c.r[21].w[0] + 272u), c.r[18].w[0]);
    st32((c.r[21].w[0] + 276u), c.r[17].w[0]);
    st32((c.r[21].w[0] + 280u), c.r[4].w[0]);
    st32((c.r[21].w[0] + 284u), 0u);
    st32((c.r[21].w[0] + 288u), c.r[4].w[0]);
    st32((c.r[21].w[0] + 296u), c.r[3].w[0]);
    st32((c.r[21].w[0] + 292u), c.r[4].w[0]);
    st32((c.r[21].w[0] + 300u), 0u);
    st32((c.r[21].w[0] + 304u), 0u);
    st32((c.r[21].w[0] + 308u), 0u);
    st32((c.r[21].w[0] + 312u), 0u);
    st32((c.r[21].w[0] + 316u), 0u);
    st32((c.r[21].w[0] + 320u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 42;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0030B750:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 272u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B76Cu); set32(c.r[4], ld32((c.r[4].w[0] + 72u)));  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x0030B76Cu) [[unlikely]] return; }
L_0030B76C:
    set32(c.r[4], ld32((c.r[16].w[0] + 300u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 304u)));  goto L_0030B788; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B780u);  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x0030B780u) [[unlikely]] return; }
L_0030B780:
    st32((c.r[16].w[0] + 300u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 304u)));
    c.budget -= 2;
L_0030B788:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 320u)));  goto L_0030B7A8; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B7A0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030B7A0u) [[unlikely]] return; }
L_0030B7A0:
    st32((c.r[16].w[0] + 304u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 320u)));
    c.budget -= 2;
L_0030B7A8:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 24u)));  goto L_0030B7C0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B7B8u);  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x0030B7B8u) [[unlikely]] return; }
L_0030B7B8:
    st32((c.r[16].w[0] + 320u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 2;
L_0030B7C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030B7E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[4].w[0] + 180u), c.r[3].w[0]);
    set32(c.r[2], c.r[16].w[0] << 3);
    st32((c.r[4].w[0] + 312u), 0u);
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    st32((c.r[4].w[0] + 308u), c.r[16].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B820u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x0030B820u) [[unlikely]] return; }
L_0030B820:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[18].w[0] + 300u), c.r[2].w[0]);  if (t) { goto L_0030B954; } }
    set32(c.r[2], c.r[16].w[0] << 3);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B840u); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x0030B840u) [[unlikely]] return; }
L_0030B840:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B848u); set32(c.r[4], 0u + 352u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0030B848u) [[unlikely]] return; }
L_0030B848:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[18].w[0] + 304u), c.r[4].w[0]);  goto L_0030B864; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B85Cu);  if (depth < kMaxDepth) unit_000E(c, 95u, depth + 1u); else { c.pc = 0x00158830u; return; } if (c.pc != 0x0030B85Cu) [[unlikely]] return; }
L_0030B85C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[18].w[0] + 304u), c.r[4].w[0]);
    c.budget -= 2;
L_0030B864:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 300u)));  goto L_0030B958; }
    set32(c.r[4], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[3], 0u + 3u);
    set32(c.r[5], ld32((c.r[4].w[0] + 608u)));
    set32(c.r[16], c.r[5].w[0] + 976u);
    set32(c.r[5], ld32((c.r[5].w[0] + 992u)));
    c.budget -= 7;
    if (c.r[5].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[18].w[0] + 300u)));  goto L_0030B930; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B890u);  if (depth < kMaxDepth) unit_005B(c, 29u, depth + 1u); else { c.pc = 0x0028C630u; return; } if (c.pc != 0x0030B890u) [[unlikely]] return; }
L_0030B890:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 84u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], ld32((c.r[2].w[0] + 400u)));  if (t) { goto L_0030B8DC; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 72u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[6].d[0] = 0ull + 0ull;  goto L_0030B8D4; }
    set32(c.r[3], ld32((c.r[3].w[0] + 68u)));
    c.r[3].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[5].w[0] << 2);  goto L_0030B8CC; }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030B8D4; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    c.budget -= 1;
L_0030B8CC:
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0])));
    c.budget -= 2;
L_0030B8D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030B8E0; } }
L_0030B8DC:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0030B8E0:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0030B92C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 304u)));
    set32(c.r[3], 0u + 7u);
    st32((c.r[2].w[0] + 204u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 304u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B904u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 156u, depth + 1u); else { c.pc = 0x00158F70u; return; } if (c.pc != 0x0030B904u) [[unlikely]] return; }
L_0030B904:
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    set32(c.r[4], ld32((c.r[18].w[0] + 304u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 160u), c.f[0]);
    st32((c.r[4].w[0] + 164u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 304u)));
    st32((c.r[4].w[0] + 176u), 0u);
    st32((c.r[4].w[0] + 180u), 0u);
    st32((c.r[4].w[0] + 184u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 188u), c.r[3].w[0]);
    c.budget -= 10;
L_0030B92C:
    set32(c.r[3], ld32((c.r[18].w[0] + 300u)));
    c.budget -= 1;
L_0030B930:
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[18].w[0] + 184u), c.f[1]);  if (t) { goto L_0030B98C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B94Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_007A(c, 376u, depth + 1u); else { c.pc = 0x0030B9B0u; return; } if (c.pc != 0x0030B94Cu) [[unlikely]] return; }
L_0030B94C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0030B990; } }
L_0030B954:
    set32(c.r[4], ld32((c.r[18].w[0] + 300u)));
    c.budget -= 1;
L_0030B958:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 304u)));  goto L_0030B970; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B968u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x0030B968u) [[unlikely]] return; }
L_0030B968:
    st32((c.r[18].w[0] + 300u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 304u)));
    c.budget -= 2;
L_0030B970:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0030B98C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B988u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030B988u) [[unlikely]] return; }
L_0030B988:
    st32((c.r[18].w[0] + 304u), 0u);
    c.budget -= 1;
L_0030B98C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0030B990:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0030B9B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 272u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B9D4u); set32(c.r[4], ld32((c.r[4].w[0] + 72u)));  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x0030B9D4u) [[unlikely]] return; }
L_0030B9D4:
    set32(c.r[3], ld32((c.r[16].w[0] + 180u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[5], ld32((c.r[16].w[0] + 312u)));  goto L_0030BA28; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[16].w[0] + 168u));  goto L_0030B9F4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0030BAC8; } }
L_0030B9F4:
    c.f[0] = ld32((c.r[16].w[0] + 164u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 164u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 320u)));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0030BAC4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 272u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BA20u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x0030BA20u) [[unlikely]] return; }
L_0030BA20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030BAC4; } }
L_0030BA28:
    set32(c.r[2], ld32((c.r[16].w[0] + 300u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[18].w[0])));
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BA4Cu); set32(c.r[4], ld32((c.r[16].w[0] + 304u)));  if (depth < kMaxDepth) unit_000E(c, 140u, depth + 1u); else { c.pc = 0x00158D80u; return; } if (c.pc != 0x0030BA4Cu) [[unlikely]] return; }
L_0030BA4C:
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BA58u); set32(c.r[4], ld32((c.r[16].w[0] + 304u)));  if (depth < kMaxDepth) unit_000E(c, 147u, depth + 1u); else { c.pc = 0x00158E60u; return; } if (c.pc != 0x0030BA58u) [[unlikely]] return; }
L_0030BA58:
    set32(c.r[4], ld32((c.r[16].w[0] + 304u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BA64u); set32(c.r[5], ld32((c.r[17].w[0] + 12u)));  if (depth < kMaxDepth) unit_000E(c, 148u, depth + 1u); else { c.pc = 0x00158E90u; return; } if (c.pc != 0x0030BA64u) [[unlikely]] return; }
L_0030BA64:
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BA70u); set32(c.r[4], ld32((c.r[16].w[0] + 304u)));  if (depth < kMaxDepth) unit_000E(c, 150u, depth + 1u); else { c.pc = 0x00158EB0u; return; } if (c.pc != 0x0030BA70u) [[unlikely]] return; }
L_0030BA70:
    c.f[0] = ld32((c.r[18].w[0] + 12u));
    st32((c.r[16].w[0] + 164u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 20u));
    st32((c.r[16].w[0] + 176u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030BAC4; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 272u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BA98u); set32(c.r[4], ld32((c.r[16].w[0] + 72u)));  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x0030BA98u) [[unlikely]] return; }
L_0030BA98:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 272u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BAACu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x0030BAACu) [[unlikely]] return; }
L_0030BAAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030BAC4; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 304u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BAC4u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 428u, depth + 1u); else { c.pc = 0x00283F50u; return; } if (c.pc != 0x0030BAC4u) [[unlikely]] return; }
L_0030BAC4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0030BAC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BAD0u);  if (depth < kMaxDepth) unit_007B(c, 26u, depth + 1u); else { c.pc = 0x0030C280u; return; } if (c.pc != 0x0030BAD0u) [[unlikely]] return; }
L_0030BAD0:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0030BB00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 10;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0030BC58; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 72u)));  goto L_0030BB44; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030BC54; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 1;
L_0030BB44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BB4Cu); set32(c.r[5], ld32((c.r[17].w[0] + 272u)));  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x002A8970u; return; } if (c.pc != 0x0030BB4Cu) [[unlikely]] return; }
L_0030BB4C:
    set32(c.r[3], ld32((c.r[17].w[0] + 180u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0030BB88; } }
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));  goto L_0030BB8C; }
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030BC54; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030BC54; } }
L_0030BB88:
    set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));
    c.budget -= 1;
L_0030BB8C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[3], ld32((c.r[5].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[5].w[0] + 80u));  goto L_0030BBBC; }
    c.f[1] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030BBBC; } }
    c.f[1] = ld32((c.r[5].w[0] + 80u));
    c.budget -= 1;
L_0030BBBC:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0030BC54; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030BC54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BBE8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_007B(c, 26u, depth + 1u); else { c.pc = 0x0030C280u; return; } if (c.pc != 0x0030BBE8u) [[unlikely]] return; }
L_0030BBE8:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[17].w[0] + 76u)));  goto L_0030BC0C; }
    set32(c.r[4], c.r[16].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BBFCu); set32(c.r[5], c.r[17].w[0] + 96u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x0030BBFCu) [[unlikely]] return; }
L_0030BBFC:
    set32(c.r[2], ld32((c.r[16].w[0] + 308u)));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[16].w[0] + 308u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 4;
L_0030BC0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BC14u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x0030BC14u) [[unlikely]] return; }
L_0030BC14:
    set32(c.r[5], c.r[16].w[0] + 688u);
    set32(c.r[4], c.r[17].w[0] + 240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BC24u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0027(c, 199u, depth + 1u); else { c.pc = 0x001BE000u; return; } if (c.pc != 0x0030BC24u) [[unlikely]] return; }
L_0030BC24:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0030BC54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BC40u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_007B(c, 7u, depth + 1u); else { c.pc = 0x0030C040u; return; } if (c.pc != 0x0030BC40u) [[unlikely]] return; }
L_0030BC40:
    set32(c.r[4], ld32((c.r[17].w[0] + 180u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0030BC54; } }
    st32((c.r[17].w[0] + 316u), c.r[3].w[0]);
    c.budget -= 1;
L_0030BC54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0030BC58:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0030BC70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0030BD0C; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 180u)));  goto L_0030BCB0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030BD08; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 180u)));
    c.budget -= 1;
L_0030BCB0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 304u)));  goto L_0030BCD0; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0030BD08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030BD08; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 304u)));
    c.budget -= 1;
L_0030BCD0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030BD08; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 316u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030BD08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BCECu); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 145u, depth + 1u); else { c.pc = 0x00161540u; return; } if (c.pc != 0x0030BCECu) [[unlikely]] return; }
L_0030BCEC:
    set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BCF8u); set32(c.r[5], c.r[16].w[0] + 96u);  if (depth < kMaxDepth) unit_0010(c, 150u, depth + 1u); else { c.pc = 0x001615B0u; return; } if (c.pc != 0x0030BCF8u) [[unlikely]] return; }
L_0030BCF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BD00u); set32(c.r[4], ld32((c.r[16].w[0] + 304u)));  if (depth < kMaxDepth) unit_000E(c, 213u, depth + 1u); else { c.pc = 0x00159910u; return; } if (c.pc != 0x0030BD00u) [[unlikely]] return; }
L_0030BD00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BD08u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 147u, depth + 1u); else { c.pc = 0x00161570u; return; } if (c.pc != 0x0030BD08u) [[unlikely]] return; }
L_0030BD08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0030BD0C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030BD20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 11;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  [[clang::musttail]] return unit_007B(c, 6u, depth); }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));  goto L_0030BDB0; }
    set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[3], ld32((c.r[5].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { c.f[2] = ld32((c.r[5].w[0] + 80u));  goto L_0030BD84; }
    c.f[2] = 0u;
    c.budget -= 1;
L_0030BD84:
    c.f[1] = ld32((c.r[16].w[0] + 184u));
    c.f[0] = 0u;
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 184u), c.f[1]);  if (t) { [[clang::musttail]] return unit_007B(c, 5u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BDA8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007A(c, 376u, depth + 1u); else { c.pc = 0x0030B9B0u; return; } if (c.pc != 0x0030BDA8u) [[unlikely]] return; }
L_0030BDA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_007B(c, 5u, depth); } }
L_0030BDB0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[3], ld32((c.r[5].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { c.f[3] = ld32((c.r[5].w[0] + 80u));  goto L_0030BDD4; }
    c.f[3] = 0u;
    c.budget -= 1;
L_0030BDD4:
    c.f[1] = ld32((c.r[16].w[0] + 164u));
    c.budget -= 1;
L_0030BDD8:
    c.f[2] = ld32((c.r[16].w[0] + 168u));
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[3]);
    st32((c.r[16].w[0] + 164u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 10;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 180u)));  goto L_0030BE30; }
    c.f[1] = ld32((c.r[16].w[0] + 164u));
    c.f[0] = ld32((c.r[16].w[0] + 172u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0030BE2C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    set32(c.r[3], 0u - 3u);
    st32((c.r[16].w[0] + 168u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 6;
L_0030BE2C:
    set32(c.r[4], ld32((c.r[16].w[0] + 180u)));
    c.budget -= 1;
L_0030BE30:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 304u)));  goto L_0030BE9C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.f[1] = ld32((c.r[16].w[0] + 176u));  goto L_0030BE4C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_007B(c, 5u, depth); } }
L_0030BE4C:
    c.f[0] = ld32((c.r[16].w[0] + 164u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { [[clang::musttail]] return unit_007B(c, 5u, depth); } }
    goto L_0030BE5C;
L_0030BE58:
    c.budget -= 1;
L_0030BE5C:
    st32((c.r[16].w[0] + 164u), c.f[1]);
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 80u)));  goto L_0030BE7C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BE78u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007B(c, 7u, depth + 1u); else { c.pc = 0x0030C040u; return; } if (c.pc != 0x0030BE78u) [[unlikely]] return; }
L_0030BE78:
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 1;
L_0030BE7C:
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_007B(c, 5u, depth); } }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_007B(c, 5u, depth); } }
L_0030BE9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BEA4u);  if (depth < kMaxDepth) unit_000E(c, 152u, depth + 1u); else { c.pc = 0x00158EF0u; return; } if (c.pc != 0x0030BEA4u) [[unlikely]] return; }
L_0030BEA4:
    c.f[1] = ld32((c.r[16].w[0] + 176u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], ld32((c.r[16].w[0] + 304u)));  goto L_0030BED0; }
    c.f[0] = ld32((c.r[16].w[0] + 164u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[2], ld32((c.r[16].w[0] + 308u)));  goto L_0030BEF8; }
    set32(c.r[4], ld32((c.r[16].w[0] + 304u)));
    c.budget -= 1;
L_0030BED0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BED8u); c.f[20] = ld32((c.r[16].w[0] + 164u));  if (depth < kMaxDepth) unit_000E(c, 152u, depth + 1u); else { c.pc = 0x00158EF0u; return; } if (c.pc != 0x0030BED8u) [[unlikely]] return; }
L_0030BED8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], ld32((c.r[16].w[0] + 304u)));  [[clang::musttail]] return unit_007B(c, 4u, depth); }
    set32(c.r[2], ld32((c.r[16].w[0] + 308u)));
    c.budget -= 1;
L_0030BEF8:
    set32(c.r[3], ld32((c.r[16].w[0] + 312u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] + 1u);  goto L_0030BF84; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BF14u); set32(c.r[4], ld32((c.r[16].w[0] + 304u)));  if (depth < kMaxDepth) unit_000E(c, 152u, depth + 1u); else { c.pc = 0x00158EF0u; return; } if (c.pc != 0x0030BF14u) [[unlikely]] return; }
L_0030BF14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 164u), c.f[0]);
    c.f[12] = ld32((c.r[16].w[0] + 164u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BF34u); set32(c.r[4], ld32((c.r[16].w[0] + 304u)));  if (depth < kMaxDepth) unit_000E(c, 150u, depth + 1u); else { c.pc = 0x00158EB0u; return; } if (c.pc != 0x0030BF34u) [[unlikely]] return; }
L_0030BF34:
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 180u)));  goto L_0030BF50; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BF4Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007B(c, 7u, depth + 1u); else { c.pc = 0x0030C040u; return; } if (c.pc != 0x0030BF4Cu) [[unlikely]] return; }
L_0030BF4C:
    set32(c.r[4], ld32((c.r[16].w[0] + 180u)));
    c.budget -= 1;
L_0030BF50:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 80u)));  goto L_0030BF64; }
    st32((c.r[16].w[0] + 316u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 2;
L_0030BF64:
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_007B(c, 5u, depth); } }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_007B(c, 5u, depth); } }
L_0030BF84:
    set32(c.r[2], c.r[3].w[0] << 3);
    st32((c.r[16].w[0] + 312u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 300u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[16].w[0] + 184u), c.f[0]);
    st32((c.r[16].w[0] + 164u), c.f[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 312u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 300u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[3], c.r[6].w[0] << 3);
    set32(c.r[5], ld32((c.r[16].w[0] + 272u)));
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BFCCu); set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x0030BFCCu) [[unlikely]] return; }
L_0030BFCC:
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  [[clang::musttail]] return unit_007B(c, 3u, depth); }
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 272u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BFE8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x0030BFE8u) [[unlikely]] return; }
L_0030BFE8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_007B(c, 2u, depth); } }
    c.f[0] = ld32((c.r[16].w[0] + 184u));
    st32((c.r[4].w[0] + 328u), c.f[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 304u)));
    c.budget -= 3;
    [[clang::musttail]] return unit_007B(c, 1u, depth);
}

}
