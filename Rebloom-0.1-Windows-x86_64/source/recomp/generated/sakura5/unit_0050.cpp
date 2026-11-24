#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0050[4096] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 3, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0,
    0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0,
    12, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 17,
    0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 21, 0, 0, 0, 22, 0, 0, 23, 0, 0, 24, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0,
    0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0,
    0, 0, 0, 0, 45, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 55, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0,
    0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0,
    0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 80, 0, 0, 0, 0, 0,
    0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84,
    0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0,
    89, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    93, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 95, 0, 96, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0,
    100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 103, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 106, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 110, 0, 111, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 113, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0,
    0, 0, 0, 119, 0, 120, 0, 0, 121, 0, 122, 0, 0, 0, 0, 0, 123, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0,
    0, 126, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 134,
    0, 0, 0, 0, 135, 0, 0, 136, 0, 0, 0, 0, 137, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    139, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 0, 145, 0,
    0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 150,
    0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0,
    0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 161, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 167, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0,
    0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 181, 0, 0, 0, 0,
    0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 186, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 188, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 192, 0, 0, 193, 0, 0, 0, 0, 194, 0, 195, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    198, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 204, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 211, 0,
    0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 216, 0,
    0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 223,
    0, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231,
    0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0,
    0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0,
    0, 241, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 244, 0, 0, 0, 0, 0, 245, 0, 246, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 247, 248, 249, 0, 250, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 252, 0, 0, 0, 0, 253, 0, 0, 254, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 258, 0, 0, 0,
    0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0,
    263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 265, 0, 266, 0, 0, 267, 0, 0,
    0, 268, 0, 269, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0,
    0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0, 279, 0, 0, 0, 0, 280, 0, 281, 0, 0, 282, 0, 0, 0, 0, 0,
    283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 285, 0, 0, 0,
    0, 0, 0, 0, 0, 286, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 289, 0,
    0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 294, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 0, 0,
    0, 0, 298, 0, 0, 0, 0, 0, 0, 299, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0,
    0, 0, 0, 0, 307, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    319, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0,
    325, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    328, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 347, 0, 0, 0,
    0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 350, 0, 0, 0, 351, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 353, 0, 0, 354, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0,
    0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 369, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 376, 0, 377, 0, 0, 378, 0,
    0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 381, 0, 0, 0, 382,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0050(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00260000;
    case 2u: goto L_00260018;
    case 3u: goto L_0026002C;
    case 4u: goto L_00260030;
    case 5u: goto L_00260048;
    case 6u: goto L_00260068;
    case 7u: goto L_00260078;
    case 8u: goto L_0026009C;
    case 9u: goto L_002600B4;
    case 10u: goto L_002600C8;
    case 11u: goto L_002600E0;
    case 12u: goto L_00260100;
    case 13u: goto L_00260110;
    case 14u: goto L_00260134;
    case 15u: goto L_0026014C;
    case 16u: goto L_00260160;
    case 17u: goto L_0026017C;
    case 18u: goto L_0026018C;
    case 19u: goto L_002601AC;
    case 20u: goto L_002601C0;
    case 21u: goto L_00260208;
    case 22u: goto L_00260218;
    case 23u: goto L_00260224;
    case 24u: goto L_00260230;
    case 25u: goto L_0026023C;
    case 26u: goto L_0026024C;
    case 27u: goto L_00260268;
    case 28u: goto L_00260278;
    case 29u: goto L_002602AC;
    case 30u: goto L_002602B8;
    case 31u: goto L_002602DC;
    case 32u: goto L_00260310;
    case 33u: goto L_00260320;
    case 34u: goto L_00260354;
    case 35u: goto L_00260378;
    case 36u: goto L_002603B0;
    case 37u: goto L_002603E0;
    case 38u: goto L_002603F8;
    case 39u: goto L_00260410;
    case 40u: goto L_0026042C;
    case 41u: goto L_0026043C;
    case 42u: goto L_00260444;
    case 43u: goto L_00260454;
    case 44u: goto L_0026046C;
    case 45u: goto L_00260490;
    case 46u: goto L_002604A4;
    case 47u: goto L_002604C0;
    case 48u: goto L_00260538;
    case 49u: goto L_00260590;
    case 50u: goto L_002605BC;
    case 51u: goto L_00260630;
    case 52u: goto L_002606A4;
    case 53u: goto L_002606D0;
    case 54u: goto L_0026072C;
    case 55u: goto L_00260738;
    case 56u: goto L_00260740;
    case 57u: goto L_00260774;
    case 58u: goto L_002607B4;
    case 59u: goto L_002607E4;
    case 60u: goto L_0026086C;
    case 61u: goto L_002608A0;
    case 62u: goto L_002608AC;
    case 63u: goto L_002608D0;
    case 64u: goto L_0026091C;
    case 65u: goto L_00260938;
    case 66u: goto L_00260970;
    case 67u: goto L_0026098C;
    case 68u: goto L_002609BC;
    case 69u: goto L_002609EC;
    case 70u: goto L_00260A30;
    case 71u: goto L_00260A60;
    case 72u: goto L_00260B80;
    case 73u: goto L_00260BC0;
    case 74u: goto L_00260BD0;
    case 75u: goto L_00260BF0;
    case 76u: goto L_00260C10;
    case 77u: goto L_00260C34;
    case 78u: goto L_00260C48;
    case 79u: goto L_00260C5C;
    case 80u: goto L_00260C68;
    case 81u: goto L_00260C88;
    case 82u: goto L_00260C9C;
    case 83u: goto L_00260CD0;
    case 84u: goto L_00260CFC;
    case 85u: goto L_00260D08;
    case 86u: goto L_00260D20;
    case 87u: goto L_00260D40;
    case 88u: goto L_00260D60;
    case 89u: goto L_00260D80;
    case 90u: goto L_00260D8C;
    case 91u: goto L_00260DB0;
    case 92u: goto L_00260DD0;
    case 93u: goto L_00260E00;
    case 94u: goto L_00260E24;
    case 95u: goto L_00260E34;
    case 96u: goto L_00260E3C;
    case 97u: goto L_00260E44;
    case 98u: goto L_00260E54;
    case 99u: goto L_00260E74;
    case 100u: goto L_00260E80;
    case 101u: goto L_00260F08;
    case 102u: goto L_00260F20;
    case 103u: goto L_00260F28;
    case 104u: goto L_00260F48;
    case 105u: goto L_00260F5C;
    case 106u: goto L_00260F90;
    case 107u: goto L_00260F98;
    case 108u: goto L_00260FC0;
    case 109u: goto L_00260FE4;
    case 110u: goto L_00260FF0;
    case 111u: goto L_00260FF8;
    case 112u: goto L_00261040;
    case 113u: goto L_00261084;
    case 114u: goto L_00261090;
    case 115u: goto L_002610AC;
    case 116u: goto L_002610F0;
    case 117u: goto L_0026112C;
    case 118u: goto L_00261170;
    case 119u: goto L_0026118C;
    case 120u: goto L_00261194;
    case 121u: goto L_002611A0;
    case 122u: goto L_002611A8;
    case 123u: goto L_002611C0;
    case 124u: goto L_002611C8;
    case 125u: goto L_002611E0;
    case 126u: goto L_00261204;
    case 127u: goto L_00261210;
    case 128u: goto L_00261220;
    case 129u: goto L_00261230;
    case 130u: goto L_00261244;
    case 131u: goto L_0026124C;
    case 132u: goto L_0026125C;
    case 133u: goto L_00261270;
    case 134u: goto L_0026127C;
    case 135u: goto L_00261290;
    case 136u: goto L_0026129C;
    case 137u: goto L_002612B0;
    case 138u: goto L_002612B8;
    case 139u: goto L_00261300;
    case 140u: goto L_0026130C;
    case 141u: goto L_00261324;
    case 142u: goto L_00261334;
    case 143u: goto L_00261354;
    case 144u: goto L_00261368;
    case 145u: goto L_00261378;
    case 146u: goto L_00261398;
    case 147u: goto L_002613B8;
    case 148u: goto L_002613D0;
    case 149u: goto L_002613E4;
    case 150u: goto L_002613FC;
    case 151u: goto L_00261408;
    case 152u: goto L_0026141C;
    case 153u: goto L_0026142C;
    case 154u: goto L_00261440;
    case 155u: goto L_00261458;
    case 156u: goto L_00261470;
    case 157u: goto L_0026148C;
    case 158u: goto L_002614A4;
    case 159u: goto L_002614C0;
    case 160u: goto L_002614D8;
    case 161u: goto L_002614F4;
    case 162u: goto L_00261550;
    case 163u: goto L_002615B8;
    case 164u: goto L_002615C8;
    case 165u: goto L_002615D8;
    case 166u: goto L_002615E8;
    case 167u: goto L_002615F8;
    case 168u: goto L_00261640;
    case 169u: goto L_00261680;
    case 170u: goto L_002616C0;
    case 171u: goto L_002616D0;
    case 172u: goto L_002616DC;
    case 173u: goto L_002616EC;
    case 174u: goto L_00261708;
    case 175u: goto L_00261794;
    case 176u: goto L_002617B8;
    case 177u: goto L_002617D0;
    case 178u: goto L_00261814;
    case 179u: goto L_0026183C;
    case 180u: goto L_00261868;
    case 181u: goto L_0026186C;
    case 182u: goto L_00261890;
    case 183u: goto L_002618EC;
    case 184u: goto L_0026192C;
    case 185u: goto L_0026193C;
    case 186u: goto L_00261944;
    case 187u: goto L_0026194C;
    case 188u: goto L_0026198C;
    case 189u: goto L_00261994;
    case 190u: goto L_002619BC;
    case 191u: goto L_002619E0;
    case 192u: goto L_00261A10;
    case 193u: goto L_00261A1C;
    case 194u: goto L_00261A30;
    case 195u: goto L_00261A38;
    case 196u: goto L_00261A40;
    case 197u: goto L_00261A88;
    case 198u: goto L_00261B00;
    case 199u: goto L_00261B14;
    case 200u: goto L_00261B24;
    case 201u: goto L_00261B6C;
    case 202u: goto L_00261BB0;
    case 203u: goto L_00261BE0;
    case 204u: goto L_00261BE8;
    case 205u: goto L_00261C48;
    case 206u: goto L_00261C54;
    case 207u: goto L_00261C6C;
    case 208u: goto L_00261C98;
    case 209u: goto L_00261DA0;
    case 210u: goto L_00261DE0;
    case 211u: goto L_00261DF8;
    case 212u: goto L_00261E0C;
    case 213u: goto L_00261E20;
    case 214u: goto L_00261E40;
    case 215u: goto L_00261E6C;
    case 216u: goto L_00261E78;
    case 217u: goto L_00261E90;
    case 218u: goto L_00261EB0;
    case 219u: goto L_00261EF0;
    case 220u: goto L_00261F1C;
    case 221u: goto L_00261F3C;
    case 222u: goto L_00261F5C;
    case 223u: goto L_00261F7C;
    case 224u: goto L_00261F94;
    case 225u: goto L_00261FA4;
    case 226u: goto L_00261FB8;
    case 227u: goto L_00261FE0;
    case 228u: goto L_00262030;
    case 229u: goto L_0026203C;
    case 230u: goto L_00262114;
    case 231u: goto L_0026217C;
    case 232u: goto L_0026218C;
    case 233u: goto L_002621B0;
    case 234u: goto L_00262208;
    case 235u: goto L_00262370;
    case 236u: goto L_002623A0;
    case 237u: goto L_002623C0;
    case 238u: goto L_002623EC;
    case 239u: goto L_00262404;
    case 240u: goto L_00262460;
    case 241u: goto L_00262484;
    case 242u: goto L_0026248C;
    case 243u: goto L_002624C4;
    case 244u: goto L_002624CC;
    case 245u: goto L_002624E4;
    case 246u: goto L_002624EC;
    case 247u: goto L_00262514;
    case 248u: goto L_00262518;
    case 249u: goto L_0026251C;
    case 250u: goto L_00262524;
    case 251u: goto L_0026252C;
    case 252u: goto L_00262584;
    case 253u: goto L_00262598;
    case 254u: goto L_002625A4;
    case 255u: goto L_002625C0;
    case 256u: goto L_002628C0;
    case 257u: goto L_002628E4;
    case 258u: goto L_002628F0;
    case 259u: goto L_00262904;
    case 260u: goto L_002629A0;
    case 261u: goto L_002629D0;
    case 262u: goto L_002629E0;
    case 263u: goto L_00262A00;
    case 264u: goto L_00262A50;
    case 265u: goto L_00262A60;
    case 266u: goto L_00262A68;
    case 267u: goto L_00262A74;
    case 268u: goto L_00262A84;
    case 269u: goto L_00262A8C;
    case 270u: goto L_00262A94;
    case 271u: goto L_00262AC4;
    case 272u: goto L_00262B20;
    case 273u: goto L_00262B70;
    case 274u: goto L_00262B8C;
    case 275u: goto L_00262B9C;
    case 276u: goto L_00262BBC;
    case 277u: goto L_00262C20;
    case 278u: goto L_00262C30;
    case 279u: goto L_00262C40;
    case 280u: goto L_00262C54;
    case 281u: goto L_00262C5C;
    case 282u: goto L_00262C68;
    case 283u: goto L_00262C80;
    case 284u: goto L_00262CDC;
    case 285u: goto L_00262CF0;
    case 286u: goto L_00262D14;
    case 287u: goto L_00262D20;
    case 288u: goto L_00262D6C;
    case 289u: goto L_00262D78;
    case 290u: goto L_00262D90;
    case 291u: goto L_00262DC8;
    case 292u: goto L_00262EC8;
    case 293u: goto L_00262F10;
    case 294u: goto L_00262F2C;
    case 295u: goto L_00262F34;
    case 296u: goto L_00262F5C;
    case 297u: goto L_00262F6C;
    case 298u: goto L_00262F88;
    case 299u: goto L_00262FA4;
    case 300u: goto L_00262FAC;
    case 301u: goto L_00262FF4;
    case 302u: goto L_00263040;
    case 303u: goto L_00263054;
    case 304u: goto L_002630A0;
    case 305u: goto L_002630D4;
    case 306u: goto L_002630EC;
    case 307u: goto L_00263110;
    case 308u: goto L_00263114;
    case 309u: goto L_00263170;
    case 310u: goto L_002631A0;
    case 311u: goto L_002631B8;
    case 312u: goto L_002631C4;
    case 313u: goto L_00263264;
    case 314u: goto L_002632C4;
    case 315u: goto L_002632D4;
    case 316u: goto L_002632FC;
    case 317u: goto L_00263334;
    case 318u: goto L_00263350;
    case 319u: goto L_00263380;
    case 320u: goto L_00263388;
    case 321u: goto L_002633B8;
    case 322u: goto L_002633FC;
    case 323u: goto L_00263424;
    case 324u: goto L_00263460;
    case 325u: goto L_00263480;
    case 326u: goto L_00263488;
    case 327u: goto L_002634D8;
    case 328u: goto L_00263500;
    case 329u: goto L_00263514;
    case 330u: goto L_00263540;
    case 331u: goto L_0026356C;
    case 332u: goto L_002635C0;
    case 333u: goto L_002635E0;
    case 334u: goto L_00263618;
    case 335u: goto L_00263650;
    case 336u: goto L_00263688;
    case 337u: goto L_002636AC;
    case 338u: goto L_002636D4;
    case 339u: goto L_002637E0;
    case 340u: goto L_00263898;
    case 341u: goto L_002638D8;
    case 342u: goto L_00263924;
    case 343u: goto L_00263940;
    case 344u: goto L_00263960;
    case 345u: goto L_002639B4;
    case 346u: goto L_002639EC;
    case 347u: goto L_002639F0;
    case 348u: goto L_00263A10;
    case 349u: goto L_00263A28;
    case 350u: goto L_00263A3C;
    case 351u: goto L_00263A4C;
    case 352u: goto L_00263A60;
    case 353u: goto L_00263A8C;
    case 354u: goto L_00263A98;
    case 355u: goto L_00263AB0;
    case 356u: goto L_00263AD0;
    case 357u: goto L_00263AF0;
    case 358u: goto L_00263B1C;
    case 359u: goto L_00263B44;
    case 360u: goto L_00263B64;
    case 361u: goto L_00263B90;
    case 362u: goto L_00263BC0;
    case 363u: goto L_00263BF4;
    case 364u: goto L_00263C10;
    case 365u: goto L_00263C3C;
    case 366u: goto L_00263C58;
    case 367u: goto L_00263C88;
    case 368u: goto L_00263CB0;
    case 369u: goto L_00263CD0;
    case 370u: goto L_00263CD8;
    case 371u: goto L_00263D20;
    case 372u: goto L_00263D54;
    case 373u: goto L_00263D7C;
    case 374u: goto L_00263DB4;
    case 375u: goto L_00263DD0;
    case 376u: goto L_00263DE4;
    case 377u: goto L_00263DEC;
    case 378u: goto L_00263DF8;
    case 379u: goto L_00263E10;
    case 380u: goto L_00263E60;
    case 381u: goto L_00263E6C;
    case 382u: goto L_00263E7C;
    case 383u: goto L_00263EA4;
    case 384u: goto L_00263EBC;
    case 385u: goto L_00263ED0;
    case 386u: goto L_00263EEC;
    case 387u: goto L_00263FBC;
    default: bad_entry(c, 0x00260000u); return;
    }
L_00260000:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  goto L_0026001C; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260018u); set32(c.r[6], 0u + 10u);  if (depth < kMaxDepth) unit_0033(c, 344u, depth + 1u); else { c.pc = 0x001EEF40u; return; } if (c.pc != 0x00260018u) [[unlikely]] return; }
L_00260018:
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 1;
L_0026001C:
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 64u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x48530000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260030u); c.r[5].d[0] = c.r[2].d[0] | 20562ull;  if (depth < kMaxDepth) unit_0038(c, 282u, depth + 1u); else { c.pc = 0x00202D40u; return; } if (c.pc != 0x00260030u) [[unlikely]] return; }
    goto L_00260030;
