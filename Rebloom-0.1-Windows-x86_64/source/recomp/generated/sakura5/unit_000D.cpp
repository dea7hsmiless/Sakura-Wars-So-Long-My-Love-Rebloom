#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_000D[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 0,
    0, 5, 0, 0, 6, 7, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0,
    10, 0, 0, 0, 0, 0, 11, 0, 12, 0, 13, 0, 14, 0, 0, 0, 15, 0, 0, 16, 0, 0, 17, 0, 0, 18, 0, 0, 19, 0, 20, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    34, 35, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 58, 0, 0,
    59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 65, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    69, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    78, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 88, 0, 0, 89, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0,
    93, 0, 0, 94, 0, 95, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0,
    0, 102, 0, 0, 0, 0, 103, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0,
    0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    114, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 117, 0, 0, 118, 0,
    0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134,
    0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    140, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148,
    0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 159,
    0, 0, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 170, 0, 171, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0,
    0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0,
    0, 0, 0, 178, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0,
    0, 182, 0, 0, 0, 183, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 186, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0,
    190, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0,
    0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 198, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0,
    0, 200, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0,
    205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    215, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 218, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 229, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 234, 0, 0, 235, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 0, 238, 0, 0, 239, 0, 0,
    0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 246,
    0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 251,
    0, 0, 252, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 0, 255, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260,
    0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 0,
    0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0, 269, 0, 0, 270, 0, 0, 271, 0, 0, 272,
    0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0,
    0, 279, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0,
    285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 287, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 293, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 299,
    0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 306,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    307, 0, 0, 0, 0, 308, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0,
    312, 0, 0, 313, 0, 0, 314, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 318, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0,
    320, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 325, 0, 0, 326,
    0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 332, 0, 0, 0,
    333, 0, 0, 0, 334, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0,
    338, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 342, 0, 0, 343, 0, 0,
    0, 344, 0, 0, 0, 345, 0, 0, 0, 346, 0, 0, 347, 0, 0, 0, 348, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 352, 0, 0, 0, 353, 0, 0, 354, 0, 0,
    0, 355, 0, 0, 0, 356, 0, 0, 0, 357, 0, 0, 358, 0, 0, 0, 359, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 362, 0, 0, 363, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 365, 0, 0,
    0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 368, 0, 0, 369, 0, 0, 370,
    0, 0, 371, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 375, 0, 0, 0, 0, 376, 0, 377, 0, 0, 0, 378, 0, 0, 379, 0, 380,
    0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0,
    0, 0, 0, 384, 0, 0, 0, 0, 0, 385, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0,
    389, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 392, 0, 0,
    0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    395, 0, 0, 0, 396, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 399,
    0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 402, 0, 0, 0, 403, 0, 0, 0, 404, 0, 405, 0, 0, 0,
    0, 0, 406, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 410, 0, 411, 0,
    0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 414, 0, 0, 0, 415, 0, 0, 0, 0, 0, 416, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418,
    0, 0, 0, 0, 419, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 422, 0, 0, 0,
    0, 0, 423, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0,
    0, 0, 428, 0, 0, 0, 0, 0, 429, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0,
    0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435,
    0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_000D(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00154000;
    case 2u: goto L_0015403C;
    case 3u: goto L_00154060;
    case 4u: goto L_0015406C;
    case 5u: goto L_00154084;
    case 6u: goto L_00154090;
    case 7u: goto L_00154094;
    case 8u: goto L_001540B0;
    case 9u: goto L_001540E4;
    case 10u: goto L_00154100;
    case 11u: goto L_00154118;
    case 12u: goto L_00154120;
    case 13u: goto L_00154128;
    case 14u: goto L_00154130;
    case 15u: goto L_00154140;
    case 16u: goto L_0015414C;
    case 17u: goto L_00154158;
    case 18u: goto L_00154164;
    case 19u: goto L_00154170;
    case 20u: goto L_00154178;
    case 21u: goto L_00154214;
    case 22u: goto L_00154230;
    case 23u: goto L_001542A0;
    case 24u: goto L_001542F0;
    case 25u: goto L_00154320;
    case 26u: goto L_00154328;
    case 27u: goto L_00154350;
    case 28u: goto L_00154380;
    case 29u: goto L_001543B0;
    case 30u: goto L_001543E0;
    case 31u: goto L_00154410;
    case 32u: goto L_00154440;
    case 33u: goto L_00154454;
    case 34u: goto L_00154480;
    case 35u: goto L_00154484;
    case 36u: goto L_001544A8;
    case 37u: goto L_001544D8;
    case 38u: goto L_00154510;
    case 39u: goto L_0015453C;
    case 40u: goto L_00154594;
    case 41u: goto L_001545B0;
    case 42u: goto L_001545D0;
    case 43u: goto L_001545FC;
    case 44u: goto L_00154628;
    case 45u: goto L_00154650;
    case 46u: goto L_00154660;
    case 47u: goto L_00154670;
    case 48u: goto L_00154724;
    case 49u: goto L_00154760;
    case 50u: goto L_001547D0;
    case 51u: goto L_001547E0;
    case 52u: goto L_00154810;
    case 53u: goto L_00154860;
    case 54u: goto L_001548A0;
    case 55u: goto L_001548DC;
    case 56u: goto L_00154930;
    case 57u: goto L_00154968;
    case 58u: goto L_00154974;
    case 59u: goto L_00154980;
    case 60u: goto L_001549D8;
    case 61u: goto L_00154A00;
    case 62u: goto L_00154A28;
    case 63u: goto L_00154A3C;
    case 64u: goto L_00154A54;
    case 65u: goto L_00154A8C;
    case 66u: goto L_00154A98;
    case 67u: goto L_00154AAC;
    case 68u: goto L_00154B40;
    case 69u: goto L_00154B80;
    case 70u: goto L_00154B90;
    case 71u: goto L_00154BD0;
    case 72u: goto L_00154BE4;
    case 73u: goto L_00154C10;
    case 74u: goto L_00154C3C;
    case 75u: goto L_00154C40;
    case 76u: goto L_00154C8C;
    case 77u: goto L_00154CCC;
    case 78u: goto L_00154D80;
    case 79u: goto L_00154DA4;
    case 80u: goto L_00154DB0;
    case 81u: goto L_00154DE0;
    case 82u: goto L_00154E0C;
    case 83u: goto L_00154E2C;
    case 84u: goto L_00154E9C;
    case 85u: goto L_00154EF0;
    case 86u: goto L_00154F24;
    case 87u: goto L_00154FB0;
    case 88u: goto L_00154FB8;
    case 89u: goto L_00154FC4;
    case 90u: goto L_00154FD0;
    case 91u: goto L_00154FE4;
    case 92u: goto L_00154FF4;
    case 93u: goto L_00155000;
    case 94u: goto L_0015500C;
    case 95u: goto L_00155014;
    case 96u: goto L_00155020;
    case 97u: goto L_0015504C;
    case 98u: goto L_00155060;
    case 99u: goto L_001550AC;
    case 100u: goto L_001550DC;
    case 101u: goto L_001550F0;
    case 102u: goto L_00155104;
    case 103u: goto L_00155118;
    case 104u: goto L_00155124;
    case 105u: goto L_00155138;
    case 106u: goto L_0015514C;
    case 107u: goto L_0015515C;
    case 108u: goto L_00155170;
    case 109u: goto L_00155184;
    case 110u: goto L_001551C4;
    case 111u: goto L_001551D4;
    case 112u: goto L_00155280;
    case 113u: goto L_001552D4;
    case 114u: goto L_00155300;
    case 115u: goto L_00155320;
    case 116u: goto L_00155364;
    case 117u: goto L_0015536C;
    case 118u: goto L_00155378;
    case 119u: goto L_00155390;
    case 120u: goto L_001553C0;
    case 121u: goto L_001553EC;
    case 122u: goto L_00155434;
    case 123u: goto L_0015543C;
    case 124u: goto L_00155460;
    case 125u: goto L_001554A4;
    case 126u: goto L_00155504;
    case 127u: goto L_00155540;
    case 128u: goto L_001555C0;
    case 129u: goto L_001555D0;
    case 130u: goto L_00155650;
    case 131u: goto L_00155660;
    case 132u: goto L_001556A0;
    case 133u: goto L_001556B0;
    case 134u: goto L_001556FC;
    case 135u: goto L_00155710;
    case 136u: goto L_00155760;
    case 137u: goto L_00155770;
    case 138u: goto L_001557B0;
    case 139u: goto L_001557C0;
    case 140u: goto L_00155800;
    case 141u: goto L_00155810;
    case 142u: goto L_0015583C;
    case 143u: goto L_00155850;
    case 144u: goto L_00155860;
    case 145u: goto L_00155910;
    case 146u: goto L_0015593C;
    case 147u: goto L_00155944;
    case 148u: goto L_0015597C;
    case 149u: goto L_001559A0;
    case 150u: goto L_001559E8;
    case 151u: goto L_00155AD0;
    case 152u: goto L_00155B14;
    case 153u: goto L_00155B28;
    case 154u: goto L_00155B50;
    case 155u: goto L_00155B8C;
    case 156u: goto L_00155BA4;
    case 157u: goto L_00155BE0;
    case 158u: goto L_00155BF4;
    case 159u: goto L_00155BFC;
    case 160u: goto L_00155C10;
    case 161u: goto L_00155C24;
    case 162u: goto L_00155C34;
    case 163u: goto L_00155C50;
    case 164u: goto L_00155C60;
    case 165u: goto L_00155C98;
    case 166u: goto L_00155CD4;
    case 167u: goto L_00155CF0;
    case 168u: goto L_00155D2C;
    case 169u: goto L_00155D3C;
    case 170u: goto L_00155D44;
    case 171u: goto L_00155D4C;
    case 172u: goto L_00155D68;
    case 173u: goto L_00155D78;
    case 174u: goto L_00155D90;
    case 175u: goto L_00155DB0;
    case 176u: goto L_00155DC8;
    case 177u: goto L_00155DF8;
    case 178u: goto L_00155E0C;
    case 179u: goto L_00155E18;
    case 180u: goto L_00155E40;
    case 181u: goto L_00155E64;
    case 182u: goto L_00155E84;
    case 183u: goto L_00155E94;
    case 184u: goto L_00155EA0;
    case 185u: goto L_00155EC0;
    case 186u: goto L_00155F14;
    case 187u: goto L_00155F20;
    case 188u: goto L_00155FC8;
    case 189u: goto L_00155FE0;
    case 190u: goto L_00156000;
    case 191u: goto L_00156020;
    case 192u: goto L_00156030;
    case 193u: goto L_00156060;
    case 194u: goto L_0015614C;
    case 195u: goto L_00156178;
    case 196u: goto L_00156198;
    case 197u: goto L_001561C0;
    case 198u: goto L_001561C4;
    case 199u: goto L_001561E0;
    case 200u: goto L_00156204;
    case 201u: goto L_00156210;
    case 202u: goto L_00156234;
    case 203u: goto L_00156240;
    case 204u: goto L_00156260;
    case 205u: goto L_00156280;
    case 206u: goto L_00156290;
    case 207u: goto L_001562C0;
    case 208u: goto L_001562D4;
    case 209u: goto L_001562F0;
    case 210u: goto L_00156320;
    case 211u: goto L_00156334;
    case 212u: goto L_00156350;
    case 213u: goto L_0015635C;
    case 214u: goto L_001563B4;
    case 215u: goto L_00156400;
    case 216u: goto L_0015640C;
    case 217u: goto L_00156450;
    case 218u: goto L_00156484;
    case 219u: goto L_001564A0;
    case 220u: goto L_00156508;
    case 221u: goto L_0015651C;
    case 222u: goto L_00156558;
    case 223u: goto L_00156580;
    case 224u: goto L_001565C8;
    case 225u: goto L_001565D8;
    case 226u: goto L_00156610;
    case 227u: goto L_00156630;
    case 228u: goto L_0015665C;
    case 229u: goto L_00156670;
    case 230u: goto L_001566A0;
    case 231u: goto L_001566C0;
    case 232u: goto L_001566F0;
    case 233u: goto L_00156718;
    case 234u: goto L_0015672C;
    case 235u: goto L_00156738;
    case 236u: goto L_00156744;
    case 237u: goto L_00156754;
    case 238u: goto L_00156768;
    case 239u: goto L_00156774;
    case 240u: goto L_00156794;
    case 241u: goto L_001567C4;
    case 242u: goto L_001567EC;
    case 243u: goto L_0015682C;
    case 244u: goto L_00156838;
    case 245u: goto L_0015686C;
    case 246u: goto L_0015687C;
    case 247u: goto L_0015688C;
    case 248u: goto L_0015689C;
    case 249u: goto L_001568C0;
    case 250u: goto L_001568E8;
    case 251u: goto L_001568FC;
    case 252u: goto L_00156908;
    case 253u: goto L_00156914;
    case 254u: goto L_00156924;
    case 255u: goto L_00156938;
    case 256u: goto L_00156944;
    case 257u: goto L_00156964;
    case 258u: goto L_00156994;
    case 259u: goto L_001569BC;
    case 260u: goto L_001569FC;
    case 261u: goto L_00156A08;
    case 262u: goto L_00156A3C;
    case 263u: goto L_00156A4C;
    case 264u: goto L_00156A5C;
    case 265u: goto L_00156A6C;
    case 266u: goto L_00156A90;
    case 267u: goto L_00156AB8;
    case 268u: goto L_00156ACC;
    case 269u: goto L_00156AD8;
    case 270u: goto L_00156AE4;
    case 271u: goto L_00156AF0;
    case 272u: goto L_00156AFC;
    case 273u: goto L_00156B1C;
    case 274u: goto L_00156B4C;
    case 275u: goto L_00156B74;
    case 276u: goto L_00156BB4;
    case 277u: goto L_00156BC0;
    case 278u: goto L_00156BF4;
    case 279u: goto L_00156C04;
    case 280u: goto L_00156C14;
    case 281u: goto L_00156C24;
    case 282u: goto L_00156C40;
    case 283u: goto L_00156C54;
    case 284u: goto L_00156C70;
    case 285u: goto L_00156C80;
    case 286u: goto L_00156CB4;
    case 287u: goto L_00156CCC;
    case 288u: goto L_00156CD8;
    case 289u: goto L_00156D00;
    case 290u: goto L_00156D30;
    case 291u: goto L_00156D4C;
    case 292u: goto L_00156D64;
    case 293u: goto L_00156D70;
    case 294u: goto L_00156DA0;
    case 295u: goto L_00156DD0;
    case 296u: goto L_00156DE0;
    case 297u: goto L_00156E50;
    case 298u: goto L_00156E68;
    case 299u: goto L_00156E7C;
    case 300u: goto L_00156EA0;
    case 301u: goto L_00156EC4;
    case 302u: goto L_00156EF0;
    case 303u: goto L_00156F20;
    case 304u: goto L_00156F34;
    case 305u: goto L_00156F58;
    case 306u: goto L_00156F7C;
    case 307u: goto L_00157000;
    case 308u: goto L_00157014;
    case 309u: goto L_00157028;
    case 310u: goto L_0015704C;
    case 311u: goto L_00157070;
    case 312u: goto L_00157080;
    case 313u: goto L_0015708C;
    case 314u: goto L_00157098;
    case 315u: goto L_001570A4;
    case 316u: goto L_00157100;
    case 317u: goto L_00157144;
    case 318u: goto L_00157150;
    case 319u: goto L_00157168;
    case 320u: goto L_00157180;
    case 321u: goto L_00157190;
    case 322u: goto L_001571AC;
    case 323u: goto L_001571C0;
    case 324u: goto L_001571E4;
    case 325u: goto L_001571F0;
    case 326u: goto L_001571FC;
    case 327u: goto L_00157220;
    case 328u: goto L_00157250;
    case 329u: goto L_00157280;
    case 330u: goto L_001572B0;
    case 331u: goto L_001572E0;
    case 332u: goto L_001572F0;
    case 333u: goto L_00157300;
    case 334u: goto L_00157310;
    case 335u: goto L_00157328;
    case 336u: goto L_00157340;
    case 337u: goto L_00157360;
    case 338u: goto L_00157380;
    case 339u: goto L_001573A0;
    case 340u: goto L_001573C8;
    case 341u: goto L_001573D8;
    case 342u: goto L_001573E8;
    case 343u: goto L_001573F4;
    case 344u: goto L_00157404;
    case 345u: goto L_00157414;
    case 346u: goto L_00157424;
    case 347u: goto L_00157430;
    case 348u: goto L_00157440;
    case 349u: goto L_00157458;
    case 350u: goto L_001574A0;
    case 351u: goto L_001574C8;
    case 352u: goto L_001574D8;
    case 353u: goto L_001574E8;
    case 354u: goto L_001574F4;
    case 355u: goto L_00157504;
    case 356u: goto L_00157514;
    case 357u: goto L_00157524;
    case 358u: goto L_00157530;
    case 359u: goto L_00157540;
    case 360u: goto L_00157558;
    case 361u: goto L_001575A0;
    case 362u: goto L_001575BC;
    case 363u: goto L_001575C8;
    case 364u: goto L_001575E0;
    case 365u: goto L_001575F4;
    case 366u: goto L_00157610;
    case 367u: goto L_00157654;
    case 368u: goto L_00157664;
    case 369u: goto L_00157670;
    case 370u: goto L_0015767C;
    case 371u: goto L_00157688;
    case 372u: goto L_00157694;
    case 373u: goto L_001576E0;
    case 374u: goto L_00157728;
    case 375u: goto L_0015773C;
    case 376u: goto L_00157750;
    case 377u: goto L_00157758;
    case 378u: goto L_00157768;
    case 379u: goto L_00157774;
    case 380u: goto L_0015777C;
    case 381u: goto L_0015778C;
    case 382u: goto L_00157820;
    case 383u: goto L_00157868;
    case 384u: goto L_0015788C;
    case 385u: goto L_001578A4;
    case 386u: goto L_001578B4;
    case 387u: goto L_00157950;
    case 388u: goto L_00157974;
    case 389u: goto L_00157980;
    case 390u: goto L_0015798C;
    case 391u: goto L_001579E8;
    case 392u: goto L_001579F4;
    case 393u: goto L_00157A10;
    case 394u: goto L_00157AD0;
    case 395u: goto L_00157B00;
    case 396u: goto L_00157B10;
    case 397u: goto L_00157B20;
    case 398u: goto L_00157B70;
    case 399u: goto L_00157B7C;
    case 400u: goto L_00157B94;
    case 401u: goto L_00157BB8;
    case 402u: goto L_00157BC8;
    case 403u: goto L_00157BD8;
    case 404u: goto L_00157BE8;
    case 405u: goto L_00157BF0;
    case 406u: goto L_00157C08;
    case 407u: goto L_00157C20;
    case 408u: goto L_00157C3C;
    case 409u: goto L_00157C5C;
    case 410u: goto L_00157C70;
    case 411u: goto L_00157C78;
    case 412u: goto L_00157C84;
    case 413u: goto L_00157CE0;
    case 414u: goto L_00157D08;
    case 415u: goto L_00157D18;
    case 416u: goto L_00157D30;
    case 417u: goto L_00157D38;
    case 418u: goto L_00157D7C;
    case 419u: goto L_00157D90;
    case 420u: goto L_00157D9C;
    case 421u: goto L_00157DE0;
    case 422u: goto L_00157DF0;
    case 423u: goto L_00157E08;
    case 424u: goto L_00157E10;
    case 425u: goto L_00157E38;
    case 426u: goto L_00157E48;
    case 427u: goto L_00157E6C;
    case 428u: goto L_00157E88;
    case 429u: goto L_00157EA0;
    case 430u: goto L_00157EAC;
    case 431u: goto L_00157EF4;
    case 432u: goto L_00157F04;
    case 433u: goto L_00157F38;
    case 434u: goto L_00157F50;
    case 435u: goto L_00157F7C;
    case 436u: goto L_00157FA0;
    case 437u: goto L_00157FC0;
    case 438u: goto L_00157FD4;
    default: bad_entry(c, 0x00154000u); return;
    }
L_00154000:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 4u);  goto L_00154048; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 4u);  goto L_00154024; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00154084; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_00154024:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[3].d[0]; st32((c.r[2].w[0] + 20u), c.r[17].w[0]);  if (t) { goto L_00154084; } }
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015403Cu); set32(c.r[4], c.r[4].w[0] - 24880u);  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x0015403Cu) [[unlikely]] return; }
L_0015403C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00154084; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_00154048:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[3].d[0]; st32((c.r[2].w[0] + 24u), c.r[17].w[0]);  if (t) { goto L_00154084; } }
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154060u); set32(c.r[4], c.r[4].w[0] - 24816u);  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x00154060u) [[unlikely]] return; }
L_00154060:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00154084; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_0015406C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[3].d[0]; st32((c.r[2].w[0] + 28u), c.r[17].w[0]);  if (t) { goto L_00154084; } }
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154084u); set32(c.r[4], c.r[4].w[0] - 24752u);  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x00154084u) [[unlikely]] return; }
L_00154084:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154090u); set32(c.r[4], ld32((c.r[2].w[0] + 12484u)));  if (depth < kMaxDepth) unit_000C(c, 154u, depth + 1u); else { c.pc = 0x00151EF0u; return; } if (c.pc != 0x00154090u) [[unlikely]] return; }
L_00154090:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00154094:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001540B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);  goto L_001540D4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFD0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65534ull;  if (t) { goto L_00154288; } }
L_001540D4:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 12792u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001540E4u); set32(c.r[6], 0u + 48u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x001540E4u) [[unlikely]] return; }
L_001540E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[4].w[0] + 1536u);
    st32((c.r[2].w[0] + 12792u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154100u); set32(c.r[6], 0u + 8208u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x00154100u) [[unlikely]] return; }
L_00154100:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[2].w[0] + 12480u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154118u); st32((c.r[2].w[0] + 12832u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_000C(c, 288u, depth + 1u); else { c.pc = 0x00153620u; return; } if (c.pc != 0x00154118u) [[unlikely]] return; }
L_00154118:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154120u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00153830u; return; } if (c.pc != 0x00154120u) [[unlikely]] return; }
L_00154120:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154128u);  if (depth < kMaxDepth) unit_000C(c, 315u, depth + 1u); else { c.pc = 0x00153AF0u; return; } if (c.pc != 0x00154128u) [[unlikely]] return; }
L_00154128:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154130u);  if (depth < kMaxDepth) unit_000C(c, 292u, depth + 1u); else { c.pc = 0x001536C0u; return; } if (c.pc != 0x00154130u) [[unlikely]] return; }
L_00154130:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154140u); set32(c.r[5], c.r[2].w[0] << 10);  if (depth < kMaxDepth) unit_000C(c, 291u, depth + 1u); else { c.pc = 0x00153690u; return; } if (c.pc != 0x00154140u) [[unlikely]] return; }
L_00154140:
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015414Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000C(c, 291u, depth + 1u); else { c.pc = 0x00153690u; return; } if (c.pc != 0x0015414Cu) [[unlikely]] return; }
L_0015414C:
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154158u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_000C(c, 291u, depth + 1u); else { c.pc = 0x00153690u; return; } if (c.pc != 0x00154158u) [[unlikely]] return; }
L_00154158:
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154164u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_000C(c, 291u, depth + 1u); else { c.pc = 0x00153690u; return; } if (c.pc != 0x00154164u) [[unlikely]] return; }
L_00154164:
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154170u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_000C(c, 291u, depth + 1u); else { c.pc = 0x00153690u; return; } if (c.pc != 0x00154170u) [[unlikely]] return; }
L_00154170:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154178u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 293u, depth + 1u); else { c.pc = 0x001536E0u; return; } if (c.pc != 0x00154178u) [[unlikely]] return; }
L_00154178:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[12], ld32((c.r[16].w[0] + 4u)));  goto L_0015418C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFD0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65534ull;  if (t) { goto L_00154288; } }
L_0015418C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[11], ld32((c.r[16].w[0] + 8u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[10], ld32((c.r[16].w[0] + 12u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[8], ld32((c.r[16].w[0] + 16u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[12].w[0] + c.r[11].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[9], c.r[10].w[0] + c.r[2].w[0]);
    st32((c.r[6].w[0] + 12808u), c.r[12].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[6], c.r[8].w[0] + c.r[9].w[0]);
    st32((c.r[5].w[0] + 12812u), c.r[11].w[0]);
    st32((c.r[7].w[0] + 12804u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 12816u), c.r[10].w[0]);
    st32((c.r[3].w[0] + 12820u), c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 20;
    { const bool t = c.r[3].sd[0] <= 0; st32((c.r[2].w[0] + 12824u), c.r[3].w[0]);  if (t) { goto L_001541F4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 12792u)));
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 12792u), c.r[3].w[0]);  if (t) { goto L_0015420C; } }
L_001541F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], 0u - 8193u);
    set32(c.r[4], ld32((c.r[2].w[0] + 12792u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[2].w[0] + 12792u), c.r[3].w[0]);
    c.budget -= 6;
L_0015420C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154214u);  if (depth < kMaxDepth) unit_0017(c, 371u, depth + 1u); else { c.pc = 0x0017FFC0u; return; } if (c.pc != 0x00154214u) [[unlikely]] return; }
L_00154214:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00154230; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154230u); set32(c.r[4], c.r[4].w[0] - 24688u);  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x00154230u) [[unlikely]] return; }
L_00154230:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], 0u - 960u);
    st16((c.r[2].w[0] + 12640u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], 0u - 2049u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st16((c.r[2].w[0] + 12642u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[2].w[0] + 12800u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st8((c.r[2].w[0] + 12836u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st8((c.r[2].w[0] + 12837u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 12792u)));
    c.r[5].d[0] = c.r[5].d[0] | 1024ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    st32((c.r[2].w[0] + 12796u), 0u);
    c.r[4].d[0] = c.r[4].d[0] | 32768ull;
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[3].w[0] + 12792u), c.r[4].w[0]);
    c.budget -= 22;
L_00154288:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001542A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 12792u)));
    c.r[2].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] & 2048ull;  goto L_001542BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001542E4; } }
L_001542BC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] & 1ull;  goto L_001542D0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFD0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65534ull;  if (t) { goto L_001542E4; } }
L_001542D0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFD0000u);  goto L_001542E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001542E4; } }
L_001542E0:
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 1;
L_001542E4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001542F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], 0u - 17u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[2].w[0] + 12792u)));
    c.r[4].d[0] = c.r[4].d[0] | 64ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154320u); st32((c.r[2].w[0] + 12792u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_000C(c, 135u, depth + 1u); else { c.pc = 0x00151BF0u; return; } if (c.pc != 0x00154320u) [[unlikely]] return; }
L_00154320:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154328u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000C(c, 293u, depth + 1u); else { c.pc = 0x001536E0u; return; } if (c.pc != 0x00154328u) [[unlikely]] return; }
L_00154328:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 12480u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00154358; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00154350; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00154350u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00154350u) [[unlikely]] return; }
L_00154350:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[2].w[0] + 12480u), 0u);
    c.budget -= 2;
L_00154358:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 12484u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00154388; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00154380; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00154380u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00154380u) [[unlikely]] return; }
L_00154380:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[2].w[0] + 12484u), 0u);
    c.budget -= 2;
L_00154388:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 12488u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001543B8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001543B0; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001543B0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001543B0u) [[unlikely]] return; }
L_001543B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[2].w[0] + 12488u), 0u);
    c.budget -= 2;
L_001543B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 12492u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001543E8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001543E0; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001543E0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001543E0u) [[unlikely]] return; }
L_001543E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[2].w[0] + 12492u), 0u);
    c.budget -= 2;
L_001543E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 12496u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00154418; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00154410; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00154410u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00154410u) [[unlikely]] return; }
L_00154410:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[2].w[0] + 12496u), 0u);
    c.budget -= 2;
L_00154418:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 12776u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_0015448C; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00154440; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00154440u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00154440u) [[unlikely]] return; }
L_00154440:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[2].w[0] + 12776u), 0u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015448C; } }
L_00154454:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1536u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 10964u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[17], c.r[2].w[0] + 10964u);  if (t) { goto L_00154488; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0]), 0u);  goto L_00154488; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00154484u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00154484u) [[unlikely]] return; }
    goto L_00154484;
L_00154480:
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_00154484:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_00154488:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0015448C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 12804u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00154454u | kUnwind; return; } goto L_00154454; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001544E0; } }
L_001544A8:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1536u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 11028u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[17], c.r[2].w[0] + 11028u);  if (t) { goto L_001544DC; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0]), 0u);  goto L_001544DC; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001544D8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001544D8u) [[unlikely]] return; }
L_001544D8:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_001544DC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001544E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 12824u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001544A8u | kUnwind; return; } goto L_001544A8; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00154510:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[3].w[0] + 12480u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_00154594; } }
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015453Cu); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x0015453Cu) [[unlikely]] return; }
L_0015453C:
    set32(c.r[2], 0u + 24576u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st16((c.r[29].w[0] + 32u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 255u);
    st32((c.r[29].w[0] + 36u), 0u);
    st8((c.r[29].w[0] + 34u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 2u);
    st8((c.r[29].w[0] + 35u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 16383u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 12480u)));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154594u); st32((c.r[29].w[0] + 40u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000C(c, 218u, depth + 1u); else { c.pc = 0x00152AB0u; return; } if (c.pc != 0x00154594u) [[unlikely]] return; }
L_00154594:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001545B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st16((c.r[3].w[0] + 12640u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[3].w[0] + 12642u), static_cast<std::uint16_t>(c.r[5].w[0]));  c.pc = t; return; }
L_001545D0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[3].w[0] + 12480u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00154660; } }
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001545FCu); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x001545FCu) [[unlikely]] return; }
L_001545FC:
    set32(c.r[2], 0u + 4098u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st16((c.r[29].w[0] + 32u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 255u);
    st8((c.r[29].w[0] + 34u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    st8((c.r[29].w[0] + 35u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 12480u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154628u); st32((c.r[29].w[0] + 36u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_000C(c, 218u, depth + 1u); else { c.pc = 0x00152AB0u; return; } if (c.pc != 0x00154628u) [[unlikely]] return; }
L_00154628:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 12792u)));
    c.r[3].d[0] = c.r[3].d[0] & 8192ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00154664; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], 0u + 1u);  goto L_00154658; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154650u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 305u, depth + 1u); else { c.pc = 0x00366038u; return; } if (c.pc != 0x00154650u) [[unlikely]] return; }
L_00154650:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00154660; } }
L_00154658:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154660u);  if (depth < kMaxDepth) unit_0091(c, 305u, depth + 1u); else { c.pc = 0x00366038u; return; } if (c.pc != 0x00154660u) [[unlikely]] return; }
L_00154660:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00154664:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00154670:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 12480u)));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_001546B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65532ull;  if (t) { goto L_001547E4; } }
L_001546B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 12800u)));
    c.budget -= 5;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001546E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[3].d[0] = c.r[17].d[0] << 56;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 12836u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001546E8; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_001546E8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0015470C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[3].d[0] = c.r[16].d[0] << 56;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 12837u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0015470C; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_0015470C:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 96u);  goto L_00154754; }
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154724u); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x00154724u) [[unlikely]] return; }
L_00154724:
    set32(c.r[3], 0u + 24576u);
    c.r[2].d[0] = c.r[19].d[0] << 48;
    st16((c.r[29].w[0] + 96u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[3], 0u + 255u);
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    st8((c.r[29].w[0] + 98u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 2u);
    st8((c.r[29].w[0] + 99u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 1u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_001547D0; } }
L_00154754:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154760u); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x00154760u) [[unlikely]] return; }
L_00154760:
    c.r[3].d[0] = c.r[19].d[0] << 48;
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[3], 0u + 24579u);
    c.r[2].d[0] = c.r[16].d[0] << 56;
    st16((c.r[29].w[0] + 96u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], 0u + 255u);
    st32((c.r[29].w[0] + 116u), c.r[2].w[0]);
    st8((c.r[29].w[0] + 98u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], 0u + 5u);
    st8((c.r[2].w[0] + 12836u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[29].w[0] + 99u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[3].d[0] = c.r[17].d[0] << 56;
    st8((c.r[2].w[0] + 12837u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[29].w[0] + 112u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 12488u)));
    st32((c.r[3].w[0] + 12800u), c.r[20].w[0]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001547D0u); st32((c.r[29].w[0] + 100u), c.r[20].w[0]);  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x00154A00u; return; } if (c.pc != 0x001547D0u) [[unlikely]] return; }
L_001547D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 12480u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001547E0u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000C(c, 218u, depth + 1u); else { c.pc = 0x00152AB0u; return; } if (c.pc != 0x001547E0u) [[unlikely]] return; }
L_001547E0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001547E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00154810:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 8424u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[5], c.r[31].w[0] - 8u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x45530000u);
    c.r[3].d[0] = c.r[3].d[0] | 16706ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 8504u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 56u), 0u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154860u); set32(c.r[4], 0u + 28u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00154860u) [[unlikely]] return; }
L_00154860:
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x001B0000u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[5], 0u + 20496u);
    st32((c.r[2].w[0]), 0u);
    c.r[3].d[0] = c.r[3].d[0] | 45040ull;
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[4], 0u + 28u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 20u), 0u);
    st32((c.r[2].w[0] + 24u), 0u);
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001548A0u); st32((c.r[16].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001548A0u) [[unlikely]] return; }
L_001548A0:
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00020000u);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[4], 0u + 28u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 20u), 0u);
    st32((c.r[2].w[0] + 24u), 0u);
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001548DCu); st32((c.r[16].w[0] + 48u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001548DCu) [[unlikely]] return; }
L_001548DC:
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00020000u);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 20u), 0u);
    st32((c.r[2].w[0] + 24u), 0u);
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00154930:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001549D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 8504u);
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 5;
L_00154968:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[19], ld32((c.r[2].w[0] + 20u)));  if (t) { goto L_00154980; } }
L_00154974:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154980u); set32(c.r[19], ld32((c.r[19].w[0])));  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x00154980u) [[unlikely]] return; }
L_00154980:
    c.budget -= 4;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00154974u | kUnwind; return; } goto L_00154974; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00154968u | kUnwind; return; } goto L_00154968; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] << 48;  goto L_001549C4; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44410000u);
    set32(c.r[3], c.r[3].w[0] + 8424u);
    c.r[2].d[0] = c.r[2].d[0] | 17732ull;
    st32((c.r[18].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.budget -= 7;
L_001549C4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_001549DC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001549D8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001549D8u) [[unlikely]] return; }
L_001549D8:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001549DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00154A00:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[20], 0u + 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
L_00154A28:
    set32(c.r[19], c.r[20].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[19].w[0]);
    set32(c.r[21], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[2].w[0] + 20u);  if (t) { goto L_00154A98; } }