L_0026002C:
    c.r[5].d[0] = c.r[2].d[0] | 20562ull;
    c.budget -= 1;
L_00260030:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 64u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x48540000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260048u); c.r[5].d[0] = c.r[2].d[0] | 17752ull;  if (depth < kMaxDepth) unit_0038(c, 282u, depth + 1u); else { c.pc = 0x00202D40u; return; } if (c.pc != 0x00260048u) [[unlikely]] return; }
L_00260048:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00260058; } }
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[4], 0u + 60u);  goto L_00260070; }
L_00260058:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260068u); set32(c.r[5], c.r[5].w[0] - 8512u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x00260068u) [[unlikely]] return; }
L_00260068:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025FFB8u | kUnwind; return; } [[clang::musttail]] return unit_004F(c, 418u, depth); } }
L_00260070:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260078u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00260078u) [[unlikely]] return; }
L_00260078:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[6].d[0] = c.r[2].d[0] + 0ull;  goto L_002600A0; }
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026009Cu); set32(c.r[8], c.r[8].w[0] - 8500u);  if (depth < kMaxDepth) unit_0034(c, 57u, depth + 1u); else { c.pc = 0x001F08A0u; return; } if (c.pc != 0x0026009Cu) [[unlikely]] return; }
L_0026009C:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002600A0:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002600B4u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0033(c, 397u, depth + 1u); else { c.pc = 0x001EF710u; return; } if (c.pc != 0x002600B4u) [[unlikely]] return; }
L_002600B4:
    set32(c.r[4], ld32((c.r[17].w[0] + 64u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41420000u);
    c.r[5].d[0] = c.r[2].d[0] | 17473ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002600C8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0038(c, 282u, depth + 1u); else { c.pc = 0x00202D40u; return; } if (c.pc != 0x002600C8u) [[unlikely]] return; }
L_002600C8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 64u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41420000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002600E0u); c.r[5].d[0] = c.r[2].d[0] | 21075ull;  if (depth < kMaxDepth) unit_0038(c, 282u, depth + 1u); else { c.pc = 0x00202D40u; return; } if (c.pc != 0x002600E0u) [[unlikely]] return; }
L_002600E0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002600F0; } }
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[4], 0u + 60u);  goto L_00260108; }
L_002600F0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260100u); set32(c.r[5], c.r[5].w[0] - 8512u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x00260100u) [[unlikely]] return; }
L_00260100:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025FFB4u | kUnwind; return; } [[clang::musttail]] return unit_004F(c, 417u, depth); } }
L_00260108:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260110u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00260110u) [[unlikely]] return; }
L_00260110:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[6].d[0] = c.r[2].d[0] + 0ull;  goto L_00260138; }
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260134u); set32(c.r[8], c.r[8].w[0] - 8500u);  if (depth < kMaxDepth) unit_0034(c, 7u, depth + 1u); else { c.pc = 0x001F00E0u; return; } if (c.pc != 0x00260134u) [[unlikely]] return; }
L_00260134:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00260138:
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026014Cu); c.r[7].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 397u, depth + 1u); else { c.pc = 0x001EF710u; return; } if (c.pc != 0x0026014Cu) [[unlikely]] return; }
L_0026014C:
    set32(c.r[4], ld32((c.r[17].w[0] + 64u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x434D0000u);
    c.r[5].d[0] = c.r[2].d[0] | 16967ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260160u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0038(c, 282u, depth + 1u); else { c.pc = 0x00202D40u; return; } if (c.pc != 0x00260160u) [[unlikely]] return; }
L_00260160:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[4], 0u + 88u);  goto L_00260184; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026017Cu); set32(c.r[5], c.r[5].w[0] - 8512u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x0026017Cu) [[unlikely]] return; }
L_0026017C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025FFB4u | kUnwind; return; } [[clang::musttail]] return unit_004F(c, 417u, depth); } }
L_00260184:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026018Cu);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0026018Cu) [[unlikely]] return; }
L_0026018C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 60u), c.r[4].w[0]);  goto L_002601B4; }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002601ACu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 139u, depth + 1u); else { c.pc = 0x00205870u; return; } if (c.pc != 0x002601ACu) [[unlikely]] return; }
L_002601AC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[17].w[0] + 60u), c.r[4].w[0]);
    c.budget -= 2;
L_002601B4:
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 72u), c.r[3].w[0]);
    c.budget -= 3;
L_002601C0:
    set32(c.r[4], ld32((c.r[17].w[0] + 60u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_002604A8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002601F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00260210; } }
L_002601F8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260208u); set32(c.r[5], c.r[5].w[0] - 8499u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x00260208u) [[unlikely]] return; }
L_00260208:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025FFB4u | kUnwind; return; } [[clang::musttail]] return unit_004F(c, 417u, depth); } }
L_00260210:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260218u);  if (depth < kMaxDepth) unit_0039(c, 167u, depth + 1u); else { c.pc = 0x00205DC0u; return; } if (c.pc != 0x00260218u) [[unlikely]] return; }
L_00260218:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260224u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 340u, depth + 1u); else { c.pc = 0x001B2710u; return; } if (c.pc != 0x00260224u) [[unlikely]] return; }
L_00260224:
    st32((c.r[17].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260230u); set32(c.r[4], ld32((c.r[17].w[0] + 60u)));  if (depth < kMaxDepth) unit_0039(c, 166u, depth + 1u); else { c.pc = 0x00205D90u; return; } if (c.pc != 0x00260230u) [[unlikely]] return; }
L_00260230:
    set32(c.r[4], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026023Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 167u, depth + 1u); else { c.pc = 0x00205DC0u; return; } if (c.pc != 0x0026023Cu) [[unlikely]] return; }
L_0026023C:
    set32(c.r[4], ld32((c.r[17].w[0] + 68u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026024Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x0026024Cu) [[unlikely]] return; }
L_0026024C:
    set32(c.r[4], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 72u)));  goto L_00260270; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00260268u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00260268u) [[unlikely]] return; }
L_00260268:
    st32((c.r[17].w[0] + 60u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 2;
L_00260270:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 72u), c.r[3].w[0]);
    c.budget -= 2;
L_00260278:
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002604A4; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[7], 0u + 3u);
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], c.r[6].w[0] + 15360u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002602ACu); c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 359u, depth + 1u); else { c.pc = 0x001EF0E0u; return; } if (c.pc != 0x002602ACu) [[unlikely]] return; }
L_002602AC:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[18], 0u + 3u);
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 3;
L_002602B8:
    c.r[7].d[0] = c.r[18].d[0] << 32;
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[4], c.r[29].w[0] + 92u);
    set32(c.r[6], 0u + 3u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002602DCu); c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x002602DCu) [[unlikely]] return; }
L_002602DC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 52u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002602B8u | kUnwind; return; } goto L_002602B8; }
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00260000u);
    set32(c.r[7], c.r[7].w[0] + 2656u);
    set32(c.r[4], c.r[29].w[0] + 84u);
    set32(c.r[6], 0u + 256u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260310u); c.r[8].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001EED20u; return; } if (c.pc != 0x00260310u) [[unlikely]] return; }
L_00260310:
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260320u); set32(c.r[4], ld32((c.r[2].w[0] + 36u)));  if (depth < kMaxDepth) unit_0033(c, 322u, depth + 1u); else { c.pc = 0x001EEC10u; return; } if (c.pc != 0x00260320u) [[unlikely]] return; }
L_00260320:
    set32(c.r[4], 0u + 319u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[2].w[0] + 208u), c.f[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 292u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[2].w[0] + 292u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260354u); set32(c.r[4], ld32((c.r[2].w[0] + 36u)));  if (depth < kMaxDepth) unit_0033(c, 322u, depth + 1u); else { c.pc = 0x001EEC10u; return; } if (c.pc != 0x00260354u) [[unlikely]] return; }
L_00260354:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43610000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[2].w[0] + 212u), c.r[4].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 292u)));
    c.r[18].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 292u), c.r[3].w[0]);  if (t) { goto L_002603B4; } }
L_00260378:
    c.r[7].d[0] = c.r[18].d[0] << 32;
    set32(c.r[3], c.r[16].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - 8640u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 72u);
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[6], 0u + 257u);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002603B0u); c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x002603B0u) [[unlikely]] return; }
L_002603B0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002603B4:
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00260378u | kUnwind; return; } goto L_00260378; }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] << 33;
    c.r[3].d[0] = c.r[3].d[0] >> 33;
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 72u), c.r[3].w[0]);  if (t) { goto L_002604A4; } }
L_002603E0:
    set32(c.r[5], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_002604A4; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002603F8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0038(c, 100u, depth + 1u); else { c.pc = 0x00200D90u; return; } if (c.pc != 0x002603F8u) [[unlikely]] return; }
L_002603F8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00260414; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260410u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x00260410u) [[unlikely]] return; }
L_00260410:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00260414:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[4], 0u + 72u);  goto L_00260434; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026042Cu); set32(c.r[5], c.r[5].w[0] - 8512u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x0026042Cu) [[unlikely]] return; }
L_0026042C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025FFB4u | kUnwind; return; } [[clang::musttail]] return unit_004F(c, 417u, depth); } }
L_00260434:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026043Cu);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0026043Cu) [[unlikely]] return; }
L_0026043C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 56u), c.r[4].w[0]);  goto L_0026045C; }
    goto L_00260448;
L_00260444:
    st32((c.r[17].w[0] + 56u), c.r[4].w[0]);
    c.budget -= 1;
L_00260448:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260454u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 118u, depth + 1u); else { c.pc = 0x002113E0u; return; } if (c.pc != 0x00260454u) [[unlikely]] return; }
L_00260454:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[17].w[0] + 56u), c.r[4].w[0]);
    c.budget -= 2;
L_0026045C:
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 72u), c.r[3].w[0]);  if (t) { goto L_002604A4; } }
L_0026046C:
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002604A4; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260490u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 343u, depth + 1u); else { c.pc = 0x001B2760u; return; } if (c.pc != 0x00260490u) [[unlikely]] return; }
L_00260490:
    st32((c.r[17].w[0] + 68u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 5;
L_002604A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002604A8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002604C0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & 32768ull;
    c.budget -= 11;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_002606B8; }
    c.r[3].d[0] = c.r[4].d[0] & 4096ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_002606A8; }
    c.r[2].d[0] = c.r[4].d[0] & 128ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);  goto L_00260560; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[2] = c.r[2].w[0];
    set32(c.r[2], 0u + 319u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    c.f[1] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    c.f[0] = 0u;
    set32(c.r[4], ld32((c.r[2].w[0] + 36u)));
    c.f[3] = ld32((c.r[18].w[0] + 80u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260538u); c.f[20] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[3]);  if (depth < kMaxDepth) unit_0033(c, 322u, depth + 1u); else { c.pc = 0x001EEC10u; return; } if (c.pc != 0x00260538u) [[unlikely]] return; }
L_00260538:
    st32((c.r[2].w[0] + 208u), c.f[20]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 292u)));
    set32(c.r[3], 0u - 129u);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[2].w[0] + 292u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_002605B0; } }
L_00260560:
    c.f[2] = c.r[2].w[0];
    set32(c.r[2], 0u + 319u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    c.f[1] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    c.f[0] = 0u;
    set32(c.r[4], ld32((c.r[2].w[0] + 36u)));
    c.f[3] = ld32((c.r[18].w[0] + 80u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260590u); c.f[20] = fp::ee::msub(c.fcr31, c.facc, c.f[2], c.f[3]);  if (depth < kMaxDepth) unit_0033(c, 322u, depth + 1u); else { c.pc = 0x001EEC10u; return; } if (c.pc != 0x00260590u) [[unlikely]] return; }
L_00260590:
    st32((c.r[2].w[0] + 208u), c.f[20]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 292u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[2].w[0] + 292u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 8;
L_002605B0:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002606A8; } }
L_002605BC:
    set32(c.r[4], c.r[17].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - 8640u);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 8192ull;
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 4u)));  goto L_00260634; }
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 100u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00260630; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 124u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[5].w[0] + 124u);  if (t) { goto L_00260630; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[6], 0u + 2u);
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[4], c.r[29].w[0] + 108u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[7], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260630u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001EED20u; return; } if (c.pc != 0x00260630u) [[unlikely]] return; }
L_00260630:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_00260634:
    c.r[3].d[0] = c.r[3].d[0] & 8192ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0])));  goto L_0026065C; }
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 100u)));
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_002606A8; }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_0026065C:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[3].w[0] + 124u);
    set32(c.r[3], ld32((c.r[3].w[0] + 124u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002606A4; } }
    st32((c.r[4].w[0]), 0u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[5].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002606A4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001EED20u; return; } if (c.pc != 0x002606A4u) [[unlikely]] return; }
L_002606A4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002606A8:
    c.r[3].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002605BCu | kUnwind; return; } goto L_002605BC; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_002606B8:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002606D0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 12;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_002608B0; }
    c.r[3].d[0] = c.r[4].d[0] & 32768ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[7], 0u + 1u);  goto L_00260718; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002608AC; } }
    set32(c.r[7], 0u + 1u);
    c.budget -= 1;
L_00260718:
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026072Cu); c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 356u, depth + 1u); else { c.pc = 0x00207D10u; return; } if (c.pc != 0x0026072Cu) [[unlikely]] return; }
L_0026072C:
    set32(c.r[16], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260738u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 149u, depth + 1u); else { c.pc = 0x001615A0u; return; } if (c.pc != 0x00260738u) [[unlikely]] return; }
L_00260738:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260740u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x00260740u) [[unlikely]] return; }
L_00260740:
    c.f[1] = ld32((c.r[17].w[0] + 88u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[0] = ld32((c.r[17].w[0] + 84u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[2] = c.r[2].w[0];
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[3] = ld32((c.r[17].w[0] + 76u));
    c.f[20] = fp::ee::mul(c.fcr31, c.f[1], c.f[3]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260774u); c.f[21] = fp::ee::mul(c.fcr31, c.f[0], c.f[3]);  if (depth < kMaxDepth) unit_0010(c, 149u, depth + 1u); else { c.pc = 0x001615A0u; return; } if (c.pc != 0x00260774u) [[unlikely]] return; }
L_00260774:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[2] = ld32((c.r[3].w[0] + 15712u));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 72u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 15716u));
    st32((c.r[29].w[0] + 64u), c.f[2]);
    st32((c.r[29].w[0] + 64u), c.f[21]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 15724u));
    st32((c.r[29].w[0] + 68u), c.f[1]);
    st32((c.r[29].w[0] + 68u), c.f[20]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002607B4u); st32((c.r[29].w[0] + 76u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x002607B4u) [[unlikely]] return; }
L_002607B4:
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_002607D8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[4].w[0] + 60u)));  if (t) { goto L_002607D8; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002607D8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002607E4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 152u, depth + 1u); else { c.pc = 0x001615D0u; return; } if (c.pc != 0x002607E4u) [[unlikely]] return; }
L_002607E4:
    c.f[1] = ld32((c.r[17].w[0] + 76u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = 0u;
    c.f[3] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 9;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x43F00000u);  goto L_00260810; }
    c.f[3] = c.f[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43F00000u);
    c.budget -= 2;
L_00260810:
    set32(c.r[7], 0u - 1u);
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44200000u);
    st32((c.r[29].w[0] + 100u), c.r[7].w[0]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 1u);
    st32((c.r[29].w[0] + 120u), c.r[3].w[0]);
    c.f[0] = c.r[2].w[0];
    st32((c.r[29].w[0] + 124u), c.r[7].w[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[29].w[0] + 140u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 148u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 172u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 164u), c.r[3].w[0]);
    c.f[2] = c.f[3] ^ fp::kSign;
    st32((c.r[29].w[0] + 168u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 80u), c.f[2]);
    st32((c.r[29].w[0] + 88u), 0u);
    st32((c.r[29].w[0] + 84u), c.f[2]);
    st32((c.r[29].w[0] + 92u), 0u);
    c.budget -= 23;
L_0026086C:
    st32((c.r[29].w[0] + 104u), c.f[2]);
    st32((c.r[29].w[0] + 96u), 0u);
    st32((c.r[29].w[0] + 132u), c.f[2]);
    st32((c.r[29].w[0] + 112u), 0u);
    st32((c.r[29].w[0] + 108u), c.f[1]);
    st32((c.r[29].w[0] + 116u), 0u);
    st32((c.r[29].w[0] + 156u), c.f[1]);
    st32((c.r[29].w[0] + 136u), 0u);
    st32((c.r[29].w[0] + 128u), c.f[0]);
    st32((c.r[29].w[0] + 144u), 0u);
    st32((c.r[29].w[0] + 152u), c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002608A0u); st32((c.r[29].w[0] + 160u), 0u);  if (depth < kMaxDepth) unit_000E(c, 337u, depth + 1u); else { c.pc = 0x0015AE70u; return; } if (c.pc != 0x002608A0u) [[unlikely]] return; }
L_002608A0:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002608ACu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0039(c, 362u, depth + 1u); else { c.pc = 0x00207E10u; return; } if (c.pc != 0x002608ACu) [[unlikely]] return; }
L_002608AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002608B0:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_002608D0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00260940; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[4], c.r[29].w[0] + 108u);
    set32(c.r[6], 0u + 3u);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026091Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x0026091Cu) [[unlikely]] return; }
L_0026091C:
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[4], c.r[29].w[0] + 100u);
    set32(c.r[6], 0u + 3u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260938u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x00260938u) [[unlikely]] return; }
L_00260938:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026098C; } }
L_00260940:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 32767ull;
    set32(c.r[6], 0u + 3u);
    set32(c.r[4], c.r[29].w[0] + 92u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260970u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x00260970u) [[unlikely]] return; }
L_00260970:
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[6], 0u + 3u);
    set32(c.r[4], c.r[29].w[0] + 84u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026098Cu); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x0026098Cu) [[unlikely]] return; }
L_0026098C:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 4u)));  goto L_002609C4; }
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[4], c.r[29].w[0] + 76u);
    set32(c.r[6], 0u + 3u);
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002609BCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x002609BCu) [[unlikely]] return; }
L_002609BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002609EC; } }
L_002609C4:
    set32(c.r[2], 0u - 4097u);
    set32(c.r[6], 0u + 3u);
    set32(c.r[4], c.r[29].w[0] + 68u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002609ECu); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x002609ECu) [[unlikely]] return; }
L_002609EC:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 4u)));  goto L_00260A04; }
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00260A10; } }
L_00260A04:
    set32(c.r[3], 0u - 8193u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 3;
L_00260A10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00260A30:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 80u), c.f[12]);  if (t) { goto L_00260A48; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00260A58; } }
L_00260A48:
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], 0u - 16385u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
L_00260A58:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00260A60:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 4;
    { c.r[5].d[0] = c.r[2].d[0] + 0ull;  goto L_00260A70; }
L_00260A70:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[4].w[0] + 92u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_00260BC4; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_00260AC4; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_00260ADC; } }
L_00260AC4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 6;
L_00260ADC:
    set32(c.r[2], ld32((c.r[5].w[0] + 176u)));
    set32(c.r[4], c.r[3].w[0] << 24);
    set32(c.r[7], 0u - 256u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.r[3].d[0] = c.r[3].d[0] | 32800ull;
    c.r[9].d[0] = c.r[4].d[0] | c.r[3].d[0];
    set32(c.r[3], c.r[2].w[0] >> 24);
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], c.r[9].w[0] >> 24);
    c.r[5].d[0] = c.r[3].d[0] & 255ull;
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[9].w[0] >> 16);
    c.r[6].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], c.r[9].w[0] >> 8);
    set32(c.r[4], c.r[2].w[0] >> 16);
    c.r[5].d[0] = c.r[3].d[0] & 255ull;
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.r[3].d[0] = c.r[9].d[0] & 255ull;
    mmi::mult(c, 1, c.r[6].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[1];
    set32(c.r[6], c.r[8].w[0] + 255u);
    set32(c.r[4], c.r[4].w[0] + 255u);
    set32(c.r[6], c.r[6].w[0] >> 8);
    set32(c.r[4], c.r[4].w[0] >> 8);
    set32(c.r[6], c.r[6].w[0] << 24);
    set32(c.r[4], c.r[4].w[0] << 16);
    c.r[9].d[0] = c.r[6].d[0] | c.r[4].d[0];
    set32(c.r[4], c.r[2].w[0] >> 8);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[1];
    set32(c.r[2], c.r[2].w[0] + 255u);
    set32(c.r[6], c.r[6].w[0] + 15648u);
    set32(c.r[2], c.r[2].w[0] >> 8);
    set32(c.r[3], c.r[8].w[0] + 255u);
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[7].d[0];
    set32(c.r[4], 0u + 8u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[9].d[0];
    c.r[7].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 41;
L_00260B80:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00260B80u | kUnwind; return; } goto L_00260B80; } }
    st32((c.r[29].w[0] + 28u), c.r[7].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 44u), c.r[7].w[0]);
    set32(c.r[5], 0u + 4u);
    st32((c.r[29].w[0] + 60u), c.r[7].w[0]);
    set32(c.r[6], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260BC0u); st32((c.r[29].w[0] + 76u), c.r[7].w[0]);  if (depth < kMaxDepth) unit_000E(c, 335u, depth + 1u); else { c.pc = 0x0015AE50u; return; } if (c.pc != 0x00260BC0u) [[unlikely]] return; }
L_00260BC0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00260BC4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00260BD0:
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[13]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { c.f[12] = c.f[13];  goto L_00260BDC; }
L_00260BDC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = c.f[12];  c.pc = t; return; }
L_00260BF0:
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[13]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[12] = c.f[13];  goto L_00260BFC; }
L_00260BFC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = c.f[12];  c.pc = t; return; }
L_00260C10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260C34u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x00260C34u) [[unlikely]] return; }
L_00260C34:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 20784u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260C48u); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0050(c, 87u, depth + 1u); else { c.pc = 0x00260D40u; return; } if (c.pc != 0x00260C48u) [[unlikely]] return; }
L_00260C48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47480000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] | 21324ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260C5Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0038(c, 282u, depth + 1u); else { c.pc = 0x00202D40u; return; } if (c.pc != 0x00260C5Cu) [[unlikely]] return; }
L_00260C5C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260C68u); set32(c.r[4], 0u + 88u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00260C68u) [[unlikely]] return; }
L_00260C68:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 80u), c.r[2].w[0]);  goto L_00260C8C; }
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260C88u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 139u, depth + 1u); else { c.pc = 0x00205870u; return; } if (c.pc != 0x00260C88u) [[unlikely]] return; }
L_00260C88:
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 1;
L_00260C8C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260C9Cu); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x00260C9Cu) [[unlikely]] return; }
L_00260C9C:
    st32((c.r[16].w[0] + 96u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00260CD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00260D20; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 20784u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260CFCu); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0050(c, 88u, depth + 1u); else { c.pc = 0x00260D60u; return; } if (c.pc != 0x00260CFCu) [[unlikely]] return; }
L_00260CFC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260D08u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00260D08u) [[unlikely]] return; }
L_00260D08:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00260D24; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260D20u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x00260D20u) [[unlikely]] return; }
L_00260D20:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00260D24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00260D40:
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 56u), 0u);
    st32((c.r[4].w[0] + 84u), 0u);
    st32((c.r[4].w[0] + 88u), 0u);
    st32((c.r[4].w[0] + 92u), 0u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 80u), 0u);  c.pc = t; return; }
L_00260D60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 52u), 0u);  if (t) { goto L_00260D90; } }
L_00260D80:
    set32(c.r[16], ld32((c.r[3].w[0] + 548u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260D8Cu); c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x00260D8Cu) [[unlikely]] return; }
L_00260D8C:
    c.r[3].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00260D90:
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00260D80u | kUnwind; return; } goto L_00260D80; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 80u)));  goto L_00260DB8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260DB0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 343u, depth + 1u); else { c.pc = 0x001B2760u; return; } if (c.pc != 0x00260DB0u) [[unlikely]] return; }
L_00260DB0:
    st32((c.r[17].w[0] + 56u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 2;
L_00260DB8:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  goto L_00260DD8; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00260DD0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00260DD0u) [[unlikely]] return; }
L_00260DD0:
    st32((c.r[17].w[0] + 80u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 2;
L_00260DD8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00260E00:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], 0u + 261u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260E24u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00260E24u) [[unlikely]] return; }
L_00260E24:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260E34u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 337u, depth + 1u); else { c.pc = 0x001CACD0u; return; } if (c.pc != 0x00260E34u) [[unlikely]] return; }
L_00260E34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00260F0C; } }
L_00260E3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260E44u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 106u, depth + 1u); else { c.pc = 0x00260F90u; return; } if (c.pc != 0x00260E44u) [[unlikely]] return; }
L_00260E44:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_00260EFC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260E54u); set32(c.r[4], 0u + 560u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00260E54u) [[unlikely]] return; }
L_00260E54:
    set32(c.r[3], ld32((c.r[17].w[0] + 160u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 148u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 152u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260E74u); set32(c.r[7], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0050(c, 116u, depth + 1u); else { c.pc = 0x002610F0u; return; } if (c.pc != 0x00260E74u) [[unlikely]] return; }
L_00260E74:
    set32(c.r[5], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260E80u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 108u, depth + 1u); else { c.pc = 0x00260FC0u; return; } if (c.pc != 0x00260E80u) [[unlikely]] return; }
L_00260E80:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 4u), 0u);  goto L_00260EB4; }
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    st32((c.r[16].w[0] + 16u), c.f[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 544u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 544u), c.r[2].w[0]);  if (t) { goto L_00260EEC; } }
L_00260EB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 156u)));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { c.f[0] = ld32((c.r[28].w[0] - 31712u));  goto L_00260EE0; }
    c.f[0] = ld32((c.r[28].w[0] - 31716u));
    set32(c.r[2], 0u + 240u);
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 544u), c.r[2].w[0]);  if (t) { goto L_00260EEC; } }
L_00260EE0:
    set32(c.r[2], 0u + 64u);
    st32((c.r[16].w[0] + 12u), c.f[0]);
    st32((c.r[16].w[0] + 544u), c.r[2].w[0]);
    c.budget -= 3;
L_00260EEC:
    set32(c.r[2], ld32((c.r[19].w[0] + 52u)));
    st32((c.r[16].w[0] + 548u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 52u), c.r[16].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
L_00260EFC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260F08u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_002A(c, 339u, depth + 1u); else { c.pc = 0x001CAD10u; return; } if (c.pc != 0x00260F08u) [[unlikely]] return; }
L_00260F08:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00260F0C:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 160u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00260E3Cu | kUnwind; return; } goto L_00260E3C; }
    set32(c.r[17], ld32((c.r[19].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00260F68; } }
L_00260F20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260F28u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 329u, depth + 1u); else { c.pc = 0x001CABB0u; return; } if (c.pc != 0x00260F28u) [[unlikely]] return; }
L_00260F28:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = c.r[17].d[0] + 0ull;  goto L_00260F64; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 548u)));  goto L_00260F50; }
    set32(c.r[2], ld32((c.r[17].w[0] + 548u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260F48u); st32((c.r[16].w[0] + 548u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x00260F48u) [[unlikely]] return; }
L_00260F48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[16].w[0] + 548u)));  if (t) { goto L_00260F68; } }
L_00260F50:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260F5Cu); st32((c.r[19].w[0] + 52u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x00260F5Cu) [[unlikely]] return; }
L_00260F5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[19].w[0] + 52u)));  if (t) { goto L_00260F68; } }
L_00260F64:
    set32(c.r[17], ld32((c.r[17].w[0] + 548u)));
    c.budget -= 1;
L_00260F68:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[5], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00260F20u | kUnwind; return; } goto L_00260F20; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00260F90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[4].w[0] + 52u)));  if (t) { goto L_00260FA8; } }
L_00260F98:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[5].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 548u)));  goto L_00260FA8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00260FB4; } }
L_00260FA8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[2].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00260F98u | kUnwind; return; } goto L_00260F98; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00260FB4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00260FC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260FE4u); set32(c.r[4], 0u + 261u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00260FE4u) [[unlikely]] return; }
L_00260FE4:
    set32(c.r[16], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00261018; } }
L_00260FF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260FF8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 329u, depth + 1u); else { c.pc = 0x001CABB0u; return; } if (c.pc != 0x00260FF8u) [[unlikely]] return; }
L_00260FF8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[16].w[0] + 548u)));  goto L_00261018; }
    set32(c.r[2], ld32((c.r[2].w[0] + 148u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_00261014; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00261024; } }
L_00261014:
    set32(c.r[16], ld32((c.r[16].w[0] + 548u)));
    c.budget -= 1;
L_00261018:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[5], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00260FF0u | kUnwind; return; } goto L_00260FF0; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00261024:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00261040:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 12u), c.f[23]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[23] = c.f[12];
    c.f[22] = c.f[13];
    c.f[21] = c.f[14];
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261084u); c.f[20] = c.f[15];  if (depth < kMaxDepth) unit_0050(c, 93u, depth + 1u); else { c.pc = 0x00260E00u; return; } if (c.pc != 0x00261084u) [[unlikely]] return; }
L_00261084:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261090u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 106u, depth + 1u); else { c.pc = 0x00260F90u; return; } if (c.pc != 0x00261090u) [[unlikely]] return; }
L_00261090:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[2].w[0] + 4u), c.f[23]);  goto L_002610B4; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002610ACu); set32(c.r[5], c.r[5].w[0] - 8416u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x002610ACu) [[unlikely]] return; }
L_002610AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_002610C8; } }
L_002610B4:
    st32((c.r[2].w[0] + 8u), c.f[22]);
    st32((c.r[2].w[0] + 12u), c.f[21]);
    st32((c.r[2].w[0] + 16u), c.f[20]);
    st32((c.r[2].w[0] + 544u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 5;
L_002610C8:
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002610F0:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.budget -= 15;
L_0026112C:
    set32(c.r[2], c.r[6].w[0] << 5);
    set32(c.r[5], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[5].w[0]), c.r[4].w[0]);
    c.r[2].d[0] = c.r[6].sd[0] < 16ll ? 1ull : 0ull;
    st32((c.r[5].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[5].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[5].w[0] + 16u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026112Cu | kUnwind; return; } goto L_0026112C; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 96u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 56u)));  goto L_002612F0; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261170u); set32(c.r[5], c.r[5].w[0] - 8383u);  if (depth < kMaxDepth) unit_0022(c, 286u, depth + 1u); else { c.pc = 0x001AAEF0u; return; } if (c.pc != 0x00261170u) [[unlikely]] return; }
L_00261170:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00261524; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 8367u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026118Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 286u, depth + 1u); else { c.pc = 0x001AAEF0u; return; } if (c.pc != 0x0026118Cu) [[unlikely]] return; }
L_0026118C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002611E4; } }
L_00261194:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002611A0u); set32(c.r[5], c.r[5].w[0] - 8361u);  if (depth < kMaxDepth) unit_0022(c, 301u, depth + 1u); else { c.pc = 0x001AB140u; return; } if (c.pc != 0x002611A0u) [[unlikely]] return; }
L_002611A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002611A8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 248u, depth + 1u); else { c.pc = 0x001AA890u; return; } if (c.pc != 0x002611A8u) [[unlikely]] return; }
L_002611A8:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_002611D0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002611C0u); set32(c.r[5], c.r[5].w[0] - 8357u);  if (depth < kMaxDepth) unit_0022(c, 301u, depth + 1u); else { c.pc = 0x001AB140u; return; } if (c.pc != 0x002611C0u) [[unlikely]] return; }
L_002611C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002611C8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 248u, depth + 1u); else { c.pc = 0x001AA890u; return; } if (c.pc != 0x002611C8u) [[unlikely]] return; }
L_002611C8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_002611EC; } }
L_002611D0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002611E0u); set32(c.r[5], c.r[5].w[0] - 8367u);  if (depth < kMaxDepth) unit_0022(c, 293u, depth + 1u); else { c.pc = 0x001AAFE0u; return; } if (c.pc != 0x002611E0u) [[unlikely]] return; }
L_002611E0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002611E4:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00261194u | kUnwind; return; } goto L_00261194; }
L_002611EC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002612E4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261204u); set32(c.r[5], c.r[5].w[0] - 8353u);  if (depth < kMaxDepth) unit_0022(c, 278u, depth + 1u); else { c.pc = 0x001AADD0u; return; } if (c.pc != 0x00261204u) [[unlikely]] return; }
L_00261204:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_002612D0; } }
L_00261210:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 8353u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261220u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 286u, depth + 1u); else { c.pc = 0x001AAEF0u; return; } if (c.pc != 0x00261220u) [[unlikely]] return; }
L_00261220:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261230u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 284u, depth + 1u); else { c.pc = 0x001AAEB0u; return; } if (c.pc != 0x00261230u) [[unlikely]] return; }
L_00261230:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261244u); set32(c.r[5], c.r[5].w[0] - 8343u);  if (depth < kMaxDepth) unit_0022(c, 301u, depth + 1u); else { c.pc = 0x001AB140u; return; } if (c.pc != 0x00261244u) [[unlikely]] return; }
L_00261244:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026124Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 248u, depth + 1u); else { c.pc = 0x001AA890u; return; } if (c.pc != 0x0026124Cu) [[unlikely]] return; }
L_0026124C:
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[4], c.r[19].w[0] + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026125Cu); set32(c.r[17], c.r[16].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 248u, depth + 1u); else { c.pc = 0x001AA890u; return; } if (c.pc != 0x0026125Cu) [[unlikely]] return; }
L_0026125C:
    c.f[0] = c.r[2].w[0];
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261270u); st32((c.r[17].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0022(c, 292u, depth + 1u); else { c.pc = 0x001AAFD0u; return; } if (c.pc != 0x00261270u) [[unlikely]] return; }
L_00261270:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026127Cu); set32(c.r[4], c.r[19].w[0] + 8u);  if (depth < kMaxDepth) unit_0022(c, 248u, depth + 1u); else { c.pc = 0x001AA890u; return; } if (c.pc != 0x0026127Cu) [[unlikely]] return; }
L_0026127C:
    c.f[0] = c.r[2].w[0];
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261290u); st32((c.r[17].w[0] + 4u), c.f[0]);  if (depth < kMaxDepth) unit_0022(c, 292u, depth + 1u); else { c.pc = 0x001AAFD0u; return; } if (c.pc != 0x00261290u) [[unlikely]] return; }
L_00261290:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026129Cu); set32(c.r[4], c.r[19].w[0] + 8u);  if (depth < kMaxDepth) unit_0022(c, 248u, depth + 1u); else { c.pc = 0x001AA890u; return; } if (c.pc != 0x0026129Cu) [[unlikely]] return; }
L_0026129C:
    c.f[0] = c.r[2].w[0];
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002612B0u); st32((c.r[17].w[0] + 8u), c.f[0]);  if (depth < kMaxDepth) unit_0022(c, 292u, depth + 1u); else { c.pc = 0x001AAFD0u; return; } if (c.pc != 0x002612B0u) [[unlikely]] return; }
L_002612B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002612B8u); set32(c.r[4], c.r[2].w[0] + 8u);  if (depth < kMaxDepth) unit_0022(c, 248u, depth + 1u); else { c.pc = 0x001AA890u; return; } if (c.pc != 0x002612B8u) [[unlikely]] return; }
L_002612B8:
    c.f[0] = c.r[2].w[0];
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 12u), c.f[0]);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 6;
L_002612D0:
    c.r[2].d[0] = c.r[20].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00261210u | kUnwind; return; } goto L_00261210; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_00261524; } }