L_00154A3C:
    c.r[17].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 12484u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[21], ld32((c.r[21].w[0])));  if (t) { goto L_00154A64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154A54u); set32(c.r[5], ld32((c.r[17].w[0] + 24u)));  if (depth < kMaxDepth) unit_000C(c, 174u, depth + 1u); else { c.pc = 0x001522A0u; return; } if (c.pc != 0x00154A54u) [[unlikely]] return; }
L_00154A54:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 20u)));  goto L_00154A68; }
    st32((c.r[2].w[0] + 20u), 0u);
    st32((c.r[2].w[0] + 24u), 0u);
    c.budget -= 2;
L_00154A64:
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 1;
L_00154A68:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00154A90; }
    set32(c.r[6], ld32((c.r[17].w[0] + 12u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[4], c.r[4].w[0] - 24576u);
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154A8Cu); set32(c.r[7], c.r[6].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0014(c, 165u, depth + 1u); else { c.pc = 0x001714F0u; return; } if (c.pc != 0x00154A8Cu) [[unlikely]] return; }
L_00154A8C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00154A90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154A98u);  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x00154A98u) [[unlikely]] return; }
L_00154A98:
    c.budget -= 2;
    if (c.r[21].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00154A3Cu | kUnwind; return; } goto L_00154A3C; }
    set32(c.r[4], 0u + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154AACu); set32(c.r[17], c.r[16].w[0] + c.r[19].w[0]);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00154AACu) [[unlikely]] return; }
L_00154AAC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[17].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 24584u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[4], ld32((c.r[3].w[0] - 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[6], c.r[6].w[0] - 24624u);
    st32((c.r[2].w[0] + 8u), 0u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 12800u)));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[4].d[0] = c.r[20].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 20u), 0u);
    st32((c.r[2].w[0] + 24u), 0u);
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 27;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[17].w[0] + 44u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00154A28u | kUnwind; return; } goto L_00154A28; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00154B40:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 14;
    { const bool t = c.r[7].d[0] != c.r[2].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00154BB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;  if (t) { goto L_00154B9C; } }
L_00154B80:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154B90u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 73u, depth + 1u); else { c.pc = 0x00154C10u; return; } if (c.pc != 0x00154B90u) [[unlikely]] return; }
L_00154B90:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
L_00154B9C:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00154BE8; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00154B80u | kUnwind; return; } goto L_00154B80; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00154BE4; } }
L_00154BB4:
    c.budget -= 2;
    { const bool t = c.r[7].sd[0] < 0;  if (t) { goto L_00154BD8; } }
    c.r[1].d[0] = c.r[7].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00154BD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154BD0u);  if (depth < kMaxDepth) unit_000D(c, 73u, depth + 1u); else { c.pc = 0x00154C10u; return; } if (c.pc != 0x00154BD0u) [[unlikely]] return; }
L_00154BD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00154BE4; } }
L_00154BD8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154BE4u); set32(c.r[4], c.r[4].w[0] - 24512u);  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x00154BE4u) [[unlikely]] return; }
L_00154BE4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00154BE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00154C10:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], c.r[7].w[0] << 2);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + 20u);  if (t) { goto L_00154D58; } }
    goto L_00154C40;
L_00154C3C:
    set32(c.r[16], c.r[2].w[0] + 20u);
    c.budget -= 1;
L_00154C40:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[18], ld32((c.r[18].w[0])));  goto L_00154D58; }
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00154D54; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 24u), c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 16u)));
    c.r[1].d[0] = c.r[19].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[17], ld32((c.r[18].w[0] + 12u)));  if (t) { goto L_00154D38; } }
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[4], 0u + 28u);
    set32(c.r[2], c.r[2].w[0] - c.r[19].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154C8Cu); st32((c.r[3].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00154C8Cu) [[unlikely]] return; }
L_00154C8C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00154D64; }
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] - c.r[19].w[0]);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 16u), c.r[19].w[0]);
    st32((c.r[2].w[0] + 20u), 0u);
    st32((c.r[2].w[0] + 24u), 0u);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0])));  if (t) { goto L_00154D28; } }
L_00154CCC:
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[5].w[0])));  goto L_00154D10; }
    st32((c.r[2].w[0]), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { st32((c.r[5].w[0] + 4u), c.r[2].w[0]);  goto L_00154CFC; }
    st32((c.r[3].w[0]), c.r[2].w[0]);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_00154CFC:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00154D48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00154D48; } }
L_00154D10:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.r[5].d[0] = c.r[3].d[0] + 0ull;  goto L_00154D28; }
    st32((c.r[5].w[0]), c.r[2].w[0]);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 4u), c.r[5].w[0]);  if (t) { goto L_00154D48; } }
L_00154D28:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[4], ld32((c.r[5].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00154CCCu | kUnwind; return; } goto L_00154CCC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00154D48; } }
L_00154D38:
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    st32((c.r[3].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 4;
L_00154D48:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00154D64; } }
L_00154D54:
    set32(c.r[18], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_00154D58:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00154C40u | kUnwind; return; } goto L_00154C40; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00154D64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00154D80:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00154EC8; } }
L_00154DA4:
    set32(c.r[18], c.r[19].w[0] + c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[18].w[0] + 20u)));  if (t) { goto L_00154EBC; } }
L_00154DB0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[17], ld32((c.r[17].w[0])));  goto L_00154EBC; }
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_00154EB8; } }
    st32((c.r[17].w[0] + 20u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 12484u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[6], ld32((c.r[17].w[0] + 12u)));  goto L_00154DF4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154DE0u); set32(c.r[5], ld32((c.r[17].w[0] + 24u)));  if (depth < kMaxDepth) unit_000C(c, 174u, depth + 1u); else { c.pc = 0x001522A0u; return; } if (c.pc != 0x00154DE0u) [[unlikely]] return; }
L_00154DE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00154DF0; } }
    st32((c.r[2].w[0] + 20u), 0u);
    st32((c.r[2].w[0] + 24u), 0u);
    c.budget -= 2;
L_00154DF0:
    set32(c.r[6], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 1;
L_00154DF4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[4], c.r[4].w[0] - 24576u);
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154E0Cu); set32(c.r[7], c.r[6].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0014(c, 165u, depth + 1u); else { c.pc = 0x001714F0u; return; } if (c.pc != 0x00154E0Cu) [[unlikely]] return; }
L_00154E0C:
    set32(c.r[5], c.r[16].w[0] + c.r[19].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 44u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[5].w[0] + 44u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 24u), 0u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[5].w[0] + 32u)));  if (t) { goto L_00154EA8; } }
L_00154E2C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[16].d[0] = c.r[4].d[0] + 0ull;  goto L_00154EA8; }
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[16].d[0] = c.r[4].d[0] + 0ull;  goto L_00154EA8; }
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00154EA4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[4].w[0])));  goto L_00154E7C; }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_00154E80; } }
L_00154E7C:
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 1;
L_00154E80:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00154E94; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_00154E94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154E9Cu);  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x00154E9Cu) [[unlikely]] return; }
L_00154E9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00154EA8; } }
L_00154EA4:
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_00154EA8:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00154E2Cu | kUnwind; return; } goto L_00154E2C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00154ED8; } }
L_00154EB8:
    set32(c.r[17], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_00154EBC:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00154DB0u | kUnwind; return; } goto L_00154DB0; }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_00154EC8:
    c.r[3].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[16], c.r[4].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00154DA4u | kUnwind; return; } goto L_00154DA4; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00154ED8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00154EF0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[9], 0u + 24u);
    c.budget -= 13;
L_00154F24:
    set32(c.r[2], c.r[17].w[0] << 3);
    mmi::divu(c, 0, c.r[17].w[0], c.r[9].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1536u);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 21577u));
    set32(c.r[16], c.r[2].w[0] + 21564u);
    set32(c.r[8], 0u + 1u);
    set32(c.r[2], ld32((c.r[2].w[0] + 21612u)));
    c.r[7].d[0] = c.lo.d[0];
    mmi::divu(c, 0, c.r[17].w[0], c.r[9].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0] + 10752u)));
    c.r[7].d[0] = c.hi.d[0];
    set32(c.r[7], c.r[8].w[0] << (c.r[7].w[0] & 31u));
    c.budget -= 20;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = c.r[6].d[0] & c.r[7].d[0];  if (t) { goto L_00155194; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 52u), 0u);  goto L_001551B4; }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_001551B0; } }
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[8].d[0]) { st32((c.r[16].w[0] + 44u), 0u);  goto L_0015518C; }
    st32((c.r[16].w[0] + 48u), c.r[8].w[0]);
    st32((c.r[16].w[0] + 52u), 0u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 2u));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { c.f[20] = ld32((c.r[16].w[0] + 68u));  goto L_00155018; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154FB0u); c.f[12] = ld32((c.r[16].w[0] + 68u));  if (depth < kMaxDepth) unit_000B(c, 48u, depth + 1u); else { c.pc = 0x0014DF70u; return; } if (c.pc != 0x00154FB0u) [[unlikely]] return; }
L_00154FB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154FB8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 132u, depth + 1u); else { c.pc = 0x00137248u; return; } if (c.pc != 0x00154FB8u) [[unlikely]] return; }
L_00154FB8:
    c.r[4].d[0] = ld64((c.r[28].w[0] - 32712u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154FC4u); c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 132u, depth + 1u); else { c.pc = 0x00137248u; return; } if (c.pc != 0x00154FC4u) [[unlikely]] return; }
L_00154FC4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154FD0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 77u, depth + 1u); else { c.pc = 0x0014E6F0u; return; } if (c.pc != 0x00154FD0u) [[unlikely]] return; }
L_00154FD0:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154FE4u);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x00154FE4u) [[unlikely]] return; }
L_00154FE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154FF4u); c.f[12] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_000B(c, 48u, depth + 1u); else { c.pc = 0x0014DF70u; return; } if (c.pc != 0x00154FF4u) [[unlikely]] return; }
L_00154FF4:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155000u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 57u, depth + 1u); else { c.pc = 0x0014E3A8u; return; } if (c.pc != 0x00155000u) [[unlikely]] return; }
L_00155000:
    c.r[4].d[0] = ld64((c.r[28].w[0] - 32712u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015500Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 133u, depth + 1u); else { c.pc = 0x00137260u; return; } if (c.pc != 0x0015500Cu) [[unlikely]] return; }
L_0015500C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155014u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 94u, depth + 1u); else { c.pc = 0x0014EB28u; return; } if (c.pc != 0x00155014u) [[unlikely]] return; }
L_00155014:
    c.f[20] = c.f[0];
    c.budget -= 1;
L_00155018:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155020u); set32(c.r[4], ld32((c.r[16].w[0] + 40u)));  if (depth < kMaxDepth) unit_000C(c, 146u, depth + 1u); else { c.pc = 0x00151D80u; return; } if (c.pc != 0x00155020u) [[unlikely]] return; }
L_00155020:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[2].d[0] = ld16((c.r[16].w[0] + 2u));  goto L_00155034; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001551B0; } }
L_00155034:
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 32u)));  goto L_00155154; }
    c.f[13] = ld32((c.r[16].w[0] + 64u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015504Cu); c.f[12] = ld32((c.r[16].w[0] + 60u));  if (depth < kMaxDepth) unit_0019(c, 12u, depth + 1u); else { c.pc = 0x00184300u; return; } if (c.pc != 0x0015504Cu) [[unlikely]] return; }
L_0015504C:
    c.f[1] = ld32((c.r[16].w[0] + 64u));
    c.f[0] = ld32((c.r[16].w[0] + 60u));
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155060u); c.f[12] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 5u, depth + 1u); else { c.pc = 0x00184060u; return; } if (c.pc != 0x00155060u) [[unlikely]] return; }
L_00155060:
    c.f[5] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = ld32((c.r[16].w[0] + 4u));
    c.f[3] = ld32((c.r[16].w[0] + 8u));
    c.f[2] = ld32((c.r[16].w[0] + 12u));
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[16].w[0] + 16u), c.f[5]);
    st32((c.r[16].w[0] + 20u), c.f[4]);
    st32((c.r[16].w[0] + 24u), c.f[3]);
    c.f[0] = c.r[2].w[0];
    st32((c.r[16].w[0] + 28u), c.f[2]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 28u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st8((c.r[16].w[0] + 28u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[2] = ld32((c.r[16].w[0] + 64u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001550ACu); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0019(c, 5u, depth + 1u); else { c.pc = 0x00184060u; return; } if (c.pc != 0x001550ACu) [[unlikely]] return; }
L_001550AC:
    c.f[3] = ld32((c.r[16].w[0] + 56u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[22] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 64u));
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001550DCu); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 5u, depth + 1u); else { c.pc = 0x00184060u; return; } if (c.pc != 0x001550DCu) [[unlikely]] return; }
L_001550DC:
    c.f[1] = ld32((c.r[16].w[0] + 56u));
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[5], c.r[16].w[0] + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001550F0u); c.f[21] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 27u, depth + 1u); else { c.pc = 0x00150570u; return; } if (c.pc != 0x001550F0u) [[unlikely]] return; }
L_001550F0:
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.f[12] = c.f[22];
    set32(c.r[5], c.r[16].w[0] + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155104u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 33u, depth + 1u); else { c.pc = 0x00150690u; return; } if (c.pc != 0x00155104u) [[unlikely]] return; }
L_00155104:
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[5], c.r[16].w[0] + 4u);
    c.f[12] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155118u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 37u, depth + 1u); else { c.pc = 0x001507C0u; return; } if (c.pc != 0x00155118u) [[unlikely]] return; }
L_00155118:
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155124u); set32(c.r[5], c.r[16].w[0] + 20u);  if (depth < kMaxDepth) unit_000C(c, 27u, depth + 1u); else { c.pc = 0x00150570u; return; } if (c.pc != 0x00155124u) [[unlikely]] return; }
L_00155124:
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.f[12] = c.f[21];
    set32(c.r[5], c.r[16].w[0] + 20u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155138u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 33u, depth + 1u); else { c.pc = 0x00150690u; return; } if (c.pc != 0x00155138u) [[unlikely]] return; }
L_00155138:
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.f[12] = c.f[20];
    set32(c.r[5], c.r[16].w[0] + 20u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015514Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 37u, depth + 1u); else { c.pc = 0x001507C0u; return; } if (c.pc != 0x0015514Cu) [[unlikely]] return; }
L_0015514C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001551B0; } }
L_00155154:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015515Cu); set32(c.r[5], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000C(c, 27u, depth + 1u); else { c.pc = 0x00150570u; return; } if (c.pc != 0x0015515Cu) [[unlikely]] return; }
L_0015515C:
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.f[12] = ld32((c.r[16].w[0] + 56u));
    set32(c.r[5], c.r[16].w[0] + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155170u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 33u, depth + 1u); else { c.pc = 0x00150690u; return; } if (c.pc != 0x00155170u) [[unlikely]] return; }
L_00155170:
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.f[12] = c.f[20];
    set32(c.r[5], c.r[16].w[0] + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155184u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 37u, depth + 1u); else { c.pc = 0x001507C0u; return; } if (c.pc != 0x00155184u) [[unlikely]] return; }
L_00155184:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001551B0; } }
L_0015518C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), 0u);  if (t) { goto L_001551B0; } }
L_00155194:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001551B0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001551B0; } }
    st32((c.r[16].w[0] + 44u), c.r[8].w[0]);
    st32((c.r[16].w[0] + 48u), 0u);
    c.budget -= 2;
L_001551B0:
    st32((c.r[16].w[0] + 52u), 0u);
    c.budget -= 1;
L_001551B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001551C4u); set32(c.r[4], ld32((c.r[2].w[0] + 12496u)));  if (depth < kMaxDepth) unit_000C(c, 59u, depth + 1u); else { c.pc = 0x00150B50u; return; } if (c.pc != 0x001551C4u) [[unlikely]] return; }
L_001551C4:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001551D4u); set32(c.r[19], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000C(c, 146u, depth + 1u); else { c.pc = 0x00151D80u; return; } if (c.pc != 0x001551D4u) [[unlikely]] return; }
L_001551D4:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 36u)));  goto L_001551E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_00155240; } }
L_001551E8:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);  goto L_0015522C; }
    set32(c.r[6], c.r[20].w[0] << 24);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[8].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.r[9].d[0] = ld8((c.r[19].w[0] + 2u));
    c.r[7].d[0] = ld16((c.r[19].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[6], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 1536u);
    c.r[9].d[0] = c.r[9].d[0] & 15ull;
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[7].d[0] = c.r[8].d[0] | c.r[7].d[0];
    set32(c.r[6], c.r[9].w[0] << 16);
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8288u), c.r[6].w[0]);  if (t) { goto L_0015523C; } }
L_0015522C:
    set32(c.r[6], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 1536u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0] + 8288u), 0u);
    c.budget -= 4;
L_0015523C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00155240:
    c.r[3].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(48ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[9], 0u + 24u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00154F24u | kUnwind; return; } goto L_00154F24; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00155280:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 8424u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[7], c.r[31].w[0] - 8u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x45530000u);
    c.r[3].d[0] = c.r[3].d[0] | 16706ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 8520u);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[6], 0u + 21524u);
    st32((c.r[4].w[0] + 12u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001552D4u); set32(c.r[4], c.r[16].w[0] + 20u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x001552D4u) [[unlikely]] return; }
L_001552D4:
    st32((c.r[16].w[0] + 21544u), 0u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 21548u), 0u);
    set32(c.r[2], 0u + 48u);
    st32((c.r[16].w[0] + 21552u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 21564u);
    st32((c.r[16].w[0] + 21556u), c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 21560u), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155300u); set32(c.r[6], 0u + 3456u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x00155300u) [[unlikely]] return; }
L_00155300:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00155320:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 12;
    { const bool t = c.r[21].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00155434; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 8520u);
    st32((c.r[21].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[21].w[0] + 21544u)));  if (t) { goto L_001553F4; } }
L_00155364:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_001553C8; } }
L_0015536C:
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[18].w[0] << 2);
    c.budget -= 3;
L_00155378:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4624u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[22], c.r[2].w[0] + 4624u);  if (t) { goto L_00155394; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155390u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x00155390u) [[unlikely]] return; }
L_00155390:
    st32((c.r[22].w[0]), 0u);
    c.budget -= 1;
L_00155394:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(32ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00155378u | kUnwind; return; } goto L_00155378; }
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 21008u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[2].w[0] + 21008u);  if (t) { goto L_001553C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001553C0u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x001553C0u) [[unlikely]] return; }
L_001553C0:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_001553C4:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_001553C8:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[19].w[0] << 7);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0015536Cu | kUnwind; return; } goto L_0015536C; }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[17], ld32((c.r[17].w[0] + 21520u)));  goto L_001553F4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001553ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001553ECu) [[unlikely]] return; }
L_001553EC:
    st32((c.r[17].w[0]), 0u);
    set32(c.r[17], ld32((c.r[17].w[0] + 21520u)));
    c.budget -= 2;
L_001553F4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00155364u | kUnwind; return; } goto L_00155364; } }
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { c.r[2].d[0] = c.r[20].d[0] << 48;  goto L_00155420; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44410000u);
    set32(c.r[3], c.r[3].w[0] + 8424u);
    c.r[2].d[0] = c.r[2].d[0] | 17732ull;
    st32((c.r[21].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[21].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[20].d[0] << 48;
    c.budget -= 7;
L_00155420:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[21].d[0] + 0ull;  goto L_00155438; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155434u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x00155434u) [[unlikely]] return; }
L_00155434:
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_00155438:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_0015543C:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00155460:
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
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 13;
    { const bool t = c.r[7].sd[0] <= 0; c.r[16].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_0015549C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001554A8; } }
L_0015549C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001554A4u);  if (depth < kMaxDepth) unit_0017(c, 371u, depth + 1u); else { c.pc = 0x0017FFC0u; return; } if (c.pc != 0x001554A4u) [[unlikely]] return; }
L_001554A4:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001554A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 12824u)));
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);  goto L_001554C8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65533ull;  if (t) { goto L_0015551C; } }
L_001554C8:
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 12564u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    if (c.r[4].d[0] != 0ull) { c.r[6].d[0] = c.r[7].d[0] + 0ull;  goto L_001554EC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65533ull;  if (t) { goto L_0015551C; } }
L_001554EC:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155504u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000D(c, 149u, depth + 1u); else { c.pc = 0x001559A0u; return; } if (c.pc != 0x00155504u) [[unlikely]] return; }
L_00155504:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);  goto L_00155518; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015551C; } }
L_00155518:
    c.r[2].d[0] = c.r[2].d[0] | 65529ull;
    c.budget -= 1;
L_0015551C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00155540:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 12824u)));
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);  goto L_00155564; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001555C0; } }
L_00155564:
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 12564u);
    set32(c.r[8], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[8].w[0])));
    c.budget -= 6;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  goto L_00155584; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001555C0; } }
L_00155584:
    set32(c.r[2], 0u - 9u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[7].d[0] == 0ull; set32(c.r[4], ld32((c.r[8].w[0])));  if (t) { goto L_001555A8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_001555B8; } }
L_001555A8:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], 0u - 5u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
L_001555B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001555C0u); set32(c.r[4], ld32((c.r[8].w[0])));  if (depth < kMaxDepth) unit_000D(c, 167u, depth + 1u); else { c.pc = 0x00155CF0u; return; } if (c.pc != 0x001555C0u) [[unlikely]] return; }
L_001555C0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001555D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 12824u)));
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);  goto L_001555F4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00155650; } }
L_001555F4:
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 12564u);
    set32(c.r[8], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[8].w[0])));
    c.budget -= 6;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  goto L_00155614; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00155650; } }
L_00155614:
    set32(c.r[2], 0u - 9u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[7].d[0] == 0ull; set32(c.r[4], ld32((c.r[8].w[0])));  if (t) { goto L_00155638; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_00155648; } }
L_00155638:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], 0u - 5u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
L_00155648:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155650u); set32(c.r[4], ld32((c.r[8].w[0])));  if (depth < kMaxDepth) unit_000D(c, 180u, depth + 1u); else { c.pc = 0x00155E40u; return; } if (c.pc != 0x00155650u) [[unlikely]] return; }
L_00155650:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00155660:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 12824u)));
    c.r[1].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[1].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_001556A4; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 12564u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001556A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001556A0u);  if (depth < kMaxDepth) unit_000D(c, 189u, depth + 1u); else { c.pc = 0x00155FE0u; return; } if (c.pc != 0x001556A0u) [[unlikely]] return; }
L_001556A0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001556A4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001556B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 12824u)));
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);  goto L_001556D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001556FC; } }
L_001556D4:
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 12564u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001556F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001556FC; } }
L_001556F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001556FCu);  if (depth < kMaxDepth) unit_000D(c, 191u, depth + 1u); else { c.pc = 0x00156020u; return; } if (c.pc != 0x001556FCu) [[unlikely]] return; }
L_001556FC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00155710:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 12824u)));
    c.r[1].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[1].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_00155764; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 12564u);
    set32(c.r[5], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00155760; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], 0u - 9u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155760u); set32(c.r[4], ld32((c.r[5].w[0])));  if (depth < kMaxDepth) unit_000D(c, 187u, depth + 1u); else { c.pc = 0x00155F20u; return; } if (c.pc != 0x00155760u) [[unlikely]] return; }
L_00155760:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00155764:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00155770:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 12824u)));
    c.r[1].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[1].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_001557B4; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 12564u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001557B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001557B0u);  if (depth < kMaxDepth) unit_000D(c, 199u, depth + 1u); else { c.pc = 0x001561E0u; return; } if (c.pc != 0x001557B0u) [[unlikely]] return; }
L_001557B0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001557B4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001557C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 12824u)));
    c.r[1].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[1].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_00155804; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 12564u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00155800; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155800u);  if (depth < kMaxDepth) unit_000D(c, 201u, depth + 1u); else { c.pc = 0x00156210u; return; } if (c.pc != 0x00155800u) [[unlikely]] return; }
L_00155800:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00155804:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00155810:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 12824u)));
    c.r[1].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[1].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_00155854; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 12564u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_0015583C:
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00155850; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155850u);  if (depth < kMaxDepth) unit_000D(c, 203u, depth + 1u); else { c.pc = 0x00156240u; return; } if (c.pc != 0x00155850u) [[unlikely]] return; }
L_00155850:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00155854:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00155860:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 8424u);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[9], c.r[31].w[0] - 8u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x45530000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].d[0] = c.r[3].d[0] | 16706ull;
    set32(c.r[2], c.r[2].w[0] + 8536u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[8], 0u + 2u);
    st32((c.r[4].w[0] + 4u), 0u);
    set32(c.r[7], 0u + 1u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[6].d[0] = 0ull | 48000ull;
    st32((c.r[4].w[0] + 12u), c.r[9].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[4].w[0] + 20u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 40u), 0u);
    st32((c.r[4].w[0] + 44u), 0u);
    st32((c.r[4].w[0] + 48u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 56u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    st32((c.r[4].w[0] + 64u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 68u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 72u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 76u), 0u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 12640u)));
    st16((c.r[4].w[0] + 80u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 12642u)));
    st16((c.r[4].w[0] + 82u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 84u), 0u);
    st32((c.r[4].w[0] + 88u), 0u);
    st32((c.r[4].w[0] + 92u), 0u);
    c.budget -= 43;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 96u), 0u);  c.pc = t; return; }
L_00155910:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0015597C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 8536u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015593Cu); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000D(c, 157u, depth + 1u); else { c.pc = 0x00155BE0u; return; } if (c.pc != 0x0015593Cu) [[unlikely]] return; }
L_0015593C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155944u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 164u, depth + 1u); else { c.pc = 0x00155C60u; return; } if (c.pc != 0x00155944u) [[unlikely]] return; }
L_00155944:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] << 48;  goto L_00155968; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44410000u);
    set32(c.r[3], c.r[3].w[0] + 8424u);
    c.r[2].d[0] = c.r[2].d[0] | 17732ull;
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.budget -= 7;
L_00155968:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00155980; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015597Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x0015597Cu) [[unlikely]] return; }
L_0015597C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00155980:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001559A0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001559E8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000D(c, 157u, depth + 1u); else { c.pc = 0x00155BE0u; return; } if (c.pc != 0x001559E8u) [[unlikely]] return; }
L_001559E8:
    c.budget -= 2;
    if (c.r[23].d[0] == 0ull) { set32(c.r[3], 0u + 1000u);  goto L_00155A4C; }
    set32(c.r[2], 0u + 1000u);
    set32(c.r[4], 0u + 25000u);
    mmi::div(c, 0, c.r[18].w[0], c.r[2].w[0]);
    set32(c.r[3], 0u + 44u);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[19].w[0] + 1u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[2].w[0] + 2048u);
    c.budget -= 16;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 11));  if (t) { goto L_00155A38; } }
    set32(c.r[2], c.r[3].w[0] + 2047u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 11));
    c.budget -= 2;
L_00155A38:
    set32(c.r[2], c.r[2].w[0] << 11);
    set32(c.r[2], c.r[2].w[0] + 36u);
    set32(c.r[2], c.r[2].w[0] + 32767u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + 1473u);  if (t) { goto L_00155AB8; } }
L_00155A4C:
    set32(c.r[2], 0u + 25000u);
    mmi::div(c, 0, c.r[18].w[0], c.r[3].w[0]);
    mmi::mult(c, 1, c.r[20].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[1];
    set32(c.r[2], c.r[19].w[0] + 1u);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[3], 0u + 44u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[2].w[0] + 2048u);
    c.budget -= 16;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 11));  if (t) { goto L_00155A94; } }
    set32(c.r[2], c.r[3].w[0] + 2047u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 11));
    c.budget -= 2;
L_00155A94:
    set32(c.r[3], c.r[2].w[0] << 11);
    set32(c.r[2], c.r[20].w[0] << 7);
    set32(c.r[3], c.r[3].w[0] + 36u);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[2].w[0] + 64u);
    c.budget -= 9;
L_00155AB8:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_00155AC8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 40u), c.r[17].w[0]);  if (t) { goto L_00155AF0; } }
L_00155AC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155AD0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 163u, depth + 1u); else { c.pc = 0x00155C50u; return; } if (c.pc != 0x00155AD0u) [[unlikely]] return; }
L_00155AD0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] != 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 4u)));  goto L_00155AE4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00155BB4; } }
L_00155AE4:
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[21].w[0] + 40u), c.r[17].w[0]);
    c.budget -= 3;
L_00155AF0:
    set32(c.r[4], 0u + 4u);
    st32((c.r[21].w[0] + 44u), c.r[16].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[21].w[0] + 48u), 0u);
    st32((c.r[21].w[0] + 52u), 0u);
    st32((c.r[21].w[0] + 64u), c.r[20].w[0]);
    st32((c.r[21].w[0] + 68u), c.r[19].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155B14u); st32((c.r[21].w[0] + 72u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_0014(c, 206u, depth + 1u); else { c.pc = 0x00171A20u; return; } if (c.pc != 0x00155B14u) [[unlikely]] return; }
L_00155B14:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull; st32((c.r[21].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_00155B40; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155B28u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 398u, depth + 1u); else { c.pc = 0x003631C8u; return; } if (c.pc != 0x00155B28u) [[unlikely]] return; }
L_00155B28:
    set32(c.r[3], ld32((c.r[21].w[0] + 20u)));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_00155B68; } }
L_00155B40:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155B50u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 376u, depth + 1u); else { c.pc = 0x00362E58u; return; } if (c.pc != 0x00155B50u) [[unlikely]] return; }
L_00155B50:
    set32(c.r[4], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[3], 0u - 65u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
L_00155B68:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 12640u)));
    st16((c.r[21].w[0] + 80u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 12642u)));
    st16((c.r[21].w[0] + 82u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 80u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155B8Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 185u, depth + 1u); else { c.pc = 0x00155EC0u; return; } if (c.pc != 0x00155B8Cu) [[unlikely]] return; }
L_00155B8C:
    c.budget -= 2;
    if (c.r[22].sd[0] <= 0) { set32(c.r[3], ld32((c.r[21].w[0] + 4u)));  goto L_00155BA8; }
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155BA4u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 121u, depth + 1u); else { c.pc = 0x00364CC0u; return; } if (c.pc != 0x00155BA4u) [[unlikely]] return; }
L_00155BA4:
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 1;
L_00155BA8:
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st32((c.r[21].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 3;
L_00155BB4:
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
L_00155BE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155BF4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 206u, depth + 1u); else { c.pc = 0x00156290u; return; } if (c.pc != 0x00155BF4u) [[unlikely]] return; }
L_00155BF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155BFCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 209u, depth + 1u); else { c.pc = 0x001562F0u; return; } if (c.pc != 0x00155BFCu) [[unlikely]] return; }
L_00155BFC:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00155C2C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155C10u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0090(c, 411u, depth + 1u); else { c.pc = 0x003632E0u; return; } if (c.pc != 0x00155C10u) [[unlikely]] return; }
L_00155C10:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00155C28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155C24u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00155C24u) [[unlikely]] return; }
L_00155C24:
    st32((c.r[16].w[0] + 20u), 0u);
    c.budget -= 1;
L_00155C28:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00155C2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155C34u); st32((c.r[16].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_000D(c, 164u, depth + 1u); else { c.pc = 0x00155C60u; return; } if (c.pc != 0x00155C34u) [[unlikely]] return; }
L_00155C34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00155C50:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[5].d[0] = 0ull + 0ull;  [[clang::musttail]] return unit_0014(c, 206u, depth); }
L_00155C60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00155CB0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 40u), 0u);  goto L_00155CB4; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_00155CA0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155C98u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00155C98u) [[unlikely]] return; }
L_00155C98:
    st32((c.r[16].w[0] + 40u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 2;
L_00155CA0:
    set32(c.r[3], 0u - 2u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00155CB4; } }
L_00155CB0:
    st32((c.r[16].w[0] + 40u), 0u);
    c.budget -= 1;
L_00155CB4:
    st32((c.r[16].w[0] + 44u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00155CDC; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00155CD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155CD4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00155CD4u) [[unlikely]] return; }
L_00155CD4:
    st32((c.r[16].w[0] + 36u), 0u);
    c.budget -= 1;
L_00155CD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00155CDC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00155CF0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00155D34; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155D2Cu); set32(c.r[4], c.r[4].w[0] - 24464u);  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x00155D2Cu) [[unlikely]] return; }
L_00155D2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00155E20; } }
L_00155D34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155D3Cu);  if (depth < kMaxDepth) unit_0017(c, 371u, depth + 1u); else { c.pc = 0x0017FFC0u; return; } if (c.pc != 0x00155D3Cu) [[unlikely]] return; }
L_00155D3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155D44u); c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 1u, depth + 1u); else { c.pc = 0x00180000u; return; } if (c.pc != 0x00155D44u) [[unlikely]] return; }
L_00155D44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155D4Cu); c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 3u, depth + 1u); else { c.pc = 0x00180020u; return; } if (c.pc != 0x00155D4Cu) [[unlikely]] return; }
L_00155D4C:
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00155D70; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155D68u); set32(c.r[4], c.r[4].w[0] - 24432u);  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x00155D68u) [[unlikely]] return; }
L_00155D68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00155E20; } }
L_00155D70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155D78u);  if (depth < kMaxDepth) unit_0015(c, 238u, depth + 1u); else { c.pc = 0x00176280u; return; } if (c.pc != 0x00155D78u) [[unlikely]] return; }
L_00155D78:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[19].d[0] != 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 36u)));  goto L_00155D98; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155D90u); set32(c.r[4], c.r[4].w[0] - 24384u);  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x00155D90u) [[unlikely]] return; }
L_00155D90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00155E20; } }
L_00155D98:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00155DB8; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00155DB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155DB0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00155DB0u) [[unlikely]] return; }
L_00155DB0:
    st32((c.r[18].w[0] + 36u), 0u);
    c.budget -= 1;