L_002612E4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00261524; } }
L_002612F0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00261524; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261300u); set32(c.r[4], c.r[29].w[0] + 232u);  if (depth < kMaxDepth) unit_0022(c, 91u, depth + 1u); else { c.pc = 0x001A8E70u; return; } if (c.pc != 0x00261300u) [[unlikely]] return; }
L_00261300:
    set32(c.r[5], ld32((c.r[18].w[0] + 56u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026130Cu); set32(c.r[4], c.r[29].w[0] + 232u);  if (depth < kMaxDepth) unit_0022(c, 92u, depth + 1u); else { c.pc = 0x001A8E80u; return; } if (c.pc != 0x0026130Cu) [[unlikely]] return; }
L_0026130C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[5], c.r[29].w[0] + 232u);
    set32(c.r[6], c.r[6].w[0] - 8383u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261324u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 117u, depth + 1u); else { c.pc = 0x001A9270u; return; } if (c.pc != 0x00261324u) [[unlikely]] return; }
L_00261324:
    c.r[2].d[0] = ld64((c.r[29].w[0] + 208u));
    set32(c.r[4], c.r[29].w[0] + 232u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261334u); st64((c.r[29].w[0] + 232u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0022(c, 93u, depth + 1u); else { c.pc = 0x001A8EF0u; return; } if (c.pc != 0x00261334u) [[unlikely]] return; }
L_00261334:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00261520; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[29].w[0] + 200u);
    set32(c.r[5], c.r[29].w[0] + 232u);
    set32(c.r[6], c.r[6].w[0] - 8367u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261354u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 117u, depth + 1u); else { c.pc = 0x001A9270u; return; } if (c.pc != 0x00261354u) [[unlikely]] return; }
L_00261354:
    set32(c.r[3], ld32((c.r[29].w[0] + 200u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 204u)));
    st32((c.r[29].w[0] + 232u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 236u), c.r[2].w[0]);  if (t) { goto L_002613C8; } }
L_00261368:
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[29].w[0] + 232u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261378u); set32(c.r[6], c.r[6].w[0] - 8361u);  if (depth < kMaxDepth) unit_0022(c, 138u, depth + 1u); else { c.pc = 0x001A9600u; return; } if (c.pc != 0x00261378u) [[unlikely]] return; }
L_00261378:
    set32(c.r[2], ld32((c.r[29].w[0] + 196u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_002613A4; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[29].w[0] + 184u);
    set32(c.r[5], c.r[29].w[0] + 232u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261398u); set32(c.r[6], c.r[6].w[0] - 8357u);  if (depth < kMaxDepth) unit_0022(c, 138u, depth + 1u); else { c.pc = 0x001A9600u; return; } if (c.pc != 0x00261398u) [[unlikely]] return; }
L_00261398:
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[4], c.r[29].w[0] + 232u);  goto L_002613DC; }
L_002613A4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[29].w[0] + 232u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002613B8u); set32(c.r[6], c.r[6].w[0] - 8367u);  if (depth < kMaxDepth) unit_0022(c, 125u, depth + 1u); else { c.pc = 0x001A9410u; return; } if (c.pc != 0x002613B8u) [[unlikely]] return; }
L_002613B8:
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 180u)));
    st32((c.r[29].w[0] + 232u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 236u), c.r[2].w[0]);
    c.budget -= 4;
L_002613C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002613D0u); set32(c.r[4], c.r[29].w[0] + 232u);  if (depth < kMaxDepth) unit_0022(c, 93u, depth + 1u); else { c.pc = 0x001A8EF0u; return; } if (c.pc != 0x002613D0u) [[unlikely]] return; }
L_002613D0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00261368u | kUnwind; return; } goto L_00261368; }
    set32(c.r[4], c.r[29].w[0] + 232u);
    c.budget -= 1;
L_002613DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002613E4u);  if (depth < kMaxDepth) unit_0022(c, 93u, depth + 1u); else { c.pc = 0x001A8EF0u; return; } if (c.pc != 0x002613E4u) [[unlikely]] return; }
L_002613E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00261520; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[29].w[0] + 232u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002613FCu); set32(c.r[5], c.r[5].w[0] - 8353u);  if (depth < kMaxDepth) unit_0022(c, 107u, depth + 1u); else { c.pc = 0x001A90C0u; return; } if (c.pc != 0x002613FCu) [[unlikely]] return; }
L_002613FC:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0026150C; } }
L_00261408:
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[5], c.r[29].w[0] + 232u);
    set32(c.r[6], c.r[6].w[0] - 8353u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026141Cu); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 117u, depth + 1u); else { c.pc = 0x001A9270u; return; } if (c.pc != 0x0026141Cu) [[unlikely]] return; }
L_0026141C:
    set32(c.r[4], c.r[29].w[0] + 216u);
    set32(c.r[5], c.r[29].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026142Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x0026142Cu) [[unlikely]] return; }
L_0026142C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[29].w[0] + 168u);
    set32(c.r[5], c.r[29].w[0] + 224u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261440u); set32(c.r[6], c.r[6].w[0] - 8343u);  if (depth < kMaxDepth) unit_0022(c, 138u, depth + 1u); else { c.pc = 0x001A9600u; return; } if (c.pc != 0x00261440u) [[unlikely]] return; }
L_00261440:
    set32(c.r[2], ld32((c.r[29].w[0] + 172u)));
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[29].w[0] + 216u);
    set32(c.r[2], c.r[2].w[0] << 5);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261458u); set32(c.r[17], c.r[16].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x00261458u) [[unlikely]] return; }
L_00261458:
    c.f[0] = ld32((c.r[29].w[0] + 164u));
    set32(c.r[4], c.r[29].w[0] + 152u);
    set32(c.r[5], c.r[29].w[0] + 216u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261470u); st32((c.r[17].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x00261470u) [[unlikely]] return; }
L_00261470:
    set32(c.r[3], ld32((c.r[29].w[0] + 152u)));
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[2], ld32((c.r[29].w[0] + 156u)));
    set32(c.r[5], c.r[29].w[0] + 216u);
    st32((c.r[29].w[0] + 216u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026148Cu); st32((c.r[29].w[0] + 220u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x0026148Cu) [[unlikely]] return; }
L_0026148C:
    c.f[0] = ld32((c.r[29].w[0] + 148u));
    set32(c.r[4], c.r[29].w[0] + 136u);
    set32(c.r[5], c.r[29].w[0] + 216u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002614A4u); st32((c.r[17].w[0] + 4u), c.f[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x002614A4u) [[unlikely]] return; }
L_002614A4:
    set32(c.r[3], ld32((c.r[29].w[0] + 136u)));
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[2], ld32((c.r[29].w[0] + 140u)));
    set32(c.r[5], c.r[29].w[0] + 216u);
    st32((c.r[29].w[0] + 216u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002614C0u); st32((c.r[29].w[0] + 220u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x002614C0u) [[unlikely]] return; }
L_002614C0:
    c.f[0] = ld32((c.r[29].w[0] + 132u));
    set32(c.r[4], c.r[29].w[0] + 120u);
    set32(c.r[5], c.r[29].w[0] + 216u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002614D8u); st32((c.r[17].w[0] + 8u), c.f[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x002614D8u) [[unlikely]] return; }
L_002614D8:
    set32(c.r[3], ld32((c.r[29].w[0] + 120u)));
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[5], c.r[29].w[0] + 216u);
    st32((c.r[29].w[0] + 216u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002614F4u); st32((c.r[29].w[0] + 220u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x002614F4u) [[unlikely]] return; }
L_002614F4:
    c.f[0] = ld32((c.r[29].w[0] + 116u));
    set32(c.r[2], 0u + 1u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 12u), c.f[0]);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 6;
L_0026150C:
    c.r[2].d[0] = c.r[18].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00261408u | kUnwind; return; } goto L_00261408; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00261524; } }
L_00261520:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00261524:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_00261550:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[3] = ld32((c.r[5].w[0] + 8u));
    c.f[2] = ld32((c.r[5].w[0]));
    c.f[1] = ld32((c.r[5].w[0] + 12u));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 21;
    { const bool t = c.r[8].d[0] != 0ull; c.f[20] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);  if (t) { goto L_002615A8; } }
    c.f[20] = c.f[20] ^ fp::kSign;
    c.budget -= 1;
L_002615A8:
    c.r[2].d[0] = 0ull < c.r[8].d[0] ? 1ull : 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] ^ 1ull;  if (t) { goto L_00261648; } }
L_002615B8:
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.f[13] = ld32((c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002615C8u); c.f[12] = ld32((c.r[20].w[0]));  if (depth < kMaxDepth) unit_0050(c, 75u, depth + 1u); else { c.pc = 0x00260BF0u; return; } if (c.pc != 0x002615C8u) [[unlikely]] return; }
L_002615C8:
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.f[13] = ld32((c.r[2].w[0] + 4u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002615D8u); c.f[12] = ld32((c.r[20].w[0] + 4u));  if (depth < kMaxDepth) unit_0050(c, 75u, depth + 1u); else { c.pc = 0x00260BF0u; return; } if (c.pc != 0x002615D8u) [[unlikely]] return; }
L_002615D8:
    st32((c.r[29].w[0] + 132u), c.f[0]);
    c.f[13] = ld32((c.r[2].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002615E8u); c.f[12] = ld32((c.r[20].w[0] + 8u));  if (depth < kMaxDepth) unit_0050(c, 74u, depth + 1u); else { c.pc = 0x00260BD0u; return; } if (c.pc != 0x002615E8u) [[unlikely]] return; }
L_002615E8:
    st32((c.r[29].w[0] + 136u), c.f[0]);
    c.f[12] = ld32((c.r[20].w[0] + 12u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002615F8u); c.f[13] = ld32((c.r[2].w[0] + 12u));  if (depth < kMaxDepth) unit_0050(c, 74u, depth + 1u); else { c.pc = 0x00260BD0u; return; } if (c.pc != 0x002615F8u) [[unlikely]] return; }
L_002615F8:
    c.f[2] = ld32((c.r[29].w[0] + 128u));
    c.f[1] = ld32((c.r[29].w[0] + 136u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[29].w[0] + 140u), c.f[0]);  if (t) { goto L_00261644; } }
    c.f[1] = ld32((c.r[29].w[0] + 132u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_00261648; }
    set32(c.r[3], c.r[17].w[0] + 1u);
    set32(c.r[2], c.r[18].w[0] - c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[7], c.r[2].w[0] - 1u);
    set32(c.r[6], c.r[19].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261640u); c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 162u, depth + 1u); else { c.pc = 0x00261550u; return; } if (c.pc != 0x00261640u) [[unlikely]] return; }
L_00261640:
    c.f[20] = fp::ee::add(c.fcr31, c.f[20], c.f[0]);
    c.budget -= 1;
L_00261644:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00261648:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 4);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002615B8u | kUnwind; return; } goto L_002615B8; }
    c.f[0] = c.f[20];
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00261680:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00261728; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_002617BC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002616C0u);  if (depth < kMaxDepth) unit_0039(c, 167u, depth + 1u); else { c.pc = 0x00205DC0u; return; } if (c.pc != 0x002616C0u) [[unlikely]] return; }
L_002616C0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002616D0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 340u, depth + 1u); else { c.pc = 0x001B2710u; return; } if (c.pc != 0x002616D0u) [[unlikely]] return; }
L_002616D0:
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002616DCu); set32(c.r[4], ld32((c.r[16].w[0] + 80u)));  if (depth < kMaxDepth) unit_0039(c, 166u, depth + 1u); else { c.pc = 0x00205D90u; return; } if (c.pc != 0x002616DCu) [[unlikely]] return; }
L_002616DC:
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002616ECu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x002616ECu) [[unlikely]] return; }
L_002616EC:
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_00261710; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00261708u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00261708u) [[unlikely]] return; }
L_00261708:
    st32((c.r[16].w[0] + 80u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 2;
L_00261710:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[4].d[0] = c.r[4].d[0] << 33;
    c.r[4].d[0] = c.r[4].d[0] >> 33;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 6;
L_00261728:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002617B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 27072u)));
    c.budget -= 4;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_00261754; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[4] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0026176C; } }
L_00261754:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[4] = fp::cvt_s_w(c.f[0]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[4], c.f[4]);
    c.budget -= 6;
L_0026176C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[2] = ld32((c.r[16].w[0] + 84u));
    c.f[0] = 0u;
    c.f[3] = ld32((c.r[2].w[0] + 27140u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[3]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 84u), c.f[0]);  if (t) { goto L_002617A0; } }
L_00261794:
    c.f[0] = ld32((c.r[16].w[0] + 84u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 84u), c.f[0]);
    c.budget -= 3;
L_002617A0:
    c.f[0] = ld32((c.r[16].w[0] + 84u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00261794u | kUnwind; return; } goto L_00261794; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002617B8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 93u, depth + 1u); else { c.pc = 0x00260E00u; return; } if (c.pc != 0x002617B8u) [[unlikely]] return; }
L_002617B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002617BC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002617D0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002619BC; } }
    set32(c.r[7], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull | 65530ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261814u); c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 356u, depth + 1u); else { c.pc = 0x00207D10u; return; } if (c.pc != 0x00261814u) [[unlikely]] return; }
L_00261814:
    c.f[0] = ld32((c.r[19].w[0] + 84u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[12] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026183Cu);  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x0026183Cu) [[unlikely]] return; }
L_0026183C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43400000u);
    set32(c.r[18], ld32((c.r[19].w[0] + 52u)));
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] << 24);  if (t) { goto L_002619A8; } }
L_00261868:
    set32(c.r[2], c.r[17].w[0] << 5);
    c.budget -= 1;
L_0026186C:
    set32(c.r[3], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_00261998; }
    set32(c.r[7], ld32((c.r[18].w[0])));
    set32(c.r[6], c.r[3].w[0] + 32u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261890u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0050(c, 191u, depth + 1u); else { c.pc = 0x002619E0u; return; } if (c.pc != 0x00261890u) [[unlikely]] return; }
L_00261890:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 8480u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[2].w[0])));
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], ld32((c.r[19].w[0] + 88u)));
    c.budget -= 9;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.f[0] = ld32((c.r[29].w[0] + 172u));  goto L_002618D0; }
    set32(c.r[2], ld32((c.r[19].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_002618CC; } }
    c.r[2].d[0] = c.r[7].d[0] << 40;
    c.r[2].d[0] = c.r[2].d[0] >> 40;
    c.r[7].d[0] = c.r[2].d[0] | c.r[16].d[0];
    c.budget -= 3;
L_002618CC:
    c.f[0] = ld32((c.r[29].w[0] + 172u));
    c.budget -= 1;
L_002618D0:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[2] = ld32((c.r[29].w[0] + 160u));
    st32((c.r[29].w[0] + 108u), c.r[7].w[0]);
    c.f[1] = ld32((c.r[29].w[0] + 164u));
    set32(c.r[5], 0u + 4u);
    st32((c.r[29].w[0] + 116u), c.f[0]);
    set32(c.r[6], 0u + 1u);
    c.budget -= 7;
L_002618EC:
    st32((c.r[29].w[0] + 148u), c.f[0]);
    st32((c.r[29].w[0] + 124u), c.r[7].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 168u));
    st32((c.r[29].w[0] + 140u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 156u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 96u), c.f[2]);
    st32((c.r[29].w[0] + 112u), c.f[2]);
    st32((c.r[29].w[0] + 104u), 0u);
    st32((c.r[29].w[0] + 100u), c.f[1]);
    st32((c.r[29].w[0] + 120u), 0u);
    st32((c.r[29].w[0] + 132u), c.f[1]);
    st32((c.r[29].w[0] + 136u), 0u);
    st32((c.r[29].w[0] + 128u), c.f[0]);
    st32((c.r[29].w[0] + 152u), 0u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026192Cu); st32((c.r[29].w[0] + 144u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 335u, depth + 1u); else { c.pc = 0x0015AE50u; return; } if (c.pc != 0x0026192Cu) [[unlikely]] return; }
L_0026192C:
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026193Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 202u, depth + 1u); else { c.pc = 0x00261BB0u; return; } if (c.pc != 0x0026193Cu) [[unlikely]] return; }
L_0026193C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261944u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0011(c, 107u, depth + 1u); else { c.pc = 0x00164CA0u; return; } if (c.pc != 0x00261944u) [[unlikely]] return; }
L_00261944:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026194Cu); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0011(c, 104u, depth + 1u); else { c.pc = 0x00164C60u; return; } if (c.pc != 0x0026194Cu) [[unlikely]] return; }
L_0026194C:
    c.f[2] = ld32((c.r[29].w[0] + 160u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[1] = ld32((c.r[29].w[0] + 164u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[3] = c.r[2].w[0];
    set32(c.r[6], c.r[6].w[0] - 8340u);
    c.f[2] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[3], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[20]);
    c.f[2] = fp::cvt_w_s(c.f[2]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[2]);
    set32(c.r[5], c.f[1]);
    set32(c.r[8], c.f[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026198Cu); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 210u, depth + 1u); else { c.pc = 0x0018F2E0u; return; } if (c.pc != 0x0026198Cu) [[unlikely]] return; }
L_0026198C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261994u);  if (depth < kMaxDepth) unit_0011(c, 113u, depth + 1u); else { c.pc = 0x00164D10u; return; } if (c.pc != 0x00261994u) [[unlikely]] return; }
L_00261994:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00261998:
    c.r[2].d[0] = c.r[17].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 5);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0026186Cu | kUnwind; return; } goto L_0026186C; }
    set32(c.r[18], ld32((c.r[18].w[0] + 548u)));
    c.budget -= 1;