L_00155DB4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00155DB8:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155DC8u); set32(c.r[5], c.r[18].w[0] + 36u);  if (depth < kMaxDepth) unit_0015(c, 356u, depth + 1u); else { c.pc = 0x001771C0u; return; } if (c.pc != 0x00155DC8u) [[unlikely]] return; }
L_00155DC8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[18].w[0] + 4u)));  goto L_00155DDC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00155E20; } }
L_00155DDC:
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 20u)));  goto L_00155E00; }
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155DF8u); set32(c.r[5], ld32((c.r[18].w[0] + 36u)));  if (depth < kMaxDepth) unit_008E(c, 355u, depth + 1u); else { c.pc = 0x0035A800u; return; } if (c.pc != 0x00155DF8u) [[unlikely]] return; }
L_00155DF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[18].w[0] + 20u)));  if (t) { goto L_00155E10; } }
L_00155E00:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155E0Cu); set32(c.r[5], ld32((c.r[18].w[0] + 36u)));  if (depth < kMaxDepth) unit_0091(c, 336u, depth + 1u); else { c.pc = 0x003664A0u; return; } if (c.pc != 0x00155E0Cu) [[unlikely]] return; }
L_00155E0C:
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 1;
L_00155E10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155E18u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0090(c, 485u, depth + 1u); else { c.pc = 0x003639F8u; return; } if (c.pc != 0x00155E18u) [[unlikely]] return; }
L_00155E18:
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_00155E20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00155E40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00155E6C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155E64u); set32(c.r[4], c.r[4].w[0] - 24464u);  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x00155E64u) [[unlikely]] return; }
L_00155E64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00155EA8; } }
L_00155E6C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[3].w[0])));  goto L_00155E8C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155E84u); set32(c.r[4], ld32((c.r[3].w[0])));  if (depth < kMaxDepth) unit_008E(c, 363u, depth + 1u); else { c.pc = 0x0035A970u; return; } if (c.pc != 0x00155E84u) [[unlikely]] return; }
L_00155E84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_00155E98; } }
L_00155E8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155E94u);  if (depth < kMaxDepth) unit_0091(c, 320u, depth + 1u); else { c.pc = 0x00366240u; return; } if (c.pc != 0x00155E94u) [[unlikely]] return; }
L_00155E94:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 1;
L_00155E98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155EA0u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0090(c, 485u, depth + 1u); else { c.pc = 0x003639F8u; return; } if (c.pc != 0x00155EA0u) [[unlikely]] return; }
L_00155EA0:
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_00155EA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00155EC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[5].d[0] << 48;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);  if (t) { goto L_00155F14; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[5].d[0] << 48;  goto L_00155EF0; }
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.budget -= 2;
L_00155EF0:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < -960ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[3].w[0])));  goto L_00155F08; }
    set32(c.r[5], 0u - 960u);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 2;
L_00155F08:
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155F14u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);  if (depth < kMaxDepth) unit_0091(c, 69u, depth + 1u); else { c.pc = 0x00364710u; return; } if (c.pc != 0x00155F14u) [[unlikely]] return; }
L_00155F14:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00155F20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 5;
    if (c.r[6].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_00155FCC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[1] = c.f[12];  if (t) { goto L_00155F50; } }
    c.f[1] = c.f[0];
    c.budget -= 1;
L_00155F50:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_00155F6C; }
    c.f[1] = c.f[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 2;
L_00155F6C:
    c.f[0] = c.r[2].w[0];
    c.f[2] = 0u;
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[12]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[3] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);  if (t) { goto L_00155F8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u - 960u);  if (t) { goto L_00155FC0; } }
L_00155F8C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 80u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 82u)));
    c.f[0] = c.r[3].w[0];
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[3], c.f[1]);
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 13;
L_00155FC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155FC8u); set32(c.r[4], ld32((c.r[6].w[0])));  if (depth < kMaxDepth) unit_0091(c, 69u, depth + 1u); else { c.pc = 0x00364710u; return; } if (c.pc != 0x00155FC8u) [[unlikely]] return; }
L_00155FC8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00155FCC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00155FE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00156010; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156000u); set32(c.r[4], ld32((c.r[3].w[0])));  if (depth < kMaxDepth) unit_0090(c, 476u, depth + 1u); else { c.pc = 0x00363908u; return; } if (c.pc != 0x00156000u) [[unlikely]] return; }
L_00156000:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u - 9u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
L_00156010:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00156020:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 24u)));  c.pc = t; return; }
L_00156030:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00156058; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001561C8; } }
L_00156058:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156060u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0091(c, 179u, depth + 1u); else { c.pc = 0x00365288u; return; } if (c.pc != 0x00156060u) [[unlikely]] return; }
L_00156060:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 76u), 0u);  goto L_00156098; }
    set32(c.r[3], 0u - 2u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { st32((c.r[17].w[0] + 76u), c.r[3].w[0]);  goto L_00156088; }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { st32((c.r[17].w[0] + 76u), c.r[3].w[0]);  goto L_00156088; }
    set32(c.r[2], 0u - 999u);
    st32((c.r[17].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 2;
L_00156088:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_001560A8; } }
L_00156098:
    set32(c.r[2], 0u - 3u);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
L_001560A8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 20u)));  goto L_00156190; }
    set32(c.r[2], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; c.f[3] = ld32((c.r[17].w[0] + 92u));  if (t) { goto L_001560D8; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001560F4; } }
L_001560D8:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_001560F4:
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 3;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_0015610C; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00156124; } }
L_0015610C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 6;
L_00156124:
    c.f[2] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[17].w[0] + 96u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[3]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015614Cu); c.f[12] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[0]);  if (depth < kMaxDepth) unit_000D(c, 187u, depth + 1u); else { c.pc = 0x00155F20u; return; } if (c.pc != 0x0015614Cu) [[unlikely]] return; }
L_0015614C:
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015618C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  goto L_0015617C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156178u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 189u, depth + 1u); else { c.pc = 0x00155FE0u; return; } if (c.pc != 0x00156178u) [[unlikely]] return; }
L_00156178:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_0015617C:
    set32(c.r[2], 0u - 9u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 88u), 0u);
    c.budget -= 4;
L_0015618C:
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 1;
L_00156190:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156198u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0090(c, 485u, depth + 1u); else { c.pc = 0x003639F8u; return; } if (c.pc != 0x00156198u) [[unlikely]] return; }
L_00156198:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_001561C4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 24352u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00154000u < 16384u) { entry = entries_000D[(t - 0x00154000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001561C0:
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_001561C4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001561C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001561E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[4].w[0] + 28u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_00156208; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156204u); set32(c.r[4], ld32((c.r[3].w[0])));  if (depth < kMaxDepth) unit_0091(c, 215u, depth + 1u); else { c.pc = 0x00365578u; return; } if (c.pc != 0x00156204u) [[unlikely]] return; }
L_00156204:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00156208:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00156210:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[4].w[0] + 28u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_00156238; }
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156234u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 215u, depth + 1u); else { c.pc = 0x00365578u; return; } if (c.pc != 0x00156234u) [[unlikely]] return; }
L_00156234:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00156238:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00156240:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00156280; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156260u); set32(c.r[5], 0u + 12288u);  if (depth < kMaxDepth) unit_000D(c, 163u, depth + 1u); else { c.pc = 0x00155C50u; return; } if (c.pc != 0x00156260u) [[unlikely]] return; }
L_00156260:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 48u), c.r[2].w[0]);  if (t) { goto L_00156280; } }
    set32(c.r[6], 0u + 12288u);
    st32((c.r[16].w[0] + 52u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156280u); set32(c.r[5], ld32((c.r[16].w[0] + 48u)));  if (depth < kMaxDepth) unit_0092(c, 173u, depth + 1u); else { c.pc = 0x0036A0F0u; return; } if (c.pc != 0x00156280u) [[unlikely]] return; }
L_00156280:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00156290:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001562E0; }
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001562DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001562C0u); set32(c.r[4], ld32((c.r[4].w[0])));  if (depth < kMaxDepth) unit_0092(c, 180u, depth + 1u); else { c.pc = 0x0036A238u; return; } if (c.pc != 0x001562C0u) [[unlikely]] return; }
L_001562C0:
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 52u), 0u);  goto L_001562DC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001562D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001562D4u) [[unlikely]] return; }
L_001562D4:
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    c.budget -= 2;
L_001562DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001562E0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001562F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00156340; }
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0015633C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156320u); set32(c.r[4], ld32((c.r[4].w[0])));  if (depth < kMaxDepth) unit_008C(c, 83u, depth + 1u); else { c.pc = 0x00350BA8u; return; } if (c.pc != 0x00156320u) [[unlikely]] return; }
L_00156320:
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 60u), 0u);  goto L_0015633C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156334u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00156334u) [[unlikely]] return; }
L_00156334:
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 60u), 0u);
    c.budget -= 2;
L_0015633C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00156340:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00156350:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 12864u);
    c.budget -= 3;
L_0015635C:
    st32((c.r[4].w[0]), 0u);
    set32(c.r[5], c.r[5].w[0] + 8u);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[3].d[0] = c.r[5].sd[0] < 32ll ? 1ull : 0ull;
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015635Cu | kUnwind; return; } goto L_0015635C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[6], 0u + 120u);
    set32(c.r[3], ld32((c.r[3].w[0] - 7792u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_001563F0; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[7], c.r[7].w[0] - 7792u);
    set32(c.r[5], c.r[5].w[0] + 12864u);
    set32(c.r[4], ld32((c.r[7].w[0])));
    c.budget -= 5;
L_001563B4:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] >= 0; c.r[3].d[0] = c.r[4].d[0] & 31ull;  if (t) { goto L_001563C8; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], c.r[3].w[0] << 2);  goto L_001563CC; }
    set32(c.r[3], c.r[3].w[0] - 32u);
    c.budget -= 1;
L_001563C8:
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 1;
L_001563CC:
    set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[7].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[4].w[0]), c.r[7].w[0]);
    set32(c.r[7], c.r[7].w[0] + 12u);
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.budget -= 8;
    if (c.r[3].d[0] != c.r[6].d[0]) { set32(c.r[4], ld32((c.r[7].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001563B4u | kUnwind; return; } goto L_001563B4; }
    c.budget -= 1;
L_001563F0:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 31464u), c.r[3].w[0]);  c.pc = t; return; }
L_00156400:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 12864u);
    c.budget -= 3;
L_0015640C:
    st32((c.r[4].w[0]), 0u);
    set32(c.r[5], c.r[5].w[0] + 8u);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[3].d[0] = c.r[5].sd[0] < 32ll ? 1ull : 0ull;
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015640Cu | kUnwind; return; } goto L_0015640C; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00156450:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] >= 0; c.r[3].d[0] = c.r[5].d[0] & 31ull;  if (t) { goto L_00156464; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], c.r[3].w[0] << 2);  goto L_00156468; }
    set32(c.r[3], c.r[3].w[0] - 32u);
    c.budget -= 1;
L_00156464:
    set32(c.r[4], c.r[3].w[0] << 2);
    c.budget -= 1;
L_00156468:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[3].w[0] + 12864u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00156498; } }
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 1;
L_00156484:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_00156498; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00156484u | kUnwind; return; } goto L_00156484; }
L_00156498:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001564A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 8424u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[5], c.r[31].w[0] - 8u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x45530000u);
    c.r[3].d[0] = c.r[3].d[0] | 16706ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 8552u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 22;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[4].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_00156510; } }
    set32(c.r[5], c.r[17].w[0] << 6);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156508u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x00156508u) [[unlikely]] return; }
L_00156508:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_00156520; } }
L_00156510:
    set32(c.r[4], c.r[17].w[0] << 6);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015651Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 206u, depth + 1u); else { c.pc = 0x00171A20u; return; } if (c.pc != 0x0015651Cu) [[unlikely]] return; }
L_0015651C:
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 1;
L_00156520:
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st32((c.r[18].w[0] + 20u), c.r[16].w[0]);  goto L_00156544; }
    st32((c.r[18].w[0] + 20u), 0u);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 28u), 0u);
    st32((c.r[18].w[0] + 32u), 0u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 36u), 0u);  if (t) { goto L_0015655C; } }
L_00156544:
    st32((c.r[18].w[0] + 32u), c.r[17].w[0]);
    st32((c.r[18].w[0] + 36u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156558u); st32((c.r[18].w[0] + 28u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x00156558u) [[unlikely]] return; }
L_00156558:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0015655C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00156580:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00156610; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 8552u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001565D8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[5].d[0] + 0ull;  goto L_001565D0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001565C8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x001565C8u) [[unlikely]] return; }
L_001565C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001565D8; } }
L_001565D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001565D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001565D8u) [[unlikely]] return; }
L_001565D8:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] << 48;  goto L_001565FC; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44410000u);
    set32(c.r[3], c.r[3].w[0] + 8424u);
    c.r[2].d[0] = c.r[2].d[0] | 17732ull;
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.budget -= 7;
L_001565FC:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00156614; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156610u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x00156610u) [[unlikely]] return; }
L_00156610:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00156614:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00156630:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00156664; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015665Cu); set32(c.r[5], 0u + 82u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x0015665Cu) [[unlikely]] return; }
L_0015665C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015668C; } }
L_00156664:
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156670u); set32(c.r[4], c.r[5].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x00156670u) [[unlikely]] return; }
L_00156670:
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + 64u);
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 7;
L_0015668C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001566A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 5;
    if (c.r[2].sd[0] > 0) { set32(c.r[2], ld32((c.r[4].w[0] + 28u)));  goto L_001566C8; }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001566C0u); set32(c.r[5], 0u + 83u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x001566C0u) [[unlikely]] return; }
L_001566C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001566E0; } }
L_001566C8:
    set32(c.r[2], c.r[2].w[0] - 64u);
    st32((c.r[4].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 6;
L_001566E0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001566F0:
    set32(c.r[29], c.r[29].w[0] - 288u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156718u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x00156718u) [[unlikely]] return; }
L_00156718:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015672Cu); set32(c.r[6], c.r[6].w[0] - 20144u);  if (depth < kMaxDepth) unit_001B(c, 232u, depth + 1u); else { c.pc = 0x0018FB30u; return; } if (c.pc != 0x0015672Cu) [[unlikely]] return; }
L_0015672C:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156738u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x00156738u) [[unlikely]] return; }
L_00156738:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156744u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 225u, depth + 1u); else { c.pc = 0x0018FA60u; return; } if (c.pc != 0x00156744u) [[unlikely]] return; }
L_00156744:
    set32(c.r[4], c.r[29].w[0] + 256u);
    st32((c.r[29].w[0] + 260u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156754u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x00156754u) [[unlikely]] return; }
L_00156754:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[5].w[0] - 20128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156768u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 232u, depth + 1u); else { c.pc = 0x0018FB30u; return; } if (c.pc != 0x00156768u) [[unlikely]] return; }
L_00156768:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156774u); set32(c.r[5], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_001B(c, 151u, depth + 1u); else { c.pc = 0x0018EA60u; return; } if (c.pc != 0x00156774u) [[unlikely]] return; }
L_00156774:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[2] = c.r[3].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156794u); c.f[12] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 5u, depth + 1u); else { c.pc = 0x00184060u; return; } if (c.pc != 0x00156794u) [[unlikely]] return; }
L_00156794:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.f[20] = c.f[0];
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 8;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_001567CC; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001567C4u); c.r[6].d[0] = 0ull | 32768ull;  if (depth < kMaxDepth) unit_001B(c, 241u, depth + 1u); else { c.pc = 0x0018FD70u; return; } if (c.pc != 0x001567C4u) [[unlikely]] return; }
L_001567C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_001568A0; } }
L_001567CC:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 272u);
    c.f[21] = fp::ee::div(c.fcr31, c.f[0], c.f[20]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001567ECu); set32(c.r[6], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_001B(c, 150u, depth + 1u); else { c.pc = 0x0018EA40u; return; } if (c.pc != 0x001567ECu) [[unlikely]] return; }
L_001567EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);
    c.f[3] = ld32((c.r[29].w[0] + 64u));
    st32((c.r[29].w[0] + 92u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 68u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[21]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[21]);
    c.f[1] = ld32((c.r[29].w[0] + 72u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    st32((c.r[29].w[0] + 84u), c.f[2]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[21]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015682Cu); st32((c.r[29].w[0] + 88u), c.f[0]);  if (depth < kMaxDepth) unit_001C(c, 10u, depth + 1u); else { c.pc = 0x00190210u; return; } if (c.pc != 0x0015682Cu) [[unlikely]] return; }
L_0015682C:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156838u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 225u, depth + 1u); else { c.pc = 0x0018FA60u; return; } if (c.pc != 0x00156838u) [[unlikely]] return; }
L_00156838:
    c.f[2] = ld32((c.r[29].w[0] + 240u));
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.f[1] = ld32((c.r[29].w[0] + 244u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 248u));
    set32(c.r[6], c.r[29].w[0] + 240u);
    c.f[2] = c.f[2] ^ fp::kSign;
    c.f[1] = c.f[1] ^ fp::kSign;
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 224u), c.f[2]);
    st32((c.r[29].w[0] + 228u), c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015686Cu); st32((c.r[29].w[0] + 232u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x0015686Cu) [[unlikely]] return; }