L_002619A8:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { c.r[17].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00261868u | kUnwind; return; } goto L_00261868; }
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002619BCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0039(c, 362u, depth + 1u); else { c.pc = 0x00207E10u; return; } if (c.pc != 0x002619BCu) [[unlikely]] return; }
L_002619BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_002619E0:
    set32(c.r[29], c.r[29].w[0] - 208u);
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261A10u); set32(c.r[4], 0u + 261u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00261A10u) [[unlikely]] return; }
L_00261A10:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261A1Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 329u, depth + 1u); else { c.pc = 0x001CABB0u; return; } if (c.pc != 0x00261A1Cu) [[unlikely]] return; }
L_00261A1C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_00261B90; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261A30u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 149u, depth + 1u); else { c.pc = 0x001615A0u; return; } if (c.pc != 0x00261A30u) [[unlikely]] return; }
L_00261A30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261A38u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x00261A38u) [[unlikely]] return; }
L_00261A38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261A40u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x00261A40u) [[unlikely]] return; }
L_00261A40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.f[2] = ld32((c.r[2].w[0] + 15744u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[4] = ld32((c.r[19].w[0] + 68u));
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.f[3] = ld32((c.r[19].w[0] + 64u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[2].w[0] + 15748u));
    st32((c.r[29].w[0] + 96u), c.f[2]);
    st32((c.r[29].w[0] + 104u), 0u);
    st32((c.r[29].w[0] + 96u), c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[2].w[0] + 15756u));
    st32((c.r[29].w[0] + 100u), c.f[1]);
    st32((c.r[29].w[0] + 100u), c.f[4]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261A88u); st32((c.r[29].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x00261A88u) [[unlikely]] return; }
L_00261A88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43F00000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.f[6] = c.r[2].w[0];
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44200000u);
    set32(c.r[6], c.r[29].w[0] + 80u);
    c.f[3] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[2].w[0] + 15728u));
    c.f[8] = ld32((c.r[19].w[0] + 76u));
    c.f[7] = ld32((c.r[19].w[0] + 68u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[2].w[0] + 15732u));
    c.f[5] = ld32((c.r[19].w[0] + 72u));
    c.f[4] = ld32((c.r[19].w[0] + 64u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[2].w[0] + 15740u));
    c.f[7] = fp::ee::sub(c.fcr31, c.f[8], c.f[7]);
    st32((c.r[29].w[0] + 88u), 0u);
    st32((c.r[29].w[0] + 92u), c.f[0]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    st32((c.r[29].w[0] + 84u), c.f[1]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[7], c.f[6]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[29].w[0] + 80u), c.f[2]);
    st32((c.r[29].w[0] + 84u), c.f[1]);
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261B00u); st32((c.r[29].w[0] + 80u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 221u, depth + 1u); else { c.pc = 0x0018F570u; return; } if (c.pc != 0x00261B00u) [[unlikely]] return; }
L_00261B00:
    set32(c.r[16], ld32((c.r[16].w[0] + 184u)));
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00261B14u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00261B14u) [[unlikely]] return; }
L_00261B14:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[6], c.r[16].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261B24u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 217u, depth + 1u); else { c.pc = 0x0018F450u; return; } if (c.pc != 0x00261B24u) [[unlikely]] return; }
L_00261B24:
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[0] = ld32((c.r[17].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], 0u + 2u);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    st32((c.r[29].w[0] + 120u), 0u);
    st32((c.r[29].w[0] + 116u), c.f[1]);
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[17].w[0] + 12u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    st32((c.r[29].w[0] + 128u), c.f[0]);
    st32((c.r[29].w[0] + 140u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 132u), c.f[1]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261B6Cu); st32((c.r[29].w[0] + 136u), 0u);  if (depth < kMaxDepth) unit_001B(c, 230u, depth + 1u); else { c.pc = 0x0018FAE0u; return; } if (c.pc != 0x00261B6Cu) [[unlikely]] return; }
L_00261B6C:
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 116u));
    st32((c.r[18].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    st32((c.r[18].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 132u));
    st32((c.r[18].w[0] + 12u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 9;
L_00261B90:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_00261BB0:
    set32(c.r[29], c.r[29].w[0] - 384u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261BE0u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0050(c, 93u, depth + 1u); else { c.pc = 0x00260E00u; return; } if (c.pc != 0x00261BE0u) [[unlikely]] return; }
L_00261BE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], ld32((c.r[20].w[0] + 52u)));  if (t) { goto L_00261BF8; } }
L_00261BE8:
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { goto L_00261C08; } }
    set32(c.r[19], ld32((c.r[19].w[0] + 548u)));
    c.budget -= 1;
L_00261BF8:
    c.budget -= 4;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00261BE8u | kUnwind; return; } goto L_00261BE8; } }
L_00261C08:
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 5);  goto L_00261C1C; }
    c.f[0] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_00261DC0; } }
L_00261C1C:
    set32(c.r[3], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[7], ld32((c.r[19].w[0])));  goto L_00261C38; }
    c.f[0] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00261DBC; } }
L_00261C38:
    set32(c.r[6], c.r[3].w[0] + 32u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261C48u); set32(c.r[5], c.r[29].w[0] + 368u);  if (depth < kMaxDepth) unit_0050(c, 191u, depth + 1u); else { c.pc = 0x002619E0u; return; } if (c.pc != 0x00261C48u) [[unlikely]] return; }
L_00261C48:
    set32(c.r[17], ld32((c.r[20].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00261CB0; } }
L_00261C54:
    c.f[0] = ld32((c.r[19].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[17], ld32((c.r[17].w[0] + 548u)));  goto L_00261CB0; }
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] << 5);
    c.budget -= 2;
L_00261C6C:
    set32(c.r[3], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_00261CA0; }
    set32(c.r[2], c.r[18].w[0] << 4);
    set32(c.r[7], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[6], c.r[3].w[0] + 32u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261C98u); set32(c.r[5], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0050(c, 191u, depth + 1u); else { c.pc = 0x002619E0u; return; } if (c.pc != 0x00261C98u) [[unlikely]] return; }
L_00261C98:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_00261CA0:
    c.r[2].d[0] = c.r[16].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 5);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00261C6Cu | kUnwind; return; } goto L_00261C6C; }
    set32(c.r[17], ld32((c.r[17].w[0] + 548u)));
    c.budget -= 1;
L_00261CB0:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.f[1] = ld32((c.r[17].w[0] + 12u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00261C54u | kUnwind; return; } goto L_00261C54; }
    c.f[5] = ld32((c.r[20].w[0] + 64u));
    c.f[4] = ld32((c.r[29].w[0] + 376u));
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[5]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[3] = ld32((c.r[29].w[0] + 368u));  goto L_00261CD8; }
    c.f[0] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00261DBC; } }
L_00261CD8:
    c.f[0] = ld32((c.r[20].w[0] + 72u));
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[2] = ld32((c.r[29].w[0] + 380u));  goto L_00261CF4; }
    c.f[0] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00261DBC; } }
L_00261CF4:
    c.f[0] = ld32((c.r[20].w[0] + 68u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = ld32((c.r[29].w[0] + 372u));  goto L_00261D10; }
    c.f[0] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00261DBC; } }
L_00261D10:
    c.f[0] = ld32((c.r[20].w[0] + 76u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);  goto L_00261D2C; }
    c.f[0] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00261DBC; } }
L_00261D2C:
    c.f[1] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[5]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[20] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (t) { goto L_00261D40; } }
    st32((c.r[29].w[0] + 368u), c.f[5]);
    c.budget -= 1;
L_00261D40:
    c.f[1] = ld32((c.r[20].w[0] + 72u));
    c.f[0] = ld32((c.r[29].w[0] + 376u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[1] = ld32((c.r[20].w[0] + 68u));  goto L_00261D5C; }
    st32((c.r[29].w[0] + 376u), c.f[1]);
    c.f[1] = ld32((c.r[20].w[0] + 68u));
    c.budget -= 2;
L_00261D5C:
    c.f[0] = ld32((c.r[29].w[0] + 372u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = ld32((c.r[20].w[0] + 76u));  goto L_00261D74; }
    st32((c.r[29].w[0] + 372u), c.f[1]);
    c.f[1] = ld32((c.r[20].w[0] + 76u));
    c.budget -= 2;
L_00261D74:
    c.f[0] = ld32((c.r[29].w[0] + 380u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_00261D8C; }
    st32((c.r[29].w[0] + 380u), c.f[1]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 2;
L_00261D8C:
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 368u);
    set32(c.r[6], c.r[29].w[0] + 112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261DA0u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0050(c, 162u, depth + 1u); else { c.pc = 0x00261550u; return; } if (c.pc != 0x00261DA0u) [[unlikely]] return; }
L_00261DA0:
    c.f[1] = fp::ee::div(c.fcr31, c.f[0], c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 7;
L_00261DBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_00261DC0:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 384u);  c.pc = t; return; }
L_00261DE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 4105u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261DF8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 352u, depth + 1u); else { c.pc = 0x001CF1C0u; return; } if (c.pc != 0x00261DF8u) [[unlikely]] return; }
L_00261DF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 20848u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261E0Cu); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0050(c, 218u, depth + 1u); else { c.pc = 0x00261EB0u; return; } if (c.pc != 0x00261E0Cu) [[unlikely]] return; }
L_00261E0C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 8320u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261E20u); st32((c.r[16].w[0] + 228u), 0u);  if (depth < kMaxDepth) unit_002C(c, 63u, depth + 1u); else { c.pc = 0x001D0A40u; return; } if (c.pc != 0x00261E20u) [[unlikely]] return; }
L_00261E20:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00261E40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00261E90; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 20848u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261E6Cu); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0050(c, 219u, depth + 1u); else { c.pc = 0x00261EF0u; return; } if (c.pc != 0x00261E6Cu) [[unlikely]] return; }
L_00261E6C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261E78u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 358u, depth + 1u); else { c.pc = 0x001CF260u; return; } if (c.pc != 0x00261E78u) [[unlikely]] return; }
L_00261E78:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00261E94; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261E90u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x00261E90u) [[unlikely]] return; }
L_00261E90:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00261E94:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00261EB0:
    st32((c.r[4].w[0] + 208u), 0u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0xC3C80000u);
    st32((c.r[4].w[0] + 212u), 0u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    st32((c.r[4].w[0] + 216u), 0u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x41000000u);
    st32((c.r[4].w[0] + 220u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40800000u);
    st32((c.r[4].w[0] + 224u), 0u);
    st32((c.r[4].w[0] + 232u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 236u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 240u), c.r[5].w[0]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 244u), c.r[3].w[0]);  c.pc = t; return; }
L_00261EF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 208u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 212u)));  goto L_00261F24; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00261F1Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00261F1Cu) [[unlikely]] return; }
L_00261F1C:
    st32((c.r[16].w[0] + 208u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 212u)));
    c.budget -= 2;
L_00261F24:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 216u)));  goto L_00261F44; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00261F3Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00261F3Cu) [[unlikely]] return; }
L_00261F3C:
    st32((c.r[16].w[0] + 212u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 216u)));
    c.budget -= 2;
L_00261F44:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 220u)));  goto L_00261F64; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00261F5Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00261F5Cu) [[unlikely]] return; }
L_00261F5C:
    st32((c.r[16].w[0] + 216u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 220u)));
    c.budget -= 2;
L_00261F64:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 224u)));  goto L_00261F84; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00261F7Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00261F7Cu) [[unlikely]] return; }
L_00261F7C:
    st32((c.r[16].w[0] + 220u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 224u)));
    c.budget -= 2;
L_00261F84:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 4109u);  goto L_00261F9C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261F94u);  if (depth < kMaxDepth) unit_0026(c, 25u, depth + 1u); else { c.pc = 0x001B81D0u; return; } if (c.pc != 0x00261F94u) [[unlikely]] return; }
L_00261F94:
    st32((c.r[16].w[0] + 224u), 0u);
    set32(c.r[4], 0u + 4109u);
    c.budget -= 2;
L_00261F9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261FA4u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00261FA4u) [[unlikely]] return; }
L_00261FA4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_00261FBC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261FB8u);  if (depth < kMaxDepth) unit_004F(c, 272u, depth + 1u); else { c.pc = 0x0025ED90u; return; } if (c.pc != 0x00261FB8u) [[unlikely]] return; }
L_00261FB8:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_00261FBC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 7ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00261FE0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[4], 0u + 261u);
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262030u); set32(c.r[16], 0u + 1u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00262030u) [[unlikely]] return; }
L_00262030:
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026203Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 329u, depth + 1u); else { c.pc = 0x001CABB0u; return; } if (c.pc != 0x0026203Cu) [[unlikely]] return; }
L_0026203C:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[20].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_00262334; }
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 156u)));  goto L_00262064; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00262334; } }
L_00262064:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.f[2] = ld32((c.r[17].w[0] + 8u));  goto L_00262090; }
    c.f[2] = ld32((c.r[17].w[0] + 8u));
    c.f[1] = ld32((c.r[18].w[0] + 12u));
    c.f[0] = ld32((c.r[28].w[0] - 31688u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.f[21] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002620A0; } }
L_00262090:
    c.f[1] = ld32((c.r[18].w[0] + 12u));
    c.f[0] = ld32((c.r[28].w[0] - 31684u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.f[21] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 4;
L_002620A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    set32(c.r[5], 0u + 319u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[21], ld32((c.r[20].w[0] + 184u)));
    c.f[20] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43610000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[0] = c.r[5].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 4u));
    c.f[0] = c.r[2].w[0];
    c.f[2] = 0u;
    c.f[1] = fp::ee::sub(c.fcr31, c.f[3], c.f[1]);
    st32((c.r[21].w[0] + 224u), c.f[1]);
    set32(c.r[2], ld32((c.r[21].w[0] + 292u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[21].w[0] + 292u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[18].w[0] + 8u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[21].w[0] + 228u), c.f[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 292u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[21].w[0] + 292u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    c.f[1] = ld32((c.r[17].w[0]));
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.budget -= 29;
L_00262114:
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[20]);
    st32((c.r[21].w[0] + 208u), c.f[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 292u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[21].w[0] + 292u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[20]);
    st32((c.r[21].w[0] + 212u), c.f[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 292u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[21].w[0] + 292u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[18].w[0] + 16u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[21]);
    st32((c.r[21].w[0] + 240u), c.f[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 292u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[21].w[0] + 292u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[18].w[0] + 16u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[21]);
    st32((c.r[21].w[0] + 244u), c.f[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 292u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026217Cu); st32((c.r[21].w[0] + 292u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0050(c, 261u, depth + 1u); else { c.pc = 0x002629D0u; return; } if (c.pc != 0x0026217Cu) [[unlikely]] return; }
L_0026217C:
    set32(c.r[4], ld32((c.r[19].w[0] + 216u)));
    c.f[12] = ld32((c.r[19].w[0] + 192u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026218Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 70u, depth + 1u); else { c.pc = 0x00260A30u; return; } if (c.pc != 0x0026218Cu) [[unlikely]] return; }
L_0026218C:
    st32((c.r[22].w[0]), 0u);
    st32((c.r[23].w[0]), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 544u)));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00262334; }
    set32(c.r[25], ld32((c.r[21].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002621B0u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002621B0u) [[unlikely]] return; }
L_002621B0:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    st32((c.r[29].w[0] + 160u), 0u);
    set32(c.r[5], c.r[21].w[0] + 96u);
    st32((c.r[29].w[0] + 164u), 0u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 168u), 0u);
    set32(c.r[7], 0u + 2u);
    st32((c.r[29].w[0] + 172u), c.r[8].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 200u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 174u)));
    c.f[0] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 172u)));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[29].w[0] + 188u), c.r[8].w[0]);
    st32((c.r[29].w[0] + 184u), 0u);
    st32((c.r[29].w[0] + 180u), c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262208u); st32((c.r[29].w[0] + 176u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 230u, depth + 1u); else { c.pc = 0x0018FAE0u; return; } if (c.pc != 0x00262208u) [[unlikely]] return; }
L_00262208:
    set32(c.r[2], ld32((c.r[18].w[0] + 544u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 544u)));  goto L_00262254; }
    c.f[1] = ld32((c.r[29].w[0] + 160u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00262250; } }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.r[16].d[0] = 0ull + 0ull;
    c.f[1] = ld32((c.r[18].w[0] + 16u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[21]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[20], c.f[1]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[22].w[0]), c.f[0]);
    c.budget -= 7;
L_00262250:
    set32(c.r[2], ld32((c.r[18].w[0] + 544u)));
    c.budget -= 1;
L_00262254:
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 544u)));  goto L_0026229C; }
    c.f[1] = ld32((c.r[29].w[0] + 164u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00262298; } }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.r[16].d[0] = 0ull + 0ull;
    c.f[1] = ld32((c.r[18].w[0] + 16u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[21]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[20], c.f[1]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[23].w[0]), c.f[0]);
    c.budget -= 7;
L_00262298:
    set32(c.r[2], ld32((c.r[18].w[0] + 544u)));
    c.budget -= 1;
L_0026229C:
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 544u)));  goto L_002622E8; }
    set32(c.r[2], 0u + 639u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 176u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002622E4; } }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.r[16].d[0] = 0ull + 0ull;
    c.f[1] = ld32((c.r[18].w[0] + 16u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[21]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[20], c.f[1]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[22].w[0]), c.f[0]);
    c.budget -= 7;
L_002622E4:
    set32(c.r[2], ld32((c.r[18].w[0] + 544u)));
    c.budget -= 1;
L_002622E8:
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00262330; } }
    set32(c.r[2], 0u + 479u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 180u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00262330; } }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.r[16].d[0] = 0ull + 0ull;
    c.f[1] = ld32((c.r[18].w[0] + 16u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[21]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[20], c.f[1]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[23].w[0]), c.f[0]);
    c.budget -= 7;
L_00262330:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00262334:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_00262370:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u - 257u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002623C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002623A0u);  if (depth < kMaxDepth) unit_0050(c, 255u, depth + 1u); else { c.pc = 0x002625C0u; return; } if (c.pc != 0x002623A0u) [[unlikely]] return; }
L_002623A0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002623B8; }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
L_002623B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002623C0u);  if (depth < kMaxDepth) unit_0050(c, 256u, depth + 1u); else { c.pc = 0x002628C0u; return; } if (c.pc != 0x002623C0u) [[unlikely]] return; }
L_002623C0:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 224u)));  goto L_002623F4; }
    set32(c.r[3], ld32((c.r[16].w[0] + 224u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 212u)));  goto L_0026240C; }
    set32(c.r[4], 0u + 20083u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002623ECu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x002623ECu) [[unlikely]] return; }
L_002623EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 224u), c.r[2].w[0]);  if (t) { goto L_00262408; } }
L_002623F4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00262408; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262404u);  if (depth < kMaxDepth) unit_0026(c, 25u, depth + 1u); else { c.pc = 0x001B81D0u; return; } if (c.pc != 0x00262404u) [[unlikely]] return; }
L_00262404:
    st32((c.r[16].w[0] + 224u), 0u);
    c.budget -= 1;
L_00262408:
    set32(c.r[5], ld32((c.r[16].w[0] + 212u)));
    c.budget -= 1;
L_0026240C:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00262448; }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[5].w[0] + 4u)));  goto L_00262434; }
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00262444; } }
L_00262434:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[5].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
L_00262444:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00262448:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00262460:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002624EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262484u);  if (depth < kMaxDepth) unit_0011(c, 107u, depth + 1u); else { c.pc = 0x00164CA0u; return; } if (c.pc != 0x00262484u) [[unlikely]] return; }
L_00262484:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026248Cu); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0011(c, 104u, depth + 1u); else { c.pc = 0x00164C60u; return; } if (c.pc != 0x0026248Cu) [[unlikely]] return; }
L_0026248C:
    c.f[2] = ld32((c.r[16].w[0] + 160u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[1] = ld32((c.r[16].w[0] + 164u));
    set32(c.r[4], 0u + 400u);
    c.f[0] = ld32((c.r[16].w[0] + 168u));
    set32(c.r[5], 0u + 60u);
    c.f[2] = fp::cvt_w_s(c.f[2]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[2]);
    set32(c.r[8], c.f[1]);
    set32(c.r[9], c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002624C4u); set32(c.r[6], c.r[6].w[0] - 8119u);  if (depth < kMaxDepth) unit_001B(c, 210u, depth + 1u); else { c.pc = 0x0018F2E0u; return; } if (c.pc != 0x002624C4u) [[unlikely]] return; }
L_002624C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002624CCu); c.f[12] = ld32((c.r[16].w[0] + 192u));  if (depth < kMaxDepth) unit_000B(c, 48u, depth + 1u); else { c.pc = 0x0014DF70u; return; } if (c.pc != 0x002624CCu) [[unlikely]] return; }
L_002624CC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 400u);
    set32(c.r[5], 0u + 72u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002624E4u); set32(c.r[6], c.r[6].w[0] - 8102u);  if (depth < kMaxDepth) unit_001B(c, 210u, depth + 1u); else { c.pc = 0x0018F2E0u; return; } if (c.pc != 0x002624E4u) [[unlikely]] return; }
L_002624E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002624ECu);  if (depth < kMaxDepth) unit_0011(c, 113u, depth + 1u); else { c.pc = 0x00164D10u; return; } if (c.pc != 0x002624ECu) [[unlikely]] return; }
L_002624EC:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002625A8; }
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], 0u + 3u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262514u); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 356u, depth + 1u); else { c.pc = 0x00207D10u; return; } if (c.pc != 0x00262514u) [[unlikely]] return; }
L_00262514:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026251Cu); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 149u, depth + 1u); else { c.pc = 0x001615A0u; return; } if (c.pc != 0x0026251Cu) [[unlikely]] return; }
    goto L_0026251C;
L_00262518:
    set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 1;
L_0026251C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262524u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x00262524u) [[unlikely]] return; }
L_00262524:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026252Cu); set32(c.r[4], 0u + 4109u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0026252Cu) [[unlikely]] return; }
L_0026252C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x433F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43010000u);
    st32((c.r[29].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[3], 0u + 447u);
    st32((c.r[29].w[0] + 36u), c.r[4].w[0]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[3], 0u + 321u);
    st32((c.r[29].w[0] + 40u), c.f[0]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[29].w[0] + 44u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 8192ull;
    c.budget -= 18;
    if (c.r[3].d[0] == 0ull) { c.f[12] = ld32((c.r[16].w[0] + 192u));  goto L_0026258C; }
    set32(c.r[6], ld32((c.r[16].w[0] + 204u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262584u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_004F(c, 257u, depth + 1u); else { c.pc = 0x0025E950u; return; } if (c.pc != 0x00262584u) [[unlikely]] return; }
L_00262584:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 48u);  if (t) { goto L_0026259C; } }
L_0026258C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262598u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_004F(c, 252u, depth + 1u); else { c.pc = 0x0025E890u; return; } if (c.pc != 0x00262598u) [[unlikely]] return; }
L_00262598:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 1;
L_0026259C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002625A4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0039(c, 362u, depth + 1u); else { c.pc = 0x00207E10u; return; } if (c.pc != 0x002625A4u) [[unlikely]] return; }
L_002625A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002625A8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002625C0:
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30632u)));
    c.f[0] = ld32((c.r[4].w[0] + 192u));
    c.r[3].d[0] = c.r[5].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.f[1] = ld32((c.r[4].w[0] + 168u));  if (t) { goto L_002625EC; } }
    c.f[8] = 0u;
    c.f[7] = c.f[8];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[6] = c.f[8];  if (t) { goto L_00262780; } }
L_002625EC:
    c.f[3] = ld32((c.r[2].w[0] + 184u));
    c.r[3].d[0] = c.r[5].d[0] & 16ull;
    c.f[4] = ld32((c.r[4].w[0] + 240u));
    c.f[2] = ld32((c.r[2].w[0] + 144u));
    c.f[3] = c.f[3] ^ fp::kSign;
    c.f[6] = fp::ee::mul(c.fcr31, c.f[4], c.f[3]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.f[7] = fp::ee::mul(c.fcr31, c.f[4], c.f[2]);  if (t) { goto L_0026263C; } }
    c.f[2] = 0u;
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[6]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00262628; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002628B0; } }
L_00262628:
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[7]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[6].d[0] = ld64((c.r[2].w[0] + 72u));  goto L_00262640; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002628B0; } }
L_0026263C:
    c.r[6].d[0] = ld64((c.r[2].w[0] + 72u));
    c.budget -= 1;
L_00262640:
    c.f[8] = 0u;
    c.r[3].d[0] = c.r[6].d[0] & 1ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[6].d[0] & 2ull;  goto L_0026268C; }
    c.r[3].d[0] = c.r[5].d[0] & 64ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 216u)));  goto L_00262668; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002628B0; } }
L_00262668:
    set32(c.r[5], 0u + 1u);
    st32((c.r[3].w[0] + 100u), c.r[5].w[0]);
    c.r[6].d[0] = ld64((c.r[2].w[0] + 72u));
    c.r[3].d[0] = c.r[6].d[0] & 2ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00262688; } }
    c.f[8] = ld32((c.r[4].w[0] + 244u));
    c.budget -= 1;
L_00262688:
    c.r[3].d[0] = c.r[6].d[0] & 2ull;
    c.budget -= 1;
L_0026268C:
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[6].d[0] & 2048ull;  goto L_002626D8; }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 216u)));  goto L_002626B0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002628B0; } }
L_002626B0:
    set32(c.r[5], 0u + 1u);
    st32((c.r[3].w[0] + 104u), c.r[5].w[0]);
    c.r[6].d[0] = ld64((c.r[2].w[0] + 72u));
    c.r[3].d[0] = c.r[6].d[0] & 1ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002626D4; } }
    c.f[2] = ld32((c.r[4].w[0] + 244u));
    c.f[8] = c.f[2] ^ fp::kSign;
    c.budget -= 2;
L_002626D4:
    c.r[3].d[0] = c.r[6].d[0] & 2048ull;
    c.budget -= 1;
L_002626D8:
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld64((c.r[2].w[0] + 72u));  goto L_0026272C; }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 216u)));  goto L_002626FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002628B0; } }
L_002626FC:
    set32(c.r[5], 0u + 1u);
    st32((c.r[3].w[0] + 120u), c.r[5].w[0]);
    c.r[3].d[0] = ld64((c.r[2].w[0] + 72u));
    c.r[3].d[0] = c.r[3].d[0] & 1024ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00262728; } }
    c.f[3] = ld32((c.r[4].w[0] + 192u));
    c.f[2] = ld32((c.r[28].w[0] - 31700u));
    c.f[2] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    st32((c.r[4].w[0] + 192u), c.f[2]);
    c.budget -= 4;
L_00262728:
    c.r[3].d[0] = ld64((c.r[2].w[0] + 72u));
    c.budget -= 1;
L_0026272C:
    c.r[3].d[0] = c.r[3].d[0] & 1024ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.f[4] = ld32((c.r[28].w[0] - 31708u));  goto L_00262784; }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 216u)));  goto L_00262754; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002628B0; } }
L_00262754:
    set32(c.r[5], 0u + 1u);
    st32((c.r[3].w[0] + 116u), c.r[5].w[0]);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 72u));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00262780; } }
    c.f[3] = ld32((c.r[4].w[0] + 192u));
    c.f[2] = ld32((c.r[28].w[0] - 31700u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    st32((c.r[4].w[0] + 192u), c.f[2]);
    c.budget -= 4;
L_00262780:
    c.f[4] = ld32((c.r[28].w[0] - 31708u));
    c.budget -= 1;
L_00262784:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[5] = c.r[2].w[0];
    c.f[3] = ld32((c.r[4].w[0] + 176u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.facc = fp::ee::mul(c.fcr31, c.f[6], c.f[2]);
    c.f[3] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[4]);
    st32((c.r[4].w[0] + 176u), c.f[3]);
    c.f[2] = ld32((c.r[4].w[0] + 160u));
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    st32((c.r[4].w[0] + 160u), c.f[2]);
    c.f[4] = ld32((c.r[28].w[0] - 31708u));
    c.f[3] = ld32((c.r[4].w[0] + 180u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.facc = fp::ee::mul(c.fcr31, c.f[7], c.f[2]);
    c.f[3] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[4]);
    st32((c.r[4].w[0] + 180u), c.f[3]);
    c.f[2] = ld32((c.r[4].w[0] + 164u));
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    st32((c.r[4].w[0] + 164u), c.f[2]);
    c.f[2] = ld32((c.r[4].w[0] + 168u));
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[8]);
    st32((c.r[4].w[0] + 168u), c.f[2]);
    c.f[3] = ld32((c.r[4].w[0] + 232u));
    c.f[2] = ld32((c.r[4].w[0] + 168u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[3]));
    c.budget -= 27;
    if (!(c.fcr31 & kFpuCondition)) { c.f[3] = ld32((c.r[4].w[0] + 236u));  goto L_002627F8; }
    st32((c.r[4].w[0] + 168u), c.f[3]);
    c.f[3] = ld32((c.r[4].w[0] + 236u));
    c.budget -= 2;
L_002627F8:
    c.f[2] = ld32((c.r[4].w[0] + 168u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[3]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[3] = ld32((c.r[4].w[0] + 168u));  goto L_00262810; }
    st32((c.r[4].w[0] + 168u), c.f[3]);
    c.f[3] = ld32((c.r[4].w[0] + 168u));
    c.budget -= 2;
L_00262810:
    c.f[2] = 0u;
    c.f[4] = fp::ee::sub(c.fcr31, c.f[3], c.f[1]);
    st32((c.r[4].w[0] + 184u), c.f[4]);
    c.f[1] = ld32((c.r[4].w[0] + 192u));
    c.f[3] = ld32((c.r[28].w[0] - 31704u));
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[3]);
    st32((c.r[4].w[0] + 192u), c.f[1]);
    c.f[2] = ld32((c.r[28].w[0] - 31696u));
    c.f[1] = ld32((c.r[4].w[0] + 192u));
    c.f[2] = c.f[2] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 15;
    if (!(c.fcr31 & kFpuCondition)) { c.f[2] = ld32((c.r[28].w[0] - 31696u));  goto L_00262854; }
    st32((c.r[4].w[0] + 192u), c.f[2]);
    c.f[2] = ld32((c.r[28].w[0] - 31696u));
    c.budget -= 2;
L_00262854:
    c.f[1] = ld32((c.r[4].w[0] + 192u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[2] = ld32((c.r[4].w[0] + 184u));  goto L_0026286C; }
    st32((c.r[4].w[0] + 192u), c.f[2]);
    c.f[2] = ld32((c.r[4].w[0] + 184u));
    c.budget -= 2;
L_0026286C:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[2]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[2], ld32((c.r[4].w[0] + 4u)));  goto L_00262894; }
    c.f[1] = ld32((c.r[4].w[0] + 192u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  goto L_002628A0; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 1;
L_00262894:
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_002628AC; } }
L_002628A0:
    set32(c.r[2], 0u - 257u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
L_002628AC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002628B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002628C0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00262978; } }
L_002628E4:
    set32(c.r[16], ld32((c.r[3].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00262964; } }
L_002628F0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[19].w[0] + 160u);
    set32(c.r[7], c.r[29].w[0] + 92u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262904u); set32(c.r[8], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_0050(c, 227u, depth + 1u); else { c.pc = 0x00261FE0u; return; } if (c.pc != 0x00262904u) [[unlikely]] return; }
L_00262904:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], ld32((c.r[16].w[0] + 548u)));  goto L_00262964; }
    c.f[2] = ld32((c.r[29].w[0] + 92u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[2]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[2] = ld32((c.r[29].w[0] + 88u));  goto L_00262938; }
    c.f[0] = ld32((c.r[19].w[0] + 160u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[19].w[0] + 160u), c.f[0]);
    st32((c.r[19].w[0] + 176u), c.f[1]);
    c.f[2] = ld32((c.r[29].w[0] + 88u));
    c.budget -= 5;
L_00262938:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[2]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[17], 0u + 1u);  goto L_00262960; }
    c.f[0] = ld32((c.r[19].w[0] + 164u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[19].w[0] + 164u), c.f[0]);
    st32((c.r[19].w[0] + 180u), c.f[1]);
    set32(c.r[17], 0u + 1u);
    c.budget -= 5;
L_00262960:
    set32(c.r[16], ld32((c.r[16].w[0] + 548u)));
    c.budget -= 1;
L_00262964:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002628F0u | kUnwind; return; } goto L_002628F0; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_00262988; }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00262978:
    c.r[3].d[0] = c.r[18].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 212u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002628E4u | kUnwind; return; } goto L_002628E4; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00262988:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002629A0:
    c.f[3] = ld32((c.r[4].w[0] + 232u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[2] = ld32((c.r[4].w[0] + 168u));
    c.f[1] = ld32((c.r[4].w[0] + 236u));
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[3]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[2], c.f[1]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  c.pc = t; return; }
L_002629D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002629E0u); c.f[12] = ld32((c.r[4].w[0] + 192u));  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x002629E0u) [[unlikely]] return; }
L_002629E0:
    c.f[1] = ld32((c.r[28].w[0] - 31692u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002629F4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002629F4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00262A00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00262BD8; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x433F0000u);  goto L_00262B34; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 208u)));  goto L_00262ADC; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00262A7C; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u - 1u);  goto L_00262A54; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00262C34; } }
L_00262A50:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_00262A54:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262A60u); st32((c.r[16].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0050(c, 219u, depth + 1u); else { c.pc = 0x00261EF0u; return; } if (c.pc != 0x00262A60u) [[unlikely]] return; }
L_00262A60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262A68u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 218u, depth + 1u); else { c.pc = 0x00261EB0u; return; } if (c.pc != 0x00262A68u) [[unlikely]] return; }
L_00262A68:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262A74u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x00262A74u) [[unlikely]] return; }
L_00262A74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00262C30; } }
L_00262A7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262A84u);  if (depth < kMaxDepth) unit_0050(c, 219u, depth + 1u); else { c.pc = 0x00261EF0u; return; } if (c.pc != 0x00262A84u) [[unlikely]] return; }
L_00262A84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262A8Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 218u, depth + 1u); else { c.pc = 0x00261EB0u; return; } if (c.pc != 0x00262A8Cu) [[unlikely]] return; }
L_00262A8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262A94u); set32(c.r[4], 0u + 360u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00262A94u) [[unlikely]] return; }
L_00262A94:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 208u), c.r[4].w[0]);  goto L_00262ACC; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 8091u);
    set32(c.r[7], c.r[7].w[0] - 8076u);
    set32(c.r[8], 0u + 1u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262AC4u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 368u, depth + 1u); else { c.pc = 0x00207EF0u; return; } if (c.pc != 0x00262AC4u) [[unlikely]] return; }
L_00262AC4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 208u), c.r[4].w[0]);
    c.budget -= 2;
L_00262ACC:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 208u)));
    c.budget -= 4;
L_00262ADC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00262C30; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00262B10; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 88u)));  goto L_00262B28; }
L_00262B10:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262B20u); set32(c.r[5], c.r[5].w[0] - 8061u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x00262B20u) [[unlikely]] return; }
L_00262B20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00262A50u | kUnwind; return; } goto L_00262A50; } }
L_00262B28:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x433F0000u);
    c.budget -= 3;