L_0015686C:
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015687Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 217u, depth + 1u); else { c.pc = 0x0018F450u; return; } if (c.pc != 0x0015687Cu) [[unlikely]] return; }
L_0015687C:
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[6], c.r[29].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015688Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x0015688Cu) [[unlikely]] return; }
L_0015688C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015689Cu); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_001B(c, 217u, depth + 1u); else { c.pc = 0x0018F450u; return; } if (c.pc != 0x0015689Cu) [[unlikely]] return; }
L_0015689C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_001568A0:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_001568C0:
    set32(c.r[29], c.r[29].w[0] - 288u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001568E8u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x001568E8u) [[unlikely]] return; }
L_001568E8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001568FCu); set32(c.r[6], c.r[6].w[0] - 20064u);  if (depth < kMaxDepth) unit_001B(c, 232u, depth + 1u); else { c.pc = 0x0018FB30u; return; } if (c.pc != 0x001568FCu) [[unlikely]] return; }
L_001568FC:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156908u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x00156908u) [[unlikely]] return; }
L_00156908:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156914u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 225u, depth + 1u); else { c.pc = 0x0018FA60u; return; } if (c.pc != 0x00156914u) [[unlikely]] return; }
L_00156914:
    set32(c.r[4], c.r[29].w[0] + 256u);
    st32((c.r[29].w[0] + 256u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156924u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x00156924u) [[unlikely]] return; }
L_00156924:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[5].w[0] - 20048u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156938u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 232u, depth + 1u); else { c.pc = 0x0018FB30u; return; } if (c.pc != 0x00156938u) [[unlikely]] return; }
L_00156938:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156944u); set32(c.r[5], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_001B(c, 151u, depth + 1u); else { c.pc = 0x0018EA60u; return; } if (c.pc != 0x00156944u) [[unlikely]] return; }
L_00156944:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[2] = c.r[3].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156964u); c.f[12] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 5u, depth + 1u); else { c.pc = 0x00184060u; return; } if (c.pc != 0x00156964u) [[unlikely]] return; }
L_00156964:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.f[20] = c.f[0];
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 8;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_0015699C; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156994u); c.r[6].d[0] = 0ull | 32768ull;  if (depth < kMaxDepth) unit_001B(c, 243u, depth + 1u); else { c.pc = 0x0018FE00u; return; } if (c.pc != 0x00156994u) [[unlikely]] return; }
L_00156994:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00156A70; } }
L_0015699C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 272u);
    c.f[21] = fp::ee::div(c.fcr31, c.f[0], c.f[20]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001569BCu); set32(c.r[6], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_001B(c, 150u, depth + 1u); else { c.pc = 0x0018EA40u; return; } if (c.pc != 0x001569BCu) [[unlikely]] return; }
L_001569BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);
    c.f[3] = ld32((c.r[29].w[0] + 64u));
    st32((c.r[29].w[0] + 92u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 68u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[21]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[21]);
    c.f[1] = ld32((c.r[29].w[0] + 72u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    st32((c.r[29].w[0] + 84u), c.f[2]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[21]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001569FCu); st32((c.r[29].w[0] + 88u), c.f[0]);  if (depth < kMaxDepth) unit_001C(c, 10u, depth + 1u); else { c.pc = 0x00190210u; return; } if (c.pc != 0x001569FCu) [[unlikely]] return; }
L_001569FC:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156A08u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 225u, depth + 1u); else { c.pc = 0x0018FA60u; return; } if (c.pc != 0x00156A08u) [[unlikely]] return; }
L_00156A08:
    c.f[2] = ld32((c.r[29].w[0] + 240u));
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.f[1] = ld32((c.r[29].w[0] + 244u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 248u));
    set32(c.r[6], c.r[29].w[0] + 240u);
    c.f[2] = c.f[2] ^ fp::kSign;
    c.f[1] = c.f[1] ^ fp::kSign;
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 224u), c.f[2]);
    st32((c.r[29].w[0] + 228u), c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156A3Cu); st32((c.r[29].w[0] + 232u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x00156A3Cu) [[unlikely]] return; }
L_00156A3C:
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156A4Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 217u, depth + 1u); else { c.pc = 0x0018F450u; return; } if (c.pc != 0x00156A4Cu) [[unlikely]] return; }
L_00156A4C:
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[6], c.r[29].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156A5Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x00156A5Cu) [[unlikely]] return; }
L_00156A5C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156A6Cu); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_001B(c, 217u, depth + 1u); else { c.pc = 0x0018F450u; return; } if (c.pc != 0x00156A6Cu) [[unlikely]] return; }
L_00156A6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00156A70:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_00156A90:
    set32(c.r[29], c.r[29].w[0] - 288u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156AB8u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x00156AB8u) [[unlikely]] return; }
L_00156AB8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156ACCu); set32(c.r[6], c.r[6].w[0] - 19984u);  if (depth < kMaxDepth) unit_001B(c, 232u, depth + 1u); else { c.pc = 0x0018FB30u; return; } if (c.pc != 0x00156ACCu) [[unlikely]] return; }
L_00156ACC:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156AD8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x00156AD8u) [[unlikely]] return; }
L_00156AD8:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156AE4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 225u, depth + 1u); else { c.pc = 0x0018FA60u; return; } if (c.pc != 0x00156AE4u) [[unlikely]] return; }
L_00156AE4:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156AF0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x00156AF0u) [[unlikely]] return; }
L_00156AF0:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156AFCu); set32(c.r[5], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_001B(c, 151u, depth + 1u); else { c.pc = 0x0018EA60u; return; } if (c.pc != 0x00156AFCu) [[unlikely]] return; }
L_00156AFC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[2] = c.r[3].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156B1Cu); c.f[12] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 5u, depth + 1u); else { c.pc = 0x00184060u; return; } if (c.pc != 0x00156B1Cu) [[unlikely]] return; }
L_00156B1C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.f[20] = c.f[0];
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 8;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_00156B54; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156B4Cu); c.r[6].d[0] = 0ull | 32768ull;  if (depth < kMaxDepth) unit_001B(c, 239u, depth + 1u); else { c.pc = 0x0018FCE0u; return; } if (c.pc != 0x00156B4Cu) [[unlikely]] return; }
L_00156B4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00156C28; } }
L_00156B54:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 272u);
    c.f[21] = fp::ee::div(c.fcr31, c.f[0], c.f[20]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156B74u); set32(c.r[6], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_001B(c, 150u, depth + 1u); else { c.pc = 0x0018EA40u; return; } if (c.pc != 0x00156B74u) [[unlikely]] return; }
L_00156B74:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);
    c.f[3] = ld32((c.r[29].w[0] + 64u));
    st32((c.r[29].w[0] + 92u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 68u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[21]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[21]);
    c.f[1] = ld32((c.r[29].w[0] + 72u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    st32((c.r[29].w[0] + 84u), c.f[2]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[21]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156BB4u); st32((c.r[29].w[0] + 88u), c.f[0]);  if (depth < kMaxDepth) unit_001C(c, 10u, depth + 1u); else { c.pc = 0x00190210u; return; } if (c.pc != 0x00156BB4u) [[unlikely]] return; }
L_00156BB4:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156BC0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 225u, depth + 1u); else { c.pc = 0x0018FA60u; return; } if (c.pc != 0x00156BC0u) [[unlikely]] return; }
L_00156BC0:
    c.f[2] = ld32((c.r[29].w[0] + 240u));
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.f[1] = ld32((c.r[29].w[0] + 244u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 248u));
    set32(c.r[6], c.r[29].w[0] + 240u);
    c.f[2] = c.f[2] ^ fp::kSign;
    c.f[1] = c.f[1] ^ fp::kSign;
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 224u), c.f[2]);
    st32((c.r[29].w[0] + 228u), c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156BF4u); st32((c.r[29].w[0] + 232u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x00156BF4u) [[unlikely]] return; }
L_00156BF4:
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156C04u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 217u, depth + 1u); else { c.pc = 0x0018F450u; return; } if (c.pc != 0x00156C04u) [[unlikely]] return; }
L_00156C04:
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[6], c.r[29].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156C14u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x00156C14u) [[unlikely]] return; }
L_00156C14:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156C24u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_001B(c, 217u, depth + 1u); else { c.pc = 0x0018F450u; return; } if (c.pc != 0x00156C24u) [[unlikely]] return; }
L_00156C24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00156C28:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_00156C40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156C54u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x00156C54u) [[unlikely]] return; }
L_00156C54:
    st32((c.r[16].w[0] + 12u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00156C70:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_001B(c, 153u, depth); }
L_00156C80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[20] = ld32((c.r[5].w[0] + 8u));
    c.f[22] = ld32((c.r[5].w[0]));
    c.f[21] = ld32((c.r[5].w[0] + 4u));
    c.f[13] = c.f[20];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156CB4u); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_0019(c, 12u, depth + 1u); else { c.pc = 0x00184300u; return; } if (c.pc != 0x00156CB4u) [[unlikely]] return; }
L_00156CB4:
    c.f[0] = 0u;
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[22], c.f[22]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156CCCu); c.f[12] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[20]);  if (depth < kMaxDepth) unit_0019(c, 5u, depth + 1u); else { c.pc = 0x00184060u; return; } if (c.pc != 0x00156CCCu) [[unlikely]] return; }
L_00156CCC:
    c.f[12] = c.f[21];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156CD8u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0019(c, 12u, depth + 1u); else { c.pc = 0x00184300u; return; } if (c.pc != 0x00156CD8u) [[unlikely]] return; }
L_00156CD8:
    set32(c.r[3], 0u - c.r[2].w[0]);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00156D00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156D30u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x00156D30u) [[unlikely]] return; }
L_00156D30:
    c.f[21] = ld32((c.r[29].w[0] + 56u));
    st32((c.r[29].w[0] + 60u), 0u);
    c.f[20] = ld32((c.r[29].w[0] + 48u));
    c.f[22] = ld32((c.r[29].w[0] + 52u));
    c.f[13] = c.f[21];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156D4Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0019(c, 12u, depth + 1u); else { c.pc = 0x00184300u; return; } if (c.pc != 0x00156D4Cu) [[unlikely]] return; }
L_00156D4C:
    c.f[0] = 0u;
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[20]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156D64u); c.f[12] = fp::ee::madd(c.fcr31, c.facc, c.f[21], c.f[21]);  if (depth < kMaxDepth) unit_0019(c, 5u, depth + 1u); else { c.pc = 0x00184060u; return; } if (c.pc != 0x00156D64u) [[unlikely]] return; }
L_00156D64:
    c.f[12] = c.f[22];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156D70u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0019(c, 12u, depth + 1u); else { c.pc = 0x00184300u; return; } if (c.pc != 0x00156D70u) [[unlikely]] return; }
L_00156D70:
    set32(c.r[3], 0u - c.r[2].w[0]);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00156DA0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.f[20] = c.f[12];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156DD0u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x00156DD0u) [[unlikely]] return; }
L_00156DD0:
    set32(c.r[4], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 76u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156DE0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x00156DE0u) [[unlikely]] return; }
L_00156DE0:
    c.f[0] = ld32((c.r[16].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[29].w[0] + 64u));
    c.f[2] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[20]);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = ld32((c.r[29].w[0] + 68u));
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[20]);
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[1] = ld32((c.r[29].w[0] + 72u));
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[20]);
    st32((c.r[17].w[0] + 8u), c.f[0]);
    st32((c.r[17].w[0] + 12u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00156E50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156E68u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 236u, depth + 1u); else { c.pc = 0x00165F20u; return; } if (c.pc != 0x00156E68u) [[unlikely]] return; }
L_00156E68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 8576u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156E7Cu); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000D(c, 393u, depth + 1u); else { c.pc = 0x00157A10u; return; } if (c.pc != 0x00156E7Cu) [[unlikely]] return; }
L_00156E7C:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[16].w[0] + 64u);  goto L_00156E98; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00156EE0; } }
L_00156E98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156EA0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001B(c, 104u, depth + 1u); else { c.pc = 0x0018DEA0u; return; } if (c.pc != 0x00156EA0u) [[unlikely]] return; }
L_00156EA0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[16].w[0] + 28u), 0u);  goto L_00156ECC; }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[5], 0u + 75u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156EC4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x00156EC4u) [[unlikely]] return; }
L_00156EC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00156EE0; } }
L_00156ECC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 5;
L_00156EE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00156EF0:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156F20u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0011(c, 236u, depth + 1u); else { c.pc = 0x00165F20u; return; } if (c.pc != 0x00156F20u) [[unlikely]] return; }
L_00156F20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 8576u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156F34u); st32((c.r[19].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000D(c, 393u, depth + 1u); else { c.pc = 0x00157A10u; return; } if (c.pc != 0x00156F34u) [[unlikely]] return; }
L_00156F34:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[19].w[0] + 64u);  goto L_00156F50; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00156FDC; } }
L_00156F50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156F58u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001B(c, 104u, depth + 1u); else { c.pc = 0x0018DEA0u; return; } if (c.pc != 0x00156F58u) [[unlikely]] return; }
L_00156F58:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.f[0] = ld32((c.r[18].w[0]));  goto L_00156F84; }
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[5], 0u + 75u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156F7Cu); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x00156F7Cu) [[unlikely]] return; }
L_00156F7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00156FDC; } }
L_00156F84:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[19].w[0] + 224u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    st32((c.r[19].w[0] + 228u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    st32((c.r[19].w[0] + 232u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 12u));
    st32((c.r[19].w[0] + 236u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0]));
    st32((c.r[19].w[0] + 240u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[19].w[0] + 244u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    st32((c.r[19].w[0] + 248u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    st32((c.r[19].w[0] + 252u), c.f[0]);
    st32((c.r[19].w[0] + 272u), c.r[16].w[0]);
    st32((c.r[19].w[0] + 28u), 0u);
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 22;
L_00156FDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00157000:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157014u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 236u, depth + 1u); else { c.pc = 0x00165F20u; return; } if (c.pc != 0x00157014u) [[unlikely]] return; }
L_00157014:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 8576u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157028u); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000D(c, 393u, depth + 1u); else { c.pc = 0x00157A10u; return; } if (c.pc != 0x00157028u) [[unlikely]] return; }
L_00157028:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 32u)));  goto L_00157044; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001570E8; } }
L_00157044:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015704Cu); set32(c.r[4], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 107u, depth + 1u); else { c.pc = 0x0018DEE0u; return; } if (c.pc != 0x0015704Cu) [[unlikely]] return; }
L_0015704C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[16].w[0] + 224u);  goto L_00157078; }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[5], 0u + 75u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157070u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x00157070u) [[unlikely]] return; }
L_00157070:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001570E8; } }
L_00157078:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157080u); set32(c.r[5], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 131u, depth + 1u); else { c.pc = 0x0018E170u; return; } if (c.pc != 0x00157080u) [[unlikely]] return; }
L_00157080:
    set32(c.r[4], c.r[16].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015708Cu); set32(c.r[5], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 132u, depth + 1u); else { c.pc = 0x0018E180u; return; } if (c.pc != 0x0015708Cu) [[unlikely]] return; }
L_0015708C:
    set32(c.r[4], c.r[16].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157098u); set32(c.r[5], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 133u, depth + 1u); else { c.pc = 0x0018E190u; return; } if (c.pc != 0x00157098u) [[unlikely]] return; }
L_00157098:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001570A4u); set32(c.r[5], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 134u, depth + 1u); else { c.pc = 0x0018E1A0u; return; } if (c.pc != 0x001570A4u) [[unlikely]] return; }
L_001570A4:
    c.f[0] = ld32((c.r[29].w[0] + 40u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x46220000u);
    c.r[2].d[0] = c.r[2].d[0] | 63875ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = c.f[0] ^ fp::kSign;
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    st32((c.r[16].w[0] + 272u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 28u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 17;
L_001570E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00157100:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00157168; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[3], c.r[3].w[0] + 8576u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00157148; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157144u); set32(c.r[4], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 113u, depth + 1u); else { c.pc = 0x0018DF90u; return; } if (c.pc != 0x00157144u) [[unlikely]] return; }
L_00157144:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00157148:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157150u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0011(c, 240u, depth + 1u); else { c.pc = 0x00166010u; return; } if (c.pc != 0x00157150u) [[unlikely]] return; }
L_00157150:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0015716C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157168u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x00157168u) [[unlikely]] return; }
L_00157168:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0015716C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00157180:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00157190:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_001571AC; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_001571B0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001571ACu); set32(c.r[4], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 114u, depth + 1u); else { c.pc = 0x0018DFA0u; return; } if (c.pc != 0x001571ACu) [[unlikely]] return; }
L_001571AC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001571B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001571C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001571E4u); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 327u, depth + 1u); else { c.pc = 0x00157220u; return; } if (c.pc != 0x001571E4u) [[unlikely]] return; }
L_001571E4:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001571F0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 329u, depth + 1u); else { c.pc = 0x00157280u; return; } if (c.pc != 0x001571F0u) [[unlikely]] return; }
L_001571F0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001571FCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 331u, depth + 1u); else { c.pc = 0x001572E0u; return; } if (c.pc != 0x001571FCu) [[unlikely]] return; }
L_001571FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00157220:
    c.f[2] = ld32((c.r[5].w[0] + 8u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    set32(c.r[3], 0u + 1u);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[4].w[0] + 224u), c.f[0]);
    st32((c.r[4].w[0] + 228u), c.f[1]);
    st32((c.r[4].w[0] + 232u), c.f[2]);
    st32((c.r[4].w[0] + 236u), c.r[6].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 276u), c.r[3].w[0]);  c.pc = t; return; }
L_00157250:
    c.f[0] = ld32((c.r[4].w[0] + 224u));
    st32((c.r[5].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 228u));
    st32((c.r[5].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 232u));
    st32((c.r[5].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 236u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 12u), c.f[0]);  c.pc = t; return; }
L_00157280:
    c.f[2] = ld32((c.r[5].w[0] + 8u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    set32(c.r[3], 0u + 1u);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[4].w[0] + 240u), c.f[0]);
    st32((c.r[4].w[0] + 244u), c.f[1]);
    st32((c.r[4].w[0] + 248u), c.f[2]);
    st32((c.r[4].w[0] + 252u), c.r[6].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 276u), c.r[3].w[0]);  c.pc = t; return; }
L_001572B0:
    c.f[0] = ld32((c.r[4].w[0] + 240u));
    st32((c.r[5].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 244u));
    st32((c.r[5].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 248u));
    st32((c.r[5].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 252u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 12u), c.f[0]);  c.pc = t; return; }
L_001572E0:
    st32((c.r[4].w[0] + 272u), c.r[5].w[0]);
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 276u), c.r[3].w[0]);  c.pc = t; return; }
L_001572F0:
    set32(c.r[3], ld32((c.r[4].w[0] + 272u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_00157300:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 272u)));  c.pc = t; return; }
L_00157310:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157328u); set32(c.r[4], c.r[16].w[0] + 256u);  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0018EA30u; return; } if (c.pc != 0x00157328u) [[unlikely]] return; }
L_00157328:
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 276u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00157340:
    c.f[12] = ld32((c.r[5].w[0]));
    c.r[6].d[0] = 0ull + 0ull;
    c.f[13] = ld32((c.r[5].w[0] + 4u));
    c.f[14] = ld32((c.r[5].w[0] + 8u));
    c.budget -= 6;
    { set32(c.r[5], 0u + 1u);  goto L_001577B0; }
L_00157360:
    c.f[12] = ld32((c.r[5].w[0]));
    c.r[6].d[0] = 0ull + 0ull;
    c.f[13] = ld32((c.r[5].w[0] + 4u));
    c.f[14] = ld32((c.r[5].w[0] + 8u));
    c.budget -= 6;
    { set32(c.r[5], 0u + 1u);  goto L_00157820; }
L_00157380:
    c.f[12] = ld32((c.r[5].w[0]));
    set32(c.r[6], 0u + 1u);
    c.f[13] = ld32((c.r[5].w[0] + 4u));
    c.f[14] = ld32((c.r[5].w[0] + 8u));
    c.budget -= 6;
    { c.r[5].d[0] = 0ull + 0ull;  goto L_001577B0; }
L_001573A0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[17].w[0] + 224u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001573C8u); set32(c.r[6], c.r[17].w[0] + 240u);  if (depth < kMaxDepth) unit_000D(c, 282u, depth + 1u); else { c.pc = 0x00156C40u; return; } if (c.pc != 0x001573C8u) [[unlikely]] return; }
L_001573C8:
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[17].w[0] + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001573D8u); set32(c.r[6], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_001B(c, 150u, depth + 1u); else { c.pc = 0x0018EA40u; return; } if (c.pc != 0x001573D8u) [[unlikely]] return; }
L_001573D8:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001573E8u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_001C(c, 5u, depth + 1u); else { c.pc = 0x001900C0u; return; } if (c.pc != 0x001573E8u) [[unlikely]] return; }
L_001573E8:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001573F4u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_001C(c, 10u, depth + 1u); else { c.pc = 0x00190210u; return; } if (c.pc != 0x001573F4u) [[unlikely]] return; }
L_001573F4:
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157404u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 232u, depth + 1u); else { c.pc = 0x0018FB30u; return; } if (c.pc != 0x00157404u) [[unlikely]] return; }
L_00157404:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157414u); set32(c.r[6], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_001B(c, 150u, depth + 1u); else { c.pc = 0x0018EA40u; return; } if (c.pc != 0x00157414u) [[unlikely]] return; }
L_00157414:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157424u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001C(c, 5u, depth + 1u); else { c.pc = 0x001900C0u; return; } if (c.pc != 0x00157424u) [[unlikely]] return; }
L_00157424:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157430u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_001C(c, 10u, depth + 1u); else { c.pc = 0x00190210u; return; } if (c.pc != 0x00157430u) [[unlikely]] return; }
L_00157430:
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157440u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 232u, depth + 1u); else { c.pc = 0x0018FB30u; return; } if (c.pc != 0x00157440u) [[unlikely]] return; }
L_00157440:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    st32((c.r[17].w[0] + 276u), c.r[2].w[0]);
    set32(c.r[5], c.r[17].w[0] + 240u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157458u); set32(c.r[6], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x00157458u) [[unlikely]] return; }
L_00157458:
    c.f[3] = ld32((c.r[29].w[0] + 52u));
    set32(c.r[3], 0u + 1u);
    c.f[2] = ld32((c.r[29].w[0] + 56u));
    c.f[1] = ld32((c.r[29].w[0] + 60u));
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    st32((c.r[17].w[0] + 224u), c.f[0]);
    st32((c.r[17].w[0] + 228u), c.f[3]);
    st32((c.r[17].w[0] + 232u), c.f[2]);
    st32((c.r[17].w[0] + 236u), c.f[1]);
    st32((c.r[17].w[0] + 276u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_001574A0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[17].w[0] + 224u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001574C8u); set32(c.r[6], c.r[17].w[0] + 240u);  if (depth < kMaxDepth) unit_000D(c, 282u, depth + 1u); else { c.pc = 0x00156C40u; return; } if (c.pc != 0x001574C8u) [[unlikely]] return; }
L_001574C8:
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[17].w[0] + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001574D8u); set32(c.r[6], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_001B(c, 150u, depth + 1u); else { c.pc = 0x0018EA40u; return; } if (c.pc != 0x001574D8u) [[unlikely]] return; }
L_001574D8:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001574E8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001C(c, 5u, depth + 1u); else { c.pc = 0x001900C0u; return; } if (c.pc != 0x001574E8u) [[unlikely]] return; }
L_001574E8:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001574F4u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_001C(c, 10u, depth + 1u); else { c.pc = 0x00190210u; return; } if (c.pc != 0x001574F4u) [[unlikely]] return; }
L_001574F4:
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157504u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 232u, depth + 1u); else { c.pc = 0x0018FB30u; return; } if (c.pc != 0x00157504u) [[unlikely]] return; }
L_00157504:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157514u); set32(c.r[6], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_001B(c, 150u, depth + 1u); else { c.pc = 0x0018EA40u; return; } if (c.pc != 0x00157514u) [[unlikely]] return; }
L_00157514:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157524u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_001C(c, 5u, depth + 1u); else { c.pc = 0x001900C0u; return; } if (c.pc != 0x00157524u) [[unlikely]] return; }
L_00157524:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157530u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_001C(c, 10u, depth + 1u); else { c.pc = 0x00190210u; return; } if (c.pc != 0x00157530u) [[unlikely]] return; }
L_00157530:
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157540u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 232u, depth + 1u); else { c.pc = 0x0018FB30u; return; } if (c.pc != 0x00157540u) [[unlikely]] return; }
L_00157540:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    st32((c.r[17].w[0] + 276u), c.r[2].w[0]);
    set32(c.r[5], c.r[17].w[0] + 240u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157558u); set32(c.r[6], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x00157558u) [[unlikely]] return; }
L_00157558:
    c.f[3] = ld32((c.r[29].w[0] + 52u));
    set32(c.r[3], 0u + 1u);
    c.f[2] = ld32((c.r[29].w[0] + 56u));
    c.f[1] = ld32((c.r[29].w[0] + 60u));
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    st32((c.r[17].w[0] + 224u), c.f[0]);
    st32((c.r[17].w[0] + 228u), c.f[3]);
    st32((c.r[17].w[0] + 232u), c.f[2]);
    st32((c.r[17].w[0] + 236u), c.f[1]);
    st32((c.r[17].w[0] + 276u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_001575A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001575BCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 387u, depth + 1u); else { c.pc = 0x00157950u; return; } if (c.pc != 0x001575BCu) [[unlikely]] return; }
L_001575BC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001575C8u); set32(c.r[5], c.r[17].w[0] + 160u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x001575C8u) [[unlikely]] return; }
L_001575C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001575E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001575F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 387u, depth + 1u); else { c.pc = 0x00157950u; return; } if (c.pc != 0x001575F4u) [[unlikely]] return; }
L_001575F4:
    set32(c.r[2], c.r[16].w[0] + 160u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00157610:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001576C4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_001576C8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157654u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 339u, depth + 1u); else { c.pc = 0x00166DC0u; return; } if (c.pc != 0x00157654u) [[unlikely]] return; }
L_00157654:
    set32(c.r[5], c.r[16].w[0] + 64u);
    set32(c.r[4], c.r[17].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157664u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_001C(c, 141u, depth + 1u); else { c.pc = 0x00191E00u; return; } if (c.pc != 0x00157664u) [[unlikely]] return; }
L_00157664:
    set32(c.r[4], c.r[17].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157670u); set32(c.r[5], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 131u, depth + 1u); else { c.pc = 0x0018E170u; return; } if (c.pc != 0x00157670u) [[unlikely]] return; }
L_00157670:
    set32(c.r[4], c.r[17].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015767Cu); set32(c.r[5], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 132u, depth + 1u); else { c.pc = 0x0018E180u; return; } if (c.pc != 0x0015767Cu) [[unlikely]] return; }
L_0015767C:
    set32(c.r[4], c.r[17].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157688u); set32(c.r[5], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 133u, depth + 1u); else { c.pc = 0x0018E190u; return; } if (c.pc != 0x00157688u) [[unlikely]] return; }
L_00157688:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157694u); set32(c.r[5], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 134u, depth + 1u); else { c.pc = 0x0018E1A0u; return; } if (c.pc != 0x00157694u) [[unlikely]] return; }
L_00157694:
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x46220000u);
    c.r[3].d[0] = c.r[2].d[0] | 63875ull;
    c.f[1] = c.r[3].w[0];
    set32(c.r[2], 0u + 1u);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[17].w[0] + 272u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 276u), c.r[2].w[0]);
    c.budget -= 12;
L_001576C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001576C8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001576E0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00157794; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00157794; } }
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157728u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001B(c, 104u, depth + 1u); else { c.pc = 0x0018DEA0u; return; } if (c.pc != 0x00157728u) [[unlikely]] return; }
L_00157728:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_00157744; }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015773Cu); set32(c.r[5], 0u + 75u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x0015773Cu) [[unlikely]] return; }
L_0015773C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00157794; } }
L_00157744:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157750u); st32((c.r[17].w[0] + 276u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000D(c, 387u, depth + 1u); else { c.pc = 0x00157950u; return; } if (c.pc != 0x00157750u) [[unlikely]] return; }
L_00157750:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157758u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 339u, depth + 1u); else { c.pc = 0x00166DC0u; return; } if (c.pc != 0x00157758u) [[unlikely]] return; }
L_00157758:
    set32(c.r[5], c.r[16].w[0] + 64u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157768u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_001C(c, 141u, depth + 1u); else { c.pc = 0x00191E00u; return; } if (c.pc != 0x00157768u) [[unlikely]] return; }
L_00157768:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157774u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_001B(c, 115u, depth + 1u); else { c.pc = 0x0018DFB0u; return; } if (c.pc != 0x00157774u) [[unlikely]] return; }
L_00157774:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015777Cu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_001B(c, 113u, depth + 1u); else { c.pc = 0x0018DF90u; return; } if (c.pc != 0x0015777Cu) [[unlikely]] return; }
L_0015777C:
    set32(c.r[4], c.r[17].w[0] + 160u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015778Cu); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 217u, depth + 1u); else { c.pc = 0x0018F450u; return; } if (c.pc != 0x0015778Cu) [[unlikely]] return; }
L_0015778C:
    st32((c.r[17].w[0] + 276u), 0u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_00157794:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_001577B0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001577DC; } }
    c.f[0] = ld32((c.r[4].w[0] + 224u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[12]);
    st32((c.r[4].w[0] + 224u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 228u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[13]);
    st32((c.r[4].w[0] + 228u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 232u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[14]);
    st32((c.r[4].w[0] + 232u), c.f[0]);
    c.budget -= 9;
L_001577DC:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[3], 0u + 1u);  goto L_0015780C; }
    c.f[0] = ld32((c.r[4].w[0] + 240u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[12]);
    st32((c.r[4].w[0] + 240u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 244u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[13]);
    st32((c.r[4].w[0] + 244u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 248u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[14]);
    st32((c.r[4].w[0] + 248u), c.f[0]);
    set32(c.r[3], 0u + 1u);
    c.budget -= 10;
L_0015780C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 276u), c.r[3].w[0]);  c.pc = t; return; }
L_00157820:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[4], c.r[29].w[0] + 112u);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], c.r[18].w[0] + 224u);
    c.f[22] = c.f[12];
    set32(c.r[6], c.r[18].w[0] + 240u);
    c.f[21] = c.f[13];
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157868u); c.f[20] = c.f[14];  if (depth < kMaxDepth) unit_000D(c, 289u, depth + 1u); else { c.pc = 0x00156D00u; return; } if (c.pc != 0x00157868u) [[unlikely]] return; }
L_00157868:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[5].w[0] - 4864u);
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 96u), c.f[22]);
    st32((c.r[29].w[0] + 100u), c.f[21]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015788Cu); st32((c.r[29].w[0] + 104u), c.f[20]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x0015788Cu) [[unlikely]] return; }
L_0015788C:
    set32(c.r[6], ld32((c.r[29].w[0] + 112u)));
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[7], ld32((c.r[29].w[0] + 116u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001578A4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 245u, depth + 1u); else { c.pc = 0x0018FE90u; return; } if (c.pc != 0x001578A4u) [[unlikely]] return; }
L_001578A4:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001578B4u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_001B(c, 232u, depth + 1u); else { c.pc = 0x0018FB30u; return; } if (c.pc != 0x001578B4u) [[unlikely]] return; }
L_001578B4:
    c.f[2] = ld32((c.r[29].w[0] + 84u));
    c.f[3] = ld32((c.r[29].w[0] + 80u));
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; c.f[1] = ld32((c.r[29].w[0] + 88u));  if (t) { goto L_001578E8; } }
    c.f[0] = ld32((c.r[18].w[0] + 224u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[18].w[0] + 224u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 228u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[18].w[0] + 228u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 232u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 232u), c.f[0]);
    c.budget -= 9;
L_001578E8:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[3], 0u + 1u);  goto L_00157918; }
    c.f[0] = ld32((c.r[18].w[0] + 240u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[18].w[0] + 240u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 244u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[18].w[0] + 244u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 248u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 248u), c.f[0]);
    set32(c.r[3], 0u + 1u);
    c.budget -= 10;
L_00157918:
    st32((c.r[18].w[0] + 276u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 276u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_00157950:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 276u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001579F8; } }
    set32(c.r[4], c.r[16].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157974u); set32(c.r[5], c.r[16].w[0] + 224u);  if (depth < kMaxDepth) unit_001B(c, 127u, depth + 1u); else { c.pc = 0x0018E130u; return; } if (c.pc != 0x00157974u) [[unlikely]] return; }
L_00157974:
    set32(c.r[4], c.r[16].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157980u); set32(c.r[5], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_001B(c, 128u, depth + 1u); else { c.pc = 0x0018E140u; return; } if (c.pc != 0x00157980u) [[unlikely]] return; }
L_00157980:
    set32(c.r[4], c.r[16].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015798Cu); set32(c.r[5], c.r[16].w[0] + 256u);  if (depth < kMaxDepth) unit_001B(c, 129u, depth + 1u); else { c.pc = 0x0018E150u; return; } if (c.pc != 0x0015798Cu) [[unlikely]] return; }
L_0015798C:
    c.f[1] = ld32((c.r[16].w[0] + 272u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47800000u);
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40490000u);
    set32(c.r[4], c.r[16].w[0] + 64u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[6].d[0] = c.r[2].d[0] | 4059ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 32u), 0u);
    st32((c.r[29].w[0] + 36u), 0u);
    c.f[1] = c.f[1] ^ fp::kSign;
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = c.r[6].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001579E8u); st32((c.r[29].w[0] + 40u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 130u, depth + 1u); else { c.pc = 0x0018E160u; return; } if (c.pc != 0x001579E8u) [[unlikely]] return; }
L_001579E8:
    set32(c.r[4], c.r[16].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001579F4u); set32(c.r[5], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 115u, depth + 1u); else { c.pc = 0x0018DFB0u; return; } if (c.pc != 0x001579F4u) [[unlikely]] return; }