L_00262B34:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43010000u);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[4], 0u + 148u);
    set32(c.r[2], 0u + 447u);
    st32((c.r[29].w[0] + 36u), c.r[3].w[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], 0u + 321u);
    st32((c.r[29].w[0] + 40u), c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262B70u); st32((c.r[29].w[0] + 44u), c.f[0]);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00262B70u) [[unlikely]] return; }
L_00262B70:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 216u), c.r[2].w[0]);  goto L_00262B90; }
    set32(c.r[3], ld32((c.r[16].w[0] + 208u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[3].w[0] + 72u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262B8Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004F(c, 400u, depth + 1u); else { c.pc = 0x0025FD10u; return; } if (c.pc != 0x00262B8Cu) [[unlikely]] return; }
L_00262B8C:
    st32((c.r[16].w[0] + 216u), c.r[2].w[0]);
    c.budget -= 1;
L_00262B90:
    set32(c.r[4], 0u + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262B9Cu); st32((c.r[2].w[0] + 76u), 0u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00262B9Cu) [[unlikely]] return; }
L_00262B9C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 212u), c.r[4].w[0]);  goto L_00262BC4; }
    set32(c.r[2], ld32((c.r[16].w[0] + 208u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0] + 72u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262BBCu); set32(c.r[7], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0050(c, 76u, depth + 1u); else { c.pc = 0x00260C10u; return; } if (c.pc != 0x00262BBCu) [[unlikely]] return; }
L_00262BBC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 212u), c.r[4].w[0]);
    c.budget -= 2;
L_00262BC4:
    set32(c.r[3], ld32((c.r[16].w[0] + 228u)));
    st32((c.r[4].w[0] + 96u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 5;
L_00262BD8:
    set32(c.r[3], ld32((c.r[16].w[0] + 216u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00262C30; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 212u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00262C30; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 208u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00262C28; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00262C20u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00262C20u) [[unlikely]] return; }
L_00262C20:
    st32((c.r[16].w[0] + 208u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_00262C28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262C30u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x00262C30u) [[unlikely]] return; }
L_00262C30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00262C34:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00262C40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262C54u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 219u, depth + 1u); else { c.pc = 0x00261EF0u; return; } if (c.pc != 0x00262C54u) [[unlikely]] return; }
L_00262C54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262C5Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 218u, depth + 1u); else { c.pc = 0x00261EB0u; return; } if (c.pc != 0x00262C5Cu) [[unlikely]] return; }
L_00262C5C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262C68u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x00262C68u) [[unlikely]] return; }
L_00262C68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00262C80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 6;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[4].w[0] + 216u)));  goto L_00262CC0; }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 56u)));  goto L_00262CA8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00262CE0; } }
L_00262CA8:
    set32(c.r[3], ld32((c.r[4].w[0] + 216u)));
    st32((c.r[3].w[0] + 96u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 216u)));
    c.budget -= 6;
L_00262CC0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[5], ld32((c.r[5].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00262CDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262CDCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x00262CDCu) [[unlikely]] return; }
L_00262CDC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00262CE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00262CF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[1].d[0] = c.r[2].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00262D4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262D14u); set32(c.r[4], 0u + 261u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00262D14u) [[unlikely]] return; }
L_00262D14:
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262D20u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 329u, depth + 1u); else { c.pc = 0x001CABB0u; return; } if (c.pc != 0x00262D20u) [[unlikely]] return; }
L_00262D20:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 240u);  goto L_00262D48; }
    set32(c.r[3], ld32((c.r[2].w[0] + 156u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00262D44; } }
    set32(c.r[2], 0u + 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[2].w[0]);  if (t) { goto L_00262D4C; } }
L_00262D44:
    set32(c.r[2], 0u + 240u);
    c.budget -= 1;
L_00262D48:
    st32((c.r[16].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 1;
L_00262D4C:
    c.f[12] = ld32((c.r[16].w[0] + 60u));
    set32(c.r[6], ld32((c.r[16].w[0] + 76u)));
    c.f[13] = ld32((c.r[16].w[0] + 64u));
    set32(c.r[4], ld32((c.r[16].w[0] + 212u)));
    c.f[14] = ld32((c.r[16].w[0] + 68u));
    c.f[15] = ld32((c.r[16].w[0] + 72u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262D6Cu); set32(c.r[5], ld32((c.r[16].w[0] + 56u)));  if (depth < kMaxDepth) unit_0050(c, 112u, depth + 1u); else { c.pc = 0x00261040u; return; } if (c.pc != 0x00262D6Cu) [[unlikely]] return; }
L_00262D6C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262D78u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x00262D78u) [[unlikely]] return; }
L_00262D78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00262D90:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[4], 0u + 4109u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262DC8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00262DC8u) [[unlikely]] return; }
L_00262DC8:
    set32(c.r[3], ld32((c.r[21].w[0] + 52u)));
    c.r[3].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.r[20].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[20].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00262DE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[23], ld32((c.r[21].w[0] + 68u)));  if (t) { goto L_00262DE8; } }
L_00262DE4:
    c.r[23].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00262DE8:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { c.r[30].d[0] = 0ull + 0ull;  goto L_00262DFC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[30], ld32((c.r[21].w[0] + 72u)));  if (t) { goto L_00262DFC; } }
    c.r[30].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00262DFC:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_00262E10; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[21].w[0] + 76u)));  if (t) { goto L_00262E10; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00262E10:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[20].d[0] = 0ull + 0ull;  goto L_00262E28; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[21].w[0] + 88u)));  goto L_00262E2C; }
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00262E28:
    set32(c.r[4], ld32((c.r[21].w[0] + 88u)));
    c.budget -= 1;
L_00262E2C:
    set32(c.r[3], 0u + 21u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[21].w[0] + 220u)));  goto L_002633D0; }
    set32(c.r[3], 0u + 20u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 20u);  goto L_0026335C; }
    set32(c.r[3], 0u + 13u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_00263348; }
    set32(c.r[3], 0u + 12u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[21].w[0] + 56u)));  goto L_00263310; }
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[21].w[0] + 216u)));  goto L_002632A8; }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 10u);  goto L_00263294; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 2u);  goto L_00262F14; }
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[6].d[0]) { st32((c.r[21].w[0] + 200u), 0u);  goto L_00262EDC; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[7], ld32((c.r[21].w[0] + 4u)));  goto L_00262EA0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_00263430; } }
    set32(c.r[7], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 1;
L_00262EA0:
    set32(c.r[5], 0u - 8193u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10090000u);
    set32(c.r[3], 0u - 4105u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[7].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[2].d[0] | 4099ull;
    st32((c.r[21].w[0] + 4u), c.r[7].w[0]);
    c.r[2].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262EC8u); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002C(c, 39u, depth + 1u); else { c.pc = 0x001D0660u; return; } if (c.pc != 0x00262EC8u) [[unlikely]] return; }
L_00262EC8:
    set32(c.r[3], ld32((c.r[21].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_0026342C; } }
    st32((c.r[21].w[0] + 200u), 0u);
    c.budget -= 1;
L_00262EDC:
    set32(c.r[2], ld32((c.r[21].w[0] + 52u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 4u)));  goto L_00262EF8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[21].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 3;
L_00262EF8:
    set32(c.r[2], 0u - 1025u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 6;
L_00262F10:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_00262F14:
    set32(c.r[5], 0u + 1u);
    st32((c.r[21].w[0] + 88u), c.r[2].w[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[21].w[0] + 216u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262F2Cu); c.r[7].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 63u, depth + 1u); else { c.pc = 0x002608D0u; return; } if (c.pc != 0x00262F2Cu) [[unlikely]] return; }
L_00262F2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262F34u);  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x00262F34u) [[unlikely]] return; }
L_00262F34:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00263084; } }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 4u)));  goto L_00263088; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262F5Cu); c.r[8].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 322u, depth + 1u); else { c.pc = 0x001FBD20u; return; } if (c.pc != 0x00262F5Cu) [[unlikely]] return; }
L_00262F5C:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262F6Cu); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 332u, depth + 1u); else { c.pc = 0x001FBE70u; return; } if (c.pc != 0x00262F6Cu) [[unlikely]] return; }
L_00262F6C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 4u)));  goto L_00262F94; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262F88u); set32(c.r[5], c.r[5].w[0] - 8046u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x00262F88u) [[unlikely]] return; }
L_00262F88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00263084; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_00262F94:
    c.r[17].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_00262FC4; } }
L_00262FA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262FACu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 312u, depth + 1u); else { c.pc = 0x001FE700u; return; } if (c.pc != 0x00262FACu) [[unlikely]] return; }
L_00262FAC:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 4u)));  goto L_00262FD4; }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00262FC4:
    c.r[2].d[0] = c.r[17].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00262FA4u | kUnwind; return; } goto L_00262FA4; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_00262FD4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 48u)));  goto L_00263000; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262FF4u); set32(c.r[5], c.r[5].w[0] - 8007u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x00262FF4u) [[unlikely]] return; }
L_00262FF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u - 1u);  if (t) { goto L_00263034; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 48u)));
    c.budget -= 1;
L_00263000:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[18].w[0] + 32u);  if (t) { goto L_00263010; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[4].w[0])));  if (t) { goto L_00263034; } }
L_00263010:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[17].d[0] = 0ull + 0ull;  goto L_00263034; }
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[17], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00263034; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00263034:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263040u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 334u, depth + 1u); else { c.pc = 0x001FBEA0u; return; } if (c.pc != 0x00263040u) [[unlikely]] return; }
L_00263040:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] < 0;  if (t) { goto L_00263084; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263054u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x00263054u) [[unlikely]] return; }
L_00263054:
    set32(c.r[3], ld32((c.r[21].w[0] + 52u)));
    c.r[3].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 4u)));  goto L_00263074; }
    set32(c.r[3], ld32((c.r[21].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026342C; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 1;
L_00263074:
    c.r[3].d[0] = c.r[3].d[0] | 1024ull;
    st32((c.r[21].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026342C; } }
L_00263084:
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 1;
L_00263088:
    c.r[2].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] & 4ull;  goto L_002630D0; }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002630A0u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x002630A0u) [[unlikely]] return; }
L_002630A0:
    set32(c.r[3], ld32((c.r[21].w[0] + 52u)));
    c.r[3].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 4u)));  goto L_002630C0; }
    set32(c.r[3], ld32((c.r[21].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026342C; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 1;
L_002630C0:
    c.r[3].d[0] = c.r[3].d[0] | 1024ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0026342C; } }
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 1;
L_002630D0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 256u);  goto L_00263168; }
    goto L_002630D8;
L_002630D4:
    set32(c.r[4], 0u + 256u);
    c.budget -= 1;
L_002630D8:
    c.r[2].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00263164; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002630ECu); set32(c.r[4], 0u + 128u);  if (depth < kMaxDepth) unit_002B(c, 331u, depth + 1u); else { c.pc = 0x001CEDD0u; return; } if (c.pc != 0x002630ECu) [[unlikely]] return; }
L_002630EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00263164; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 216u)));  goto L_00263140; }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263110u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x00263110u) [[unlikely]] return; }
L_00263110:
    set32(c.r[3], ld32((c.r[21].w[0] + 52u)));
    c.budget -= 1;
L_00263114:
    c.r[3].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 4u)));  goto L_00263130; }
    set32(c.r[3], ld32((c.r[21].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026342C; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 1;
L_00263130:
    c.r[3].d[0] = c.r[3].d[0] | 1024ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0026342C; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 216u)));
    c.budget -= 1;
L_00263140:
    set32(c.r[4], 0u + 1u);
    st32((c.r[3].w[0] + 108u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 1024ull;
    st32((c.r[21].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[21].w[0] + 184u), 0u);
    st32((c.r[21].w[0] + 180u), 0u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 176u), 0u);  if (t) { goto L_00263290; } }
L_00263164:
    set32(c.r[4], 0u + 256u);
    c.budget -= 1;
L_00263168:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263170u);  if (depth < kMaxDepth) unit_002B(c, 331u, depth + 1u); else { c.pc = 0x001CEDD0u; return; } if (c.pc != 0x00263170u) [[unlikely]] return; }
L_00263170:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 4u)));  goto L_0026318C; }
    set32(c.r[2], ld32((c.r[21].w[0] + 216u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 112u), c.r[3].w[0]);  if (t) { goto L_00263358; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 1;
L_0026318C:
    c.r[3].d[0] = c.r[3].d[0] & 2048ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002631D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002631A0u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_002B(c, 331u, depth + 1u); else { c.pc = 0x001CEDD0u; return; } if (c.pc != 0x002631A0u) [[unlikely]] return; }
L_002631A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002631D4; } }
    set32(c.r[4], 0u + 2u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002631B8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x002631B8u) [[unlikely]] return; }
L_002631B8:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002631C4u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x002631C4u) [[unlikely]] return; }
L_002631C4:
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 1024ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0026342C; } }
L_002631D4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 27072u)));
    c.budget -= 4;
    if (c.r[3].sd[0] < 0) { set32(c.r[4], c.r[3].w[0] >> 1);  goto L_002631F4; }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0026320C; } }
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.budget -= 1;
L_002631F4:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 6;
L_0026320C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[21].w[0] + 200u));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[3].w[0] + 27140u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[2]);
    st32((c.r[21].w[0] + 200u), c.f[1]);
    c.f[1] = ld32((c.r[21].w[0] + 60u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[3], ld32((c.r[21].w[0] + 4u)));  goto L_0026324C; }
    c.f[0] = ld32((c.r[21].w[0] + 200u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_0026325C; }
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 1;
L_0026324C:
    c.r[3].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026342C; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_0026325C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263264u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x00263264u) [[unlikely]] return; }
L_00263264:
    set32(c.r[3], ld32((c.r[21].w[0] + 52u)));
    c.r[3].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 4u)));  goto L_00263284; }
    set32(c.r[3], ld32((c.r[21].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026342C; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 1;
L_00263284:
    c.r[3].d[0] = c.r[3].d[0] | 1024ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0026342C; } }
L_00263290:
    set32(c.r[3], 0u + 10u);
    c.budget -= 1;
L_00263294:
    st32((c.r[21].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_0026342C; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 216u)));
    c.budget -= 1;
L_002632A8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 92u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 216u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002632C4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0050(c, 63u, depth + 1u); else { c.pc = 0x002608D0u; return; } if (c.pc != 0x002632C4u) [[unlikely]] return; }
L_002632C4:
    set32(c.r[4], 0u + 20068u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002632D4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x002632D4u) [[unlikely]] return; }
L_002632D4:
    c.f[0] = ld32((c.r[21].w[0] + 192u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x100D0000u);
    set32(c.r[7], ld32((c.r[21].w[0] + 56u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[9], 0u + 1u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[29].w[0] + 176u), c.f[0]);
    set32(c.r[8], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002632FCu); c.r[6].d[0] = c.r[2].d[0] | 4096ull;  if (depth < kMaxDepth) unit_002C(c, 13u, depth + 1u); else { c.pc = 0x001D0190u; return; } if (c.pc != 0x002632FCu) [[unlikely]] return; }
L_002632FC:
    set32(c.r[3], ld32((c.r[21].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_0026342C; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 56u)));
    c.budget -= 1;
L_00263310:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10090000u);
    c.r[5].d[0] = c.r[2].d[0] | 4099ull;
    set32(c.r[6], 0u + 1u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[21].w[0] + 204u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263334u); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002C(c, 39u, depth + 1u); else { c.pc = 0x001D0660u; return; } if (c.pc != 0x00263334u) [[unlikely]] return; }
L_00263334:
    set32(c.r[3], ld32((c.r[21].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_0026342C; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_00263348:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263350u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x00263350u) [[unlikely]] return; }
L_00263350:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026342C; } }
L_00263358:
    set32(c.r[2], 0u + 20u);
    c.budget -= 1;
L_0026335C:
    set32(c.r[5], 0u + 1u);
    st32((c.r[21].w[0] + 88u), c.r[2].w[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 1024ull;
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 216u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263380u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0050(c, 63u, depth + 1u); else { c.pc = 0x002608D0u; return; } if (c.pc != 0x00263380u) [[unlikely]] return; }
L_00263380:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263388u); set32(c.r[4], 0u + 132u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00263388u) [[unlikely]] return; }
L_00263388:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[21].w[0] + 220u), c.r[4].w[0]);  goto L_002633C0; }
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], 0u + 3u);  goto L_002633B0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 4u);  if (t) { goto L_002633B0; } }
    set32(c.r[6], 0u + 3u);
    c.budget -= 1;
L_002633B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002633B8u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 90u, depth + 1u); else { c.pc = 0x0041C9D0u; return; } if (c.pc != 0x002633B8u) [[unlikely]] return; }
L_002633B8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[21].w[0] + 220u), c.r[4].w[0]);
    c.budget -= 2;
L_002633C0:
    set32(c.r[3], ld32((c.r[21].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[21].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 220u)));
    c.budget -= 4;