L_001579F4:
    st32((c.r[16].w[0] + 276u), 0u);
    c.budget -= 1;
L_001579F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00157A10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4D410000u);
    c.r[5].d[0] = c.r[2].d[0] | 17224ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[2].w[0] - 19968u));
    st32((c.r[4].w[0]), c.r[5].w[0]);
    set32(c.r[3], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[4].w[0] + 276u), c.r[3].w[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[0] = ld32((c.r[2].w[0] - 19964u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[4].w[0] + 224u), c.f[1]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[1] = ld32((c.r[2].w[0] - 19960u));
    st32((c.r[4].w[0] + 228u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] - 19956u));
    st32((c.r[4].w[0] + 232u), c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[1] = ld32((c.r[3].w[0] - 19952u));
    st32((c.r[4].w[0] + 236u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[0] = ld32((c.r[2].w[0] - 19948u));
    st32((c.r[4].w[0] + 240u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[1] = ld32((c.r[8].w[0] - 19944u));
    st32((c.r[4].w[0] + 244u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[0] = ld32((c.r[7].w[0] - 19940u));
    st32((c.r[4].w[0] + 248u), c.f[1]);
    c.f[1] = ld32((c.r[6].w[0] - 19936u));
    st32((c.r[4].w[0] + 252u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] - 19932u));
    st32((c.r[4].w[0] + 256u), c.f[1]);
    c.f[1] = ld32((c.r[3].w[0] - 19928u));
    st32((c.r[4].w[0] + 260u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] - 19924u));
    st32((c.r[4].w[0] + 264u), c.f[1]);
    st32((c.r[4].w[0] + 268u), c.f[0]);
    st32((c.r[4].w[0] + 272u), 0u);
    c.budget -= 48;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157AD0u); set32(c.r[4], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 103u, depth + 1u); else { c.pc = 0x0018DE90u; return; } if (c.pc != 0x00157AD0u) [[unlikely]] return; }
L_00157AD0:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xDFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00157B00:
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    c.r[2].d[0] = ld16((c.r[2].w[0] + 12u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] & 15ull;  c.pc = t; return; }
L_00157B10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00157B20:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[19], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[19].w[0] + 136u)));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157B70u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 175u, depth + 1u); else { c.pc = 0x001618F0u; return; } if (c.pc != 0x00157B70u) [[unlikely]] return; }
L_00157B70:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_000E(c, 15u, depth); } }
    set32(c.r[3], ld32((c.r[19].w[0] + 132u)));
    c.budget -= 1;
L_00157B7C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00157B98; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 148u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157B94u); set32(c.r[4], c.r[2].w[0] + 80u);  if (depth < kMaxDepth) unit_001A(c, 63u, depth + 1u); else { c.pc = 0x00188F50u; return; } if (c.pc != 0x00157B94u) [[unlikely]] return; }
L_00157B94:
    c.budget -= 1;
L_00157B98:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 88u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00157BB8; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.f[12] = ld32((c.r[2].w[0] + 120u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157BB8u); set32(c.r[4], c.r[3].w[0] + 80u);  if (depth < kMaxDepth) unit_001A(c, 275u, depth + 1u); else { c.pc = 0x0018B220u; return; } if (c.pc != 0x00157BB8u) [[unlikely]] return; }
L_00157BB8:
    set32(c.r[5], ld32((c.r[19].w[0] + 140u)));
    set32(c.r[6], ld32((c.r[19].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157BC8u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 187u, depth + 1u); else { c.pc = 0x001619F0u; return; } if (c.pc != 0x00157BC8u) [[unlikely]] return; }
L_00157BC8:
    c.f[12] = ld32((c.r[19].w[0] + 48u));
    c.f[13] = ld32((c.r[19].w[0] + 56u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157BD8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0019(c, 175u, depth + 1u); else { c.pc = 0x00186260u; return; } if (c.pc != 0x00157BD8u) [[unlikely]] return; }
L_00157BD8:
    c.f[12] = ld32((c.r[19].w[0] + 52u));
    c.f[13] = ld32((c.r[19].w[0] + 60u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157BE8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0019(c, 175u, depth + 1u); else { c.pc = 0x00186260u; return; } if (c.pc != 0x00157BE8u) [[unlikely]] return; }
L_00157BE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157BF0u); set32(c.r[4], ld32((c.r[19].w[0] + 144u)));  if (depth < kMaxDepth) unit_0019(c, 178u, depth + 1u); else { c.pc = 0x001862E0u; return; } if (c.pc != 0x00157BF0u) [[unlikely]] return; }
L_00157BF0:
    set32(c.r[2], ld32((c.r[19].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00157C78; } }
    set32(c.r[21], c.r[19].w[0] + 64u);
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
L_00157C08:
    set32(c.r[16], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00157C40; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157C20u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_000F(c, 300u, depth + 1u); else { c.pc = 0x0015FA40u; return; } if (c.pc != 0x00157C20u) [[unlikely]] return; }
L_00157C20:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157C3Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001A(c, 15u, depth + 1u); else { c.pc = 0x00188450u; return; } if (c.pc != 0x00157C3Cu) [[unlikely]] return; }
L_00157C3C:
    c.budget -= 1;
L_00157C40:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00157C08u | kUnwind; return; } goto L_00157C08; } }
    c.f[13] = ld32((c.r[21].w[0] + 36u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157C5Cu); c.f[12] = ld32((c.r[21].w[0] + 32u));  if (depth < kMaxDepth) unit_0019(c, 154u, depth + 1u); else { c.pc = 0x00185DA0u; return; } if (c.pc != 0x00157C5Cu) [[unlikely]] return; }
L_00157C5C:
    c.f[13] = ld32((c.r[21].w[0] + 52u));
    c.f[14] = ld32((c.r[21].w[0] + 56u));
    c.f[15] = ld32((c.r[21].w[0] + 60u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157C70u); c.f[12] = ld32((c.r[21].w[0] + 48u));  if (depth < kMaxDepth) unit_0019(c, 155u, depth + 1u); else { c.pc = 0x00185DC0u; return; } if (c.pc != 0x00157C70u) [[unlikely]] return; }
L_00157C70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157C78u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 156u, depth + 1u); else { c.pc = 0x00185DF0u; return; } if (c.pc != 0x00157C78u) [[unlikely]] return; }
L_00157C78:
    set32(c.r[5], ld32((c.r[19].w[0] + 168u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157C84u); set32(c.r[4], ld32((c.r[19].w[0] + 164u)));  if (depth < kMaxDepth) unit_0019(c, 159u, depth + 1u); else { c.pc = 0x00185E20u; return; } if (c.pc != 0x00157C84u) [[unlikely]] return; }
L_00157C84:
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00157CA8; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], 0u - 1u);
    st32((c.r[28].w[0] - 31380u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 31376u), c.r[2].w[0]);  if (t) { goto L_00157CB8; } }
    c.budget -= 1;
L_00157CA8:
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    st32((c.r[28].w[0] - 31380u), c.r[2].w[0]);
    st32((c.r[28].w[0] - 31376u), c.r[3].w[0]);
    c.budget -= 4;
L_00157CB8:
    set32(c.r[18], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 132u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00157D40; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 160u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00157CE8; } }
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157CE0u); set32(c.r[5], 0u + 119u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x00157CE0u) [[unlikely]] return; }
L_00157CE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_000E(c, 12u, depth); } }
L_00157CE8:
    set32(c.r[16], ld32((c.r[19].w[0] + 152u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00157D20; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[19].w[0] + 156u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157D08u); set32(c.r[5], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_0011(c, 227u, depth + 1u); else { c.pc = 0x00165DE0u; return; } if (c.pc != 0x00157D08u) [[unlikely]] return; }
L_00157D08:
    set32(c.r[4], c.r[18].w[0] + 64u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157D18u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001E(c, 247u, depth + 1u); else { c.pc = 0x0019B5C0u; return; } if (c.pc != 0x00157D18u) [[unlikely]] return; }
L_00157D18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_000E(c, 12u, depth); } }
L_00157D20:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157D30u); set32(c.r[5], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_0011(c, 227u, depth + 1u); else { c.pc = 0x00165DE0u; return; } if (c.pc != 0x00157D30u) [[unlikely]] return; }
L_00157D30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157D38u); set32(c.r[4], c.r[18].w[0] + 64u);  if (depth < kMaxDepth) unit_001E(c, 238u, depth + 1u); else { c.pc = 0x0019B3E0u; return; } if (c.pc != 0x00157D38u) [[unlikely]] return; }
L_00157D38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_000E(c, 12u, depth); } }
L_00157D40:
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00157EB8; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00157EB8; } }
    set32(c.r[16], ld32((c.r[19].w[0] + 160u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00157DA8; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 88u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[3].w[0] + 64u);  if (t) { goto L_00157D88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157D7Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 212u, depth + 1u); else { c.pc = 0x00165C00u; return; } if (c.pc != 0x00157D7Cu) [[unlikely]] return; }
L_00157D7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00157D90; } }
    c.budget -= 1;
L_00157D88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157D90u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 223u, depth + 1u); else { c.pc = 0x00165D70u; return; } if (c.pc != 0x00157D90u) [[unlikely]] return; }
L_00157D90:
    set32(c.r[4], c.r[18].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157D9Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 201u, depth + 1u); else { c.pc = 0x0018A5F0u; return; } if (c.pc != 0x00157D9Cu) [[unlikely]] return; }
L_00157D9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_000E(c, 12u, depth); } }
    c.budget -= 1;
L_00157DA8:
    set32(c.r[16], ld32((c.r[19].w[0] + 148u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00157E90; } }
    set32(c.r[17], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_00157E18; } }
    set32(c.r[16], ld32((c.r[19].w[0] + 152u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00157DF8; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[19].w[0] + 156u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157DE0u); set32(c.r[5], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_0011(c, 223u, depth + 1u); else { c.pc = 0x00165D70u; return; } if (c.pc != 0x00157DE0u) [[unlikely]] return; }
L_00157DE0:
    set32(c.r[4], c.r[18].w[0] + 80u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157DF0u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 190u, depth + 1u); else { c.pc = 0x0018A460u; return; } if (c.pc != 0x00157DF0u) [[unlikely]] return; }
L_00157DF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_000E(c, 12u, depth); } }
L_00157DF8:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157E08u); set32(c.r[5], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_0011(c, 223u, depth + 1u); else { c.pc = 0x00165D70u; return; } if (c.pc != 0x00157E08u) [[unlikely]] return; }
L_00157E08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157E10u); set32(c.r[4], c.r[18].w[0] + 80u);  if (depth < kMaxDepth) unit_001A(c, 168u, depth + 1u); else { c.pc = 0x0018A140u; return; } if (c.pc != 0x00157E10u) [[unlikely]] return; }
L_00157E10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_000E(c, 12u, depth); } }
L_00157E18:
    set32(c.r[16], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00157E50; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.f[20] = ld32((c.r[19].w[0] + 16u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157E38u); set32(c.r[5], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_0011(c, 223u, depth + 1u); else { c.pc = 0x00165D70u; return; } if (c.pc != 0x00157E38u) [[unlikely]] return; }
L_00157E38:
    set32(c.r[4], c.r[18].w[0] + 80u);
    set32(c.r[5], c.r[17].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157E48u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_001A(c, 179u, depth + 1u); else { c.pc = 0x0018A2B0u; return; } if (c.pc != 0x00157E48u) [[unlikely]] return; }
L_00157E48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_000E(c, 12u, depth); } }
L_00157E50:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.f[20] = ld32((c.r[19].w[0] + 44u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[21] = ld32((c.r[19].w[0] + 16u));
    c.f[22] = ld32((c.r[19].w[0] + 40u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157E6Cu); set32(c.r[5], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_0011(c, 223u, depth + 1u); else { c.pc = 0x00165D70u; return; } if (c.pc != 0x00157E6Cu) [[unlikely]] return; }
L_00157E6C:
    set32(c.r[4], c.r[18].w[0] + 80u);
    set32(c.r[5], c.r[16].w[0] + 64u);
    c.f[12] = c.f[22];
    set32(c.r[6], c.r[17].w[0] + 64u);
    c.f[13] = c.f[21];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157E88u); c.f[14] = c.f[20];  if (depth < kMaxDepth) unit_001A(c, 224u, depth + 1u); else { c.pc = 0x0018A950u; return; } if (c.pc != 0x00157E88u) [[unlikely]] return; }
L_00157E88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_000E(c, 12u, depth); } }
L_00157E90:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157EA0u); set32(c.r[5], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_0011(c, 223u, depth + 1u); else { c.pc = 0x00165D70u; return; } if (c.pc != 0x00157EA0u) [[unlikely]] return; }
L_00157EA0:
    set32(c.r[4], c.r[18].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157EACu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 240u, depth + 1u); else { c.pc = 0x0018ABB0u; return; } if (c.pc != 0x00157EACu) [[unlikely]] return; }
L_00157EAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_000E(c, 12u, depth); } }
    c.budget -= 1;
L_00157EB8:
    set32(c.r[18], ld32((c.r[19].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00157FE0; } }
    set32(c.r[17], ld32((c.r[19].w[0] + 148u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_00157FA8; } }
    set32(c.r[17], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_00157F10; } }
    set32(c.r[16], ld32((c.r[19].w[0] + 4u)));
    c.f[20] = ld32((c.r[19].w[0] + 32u));
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157EF4u); set32(c.r[5], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_0011(c, 223u, depth + 1u); else { c.pc = 0x00165D70u; return; } if (c.pc != 0x00157EF4u) [[unlikely]] return; }
L_00157EF4:
    set32(c.r[4], c.r[16].w[0] + 80u);
    set32(c.r[5], c.r[18].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157F04u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_001D(c, 373u, depth + 1u); else { c.pc = 0x00197A50u; return; } if (c.pc != 0x00157F04u) [[unlikely]] return; }
L_00157F04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_000E(c, 12u, depth); } }
    c.budget -= 1;
L_00157F10:
    set32(c.r[16], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00157F58; } }
    set32(c.r[16], ld32((c.r[19].w[0] + 4u)));
    c.f[20] = ld32((c.r[19].w[0] + 32u));
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.f[21] = ld32((c.r[19].w[0] + 16u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157F38u); set32(c.r[5], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_0011(c, 223u, depth + 1u); else { c.pc = 0x00165D70u; return; } if (c.pc != 0x00157F38u) [[unlikely]] return; }
L_00157F38:
    set32(c.r[4], c.r[16].w[0] + 80u);
    set32(c.r[5], c.r[17].w[0] + 64u);
    c.f[12] = c.f[21];
    set32(c.r[6], c.r[18].w[0] + 64u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157F50u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_001D(c, 376u, depth + 1u); else { c.pc = 0x00197AB0u; return; } if (c.pc != 0x00157F50u) [[unlikely]] return; }
L_00157F50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_000E(c, 12u, depth); } }
L_00157F58:
    set32(c.r[21], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.f[20] = ld32((c.r[19].w[0] + 32u));
    c.f[21] = ld32((c.r[19].w[0] + 44u));
    c.f[22] = ld32((c.r[19].w[0] + 16u));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.f[23] = ld32((c.r[19].w[0] + 40u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157F7Cu); set32(c.r[5], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_0011(c, 223u, depth + 1u); else { c.pc = 0x00165D70u; return; } if (c.pc != 0x00157F7Cu) [[unlikely]] return; }
L_00157F7C:
    set32(c.r[4], c.r[21].w[0] + 80u);
    set32(c.r[5], c.r[16].w[0] + 64u);
    c.f[12] = c.f[23];
    set32(c.r[6], c.r[17].w[0] + 64u);
    c.f[13] = c.f[22];
    set32(c.r[7], c.r[18].w[0] + 64u);
    c.f[14] = c.f[21];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157FA0u); c.f[15] = c.f[20];  if (depth < kMaxDepth) unit_001D(c, 380u, depth + 1u); else { c.pc = 0x00197B30u; return; } if (c.pc != 0x00157FA0u) [[unlikely]] return; }
L_00157FA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_000E(c, 12u, depth); } }
L_00157FA8:
    set32(c.r[16], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.f[20] = ld32((c.r[19].w[0] + 32u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157FC0u); set32(c.r[5], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_0011(c, 223u, depth + 1u); else { c.pc = 0x00165D70u; return; } if (c.pc != 0x00157FC0u) [[unlikely]] return; }
L_00157FC0:
    set32(c.r[4], c.r[16].w[0] + 80u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[18].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157FD4u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_001D(c, 383u, depth + 1u); else { c.pc = 0x00197BE0u; return; } if (c.pc != 0x00157FD4u) [[unlikely]] return; }
L_00157FD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_000E(c, 12u, depth); } }
    c.budget -= 1;
L_00157FE0:
    set32(c.r[18], ld32((c.r[19].w[0] + 148u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_000E(c, 10u, depth); } }
    set32(c.r[18], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_000E(c, 4u, depth); } }
    set32(c.r[16], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 2;
    [[clang::musttail]] return unit_000E(c, 1u, depth);
}

}