L_002633D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026342C; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 4u)));  goto L_00263404; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002633FCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002633FCu) [[unlikely]] return; }
L_002633FC:
    st32((c.r[21].w[0] + 220u), 0u);
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 2;
L_00263404:
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], 0u - 1025u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 216u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263424u); c.r[7].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 63u, depth + 1u); else { c.pc = 0x002608D0u; return; } if (c.pc != 0x00263424u) [[unlikely]] return; }
L_00263424:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00262F10u | kUnwind; return; } goto L_00262F10; } }
L_0026342C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_00263430:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_00263460:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[4], 0u + 261u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263480u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00263480u) [[unlikely]] return; }
L_00263480:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263488u); set32(c.r[4], 0u + 4109u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00263488u) [[unlikely]] return; }
L_00263488:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00263934; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00263750; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_002636E0; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 4u)));  goto L_002634C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00263944; } }
L_002634C0:
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 4u)));  goto L_002634E0; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002634D8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x002634D8u) [[unlikely]] return; }
L_002634D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00263940; } }
L_002634E0:
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 512ull;
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 1024ull;
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 216u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263500u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0050(c, 63u, depth + 1u); else { c.pc = 0x002608D0u; return; } if (c.pc != 0x00263500u) [[unlikely]] return; }
L_00263500:
    set32(c.r[2], ld32((c.r[17].w[0] + 216u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263514u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0033(c, 322u, depth + 1u); else { c.pc = 0x001EEC10u; return; } if (c.pc != 0x00263514u) [[unlikely]] return; }
L_00263514:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[2].w[0] + 224u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 292u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[2].w[0] + 292u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 216u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263540u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0033(c, 322u, depth + 1u); else { c.pc = 0x001EEC10u; return; } if (c.pc != 0x00263540u) [[unlikely]] return; }
L_00263540:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43700000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[2].w[0] + 228u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 292u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[2].w[0] + 292u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 216u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026356Cu); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0033(c, 322u, depth + 1u); else { c.pc = 0x001EEC10u; return; } if (c.pc != 0x0026356Cu) [[unlikely]] return; }
L_0026356C:
    set32(c.r[5], ld32((c.r[2].w[0] + 160u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] << 40;
    c.r[5].d[0] = c.r[5].d[0] >> 40;
    st32((c.r[2].w[0] + 160u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 164u)));
    c.r[5].d[0] = c.r[5].d[0] << 40;
    c.r[5].d[0] = c.r[5].d[0] >> 40;
    st32((c.r[2].w[0] + 164u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 168u)));
    c.r[5].d[0] = c.r[5].d[0] << 40;
    c.r[5].d[0] = c.r[5].d[0] >> 40;
    st32((c.r[2].w[0] + 168u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 172u)));
    c.r[5].d[0] = c.r[5].d[0] << 40;
    c.r[5].d[0] = c.r[5].d[0] >> 40;
    st32((c.r[2].w[0] + 172u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 216u)));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002635C0u); st32((c.r[2].w[0] + 92u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_004F(c, 268u, depth + 1u); else { c.pc = 0x0025ECF0u; return; } if (c.pc != 0x002635C0u) [[unlikely]] return; }
L_002635C0:
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x44FA0000u);  goto L_002635D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[17].w[0] + 56u));  if (t) { goto L_002635F0; } }
L_002635D4:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002635E0u);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x002635E0u) [[unlikely]] return; }
L_002635E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 4;
L_002635F0:
    st32((c.r[17].w[0] + 160u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x44FA0000u);  goto L_0026360C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[17].w[0] + 60u));  if (t) { goto L_00263628; } }
L_0026360C:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263618u);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x00263618u) [[unlikely]] return; }
L_00263618:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 4;
L_00263628:
    st32((c.r[17].w[0] + 164u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);  goto L_00263644; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[17].w[0] + 64u));  if (t) { goto L_00263660; } }
L_00263644:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263650u);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x00263650u) [[unlikely]] return; }
L_00263650:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437A0000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 4;
L_00263660:
    st32((c.r[17].w[0] + 168u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    c.r[2].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_0026367C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[17].w[0] + 68u));  if (t) { goto L_00263698; } }
L_0026367C:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263688u);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x00263688u) [[unlikely]] return; }
L_00263688:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40200000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 4;
L_00263698:
    st32((c.r[17].w[0] + 192u), c.f[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 216u)));
    c.f[12] = ld32((c.r[17].w[0] + 192u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002636ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0050(c, 70u, depth + 1u); else { c.pc = 0x00260A30u; return; } if (c.pc != 0x002636ACu) [[unlikely]] return; }
L_002636AC:
    st32((c.r[17].w[0] + 176u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 180u), 0u);
    set32(c.r[4], 0u + 20082u);
    st32((c.r[17].w[0] + 184u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 188u), c.r[2].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002636D4u); st32((c.r[17].w[0] + 200u), 0u);  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x002636D4u) [[unlikely]] return; }
L_002636D4:
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 3;
L_002636E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 27072u)));
    c.budget -= 4;
    if (c.r[3].sd[0] < 0) { set32(c.r[4], c.r[3].w[0] >> 1);  goto L_002636FC; }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[4] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00263714; } }
L_002636FC:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[4] = fp::cvt_s_w(c.f[0]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[4], c.f[4]);
    c.budget -= 6;
L_00263714:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.f[2] = ld32((c.r[17].w[0] + 200u));
    c.f[1] = 0u;
    c.f[3] = ld32((c.r[3].w[0] + 27140u));
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = c.r[4].w[0];
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[3]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[17].w[0] + 200u), c.f[2]);  if (t) { goto L_00263940; } }
    st32((c.r[17].w[0] + 200u), c.f[1]);
    set32(c.r[2], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 4;
L_00263750:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 27072u)));
    c.budget -= 4;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_0026376C; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[4] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00263784; } }
L_0026376C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[4] = fp::cvt_s_w(c.f[0]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[4], c.f[4]);
    c.budget -= 6;
L_00263784:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[2] = ld32((c.r[17].w[0] + 200u));
    c.f[1] = 0u;
    c.f[3] = ld32((c.r[2].w[0] + 27140u));
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[17].w[0] + 200u), c.f[1]);  if (t) { goto L_002637B4; } }
    st32((c.r[17].w[0] + 200u), c.f[0]);
    c.budget -= 1;
L_002637B4:
    c.f[0] = ld32((c.r[17].w[0] + 200u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[2], ld32((c.r[17].w[0] + 216u)));
    c.f[20] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[2].w[0] + 76u), c.f[20]);
    set32(c.r[2], ld32((c.r[17].w[0] + 216u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002637E0u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0033(c, 322u, depth + 1u); else { c.pc = 0x001EEC10u; return; } if (c.pc != 0x002637E0u) [[unlikely]] return; }
L_002637E0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_00263818; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[2].w[0] + 160u)));  if (t) { goto L_00263830; } }
L_00263818:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    set32(c.r[3], ld32((c.r[2].w[0] + 160u)));
    c.budget -= 6;
L_00263830:
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[4], c.r[4].w[0] << 24);
    c.r[3].d[0] = c.r[3].d[0] << 40;
    c.r[3].d[0] = c.r[3].d[0] >> 40;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[2].w[0] + 160u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].d[0] << 40;
    c.r[3].d[0] = c.r[3].d[0] >> 40;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[2].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 168u)));
    c.r[3].d[0] = c.r[3].d[0] << 40;
    c.r[3].d[0] = c.r[3].d[0] >> 40;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 172u)));
    c.r[3].d[0] = c.r[3].d[0] << 40;
    c.r[3].d[0] = c.r[3].d[0] >> 40;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[2].w[0] + 172u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 216u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263898u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0033(c, 322u, depth + 1u); else { c.pc = 0x001EEC10u; return; } if (c.pc != 0x00263898u) [[unlikely]] return; }
L_00263898:
    c.f[1] = ld32((c.r[28].w[0] - 32232u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[2] = ld32((c.r[28].w[0] - 32596u));
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[20] = fp::ee::msub(c.fcr31, c.facc, c.f[2], c.f[20]);
    st32((c.r[2].w[0] + 240u), c.f[20]);
    set32(c.r[4], ld32((c.r[2].w[0] + 292u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[2].w[0] + 292u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 216u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002638D8u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0033(c, 322u, depth + 1u); else { c.pc = 0x001EEC10u; return; } if (c.pc != 0x002638D8u) [[unlikely]] return; }
L_002638D8:
    st32((c.r[2].w[0] + 244u), c.f[20]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41800000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 292u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = c.r[3].w[0];
    c.r[3].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[2].w[0] + 292u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[17].w[0] + 200u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00263940; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10090000u);
    c.r[5].d[0] = c.r[2].d[0] | 4099ull;
    set32(c.r[6], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] | 32768ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263924u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002C(c, 39u, depth + 1u); else { c.pc = 0x001D0660u; return; } if (c.pc != 0x00263924u) [[unlikely]] return; }
L_00263924:
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_00263940; } }
L_00263934:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263940u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x00263940u) [[unlikely]] return; }
L_00263940:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00263944:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00263960:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], ld32((c.r[4].w[0] + 216u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.f[1] = ld32((c.r[5].w[0] + 92u));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002639BC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D800000u);
    c.f[0] = c.r[3].w[0];
    c.f[20] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 9;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[3], ld32((c.r[16].w[0] + 216u)));  goto L_002639F4; }
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002639B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x002639B4u) [[unlikely]] return; }
L_002639B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002639F0; } }
L_002639BC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3D800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[5].w[0];
    c.f[20] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002639F0; } }
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002639F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x002639F0u) [[unlikely]] return; }
    goto L_002639F0;
L_002639EC:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002639F0:
    set32(c.r[3], ld32((c.r[16].w[0] + 216u)));
    c.budget -= 1;
L_002639F4:
    st32((c.r[3].w[0] + 92u), c.f[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00263A10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 4110u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263A28u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 352u, depth + 1u); else { c.pc = 0x001CF1C0u; return; } if (c.pc != 0x00263A28u) [[unlikely]] return; }
L_00263A28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 20912u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263A3Cu); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0050(c, 356u, depth + 1u); else { c.pc = 0x00263AD0u; return; } if (c.pc != 0x00263A3Cu) [[unlikely]] return; }
L_00263A3C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263A4Cu); set32(c.r[5], c.r[5].w[0] - 7952u);  if (depth < kMaxDepth) unit_002C(c, 63u, depth + 1u); else { c.pc = 0x001D0A40u; return; } if (c.pc != 0x00263A4Cu) [[unlikely]] return; }
L_00263A4C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00263A60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00263AB0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 20912u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263A8Cu); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0050(c, 357u, depth + 1u); else { c.pc = 0x00263AF0u; return; } if (c.pc != 0x00263A8Cu) [[unlikely]] return; }
L_00263A8C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263A98u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 358u, depth + 1u); else { c.pc = 0x001CF260u; return; } if (c.pc != 0x00263A98u) [[unlikely]] return; }
L_00263A98:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00263AB4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263AB0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x00263AB0u) [[unlikely]] return; }
L_00263AB0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00263AB4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00263AD0:
    st32((c.r[4].w[0] + 148u), 0u);
    st32((c.r[4].w[0] + 152u), 0u);
    st32((c.r[4].w[0] + 156u), 0u);
    st32((c.r[4].w[0] + 164u), 0u);
    st32((c.r[4].w[0] + 168u), 0u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 160u), 0u);  c.pc = t; return; }
L_00263AF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 148u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 152u)));  goto L_00263B24; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00263B1Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00263B1Cu) [[unlikely]] return; }
L_00263B1C:
    st32((c.r[16].w[0] + 148u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 152u)));
    c.budget -= 2;
L_00263B24:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 156u)));  goto L_00263B4C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 152u), 0u);  goto L_00263B48; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00263B44u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00263B44u) [[unlikely]] return; }
L_00263B44:
    st32((c.r[16].w[0] + 152u), 0u);
    c.budget -= 1;
L_00263B48:
    set32(c.r[4], ld32((c.r[16].w[0] + 156u)));
    c.budget -= 1;
L_00263B4C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_00263B6C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00263B64u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00263B64u) [[unlikely]] return; }
L_00263B64:
    st32((c.r[16].w[0] + 156u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 2;
L_00263B6C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00263B90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00263C8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263BC0u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x00263BC0u) [[unlikely]] return; }
L_00263BC0:
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], 0u + 2u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00263BF4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00263BF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263BF4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00263BF4u) [[unlikely]] return; }
L_00263BF4:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0] + 8u), 0u);  goto L_00263C4C; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00263C48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263C10u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x00263C10u) [[unlikely]] return; }
L_00263C10:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00263C3C; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_00263C2C; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00263C3C; } }
L_00263C2C:
    set32(c.r[4], c.r[16].w[0] + 8u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263C3Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x00263C3Cu) [[unlikely]] return; }
L_00263C3C:
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[18].w[0] + 164u)));  if (t) { goto L_00263C50; } }
L_00263C48:
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 1;
L_00263C4C:
    set32(c.r[17], ld32((c.r[18].w[0] + 164u)));
    c.budget -= 1;
L_00263C50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263C58u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x00263C58u) [[unlikely]] return; }
L_00263C58:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00263C88; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00263C88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263C88u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00263C88u) [[unlikely]] return; }
L_00263C88:
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 1;
L_00263C8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00263CB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 152u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00263D08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263CD0u); set32(c.r[4], 0u + 4096u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00263CD0u) [[unlikely]] return; }
L_00263CD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263CD8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 221u, depth + 1u); else { c.pc = 0x00225F70u; return; } if (c.pc != 0x00263CD8u) [[unlikely]] return; }
L_00263CD8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 152u)));  goto L_00263CFC; }
    set32(c.r[5], ld32((c.r[16].w[0] + 152u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    set32(c.r[4], ld32((c.r[5].w[0] + 292u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 292u), c.r[3].w[0]);  if (t) { goto L_00263D08; } }
L_00263CFC:
    set32(c.r[3], ld32((c.r[4].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    st32((c.r[4].w[0] + 292u), c.r[3].w[0]);
    c.budget -= 3;
L_00263D08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00263D20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00263D94; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[4], 0u + 432u);  goto L_00263D4C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00263DB8; } }
L_00263D4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263D54u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00263D54u) [[unlikely]] return; }
L_00263D54:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 148u), c.r[4].w[0]);  goto L_00263D84; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 7815u);
    set32(c.r[7], c.r[7].w[0] - 7800u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263D7Cu); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0039(c, 289u, depth + 1u); else { c.pc = 0x00207460u; return; } if (c.pc != 0x00263D7Cu) [[unlikely]] return; }
L_00263D7C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 148u), c.r[4].w[0]);
    c.budget -= 2;
L_00263D84:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_00263DB4; } }
L_00263D94:
    set32(c.r[5], ld32((c.r[16].w[0] + 148u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], ld32((c.r[5].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00263DB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263DB4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x00263DB4u) [[unlikely]] return; }
L_00263DB4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00263DB8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00263DD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263DE4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 357u, depth + 1u); else { c.pc = 0x00263AF0u; return; } if (c.pc != 0x00263DE4u) [[unlikely]] return; }
L_00263DE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263DECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 356u, depth + 1u); else { c.pc = 0x00263AD0u; return; } if (c.pc != 0x00263DECu) [[unlikely]] return; }
L_00263DEC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263DF8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x00263DF8u) [[unlikely]] return; }
L_00263DF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00263E10:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00263EB4; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 56u)));  goto L_00263E40; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00263EC0; } }
L_00263E40:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[29].w[0] + 72u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0])));
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263E60u); st32((c.r[29].w[0] + 76u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x00263E60u) [[unlikely]] return; }
L_00263E60:
    set32(c.r[4], c.r[29].w[0] + 56u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263E6Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x00263E6Cu) [[unlikely]] return; }
L_00263E6C:
    set32(c.r[17], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263E7Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x00263E7Cu) [[unlikely]] return; }
L_00263E7C:
    set32(c.r[5], ld32((c.r[29].w[0] + 48u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x100E0000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 52u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 64u), c.r[5].w[0]);
    c.r[5].d[0] = c.r[2].d[0] | 4096ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263EA4u); st32((c.r[29].w[0] + 68u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_002C(c, 43u, depth + 1u); else { c.pc = 0x001D06E0u; return; } if (c.pc != 0x00263EA4u) [[unlikely]] return; }
L_00263EA4:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_00263EBC; } }
L_00263EB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263EBCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x00263EBCu) [[unlikely]] return; }
L_00263EBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00263EC0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00263ED0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263EECu); set32(c.r[4], 0u + 4109u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00263EECu) [[unlikely]] return; }
L_00263EEC:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], 0u + 31u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_0051(c, 30u, depth); } }
    set32(c.r[3], 0u + 30u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 30u);  [[clang::musttail]] return unit_0051(c, 27u, depth); }
    set32(c.r[3], 0u + 21u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);  [[clang::musttail]] return unit_0051(c, 24u, depth); }
    set32(c.r[3], 0u + 20u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 20u);  [[clang::musttail]] return unit_0051(c, 19u, depth); }
    set32(c.r[3], 0u + 16u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[17].w[0] + 156u)));  [[clang::musttail]] return unit_0051(c, 15u, depth); }
    set32(c.r[3], 0u + 15u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 15u);  [[clang::musttail]] return unit_0051(c, 9u, depth); }
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 164u)));  [[clang::musttail]] return unit_0051(c, 5u, depth); }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 10u);  goto L_00263FC8; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 56u)));  goto L_00263F60; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { [[clang::musttail]] return unit_0051(c, 32u, depth); } }
L_00263F60:
    st32((c.r[17].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00263F80; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0051(c, 26u, depth); } }
L_00263F80:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00263FB4; }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00263FB0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 164u)));
    c.r[1].d[0] = c.r[2].sd[0] < 1000ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0051(c, 8u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00263FC4; } }
L_00263FB0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00263FB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263FBCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x00263FBCu) [[unlikely]] return; }
L_00263FBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0051(c, 31u, depth); } }
L_00263FC4:
    set32(c.r[2], 0u + 10u);
    c.budget -= 1;
L_00263FC8:
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    c.budget -= 4;
    if (c.r[3].sd[0] < 0) { c.r[2].d[0] = 0ull + 0ull;  goto L_00263FF8; }
    c.r[2].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[3].w[0] << 2);  goto L_00263FF0; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00263FF8; } }
L_00263FF0:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 2;
L_00263FF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0051(c, 4u, depth); } }
    [[clang::musttail]] return unit_0051(c, 1u, depth);
}

}
