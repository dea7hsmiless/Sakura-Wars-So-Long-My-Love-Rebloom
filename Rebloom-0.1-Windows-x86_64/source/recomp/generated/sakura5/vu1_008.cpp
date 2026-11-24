#include "ps2/vu_ops.hpp"
#include <cstdio>

namespace gen {

using namespace ps2;
using namespace ps2::vuops;

void vu1_C7947536DB55F62B(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 2400u) & 16383u;
    (void)sh;
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i3 = r.vi[3];
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i6 = r.vi[6];
    std::uint16_t i7 = r.vi[7];
    std::uint16_t i8 = r.vi[8];
    std::uint16_t i9 = r.vi[9];
    std::uint16_t i10 = r.vi[10];
    std::uint16_t i11 = r.vi[11];
    std::uint16_t i12 = r.vi[12];
    std::uint16_t i13 = r.vi[13];
    std::uint16_t i15 = r.vi[15];
    goto L_0960;
L_00F8: { ++fl.t; set_vi(i1, 0u + 15u); }
L_0100: { ++fl.t; set_vi(i1, i8 & i1); }
L_0108: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1) + 4, 2); set_vi(i2, v); } }
L_0110: { ++fl.t; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; pendj = true; }
L_0118: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((288u + sh) & 16383u));
    return;
L_05F0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 131u) + 12, 2); set_vi(i3, v); } }
L_05F8: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 124u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0u})); } }
L_0600: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 129u); const std::uint32_t v = i4; std::memcpy(q + 12, &v, 4); } }
L_0608: { ++fl.t; pend = true; }
L_0610: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i3))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); } }
    if (pend) { pend = false; goto L_0AE8; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((1560u + sh) & 16383u));
    return;
L_0678: { ++fl.t; set_vi(i1, 0u + 27u); }
L_0680: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
L_0688: { ++fl.t; set_vi(i2, 0u + 0u); }
L_0690: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 124u) + 12, 2); set_vi(i1, v); } }
L_0698: { ++fl.t; pend = 0u != i4; }
L_06A0: { ++fl.t; set_vi(i4, i4 - 1u); }
    if (pend) { pend = false; goto L_06C0; }
L_06A8: { ++fl.t; set_vi(i3, 0u + 32703u); }
L_06B0: { ++fl.t; pend = true; }
L_06B8: { ++fl.t; set_vi(i1, i1 & i3); }
    if (pend) { pend = false; goto L_06E0; }
L_06C0: { ++fl.t; set_vi(i3, 0u + 64u); }
L_06C8: { ++fl.t; pend = 0u == i4; }
L_06D0: { ++fl.t; set_vi(i1, i1 | i3); }
    if (pend) { pend = false; goto L_06E0; }
L_06D8: { ++fl.t; set_vi(i2, 0u + 1u); }
L_06E0: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } }
L_06E8: { ++fl.t; set_vi(i3, 0u + i15); }
L_06F0: { ++fl.t; set_vi(i15, (((1776u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_06F8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
    if (pend) { pend = false; goto L_0AE8; }
L_0700: { ++fl.t; set_vi(i15, 0u + i3); }
L_0708: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 130u); const std::uint32_t v = i2; std::memcpy(q + 12, &v, 4); } }
L_0710: { ++fl.t; pend = true; }
L_0718: { ++fl.t; { const std::uint8_t *q = qword(mem, i2 + 131u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } }
    if (pend) { pend = false; goto L_0AE8; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((1824u + sh) & 16383u));
    return;
L_0960: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 24u); vstore(r.vf[15], vsel(vload(r.vf[15]), vload_ptr(q), v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); } }
L_0968: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[1], q, 16); set_vi(i13, i13 + 1u); } }
L_0970: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[2], q, 16); set_vi(i13, i13 + 1u); } }
L_0978: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[3], q, 16); set_vi(i13, i13 + 1u); } }
L_0980: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[4], q, 16); set_vi(i13, i13 + 1u); } }
L_0988: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[5], q, 16); set_vi(i13, i13 + 1u); } }
L_0990: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[6], q, 16); set_vi(i13, i13 + 1u); } }
L_0998: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[7], q, 16); set_vi(i13, i13 + 1u); } }
L_09A0: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[8], q, 16); set_vi(i13, i13 + 1u); } }
L_09A8: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[9], q, 16); set_vi(i13, i13 + 1u); } }
L_09B0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 128u); std::memcpy(q + 0, &r.vf[16].w[0], 4); std::memcpy(q + 4, &r.vf[16].w[1], 4); std::memcpy(q + 8, &r.vf[16].w[2], 4); } }
L_09B8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 129u); std::memcpy(q + 0, &r.vf[17].w[0], 4); std::memcpy(q + 4, &r.vf[17].w[1], 4); std::memcpy(q + 8, &r.vf[17].w[2], 4); } }
L_09C0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 130u); std::memcpy(q + 0, &r.vf[1].w[0], 4); std::memcpy(q + 4, &r.vf[1].w[1], 4); std::memcpy(q + 8, &r.vf[1].w[2], 4); } }
L_09C8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
L_09D0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 125u); std::memcpy(q + 0, &r.vf[3].w[0], 4); std::memcpy(q + 4, &r.vf[3].w[1], 4); std::memcpy(q + 8, &r.vf[3].w[2], 4); } }
L_09D8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); std::memcpy(q + 8, &r.vf[4].w[2], 4); } }
L_09E0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); std::memcpy(q + 0, &r.vf[5].w[0], 4); std::memcpy(q + 4, &r.vf[5].w[1], 4); std::memcpy(q + 8, &r.vf[5].w[2], 4); } }
L_09E8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 131u); std::memcpy(q + 0, &r.vf[6].w[0], 4); std::memcpy(q + 4, &r.vf[6].w[1], 4); std::memcpy(q + 8, &r.vf[6].w[2], 4); } }
L_09F0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 132u); std::memcpy(q + 0, &r.vf[7].w[0], 4); std::memcpy(q + 4, &r.vf[7].w[1], 4); std::memcpy(q + 8, &r.vf[7].w[2], 4); } }
L_09F8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 128u) + 12, 2); set_vi(i1, v); } }
L_0A00: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 129u) + 12, 2); set_vi(i2, v); } }
L_0A08: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 130u) + 12, 2); set_vi(i3, v); } }
L_0A10: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 131u) + 12, 2); set_vi(i4, v); } }
L_0A18: { ++fl.t; set_vi(i10, 0u + 5u); }
L_0A20: { ++fl.t; set_vi(i9, 0u + i12); }
L_0A28: { ++fl.t; { const std::uint8_t *q = qword(mem, i1 + 128u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } }
L_0A30: { ++fl.t; { const std::uint8_t *q = qword(mem, i2 + 124u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0u})); } }
L_0A38: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i4))); vstore(r.vf[2], vsel(vload(r.vf[2]), vsplat(v), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); } }
L_0A40: { ++fl.t; { const std::uint8_t *q = qword(mem, i3 + 131u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } }
L_0A48: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_0A50: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_0A58: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); set_vi(i12, i12 + 1u); } }
L_0A60: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 0, &r.vf[1].w[0], 4); std::memcpy(q + 4, &r.vf[1].w[1], 4); std::memcpy(q + 8, &r.vf[1].w[2], 4); set_vi(i12, i12 + 1u); } }
L_0A68: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 0, &r.vf[3].w[0], 4); std::memcpy(q + 4, &r.vf[3].w[1], 4); std::memcpy(q + 8, &r.vf[3].w[2], 4); set_vi(i12, i12 + 1u); } }
L_0A70: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 0, &r.vf[8].w[0], 4); std::memcpy(q + 4, &r.vf[8].w[1], 4); std::memcpy(q + 8, &r.vf[8].w[2], 4); set_vi(i12, i12 + 1u); } }
L_0A78: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 0, &r.vf[9].w[0], 4); std::memcpy(q + 4, &r.vf[9].w[1], 4); std::memcpy(q + 8, &r.vf[9].w[2], 4); set_vi(i12, i12 + 1u); } }
L_0A80: { ++fl.t; set_vi(i15, (((2688u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0A88: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 36u) + 8, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0678; }
L_0A90: { ++fl.t; set_vi(i15, (((2704u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0A98: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 34u) + 12, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_05F0; }
L_0AA0: { ++fl.t; set_vi(i1, i11 - i12); }
L_0AA8: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[16], q, 16); set_vi(i13, i13 + 1u); } }
L_0AB0: { ++fl.t; pend = static_cast<std::int16_t>(i1) > 0; }
L_0AB8: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[17], q, 16); set_vi(i13, i13 + 1u); } }
    if (pend) { pend = false; goto L_0AD0; }
L_0AC0: { ++fl.t; set_vi(i15, (((2752u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0AC8: { ++fl.t; }
    if (pend) { pend = false; goto L_0B18; }
L_0AD0: { ++fl.t; set_vi(i7, i8 + 0u); }
L_0AD8: { ++fl.t; pend = true; }
L_0AE0: { ++fl.t; set_vi(i15, 0u + 301u); }
    if (pend) { pend = false; goto L_0C38; }
L_0AE8: { ++fl.t; set_vi(i10, 0u + 1u); }
L_0AF0: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_0AF8: { ++fl.t; set_vi(i9, 0u + i12); }
L_0B00: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_0B08: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0B10: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q, &r.vf[4], 16); set_vi(i12, i12 + 1u); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0B18: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 114u) + 12, 2); set_vi(i3, v); } }
L_0B20: { ++fl.t; set_vi(i2, 0u + 32767u); }
L_0B28: { ++fl.t; set_vi(i2, i2 + 1u); }
L_0B30: { ++fl.t; set_vi(i2, i10 | i2); }
L_0B38: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 0u) + 12, 2); set_vi(i1, v); } }
L_0B40: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i2; std::memcpy(q + 0, &v, 4); } }
L_0B48: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 2u) + 12, 2); set_vi(i3, v); } }
L_0B50: { ++fl.t; }
L_0B58: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0B60: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 2u) + 12, 2); set_vi(i12, v); } }
L_0B68: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 4u) + 12, 2); set_vi(i11, v); } }
L_0B70: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0B78: { ++fl.t; vu::kick(1, i3); }
    if (pendj) { pendj = false; goto dispatch; }
L_0B80: { ++fl.t; ending = true; }
L_0B88: { ++fl.t; }
    if (ending) { fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; r.tpc = ((2960u + sh) & 16383u); return; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((2960u + sh) & 16383u));
    return;
L_0C38: { ++fl.t; pend = static_cast<std::int16_t>(i8) < 0; }
L_0C40: { ++fl.t; set_vi(i8, r.vf[16].w[3]); }
    if (pend) { pend = false; goto L_0C58; }
L_0C48: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0C50: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0C58: { ++fl.t; set_vi(i6, 0u + 4096u); }
L_0C60: { ++fl.t; set_vi(i1, i7 & i6); }
L_0C68: { ++fl.t; set_vi(i6, 0u + 2048u); }
L_0C70: { ++fl.t; set_vi(i6, i7 & i6); }
L_0C78: { ++fl.t; pend = 0u == i1; }
L_0C80: { ++fl.t; set_vi(i1, 0u + i15); }
    if (pend) { pend = false; goto L_0C98; }
L_0C88: { ++fl.t; set_vi(i15, (((3208u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0C90: { ++fl.t; }
    if (pend) { pend = false; goto L_0B80; }
L_0C98: { ++fl.t; pend = 0u != i6; }
L_0CA0: { ++fl.t; set_vi(i15, 0u + i1); }
    if (pend) { pend = false; goto L_00F8; }
L_0CA8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0CB0: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((3256u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

template <bool kSticky>
static void vu1_BC03FA29EFDE8380_s(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 15864u) & 16383u;
    (void)sh;
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i3 = r.vi[3];
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i9 = r.vi[9];
    std::uint16_t i10 = r.vi[10];
    std::uint16_t i11 = r.vi[11];
    std::uint16_t i12 = r.vi[12];
    std::uint16_t i14 = r.vi[14];
    std::uint16_t i15 = r.vi[15];
    goto L_3DF8;
L_0000: { ++fl.t; set_vi(i14, 0u + 960u); }
L_0008: { ++fl.t; r.i = 1124073472u; }
L_0010: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vfix(vsplat(r.i))); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.push_last<1u, kSticky>(uv); }
L_0018: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 128u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0020: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 129u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0028: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 130u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0030: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 133u); std::memcpy(q + 12, &r.vf[1].w[3], 4); } }
L_0038: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 37u) + 4, 2); set_vi(i2, v); } }
L_0040: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0048: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 2u) + 12, 2); set_vi(i12, v); } }
L_0050: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 4u) + 12, 2); set_vi(i11, v); } }
L_0058: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 131u); const std::uint32_t v = i2; std::memcpy(q + 12, &v, 4); } }
L_0060: { ++fl.t; set_vi(i3, 0u + 27u); }
L_0068: { ++fl.t; vu::kick(1, i3); }
L_0070: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 24u); vstore(r.vf[15], vsel(vload(r.vf[15]), vload_ptr(q), v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); } }
L_0078: { ++fl.t; set_vi(i1, 0u + 8u); }
L_0080: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0088: { ++fl.t; set_vi(i1, 0u + 26u); }
L_0090: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(0u))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } }
L_0098: { ++fl.t; set_vi(i15, (((152u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_00A0: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
    if (pend) { pend = false; goto L_0AE8; }
L_00A8: { ++fl.t; set_vi(i15, (((168u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_00B0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 35u) + 8, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0530; }
L_00B8: { ++fl.t; set_vi(i15, (((184u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_00C0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 8, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0618; }
L_00C8: { ++fl.t; ending = true; }
L_00D0: { ++fl.t; }
    if (ending) { fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; r.tpc = ((216u + sh) & 16383u); return; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, ((216u + sh) & 16383u));
    return;
L_0530: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 124u) + 12, 2); set_vi(i1, v); } }
L_0538: { ++fl.t; pend = 0u != i4; }
L_0540: { ++fl.t; r.i = 1132396544u; }
    if (pend) { pend = false; goto L_0568; }
L_0548: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 32751u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.push_last<1u, kSticky>(uv); }
L_0550: { ++fl.t; set_vi(i1, i1 & i3); }
L_0558: { ++fl.t; pend = true; }
L_0560: { ++fl.t; set_vi(i3, 0u + 0u); }
    if (pend) { pend = false; goto L_0588; }
L_0568: { ++fl.t; r.i = 1124073472u; }
L_0570: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 16u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.push_last<1u, kSticky>(uv); }
L_0578: { ++fl.t; set_vi(i1, i1 | i3); }
L_0580: { ++fl.t; set_vi(i3, 0u + 1u); }
L_0588: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 134u); const std::uint32_t v = i3; std::memcpy(q + 8, &v, 4); } }
L_0590: { ++fl.t; set_vi(i3, 0u + 27u); }
L_0598: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } }
L_05A0: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(r.vf[1].w[3])); { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i3))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); }
L_05A8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_05B0: { ++fl.t; pend = true; }
L_05B8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 133u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
    if (pend) { pend = false; goto L_0AE8; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, ((1472u + sh) & 16383u));
    return;
L_0618: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 124u) + 12, 2); set_vi(i1, v); } }
L_0620: { ++fl.t; pend = 0u != i4; }
L_0628: { ++fl.t; set_vi(i2, 0u + 27u); }
    if (pend) { pend = false; goto L_0648; }
L_0630: { ++fl.t; set_vi(i3, 0u + 32735u); }
L_0638: { ++fl.t; pend = true; }
L_0640: { ++fl.t; set_vi(i1, i1 & i3); }
    if (pend) { pend = false; goto L_0658; }
L_0648: { ++fl.t; set_vi(i3, 0u + 32u); }
L_0650: { ++fl.t; set_vi(i1, i1 | i3); }
L_0658: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } }
L_0660: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i2))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
L_0668: { ++fl.t; pend = true; }
L_0670: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
    if (pend) { pend = false; goto L_0AE8; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, ((1656u + sh) & 16383u));
    return;
L_0AE8: { ++fl.t; set_vi(i10, 0u + 1u); }
L_0AF0: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_0AF8: { ++fl.t; set_vi(i9, 0u + i12); }
L_0B00: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_0B08: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0B10: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q, &r.vf[4], 16); set_vi(i12, i12 + 1u); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, ((2840u + sh) & 16383u));
    return;
L_3DF8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3E00: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3E08: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3E10: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3E18: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3E20: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3E28: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3E30: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3E38: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3E40: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3E48: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3E50: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3E58: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3E60: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3E68: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3E70: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3E78: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3E80: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3E88: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3E90: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3E98: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3EA0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3EA8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3EB0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3EB8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3EC0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3EC8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3ED0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3ED8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3EE0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3EE8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3EF0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3EF8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3F00: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3F08: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3F10: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3F18: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3F20: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3F28: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3F30: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3F38: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3F40: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3F48: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3F50: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3F58: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3F60: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3F68: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3F70: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3F78: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3F80: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3F88: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3F90: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3F98: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3FA0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3FA8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3FB0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3FB8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3FC0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3FC8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3FD0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3FD8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3FE0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3FE8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3FF0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3FF8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

static __attribute__((noinline, cold)) void vu1_BC03FA29EFDE8380_c(Vu0Regs &r, std::uint8_t *mem) { vu1_BC03FA29EFDE8380_s<true>(r, mem); }

void vu1_BC03FA29EFDE8380(Vu0Regs &r, std::uint8_t *mem) {
    if ((r.status & 0xC0u) == 0xC0u) vu1_BC03FA29EFDE8380_s<false>(r, mem);
    else vu1_BC03FA29EFDE8380_c(r, mem);
}

template <bool kSticky>
PS2_VU_BODY void vu1_E4CD26F2EC1C6690_b(Vu0Regs &r, std::uint8_t *mem, VuDaz &daz, std::uint32_t &hop) {
    (void)daz;
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 512u) & 16383u;
    (void)sh;
    v4u n1 = vshadow(r.vf[1]);
    v4u n2 = vshadow(r.vf[2]);
    v4u n3 = vshadow(r.vf[3]);
    v4u n4 = vshadow(r.vf[4]);
    v4u n5 = vshadow(r.vf[5]);
    v4u n6 = vshadow(r.vf[6]);
    v4u n7 = vshadow(r.vf[7]);
    v4u n16 = vshadow(r.vf[16]);
    v4u n17 = vshadow(r.vf[17]);
    v4u n18 = vshadow(r.vf[18]);
    v4u n19 = vshadow(r.vf[19]);
    v4u n20 = vshadow(r.vf[20]);
    v4u n21 = vshadow(r.vf[21]);
    v4u n22 = vshadow(r.vf[22]);
    v4u n23 = vshadow(r.vf[23]);
    v4u n24 = vshadow(r.vf[24]);
    v4u n25 = vshadow(r.vf[25]);
    v4u n27 = vshadow(r.vf[27]);
    v4u n28 = vshadow(r.vf[28]);
    v4u n29 = vshadow(r.vf[29]);
    v4u n30 = vshadow(r.vf[30]);
    v4u n31 = vshadow(r.vf[31]);
    v4u nacc = vshadow(r.acc);
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i3 = r.vi[3];
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i5 = r.vi[5];
    std::uint16_t i6 = r.vi[6];
    std::uint16_t i8 = r.vi[8];
    std::uint16_t i9 = r.vi[9];
    std::uint16_t i10 = r.vi[10];
    std::uint16_t i11 = r.vi[11];
    std::uint16_t i12 = r.vi[12];
    std::uint16_t i13 = r.vi[13];
    std::uint16_t i15 = r.vi[15];
    goto L_0200;
L_00F8: { ++fl.t; set_vi(i1, 0u + 15u); }
L_0100: { ++fl.t; set_vi(i1, i8 & i1); }
L_0108: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1) + 4, 2); set_vi(i2, v); } }
L_0110: { ++fl.t; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; pendj = true; }
L_0118: { ++fl.t; }
    if (pendj) { pendj = false; vflush(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflush(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflush(r.vf[27], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
    vflush(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflush(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflush(r.vf[27], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((288u + sh) & 16383u));
    return;
L_01C8: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n27[3])); { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[18], q, 16); set_vi(i13, i13 + 1u); } vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n18 = vshadow(r.vf[18]); n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_01D0: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[19], q, 16); set_vi(i13, i13 + 1u); } vstore(r.vf[2], uv); n19 = vshadow(r.vf[19]); n2 = vshadow(r.vf[2]); }
L_01D8: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vsplat(n20[2])); { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[16], q, 16); set_vi(i13, i13 + 1u); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n16 = vshadow(r.vf[16]); nacc = vsel(nacc, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_01E0: { ++fl.t; const v4u uv = vmuld(n17, vsplat(n17[3])); { const v4u m = vload(r.vf[17]); vstore(r.vf[1], vsel(vload(r.vf[1]), v4u{m[1], m[2], m[3], m[0]}, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n1 = vshadow(r.vf[1]); n3 = vsel(n3, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_01E8: { ++fl.t; vflushd(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); const v4u uv = vmax(vload(r.vf[25]), vsplat(r.vf[21].w[3])); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n25 = vshadow(r.vf[25]); }
L_01F0: { ++fl.t; const v4u uv = vmaddd(nacc, n20, vsplat(n27[2])); vstore(r.vf[17], vsel(vload(r.vf[17]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n17 = vsel(n17, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_01F8: { ++fl.t; const v4u uv = vsubd(n24, vsplat(n27[2])); set_vi(i1, 0u + 16u); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.push<1u, kSticky>(uv); }
    vflushd(r.vf[7], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[17], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[27], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); 
L_0200: { ++fl.t; const v4u uv = vsubd(n27, n24); { const v4u m = vload(r.vf[1]); vstore(r.vf[6], vsel(vload(r.vf[6]), v4u{m[1], m[2], m[3], m[0]}, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); } vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.push<2u, kSticky>(uv); n6 = vshadow(r.vf[6]); n27 = vsel(n27, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_0208: { ++fl.t; const v4u uv = vmuld(n21, n25); set_vi(i4, 0u + 32u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0210: { ++fl.t; const v4u uv = vmuld(n17, n25); set_vi(i2, i12 + 0u); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.push<12u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_0218: { ++fl.t; const v4u uv = vmax(vload(r.vf[17]), vsplat(r.vf[20].w[1])); set_vi(i3, (fl.mac() & 0xFFFFu) == i1 ? 1u : 0u); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); }
L_0220: { ++fl.t; const v4u uv = vmuld(n6, vsplat(n6[3])); set_vi(i4, (fl.mac() & 0xFFFFu) == i4 ? 1u : 0u); vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n4 = vsel(n4, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0228: { ++fl.t; const v4u uv = vmuld(n1, n27); { const std::uint8_t *q = qword(mem, 0u + 44u); vstore(r.vf[17], vsel(vload(r.vf[17]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.stick<12u, kSticky>(uv); n17 = vshadow(r.vf[17]); n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_0230: { ++fl.t; vflushd(r.vf[1], v4u{0u, 0u, 0xFFFFFFFFu, 0u}); const v4u uv = vmuld(n24, n7); vstore(r.vf[25], vsel(vload(r.vf[25]), vload(r.vf[1]), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n25 = vshadow(r.vf[25]); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0238: { ++fl.t; const v4u uv = vmaddd(nacc, n24, vsplat(n7[1])); vstore(r.vf[4], vsel(vload(r.vf[4]), vload(r.vf[0]), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n4 = vshadow(r.vf[4]); n27 = vsel(n27, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0240: { ++fl.t; const v4u uv = vmuld(n28, vsplat(n16[0])); set_vi(i3, i3 | i4); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0248: { ++fl.t; vflushd(r.vf[27], v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0u}); const v4u uv = vmaddd(nacc, n29, vsplat(n16[1])); { const v4u m = vload(r.vf[27]); vstore(r.vf[2], vsel(vload(r.vf[2]), v4u{m[1], m[2], m[3], m[0]}, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); n2 = vshadow(r.vf[2]); nacc = uv; }
L_0250: { ++fl.t; const v4u uv = vmaddd(nacc, n30, vsplat(n16[2])); set_vi(i12, i12 + 12u); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0258: { ++fl.t; const v4u uv = vsubd(n17, vsplat(n27[0])); set_vi(i10, i10 + 4u); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.push<1u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0260: { ++fl.t; const v4u uv = vaddd(nacc, (v4u)((v4f)n31 * (v4f)vsplat(0x3F800000u))); vstore(r.vf[5], vsel(vload(r.vf[5]), vload(r.vf[0]), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n5 = vshadow(r.vf[5]); n27 = vsel(n27, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0268: { ++fl.t; const v4u uv = vmuld(n6, vsplat(n6[2])); r.clip = 0u; fl.set_clip(r.clip, fl.t - 4u); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.push<4u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_0270: { ++fl.t; const v4u uv = vmuld(n17, vsplat(n17[2])); { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[17], q, 16); set_vi(i13, i13 + 1u); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.push<8u, kSticky>(uv); n17 = vshadow(r.vf[17]); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0278: { ++fl.t; const v4u uv = vmuld(n19, vsplat(n27[3])); set_vi(i1, (fl.mac() & 0xFFFFu) == i1 ? 1u : 0u); vstore(r.vf[6], uv); fl.stick<15u, kSticky>(uv); n6 = uv; }
L_0280: { ++fl.t; vflushd(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vmin(vload(r.vf[26]), vsplat(r.vf[20].w[0])); vefu(daz.csr, r, 115u, 27u, 2u); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n25 = vshadow(r.vf[25]); }
L_0288: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[25], r.vf[2].w[3]); set_vi(i3, i3 | i1); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_0290: { ++fl.t; const v4u uv = vmsubd(nacc, n2, vsplat(n3[1])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[15].w[0], r.vf[27].w[2]); fl.end_q(r, qb, 7u); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0298: { ++fl.t; vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vmsubd(nacc, n2, vsplat(n4[0])); { const v4u m = vload(r.vf[6]); vstore(r.vf[7], vsel(vload(r.vf[7]), v4u{m[1], m[2], m[3], m[0]}, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n7 = vshadow(r.vf[7]); n4 = vsel(n4, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_02A0: { ++fl.t; const v4u uv = vmaddd(nacc, n2, vsplat(n4[0])); { const v4u m = vload(r.vf[27]); vstore(r.vf[6], vsel(vload(r.vf[6]), v4u{m[1], m[2], m[3], m[0]}, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n6 = vshadow(r.vf[6]); n5 = vsel(n5, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_02A8: { ++fl.t; const v4u uv = vmaddd(nacc, n2, vsplat(n3[1])); set_vi(i1, (fl.clip() & 15u) ? 1u : 0u); vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n4 = vsel(n4, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_02B0: { ++fl.t; const v4u uv = vaddd(n25, n22); set_vi(i1, i3 | i1); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_02B8: { ++fl.t; const v4u uv = vitof(vload(r.vf[18]), 12); { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 25u) + 12, 2); set_vi(i1, v); } vstore(r.vf[18], uv); n18 = vshadow(r.vf[18]); }
L_02C0: { ++fl.t; vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); const v4u uv = vftoi(vload(r.vf[25]), 4); { const v4u m = vload(r.vf[7]); vstore(r.vf[2], vsel(vload(r.vf[2]), v4u{m[1], m[2], m[3], m[0]}, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n2 = vshadow(r.vf[2]); }
L_02C8: { ++fl.t; const v4u uv = vmaddd(nacc, n4, n1); { std::uint8_t *q = qword(mem, i2 + 0u); std::memcpy(q + 0, &r.vf[6].w[0], 4); std::memcpy(q + 4, &r.vf[6].w[1], 4); std::memcpy(q + 8, &r.vf[6].w[2], 4); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_02D0: { ++fl.t; const v4u uv = vmsubd(nacc, n4, n1); { std::uint8_t *q = qword(mem, i2 + 6u); std::memcpy(q + 4, &r.vf[6].w[1], 4); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n4 = vsel(n4, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_02D8: { ++fl.t; const v4u uv = vmuld(n18, n23); { std::uint8_t *q = qword(mem, i2 + 3u); std::memcpy(q + 0, &r.vf[6].w[0], 4); std::memcpy(q + 8, &r.vf[6].w[2], 4); } vstore(r.vf[7], uv); fl.stick<15u, kSticky>(uv); n7 = uv; }
L_02E0: { ++fl.t; const v4u uv = vmsubd(nacc, n5, n1); set_vi(i3, r.vf[26].w[3]); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_02E8: { ++fl.t; const v4u uv = vmaddd(nacc, n5, n1); { std::uint8_t *q = qword(mem, i2 + 9u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_02F0: { ++fl.t; { std::uint8_t *q = qword(mem, i2 + 6u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
L_02F8: { ++fl.t; { std::uint8_t *q = qword(mem, i2 + 3u); std::memcpy(q + 4, &r.vf[2].w[1], 4); } }
L_0300: { ++fl.t; set_vi(i1, i3 | i1); }
L_0308: { ++fl.t; const v4u uv = vftoi(vload(r.vf[3]), 4); { std::uint8_t *q = qword(mem, i2 + 11u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n3 = vshadow(r.vf[3]); }
L_0310: { ++fl.t; const v4u uv = vftoi(vload(r.vf[7]), 0); { std::uint8_t *q = qword(mem, i2 + 8u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } vstore(r.vf[2], uv); n2 = vshadow(r.vf[2]); }
L_0318: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { std::uint8_t *q = qword(mem, i2 + 5u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.push<1u, kSticky>(uv); n27 = vsel(n27, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0320: { ++fl.t; { std::uint8_t *q = qword(mem, i2 + 2u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0328: { ++fl.t; { std::uint8_t *q = qword(mem, i2 + 11u); std::memcpy(q + 0, &r.vf[3].w[0], 4); std::memcpy(q + 4, &r.vf[3].w[1], 4); std::memcpy(q + 8, &r.vf[3].w[2], 4); } }
L_0330: { ++fl.t; { std::uint8_t *q = qword(mem, i2 + 10u); std::memcpy(q, &r.vf[2], 16); } }
L_0338: { ++fl.t; const v4u uv = vftoi(vload(r.vf[4]), 4); { std::uint8_t *q = qword(mem, i2 + 7u); std::memcpy(q, &r.vf[2], 16); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n4 = vshadow(r.vf[4]); }
L_0340: { ++fl.t; const v4u uv = vftoi(vload(r.vf[6]), 4); r.vf[26].w[3] = r.p; vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n6 = vshadow(r.vf[6]); }
L_0348: { ++fl.t; const v4u uv = vftoi(vload(r.vf[1]), 4); { std::uint8_t *q = qword(mem, i2 + 4u); std::memcpy(q, &r.vf[2], 16); } vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n1 = vshadow(r.vf[1]); }
L_0350: { ++fl.t; { std::uint8_t *q = qword(mem, i2 + 1u); std::memcpy(q, &r.vf[2], 16); } }
L_0358: { ++fl.t; { std::uint8_t *q = qword(mem, i2 + 2u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); std::memcpy(q + 8, &r.vf[4].w[2], 4); } }
L_0360: { ++fl.t; { std::uint8_t *q = qword(mem, i2 + 5u); std::memcpy(q + 0, &r.vf[6].w[0], 4); std::memcpy(q + 4, &r.vf[6].w[1], 4); std::memcpy(q + 8, &r.vf[6].w[2], 4); } }
L_0368: { ++fl.t; { std::uint8_t *q = qword(mem, i2 + 8u); std::memcpy(q + 0, &r.vf[1].w[0], 4); std::memcpy(q + 4, &r.vf[1].w[1], 4); std::memcpy(q + 8, &r.vf[1].w[2], 4); } }
L_0370: { ++fl.t; set_vi(i15, (((880u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0378: { ++fl.t; set_vi(i1, 0u + 4u); }
    if (pend) { pend = false; goto L_0BB8; }
L_0380: { ++fl.t; set_vi(i1, i11 - i12); }
L_0388: { ++fl.t; set_vi(i6, i8 + 0u); }
L_0390: { ++fl.t; pend = static_cast<std::int16_t>(i1) > 0; }
L_0398: { ++fl.t; }
    if (pend) { pend = false; goto L_03C8; }
L_03A0: { ++fl.t; set_vi(i15, (((928u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_03A8: { ++fl.t; }
    if (pend) { pend = false; goto L_0B18; }
L_03B0: { ++fl.t; set_vi(i10, 0u + 0u); }
L_03B8: { ++fl.t; set_vi(i9, 0u + i12); }
L_03C0: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_03C8: { ++fl.t; pend = static_cast<std::int16_t>(i6) >= 0; }
L_03D0: { ++fl.t; set_vi(i8, r.vf[16].w[3]); }
    if (pend) { pend = false; goto L_01C8; }
L_03D8: { ++fl.t; set_vi(i5, 0u + 126u); }
L_03E0: { ++fl.t; pend = true; }
L_03E8: { ++fl.t; set_vi(i4, 0u + 57u); }
    if (pend) { pend = false; goto L_0CB8; }
    vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[27], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((1008u + sh) & 16383u));
    return;
L_0B18: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 114u) + 12, 2); set_vi(i3, v); } }
L_0B20: { ++fl.t; set_vi(i2, 0u + 32767u); }
L_0B28: { ++fl.t; set_vi(i2, i2 + 1u); }
L_0B30: { ++fl.t; set_vi(i2, i10 | i2); }
L_0B38: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 0u) + 12, 2); set_vi(i1, v); } }
L_0B40: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i2; std::memcpy(q + 0, &v, 4); } }
L_0B48: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 2u) + 12, 2); set_vi(i3, v); } }
L_0B50: { ++fl.t; }
L_0B58: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0B60: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 2u) + 12, 2); set_vi(i12, v); } }
L_0B68: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 4u) + 12, 2); set_vi(i11, v); } }
L_0B70: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0B78: { ++fl.t; vkick_last(daz, 1, i3); }
    if (pendj) { pendj = false; vflush(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflush(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflush(r.vf[27], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_0B80: { ++fl.t; ending = true; }
L_0B88: { ++fl.t; }
    if (ending) { vflush(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflush(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflush(r.vf[27], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; r.tpc = ((2960u + sh) & 16383u); return; }
    vflush(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflush(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflush(r.vf[27], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((2960u + sh) & 16383u));
    return;
L_0BB8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 31u); std::memcpy(&r.vf[1], q, 16); } n1 = vshadow(r.vf[1]); }
L_0BC0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 26u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); } n2 = vshadow(r.vf[2]); }
L_0BC8: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_0BD0: { ++fl.t; set_vi(i10, 0u + 0u); }
L_0BD8: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); std::memcpy(q, &r.vf[1], 16); } }
L_0BE0: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 1u); const std::uint32_t v = i1; std::memcpy(q + 0, &v, 4); } }
L_0BE8: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 2u); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); std::memcpy(q + 12, &r.vf[2].w[3], 4); } }
L_0BF0: { ++fl.t; set_vi(i9, i12 + 2u); }
L_0BF8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0C00: { ++fl.t; set_vi(i12, i12 + 3u); }
    if (pendj) { pendj = false; vflush(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflush(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflush(r.vf[27], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
    vflush(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflush(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflush(r.vf[27], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((3080u + sh) & 16383u));
    return;
L_0CB8: { ++fl.t; set_vi(i1, 0u + 1024u); }
L_0CC0: { ++fl.t; set_vi(i1, i6 & i1); }
L_0CC8: { ++fl.t; set_vi(i6, i6 + i6); }
L_0CD0: { ++fl.t; pend = 0u == i1; }
L_0CD8: { ++fl.t; set_vi(i6, i6 + i6); }
    if (pend) { pend = false; goto L_0D08; }
L_0CE0: { ++fl.t; set_vi(i15, (((3296u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0CE8: { ++fl.t; }
    if (pend) { pend = false; goto L_0B18; }
L_0CF0: { ++fl.t; set_vi(i10, 0u + 0u); }
L_0CF8: { ++fl.t; set_vi(i9, 0u + i12); }
L_0D00: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_0D08: { ++fl.t; }
L_0D10: { ++fl.t; pend = static_cast<std::int16_t>(i6) >= 0; }
L_0D18: { ++fl.t; set_vi(i6, i6 + i6); }
    if (pend) { pend = false; goto L_0D20; }
L_0D20: { ++fl.t; }
L_0D28: { ++fl.t; pend = static_cast<std::int16_t>(i6) >= 0; }
L_0D30: { ++fl.t; set_vi(i6, i6 + i6); }
    if (pend) { pend = false; goto L_0D88; }
L_0D38: { ++fl.t; set_vi(i15, (((3384u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0D40: { ++fl.t; }
    if (pend) { pend = false; goto L_0B80; }
L_0D48: { ++fl.t; jpc = (static_cast<std::uint32_t>(i5) * 8u) & 16383u; set_vi(i15, (((3400u + sh) & 16383u) + 16u) / 8u); pendj = true; }
L_0D50: { ++fl.t; }
    if (pendj) { pendj = false; vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[27], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_0D58: { ++fl.t; pend = static_cast<std::int16_t>(i6) < 0; }
L_0D60: { ++fl.t; }
    if (pend) { pend = false; goto L_0DB0; }
L_0D68: { ++fl.t; fl.flush_q(r); }
L_0D70: { ++fl.t; }
L_0D78: { ++fl.t; jpc = (static_cast<std::uint32_t>(i4) * 8u) & 16383u; pendj = true; }
L_0D80: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); r.vf[26].w[3] = r.p; vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.push<1u, kSticky>(uv); n27 = vsel(n27, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
    if (pendj) { pendj = false; vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[27], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_0D88: { ++fl.t; }
L_0D90: { ++fl.t; pend = static_cast<std::int16_t>(i6) < 0; }
L_0D98: { ++fl.t; }
    if (pend) { pend = false; goto L_0DB0; }
L_0DA0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i4) * 8u) & 16383u; pendj = true; }
L_0DA8: { ++fl.t; }
    if (pendj) { pendj = false; vflush(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflush(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflush(r.vf[27], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_0DB0: { ++fl.t; pend = true; }
L_0DB8: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
    if (pend) { pend = false; goto L_00F8; }
    vflush(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflush(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflush(r.vf[27], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((3520u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, jpc);
    return;
}
static __attribute__((noinline, cold)) void vu1_E4CD26F2EC1C6690_c(Vu0Regs &r, std::uint8_t *mem, VuDaz &daz, std::uint32_t &hop) { vu1_E4CD26F2EC1C6690_b<true>(r, mem, daz, hop); }
void vu1_E4CD26F2EC1C6690(Vu0Regs &r, std::uint8_t *mem) {
    std::uint32_t hop = kNoHop;
    {
        VuDaz daz;
        if ((r.status & 0xC0u) == 0xC0u) vu1_E4CD26F2EC1C6690_b<false>(r, mem, daz, hop);
        else vu1_E4CD26F2EC1C6690_c(r, mem, daz, hop);
    }
    if (hop != kNoHop) vu::interpret(1, hop);
}

void vu1_01EB08585B82957C(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 2720u) & 16383u;
    (void)sh;
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i3 = r.vi[3];
    std::uint16_t i6 = r.vi[6];
    std::uint16_t i7 = r.vi[7];
    std::uint16_t i8 = r.vi[8];
    std::uint16_t i9 = r.vi[9];
    std::uint16_t i10 = r.vi[10];
    std::uint16_t i11 = r.vi[11];
    std::uint16_t i12 = r.vi[12];
    std::uint16_t i13 = r.vi[13];
    std::uint16_t i15 = r.vi[15];
    goto L_0AA0;
L_00F8: { ++fl.t; set_vi(i1, 0u + 15u); }
L_0100: { ++fl.t; set_vi(i1, i8 & i1); }
L_0108: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1) + 4, 2); set_vi(i2, v); } }
L_0110: { fl.t += 4u; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; pendj = true; }
L_0118: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((288u + sh) & 16383u));
    return;
L_0AA0: { ++fl.t; set_vi(i1, i11 - i12); }
L_0AA8: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[16], q, 16); set_vi(i13, i13 + 1u); } }
L_0AB0: { ++fl.t; pend = static_cast<std::int16_t>(i1) > 0; }
L_0AB8: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[17], q, 16); set_vi(i13, i13 + 1u); } }
    if (pend) { pend = false; goto L_0AD0; }
L_0AC0: { ++fl.t; set_vi(i15, (((2752u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0AC8: { ++fl.t; }
    if (pend) { pend = false; goto L_0B18; }
L_0AD0: { ++fl.t; set_vi(i7, i8 + 0u); }
L_0AD8: { ++fl.t; pend = true; }
L_0AE0: { ++fl.t; set_vi(i15, 0u + 301u); }
    if (pend) { pend = false; goto L_0C38; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((2792u + sh) & 16383u));
    return;
L_0B18: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 114u) + 12, 2); set_vi(i3, v); } }
L_0B20: { ++fl.t; set_vi(i2, 0u + 32767u); }
L_0B28: { ++fl.t; set_vi(i2, i2 + 1u); }
L_0B30: { ++fl.t; set_vi(i2, i10 | i2); }
L_0B38: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 0u) + 12, 2); set_vi(i1, v); } }
L_0B40: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i2; std::memcpy(q + 0, &v, 4); } }
L_0B48: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 2u) + 12, 2); set_vi(i3, v); } }
L_0B50: { ++fl.t; }
L_0B58: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0B60: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 2u) + 12, 2); set_vi(i12, v); } }
L_0B68: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 4u) + 12, 2); set_vi(i11, v); } }
L_0B70: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0B78: { ++fl.t; vu::kick(1, i3); }
    if (pendj) { pendj = false; goto dispatch; }
L_0B80: { ++fl.t; ending = true; }
L_0B88: { ++fl.t; }
    if (ending) { fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; r.tpc = ((2960u + sh) & 16383u); return; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((2960u + sh) & 16383u));
    return;
L_0C38: { ++fl.t; pend = static_cast<std::int16_t>(i8) < 0; }
L_0C40: { ++fl.t; set_vi(i8, r.vf[16].w[3]); }
    if (pend) { pend = false; goto L_0C58; }
L_0C48: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0C50: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0C58: { ++fl.t; set_vi(i6, 0u + 4096u); }
L_0C60: { ++fl.t; set_vi(i1, i7 & i6); }
L_0C68: { ++fl.t; set_vi(i6, 0u + 2048u); }
L_0C70: { ++fl.t; set_vi(i6, i7 & i6); }
L_0C78: { ++fl.t; pend = 0u == i1; }
L_0C80: { ++fl.t; set_vi(i1, 0u + i15); }
    if (pend) { pend = false; goto L_0C98; }
L_0C88: { ++fl.t; set_vi(i15, (((3208u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0C90: { ++fl.t; }
    if (pend) { pend = false; goto L_0B80; }
L_0C98: { ++fl.t; pend = 0u != i6; }
L_0CA0: { ++fl.t; set_vi(i15, 0u + i1); }
    if (pend) { pend = false; goto L_00F8; }
L_0CA8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0CB0: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((3256u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

void vu1_0C4BF58C683B50D9(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 2768u) & 16383u;
    (void)sh;
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i6 = r.vi[6];
    std::uint16_t i7 = r.vi[7];
    std::uint16_t i8 = r.vi[8];
    std::uint16_t i15 = r.vi[15];
    goto L_0AD0;
L_00F8: { ++fl.t; set_vi(i1, 0u + 15u); }
L_0100: { ++fl.t; set_vi(i1, i8 & i1); }
L_0108: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1) + 4, 2); set_vi(i2, v); } }
L_0110: { fl.t += 4u; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; pendj = true; }
L_0118: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[15] = i15; vu::interpret(1, ((288u + sh) & 16383u));
    return;
L_0AD0: { ++fl.t; set_vi(i7, i8 + 0u); }
L_0AD8: { ++fl.t; pend = true; }
L_0AE0: { ++fl.t; set_vi(i15, 0u + 301u); }
    if (pend) { pend = false; goto L_0C38; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[15] = i15; vu::interpret(1, ((2792u + sh) & 16383u));
    return;
L_0B80: { ++fl.t; ending = true; }
L_0B88: { ++fl.t; }
    if (ending) { fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[15] = i15; r.tpc = ((2960u + sh) & 16383u); return; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[15] = i15; vu::interpret(1, ((2960u + sh) & 16383u));
    return;
L_0C38: { ++fl.t; pend = static_cast<std::int16_t>(i8) < 0; }
L_0C40: { ++fl.t; set_vi(i8, r.vf[16].w[3]); }
    if (pend) { pend = false; goto L_0C58; }
L_0C48: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0C50: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0C58: { ++fl.t; set_vi(i6, 0u + 4096u); }
L_0C60: { ++fl.t; set_vi(i1, i7 & i6); }
L_0C68: { ++fl.t; set_vi(i6, 0u + 2048u); }
L_0C70: { ++fl.t; set_vi(i6, i7 & i6); }
L_0C78: { ++fl.t; pend = 0u == i1; }
L_0C80: { ++fl.t; set_vi(i1, 0u + i15); }
    if (pend) { pend = false; goto L_0C98; }
L_0C88: { ++fl.t; set_vi(i15, (((3208u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0C90: { ++fl.t; }
    if (pend) { pend = false; goto L_0B80; }
L_0C98: { ++fl.t; pend = 0u != i6; }
L_0CA0: { ++fl.t; set_vi(i15, 0u + i1); }
    if (pend) { pend = false; goto L_00F8; }
L_0CA8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0CB0: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[15] = i15; vu::interpret(1, ((3256u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

template <bool kSticky>
static void vu1_2407DCFD7502CB48_s(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 120u) & 16383u;
    (void)sh;
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i3 = r.vi[3];
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i9 = r.vi[9];
    std::uint16_t i10 = r.vi[10];
    std::uint16_t i12 = r.vi[12];
    std::uint16_t i15 = r.vi[15];
    goto L_0078;
L_0078: { ++fl.t; set_vi(i1, 0u + 8u); }
L_0080: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0088: { ++fl.t; set_vi(i1, 0u + 26u); }
L_0090: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(0u))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } }
L_0098: { ++fl.t; set_vi(i15, (((152u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_00A0: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
    if (pend) { pend = false; goto L_0AE8; }
L_00A8: { ++fl.t; set_vi(i15, (((168u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_00B0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 35u) + 8, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0530; }
L_00B8: { ++fl.t; set_vi(i15, (((184u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_00C0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 8, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0618; }
L_00C8: { ++fl.t; ending = true; }
L_00D0: { ++fl.t; }
    if (ending) { fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; r.tpc = ((216u + sh) & 16383u); return; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((216u + sh) & 16383u));
    return;
L_0530: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 124u) + 12, 2); set_vi(i1, v); } }
L_0538: { ++fl.t; pend = 0u != i4; }
L_0540: { ++fl.t; r.i = 1132396544u; }
    if (pend) { pend = false; goto L_0568; }
L_0548: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 32751u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.push_last<1u, kSticky>(uv); }
L_0550: { ++fl.t; set_vi(i1, i1 & i3); }
L_0558: { ++fl.t; pend = true; }
L_0560: { ++fl.t; set_vi(i3, 0u + 0u); }
    if (pend) { pend = false; goto L_0588; }
L_0568: { ++fl.t; r.i = 1124073472u; }
L_0570: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 16u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.push_last<1u, kSticky>(uv); }
L_0578: { ++fl.t; set_vi(i1, i1 | i3); }
L_0580: { ++fl.t; set_vi(i3, 0u + 1u); }
L_0588: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 134u); const std::uint32_t v = i3; std::memcpy(q + 8, &v, 4); } }
L_0590: { ++fl.t; set_vi(i3, 0u + 27u); }
L_0598: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } }
L_05A0: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(r.vf[1].w[3])); { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i3))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); }
L_05A8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_05B0: { ++fl.t; pend = true; }
L_05B8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 133u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
    if (pend) { pend = false; goto L_0AE8; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((1472u + sh) & 16383u));
    return;
L_0618: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 124u) + 12, 2); set_vi(i1, v); } }
L_0620: { ++fl.t; pend = 0u != i4; }
L_0628: { ++fl.t; set_vi(i2, 0u + 27u); }
    if (pend) { pend = false; goto L_0648; }
L_0630: { ++fl.t; set_vi(i3, 0u + 32735u); }
L_0638: { ++fl.t; pend = true; }
L_0640: { ++fl.t; set_vi(i1, i1 & i3); }
    if (pend) { pend = false; goto L_0658; }
L_0648: { ++fl.t; set_vi(i3, 0u + 32u); }
L_0650: { ++fl.t; set_vi(i1, i1 | i3); }
L_0658: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } }
L_0660: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i2))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
L_0668: { ++fl.t; pend = true; }
L_0670: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
    if (pend) { pend = false; goto L_0AE8; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((1656u + sh) & 16383u));
    return;
L_0AE8: { ++fl.t; set_vi(i10, 0u + 1u); }
L_0AF0: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_0AF8: { ++fl.t; set_vi(i9, 0u + i12); }
L_0B00: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_0B08: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0B10: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q, &r.vf[4], 16); set_vi(i12, i12 + 1u); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((2840u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

static __attribute__((noinline, cold)) void vu1_2407DCFD7502CB48_c(Vu0Regs &r, std::uint8_t *mem) { vu1_2407DCFD7502CB48_s<true>(r, mem); }

void vu1_2407DCFD7502CB48(Vu0Regs &r, std::uint8_t *mem) {
    if ((r.status & 0xC0u) == 0xC0u) vu1_2407DCFD7502CB48_s<false>(r, mem);
    else vu1_2407DCFD7502CB48_c(r, mem);
}

void vu1_348B8E0B5E775480(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 2408u) & 16383u;
    (void)sh;
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i3 = r.vi[3];
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i6 = r.vi[6];
    std::uint16_t i7 = r.vi[7];
    std::uint16_t i8 = r.vi[8];
    std::uint16_t i9 = r.vi[9];
    std::uint16_t i10 = r.vi[10];
    std::uint16_t i11 = r.vi[11];
    std::uint16_t i12 = r.vi[12];
    std::uint16_t i13 = r.vi[13];
    std::uint16_t i15 = r.vi[15];
    goto L_0968;
L_00F8: { ++fl.t; set_vi(i1, 0u + 15u); }
L_0100: { ++fl.t; set_vi(i1, i8 & i1); }
L_0108: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1) + 4, 2); set_vi(i2, v); } }
L_0110: { ++fl.t; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; pendj = true; }
L_0118: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((288u + sh) & 16383u));
    return;
L_05F0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 131u) + 12, 2); set_vi(i3, v); } }
L_05F8: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 124u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0u})); } }
L_0600: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 129u); const std::uint32_t v = i4; std::memcpy(q + 12, &v, 4); } }
L_0608: { ++fl.t; pend = true; }
L_0610: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i3))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); } }
    if (pend) { pend = false; goto L_0AE8; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((1560u + sh) & 16383u));
    return;
L_0678: { ++fl.t; set_vi(i1, 0u + 27u); }
L_0680: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
L_0688: { ++fl.t; set_vi(i2, 0u + 0u); }
L_0690: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 124u) + 12, 2); set_vi(i1, v); } }
L_0698: { ++fl.t; pend = 0u != i4; }
L_06A0: { ++fl.t; set_vi(i4, i4 - 1u); }
    if (pend) { pend = false; goto L_06C0; }
L_06A8: { ++fl.t; set_vi(i3, 0u + 32703u); }
L_06B0: { ++fl.t; pend = true; }
L_06B8: { ++fl.t; set_vi(i1, i1 & i3); }
    if (pend) { pend = false; goto L_06E0; }
L_06C0: { ++fl.t; set_vi(i3, 0u + 64u); }
L_06C8: { ++fl.t; pend = 0u == i4; }
L_06D0: { ++fl.t; set_vi(i1, i1 | i3); }
    if (pend) { pend = false; goto L_06E0; }
L_06D8: { ++fl.t; set_vi(i2, 0u + 1u); }
L_06E0: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } }
L_06E8: { ++fl.t; set_vi(i3, 0u + i15); }
L_06F0: { ++fl.t; set_vi(i15, (((1776u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_06F8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
    if (pend) { pend = false; goto L_0AE8; }
L_0700: { ++fl.t; set_vi(i15, 0u + i3); }
L_0708: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 130u); const std::uint32_t v = i2; std::memcpy(q + 12, &v, 4); } }
L_0710: { ++fl.t; pend = true; }
L_0718: { ++fl.t; { const std::uint8_t *q = qword(mem, i2 + 131u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } }
    if (pend) { pend = false; goto L_0AE8; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((1824u + sh) & 16383u));
    return;
L_0968: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[1], q, 16); set_vi(i13, i13 + 1u); } }
L_0970: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[2], q, 16); set_vi(i13, i13 + 1u); } }
L_0978: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[3], q, 16); set_vi(i13, i13 + 1u); } }
L_0980: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[4], q, 16); set_vi(i13, i13 + 1u); } }
L_0988: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[5], q, 16); set_vi(i13, i13 + 1u); } }
L_0990: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[6], q, 16); set_vi(i13, i13 + 1u); } }
L_0998: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[7], q, 16); set_vi(i13, i13 + 1u); } }
L_09A0: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[8], q, 16); set_vi(i13, i13 + 1u); } }
L_09A8: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[9], q, 16); set_vi(i13, i13 + 1u); } }
L_09B0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 128u); std::memcpy(q + 0, &r.vf[16].w[0], 4); std::memcpy(q + 4, &r.vf[16].w[1], 4); std::memcpy(q + 8, &r.vf[16].w[2], 4); } }
L_09B8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 129u); std::memcpy(q + 0, &r.vf[17].w[0], 4); std::memcpy(q + 4, &r.vf[17].w[1], 4); std::memcpy(q + 8, &r.vf[17].w[2], 4); } }
L_09C0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 130u); std::memcpy(q + 0, &r.vf[1].w[0], 4); std::memcpy(q + 4, &r.vf[1].w[1], 4); std::memcpy(q + 8, &r.vf[1].w[2], 4); } }
L_09C8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
L_09D0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 125u); std::memcpy(q + 0, &r.vf[3].w[0], 4); std::memcpy(q + 4, &r.vf[3].w[1], 4); std::memcpy(q + 8, &r.vf[3].w[2], 4); } }
L_09D8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); std::memcpy(q + 8, &r.vf[4].w[2], 4); } }
L_09E0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); std::memcpy(q + 0, &r.vf[5].w[0], 4); std::memcpy(q + 4, &r.vf[5].w[1], 4); std::memcpy(q + 8, &r.vf[5].w[2], 4); } }
L_09E8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 131u); std::memcpy(q + 0, &r.vf[6].w[0], 4); std::memcpy(q + 4, &r.vf[6].w[1], 4); std::memcpy(q + 8, &r.vf[6].w[2], 4); } }
L_09F0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 132u); std::memcpy(q + 0, &r.vf[7].w[0], 4); std::memcpy(q + 4, &r.vf[7].w[1], 4); std::memcpy(q + 8, &r.vf[7].w[2], 4); } }
L_09F8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 128u) + 12, 2); set_vi(i1, v); } }
L_0A00: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 129u) + 12, 2); set_vi(i2, v); } }
L_0A08: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 130u) + 12, 2); set_vi(i3, v); } }
L_0A10: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 131u) + 12, 2); set_vi(i4, v); } }
L_0A18: { ++fl.t; set_vi(i10, 0u + 5u); }
L_0A20: { ++fl.t; set_vi(i9, 0u + i12); }
L_0A28: { ++fl.t; { const std::uint8_t *q = qword(mem, i1 + 128u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } }
L_0A30: { ++fl.t; { const std::uint8_t *q = qword(mem, i2 + 124u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0u})); } }
L_0A38: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i4))); vstore(r.vf[2], vsel(vload(r.vf[2]), vsplat(v), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); } }
L_0A40: { ++fl.t; { const std::uint8_t *q = qword(mem, i3 + 131u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } }
L_0A48: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_0A50: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_0A58: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); set_vi(i12, i12 + 1u); } }
L_0A60: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 0, &r.vf[1].w[0], 4); std::memcpy(q + 4, &r.vf[1].w[1], 4); std::memcpy(q + 8, &r.vf[1].w[2], 4); set_vi(i12, i12 + 1u); } }
L_0A68: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 0, &r.vf[3].w[0], 4); std::memcpy(q + 4, &r.vf[3].w[1], 4); std::memcpy(q + 8, &r.vf[3].w[2], 4); set_vi(i12, i12 + 1u); } }
L_0A70: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 0, &r.vf[8].w[0], 4); std::memcpy(q + 4, &r.vf[8].w[1], 4); std::memcpy(q + 8, &r.vf[8].w[2], 4); set_vi(i12, i12 + 1u); } }
L_0A78: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 0, &r.vf[9].w[0], 4); std::memcpy(q + 4, &r.vf[9].w[1], 4); std::memcpy(q + 8, &r.vf[9].w[2], 4); set_vi(i12, i12 + 1u); } }
L_0A80: { ++fl.t; set_vi(i15, (((2688u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0A88: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 36u) + 8, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0678; }
L_0A90: { ++fl.t; set_vi(i15, (((2704u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0A98: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 34u) + 12, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_05F0; }
L_0AA0: { ++fl.t; set_vi(i1, i11 - i12); }
L_0AA8: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[16], q, 16); set_vi(i13, i13 + 1u); } }
L_0AB0: { ++fl.t; pend = static_cast<std::int16_t>(i1) > 0; }
L_0AB8: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[17], q, 16); set_vi(i13, i13 + 1u); } }
    if (pend) { pend = false; goto L_0AD0; }
L_0AC0: { ++fl.t; set_vi(i15, (((2752u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0AC8: { ++fl.t; }
    if (pend) { pend = false; goto L_0B18; }
L_0AD0: { ++fl.t; set_vi(i7, i8 + 0u); }
L_0AD8: { ++fl.t; pend = true; }
L_0AE0: { ++fl.t; set_vi(i15, 0u + 301u); }
    if (pend) { pend = false; goto L_0C38; }
L_0AE8: { ++fl.t; set_vi(i10, 0u + 1u); }
L_0AF0: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_0AF8: { ++fl.t; set_vi(i9, 0u + i12); }
L_0B00: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_0B08: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0B10: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q, &r.vf[4], 16); set_vi(i12, i12 + 1u); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0B18: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 114u) + 12, 2); set_vi(i3, v); } }
L_0B20: { ++fl.t; set_vi(i2, 0u + 32767u); }
L_0B28: { ++fl.t; set_vi(i2, i2 + 1u); }
L_0B30: { ++fl.t; set_vi(i2, i10 | i2); }
L_0B38: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 0u) + 12, 2); set_vi(i1, v); } }
L_0B40: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i2; std::memcpy(q + 0, &v, 4); } }
L_0B48: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 2u) + 12, 2); set_vi(i3, v); } }
L_0B50: { ++fl.t; }
L_0B58: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0B60: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 2u) + 12, 2); set_vi(i12, v); } }
L_0B68: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 4u) + 12, 2); set_vi(i11, v); } }
L_0B70: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0B78: { ++fl.t; vu::kick(1, i3); }
    if (pendj) { pendj = false; goto dispatch; }
L_0B80: { ++fl.t; ending = true; }
L_0B88: { ++fl.t; }
    if (ending) { fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; r.tpc = ((2960u + sh) & 16383u); return; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((2960u + sh) & 16383u));
    return;
L_0C38: { ++fl.t; pend = static_cast<std::int16_t>(i8) < 0; }
L_0C40: { ++fl.t; set_vi(i8, r.vf[16].w[3]); }
    if (pend) { pend = false; goto L_0C58; }
L_0C48: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0C50: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0C58: { ++fl.t; set_vi(i6, 0u + 4096u); }
L_0C60: { ++fl.t; set_vi(i1, i7 & i6); }
L_0C68: { ++fl.t; set_vi(i6, 0u + 2048u); }
L_0C70: { ++fl.t; set_vi(i6, i7 & i6); }
L_0C78: { ++fl.t; pend = 0u == i1; }
L_0C80: { ++fl.t; set_vi(i1, 0u + i15); }
    if (pend) { pend = false; goto L_0C98; }
L_0C88: { ++fl.t; set_vi(i15, (((3208u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0C90: { ++fl.t; }
    if (pend) { pend = false; goto L_0B80; }
L_0C98: { ++fl.t; pend = 0u != i6; }
L_0CA0: { ++fl.t; set_vi(i15, 0u + i1); }
    if (pend) { pend = false; goto L_00F8; }
L_0CA8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0CB0: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((3256u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

template <bool kSticky>
static void vu1_C433B7D426021E3C_s(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 16376u) & 16383u;
    (void)sh;
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i3 = r.vi[3];
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i9 = r.vi[9];
    std::uint16_t i10 = r.vi[10];
    std::uint16_t i11 = r.vi[11];
    std::uint16_t i12 = r.vi[12];
    std::uint16_t i14 = r.vi[14];
    std::uint16_t i15 = r.vi[15];
    goto L_3FF8;
L_0000: { ++fl.t; set_vi(i14, 0u + 960u); }
L_0008: { ++fl.t; r.i = 1124073472u; }
L_0010: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vfix(vsplat(r.i))); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.push_last<1u, kSticky>(uv); }
L_0018: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 128u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0020: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 129u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0028: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 130u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0030: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 133u); std::memcpy(q + 12, &r.vf[1].w[3], 4); } }
L_0038: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 37u) + 4, 2); set_vi(i2, v); } }
L_0040: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0048: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 2u) + 12, 2); set_vi(i12, v); } }
L_0050: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 4u) + 12, 2); set_vi(i11, v); } }
L_0058: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 131u); const std::uint32_t v = i2; std::memcpy(q + 12, &v, 4); } }
L_0060: { ++fl.t; set_vi(i3, 0u + 27u); }
L_0068: { ++fl.t; vu::kick(1, i3); }
L_0070: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 24u); vstore(r.vf[15], vsel(vload(r.vf[15]), vload_ptr(q), v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); } }
L_0078: { ++fl.t; set_vi(i1, 0u + 8u); }
L_0080: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0088: { ++fl.t; set_vi(i1, 0u + 26u); }
L_0090: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(0u))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } }
L_0098: { ++fl.t; set_vi(i15, (((152u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_00A0: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
    if (pend) { pend = false; goto L_0AE8; }
L_00A8: { ++fl.t; set_vi(i15, (((168u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_00B0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 35u) + 8, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0530; }
L_00B8: { ++fl.t; set_vi(i15, (((184u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_00C0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 8, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0618; }
L_00C8: { ++fl.t; ending = true; }
L_00D0: { ++fl.t; }
    if (ending) { fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; r.tpc = ((216u + sh) & 16383u); return; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, ((216u + sh) & 16383u));
    return;
L_0530: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 124u) + 12, 2); set_vi(i1, v); } }
L_0538: { ++fl.t; pend = 0u != i4; }
L_0540: { ++fl.t; r.i = 1132396544u; }
    if (pend) { pend = false; goto L_0568; }
L_0548: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 32751u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.push_last<1u, kSticky>(uv); }
L_0550: { ++fl.t; set_vi(i1, i1 & i3); }
L_0558: { ++fl.t; pend = true; }
L_0560: { ++fl.t; set_vi(i3, 0u + 0u); }
    if (pend) { pend = false; goto L_0588; }
L_0568: { ++fl.t; r.i = 1124073472u; }
L_0570: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 16u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.push_last<1u, kSticky>(uv); }
L_0578: { ++fl.t; set_vi(i1, i1 | i3); }
L_0580: { ++fl.t; set_vi(i3, 0u + 1u); }
L_0588: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 134u); const std::uint32_t v = i3; std::memcpy(q + 8, &v, 4); } }
L_0590: { ++fl.t; set_vi(i3, 0u + 27u); }
L_0598: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } }
L_05A0: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(r.vf[1].w[3])); { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i3))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); }
L_05A8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_05B0: { ++fl.t; pend = true; }
L_05B8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 133u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
    if (pend) { pend = false; goto L_0AE8; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, ((1472u + sh) & 16383u));
    return;
L_0618: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 124u) + 12, 2); set_vi(i1, v); } }
L_0620: { ++fl.t; pend = 0u != i4; }
L_0628: { ++fl.t; set_vi(i2, 0u + 27u); }
    if (pend) { pend = false; goto L_0648; }
L_0630: { ++fl.t; set_vi(i3, 0u + 32735u); }
L_0638: { ++fl.t; pend = true; }
L_0640: { ++fl.t; set_vi(i1, i1 & i3); }
    if (pend) { pend = false; goto L_0658; }
L_0648: { ++fl.t; set_vi(i3, 0u + 32u); }
L_0650: { ++fl.t; set_vi(i1, i1 | i3); }
L_0658: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } }
L_0660: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i2))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
L_0668: { ++fl.t; pend = true; }
L_0670: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
    if (pend) { pend = false; goto L_0AE8; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, ((1656u + sh) & 16383u));
    return;
L_0AE8: { ++fl.t; set_vi(i10, 0u + 1u); }
L_0AF0: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_0AF8: { ++fl.t; set_vi(i9, 0u + i12); }
L_0B00: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_0B08: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0B10: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q, &r.vf[4], 16); set_vi(i12, i12 + 1u); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, ((2840u + sh) & 16383u));
    return;
L_3FF8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

static __attribute__((noinline, cold)) void vu1_C433B7D426021E3C_c(Vu0Regs &r, std::uint8_t *mem) { vu1_C433B7D426021E3C_s<true>(r, mem); }

void vu1_C433B7D426021E3C(Vu0Regs &r, std::uint8_t *mem) {
    if ((r.status & 0xC0u) == 0xC0u) vu1_C433B7D426021E3C_s<false>(r, mem);
    else vu1_C433B7D426021E3C_c(r, mem);
}

void vu1_1EDD52F01053D94F(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 2704u) & 16383u;
    (void)sh;
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i3 = r.vi[3];
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i6 = r.vi[6];
    std::uint16_t i7 = r.vi[7];
    std::uint16_t i8 = r.vi[8];
    std::uint16_t i9 = r.vi[9];
    std::uint16_t i10 = r.vi[10];
    std::uint16_t i11 = r.vi[11];
    std::uint16_t i12 = r.vi[12];
    std::uint16_t i13 = r.vi[13];
    std::uint16_t i15 = r.vi[15];
    goto L_0A90;
L_00F8: { ++fl.t; set_vi(i1, 0u + 15u); }
L_0100: { ++fl.t; set_vi(i1, i8 & i1); }
L_0108: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1) + 4, 2); set_vi(i2, v); } }
L_0110: { ++fl.t; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; pendj = true; }
L_0118: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((288u + sh) & 16383u));
    return;
L_05F0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 131u) + 12, 2); set_vi(i3, v); } }
L_05F8: { fl.t += 3u; { const std::uint8_t *q = qword(mem, i4 + 124u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0u})); } }
L_0600: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 129u); const std::uint32_t v = i4; std::memcpy(q + 12, &v, 4); } }
L_0608: { ++fl.t; pend = true; }
L_0610: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i3))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); } }
    if (pend) { pend = false; goto L_0AE8; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((1560u + sh) & 16383u));
    return;
L_0A90: { ++fl.t; set_vi(i15, (((2704u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0A98: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 34u) + 12, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_05F0; }
L_0AA0: { ++fl.t; set_vi(i1, i11 - i12); }
L_0AA8: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[16], q, 16); set_vi(i13, i13 + 1u); } }
L_0AB0: { ++fl.t; pend = static_cast<std::int16_t>(i1) > 0; }
L_0AB8: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[17], q, 16); set_vi(i13, i13 + 1u); } }
    if (pend) { pend = false; goto L_0AD0; }
L_0AC0: { ++fl.t; set_vi(i15, (((2752u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0AC8: { ++fl.t; }
    if (pend) { pend = false; goto L_0B18; }
L_0AD0: { ++fl.t; set_vi(i7, i8 + 0u); }
L_0AD8: { ++fl.t; pend = true; }
L_0AE0: { ++fl.t; set_vi(i15, 0u + 301u); }
    if (pend) { pend = false; goto L_0C38; }
L_0AE8: { ++fl.t; set_vi(i10, 0u + 1u); }
L_0AF0: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_0AF8: { ++fl.t; set_vi(i9, 0u + i12); }
L_0B00: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_0B08: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0B10: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q, &r.vf[4], 16); set_vi(i12, i12 + 1u); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0B18: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 114u) + 12, 2); set_vi(i3, v); } }
L_0B20: { ++fl.t; set_vi(i2, 0u + 32767u); }
L_0B28: { ++fl.t; set_vi(i2, i2 + 1u); }
L_0B30: { ++fl.t; set_vi(i2, i10 | i2); }
L_0B38: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 0u) + 12, 2); set_vi(i1, v); } }
L_0B40: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i2; std::memcpy(q + 0, &v, 4); } }
L_0B48: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 2u) + 12, 2); set_vi(i3, v); } }
L_0B50: { ++fl.t; }
L_0B58: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0B60: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 2u) + 12, 2); set_vi(i12, v); } }
L_0B68: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 4u) + 12, 2); set_vi(i11, v); } }
L_0B70: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0B78: { ++fl.t; vu::kick(1, i3); }
    if (pendj) { pendj = false; goto dispatch; }
L_0B80: { ++fl.t; ending = true; }
L_0B88: { ++fl.t; }
    if (ending) { fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; r.tpc = ((2960u + sh) & 16383u); return; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((2960u + sh) & 16383u));
    return;
L_0C38: { ++fl.t; pend = static_cast<std::int16_t>(i8) < 0; }
L_0C40: { ++fl.t; set_vi(i8, r.vf[16].w[3]); }
    if (pend) { pend = false; goto L_0C58; }
L_0C48: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0C50: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0C58: { ++fl.t; set_vi(i6, 0u + 4096u); }
L_0C60: { ++fl.t; set_vi(i1, i7 & i6); }
L_0C68: { ++fl.t; set_vi(i6, 0u + 2048u); }
L_0C70: { ++fl.t; set_vi(i6, i7 & i6); }
L_0C78: { ++fl.t; pend = 0u == i1; }
L_0C80: { ++fl.t; set_vi(i1, 0u + i15); }
    if (pend) { pend = false; goto L_0C98; }
L_0C88: { ++fl.t; set_vi(i15, (((3208u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0C90: { ++fl.t; }
    if (pend) { pend = false; goto L_0B80; }
L_0C98: { ++fl.t; pend = 0u != i6; }
L_0CA0: { ++fl.t; set_vi(i15, 0u + i1); }
    if (pend) { pend = false; goto L_00F8; }
L_0CA8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0CB0: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((3256u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

void vu1_BC607E7211287DC3(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 1792u) & 16383u;
    (void)sh;
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i3 = r.vi[3];
    std::uint16_t i9 = r.vi[9];
    std::uint16_t i10 = r.vi[10];
    std::uint16_t i12 = r.vi[12];
    std::uint16_t i15 = r.vi[15];
    goto L_0700;
L_0700: { ++fl.t; set_vi(i15, 0u + i3); }
L_0708: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 130u); const std::uint32_t v = i2; std::memcpy(q + 12, &v, 4); } }
L_0710: { ++fl.t; pend = true; }
L_0718: { ++fl.t; { const std::uint8_t *q = qword(mem, i2 + 131u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } }
    if (pend) { pend = false; goto L_0AE8; }
    fl.finish(r); r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((1824u + sh) & 16383u));
    return;
L_0AE8: { ++fl.t; set_vi(i10, 0u + 1u); }
L_0AF0: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_0AF8: { ++fl.t; set_vi(i9, 0u + i12); }
L_0B00: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_0B08: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0B10: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q, &r.vf[4], 16); set_vi(i12, i12 + 1u); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((2840u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

void vu1_4A37871C77DF66E6(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 2136u) & 16383u;
    (void)sh;
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i3 = r.vi[3];
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i6 = r.vi[6];
    std::uint16_t i7 = r.vi[7];
    std::uint16_t i8 = r.vi[8];
    std::uint16_t i9 = r.vi[9];
    std::uint16_t i10 = r.vi[10];
    std::uint16_t i11 = r.vi[11];
    std::uint16_t i12 = r.vi[12];
    std::uint16_t i13 = r.vi[13];
    std::uint16_t i15 = r.vi[15];
    goto L_0858;
L_00F8: { ++fl.t; set_vi(i1, 0u + 15u); }
L_0100: { ++fl.t; set_vi(i1, i8 & i1); }
L_0108: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1) + 4, 2); set_vi(i2, v); } }
L_0110: { fl.t += 4u; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; pendj = true; }
L_0118: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((288u + sh) & 16383u));
    return;
L_0858: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 24u); vstore(r.vf[15], vsel(vload(r.vf[15]), vload_ptr(q), v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); } }
L_0860: { ++fl.t; set_vi(i6, r.vf[16].w[0]); }
L_0868: { ++fl.t; set_vi(i10, 0u + 0u); }
L_0870: { ++fl.t; set_vi(i9, 0u + i12); }
L_0878: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_0880: { ++fl.t; vstore(r.vf[16], vsel(vload(r.vf[16]), vload(r.vf[17]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); }
L_0888: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[17], q, 16); set_vi(i13, i13 + 1u); } }
L_0890: { ++fl.t; pend = static_cast<std::int16_t>(i6) <= 0; }
L_0898: { ++fl.t; set_vi(i7, i8 + 0u); }
    if (pend) { pend = false; goto L_08D8; }
L_08A0: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q, &r.vf[16], 16); set_vi(i12, i12 + 1u); } }
L_08A8: { ++fl.t; set_vi(i1, i11 - i12); }
L_08B0: { ++fl.t; set_vi(i10, i10 + 1u); }
L_08B8: { ++fl.t; pend = static_cast<std::int16_t>(i1) > 0; }
L_08C0: { ++fl.t; set_vi(i6, i6 - 1u); }
    if (pend) { pend = false; goto L_0880; }
L_08C8: { ++fl.t; pend = true; }
L_08D0: { ++fl.t; set_vi(i15, 0u + 269u); }
    if (pend) { pend = false; goto L_0B18; }
L_08D8: { ++fl.t; set_vi(i6, r.vf[16].w[0]); }
L_08E0: { ++fl.t; pend = static_cast<std::int16_t>(i8) >= 0; }
L_08E8: { ++fl.t; set_vi(i8, r.vf[16].w[3]); }
    if (pend) { pend = false; goto L_0880; }
L_08F0: { ++fl.t; set_vi(i4, 0u + 4096u); }
L_08F8: { ++fl.t; set_vi(i1, i7 & i4); }
L_0900: { ++fl.t; set_vi(i4, 0u + 2048u); }
L_0908: { ++fl.t; pend = 0u == i1; }
L_0910: { ++fl.t; }
    if (pend) { pend = false; goto L_0930; }
L_0918: { ++fl.t; set_vi(i15, (((2328u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0920: { ++fl.t; }
    if (pend) { pend = false; goto L_0B80; }
L_0928: { ++fl.t; set_vi(i6, r.vf[16].w[0]); }
L_0930: { ++fl.t; set_vi(i1, i7 & i4); }
L_0938: { ++fl.t; }
L_0940: { ++fl.t; pend = 0u == i1; }
L_0948: { ++fl.t; }
    if (pend) { pend = false; goto L_0880; }
L_0950: { ++fl.t; pend = true; }
L_0958: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
    if (pend) { pend = false; goto L_00F8; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((2400u + sh) & 16383u));
    return;
L_0B18: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 114u) + 12, 2); set_vi(i3, v); } }
L_0B20: { ++fl.t; set_vi(i2, 0u + 32767u); }
L_0B28: { ++fl.t; set_vi(i2, i2 + 1u); }
L_0B30: { ++fl.t; set_vi(i2, i10 | i2); }
L_0B38: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 0u) + 12, 2); set_vi(i1, v); } }
L_0B40: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i2; std::memcpy(q + 0, &v, 4); } }
L_0B48: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 2u) + 12, 2); set_vi(i3, v); } }
L_0B50: { ++fl.t; }
L_0B58: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0B60: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 2u) + 12, 2); set_vi(i12, v); } }
L_0B68: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 4u) + 12, 2); set_vi(i11, v); } }
L_0B70: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0B78: { ++fl.t; vu::kick(1, i3); }
    if (pendj) { pendj = false; goto dispatch; }
L_0B80: { ++fl.t; ending = true; }
L_0B88: { ++fl.t; }
    if (ending) { fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; r.tpc = ((2960u + sh) & 16383u); return; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((2960u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

void vu1_0F5D84D69388A6C5(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 2344u) & 16383u;
    (void)sh;
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i3 = r.vi[3];
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i6 = r.vi[6];
    std::uint16_t i7 = r.vi[7];
    std::uint16_t i8 = r.vi[8];
    std::uint16_t i9 = r.vi[9];
    std::uint16_t i10 = r.vi[10];
    std::uint16_t i11 = r.vi[11];
    std::uint16_t i12 = r.vi[12];
    std::uint16_t i13 = r.vi[13];
    std::uint16_t i15 = r.vi[15];
    goto L_0928;
L_00F8: { ++fl.t; set_vi(i1, 0u + 15u); }
L_0100: { ++fl.t; set_vi(i1, i8 & i1); }
L_0108: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1) + 4, 2); set_vi(i2, v); } }
L_0110: { fl.t += 4u; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; pendj = true; }
L_0118: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((288u + sh) & 16383u));
    return;
L_0880: { ++fl.t; vstore(r.vf[16], vsel(vload(r.vf[16]), vload(r.vf[17]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); }
L_0888: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[17], q, 16); set_vi(i13, i13 + 1u); } }
L_0890: { ++fl.t; pend = static_cast<std::int16_t>(i6) <= 0; }
L_0898: { ++fl.t; set_vi(i7, i8 + 0u); }
    if (pend) { pend = false; goto L_08D8; }
L_08A0: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q, &r.vf[16], 16); set_vi(i12, i12 + 1u); } }
L_08A8: { ++fl.t; set_vi(i1, i11 - i12); }
L_08B0: { ++fl.t; set_vi(i10, i10 + 1u); }
L_08B8: { ++fl.t; pend = static_cast<std::int16_t>(i1) > 0; }
L_08C0: { ++fl.t; set_vi(i6, i6 - 1u); }
    if (pend) { pend = false; goto L_0880; }
L_08C8: { ++fl.t; pend = true; }
L_08D0: { ++fl.t; set_vi(i15, 0u + 269u); }
    if (pend) { pend = false; goto L_0B18; }
L_08D8: { ++fl.t; set_vi(i6, r.vf[16].w[0]); }
L_08E0: { ++fl.t; pend = static_cast<std::int16_t>(i8) >= 0; }
L_08E8: { ++fl.t; set_vi(i8, r.vf[16].w[3]); }
    if (pend) { pend = false; goto L_0880; }
L_08F0: { ++fl.t; set_vi(i4, 0u + 4096u); }
L_08F8: { ++fl.t; set_vi(i1, i7 & i4); }
L_0900: { ++fl.t; set_vi(i4, 0u + 2048u); }
L_0908: { ++fl.t; pend = 0u == i1; }
L_0910: { ++fl.t; }
    if (pend) { pend = false; goto L_0930; }
L_0918: { ++fl.t; set_vi(i15, (((2328u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0920: { ++fl.t; }
    if (pend) { pend = false; goto L_0B80; }
L_0928: { ++fl.t; set_vi(i6, r.vf[16].w[0]); }
L_0930: { ++fl.t; set_vi(i1, i7 & i4); }
L_0938: { ++fl.t; }
L_0940: { ++fl.t; pend = 0u == i1; }
L_0948: { ++fl.t; }
    if (pend) { pend = false; goto L_0880; }
L_0950: { ++fl.t; pend = true; }
L_0958: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
    if (pend) { pend = false; goto L_00F8; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((2400u + sh) & 16383u));
    return;
L_0B18: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 114u) + 12, 2); set_vi(i3, v); } }
L_0B20: { ++fl.t; set_vi(i2, 0u + 32767u); }
L_0B28: { ++fl.t; set_vi(i2, i2 + 1u); }
L_0B30: { ++fl.t; set_vi(i2, i10 | i2); }
L_0B38: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 0u) + 12, 2); set_vi(i1, v); } }
L_0B40: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i2; std::memcpy(q + 0, &v, 4); } }
L_0B48: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 2u) + 12, 2); set_vi(i3, v); } }
L_0B50: { ++fl.t; }
L_0B58: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0B60: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 2u) + 12, 2); set_vi(i12, v); } }
L_0B68: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 4u) + 12, 2); set_vi(i11, v); } }
L_0B70: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0B78: { ++fl.t; vu::kick(1, i3); }
    if (pendj) { pendj = false; goto dispatch; }
L_0B80: { ++fl.t; ending = true; }
L_0B88: { ++fl.t; }
    if (ending) { fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; r.tpc = ((2960u + sh) & 16383u); return; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((2960u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

void vu1_E87A3BA43E62134D(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 2152u) & 16383u;
    (void)sh;
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i3 = r.vi[3];
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i6 = r.vi[6];
    std::uint16_t i7 = r.vi[7];
    std::uint16_t i8 = r.vi[8];
    std::uint16_t i9 = r.vi[9];
    std::uint16_t i10 = r.vi[10];
    std::uint16_t i11 = r.vi[11];
    std::uint16_t i12 = r.vi[12];
    std::uint16_t i13 = r.vi[13];
    std::uint16_t i15 = r.vi[15];
    goto L_0868;
L_00F8: { ++fl.t; set_vi(i1, 0u + 15u); }
L_0100: { ++fl.t; set_vi(i1, i8 & i1); }
L_0108: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1) + 4, 2); set_vi(i2, v); } }
L_0110: { fl.t += 4u; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; pendj = true; }
L_0118: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((288u + sh) & 16383u));
    return;
L_0868: { ++fl.t; set_vi(i10, 0u + 0u); }
L_0870: { ++fl.t; set_vi(i9, 0u + i12); }
L_0878: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_0880: { ++fl.t; vstore(r.vf[16], vsel(vload(r.vf[16]), vload(r.vf[17]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); }
L_0888: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[17], q, 16); set_vi(i13, i13 + 1u); } }
L_0890: { ++fl.t; pend = static_cast<std::int16_t>(i6) <= 0; }
L_0898: { ++fl.t; set_vi(i7, i8 + 0u); }
    if (pend) { pend = false; goto L_08D8; }
L_08A0: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q, &r.vf[16], 16); set_vi(i12, i12 + 1u); } }
L_08A8: { ++fl.t; set_vi(i1, i11 - i12); }
L_08B0: { ++fl.t; set_vi(i10, i10 + 1u); }
L_08B8: { ++fl.t; pend = static_cast<std::int16_t>(i1) > 0; }
L_08C0: { ++fl.t; set_vi(i6, i6 - 1u); }
    if (pend) { pend = false; goto L_0880; }
L_08C8: { ++fl.t; pend = true; }
L_08D0: { ++fl.t; set_vi(i15, 0u + 269u); }
    if (pend) { pend = false; goto L_0B18; }
L_08D8: { ++fl.t; set_vi(i6, r.vf[16].w[0]); }
L_08E0: { ++fl.t; pend = static_cast<std::int16_t>(i8) >= 0; }
L_08E8: { ++fl.t; set_vi(i8, r.vf[16].w[3]); }
    if (pend) { pend = false; goto L_0880; }
L_08F0: { ++fl.t; set_vi(i4, 0u + 4096u); }
L_08F8: { ++fl.t; set_vi(i1, i7 & i4); }
L_0900: { ++fl.t; set_vi(i4, 0u + 2048u); }
L_0908: { ++fl.t; pend = 0u == i1; }
L_0910: { ++fl.t; }
    if (pend) { pend = false; goto L_0930; }
L_0918: { ++fl.t; set_vi(i15, (((2328u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0920: { ++fl.t; }
    if (pend) { pend = false; goto L_0B80; }
L_0928: { ++fl.t; set_vi(i6, r.vf[16].w[0]); }
L_0930: { ++fl.t; set_vi(i1, i7 & i4); }
L_0938: { ++fl.t; }
L_0940: { ++fl.t; pend = 0u == i1; }
L_0948: { ++fl.t; }
    if (pend) { pend = false; goto L_0880; }
L_0950: { ++fl.t; pend = true; }
L_0958: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
    if (pend) { pend = false; goto L_00F8; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((2400u + sh) & 16383u));
    return;
L_0B18: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 114u) + 12, 2); set_vi(i3, v); } }
L_0B20: { ++fl.t; set_vi(i2, 0u + 32767u); }
L_0B28: { ++fl.t; set_vi(i2, i2 + 1u); }
L_0B30: { ++fl.t; set_vi(i2, i10 | i2); }
L_0B38: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 0u) + 12, 2); set_vi(i1, v); } }
L_0B40: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i2; std::memcpy(q + 0, &v, 4); } }
L_0B48: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 2u) + 12, 2); set_vi(i3, v); } }
L_0B50: { ++fl.t; }
L_0B58: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0B60: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 2u) + 12, 2); set_vi(i12, v); } }
L_0B68: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 4u) + 12, 2); set_vi(i11, v); } }
L_0B70: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0B78: { ++fl.t; vu::kick(1, i3); }
    if (pendj) { pendj = false; goto dispatch; }
L_0B80: { ++fl.t; ending = true; }
L_0B88: { ++fl.t; }
    if (ending) { fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; r.tpc = ((2960u + sh) & 16383u); return; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((2960u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

template <bool kSticky>
PS2_VU_BODY void vu1_3E4963D0DD7B8A6A_b(Vu0Regs &r, std::uint8_t *mem, VuDaz &daz, std::uint32_t &hop) {
    (void)daz;
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 288u) & 16383u;
    (void)sh;
    v4u n1 = vshadow(r.vf[1]);
    v4u n2 = vshadow(r.vf[2]);
    v4u n3 = vshadow(r.vf[3]);
    v4u n4 = vshadow(r.vf[4]);
    v4u n5 = vshadow(r.vf[5]);
    v4u n6 = vshadow(r.vf[6]);
    v4u n7 = vshadow(r.vf[7]);
    v4u n16 = vshadow(r.vf[16]);
    v4u n17 = vshadow(r.vf[17]);
    v4u n18 = vshadow(r.vf[18]);
    v4u n19 = vshadow(r.vf[19]);
    v4u n20 = vshadow(r.vf[20]);
    v4u n21 = vshadow(r.vf[21]);
    v4u n22 = vshadow(r.vf[22]);
    v4u n23 = vshadow(r.vf[23]);
    v4u n24 = vshadow(r.vf[24]);
    v4u n25 = vshadow(r.vf[25]);
    v4u n27 = vshadow(r.vf[27]);
    v4u n28 = vshadow(r.vf[28]);
    v4u n29 = vshadow(r.vf[29]);
    v4u n30 = vshadow(r.vf[30]);
    v4u n31 = vshadow(r.vf[31]);
    v4u nacc = vshadow(r.acc);
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i3 = r.vi[3];
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i5 = r.vi[5];
    std::uint16_t i6 = r.vi[6];
    std::uint16_t i8 = r.vi[8];
    std::uint16_t i9 = r.vi[9];
    std::uint16_t i10 = r.vi[10];
    std::uint16_t i11 = r.vi[11];
    std::uint16_t i12 = r.vi[12];
    std::uint16_t i13 = r.vi[13];
    std::uint16_t i15 = r.vi[15];
    goto L_0120;
L_00F8: { ++fl.t; set_vi(i1, 0u + 15u); }
L_0100: { ++fl.t; set_vi(i1, i8 & i1); }
L_0108: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1) + 4, 2); set_vi(i2, v); } }
L_0110: { ++fl.t; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; pendj = true; }
L_0118: { ++fl.t; }
    if (pendj) { pendj = false; vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[23], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[27], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
    vflushd(r.vf[7], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[27], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); 
L_0120: { ++fl.t; const v4u uv = vmuld(n28, vsplat(n16[0])); { const std::uint8_t *q = qword(mem, 0u + 38u); std::memcpy(&r.vf[21], q, 16); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); n21 = vshadow(r.vf[21]); nacc = uv; }
L_0128: { ++fl.t; const v4u uv = vmaddd(nacc, n29, vsplat(n16[1])); { const std::uint8_t *q = qword(mem, 0u + 26u); std::memcpy(&r.vf[15], q, 16); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0130: { ++fl.t; const v4u uv = vmaddd(nacc, n30, vsplat(n16[2])); set_vi(i10, 0u + 4u); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0138: { ++fl.t; const v4u uv = vaddd(nacc, (v4u)((v4f)n31 * (v4f)vsplat(0x3F800000u))); { const std::uint8_t *q = qword(mem, 0u + 31u); std::memcpy(&r.vf[22], q, 16); } vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n22 = vshadow(r.vf[22]); n27 = vsel(n27, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0140: { ++fl.t; const v4u uv = vabs(vload(r.vf[21])); { const std::uint8_t *q = qword(mem, 0u + 37u); vstore(r.vf[20], vsel(vload(r.vf[20]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[24], vsel(vload(r.vf[24]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n20 = vshadow(r.vf[20]); n24 = vshadow(r.vf[24]); }
L_0148: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 133u); std::memcpy(&r.vf[23], q, 16); } n23 = vshadow(r.vf[23]); }
L_0150: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 2u); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); } }
L_0158: { ++fl.t; vflushd(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vefu(daz.csr, r, 115u, 27u, 2u); }
L_0160: { ++fl.t; const v4u uv = vmax(vload(r.vf[24]), vsplat(r.vf[24].w[1])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[15].w[0], r.vf[27].w[2]); fl.end_q(r, qb, 7u); } vstore(r.vf[24], vsel(vload(r.vf[24]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n24 = vshadow(r.vf[24]); }
L_0168: { ++fl.t; const v4u uv = vmuld(n23, vsplat(n20[3])); { std::uint8_t *q = qword(mem, i12 + 0u); std::memcpy(q, &r.vf[22], 16); } vstore(r.vf[23], vsel(vload(r.vf[23]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n23 = vsel(n23, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0170: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 1u); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_0178: { ++fl.t; set_vi(i10, 0u + 0u); }
L_0180: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 41u); vstore(r.vf[24], vsel(vload(r.vf[24]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } n24 = vshadow(r.vf[24]); }
L_0188: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 40u); vstore(r.vf[24], vsel(vload(r.vf[24]), vload_ptr(q), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } n24 = vshadow(r.vf[24]); }
L_0190: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 39u); std::memcpy(&r.vf[22], q, 16); } n22 = vshadow(r.vf[22]); }
L_0198: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 33u); std::memcpy(&r.vf[20], q, 16); } n20 = vshadow(r.vf[20]); }
L_01A0: { ++fl.t; set_vi(i9, i12 + 2u); }
L_01A8: { ++fl.t; set_vi(i12, i12 + 3u); }
L_01B0: { ++fl.t; fl.flush_q(r); }
L_01B8: { fl.t += 12u; }
L_01C0: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); r.vf[26].w[3] = r.p; vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n27 = vsel(n27, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_01C8: { fl.t += 4u; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n27[3])); { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[18], q, 16); set_vi(i13, i13 + 1u); } vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n18 = vshadow(r.vf[18]); n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_01D0: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[19], q, 16); set_vi(i13, i13 + 1u); } vstore(r.vf[2], uv); n19 = vshadow(r.vf[19]); n2 = vshadow(r.vf[2]); }
L_01D8: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vsplat(n20[2])); { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[16], q, 16); set_vi(i13, i13 + 1u); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n16 = vshadow(r.vf[16]); nacc = vsel(nacc, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_01E0: { ++fl.t; const v4u uv = vmuld(n17, vsplat(n17[3])); { const v4u m = vload(r.vf[17]); vstore(r.vf[1], vsel(vload(r.vf[1]), v4u{m[1], m[2], m[3], m[0]}, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n1 = vshadow(r.vf[1]); n3 = vsel(n3, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_01E8: { ++fl.t; vflushd(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); const v4u uv = vmax(vload(r.vf[25]), vsplat(r.vf[21].w[3])); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n25 = vshadow(r.vf[25]); }
L_01F0: { ++fl.t; const v4u uv = vmaddd(nacc, n20, vsplat(n27[2])); vstore(r.vf[17], vsel(vload(r.vf[17]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n17 = vsel(n17, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_01F8: { ++fl.t; const v4u uv = vsubd(n24, vsplat(n27[2])); set_vi(i1, 0u + 16u); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.push<1u, kSticky>(uv); }
L_0200: { ++fl.t; const v4u uv = vsubd(n27, n24); { const v4u m = vload(r.vf[1]); vstore(r.vf[6], vsel(vload(r.vf[6]), v4u{m[1], m[2], m[3], m[0]}, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); } vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.push<2u, kSticky>(uv); n6 = vshadow(r.vf[6]); n27 = vsel(n27, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_0208: { ++fl.t; const v4u uv = vmuld(n21, n25); set_vi(i4, 0u + 32u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0210: { ++fl.t; const v4u uv = vmuld(n17, n25); set_vi(i2, i12 + 0u); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.push<12u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_0218: { ++fl.t; vflushd(r.vf[17], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); const v4u uv = vmax(vload(r.vf[17]), vsplat(r.vf[20].w[1])); set_vi(i3, (fl.mac() & 0xFFFFu) == i1 ? 1u : 0u); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); }
L_0220: { ++fl.t; const v4u uv = vmuld(n6, vsplat(n6[3])); set_vi(i4, (fl.mac() & 0xFFFFu) == i4 ? 1u : 0u); vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n4 = vsel(n4, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0228: { ++fl.t; const v4u uv = vmuld(n1, n27); { const std::uint8_t *q = qword(mem, 0u + 44u); vstore(r.vf[17], vsel(vload(r.vf[17]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.stick<12u, kSticky>(uv); n17 = vshadow(r.vf[17]); n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_0230: { ++fl.t; vflushd(r.vf[1], v4u{0u, 0u, 0xFFFFFFFFu, 0u}); const v4u uv = vmuld(n24, n7); vstore(r.vf[25], vsel(vload(r.vf[25]), vload(r.vf[1]), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n25 = vshadow(r.vf[25]); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0238: { ++fl.t; const v4u uv = vmaddd(nacc, n24, vsplat(n7[1])); vstore(r.vf[4], vsel(vload(r.vf[4]), vload(r.vf[0]), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n4 = vshadow(r.vf[4]); n27 = vsel(n27, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0240: { ++fl.t; const v4u uv = vmuld(n28, vsplat(n16[0])); set_vi(i3, i3 | i4); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0248: { ++fl.t; vflushd(r.vf[27], v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vmaddd(nacc, n29, vsplat(n16[1])); { const v4u m = vload(r.vf[27]); vstore(r.vf[2], vsel(vload(r.vf[2]), v4u{m[1], m[2], m[3], m[0]}, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); n2 = vshadow(r.vf[2]); nacc = uv; }
L_0250: { ++fl.t; const v4u uv = vmaddd(nacc, n30, vsplat(n16[2])); set_vi(i12, i12 + 12u); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0258: { ++fl.t; const v4u uv = vsubd(n17, vsplat(n27[0])); set_vi(i10, i10 + 4u); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.push<1u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0260: { ++fl.t; const v4u uv = vaddd(nacc, (v4u)((v4f)n31 * (v4f)vsplat(0x3F800000u))); vstore(r.vf[5], vsel(vload(r.vf[5]), vload(r.vf[0]), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n5 = vshadow(r.vf[5]); n27 = vsel(n27, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0268: { ++fl.t; const v4u uv = vmuld(n6, vsplat(n6[2])); r.clip = 0u; fl.set_clip(r.clip, fl.t - 4u); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.push<4u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_0270: { ++fl.t; const v4u uv = vmuld(n17, vsplat(n17[2])); { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[17], q, 16); set_vi(i13, i13 + 1u); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.push<8u, kSticky>(uv); n17 = vshadow(r.vf[17]); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0278: { ++fl.t; const v4u uv = vmuld(n19, vsplat(n27[3])); set_vi(i1, (fl.mac() & 0xFFFFu) == i1 ? 1u : 0u); vstore(r.vf[6], uv); fl.stick<15u, kSticky>(uv); n6 = uv; }
L_0280: { ++fl.t; vflushd(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vmin(vload(r.vf[26]), vsplat(r.vf[20].w[0])); vefu(daz.csr, r, 115u, 27u, 2u); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n25 = vshadow(r.vf[25]); }
L_0288: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[25], r.vf[2].w[3]); set_vi(i3, i3 | i1); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_0290: { ++fl.t; const v4u uv = vmsubd(nacc, n2, vsplat(n3[1])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[15].w[0], r.vf[27].w[2]); fl.end_q(r, qb, 7u); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0298: { ++fl.t; vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vmsubd(nacc, n2, vsplat(n4[0])); { const v4u m = vload(r.vf[6]); vstore(r.vf[7], vsel(vload(r.vf[7]), v4u{m[1], m[2], m[3], m[0]}, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n7 = vshadow(r.vf[7]); n4 = vsel(n4, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_02A0: { ++fl.t; const v4u uv = vmaddd(nacc, n2, vsplat(n4[0])); { const v4u m = vload(r.vf[27]); vstore(r.vf[6], vsel(vload(r.vf[6]), v4u{m[1], m[2], m[3], m[0]}, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n6 = vshadow(r.vf[6]); n5 = vsel(n5, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_02A8: { ++fl.t; const v4u uv = vmaddd(nacc, n2, vsplat(n3[1])); set_vi(i1, (fl.clip() & 15u) ? 1u : 0u); vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n4 = vsel(n4, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_02B0: { ++fl.t; const v4u uv = vaddd(n25, n22); set_vi(i1, i3 | i1); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_02B8: { ++fl.t; const v4u uv = vitof(vload(r.vf[18]), 12); { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 25u) + 12, 2); set_vi(i1, v); } vstore(r.vf[18], uv); n18 = vshadow(r.vf[18]); }
L_02C0: { ++fl.t; vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); const v4u uv = vftoi(vload(r.vf[25]), 4); { const v4u m = vload(r.vf[7]); vstore(r.vf[2], vsel(vload(r.vf[2]), v4u{m[1], m[2], m[3], m[0]}, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n2 = vshadow(r.vf[2]); }
L_02C8: { ++fl.t; const v4u uv = vmaddd(nacc, n4, n1); { std::uint8_t *q = qword(mem, i2 + 0u); std::memcpy(q + 0, &r.vf[6].w[0], 4); std::memcpy(q + 4, &r.vf[6].w[1], 4); std::memcpy(q + 8, &r.vf[6].w[2], 4); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_02D0: { ++fl.t; const v4u uv = vmsubd(nacc, n4, n1); { std::uint8_t *q = qword(mem, i2 + 6u); std::memcpy(q + 4, &r.vf[6].w[1], 4); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n4 = vsel(n4, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_02D8: { ++fl.t; const v4u uv = vmuld(n18, n23); { std::uint8_t *q = qword(mem, i2 + 3u); std::memcpy(q + 0, &r.vf[6].w[0], 4); std::memcpy(q + 8, &r.vf[6].w[2], 4); } vstore(r.vf[7], uv); fl.stick<15u, kSticky>(uv); n7 = uv; }
L_02E0: { ++fl.t; const v4u uv = vmsubd(nacc, n5, n1); set_vi(i3, r.vf[26].w[3]); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_02E8: { ++fl.t; const v4u uv = vmaddd(nacc, n5, n1); { std::uint8_t *q = qword(mem, i2 + 9u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_02F0: { ++fl.t; { std::uint8_t *q = qword(mem, i2 + 6u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
L_02F8: { ++fl.t; { std::uint8_t *q = qword(mem, i2 + 3u); std::memcpy(q + 4, &r.vf[2].w[1], 4); } }
L_0300: { ++fl.t; set_vi(i1, i3 | i1); }
L_0308: { ++fl.t; const v4u uv = vftoi(vload(r.vf[3]), 4); { std::uint8_t *q = qword(mem, i2 + 11u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n3 = vshadow(r.vf[3]); }
L_0310: { ++fl.t; const v4u uv = vftoi(vload(r.vf[7]), 0); { std::uint8_t *q = qword(mem, i2 + 8u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } vstore(r.vf[2], uv); n2 = vshadow(r.vf[2]); }
L_0318: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { std::uint8_t *q = qword(mem, i2 + 5u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.push<1u, kSticky>(uv); n27 = vsel(n27, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0320: { ++fl.t; { std::uint8_t *q = qword(mem, i2 + 2u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0328: { ++fl.t; { std::uint8_t *q = qword(mem, i2 + 11u); std::memcpy(q + 0, &r.vf[3].w[0], 4); std::memcpy(q + 4, &r.vf[3].w[1], 4); std::memcpy(q + 8, &r.vf[3].w[2], 4); } }
L_0330: { ++fl.t; { std::uint8_t *q = qword(mem, i2 + 10u); std::memcpy(q, &r.vf[2], 16); } }
L_0338: { ++fl.t; const v4u uv = vftoi(vload(r.vf[4]), 4); { std::uint8_t *q = qword(mem, i2 + 7u); std::memcpy(q, &r.vf[2], 16); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n4 = vshadow(r.vf[4]); }
L_0340: { ++fl.t; const v4u uv = vftoi(vload(r.vf[6]), 4); r.vf[26].w[3] = r.p; vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n6 = vshadow(r.vf[6]); }
L_0348: { ++fl.t; const v4u uv = vftoi(vload(r.vf[1]), 4); { std::uint8_t *q = qword(mem, i2 + 4u); std::memcpy(q, &r.vf[2], 16); } vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n1 = vshadow(r.vf[1]); }
L_0350: { ++fl.t; { std::uint8_t *q = qword(mem, i2 + 1u); std::memcpy(q, &r.vf[2], 16); } }
L_0358: { ++fl.t; { std::uint8_t *q = qword(mem, i2 + 2u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); std::memcpy(q + 8, &r.vf[4].w[2], 4); } }
L_0360: { ++fl.t; { std::uint8_t *q = qword(mem, i2 + 5u); std::memcpy(q + 0, &r.vf[6].w[0], 4); std::memcpy(q + 4, &r.vf[6].w[1], 4); std::memcpy(q + 8, &r.vf[6].w[2], 4); } }
L_0368: { ++fl.t; { std::uint8_t *q = qword(mem, i2 + 8u); std::memcpy(q + 0, &r.vf[1].w[0], 4); std::memcpy(q + 4, &r.vf[1].w[1], 4); std::memcpy(q + 8, &r.vf[1].w[2], 4); } }
L_0370: { ++fl.t; set_vi(i15, (((880u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0378: { ++fl.t; set_vi(i1, 0u + 4u); }
    if (pend) { pend = false; goto L_0BB8; }
L_0380: { ++fl.t; set_vi(i1, i11 - i12); }
L_0388: { ++fl.t; set_vi(i6, i8 + 0u); }
L_0390: { ++fl.t; pend = static_cast<std::int16_t>(i1) > 0; }
L_0398: { ++fl.t; }
    if (pend) { pend = false; goto L_03C8; }
L_03A0: { ++fl.t; set_vi(i15, (((928u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_03A8: { ++fl.t; }
    if (pend) { pend = false; goto L_0B18; }
L_03B0: { ++fl.t; set_vi(i10, 0u + 0u); }
L_03B8: { ++fl.t; set_vi(i9, 0u + i12); }
L_03C0: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_03C8: { ++fl.t; pend = static_cast<std::int16_t>(i6) >= 0; }
L_03D0: { ++fl.t; set_vi(i8, r.vf[16].w[3]); }
    if (pend) { pend = false; vflushd(r.vf[7], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); goto L_01C8; }
L_03D8: { ++fl.t; set_vi(i5, 0u + 126u); }
L_03E0: { ++fl.t; pend = true; }
L_03E8: { ++fl.t; set_vi(i4, 0u + 57u); }
    if (pend) { pend = false; goto L_0CB8; }
    vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[23], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[27], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((1008u + sh) & 16383u));
    return;
L_0B18: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 114u) + 12, 2); set_vi(i3, v); } }
L_0B20: { ++fl.t; set_vi(i2, 0u + 32767u); }
L_0B28: { ++fl.t; set_vi(i2, i2 + 1u); }
L_0B30: { ++fl.t; set_vi(i2, i10 | i2); }
L_0B38: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 0u) + 12, 2); set_vi(i1, v); } }
L_0B40: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i2; std::memcpy(q + 0, &v, 4); } }
L_0B48: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 2u) + 12, 2); set_vi(i3, v); } }
L_0B50: { ++fl.t; }
L_0B58: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0B60: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 2u) + 12, 2); set_vi(i12, v); } }
L_0B68: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 4u) + 12, 2); set_vi(i11, v); } }
L_0B70: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0B78: { ++fl.t; vkick_last(daz, 1, i3); }
    if (pendj) { pendj = false; vflush(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflush(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[23], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflush(r.vf[27], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_0B80: { ++fl.t; ending = true; }
L_0B88: { ++fl.t; }
    if (ending) { vflush(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflush(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[23], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflush(r.vf[27], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; r.tpc = ((2960u + sh) & 16383u); return; }
    vflush(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflush(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[23], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflush(r.vf[27], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((2960u + sh) & 16383u));
    return;
L_0BB8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 31u); std::memcpy(&r.vf[1], q, 16); } n1 = vshadow(r.vf[1]); }
L_0BC0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 26u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); } n2 = vshadow(r.vf[2]); }
L_0BC8: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_0BD0: { ++fl.t; set_vi(i10, 0u + 0u); }
L_0BD8: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); std::memcpy(q, &r.vf[1], 16); } }
L_0BE0: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 1u); const std::uint32_t v = i1; std::memcpy(q + 0, &v, 4); } }
L_0BE8: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 2u); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); std::memcpy(q + 12, &r.vf[2].w[3], 4); } }
L_0BF0: { ++fl.t; set_vi(i9, i12 + 2u); }
L_0BF8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0C00: { ++fl.t; set_vi(i12, i12 + 3u); }
    if (pendj) { pendj = false; vflush(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflush(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[23], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflush(r.vf[27], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
    vflush(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflush(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[23], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflush(r.vf[27], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((3080u + sh) & 16383u));
    return;
L_0CB8: { ++fl.t; set_vi(i1, 0u + 1024u); }
L_0CC0: { ++fl.t; set_vi(i1, i6 & i1); }
L_0CC8: { ++fl.t; set_vi(i6, i6 + i6); }
L_0CD0: { ++fl.t; pend = 0u == i1; }
L_0CD8: { ++fl.t; set_vi(i6, i6 + i6); }
    if (pend) { pend = false; goto L_0D08; }
L_0CE0: { ++fl.t; set_vi(i15, (((3296u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0CE8: { ++fl.t; }
    if (pend) { pend = false; goto L_0B18; }
L_0CF0: { ++fl.t; set_vi(i10, 0u + 0u); }
L_0CF8: { ++fl.t; set_vi(i9, 0u + i12); }
L_0D00: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_0D08: { ++fl.t; }
L_0D10: { ++fl.t; pend = static_cast<std::int16_t>(i6) >= 0; }
L_0D18: { ++fl.t; set_vi(i6, i6 + i6); }
    if (pend) { pend = false; goto L_0D20; }
L_0D20: { ++fl.t; }
L_0D28: { ++fl.t; pend = static_cast<std::int16_t>(i6) >= 0; }
L_0D30: { ++fl.t; set_vi(i6, i6 + i6); }
    if (pend) { pend = false; goto L_0D88; }
L_0D38: { ++fl.t; set_vi(i15, (((3384u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0D40: { ++fl.t; }
    if (pend) { pend = false; goto L_0B80; }
L_0D48: { ++fl.t; jpc = (static_cast<std::uint32_t>(i5) * 8u) & 16383u; set_vi(i15, (((3400u + sh) & 16383u) + 16u) / 8u); pendj = true; }
L_0D50: { ++fl.t; }
    if (pendj) { pendj = false; vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[23], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[27], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_0D58: { ++fl.t; pend = static_cast<std::int16_t>(i6) < 0; }
L_0D60: { ++fl.t; }
    if (pend) { pend = false; goto L_0DB0; }
L_0D68: { ++fl.t; fl.flush_q(r); }
L_0D70: { ++fl.t; }
L_0D78: { ++fl.t; jpc = (static_cast<std::uint32_t>(i4) * 8u) & 16383u; pendj = true; }
L_0D80: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); r.vf[26].w[3] = r.p; vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.push<1u, kSticky>(uv); n27 = vsel(n27, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
    if (pendj) { pendj = false; vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[23], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[27], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_0D88: { ++fl.t; }
L_0D90: { ++fl.t; pend = static_cast<std::int16_t>(i6) < 0; }
L_0D98: { ++fl.t; }
    if (pend) { pend = false; goto L_0DB0; }
L_0DA0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i4) * 8u) & 16383u; pendj = true; }
L_0DA8: { ++fl.t; }
    if (pendj) { pendj = false; vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[23], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[27], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_0DB0: { ++fl.t; pend = true; }
L_0DB8: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
    if (pend) { pend = false; goto L_00F8; }
    vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[23], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[27], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((3520u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, jpc);
    return;
}
static __attribute__((noinline, cold)) void vu1_3E4963D0DD7B8A6A_c(Vu0Regs &r, std::uint8_t *mem, VuDaz &daz, std::uint32_t &hop) { vu1_3E4963D0DD7B8A6A_b<true>(r, mem, daz, hop); }
void vu1_3E4963D0DD7B8A6A(Vu0Regs &r, std::uint8_t *mem) {
    std::uint32_t hop = kNoHop;
    {
        VuDaz daz;
        if ((r.status & 0xC0u) == 0xC0u) vu1_3E4963D0DD7B8A6A_b<false>(r, mem, daz, hop);
        else vu1_3E4963D0DD7B8A6A_c(r, mem, daz, hop);
    }
    if (hop != kNoHop) vu::interpret(1, hop);
}

template <bool kSticky>
PS2_VU_BODY void vu1_B208C70FD7A091CC_b(Vu0Regs &r, std::uint8_t *mem, VuDaz &daz, std::uint32_t &hop) {
    (void)daz;
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 896u) & 16383u;
    (void)sh;
    v4u n1 = vshadow(r.vf[1]);
    v4u n2 = vshadow(r.vf[2]);
    v4u n3 = vshadow(r.vf[3]);
    v4u n4 = vshadow(r.vf[4]);
    v4u n5 = vshadow(r.vf[5]);
    v4u n6 = vshadow(r.vf[6]);
    v4u n7 = vshadow(r.vf[7]);
    v4u n16 = vshadow(r.vf[16]);
    v4u n17 = vshadow(r.vf[17]);
    v4u n18 = vshadow(r.vf[18]);
    v4u n19 = vshadow(r.vf[19]);
    v4u n20 = vshadow(r.vf[20]);
    v4u n21 = vshadow(r.vf[21]);
    v4u n22 = vshadow(r.vf[22]);
    v4u n23 = vshadow(r.vf[23]);
    v4u n24 = vshadow(r.vf[24]);
    v4u n25 = vshadow(r.vf[25]);
    v4u n27 = vshadow(r.vf[27]);
    v4u n28 = vshadow(r.vf[28]);
    v4u n29 = vshadow(r.vf[29]);
    v4u n30 = vshadow(r.vf[30]);
    v4u n31 = vshadow(r.vf[31]);
    v4u nacc = vshadow(r.acc);
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i3 = r.vi[3];
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i5 = r.vi[5];
    std::uint16_t i6 = r.vi[6];
    std::uint16_t i8 = r.vi[8];
    std::uint16_t i9 = r.vi[9];
    std::uint16_t i10 = r.vi[10];
    std::uint16_t i11 = r.vi[11];
    std::uint16_t i12 = r.vi[12];
    std::uint16_t i13 = r.vi[13];
    std::uint16_t i15 = r.vi[15];
    goto L_0380;
L_00F8: { ++fl.t; set_vi(i1, 0u + 15u); }
L_0100: { ++fl.t; set_vi(i1, i8 & i1); }
L_0108: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1) + 4, 2); set_vi(i2, v); } }
L_0110: { fl.t += 4u; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; pendj = true; }
L_0118: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((288u + sh) & 16383u));
    return;
L_01C8: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n27[3])); { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[18], q, 16); set_vi(i13, i13 + 1u); } vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n18 = vshadow(r.vf[18]); n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_01D0: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[19], q, 16); set_vi(i13, i13 + 1u); } vstore(r.vf[2], uv); n19 = vshadow(r.vf[19]); n2 = vshadow(r.vf[2]); }
L_01D8: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vsplat(n20[2])); { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[16], q, 16); set_vi(i13, i13 + 1u); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n16 = vshadow(r.vf[16]); nacc = vsel(nacc, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_01E0: { ++fl.t; const v4u uv = vmuld(n17, vsplat(n17[3])); { const v4u m = vload(r.vf[17]); vstore(r.vf[1], vsel(vload(r.vf[1]), v4u{m[1], m[2], m[3], m[0]}, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n1 = vshadow(r.vf[1]); n3 = vsel(n3, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_01E8: { ++fl.t; vflushd(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); const v4u uv = vmax(vload(r.vf[25]), vsplat(r.vf[21].w[3])); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n25 = vshadow(r.vf[25]); }
L_01F0: { ++fl.t; const v4u uv = vmaddd(nacc, n20, vsplat(n27[2])); vstore(r.vf[17], vsel(vload(r.vf[17]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n17 = vsel(n17, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_01F8: { ++fl.t; const v4u uv = vsubd(n24, vsplat(n27[2])); set_vi(i1, 0u + 16u); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.push<1u, kSticky>(uv); }
L_0200: { ++fl.t; const v4u uv = vsubd(n27, n24); { const v4u m = vload(r.vf[1]); vstore(r.vf[6], vsel(vload(r.vf[6]), v4u{m[1], m[2], m[3], m[0]}, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); } vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.push<2u, kSticky>(uv); n6 = vshadow(r.vf[6]); n27 = vsel(n27, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_0208: { ++fl.t; const v4u uv = vmuld(n21, n25); set_vi(i4, 0u + 32u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0210: { ++fl.t; const v4u uv = vmuld(n17, n25); set_vi(i2, i12 + 0u); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.push<12u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_0218: { ++fl.t; vflushd(r.vf[17], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); const v4u uv = vmax(vload(r.vf[17]), vsplat(r.vf[20].w[1])); set_vi(i3, (fl.mac() & 0xFFFFu) == i1 ? 1u : 0u); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); }
L_0220: { ++fl.t; const v4u uv = vmuld(n6, vsplat(n6[3])); set_vi(i4, (fl.mac() & 0xFFFFu) == i4 ? 1u : 0u); vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n4 = vsel(n4, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0228: { ++fl.t; const v4u uv = vmuld(n1, n27); { const std::uint8_t *q = qword(mem, 0u + 44u); vstore(r.vf[17], vsel(vload(r.vf[17]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.stick<12u, kSticky>(uv); n17 = vshadow(r.vf[17]); n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_0230: { ++fl.t; vflushd(r.vf[1], v4u{0u, 0u, 0xFFFFFFFFu, 0u}); const v4u uv = vmuld(n24, n7); vstore(r.vf[25], vsel(vload(r.vf[25]), vload(r.vf[1]), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n25 = vshadow(r.vf[25]); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0238: { ++fl.t; const v4u uv = vmaddd(nacc, n24, vsplat(n7[1])); vstore(r.vf[4], vsel(vload(r.vf[4]), vload(r.vf[0]), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n4 = vshadow(r.vf[4]); n27 = vsel(n27, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0240: { ++fl.t; const v4u uv = vmuld(n28, vsplat(n16[0])); set_vi(i3, i3 | i4); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0248: { ++fl.t; vflushd(r.vf[27], v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0u}); const v4u uv = vmaddd(nacc, n29, vsplat(n16[1])); { const v4u m = vload(r.vf[27]); vstore(r.vf[2], vsel(vload(r.vf[2]), v4u{m[1], m[2], m[3], m[0]}, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); n2 = vshadow(r.vf[2]); nacc = uv; }
L_0250: { ++fl.t; const v4u uv = vmaddd(nacc, n30, vsplat(n16[2])); set_vi(i12, i12 + 12u); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0258: { ++fl.t; const v4u uv = vsubd(n17, vsplat(n27[0])); set_vi(i10, i10 + 4u); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.push<1u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0260: { ++fl.t; const v4u uv = vaddd(nacc, (v4u)((v4f)n31 * (v4f)vsplat(0x3F800000u))); vstore(r.vf[5], vsel(vload(r.vf[5]), vload(r.vf[0]), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n5 = vshadow(r.vf[5]); n27 = vsel(n27, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0268: { ++fl.t; const v4u uv = vmuld(n6, vsplat(n6[2])); r.clip = 0u; fl.set_clip(r.clip, fl.t - 4u); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.push<4u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_0270: { ++fl.t; const v4u uv = vmuld(n17, vsplat(n17[2])); { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[17], q, 16); set_vi(i13, i13 + 1u); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.push<8u, kSticky>(uv); n17 = vshadow(r.vf[17]); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0278: { ++fl.t; const v4u uv = vmuld(n19, vsplat(n27[3])); set_vi(i1, (fl.mac() & 0xFFFFu) == i1 ? 1u : 0u); vstore(r.vf[6], uv); fl.stick<15u, kSticky>(uv); n6 = uv; }
L_0280: { ++fl.t; vflushd(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vmin(vload(r.vf[26]), vsplat(r.vf[20].w[0])); vefu(daz.csr, r, 115u, 27u, 2u); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n25 = vshadow(r.vf[25]); }
L_0288: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[25], r.vf[2].w[3]); set_vi(i3, i3 | i1); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_0290: { ++fl.t; const v4u uv = vmsubd(nacc, n2, vsplat(n3[1])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[15].w[0], r.vf[27].w[2]); fl.end_q(r, qb, 7u); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0298: { ++fl.t; vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vmsubd(nacc, n2, vsplat(n4[0])); { const v4u m = vload(r.vf[6]); vstore(r.vf[7], vsel(vload(r.vf[7]), v4u{m[1], m[2], m[3], m[0]}, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n7 = vshadow(r.vf[7]); n4 = vsel(n4, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_02A0: { ++fl.t; const v4u uv = vmaddd(nacc, n2, vsplat(n4[0])); { const v4u m = vload(r.vf[27]); vstore(r.vf[6], vsel(vload(r.vf[6]), v4u{m[1], m[2], m[3], m[0]}, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n6 = vshadow(r.vf[6]); n5 = vsel(n5, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_02A8: { ++fl.t; const v4u uv = vmaddd(nacc, n2, vsplat(n3[1])); set_vi(i1, (fl.clip() & 15u) ? 1u : 0u); vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n4 = vsel(n4, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_02B0: { ++fl.t; const v4u uv = vaddd(n25, n22); set_vi(i1, i3 | i1); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_02B8: { ++fl.t; const v4u uv = vitof(vload(r.vf[18]), 12); { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 25u) + 12, 2); set_vi(i1, v); } vstore(r.vf[18], uv); n18 = vshadow(r.vf[18]); }
L_02C0: { ++fl.t; vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); const v4u uv = vftoi(vload(r.vf[25]), 4); { const v4u m = vload(r.vf[7]); vstore(r.vf[2], vsel(vload(r.vf[2]), v4u{m[1], m[2], m[3], m[0]}, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n2 = vshadow(r.vf[2]); }
L_02C8: { ++fl.t; const v4u uv = vmaddd(nacc, n4, n1); { std::uint8_t *q = qword(mem, i2 + 0u); std::memcpy(q + 0, &r.vf[6].w[0], 4); std::memcpy(q + 4, &r.vf[6].w[1], 4); std::memcpy(q + 8, &r.vf[6].w[2], 4); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_02D0: { ++fl.t; const v4u uv = vmsubd(nacc, n4, n1); { std::uint8_t *q = qword(mem, i2 + 6u); std::memcpy(q + 4, &r.vf[6].w[1], 4); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n4 = vsel(n4, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_02D8: { ++fl.t; const v4u uv = vmuld(n18, n23); { std::uint8_t *q = qword(mem, i2 + 3u); std::memcpy(q + 0, &r.vf[6].w[0], 4); std::memcpy(q + 8, &r.vf[6].w[2], 4); } vstore(r.vf[7], uv); fl.stick<15u, kSticky>(uv); n7 = uv; }
L_02E0: { ++fl.t; const v4u uv = vmsubd(nacc, n5, n1); set_vi(i3, r.vf[26].w[3]); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_02E8: { ++fl.t; const v4u uv = vmaddd(nacc, n5, n1); { std::uint8_t *q = qword(mem, i2 + 9u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_02F0: { ++fl.t; { std::uint8_t *q = qword(mem, i2 + 6u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
L_02F8: { ++fl.t; { std::uint8_t *q = qword(mem, i2 + 3u); std::memcpy(q + 4, &r.vf[2].w[1], 4); } }
L_0300: { ++fl.t; set_vi(i1, i3 | i1); }
L_0308: { ++fl.t; const v4u uv = vftoi(vload(r.vf[3]), 4); { std::uint8_t *q = qword(mem, i2 + 11u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n3 = vshadow(r.vf[3]); }
L_0310: { ++fl.t; const v4u uv = vftoi(vload(r.vf[7]), 0); { std::uint8_t *q = qword(mem, i2 + 8u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } vstore(r.vf[2], uv); n2 = vshadow(r.vf[2]); }
L_0318: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { std::uint8_t *q = qword(mem, i2 + 5u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.push<1u, kSticky>(uv); n27 = vsel(n27, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0320: { ++fl.t; { std::uint8_t *q = qword(mem, i2 + 2u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0328: { ++fl.t; { std::uint8_t *q = qword(mem, i2 + 11u); std::memcpy(q + 0, &r.vf[3].w[0], 4); std::memcpy(q + 4, &r.vf[3].w[1], 4); std::memcpy(q + 8, &r.vf[3].w[2], 4); } }
L_0330: { ++fl.t; { std::uint8_t *q = qword(mem, i2 + 10u); std::memcpy(q, &r.vf[2], 16); } }
L_0338: { ++fl.t; const v4u uv = vftoi(vload(r.vf[4]), 4); { std::uint8_t *q = qword(mem, i2 + 7u); std::memcpy(q, &r.vf[2], 16); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n4 = vshadow(r.vf[4]); }
L_0340: { ++fl.t; const v4u uv = vftoi(vload(r.vf[6]), 4); r.vf[26].w[3] = r.p; vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n6 = vshadow(r.vf[6]); }
L_0348: { ++fl.t; const v4u uv = vftoi(vload(r.vf[1]), 4); { std::uint8_t *q = qword(mem, i2 + 4u); std::memcpy(q, &r.vf[2], 16); } vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n1 = vshadow(r.vf[1]); }
L_0350: { ++fl.t; { std::uint8_t *q = qword(mem, i2 + 1u); std::memcpy(q, &r.vf[2], 16); } }
L_0358: { ++fl.t; { std::uint8_t *q = qword(mem, i2 + 2u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); std::memcpy(q + 8, &r.vf[4].w[2], 4); } }
L_0360: { ++fl.t; { std::uint8_t *q = qword(mem, i2 + 5u); std::memcpy(q + 0, &r.vf[6].w[0], 4); std::memcpy(q + 4, &r.vf[6].w[1], 4); std::memcpy(q + 8, &r.vf[6].w[2], 4); } }
L_0368: { ++fl.t; { std::uint8_t *q = qword(mem, i2 + 8u); std::memcpy(q + 0, &r.vf[1].w[0], 4); std::memcpy(q + 4, &r.vf[1].w[1], 4); std::memcpy(q + 8, &r.vf[1].w[2], 4); } }
L_0370: { ++fl.t; set_vi(i15, (((880u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0378: { ++fl.t; set_vi(i1, 0u + 4u); }
    if (pend) { pend = false; goto L_0BB8; }
    vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[27], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); 
L_0380: { ++fl.t; set_vi(i1, i11 - i12); }
L_0388: { ++fl.t; set_vi(i6, i8 + 0u); }
L_0390: { ++fl.t; pend = static_cast<std::int16_t>(i1) > 0; }
L_0398: { ++fl.t; }
    if (pend) { pend = false; goto L_03C8; }
L_03A0: { ++fl.t; set_vi(i15, (((928u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_03A8: { ++fl.t; }
    if (pend) { pend = false; goto L_0B18; }
L_03B0: { ++fl.t; set_vi(i10, 0u + 0u); }
L_03B8: { ++fl.t; set_vi(i9, 0u + i12); }
L_03C0: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_03C8: { ++fl.t; pend = static_cast<std::int16_t>(i6) >= 0; }
L_03D0: { ++fl.t; set_vi(i8, r.vf[16].w[3]); }
    if (pend) { pend = false; goto L_01C8; }
L_03D8: { ++fl.t; set_vi(i5, 0u + 126u); }
L_03E0: { ++fl.t; pend = true; }
L_03E8: { ++fl.t; set_vi(i4, 0u + 57u); }
    if (pend) { pend = false; goto L_0CB8; }
    fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((1008u + sh) & 16383u));
    return;
L_0B18: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 114u) + 12, 2); set_vi(i3, v); } }
L_0B20: { ++fl.t; set_vi(i2, 0u + 32767u); }
L_0B28: { ++fl.t; set_vi(i2, i2 + 1u); }
L_0B30: { ++fl.t; set_vi(i2, i10 | i2); }
L_0B38: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 0u) + 12, 2); set_vi(i1, v); } }
L_0B40: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i2; std::memcpy(q + 0, &v, 4); } }
L_0B48: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 2u) + 12, 2); set_vi(i3, v); } }
L_0B50: { ++fl.t; }
L_0B58: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0B60: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 2u) + 12, 2); set_vi(i12, v); } }
L_0B68: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 4u) + 12, 2); set_vi(i11, v); } }
L_0B70: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0B78: { ++fl.t; vkick_last(daz, 1, i3); }
    if (pendj) { pendj = false; goto dispatch; }
L_0B80: { ++fl.t; ending = true; }
L_0B88: { ++fl.t; }
    if (ending) { fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; r.tpc = ((2960u + sh) & 16383u); return; }
    fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((2960u + sh) & 16383u));
    return;
L_0BB8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 31u); std::memcpy(&r.vf[1], q, 16); } n1 = vshadow(r.vf[1]); }
L_0BC0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 26u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); } n2 = vshadow(r.vf[2]); }
L_0BC8: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_0BD0: { ++fl.t; set_vi(i10, 0u + 0u); }
L_0BD8: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); std::memcpy(q, &r.vf[1], 16); } }
L_0BE0: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 1u); const std::uint32_t v = i1; std::memcpy(q + 0, &v, 4); } }
L_0BE8: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 2u); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); std::memcpy(q + 12, &r.vf[2].w[3], 4); } }
L_0BF0: { ++fl.t; set_vi(i9, i12 + 2u); }
L_0BF8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0C00: { ++fl.t; set_vi(i12, i12 + 3u); }
    if (pendj) { pendj = false; vflush(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflush(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflush(r.vf[27], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
    vflush(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflush(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflush(r.vf[27], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((3080u + sh) & 16383u));
    return;
L_0CB8: { ++fl.t; set_vi(i1, 0u + 1024u); }
L_0CC0: { ++fl.t; set_vi(i1, i6 & i1); }
L_0CC8: { ++fl.t; set_vi(i6, i6 + i6); }
L_0CD0: { ++fl.t; pend = 0u == i1; }
L_0CD8: { ++fl.t; set_vi(i6, i6 + i6); }
    if (pend) { pend = false; goto L_0D08; }
L_0CE0: { ++fl.t; set_vi(i15, (((3296u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0CE8: { ++fl.t; }
    if (pend) { pend = false; goto L_0B18; }
L_0CF0: { ++fl.t; set_vi(i10, 0u + 0u); }
L_0CF8: { ++fl.t; set_vi(i9, 0u + i12); }
L_0D00: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_0D08: { ++fl.t; }
L_0D10: { ++fl.t; pend = static_cast<std::int16_t>(i6) >= 0; }
L_0D18: { ++fl.t; set_vi(i6, i6 + i6); }
    if (pend) { pend = false; goto L_0D20; }
L_0D20: { ++fl.t; }
L_0D28: { ++fl.t; pend = static_cast<std::int16_t>(i6) >= 0; }
L_0D30: { ++fl.t; set_vi(i6, i6 + i6); }
    if (pend) { pend = false; goto L_0D88; }
L_0D38: { ++fl.t; set_vi(i15, (((3384u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0D40: { ++fl.t; }
    if (pend) { pend = false; goto L_0B80; }
L_0D48: { ++fl.t; jpc = (static_cast<std::uint32_t>(i5) * 8u) & 16383u; set_vi(i15, (((3400u + sh) & 16383u) + 16u) / 8u); pendj = true; }
L_0D50: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0D58: { ++fl.t; pend = static_cast<std::int16_t>(i6) < 0; }
L_0D60: { ++fl.t; }
    if (pend) { pend = false; goto L_0DB0; }
L_0D68: { ++fl.t; fl.flush_q(r); }
L_0D70: { ++fl.t; }
L_0D78: { ++fl.t; jpc = (static_cast<std::uint32_t>(i4) * 8u) & 16383u; pendj = true; }
L_0D80: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); r.vf[26].w[3] = r.p; vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.push<1u, kSticky>(uv); n27 = vsel(n27, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
    if (pendj) { pendj = false; vflushd(r.vf[27], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); goto dispatch; }
    vflushd(r.vf[27], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); 
L_0D88: { ++fl.t; }
L_0D90: { ++fl.t; pend = static_cast<std::int16_t>(i6) < 0; }
L_0D98: { ++fl.t; }
    if (pend) { pend = false; goto L_0DB0; }
L_0DA0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i4) * 8u) & 16383u; pendj = true; }
L_0DA8: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0DB0: { ++fl.t; pend = true; }
L_0DB8: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
    if (pend) { pend = false; goto L_00F8; }
    fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((3520u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, jpc);
    return;
}
static __attribute__((noinline, cold)) void vu1_B208C70FD7A091CC_c(Vu0Regs &r, std::uint8_t *mem, VuDaz &daz, std::uint32_t &hop) { vu1_B208C70FD7A091CC_b<true>(r, mem, daz, hop); }
void vu1_B208C70FD7A091CC(Vu0Regs &r, std::uint8_t *mem) {
    std::uint32_t hop = kNoHop;
    {
        VuDaz daz;
        if ((r.status & 0xC0u) == 0xC0u) vu1_B208C70FD7A091CC_b<false>(r, mem, daz, hop);
        else vu1_B208C70FD7A091CC_c(r, mem, daz, hop);
    }
    if (hop != kNoHop) vu::interpret(1, hop);
}

template <bool kSticky>
PS2_VU_BODY void vu1_2A878147B98F2030_b(Vu0Regs &r, std::uint8_t *mem, VuDaz &daz, std::uint32_t &hop) {
    (void)daz;
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 944u) & 16383u;
    (void)sh;
    v4u n1 = vshadow(r.vf[1]);
    v4u n2 = vshadow(r.vf[2]);
    v4u n3 = vshadow(r.vf[3]);
    v4u n4 = vshadow(r.vf[4]);
    v4u n5 = vshadow(r.vf[5]);
    v4u n6 = vshadow(r.vf[6]);
    v4u n7 = vshadow(r.vf[7]);
    v4u n16 = vshadow(r.vf[16]);
    v4u n17 = vshadow(r.vf[17]);
    v4u n18 = vshadow(r.vf[18]);
    v4u n19 = vshadow(r.vf[19]);
    v4u n20 = vshadow(r.vf[20]);
    v4u n21 = vshadow(r.vf[21]);
    v4u n22 = vshadow(r.vf[22]);
    v4u n23 = vshadow(r.vf[23]);
    v4u n24 = vshadow(r.vf[24]);
    v4u n25 = vshadow(r.vf[25]);
    v4u n27 = vshadow(r.vf[27]);
    v4u n28 = vshadow(r.vf[28]);
    v4u n29 = vshadow(r.vf[29]);
    v4u n30 = vshadow(r.vf[30]);
    v4u n31 = vshadow(r.vf[31]);
    v4u nacc = vshadow(r.acc);
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i3 = r.vi[3];
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i5 = r.vi[5];
    std::uint16_t i6 = r.vi[6];
    std::uint16_t i8 = r.vi[8];
    std::uint16_t i9 = r.vi[9];
    std::uint16_t i10 = r.vi[10];
    std::uint16_t i11 = r.vi[11];
    std::uint16_t i12 = r.vi[12];
    std::uint16_t i13 = r.vi[13];
    std::uint16_t i15 = r.vi[15];
    goto L_03B0;
L_00F8: { ++fl.t; set_vi(i1, 0u + 15u); }
L_0100: { ++fl.t; set_vi(i1, i8 & i1); }
L_0108: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1) + 4, 2); set_vi(i2, v); } }
L_0110: { fl.t += 4u; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; pendj = true; }
L_0118: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((288u + sh) & 16383u));
    return;
L_01C8: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n27[3])); { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[18], q, 16); set_vi(i13, i13 + 1u); } vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n18 = vshadow(r.vf[18]); n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_01D0: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[19], q, 16); set_vi(i13, i13 + 1u); } vstore(r.vf[2], uv); n19 = vshadow(r.vf[19]); n2 = vshadow(r.vf[2]); }
L_01D8: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vsplat(n20[2])); { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[16], q, 16); set_vi(i13, i13 + 1u); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n16 = vshadow(r.vf[16]); nacc = vsel(nacc, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_01E0: { ++fl.t; const v4u uv = vmuld(n17, vsplat(n17[3])); { const v4u m = vload(r.vf[17]); vstore(r.vf[1], vsel(vload(r.vf[1]), v4u{m[1], m[2], m[3], m[0]}, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n1 = vshadow(r.vf[1]); n3 = vsel(n3, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_01E8: { ++fl.t; vflushd(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); const v4u uv = vmax(vload(r.vf[25]), vsplat(r.vf[21].w[3])); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n25 = vshadow(r.vf[25]); }
L_01F0: { ++fl.t; const v4u uv = vmaddd(nacc, n20, vsplat(n27[2])); vstore(r.vf[17], vsel(vload(r.vf[17]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n17 = vsel(n17, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_01F8: { ++fl.t; const v4u uv = vsubd(n24, vsplat(n27[2])); set_vi(i1, 0u + 16u); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.push<1u, kSticky>(uv); }
L_0200: { ++fl.t; const v4u uv = vsubd(n27, n24); { const v4u m = vload(r.vf[1]); vstore(r.vf[6], vsel(vload(r.vf[6]), v4u{m[1], m[2], m[3], m[0]}, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); } vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.push<2u, kSticky>(uv); n6 = vshadow(r.vf[6]); n27 = vsel(n27, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_0208: { ++fl.t; const v4u uv = vmuld(n21, n25); set_vi(i4, 0u + 32u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0210: { ++fl.t; const v4u uv = vmuld(n17, n25); set_vi(i2, i12 + 0u); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.push<12u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_0218: { ++fl.t; vflushd(r.vf[17], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); const v4u uv = vmax(vload(r.vf[17]), vsplat(r.vf[20].w[1])); set_vi(i3, (fl.mac() & 0xFFFFu) == i1 ? 1u : 0u); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); }
L_0220: { ++fl.t; const v4u uv = vmuld(n6, vsplat(n6[3])); set_vi(i4, (fl.mac() & 0xFFFFu) == i4 ? 1u : 0u); vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n4 = vsel(n4, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0228: { ++fl.t; const v4u uv = vmuld(n1, n27); { const std::uint8_t *q = qword(mem, 0u + 44u); vstore(r.vf[17], vsel(vload(r.vf[17]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.stick<12u, kSticky>(uv); n17 = vshadow(r.vf[17]); n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_0230: { ++fl.t; vflushd(r.vf[1], v4u{0u, 0u, 0xFFFFFFFFu, 0u}); const v4u uv = vmuld(n24, n7); vstore(r.vf[25], vsel(vload(r.vf[25]), vload(r.vf[1]), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n25 = vshadow(r.vf[25]); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0238: { ++fl.t; const v4u uv = vmaddd(nacc, n24, vsplat(n7[1])); vstore(r.vf[4], vsel(vload(r.vf[4]), vload(r.vf[0]), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n4 = vshadow(r.vf[4]); n27 = vsel(n27, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0240: { ++fl.t; const v4u uv = vmuld(n28, vsplat(n16[0])); set_vi(i3, i3 | i4); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0248: { ++fl.t; vflushd(r.vf[27], v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0u}); const v4u uv = vmaddd(nacc, n29, vsplat(n16[1])); { const v4u m = vload(r.vf[27]); vstore(r.vf[2], vsel(vload(r.vf[2]), v4u{m[1], m[2], m[3], m[0]}, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); n2 = vshadow(r.vf[2]); nacc = uv; }
L_0250: { ++fl.t; const v4u uv = vmaddd(nacc, n30, vsplat(n16[2])); set_vi(i12, i12 + 12u); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0258: { ++fl.t; const v4u uv = vsubd(n17, vsplat(n27[0])); set_vi(i10, i10 + 4u); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.push<1u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0260: { ++fl.t; const v4u uv = vaddd(nacc, (v4u)((v4f)n31 * (v4f)vsplat(0x3F800000u))); vstore(r.vf[5], vsel(vload(r.vf[5]), vload(r.vf[0]), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n5 = vshadow(r.vf[5]); n27 = vsel(n27, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0268: { ++fl.t; const v4u uv = vmuld(n6, vsplat(n6[2])); r.clip = 0u; fl.set_clip(r.clip, fl.t - 4u); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.push<4u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_0270: { ++fl.t; const v4u uv = vmuld(n17, vsplat(n17[2])); { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[17], q, 16); set_vi(i13, i13 + 1u); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.push<8u, kSticky>(uv); n17 = vshadow(r.vf[17]); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0278: { ++fl.t; const v4u uv = vmuld(n19, vsplat(n27[3])); set_vi(i1, (fl.mac() & 0xFFFFu) == i1 ? 1u : 0u); vstore(r.vf[6], uv); fl.stick<15u, kSticky>(uv); n6 = uv; }
L_0280: { ++fl.t; vflushd(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vmin(vload(r.vf[26]), vsplat(r.vf[20].w[0])); vefu(daz.csr, r, 115u, 27u, 2u); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n25 = vshadow(r.vf[25]); }
L_0288: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[25], r.vf[2].w[3]); set_vi(i3, i3 | i1); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_0290: { ++fl.t; const v4u uv = vmsubd(nacc, n2, vsplat(n3[1])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[15].w[0], r.vf[27].w[2]); fl.end_q(r, qb, 7u); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0298: { ++fl.t; vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vmsubd(nacc, n2, vsplat(n4[0])); { const v4u m = vload(r.vf[6]); vstore(r.vf[7], vsel(vload(r.vf[7]), v4u{m[1], m[2], m[3], m[0]}, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n7 = vshadow(r.vf[7]); n4 = vsel(n4, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_02A0: { ++fl.t; const v4u uv = vmaddd(nacc, n2, vsplat(n4[0])); { const v4u m = vload(r.vf[27]); vstore(r.vf[6], vsel(vload(r.vf[6]), v4u{m[1], m[2], m[3], m[0]}, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n6 = vshadow(r.vf[6]); n5 = vsel(n5, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_02A8: { ++fl.t; const v4u uv = vmaddd(nacc, n2, vsplat(n3[1])); set_vi(i1, (fl.clip() & 15u) ? 1u : 0u); vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n4 = vsel(n4, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_02B0: { ++fl.t; const v4u uv = vaddd(n25, n22); set_vi(i1, i3 | i1); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_02B8: { ++fl.t; const v4u uv = vitof(vload(r.vf[18]), 12); { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 25u) + 12, 2); set_vi(i1, v); } vstore(r.vf[18], uv); n18 = vshadow(r.vf[18]); }
L_02C0: { ++fl.t; vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); const v4u uv = vftoi(vload(r.vf[25]), 4); { const v4u m = vload(r.vf[7]); vstore(r.vf[2], vsel(vload(r.vf[2]), v4u{m[1], m[2], m[3], m[0]}, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n2 = vshadow(r.vf[2]); }
L_02C8: { ++fl.t; const v4u uv = vmaddd(nacc, n4, n1); { std::uint8_t *q = qword(mem, i2 + 0u); std::memcpy(q + 0, &r.vf[6].w[0], 4); std::memcpy(q + 4, &r.vf[6].w[1], 4); std::memcpy(q + 8, &r.vf[6].w[2], 4); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_02D0: { ++fl.t; const v4u uv = vmsubd(nacc, n4, n1); { std::uint8_t *q = qword(mem, i2 + 6u); std::memcpy(q + 4, &r.vf[6].w[1], 4); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n4 = vsel(n4, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_02D8: { ++fl.t; const v4u uv = vmuld(n18, n23); { std::uint8_t *q = qword(mem, i2 + 3u); std::memcpy(q + 0, &r.vf[6].w[0], 4); std::memcpy(q + 8, &r.vf[6].w[2], 4); } vstore(r.vf[7], uv); fl.stick<15u, kSticky>(uv); n7 = uv; }
L_02E0: { ++fl.t; const v4u uv = vmsubd(nacc, n5, n1); set_vi(i3, r.vf[26].w[3]); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_02E8: { ++fl.t; const v4u uv = vmaddd(nacc, n5, n1); { std::uint8_t *q = qword(mem, i2 + 9u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_02F0: { ++fl.t; { std::uint8_t *q = qword(mem, i2 + 6u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
L_02F8: { ++fl.t; { std::uint8_t *q = qword(mem, i2 + 3u); std::memcpy(q + 4, &r.vf[2].w[1], 4); } }
L_0300: { ++fl.t; set_vi(i1, i3 | i1); }
L_0308: { ++fl.t; const v4u uv = vftoi(vload(r.vf[3]), 4); { std::uint8_t *q = qword(mem, i2 + 11u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n3 = vshadow(r.vf[3]); }
L_0310: { ++fl.t; const v4u uv = vftoi(vload(r.vf[7]), 0); { std::uint8_t *q = qword(mem, i2 + 8u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } vstore(r.vf[2], uv); n2 = vshadow(r.vf[2]); }
L_0318: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { std::uint8_t *q = qword(mem, i2 + 5u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.push<1u, kSticky>(uv); n27 = vsel(n27, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0320: { ++fl.t; { std::uint8_t *q = qword(mem, i2 + 2u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0328: { ++fl.t; { std::uint8_t *q = qword(mem, i2 + 11u); std::memcpy(q + 0, &r.vf[3].w[0], 4); std::memcpy(q + 4, &r.vf[3].w[1], 4); std::memcpy(q + 8, &r.vf[3].w[2], 4); } }
L_0330: { ++fl.t; { std::uint8_t *q = qword(mem, i2 + 10u); std::memcpy(q, &r.vf[2], 16); } }
L_0338: { ++fl.t; const v4u uv = vftoi(vload(r.vf[4]), 4); { std::uint8_t *q = qword(mem, i2 + 7u); std::memcpy(q, &r.vf[2], 16); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n4 = vshadow(r.vf[4]); }
L_0340: { ++fl.t; const v4u uv = vftoi(vload(r.vf[6]), 4); r.vf[26].w[3] = r.p; vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n6 = vshadow(r.vf[6]); }
L_0348: { ++fl.t; const v4u uv = vftoi(vload(r.vf[1]), 4); { std::uint8_t *q = qword(mem, i2 + 4u); std::memcpy(q, &r.vf[2], 16); } vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n1 = vshadow(r.vf[1]); }
L_0350: { ++fl.t; { std::uint8_t *q = qword(mem, i2 + 1u); std::memcpy(q, &r.vf[2], 16); } }
L_0358: { ++fl.t; { std::uint8_t *q = qword(mem, i2 + 2u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); std::memcpy(q + 8, &r.vf[4].w[2], 4); } }
L_0360: { ++fl.t; { std::uint8_t *q = qword(mem, i2 + 5u); std::memcpy(q + 0, &r.vf[6].w[0], 4); std::memcpy(q + 4, &r.vf[6].w[1], 4); std::memcpy(q + 8, &r.vf[6].w[2], 4); } }
L_0368: { ++fl.t; { std::uint8_t *q = qword(mem, i2 + 8u); std::memcpy(q + 0, &r.vf[1].w[0], 4); std::memcpy(q + 4, &r.vf[1].w[1], 4); std::memcpy(q + 8, &r.vf[1].w[2], 4); } }
L_0370: { ++fl.t; set_vi(i15, (((880u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0378: { ++fl.t; set_vi(i1, 0u + 4u); }
    if (pend) { pend = false; goto L_0BB8; }
L_0380: { ++fl.t; set_vi(i1, i11 - i12); }
L_0388: { ++fl.t; set_vi(i6, i8 + 0u); }
L_0390: { ++fl.t; pend = static_cast<std::int16_t>(i1) > 0; }
L_0398: { ++fl.t; }
    if (pend) { pend = false; vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[27], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto L_03C8; }
L_03A0: { ++fl.t; set_vi(i15, (((928u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_03A8: { ++fl.t; }
    if (pend) { pend = false; vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[27], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto L_0B18; }
    vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[27], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); 
L_03B0: { ++fl.t; set_vi(i10, 0u + 0u); }
L_03B8: { ++fl.t; set_vi(i9, 0u + i12); }
L_03C0: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_03C8: { ++fl.t; pend = static_cast<std::int16_t>(i6) >= 0; }
L_03D0: { ++fl.t; set_vi(i8, r.vf[16].w[3]); }
    if (pend) { pend = false; goto L_01C8; }
L_03D8: { ++fl.t; set_vi(i5, 0u + 126u); }
L_03E0: { ++fl.t; pend = true; }
L_03E8: { ++fl.t; set_vi(i4, 0u + 57u); }
    if (pend) { pend = false; goto L_0CB8; }
    fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((1008u + sh) & 16383u));
    return;
L_0B18: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 114u) + 12, 2); set_vi(i3, v); } }
L_0B20: { ++fl.t; set_vi(i2, 0u + 32767u); }
L_0B28: { ++fl.t; set_vi(i2, i2 + 1u); }
L_0B30: { ++fl.t; set_vi(i2, i10 | i2); }
L_0B38: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 0u) + 12, 2); set_vi(i1, v); } }
L_0B40: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i2; std::memcpy(q + 0, &v, 4); } }
L_0B48: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 2u) + 12, 2); set_vi(i3, v); } }
L_0B50: { ++fl.t; }
L_0B58: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0B60: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 2u) + 12, 2); set_vi(i12, v); } }
L_0B68: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 4u) + 12, 2); set_vi(i11, v); } }
L_0B70: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0B78: { ++fl.t; vkick_last(daz, 1, i3); }
    if (pendj) { pendj = false; goto dispatch; }
L_0B80: { ++fl.t; ending = true; }
L_0B88: { ++fl.t; }
    if (ending) { fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; r.tpc = ((2960u + sh) & 16383u); return; }
    fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((2960u + sh) & 16383u));
    return;
L_0BB8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 31u); std::memcpy(&r.vf[1], q, 16); } n1 = vshadow(r.vf[1]); }
L_0BC0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 26u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); } n2 = vshadow(r.vf[2]); }
L_0BC8: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_0BD0: { ++fl.t; set_vi(i10, 0u + 0u); }
L_0BD8: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); std::memcpy(q, &r.vf[1], 16); } }
L_0BE0: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 1u); const std::uint32_t v = i1; std::memcpy(q + 0, &v, 4); } }
L_0BE8: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 2u); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); std::memcpy(q + 12, &r.vf[2].w[3], 4); } }
L_0BF0: { ++fl.t; set_vi(i9, i12 + 2u); }
L_0BF8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0C00: { ++fl.t; set_vi(i12, i12 + 3u); }
    if (pendj) { pendj = false; vflush(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflush(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflush(r.vf[27], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
    vflush(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflush(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflush(r.vf[27], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((3080u + sh) & 16383u));
    return;
L_0CB8: { ++fl.t; set_vi(i1, 0u + 1024u); }
L_0CC0: { ++fl.t; set_vi(i1, i6 & i1); }
L_0CC8: { ++fl.t; set_vi(i6, i6 + i6); }
L_0CD0: { ++fl.t; pend = 0u == i1; }
L_0CD8: { ++fl.t; set_vi(i6, i6 + i6); }
    if (pend) { pend = false; goto L_0D08; }
L_0CE0: { ++fl.t; set_vi(i15, (((3296u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0CE8: { ++fl.t; }
    if (pend) { pend = false; goto L_0B18; }
L_0CF0: { ++fl.t; set_vi(i10, 0u + 0u); }
L_0CF8: { ++fl.t; set_vi(i9, 0u + i12); }
L_0D00: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_0D08: { ++fl.t; }
L_0D10: { ++fl.t; pend = static_cast<std::int16_t>(i6) >= 0; }
L_0D18: { ++fl.t; set_vi(i6, i6 + i6); }
    if (pend) { pend = false; goto L_0D20; }
L_0D20: { ++fl.t; }
L_0D28: { ++fl.t; pend = static_cast<std::int16_t>(i6) >= 0; }
L_0D30: { ++fl.t; set_vi(i6, i6 + i6); }
    if (pend) { pend = false; goto L_0D88; }
L_0D38: { ++fl.t; set_vi(i15, (((3384u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0D40: { ++fl.t; }
    if (pend) { pend = false; goto L_0B80; }
L_0D48: { ++fl.t; jpc = (static_cast<std::uint32_t>(i5) * 8u) & 16383u; set_vi(i15, (((3400u + sh) & 16383u) + 16u) / 8u); pendj = true; }
L_0D50: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0D58: { ++fl.t; pend = static_cast<std::int16_t>(i6) < 0; }
L_0D60: { ++fl.t; }
    if (pend) { pend = false; goto L_0DB0; }
L_0D68: { ++fl.t; fl.flush_q(r); }
L_0D70: { ++fl.t; }
L_0D78: { ++fl.t; jpc = (static_cast<std::uint32_t>(i4) * 8u) & 16383u; pendj = true; }
L_0D80: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); r.vf[26].w[3] = r.p; vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.push<1u, kSticky>(uv); n27 = vsel(n27, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
    if (pendj) { pendj = false; vflushd(r.vf[27], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); goto dispatch; }
    vflushd(r.vf[27], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); 
L_0D88: { ++fl.t; }
L_0D90: { ++fl.t; pend = static_cast<std::int16_t>(i6) < 0; }
L_0D98: { ++fl.t; }
    if (pend) { pend = false; goto L_0DB0; }
L_0DA0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i4) * 8u) & 16383u; pendj = true; }
L_0DA8: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0DB0: { ++fl.t; pend = true; }
L_0DB8: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
    if (pend) { pend = false; goto L_00F8; }
    fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((3520u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, jpc);
    return;
}
static __attribute__((noinline, cold)) void vu1_2A878147B98F2030_c(Vu0Regs &r, std::uint8_t *mem, VuDaz &daz, std::uint32_t &hop) { vu1_2A878147B98F2030_b<true>(r, mem, daz, hop); }
void vu1_2A878147B98F2030(Vu0Regs &r, std::uint8_t *mem) {
    std::uint32_t hop = kNoHop;
    {
        VuDaz daz;
        if ((r.status & 0xC0u) == 0xC0u) vu1_2A878147B98F2030_b<false>(r, mem, daz, hop);
        else vu1_2A878147B98F2030_c(r, mem, daz, hop);
    }
    if (hop != kNoHop) vu::interpret(1, hop);
}

template <bool kSticky>
static void vu1_60F0BA8EB510BD91_s(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 3312u) & 16383u;
    (void)sh;
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i5 = r.vi[5];
    std::uint16_t i6 = r.vi[6];
    std::uint16_t i8 = r.vi[8];
    std::uint16_t i9 = r.vi[9];
    std::uint16_t i10 = r.vi[10];
    std::uint16_t i12 = r.vi[12];
    std::uint16_t i15 = r.vi[15];
    goto L_0CF0;
L_00F8: { ++fl.t; set_vi(i1, 0u + 15u); }
L_0100: { ++fl.t; set_vi(i1, i8 & i1); }
L_0108: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1) + 4, 2); set_vi(i2, v); } }
L_0110: { fl.t += 4u; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; pendj = true; }
L_0118: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[6] = i6; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((288u + sh) & 16383u));
    return;
L_0B80: { ++fl.t; ending = true; }
L_0B88: { ++fl.t; }
    if (ending) { fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[6] = i6; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; r.tpc = ((2960u + sh) & 16383u); return; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[6] = i6; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((2960u + sh) & 16383u));
    return;
L_0CF0: { ++fl.t; set_vi(i10, 0u + 0u); }
L_0CF8: { ++fl.t; set_vi(i9, 0u + i12); }
L_0D00: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_0D08: { ++fl.t; }
L_0D10: { ++fl.t; pend = static_cast<std::int16_t>(i6) >= 0; }
L_0D18: { ++fl.t; set_vi(i6, i6 + i6); }
    if (pend) { pend = false; goto L_0D20; }
L_0D20: { ++fl.t; }
L_0D28: { ++fl.t; pend = static_cast<std::int16_t>(i6) >= 0; }
L_0D30: { ++fl.t; set_vi(i6, i6 + i6); }
    if (pend) { pend = false; goto L_0D88; }
L_0D38: { ++fl.t; set_vi(i15, (((3384u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0D40: { ++fl.t; }
    if (pend) { pend = false; goto L_0B80; }
L_0D48: { ++fl.t; jpc = (static_cast<std::uint32_t>(i5) * 8u) & 16383u; set_vi(i15, (((3400u + sh) & 16383u) + 16u) / 8u); pendj = true; }
L_0D50: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0D58: { ++fl.t; pend = static_cast<std::int16_t>(i6) < 0; }
L_0D60: { ++fl.t; }
    if (pend) { pend = false; goto L_0DB0; }
L_0D68: { ++fl.t; fl.flush_q(r); }
L_0D70: { ++fl.t; }
L_0D78: { ++fl.t; jpc = (static_cast<std::uint32_t>(i4) * 8u) & 16383u; pendj = true; }
L_0D80: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd_eager(r.q)); r.vf[26].w[3] = r.p; vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.push_last<1u, kSticky>(uv); }
    if (pendj) { pendj = false; goto dispatch; }
L_0D88: { ++fl.t; }
L_0D90: { ++fl.t; pend = static_cast<std::int16_t>(i6) < 0; }
L_0D98: { ++fl.t; }
    if (pend) { pend = false; goto L_0DB0; }
L_0DA0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i4) * 8u) & 16383u; pendj = true; }
L_0DA8: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0DB0: { ++fl.t; pend = true; }
L_0DB8: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
    if (pend) { pend = false; goto L_00F8; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[6] = i6; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((3520u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[6] = i6; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

static __attribute__((noinline, cold)) void vu1_60F0BA8EB510BD91_c(Vu0Regs &r, std::uint8_t *mem) { vu1_60F0BA8EB510BD91_s<true>(r, mem); }

void vu1_60F0BA8EB510BD91(Vu0Regs &r, std::uint8_t *mem) {
    if ((r.status & 0xC0u) == 0xC0u) vu1_60F0BA8EB510BD91_s<false>(r, mem);
    else vu1_60F0BA8EB510BD91_c(r, mem);
}

template <bool kSticky>
static void vu1_6935A48E2D8D255D_s(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 1008u) & 16383u;
    (void)sh;
    v4u n16 = vshadow_eager(r.vf[16]);
    v4u n28 = vshadow_eager(r.vf[28]);
    v4u n29 = vshadow_eager(r.vf[29]);
    v4u n30 = vshadow_eager(r.vf[30]);
    v4u n31 = vshadow_eager(r.vf[31]);
    v4u nacc = vshadow_eager(r.acc);
    std::uint16_t i15 = r.vi[15];
    goto L_03F0;
L_03F0: { ++fl.t; const v4u uv = vmuln(n28, vsplat(n16[0])); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_03F8: { ++fl.t; const v4u uv = vmaddn(nacc, n29, vsplat(n16[1])); vstore(r.acc, uv); fl.push_last<15u, kSticky>(uv); nacc = uv; }
L_0400: { ++fl.t; const v4u uv = vmaddn(nacc, n30, vsplat(n16[2])); vstore(r.acc, uv); fl.push_last<15u, kSticky>(uv); nacc = uv; }
L_0408: { ++fl.t; const v4u uv = vaddn(nacc, (v4u)((v4f)n31 * (v4f)vsplat(0x3F800000u))); vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); }
L_0410: { fl.t += 4u; efu(r, 115u, 27u, 2u); }
L_0418: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0420: { ++fl.t; { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[15].w[0], r.vf[27].w[2]); fl.end_q(r, qb, 7u); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); fl.flush_q(r); vu::interpret(1, ((1064u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); fl.flush_q(r); vu::interpret(1, jpc);
    return;
}

static __attribute__((noinline, cold)) void vu1_6935A48E2D8D255D_c(Vu0Regs &r, std::uint8_t *mem) { vu1_6935A48E2D8D255D_s<true>(r, mem); }

void vu1_6935A48E2D8D255D(Vu0Regs &r, std::uint8_t *mem) {
    if ((r.status & 0xC0u) == 0xC0u) vu1_6935A48E2D8D255D_s<false>(r, mem);
    else vu1_6935A48E2D8D255D_c(r, mem);
}

template <bool kSticky>
PS2_VU_BODY void vu1_DCBD82F021988ECE_b(Vu0Regs &r, std::uint8_t *mem, VuDaz &daz, std::uint32_t &hop) {
    (void)daz;
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 8192u) & 16383u;
    (void)sh;
    v4u n1 = vshadow(r.vf[1]);
    v4u n2 = vshadow(r.vf[2]);
    v4u n3 = vshadow(r.vf[3]);
    v4u n4 = vshadow(r.vf[4]);
    v4u n5 = vshadow(r.vf[5]);
    v4u n6 = vshadow(r.vf[6]);
    v4u n7 = vshadow(r.vf[7]);
    v4u n8 = vshadow(r.vf[8]);
    v4u n9 = vshadow(r.vf[9]);
    v4u n10 = vshadow(r.vf[10]);
    v4u n11 = vshadow(r.vf[11]);
    v4u n12 = vshadow(r.vf[12]);
    v4u n13 = vshadow(r.vf[13]);
    v4u n14 = vshadow(r.vf[14]);
    v4u n18 = vshadow(r.vf[18]);
    v4u n19 = vshadow(r.vf[19]);
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i3 = r.vi[3];
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i5 = r.vi[5];
    std::uint16_t i6 = r.vi[6];
    std::uint16_t i7 = r.vi[7];
    std::uint16_t i8 = r.vi[8];
    std::uint16_t i9 = r.vi[9];
    std::uint16_t i10 = r.vi[10];
    std::uint16_t i11 = r.vi[11];
    std::uint16_t i12 = r.vi[12];
    std::uint16_t i15 = r.vi[15];
    goto L_2000;
L_1CB0: { ++fl.t; }
L_1CB8: { ++fl.t; }
L_1CC0: { ++fl.t; }
L_1CC8: { ++fl.t; { const std::uint8_t *q = qword(mem, i10 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_1CD0: { ++fl.t; }
L_1CD8: { ++fl.t; }
L_1CE0: { ++fl.t; }
L_1CE8: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_1CF0: { ++fl.t; }
L_1CF8: { ++fl.t; }
L_1D00: { ++fl.t; }
L_1D08: { ++fl.t; set_vi(i1, (fl.clip() & 1u) ? 1u : 0u); }
L_1D10: { ++fl.t; pend = 0u != i1; }
L_1D18: { ++fl.t; }
    if (pend) { pend = false; goto L_1EB0; }
L_1D20: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n1[3])); { const std::uint8_t *q = qword(mem, i10 + 0u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n2 = vshadow(r.vf[2]); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_1D28: { ++fl.t; { const std::uint8_t *q = qword(mem, i10 + 1u); std::memcpy(&r.vf[7], q, 16); } n7 = vshadow(r.vf[7]); }
L_1D30: { ++fl.t; r.i = 3212836864u; }
L_1D38: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 38u); vstore(r.vf[10], vsel(vload(r.vf[10]), vload_ptr(q), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } n10 = vshadow(r.vf[10]); }
L_1D40: { ++fl.t; vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); const v4u uv = vsubd(n2, n1); vstore(r.vf[6], vsel(vload(r.vf[6]), vload(r.vf[9]), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n6 = vshadow(r.vf[6]); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1D48: { ++fl.t; const v4u uv = vsubd(n7, n3); { const std::uint8_t *q = qword(mem, i10 + 2u); std::memcpy(&r.vf[7], q, 16); } vstore(r.vf[8], uv); fl.stick<15u, kSticky>(uv); n7 = vshadow(r.vf[7]); n8 = uv; }
L_1D50: { ++fl.t; const v4u uv = vsubd(n9, n3); { const std::uint8_t *q = qword(mem, i10 + 3u); std::memcpy(&r.vf[9], q, 16); } vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n9 = vshadow(r.vf[9]); n12 = vsel(n12, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_1D58: { ++fl.t; const v4u uv = vmuld(n10, n1); set_vi(i1, 0u + i8); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_1D60: { ++fl.t; const v4u uv = vmuld(n6, vsplat(n1[2])); set_vi(i8, i8 + 4u); vstore(r.vf[11], vsel(vload(r.vf[11]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n11 = vsel(n11, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_1D68: { ++fl.t; const v4u uv = vmuld(n10, n2); set_vi(i4, i2 + i3); vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n10 = vsel(n10, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_1D70: { ++fl.t; const v4u uv = vmuld(n6, vsplat(n2[2])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[12].w[0], r.vf[8].w[0]); fl.end_q(r, qb, 7u); } vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n8 = vsel(n8, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_1D78: { ++fl.t; const v4u uv = vsubd(n7, n4); { std::uint8_t *q = qword(mem, i4 + 0u); const std::uint32_t v = i1; std::memcpy(q + 8, &v, 4); } vstore(r.vf[7], uv); fl.stick<15u, kSticky>(uv); n7 = uv; }
L_1D80: { ++fl.t; const v4u uv = vmuld(n11, vfix(vsplat(r.i))); set_vi(i3, i3 + 1u); vstore(r.vf[11], vsel(vload(r.vf[11]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n11 = vsel(n11, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_1D88: { ++fl.t; const v4u uv = vsubd(n9, n5); vstore(r.vf[9], uv); fl.stick<15u, kSticky>(uv); n9 = uv; }
L_1D90: { ++fl.t; }
L_1D98: { ++fl.t; const v4u uv = vaddd(n10, n8); vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n8 = vsel(n8, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_1DA0: { ++fl.t; const v4u uv = vsubd(n11, n3); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_1DA8: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_1DB0: { ++fl.t; }
L_1DB8: { ++fl.t; }
L_1DC0: { ++fl.t; { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[3].w[0], r.vf[8].w[0]); fl.end_q(r, qb, 7u); } }
L_1DC8: { ++fl.t; const v4u uv = vmuld(n8, vsplat(n2[3])); vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<7u, kSticky>(uv); n8 = vsel(n8, uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_1DD0: { ++fl.t; const v4u uv = vmuld(n9, vsplat(n2[3])); vstore(r.vf[9], uv); fl.stick<15u, kSticky>(uv); n9 = uv; }
L_1DD8: { ++fl.t; }
L_1DE0: { ++fl.t; }
L_1DE8: { ++fl.t; const v4u uv = vaddd(n3, n8); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<7u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_1DF0: { ++fl.t; const v4u uv = vaddd(n5, n9); vstore(r.vf[3], uv); fl.stick<15u, kSticky>(uv); n3 = uv; }
L_1DF8: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_1E00: { ++fl.t; }
L_1E08: { ++fl.t; vflushd(r.vf[6], v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i1 + 1u); std::memcpy(q, &r.vf[6], 16); } }
L_1E10: { ++fl.t; vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i1 + 3u); std::memcpy(q, &r.vf[3], 16); } }
L_1E18: { ++fl.t; const v4u uv = vmuld(n2, vsplat(n5[3])); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1E20: { ++fl.t; const v4u uv = vmuld(n7, vsplat(n5[3])); vstore(r.vf[5], uv); fl.stick<15u, kSticky>(uv); n5 = uv; }
L_1E28: { ++fl.t; }
L_1E30: { ++fl.t; }
L_1E38: { ++fl.t; const v4u uv = vaddd(n1, n3); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1E40: { ++fl.t; const v4u uv = vaddd(n4, n5); vstore(r.vf[4], uv); fl.push_last<15u, kSticky>(uv); n4 = uv; }
L_1E48: { ++fl.t; }
L_1E50: { ++fl.t; }
L_1E58: { ++fl.t; vflushd(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); { std::uint8_t *q = qword(mem, i1 + 0u); std::memcpy(q + 0, &r.vf[1].w[0], 4); std::memcpy(q + 4, &r.vf[1].w[1], 4); std::memcpy(q + 8, &r.vf[1].w[2], 4); } }
L_1E60: { ++fl.t; pend = 0u == i12; }
L_1E68: { ++fl.t; vflushd(r.vf[4], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i1 + 2u); std::memcpy(q, &r.vf[4], 16); } }
    if (pend) { pend = false; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_2168; }
L_1E70: { ++fl.t; set_vi(i12, i12 - 1u); }
L_1E78: { ++fl.t; set_vi(i9, 0u + i10); }
L_1E80: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i11 + 0u) + 8, 2); set_vi(i10, v); } }
L_1E88: { ++fl.t; set_vi(i11, i11 + 1u); }
L_1E90: { ++fl.t; pend = 0u != i12; }
L_1E98: { ++fl.t; }
    if (pend) { pend = false; vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_1F10; }
L_1EA0: { ++fl.t; pend = true; }
L_1EA8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i10, v); } }
    if (pend) { pend = false; vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_1F10; }
    vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); 
L_1EB0: { ++fl.t; { const std::uint8_t *q = qword(mem, i10 + 2u); std::memcpy(&r.vf[4], q, 16); } n4 = vshadow(r.vf[4]); }
L_1EB8: { ++fl.t; vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_1EC0: { ++fl.t; { const std::uint8_t *q = qword(mem, i10 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_1EC8: { ++fl.t; pend = 0u == i12; }
L_1ED0: { ++fl.t; { const std::uint8_t *q = qword(mem, i10 + 3u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
    if (pend) { pend = false; goto L_2168; }
L_1ED8: { ++fl.t; set_vi(i12, i12 - 1u); }
L_1EE0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i11 + 0u) + 8, 2); set_vi(i10, v); } }
L_1EE8: { ++fl.t; set_vi(i11, i11 + 1u); }
L_1EF0: { ++fl.t; pend = 0u != i12; }
L_1EF8: { ++fl.t; }
    if (pend) { pend = false; goto L_1CB0; }
L_1F00: { ++fl.t; pend = true; }
L_1F08: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i10, v); } }
    if (pend) { pend = false; goto L_1CB0; }
L_1F10: { ++fl.t; }
L_1F18: { ++fl.t; }
L_1F20: { ++fl.t; }
L_1F28: { ++fl.t; { const std::uint8_t *q = qword(mem, i10 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_1F30: { ++fl.t; }
L_1F38: { ++fl.t; }
L_1F40: { ++fl.t; }
L_1F48: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_1F50: { ++fl.t; }
L_1F58: { ++fl.t; }
L_1F60: { ++fl.t; }
L_1F68: { ++fl.t; set_vi(i1, (fl.clip() & 1u) ? 1u : 0u); }
L_1F70: { ++fl.t; pend = 0u != i1; }
L_1F78: { ++fl.t; }
    if (pend) { pend = false; goto L_1FE0; }
L_1F80: { ++fl.t; set_vi(i1, i2 + i3); }
L_1F88: { ++fl.t; set_vi(i3, i3 + 1u); }
L_1F90: { ++fl.t; pend = 0u == i12; }
L_1F98: { ++fl.t; { std::uint8_t *q = qword(mem, i1 + 0u); const std::uint32_t v = i9; std::memcpy(q + 8, &v, 4); } }
    if (pend) { pend = false; goto L_2168; }
L_1FA0: { ++fl.t; set_vi(i12, i12 - 1u); }
L_1FA8: { ++fl.t; set_vi(i9, 0u + i10); }
L_1FB0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i11 + 0u) + 8, 2); set_vi(i10, v); } }
L_1FB8: { ++fl.t; set_vi(i11, i11 + 1u); }
L_1FC0: { ++fl.t; pend = 0u != i12; }
L_1FC8: { ++fl.t; }
    if (pend) { pend = false; goto L_1F10; }
L_1FD0: { ++fl.t; pend = true; }
L_1FD8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i10, v); } }
    if (pend) { pend = false; goto L_1F10; }
L_1FE0: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n1[3])); { const std::uint8_t *q = qword(mem, i9 + 0u); vstore(r.vf[6], vsel(vload(r.vf[6]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n6 = vshadow(r.vf[6]); n4 = vsel(n4, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_1FE8: { ++fl.t; { const std::uint8_t *q = qword(mem, i10 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_1FF0: { ++fl.t; { const std::uint8_t *q = qword(mem, i9 + 1u); std::memcpy(&r.vf[9], q, 16); } n9 = vshadow(r.vf[9]); }
L_1FF8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 38u); vstore(r.vf[5], vsel(vload(r.vf[5]), vload_ptr(q), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } n5 = vshadow(r.vf[5]); }
    vflushd(r.vf[4], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); 
L_2000: { ++fl.t; vstore(r.vf[7], vsel(vload(r.vf[7]), vload(r.vf[4]), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n7 = vshadow(r.vf[7]); }
L_2008: { ++fl.t; const v4u uv = vsubd(n1, n6); vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n3 = vshadow(r.vf[3]); n8 = vsel(n8, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2010: { ++fl.t; const v4u uv = vsubd(n4, n9); r.i = 3212836864u; vstore(r.vf[11], vsel(vload(r.vf[11]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n11 = vsel(n11, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2018: { ++fl.t; const v4u uv = vmuld(n5, n6); { const std::uint8_t *q = qword(mem, i9 + 3u); std::memcpy(&r.vf[10], q, 16); } vstore(r.vf[14], vsel(vload(r.vf[14]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n10 = vshadow(r.vf[10]); n14 = vsel(n14, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2020: { ++fl.t; const v4u uv = vmuld(n7, vsplat(n6[2])); { const std::uint8_t *q = qword(mem, i9 + 2u); std::memcpy(&r.vf[2], q, 16); } vstore(r.vf[13], vsel(vload(r.vf[13]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n2 = vshadow(r.vf[2]); n13 = vsel(n13, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2028: { ++fl.t; const v4u uv = vsubd(n3, n9); { const std::uint8_t *q = qword(mem, i10 + 2u); std::memcpy(&r.vf[4], q, 16); } vstore(r.vf[12], uv); fl.stick<15u, kSticky>(uv); n4 = vshadow(r.vf[4]); n12 = uv; }
L_2030: { ++fl.t; const v4u uv = vmuld(n5, n8); { const std::uint8_t *q = qword(mem, i10 + 3u); std::memcpy(&r.vf[5], q, 16); } vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n5 = vshadow(r.vf[5]); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2038: { ++fl.t; const v4u uv = vmuld(n7, vsplat(n8[2])); set_vi(i1, i2 + i3); vstore(r.vf[19], vsel(vload(r.vf[19]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n19 = vsel(n19, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2040: { ++fl.t; const v4u uv = vmuld(n13, vfix(vsplat(r.i))); { std::uint8_t *q = qword(mem, i1 + 1u); const std::uint32_t v = i10; std::memcpy(q + 8, &v, 4); } vstore(r.vf[18], vsel(vload(r.vf[18]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n18 = vsel(n18, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2048: { ++fl.t; const v4u uv = vsubd(n4, n2); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[11].w[0], r.vf[12].w[0]); fl.end_q(r, qb, 7u); } vstore(r.vf[11], uv); fl.stick<15u, kSticky>(uv); n11 = uv; }
L_2050: { ++fl.t; const v4u uv = vsubd(n5, n10); { std::uint8_t *q = qword(mem, i1 + 0u); const std::uint32_t v = i9; std::memcpy(q + 8, &v, 4); } vstore(r.vf[13], uv); fl.stick<15u, kSticky>(uv); n13 = uv; }
L_2058: { ++fl.t; const v4u uv = vaddd(n9, n19); set_vi(i3, i3 + 2u); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2060: { ++fl.t; const v4u uv = vsubd(n18, n14); vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n12 = vsel(n12, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2068: { ++fl.t; }
L_2070: { ++fl.t; }
L_2078: { ++fl.t; }
L_2080: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[12].w[0], r.vf[9].w[0]); fl.end_q(r, qb, 7u); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_2088: { ++fl.t; }
L_2090: { ++fl.t; }
L_2098: { ++fl.t; }
L_20A0: { ++fl.t; const v4u uv = vmuld(n12, vsplat(n6[3])); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<7u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_20A8: { ++fl.t; const v4u uv = vmuld(n13, vsplat(n6[3])); vstore(r.vf[12], uv); fl.stick<15u, kSticky>(uv); n12 = uv; }
L_20B0: { ++fl.t; }
L_20B8: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_20C0: { ++fl.t; const v4u uv = vaddd(n9, n7); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<7u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_20C8: { ++fl.t; const v4u uv = vaddd(n10, n12); vstore(r.vf[12], uv); fl.stick<15u, kSticky>(uv); n12 = uv; }
L_20D0: { ++fl.t; }
L_20D8: { ++fl.t; const v4u uv = vmuld(n8, vsplat(n6[3])); vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n10 = vsel(n10, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_20E0: { ++fl.t; vflushd(r.vf[7], v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vmuld(n11, vsplat(n6[3])); { std::uint8_t *q = qword(mem, i10 + 1u); std::memcpy(q, &r.vf[7], 16); } vstore(r.vf[9], uv); fl.stick<15u, kSticky>(uv); n9 = uv; }
L_20E8: { ++fl.t; vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i10 + 3u); std::memcpy(q, &r.vf[12], 16); } }
L_20F0: { ++fl.t; }
L_20F8: { ++fl.t; const v4u uv = vaddd(n6, n10); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2100: { ++fl.t; const v4u uv = vaddd(n2, n9); vstore(r.vf[2], uv); fl.push_last<15u, kSticky>(uv); n2 = uv; }
L_2108: { ++fl.t; }
L_2110: { ++fl.t; }
L_2118: { ++fl.t; vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); { std::uint8_t *q = qword(mem, i10 + 0u); std::memcpy(q + 0, &r.vf[6].w[0], 4); std::memcpy(q + 4, &r.vf[6].w[1], 4); std::memcpy(q + 8, &r.vf[6].w[2], 4); } }
L_2120: { ++fl.t; pend = 0u == i12; }
L_2128: { ++fl.t; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i10 + 2u); std::memcpy(q, &r.vf[2], 16); } }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); goto L_2168; }
L_2130: { ++fl.t; set_vi(i12, i12 - 1u); }
L_2138: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i11 + 0u) + 8, 2); set_vi(i10, v); } }
L_2140: { ++fl.t; set_vi(i11, i11 + 1u); }
L_2148: { ++fl.t; pend = 0u != i12; }
L_2150: { ++fl.t; }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); goto L_1CB0; }
L_2158: { ++fl.t; pend = true; }
L_2160: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i10, v); } }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); goto L_1CB0; }
    vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); 
L_2168: { ++fl.t; }
L_2170: { ++fl.t; pend = 0u == i3; }
L_2178: { ++fl.t; }
    if (pend) { pend = false; vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); goto L_3250; }
L_2180: { ++fl.t; set_vi(i4, 0u + 7u); }
L_2188: { ++fl.t; set_vi(i6, 0u + i4); }
L_2190: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i6 + 0u) + 8, 2); set_vi(i5, v); } }
L_2198: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 44u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } n1 = vshadow(r.vf[1]); }
L_21A0: { ++fl.t; set_vi(i6, i6 + 1u); }
L_21A8: { ++fl.t; set_vi(i9, 0u + i3); }
L_21B0: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_21B8: { ++fl.t; set_vi(i7, i6 + 1u); }
L_21C0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i6 + 0u) + 8, 2); set_vi(i6, v); } }
L_21C8: { ++fl.t; set_vi(i3, 0u + 0u); }
L_21D0: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); set_vi(i2, 0u + 0u); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_21D8: { ++fl.t; set_vi(i9, i9 - 1u); }
L_21E0: { ++fl.t; }
L_21E8: { ++fl.t; }
L_21F0: { ++fl.t; set_vi(i1, (fl.clip() & 2u) ? 1u : 0u); }
L_21F8: { ++fl.t; pend = 0u == i1; }
L_2200: { ++fl.t; }
    if (pend) { pend = false; vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); goto L_24A8; }
L_2208: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 2u); std::memcpy(&r.vf[4], q, 16); } n4 = vshadow(r.vf[4]); }
L_2210: { ++fl.t; vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_2218: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_2220: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 3u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
    vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); 
L_2228: { ++fl.t; }
L_2230: { ++fl.t; }
L_2238: { ++fl.t; }
L_2240: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_2248: { ++fl.t; }
L_2250: { ++fl.t; }
L_2258: { ++fl.t; }
L_2260: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2268: { ++fl.t; }
L_2270: { ++fl.t; }
L_2278: { ++fl.t; }
L_2280: { ++fl.t; set_vi(i1, (fl.clip() & 2u) ? 1u : 0u); }
L_2288: { ++fl.t; pend = 0u != i1; }
L_2290: { ++fl.t; }
    if (pend) { pend = false; goto L_2448; }
L_2298: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n1[3])); r.i = 3212836864u; vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_22A0: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 0u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n2 = vshadow(r.vf[2]); }
L_22A8: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(&r.vf[7], q, 16); } n7 = vshadow(r.vf[7]); }
L_22B0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 38u); vstore(r.vf[9], vsel(vload(r.vf[9]), vload_ptr(q), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } n9 = vshadow(r.vf[9]); }
L_22B8: { ++fl.t; const v4u uv = vmuld(n6, vfix(vsplat(r.i))); { const std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(&r.vf[6], q, 16); } vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n6 = vshadow(r.vf[6]); n10 = vsel(n10, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_22C0: { ++fl.t; const v4u uv = vsubd(n2, n1); { const std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(&r.vf[8], q, 16); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n8 = vshadow(r.vf[8]); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_22C8: { ++fl.t; const v4u uv = vsubd(n7, n3); set_vi(i1, 0u + i8); vstore(r.vf[7], uv); fl.stick<15u, kSticky>(uv); n7 = uv; }
L_22D0: { ++fl.t; set_vi(i8, i8 + 4u); }
L_22D8: { ++fl.t; vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); const v4u uv = vsubd(n10, n3); vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[10]), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vshadow(r.vf[3]); n10 = vsel(n10, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_22E0: { ++fl.t; set_vi(i5, i2 + i3); }
L_22E8: { ++fl.t; const v4u uv = vsubd(n6, n4); { std::uint8_t *q = qword(mem, i5 + 0u); const std::uint32_t v = i1; std::memcpy(q + 8, &v, 4); } vstore(r.vf[6], uv); fl.stick<15u, kSticky>(uv); n6 = uv; }
L_22F0: { ++fl.t; const v4u uv = vsubd(n8, n5); set_vi(i3, i3 + 1u); vstore(r.vf[8], uv); fl.stick<15u, kSticky>(uv); n8 = uv; }
L_22F8: { ++fl.t; const v4u uv = vmuld(n3, vsplat(n1[2])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[10].w[0], r.vf[7].w[0]); fl.end_q(r, qb, 7u); } vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n10 = vsel(n10, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2300: { ++fl.t; const v4u uv = vmuld(n3, vsplat(n2[2])); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2308: { ++fl.t; const v4u uv = vmuld(n9, n2); vstore(r.vf[11], vsel(vload(r.vf[11]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n11 = vsel(n11, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2310: { ++fl.t; const v4u uv = vmuld(n9, n1); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2318: { ++fl.t; const v4u uv = vmuld(n10, vfix(vsplat(r.i))); vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n10 = vsel(n10, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2320: { ++fl.t; }
L_2328: { ++fl.t; const v4u uv = vaddd(n11, n7); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2330: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_2338: { ++fl.t; const v4u uv = vsubd(n10, n9); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2340: { ++fl.t; }
L_2348: { ++fl.t; }
L_2350: { ++fl.t; const v4u uv = vmuld(n7, vsplat(n2[3])); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<7u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_2358: { ++fl.t; const v4u uv = vmuld(n8, vsplat(n2[3])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[9].w[0], r.vf[7].w[0]); fl.end_q(r, qb, 7u); } vstore(r.vf[8], uv); fl.stick<15u, kSticky>(uv); n8 = uv; }
L_2360: { ++fl.t; }
L_2368: { ++fl.t; }
L_2370: { ++fl.t; const v4u uv = vaddd(n3, n7); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<7u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_2378: { ++fl.t; const v4u uv = vaddd(n5, n8); vstore(r.vf[5], uv); fl.stick<15u, kSticky>(uv); n5 = uv; }
L_2380: { ++fl.t; }
L_2388: { ++fl.t; }
L_2390: { ++fl.t; fl.flush_q(r); vflushd(r.vf[3], v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { std::uint8_t *q = qword(mem, i1 + 1u); std::memcpy(q, &r.vf[3], 16); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_2398: { ++fl.t; vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i1 + 3u); std::memcpy(q, &r.vf[5], 16); } }
L_23A0: { ++fl.t; }
L_23A8: { ++fl.t; }
L_23B0: { ++fl.t; const v4u uv = vmuld(n2, vsplat(n3[3])); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_23B8: { ++fl.t; const v4u uv = vmuld(n6, vsplat(n3[3])); vstore(r.vf[3], uv); fl.stick<15u, kSticky>(uv); n3 = uv; }
L_23C0: { ++fl.t; }
L_23C8: { ++fl.t; }
L_23D0: { ++fl.t; const v4u uv = vaddd(n1, n5); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_23D8: { ++fl.t; const v4u uv = vaddd(n4, n3); vstore(r.vf[4], uv); fl.push_last<15u, kSticky>(uv); n4 = uv; }
L_23E0: { ++fl.t; }
L_23E8: { ++fl.t; }
L_23F0: { ++fl.t; vflushd(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); { std::uint8_t *q = qword(mem, i1 + 0u); std::memcpy(q + 0, &r.vf[1].w[0], 4); std::memcpy(q + 4, &r.vf[1].w[1], 4); std::memcpy(q + 8, &r.vf[1].w[2], 4); } }
L_23F8: { ++fl.t; pend = 0u == i9; }
L_2400: { ++fl.t; vflushd(r.vf[4], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i1 + 2u); std::memcpy(q, &r.vf[4], 16); } }
    if (pend) { pend = false; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_2720; }
L_2408: { ++fl.t; set_vi(i9, i9 - 1u); }
L_2410: { ++fl.t; set_vi(i5, 0u + i6); }
L_2418: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_2420: { ++fl.t; set_vi(i7, i7 + 1u); }
L_2428: { ++fl.t; pend = 0u != i9; }
L_2430: { ++fl.t; }
    if (pend) { pend = false; vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_24A8; }
L_2438: { ++fl.t; pend = true; }
L_2440: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_24A8; }
    vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); 
L_2448: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(&r.vf[4], q, 16); } n4 = vshadow(r.vf[4]); }
L_2450: { ++fl.t; vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_2458: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_2460: { ++fl.t; pend = 0u == i9; }
L_2468: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
    if (pend) { pend = false; goto L_2720; }
L_2470: { ++fl.t; set_vi(i9, i9 - 1u); }
L_2478: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_2480: { ++fl.t; set_vi(i7, i7 + 1u); }
L_2488: { ++fl.t; pend = 0u != i9; }
L_2490: { ++fl.t; }
    if (pend) { pend = false; goto L_2228; }
L_2498: { ++fl.t; pend = true; }
L_24A0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; goto L_2228; }
L_24A8: { ++fl.t; }
L_24B0: { ++fl.t; }
L_24B8: { ++fl.t; }
L_24C0: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_24C8: { ++fl.t; }
L_24D0: { ++fl.t; }
L_24D8: { ++fl.t; }
L_24E0: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_24E8: { ++fl.t; }
L_24F0: { ++fl.t; }
L_24F8: { ++fl.t; }
L_2500: { ++fl.t; set_vi(i1, (fl.clip() & 2u) ? 1u : 0u); }
L_2508: { ++fl.t; pend = 0u != i1; }
L_2510: { ++fl.t; }
    if (pend) { pend = false; goto L_2578; }
L_2518: { ++fl.t; set_vi(i1, i2 + i3); }
L_2520: { ++fl.t; set_vi(i3, i3 + 1u); }
L_2528: { ++fl.t; pend = 0u == i9; }
L_2530: { ++fl.t; { std::uint8_t *q = qword(mem, i1 + 0u); const std::uint32_t v = i5; std::memcpy(q + 8, &v, 4); } }
    if (pend) { pend = false; goto L_2720; }
L_2538: { ++fl.t; set_vi(i9, i9 - 1u); }
L_2540: { ++fl.t; set_vi(i5, 0u + i6); }
L_2548: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_2550: { ++fl.t; set_vi(i7, i7 + 1u); }
L_2558: { ++fl.t; pend = 0u != i9; }
L_2560: { ++fl.t; }
    if (pend) { pend = false; goto L_24A8; }
L_2568: { ++fl.t; pend = true; }
L_2570: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; goto L_24A8; }
L_2578: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n1[3])); r.i = 3212836864u; vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2580: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 0u); vstore(r.vf[6], vsel(vload(r.vf[6]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n6 = vshadow(r.vf[6]); }
L_2588: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_2590: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 38u); vstore(r.vf[11], vsel(vload(r.vf[11]), vload_ptr(q), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } n11 = vshadow(r.vf[11]); }
L_2598: { ++fl.t; const v4u uv = vmuld(n3, vfix(vsplat(r.i))); { const std::uint8_t *q = qword(mem, i5 + 1u); std::memcpy(&r.vf[9], q, 16); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n9 = vshadow(r.vf[9]); n4 = vsel(n4, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_25A0: { ++fl.t; vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_25A8: { ++fl.t; const v4u uv = vsubd(n1, n6); { const std::uint8_t *q = qword(mem, i5 + 2u); std::memcpy(&r.vf[2], q, 16); } vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n2 = vshadow(r.vf[2]); n7 = vsel(n7, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_25B0: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 3u); std::memcpy(&r.vf[10], q, 16); } n10 = vshadow(r.vf[10]); }
L_25B8: { ++fl.t; vflushd(r.vf[4], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); const v4u uv = vsubd(n4, n9); vstore(r.vf[8], vsel(vload(r.vf[8]), vload(r.vf[4]), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); vstore(r.vf[13], vsel(vload(r.vf[13]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n8 = vshadow(r.vf[8]); n13 = vsel(n13, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_25C0: { ++fl.t; const v4u uv = vsubd(n3, n9); { const std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(&r.vf[4], q, 16); } vstore(r.vf[12], uv); fl.stick<15u, kSticky>(uv); n4 = vshadow(r.vf[4]); n12 = uv; }
L_25C8: { ++fl.t; const v4u uv = vmuld(n11, n7); { const std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(&r.vf[5], q, 16); } vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n5 = vshadow(r.vf[5]); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_25D0: { ++fl.t; const v4u uv = vmuld(n11, n6); set_vi(i1, i2 + i3); vstore(r.vf[14], vsel(vload(r.vf[14]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n14 = vsel(n14, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_25D8: { ++fl.t; const v4u uv = vmuld(n8, vsplat(n6[2])); { std::uint8_t *q = qword(mem, i1 + 1u); const std::uint32_t v = i6; std::memcpy(q + 8, &v, 4); } vstore(r.vf[18], vsel(vload(r.vf[18]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n18 = vsel(n18, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_25E0: { ++fl.t; const v4u uv = vmuld(n8, vsplat(n7[2])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[13].w[0], r.vf[12].w[0]); fl.end_q(r, qb, 7u); } vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n12 = vsel(n12, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_25E8: { ++fl.t; const v4u uv = vsubd(n4, n2); { std::uint8_t *q = qword(mem, i1 + 0u); const std::uint32_t v = i5; std::memcpy(q + 8, &v, 4); } vstore(r.vf[11], uv); fl.stick<15u, kSticky>(uv); n11 = uv; }
L_25F0: { ++fl.t; const v4u uv = vsubd(n5, n10); set_vi(i3, i3 + 2u); vstore(r.vf[13], uv); fl.stick<15u, kSticky>(uv); n13 = uv; }
L_25F8: { ++fl.t; const v4u uv = vmuld(n18, vfix(vsplat(r.i))); vstore(r.vf[18], vsel(vload(r.vf[18]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n18 = vsel(n18, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2600: { ++fl.t; }
L_2608: { ++fl.t; }
L_2610: { ++fl.t; const v4u uv = vaddd(n9, n12); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2618: { ++fl.t; const v4u uv = vsubd(n18, n14); vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n12 = vsel(n12, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2620: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_2628: { ++fl.t; }
L_2630: { ++fl.t; }
L_2638: { ++fl.t; { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[12].w[0], r.vf[9].w[0]); fl.end_q(r, qb, 7u); } }
L_2640: { ++fl.t; const v4u uv = vmuld(n12, vsplat(n6[3])); vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<7u, kSticky>(uv); n8 = vsel(n8, uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_2648: { ++fl.t; const v4u uv = vmuld(n13, vsplat(n6[3])); vstore(r.vf[12], uv); fl.stick<15u, kSticky>(uv); n12 = uv; }
L_2650: { ++fl.t; }
L_2658: { ++fl.t; }
L_2660: { ++fl.t; const v4u uv = vaddd(n9, n8); vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<7u, kSticky>(uv); n8 = vsel(n8, uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_2668: { ++fl.t; const v4u uv = vaddd(n10, n12); vstore(r.vf[9], uv); fl.stick<15u, kSticky>(uv); n9 = uv; }
L_2670: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_2678: { ++fl.t; }
L_2680: { ++fl.t; vflushd(r.vf[8], v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(q, &r.vf[8], 16); } }
L_2688: { ++fl.t; vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(q, &r.vf[9], 16); } }
L_2690: { ++fl.t; const v4u uv = vmuld(n7, vsplat(n6[3])); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2698: { ++fl.t; const v4u uv = vmuld(n11, vsplat(n6[3])); vstore(r.vf[11], uv); fl.stick<15u, kSticky>(uv); n11 = uv; }
L_26A0: { ++fl.t; }
L_26A8: { ++fl.t; }
L_26B0: { ++fl.t; const v4u uv = vaddd(n6, n9); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_26B8: { ++fl.t; const v4u uv = vaddd(n2, n11); vstore(r.vf[2], uv); fl.push_last<15u, kSticky>(uv); n2 = uv; }
L_26C0: { ++fl.t; }
L_26C8: { ++fl.t; }
L_26D0: { ++fl.t; vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); { std::uint8_t *q = qword(mem, i6 + 0u); std::memcpy(q + 0, &r.vf[6].w[0], 4); std::memcpy(q + 4, &r.vf[6].w[1], 4); std::memcpy(q + 8, &r.vf[6].w[2], 4); } }
L_26D8: { ++fl.t; pend = 0u == i9; }
L_26E0: { ++fl.t; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(q, &r.vf[2], 16); } }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto L_2720; }
L_26E8: { ++fl.t; set_vi(i9, i9 - 1u); }
L_26F0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_26F8: { ++fl.t; set_vi(i7, i7 + 1u); }
L_2700: { ++fl.t; pend = 0u != i9; }
L_2708: { ++fl.t; }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto L_2228; }
L_2710: { ++fl.t; pend = true; }
L_2718: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto L_2228; }
    vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); 
L_2720: { ++fl.t; }
L_2728: { ++fl.t; pend = 0u == i3; }
L_2730: { ++fl.t; }
    if (pend) { pend = false; goto L_3250; }
L_2738: { ++fl.t; set_vi(i4, 0u + 0u); }
L_2740: { ++fl.t; set_vi(i6, 0u + i4); }
L_2748: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i6 + 0u) + 8, 2); set_vi(i5, v); } }
L_2750: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 44u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } n1 = vshadow(r.vf[1]); }
L_2758: { ++fl.t; set_vi(i6, i6 + 1u); }
L_2760: { ++fl.t; set_vi(i9, 0u + i3); }
L_2768: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_2770: { ++fl.t; set_vi(i7, i6 + 1u); }
L_2778: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i6 + 0u) + 8, 2); set_vi(i6, v); } }
L_2780: { ++fl.t; set_vi(i3, 0u + 0u); }
L_2788: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); set_vi(i2, 0u + 7u); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2790: { ++fl.t; set_vi(i9, i9 - 1u); }
L_2798: { ++fl.t; }
L_27A0: { ++fl.t; }
L_27A8: { ++fl.t; set_vi(i1, (fl.clip() & 4u) ? 1u : 0u); }
L_27B0: { ++fl.t; pend = 0u == i1; }
L_27B8: { ++fl.t; }
    if (pend) { pend = false; goto L_2A40; }
L_27C0: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 2u); std::memcpy(&r.vf[4], q, 16); } n4 = vshadow(r.vf[4]); }
L_27C8: { ++fl.t; vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_27D0: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_27D8: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 3u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
L_27E0: { ++fl.t; }
L_27E8: { ++fl.t; }
L_27F0: { ++fl.t; }
L_27F8: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_2800: { ++fl.t; }
L_2808: { ++fl.t; }
L_2810: { ++fl.t; }
L_2818: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2820: { ++fl.t; }
L_2828: { ++fl.t; }
L_2830: { ++fl.t; }
L_2838: { ++fl.t; set_vi(i1, (fl.clip() & 4u) ? 1u : 0u); }
L_2840: { ++fl.t; pend = 0u != i1; }
L_2848: { ++fl.t; }
    if (pend) { pend = false; goto L_29E0; }
L_2850: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n1[3])); { const std::uint8_t *q = qword(mem, i6 + 0u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n2 = vshadow(r.vf[2]); n9 = vsel(n9, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2858: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(&r.vf[7], q, 16); } n7 = vshadow(r.vf[7]); }
L_2860: { ++fl.t; r.i = 3212836864u; }
L_2868: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 38u); vstore(r.vf[10], vsel(vload(r.vf[10]), vload_ptr(q), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); } n10 = vshadow(r.vf[10]); }
L_2870: { ++fl.t; vflushd(r.vf[9], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); const v4u uv = vsubd(n2, n1); vstore(r.vf[6], vsel(vload(r.vf[6]), vload(r.vf[9]), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n6 = vshadow(r.vf[6]); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2878: { ++fl.t; const v4u uv = vsubd(n7, n3); { const std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(&r.vf[7], q, 16); } vstore(r.vf[8], uv); fl.stick<15u, kSticky>(uv); n7 = vshadow(r.vf[7]); n8 = uv; }
L_2880: { ++fl.t; const v4u uv = vsubd(n9, n3); { const std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(&r.vf[9], q, 16); } vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n9 = vshadow(r.vf[9]); n12 = vsel(n12, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2888: { ++fl.t; const v4u uv = vmuld(n10, n1); set_vi(i1, 0u + i8); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2890: { ++fl.t; const v4u uv = vmuld(n6, vsplat(n1[2])); set_vi(i8, i8 + 4u); vstore(r.vf[11], vsel(vload(r.vf[11]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n11 = vsel(n11, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2898: { ++fl.t; const v4u uv = vmuld(n10, n2); set_vi(i5, i2 + i3); vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n10 = vsel(n10, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_28A0: { ++fl.t; const v4u uv = vmuld(n6, vsplat(n2[2])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[12].w[1], r.vf[8].w[1]); fl.end_q(r, qb, 7u); } vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n8 = vsel(n8, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_28A8: { ++fl.t; const v4u uv = vsubd(n7, n4); { std::uint8_t *q = qword(mem, i5 + 0u); const std::uint32_t v = i1; std::memcpy(q + 8, &v, 4); } vstore(r.vf[7], uv); fl.stick<15u, kSticky>(uv); n7 = uv; }
L_28B0: { ++fl.t; const v4u uv = vmuld(n11, vfix(vsplat(r.i))); set_vi(i3, i3 + 1u); vstore(r.vf[11], vsel(vload(r.vf[11]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n11 = vsel(n11, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_28B8: { ++fl.t; const v4u uv = vsubd(n9, n5); vstore(r.vf[9], uv); fl.stick<15u, kSticky>(uv); n9 = uv; }
L_28C0: { ++fl.t; }
L_28C8: { ++fl.t; const v4u uv = vaddd(n10, n8); vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n8 = vsel(n8, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_28D0: { ++fl.t; const v4u uv = vsubd(n11, n3); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_28D8: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_28E0: { ++fl.t; }
L_28E8: { ++fl.t; }
L_28F0: { ++fl.t; { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[3].w[1], r.vf[8].w[1]); fl.end_q(r, qb, 7u); } }
L_28F8: { ++fl.t; const v4u uv = vmuld(n8, vsplat(n2[3])); vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<11u, kSticky>(uv); n8 = vsel(n8, uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_2900: { ++fl.t; const v4u uv = vmuld(n9, vsplat(n2[3])); vstore(r.vf[9], uv); fl.stick<15u, kSticky>(uv); n9 = uv; }
L_2908: { ++fl.t; }
L_2910: { ++fl.t; }
L_2918: { ++fl.t; const v4u uv = vaddd(n3, n8); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<11u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_2920: { ++fl.t; const v4u uv = vaddd(n5, n9); vstore(r.vf[3], uv); fl.stick<15u, kSticky>(uv); n3 = uv; }
L_2928: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_2930: { ++fl.t; }
L_2938: { ++fl.t; vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i1 + 1u); std::memcpy(q, &r.vf[6], 16); } }
L_2940: { ++fl.t; vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i1 + 3u); std::memcpy(q, &r.vf[3], 16); } }
L_2948: { ++fl.t; const v4u uv = vmuld(n2, vsplat(n5[3])); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2950: { ++fl.t; const v4u uv = vmuld(n7, vsplat(n5[3])); vstore(r.vf[5], uv); fl.stick<15u, kSticky>(uv); n5 = uv; }
L_2958: { ++fl.t; }
L_2960: { ++fl.t; }
L_2968: { ++fl.t; const v4u uv = vaddd(n1, n3); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2970: { ++fl.t; const v4u uv = vaddd(n4, n5); vstore(r.vf[4], uv); fl.push_last<15u, kSticky>(uv); n4 = uv; }
L_2978: { ++fl.t; }
L_2980: { ++fl.t; }
L_2988: { ++fl.t; vflushd(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); { std::uint8_t *q = qword(mem, i1 + 0u); std::memcpy(q + 0, &r.vf[1].w[0], 4); std::memcpy(q + 4, &r.vf[1].w[1], 4); std::memcpy(q + 8, &r.vf[1].w[2], 4); } }
L_2990: { ++fl.t; pend = 0u == i9; }
L_2998: { ++fl.t; vflushd(r.vf[4], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i1 + 2u); std::memcpy(q, &r.vf[4], 16); } }
    if (pend) { pend = false; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[12], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_2C98; }
L_29A0: { ++fl.t; set_vi(i9, i9 - 1u); }
L_29A8: { ++fl.t; set_vi(i5, 0u + i6); }
L_29B0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_29B8: { ++fl.t; set_vi(i7, i7 + 1u); }
L_29C0: { ++fl.t; pend = 0u != i9; }
L_29C8: { ++fl.t; }
    if (pend) { pend = false; vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[12], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_2A40; }
L_29D0: { ++fl.t; pend = true; }
L_29D8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[12], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_2A40; }
    vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[12], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); 
L_29E0: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(&r.vf[4], q, 16); } n4 = vshadow(r.vf[4]); }
L_29E8: { ++fl.t; vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_29F0: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_29F8: { ++fl.t; pend = 0u == i9; }
L_2A00: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
    if (pend) { pend = false; goto L_2C98; }
L_2A08: { ++fl.t; set_vi(i9, i9 - 1u); }
L_2A10: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_2A18: { ++fl.t; set_vi(i7, i7 + 1u); }
L_2A20: { ++fl.t; pend = 0u != i9; }
L_2A28: { ++fl.t; }
    if (pend) { pend = false; goto L_27E0; }
L_2A30: { ++fl.t; pend = true; }
L_2A38: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; goto L_27E0; }
L_2A40: { ++fl.t; }
L_2A48: { ++fl.t; }
L_2A50: { ++fl.t; }
L_2A58: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_2A60: { ++fl.t; }
L_2A68: { ++fl.t; }
L_2A70: { ++fl.t; }
L_2A78: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2A80: { ++fl.t; }
L_2A88: { ++fl.t; }
L_2A90: { ++fl.t; }
L_2A98: { ++fl.t; set_vi(i1, (fl.clip() & 4u) ? 1u : 0u); }
L_2AA0: { ++fl.t; pend = 0u != i1; }
L_2AA8: { ++fl.t; }
    if (pend) { pend = false; goto L_2B10; }
L_2AB0: { ++fl.t; set_vi(i1, i2 + i3); }
L_2AB8: { ++fl.t; set_vi(i3, i3 + 1u); }
L_2AC0: { ++fl.t; pend = 0u == i9; }
L_2AC8: { ++fl.t; { std::uint8_t *q = qword(mem, i1 + 0u); const std::uint32_t v = i5; std::memcpy(q + 8, &v, 4); } }
    if (pend) { pend = false; goto L_2C98; }
L_2AD0: { ++fl.t; set_vi(i9, i9 - 1u); }
L_2AD8: { ++fl.t; set_vi(i5, 0u + i6); }
L_2AE0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_2AE8: { ++fl.t; set_vi(i7, i7 + 1u); }
L_2AF0: { ++fl.t; pend = 0u != i9; }
L_2AF8: { ++fl.t; }
    if (pend) { pend = false; goto L_2A40; }
L_2B00: { ++fl.t; pend = true; }
L_2B08: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; goto L_2A40; }
L_2B10: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n1[3])); { const std::uint8_t *q = qword(mem, i5 + 0u); vstore(r.vf[6], vsel(vload(r.vf[6]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n6 = vshadow(r.vf[6]); n4 = vsel(n4, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2B18: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_2B20: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 1u); std::memcpy(&r.vf[9], q, 16); } n9 = vshadow(r.vf[9]); }
L_2B28: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 38u); vstore(r.vf[5], vsel(vload(r.vf[5]), vload_ptr(q), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); } n5 = vshadow(r.vf[5]); }
L_2B30: { ++fl.t; vflushd(r.vf[4], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vstore(r.vf[7], vsel(vload(r.vf[7]), vload(r.vf[4]), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); n7 = vshadow(r.vf[7]); }
L_2B38: { ++fl.t; const v4u uv = vsubd(n1, n6); vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n3 = vshadow(r.vf[3]); n8 = vsel(n8, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2B40: { ++fl.t; const v4u uv = vsubd(n4, n9); r.i = 3212836864u; vstore(r.vf[11], vsel(vload(r.vf[11]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n11 = vsel(n11, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2B48: { ++fl.t; const v4u uv = vmuld(n5, n6); { const std::uint8_t *q = qword(mem, i5 + 3u); std::memcpy(&r.vf[10], q, 16); } vstore(r.vf[14], vsel(vload(r.vf[14]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n10 = vshadow(r.vf[10]); n14 = vsel(n14, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2B50: { ++fl.t; const v4u uv = vmuld(n7, vsplat(n6[2])); { const std::uint8_t *q = qword(mem, i5 + 2u); std::memcpy(&r.vf[2], q, 16); } vstore(r.vf[13], vsel(vload(r.vf[13]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n2 = vshadow(r.vf[2]); n13 = vsel(n13, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2B58: { ++fl.t; const v4u uv = vsubd(n3, n9); { const std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(&r.vf[4], q, 16); } vstore(r.vf[12], uv); fl.stick<15u, kSticky>(uv); n4 = vshadow(r.vf[4]); n12 = uv; }
L_2B60: { ++fl.t; const v4u uv = vmuld(n5, n8); { const std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(&r.vf[5], q, 16); } vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n5 = vshadow(r.vf[5]); n9 = vsel(n9, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2B68: { ++fl.t; const v4u uv = vmuld(n7, vsplat(n8[2])); set_vi(i1, i2 + i3); vstore(r.vf[19], vsel(vload(r.vf[19]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n19 = vsel(n19, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2B70: { ++fl.t; const v4u uv = vmuld(n13, vfix(vsplat(r.i))); { std::uint8_t *q = qword(mem, i1 + 1u); const std::uint32_t v = i6; std::memcpy(q + 8, &v, 4); } vstore(r.vf[18], vsel(vload(r.vf[18]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n18 = vsel(n18, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2B78: { ++fl.t; const v4u uv = vsubd(n4, n2); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[11].w[1], r.vf[12].w[1]); fl.end_q(r, qb, 7u); } vstore(r.vf[11], uv); fl.stick<15u, kSticky>(uv); n11 = uv; }
L_2B80: { ++fl.t; const v4u uv = vsubd(n5, n10); { std::uint8_t *q = qword(mem, i1 + 0u); const std::uint32_t v = i5; std::memcpy(q + 8, &v, 4); } vstore(r.vf[13], uv); fl.stick<15u, kSticky>(uv); n13 = uv; }
L_2B88: { ++fl.t; const v4u uv = vaddd(n9, n19); set_vi(i3, i3 + 2u); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2B90: { ++fl.t; const v4u uv = vsubd(n18, n14); vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n12 = vsel(n12, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2B98: { ++fl.t; }
L_2BA0: { ++fl.t; }
L_2BA8: { ++fl.t; }
L_2BB0: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[12].w[1], r.vf[9].w[1]); fl.end_q(r, qb, 7u); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_2BB8: { ++fl.t; }
L_2BC0: { ++fl.t; }
L_2BC8: { ++fl.t; }
L_2BD0: { ++fl.t; const v4u uv = vmuld(n12, vsplat(n6[3])); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<11u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_2BD8: { ++fl.t; const v4u uv = vmuld(n13, vsplat(n6[3])); vstore(r.vf[12], uv); fl.stick<15u, kSticky>(uv); n12 = uv; }
L_2BE0: { ++fl.t; }
L_2BE8: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_2BF0: { ++fl.t; const v4u uv = vaddd(n9, n7); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<11u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_2BF8: { ++fl.t; const v4u uv = vaddd(n10, n12); vstore(r.vf[12], uv); fl.stick<15u, kSticky>(uv); n12 = uv; }
L_2C00: { ++fl.t; }
L_2C08: { ++fl.t; const v4u uv = vmuld(n8, vsplat(n6[3])); vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n10 = vsel(n10, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2C10: { ++fl.t; vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vmuld(n11, vsplat(n6[3])); { std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(q, &r.vf[7], 16); } vstore(r.vf[9], uv); fl.stick<15u, kSticky>(uv); n9 = uv; }
L_2C18: { ++fl.t; vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(q, &r.vf[12], 16); } }
L_2C20: { ++fl.t; }
L_2C28: { ++fl.t; const v4u uv = vaddd(n6, n10); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2C30: { ++fl.t; const v4u uv = vaddd(n2, n9); vstore(r.vf[2], uv); fl.push_last<15u, kSticky>(uv); n2 = uv; }
L_2C38: { ++fl.t; }
L_2C40: { ++fl.t; }
L_2C48: { ++fl.t; vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); { std::uint8_t *q = qword(mem, i6 + 0u); std::memcpy(q + 0, &r.vf[6].w[0], 4); std::memcpy(q + 4, &r.vf[6].w[1], 4); std::memcpy(q + 8, &r.vf[6].w[2], 4); } }
L_2C50: { ++fl.t; pend = 0u == i9; }
L_2C58: { ++fl.t; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(q, &r.vf[2], 16); } }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[14], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[18], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[19], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_2C98; }
L_2C60: { ++fl.t; set_vi(i9, i9 - 1u); }
L_2C68: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_2C70: { ++fl.t; set_vi(i7, i7 + 1u); }
L_2C78: { ++fl.t; pend = 0u != i9; }
L_2C80: { ++fl.t; }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[14], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[18], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[19], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_27E0; }
L_2C88: { ++fl.t; pend = true; }
L_2C90: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[14], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[18], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[19], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_27E0; }
    vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[14], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[18], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[19], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); 
L_2C98: { ++fl.t; }
L_2CA0: { ++fl.t; pend = 0u == i3; }
L_2CA8: { ++fl.t; }
    if (pend) { pend = false; goto L_3250; }
L_2CB0: { ++fl.t; set_vi(i4, 0u + 7u); }
L_2CB8: { ++fl.t; set_vi(i6, 0u + i4); }
L_2CC0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i6 + 0u) + 8, 2); set_vi(i5, v); } }
L_2CC8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 44u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } n1 = vshadow(r.vf[1]); }
L_2CD0: { ++fl.t; set_vi(i6, i6 + 1u); }
L_2CD8: { ++fl.t; set_vi(i9, 0u + i3); }
L_2CE0: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_2CE8: { ++fl.t; set_vi(i7, i6 + 1u); }
L_2CF0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i6 + 0u) + 8, 2); set_vi(i6, v); } }
L_2CF8: { ++fl.t; set_vi(i3, 0u + 0u); }
L_2D00: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); set_vi(i2, 0u + 0u); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2D08: { ++fl.t; set_vi(i9, i9 - 1u); }
L_2D10: { ++fl.t; }
L_2D18: { ++fl.t; }
L_2D20: { ++fl.t; set_vi(i1, (fl.clip() & 8u) ? 1u : 0u); }
L_2D28: { ++fl.t; pend = 0u == i1; }
L_2D30: { ++fl.t; }
    if (pend) { pend = false; goto L_2FD8; }
L_2D38: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 2u); std::memcpy(&r.vf[4], q, 16); } n4 = vshadow(r.vf[4]); }
L_2D40: { ++fl.t; vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_2D48: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_2D50: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 3u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
L_2D58: { ++fl.t; }
L_2D60: { ++fl.t; }
L_2D68: { ++fl.t; }
L_2D70: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_2D78: { ++fl.t; }
L_2D80: { ++fl.t; }
L_2D88: { ++fl.t; }
L_2D90: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2D98: { ++fl.t; }
L_2DA0: { ++fl.t; }
L_2DA8: { ++fl.t; }
L_2DB0: { ++fl.t; set_vi(i1, (fl.clip() & 8u) ? 1u : 0u); }
L_2DB8: { ++fl.t; pend = 0u != i1; }
L_2DC0: { ++fl.t; }
    if (pend) { pend = false; goto L_2F78; }
L_2DC8: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n1[3])); r.i = 3212836864u; vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2DD0: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 0u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n2 = vshadow(r.vf[2]); }
L_2DD8: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(&r.vf[7], q, 16); } n7 = vshadow(r.vf[7]); }
L_2DE0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 38u); vstore(r.vf[9], vsel(vload(r.vf[9]), vload_ptr(q), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); } n9 = vshadow(r.vf[9]); }
L_2DE8: { ++fl.t; const v4u uv = vmuld(n6, vfix(vsplat(r.i))); { const std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(&r.vf[6], q, 16); } vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n6 = vshadow(r.vf[6]); n10 = vsel(n10, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2DF0: { ++fl.t; const v4u uv = vsubd(n2, n1); { const std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(&r.vf[8], q, 16); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n8 = vshadow(r.vf[8]); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2DF8: { ++fl.t; const v4u uv = vsubd(n7, n3); set_vi(i1, 0u + i8); vstore(r.vf[7], uv); fl.stick<15u, kSticky>(uv); n7 = uv; }
L_2E00: { ++fl.t; set_vi(i8, i8 + 4u); }
L_2E08: { ++fl.t; vflushd(r.vf[10], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); const v4u uv = vsubd(n10, n3); vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[10]), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n3 = vshadow(r.vf[3]); n10 = vsel(n10, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2E10: { ++fl.t; set_vi(i5, i2 + i3); }
L_2E18: { ++fl.t; const v4u uv = vsubd(n6, n4); { std::uint8_t *q = qword(mem, i5 + 0u); const std::uint32_t v = i1; std::memcpy(q + 8, &v, 4); } vstore(r.vf[6], uv); fl.stick<15u, kSticky>(uv); n6 = uv; }
L_2E20: { ++fl.t; const v4u uv = vsubd(n8, n5); set_vi(i3, i3 + 1u); vstore(r.vf[8], uv); fl.stick<15u, kSticky>(uv); n8 = uv; }
L_2E28: { ++fl.t; const v4u uv = vmuld(n3, vsplat(n1[2])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[10].w[1], r.vf[7].w[1]); fl.end_q(r, qb, 7u); } vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n10 = vsel(n10, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2E30: { ++fl.t; const v4u uv = vmuld(n3, vsplat(n2[2])); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2E38: { ++fl.t; const v4u uv = vmuld(n9, n2); vstore(r.vf[11], vsel(vload(r.vf[11]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n11 = vsel(n11, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2E40: { ++fl.t; const v4u uv = vmuld(n9, n1); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2E48: { ++fl.t; const v4u uv = vmuld(n10, vfix(vsplat(r.i))); vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n10 = vsel(n10, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2E50: { ++fl.t; }
L_2E58: { ++fl.t; const v4u uv = vaddd(n11, n7); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2E60: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_2E68: { ++fl.t; const v4u uv = vsubd(n10, n9); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2E70: { ++fl.t; }
L_2E78: { ++fl.t; }
L_2E80: { ++fl.t; const v4u uv = vmuld(n7, vsplat(n2[3])); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<11u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_2E88: { ++fl.t; const v4u uv = vmuld(n8, vsplat(n2[3])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[9].w[1], r.vf[7].w[1]); fl.end_q(r, qb, 7u); } vstore(r.vf[8], uv); fl.stick<15u, kSticky>(uv); n8 = uv; }
L_2E90: { ++fl.t; }
L_2E98: { ++fl.t; }
L_2EA0: { ++fl.t; const v4u uv = vaddd(n3, n7); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<11u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_2EA8: { ++fl.t; const v4u uv = vaddd(n5, n8); vstore(r.vf[5], uv); fl.stick<15u, kSticky>(uv); n5 = uv; }
L_2EB0: { ++fl.t; }
L_2EB8: { ++fl.t; }
L_2EC0: { ++fl.t; fl.flush_q(r); vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { std::uint8_t *q = qword(mem, i1 + 1u); std::memcpy(q, &r.vf[3], 16); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_2EC8: { ++fl.t; vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i1 + 3u); std::memcpy(q, &r.vf[5], 16); } }
L_2ED0: { ++fl.t; }
L_2ED8: { ++fl.t; }
L_2EE0: { ++fl.t; const v4u uv = vmuld(n2, vsplat(n3[3])); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2EE8: { ++fl.t; const v4u uv = vmuld(n6, vsplat(n3[3])); vstore(r.vf[3], uv); fl.stick<15u, kSticky>(uv); n3 = uv; }
L_2EF0: { ++fl.t; }
L_2EF8: { ++fl.t; }
L_2F00: { ++fl.t; const v4u uv = vaddd(n1, n5); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2F08: { ++fl.t; const v4u uv = vaddd(n4, n3); vstore(r.vf[4], uv); fl.push_last<15u, kSticky>(uv); n4 = uv; }
L_2F10: { ++fl.t; }
L_2F18: { ++fl.t; }
L_2F20: { ++fl.t; vflushd(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); { std::uint8_t *q = qword(mem, i1 + 0u); std::memcpy(q + 0, &r.vf[1].w[0], 4); std::memcpy(q + 4, &r.vf[1].w[1], 4); std::memcpy(q + 8, &r.vf[1].w[2], 4); } }
L_2F28: { ++fl.t; pend = 0u == i9; }
L_2F30: { ++fl.t; vflushd(r.vf[4], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i1 + 2u); std::memcpy(q, &r.vf[4], 16); } }
    if (pend) { pend = false; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_3250; }
L_2F38: { ++fl.t; set_vi(i9, i9 - 1u); }
L_2F40: { ++fl.t; set_vi(i5, 0u + i6); }
L_2F48: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_2F50: { ++fl.t; set_vi(i7, i7 + 1u); }
L_2F58: { ++fl.t; pend = 0u != i9; }
L_2F60: { ++fl.t; }
    if (pend) { pend = false; vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_2FD8; }
L_2F68: { ++fl.t; pend = true; }
L_2F70: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_2FD8; }
    vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); 
L_2F78: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(&r.vf[4], q, 16); } n4 = vshadow(r.vf[4]); }
L_2F80: { ++fl.t; vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_2F88: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_2F90: { ++fl.t; pend = 0u == i9; }
L_2F98: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
    if (pend) { pend = false; goto L_3250; }
L_2FA0: { ++fl.t; set_vi(i9, i9 - 1u); }
L_2FA8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_2FB0: { ++fl.t; set_vi(i7, i7 + 1u); }
L_2FB8: { ++fl.t; pend = 0u != i9; }
L_2FC0: { ++fl.t; }
    if (pend) { pend = false; goto L_2D58; }
L_2FC8: { ++fl.t; pend = true; }
L_2FD0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; goto L_2D58; }
L_2FD8: { ++fl.t; }
L_2FE0: { ++fl.t; }
L_2FE8: { ++fl.t; }
L_2FF0: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_2FF8: { ++fl.t; }
L_3000: { ++fl.t; }
L_3008: { ++fl.t; }
L_3010: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_3018: { ++fl.t; }
L_3020: { ++fl.t; }
L_3028: { ++fl.t; }
L_3030: { ++fl.t; set_vi(i1, (fl.clip() & 8u) ? 1u : 0u); }
L_3038: { ++fl.t; pend = 0u != i1; }
L_3040: { ++fl.t; }
    if (pend) { pend = false; goto L_30A8; }
L_3048: { ++fl.t; set_vi(i1, i2 + i3); }
L_3050: { ++fl.t; set_vi(i3, i3 + 1u); }
L_3058: { ++fl.t; pend = 0u == i9; }
L_3060: { ++fl.t; { std::uint8_t *q = qword(mem, i1 + 0u); const std::uint32_t v = i5; std::memcpy(q + 8, &v, 4); } }
    if (pend) { pend = false; goto L_3250; }
L_3068: { ++fl.t; set_vi(i9, i9 - 1u); }
L_3070: { ++fl.t; set_vi(i5, 0u + i6); }
L_3078: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_3080: { ++fl.t; set_vi(i7, i7 + 1u); }
L_3088: { ++fl.t; pend = 0u != i9; }
L_3090: { ++fl.t; }
    if (pend) { pend = false; goto L_2FD8; }
L_3098: { ++fl.t; pend = true; }
L_30A0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; goto L_2FD8; }
L_30A8: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n1[3])); r.i = 3212836864u; vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_30B0: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 0u); vstore(r.vf[6], vsel(vload(r.vf[6]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n6 = vshadow(r.vf[6]); }
L_30B8: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_30C0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 38u); vstore(r.vf[11], vsel(vload(r.vf[11]), vload_ptr(q), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); } n11 = vshadow(r.vf[11]); }
L_30C8: { ++fl.t; const v4u uv = vmuld(n3, vfix(vsplat(r.i))); { const std::uint8_t *q = qword(mem, i5 + 1u); std::memcpy(&r.vf[9], q, 16); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n9 = vshadow(r.vf[9]); n4 = vsel(n4, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_30D0: { ++fl.t; vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_30D8: { ++fl.t; const v4u uv = vsubd(n1, n6); { const std::uint8_t *q = qword(mem, i5 + 2u); std::memcpy(&r.vf[2], q, 16); } vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n2 = vshadow(r.vf[2]); n7 = vsel(n7, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_30E0: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 3u); std::memcpy(&r.vf[10], q, 16); } n10 = vshadow(r.vf[10]); }
L_30E8: { ++fl.t; vflushd(r.vf[4], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); const v4u uv = vsubd(n4, n9); vstore(r.vf[8], vsel(vload(r.vf[8]), vload(r.vf[4]), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); vstore(r.vf[13], vsel(vload(r.vf[13]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n8 = vshadow(r.vf[8]); n13 = vsel(n13, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_30F0: { ++fl.t; const v4u uv = vsubd(n3, n9); { const std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(&r.vf[4], q, 16); } vstore(r.vf[12], uv); fl.stick<15u, kSticky>(uv); n4 = vshadow(r.vf[4]); n12 = uv; }
L_30F8: { ++fl.t; const v4u uv = vmuld(n11, n7); { const std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(&r.vf[5], q, 16); } vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n5 = vshadow(r.vf[5]); n9 = vsel(n9, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3100: { ++fl.t; const v4u uv = vmuld(n11, n6); set_vi(i1, i2 + i3); vstore(r.vf[14], vsel(vload(r.vf[14]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n14 = vsel(n14, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3108: { ++fl.t; const v4u uv = vmuld(n8, vsplat(n6[2])); { std::uint8_t *q = qword(mem, i1 + 1u); const std::uint32_t v = i6; std::memcpy(q + 8, &v, 4); } vstore(r.vf[18], vsel(vload(r.vf[18]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n18 = vsel(n18, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3110: { ++fl.t; const v4u uv = vmuld(n8, vsplat(n7[2])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[13].w[1], r.vf[12].w[1]); fl.end_q(r, qb, 7u); } vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n12 = vsel(n12, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3118: { ++fl.t; const v4u uv = vsubd(n4, n2); { std::uint8_t *q = qword(mem, i1 + 0u); const std::uint32_t v = i5; std::memcpy(q + 8, &v, 4); } vstore(r.vf[11], uv); fl.stick<15u, kSticky>(uv); n11 = uv; }
L_3120: { ++fl.t; const v4u uv = vsubd(n5, n10); set_vi(i3, i3 + 2u); vstore(r.vf[13], uv); fl.stick<15u, kSticky>(uv); n13 = uv; }
L_3128: { ++fl.t; const v4u uv = vmuld(n18, vfix(vsplat(r.i))); vstore(r.vf[18], vsel(vload(r.vf[18]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n18 = vsel(n18, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3130: { ++fl.t; }
L_3138: { ++fl.t; }
L_3140: { ++fl.t; const v4u uv = vaddd(n9, n12); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3148: { ++fl.t; const v4u uv = vsubd(n18, n14); vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n12 = vsel(n12, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3150: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_3158: { ++fl.t; }
L_3160: { ++fl.t; }
L_3168: { ++fl.t; { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[12].w[1], r.vf[9].w[1]); fl.end_q(r, qb, 7u); } }
L_3170: { ++fl.t; const v4u uv = vmuld(n12, vsplat(n6[3])); vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<11u, kSticky>(uv); n8 = vsel(n8, uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_3178: { ++fl.t; const v4u uv = vmuld(n13, vsplat(n6[3])); vstore(r.vf[12], uv); fl.stick<15u, kSticky>(uv); n12 = uv; }
L_3180: { ++fl.t; }
L_3188: { ++fl.t; }
L_3190: { ++fl.t; const v4u uv = vaddd(n9, n8); vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<11u, kSticky>(uv); n8 = vsel(n8, uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_3198: { ++fl.t; const v4u uv = vaddd(n10, n12); vstore(r.vf[9], uv); fl.stick<15u, kSticky>(uv); n9 = uv; }
L_31A0: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_31A8: { ++fl.t; }
L_31B0: { ++fl.t; vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(q, &r.vf[8], 16); } }
L_31B8: { ++fl.t; vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(q, &r.vf[9], 16); } }
L_31C0: { ++fl.t; const v4u uv = vmuld(n7, vsplat(n6[3])); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_31C8: { ++fl.t; const v4u uv = vmuld(n11, vsplat(n6[3])); vstore(r.vf[11], uv); fl.stick<15u, kSticky>(uv); n11 = uv; }
L_31D0: { ++fl.t; }
L_31D8: { ++fl.t; }
L_31E0: { ++fl.t; const v4u uv = vaddd(n6, n9); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_31E8: { ++fl.t; const v4u uv = vaddd(n2, n11); vstore(r.vf[2], uv); fl.push_last<15u, kSticky>(uv); n2 = uv; }
L_31F0: { ++fl.t; }
L_31F8: { ++fl.t; }
L_3200: { ++fl.t; vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); { std::uint8_t *q = qword(mem, i6 + 0u); std::memcpy(q + 0, &r.vf[6].w[0], 4); std::memcpy(q + 4, &r.vf[6].w[1], 4); std::memcpy(q + 8, &r.vf[6].w[2], 4); } }
L_3208: { ++fl.t; pend = 0u == i9; }
L_3210: { ++fl.t; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(q, &r.vf[2], 16); } }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[14], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[18], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_3250; }
L_3218: { ++fl.t; set_vi(i9, i9 - 1u); }
L_3220: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_3228: { ++fl.t; set_vi(i7, i7 + 1u); }
L_3230: { ++fl.t; pend = 0u != i9; }
L_3238: { ++fl.t; }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[14], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[18], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_2D58; }
L_3240: { ++fl.t; pend = true; }
L_3248: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[14], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[18], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_2D58; }
    vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[14], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[18], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); 
L_3250: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_3258: { ++fl.t; }
    if (pendj) { pendj = false; vflush(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[14], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflush(r.vf[18], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflush(r.vf[19], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto dispatch; }
    vflush(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[14], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflush(r.vf[18], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflush(r.vf[19], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; vhop(hop, ((12896u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; vhop(hop, jpc);
    return;
}
static __attribute__((noinline, cold)) void vu1_DCBD82F021988ECE_c(Vu0Regs &r, std::uint8_t *mem, VuDaz &daz, std::uint32_t &hop) { vu1_DCBD82F021988ECE_b<true>(r, mem, daz, hop); }
void vu1_DCBD82F021988ECE(Vu0Regs &r, std::uint8_t *mem) {
    std::uint32_t hop = kNoHop;
    {
        VuDaz daz;
        if ((r.status & 0xC0u) == 0xC0u) vu1_DCBD82F021988ECE_b<false>(r, mem, daz, hop);
        else vu1_DCBD82F021988ECE_c(r, mem, daz, hop);
    }
    if (hop != kNoHop) vu::interpret(1, hop);
}

template <bool kSticky>
static void vu1_DF76EB1FD7548403_s(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 32u) & 16383u;
    (void)sh;
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i3 = r.vi[3];
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i9 = r.vi[9];
    std::uint16_t i10 = r.vi[10];
    std::uint16_t i11 = r.vi[11];
    std::uint16_t i12 = r.vi[12];
    std::uint16_t i15 = r.vi[15];
    goto L_0020;
L_0020: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 129u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0028: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 130u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0030: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 133u); std::memcpy(q + 12, &r.vf[1].w[3], 4); } }
L_0038: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 37u) + 4, 2); set_vi(i2, v); } }
L_0040: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0048: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 2u) + 12, 2); set_vi(i12, v); } }
L_0050: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 4u) + 12, 2); set_vi(i11, v); } }
L_0058: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 131u); const std::uint32_t v = i2; std::memcpy(q + 12, &v, 4); } }
L_0060: { ++fl.t; set_vi(i3, 0u + 27u); }
L_0068: { ++fl.t; vu::kick(1, i3); }
L_0070: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 24u); vstore(r.vf[15], vsel(vload(r.vf[15]), vload_ptr(q), v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); } }
L_0078: { ++fl.t; set_vi(i1, 0u + 8u); }
L_0080: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0088: { ++fl.t; set_vi(i1, 0u + 26u); }
L_0090: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(0u))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } }
L_0098: { ++fl.t; set_vi(i15, (((152u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_00A0: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
    if (pend) { pend = false; goto L_0AE8; }
L_00A8: { ++fl.t; set_vi(i15, (((168u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_00B0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 35u) + 8, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0530; }
L_00B8: { ++fl.t; set_vi(i15, (((184u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_00C0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 8, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0618; }
L_00C8: { ++fl.t; ending = true; }
L_00D0: { ++fl.t; }
    if (ending) { fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; r.tpc = ((216u + sh) & 16383u); return; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((216u + sh) & 16383u));
    return;
L_0530: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 124u) + 12, 2); set_vi(i1, v); } }
L_0538: { ++fl.t; pend = 0u != i4; }
L_0540: { ++fl.t; r.i = 1132396544u; }
    if (pend) { pend = false; goto L_0568; }
L_0548: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 32751u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.push_last<1u, kSticky>(uv); }
L_0550: { ++fl.t; set_vi(i1, i1 & i3); }
L_0558: { ++fl.t; pend = true; }
L_0560: { ++fl.t; set_vi(i3, 0u + 0u); }
    if (pend) { pend = false; goto L_0588; }
L_0568: { ++fl.t; r.i = 1124073472u; }
L_0570: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 16u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.push_last<1u, kSticky>(uv); }
L_0578: { ++fl.t; set_vi(i1, i1 | i3); }
L_0580: { ++fl.t; set_vi(i3, 0u + 1u); }
L_0588: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 134u); const std::uint32_t v = i3; std::memcpy(q + 8, &v, 4); } }
L_0590: { ++fl.t; set_vi(i3, 0u + 27u); }
L_0598: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } }
L_05A0: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(r.vf[1].w[3])); { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i3))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); }
L_05A8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_05B0: { ++fl.t; pend = true; }
L_05B8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 133u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
    if (pend) { pend = false; goto L_0AE8; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((1472u + sh) & 16383u));
    return;
L_0618: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 124u) + 12, 2); set_vi(i1, v); } }
L_0620: { ++fl.t; pend = 0u != i4; }
L_0628: { ++fl.t; set_vi(i2, 0u + 27u); }
    if (pend) { pend = false; goto L_0648; }
L_0630: { ++fl.t; set_vi(i3, 0u + 32735u); }
L_0638: { ++fl.t; pend = true; }
L_0640: { ++fl.t; set_vi(i1, i1 & i3); }
    if (pend) { pend = false; goto L_0658; }
L_0648: { ++fl.t; set_vi(i3, 0u + 32u); }
L_0650: { ++fl.t; set_vi(i1, i1 | i3); }
L_0658: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } }
L_0660: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i2))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
L_0668: { ++fl.t; pend = true; }
L_0670: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
    if (pend) { pend = false; goto L_0AE8; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((1656u + sh) & 16383u));
    return;
L_0AE8: { ++fl.t; set_vi(i10, 0u + 1u); }
L_0AF0: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_0AF8: { ++fl.t; set_vi(i9, 0u + i12); }
L_0B00: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_0B08: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0B10: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q, &r.vf[4], 16); set_vi(i12, i12 + 1u); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((2840u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

static __attribute__((noinline, cold)) void vu1_DF76EB1FD7548403_c(Vu0Regs &r, std::uint8_t *mem) { vu1_DF76EB1FD7548403_s<true>(r, mem); }

void vu1_DF76EB1FD7548403(Vu0Regs &r, std::uint8_t *mem) {
    if ((r.status & 0xC0u) == 0xC0u) vu1_DF76EB1FD7548403_s<false>(r, mem);
    else vu1_DF76EB1FD7548403_c(r, mem);
}

template <bool kSticky>
static void vu1_4479ADB947110633_s(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 3416u) & 16383u;
    (void)sh;
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i6 = r.vi[6];
    std::uint16_t i8 = r.vi[8];
    std::uint16_t i9 = r.vi[9];
    std::uint16_t i10 = r.vi[10];
    goto L_0D58;
L_00F8: { ++fl.t; set_vi(i1, 0u + 15u); }
L_0100: { ++fl.t; set_vi(i1, i8 & i1); }
L_0108: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1) + 4, 2); set_vi(i2, v); } }
L_0110: { fl.t += 4u; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; pendj = true; }
L_0118: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; vu::interpret(1, ((288u + sh) & 16383u));
    return;
L_0D58: { ++fl.t; pend = static_cast<std::int16_t>(i6) < 0; }
L_0D60: { ++fl.t; }
    if (pend) { pend = false; goto L_0DB0; }
L_0D68: { ++fl.t; fl.flush_q(r); }
L_0D70: { ++fl.t; }
L_0D78: { ++fl.t; jpc = (static_cast<std::uint32_t>(i4) * 8u) & 16383u; pendj = true; }
L_0D80: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd_eager(r.q)); r.vf[26].w[3] = r.p; vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.push_last<1u, kSticky>(uv); }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; vu::interpret(1, ((3464u + sh) & 16383u));
    return;
L_0DB0: { ++fl.t; pend = true; }
L_0DB8: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
    if (pend) { pend = false; goto L_00F8; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; vu::interpret(1, ((3520u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; vu::interpret(1, jpc);
    return;
}

static __attribute__((noinline, cold)) void vu1_4479ADB947110633_c(Vu0Regs &r, std::uint8_t *mem) { vu1_4479ADB947110633_s<true>(r, mem); }

void vu1_4479ADB947110633(Vu0Regs &r, std::uint8_t *mem) {
    if ((r.status & 0xC0u) == 0xC0u) vu1_4479ADB947110633_s<false>(r, mem);
    else vu1_4479ADB947110633_c(r, mem);
}

template <bool kSticky>
static void vu1_C3A6F8F1CE888397_s(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 3400u) & 16383u;
    (void)sh;
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i5 = r.vi[5];
    std::uint16_t i6 = r.vi[6];
    std::uint16_t i8 = r.vi[8];
    std::uint16_t i9 = r.vi[9];
    std::uint16_t i10 = r.vi[10];
    std::uint16_t i15 = r.vi[15];
    goto L_0D48;
L_00F8: { ++fl.t; set_vi(i1, 0u + 15u); }
L_0100: { ++fl.t; set_vi(i1, i8 & i1); }
L_0108: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1) + 4, 2); set_vi(i2, v); } }
L_0110: { ++fl.t; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; pendj = true; }
L_0118: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[15] = i15; vu::interpret(1, ((288u + sh) & 16383u));
    return;
L_0D48: { ++fl.t; jpc = (static_cast<std::uint32_t>(i5) * 8u) & 16383u; set_vi(i15, (((3400u + sh) & 16383u) + 16u) / 8u); pendj = true; }
L_0D50: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0D58: { ++fl.t; pend = static_cast<std::int16_t>(i6) < 0; }
L_0D60: { ++fl.t; }
    if (pend) { pend = false; goto L_0DB0; }
L_0D68: { ++fl.t; fl.flush_q(r); }
L_0D70: { ++fl.t; }
L_0D78: { ++fl.t; jpc = (static_cast<std::uint32_t>(i4) * 8u) & 16383u; pendj = true; }
L_0D80: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd_eager(r.q)); r.vf[26].w[3] = r.p; vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.push_last<1u, kSticky>(uv); }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[15] = i15; vu::interpret(1, ((3464u + sh) & 16383u));
    return;
L_0DB0: { ++fl.t; pend = true; }
L_0DB8: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
    if (pend) { pend = false; goto L_00F8; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[15] = i15; vu::interpret(1, ((3520u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

static __attribute__((noinline, cold)) void vu1_C3A6F8F1CE888397_c(Vu0Regs &r, std::uint8_t *mem) { vu1_C3A6F8F1CE888397_s<true>(r, mem); }

void vu1_C3A6F8F1CE888397(Vu0Regs &r, std::uint8_t *mem) {
    if ((r.status & 0xC0u) == 0xC0u) vu1_C3A6F8F1CE888397_s<false>(r, mem);
    else vu1_C3A6F8F1CE888397_c(r, mem);
}

template <bool kSticky>
PS2_VU_BODY void vu1_F9EEF1EF744E9F1A_b(Vu0Regs &r, std::uint8_t *mem, VuDaz &daz, std::uint32_t &hop) {
    (void)daz;
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 456u) & 16383u;
    (void)sh;
    v4u n1 = vshadow(r.vf[1]);
    v4u n2 = vshadow(r.vf[2]);
    v4u n3 = vshadow(r.vf[3]);
    v4u n4 = vshadow(r.vf[4]);
    v4u n5 = vshadow(r.vf[5]);
    v4u n6 = vshadow(r.vf[6]);
    v4u n7 = vshadow(r.vf[7]);
    v4u n16 = vshadow(r.vf[16]);
    v4u n17 = vshadow(r.vf[17]);
    v4u n18 = vshadow(r.vf[18]);
    v4u n19 = vshadow(r.vf[19]);
    v4u n20 = vshadow(r.vf[20]);
    v4u n21 = vshadow(r.vf[21]);
    v4u n22 = vshadow(r.vf[22]);
    v4u n23 = vshadow(r.vf[23]);
    v4u n24 = vshadow(r.vf[24]);
    v4u n25 = vshadow(r.vf[25]);
    v4u n27 = vshadow(r.vf[27]);
    v4u n28 = vshadow(r.vf[28]);
    v4u n29 = vshadow(r.vf[29]);
    v4u n30 = vshadow(r.vf[30]);
    v4u n31 = vshadow(r.vf[31]);
    v4u nacc = vshadow(r.acc);
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i3 = r.vi[3];
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i5 = r.vi[5];
    std::uint16_t i6 = r.vi[6];
    std::uint16_t i8 = r.vi[8];
    std::uint16_t i9 = r.vi[9];
    std::uint16_t i10 = r.vi[10];
    std::uint16_t i11 = r.vi[11];
    std::uint16_t i12 = r.vi[12];
    std::uint16_t i13 = r.vi[13];
    std::uint16_t i15 = r.vi[15];
    goto L_01C8;
L_00F8: { ++fl.t; set_vi(i1, 0u + 15u); }
L_0100: { ++fl.t; set_vi(i1, i8 & i1); }
L_0108: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1) + 4, 2); set_vi(i2, v); } }
L_0110: { ++fl.t; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; pendj = true; }
L_0118: { ++fl.t; }
    if (pendj) { pendj = false; vflush(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflush(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflush(r.vf[27], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
    vflush(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflush(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflush(r.vf[27], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((288u + sh) & 16383u));
    return;
L_01C8: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n27[3])); { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[18], q, 16); set_vi(i13, i13 + 1u); } vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n18 = vshadow(r.vf[18]); n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_01D0: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[19], q, 16); set_vi(i13, i13 + 1u); } vstore(r.vf[2], uv); n19 = vshadow(r.vf[19]); n2 = vshadow(r.vf[2]); }
L_01D8: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vsplat(n20[2])); { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[16], q, 16); set_vi(i13, i13 + 1u); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n16 = vshadow(r.vf[16]); nacc = vsel(nacc, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_01E0: { ++fl.t; const v4u uv = vmuld(n17, vsplat(n17[3])); { const v4u m = vload(r.vf[17]); vstore(r.vf[1], vsel(vload(r.vf[1]), v4u{m[1], m[2], m[3], m[0]}, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n1 = vshadow(r.vf[1]); n3 = vsel(n3, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_01E8: { ++fl.t; vflushd(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); const v4u uv = vmax(vload(r.vf[25]), vsplat(r.vf[21].w[3])); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n25 = vshadow(r.vf[25]); }
L_01F0: { ++fl.t; const v4u uv = vmaddd(nacc, n20, vsplat(n27[2])); vstore(r.vf[17], vsel(vload(r.vf[17]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n17 = vsel(n17, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_01F8: { ++fl.t; const v4u uv = vsubd(n24, vsplat(n27[2])); set_vi(i1, 0u + 16u); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.push<1u, kSticky>(uv); }
L_0200: { ++fl.t; const v4u uv = vsubd(n27, n24); { const v4u m = vload(r.vf[1]); vstore(r.vf[6], vsel(vload(r.vf[6]), v4u{m[1], m[2], m[3], m[0]}, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); } vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.push<2u, kSticky>(uv); n6 = vshadow(r.vf[6]); n27 = vsel(n27, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_0208: { ++fl.t; const v4u uv = vmuld(n21, n25); set_vi(i4, 0u + 32u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0210: { ++fl.t; const v4u uv = vmuld(n17, n25); set_vi(i2, i12 + 0u); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.push<12u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_0218: { ++fl.t; vflushd(r.vf[17], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); const v4u uv = vmax(vload(r.vf[17]), vsplat(r.vf[20].w[1])); set_vi(i3, (fl.mac() & 0xFFFFu) == i1 ? 1u : 0u); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); }
L_0220: { ++fl.t; const v4u uv = vmuld(n6, vsplat(n6[3])); set_vi(i4, (fl.mac() & 0xFFFFu) == i4 ? 1u : 0u); vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n4 = vsel(n4, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0228: { ++fl.t; const v4u uv = vmuld(n1, n27); { const std::uint8_t *q = qword(mem, 0u + 44u); vstore(r.vf[17], vsel(vload(r.vf[17]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.stick<12u, kSticky>(uv); n17 = vshadow(r.vf[17]); n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_0230: { ++fl.t; vflushd(r.vf[1], v4u{0u, 0u, 0xFFFFFFFFu, 0u}); const v4u uv = vmuld(n24, n7); vstore(r.vf[25], vsel(vload(r.vf[25]), vload(r.vf[1]), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n25 = vshadow(r.vf[25]); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0238: { ++fl.t; const v4u uv = vmaddd(nacc, n24, vsplat(n7[1])); vstore(r.vf[4], vsel(vload(r.vf[4]), vload(r.vf[0]), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n4 = vshadow(r.vf[4]); n27 = vsel(n27, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0240: { ++fl.t; const v4u uv = vmuld(n28, vsplat(n16[0])); set_vi(i3, i3 | i4); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0248: { ++fl.t; vflushd(r.vf[27], v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0u}); const v4u uv = vmaddd(nacc, n29, vsplat(n16[1])); { const v4u m = vload(r.vf[27]); vstore(r.vf[2], vsel(vload(r.vf[2]), v4u{m[1], m[2], m[3], m[0]}, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); n2 = vshadow(r.vf[2]); nacc = uv; }
L_0250: { ++fl.t; const v4u uv = vmaddd(nacc, n30, vsplat(n16[2])); set_vi(i12, i12 + 12u); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0258: { ++fl.t; const v4u uv = vsubd(n17, vsplat(n27[0])); set_vi(i10, i10 + 4u); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.push<1u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0260: { ++fl.t; const v4u uv = vaddd(nacc, (v4u)((v4f)n31 * (v4f)vsplat(0x3F800000u))); vstore(r.vf[5], vsel(vload(r.vf[5]), vload(r.vf[0]), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n5 = vshadow(r.vf[5]); n27 = vsel(n27, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0268: { ++fl.t; const v4u uv = vmuld(n6, vsplat(n6[2])); r.clip = 0u; fl.set_clip(r.clip, fl.t - 4u); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.push<4u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_0270: { ++fl.t; const v4u uv = vmuld(n17, vsplat(n17[2])); { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[17], q, 16); set_vi(i13, i13 + 1u); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.push<8u, kSticky>(uv); n17 = vshadow(r.vf[17]); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0278: { ++fl.t; const v4u uv = vmuld(n19, vsplat(n27[3])); set_vi(i1, (fl.mac() & 0xFFFFu) == i1 ? 1u : 0u); vstore(r.vf[6], uv); fl.stick<15u, kSticky>(uv); n6 = uv; }
L_0280: { ++fl.t; vflushd(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vmin(vload(r.vf[26]), vsplat(r.vf[20].w[0])); vefu(daz.csr, r, 115u, 27u, 2u); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n25 = vshadow(r.vf[25]); }
L_0288: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[25], r.vf[2].w[3]); set_vi(i3, i3 | i1); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_0290: { ++fl.t; const v4u uv = vmsubd(nacc, n2, vsplat(n3[1])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[15].w[0], r.vf[27].w[2]); fl.end_q(r, qb, 7u); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0298: { ++fl.t; vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vmsubd(nacc, n2, vsplat(n4[0])); { const v4u m = vload(r.vf[6]); vstore(r.vf[7], vsel(vload(r.vf[7]), v4u{m[1], m[2], m[3], m[0]}, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n7 = vshadow(r.vf[7]); n4 = vsel(n4, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_02A0: { ++fl.t; const v4u uv = vmaddd(nacc, n2, vsplat(n4[0])); { const v4u m = vload(r.vf[27]); vstore(r.vf[6], vsel(vload(r.vf[6]), v4u{m[1], m[2], m[3], m[0]}, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n6 = vshadow(r.vf[6]); n5 = vsel(n5, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_02A8: { ++fl.t; const v4u uv = vmaddd(nacc, n2, vsplat(n3[1])); set_vi(i1, (fl.clip() & 15u) ? 1u : 0u); vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n4 = vsel(n4, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_02B0: { ++fl.t; const v4u uv = vaddd(n25, n22); set_vi(i1, i3 | i1); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_02B8: { ++fl.t; const v4u uv = vitof(vload(r.vf[18]), 12); { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 25u) + 12, 2); set_vi(i1, v); } vstore(r.vf[18], uv); n18 = vshadow(r.vf[18]); }
L_02C0: { ++fl.t; vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); const v4u uv = vftoi(vload(r.vf[25]), 4); { const v4u m = vload(r.vf[7]); vstore(r.vf[2], vsel(vload(r.vf[2]), v4u{m[1], m[2], m[3], m[0]}, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n2 = vshadow(r.vf[2]); }
L_02C8: { ++fl.t; const v4u uv = vmaddd(nacc, n4, n1); { std::uint8_t *q = qword(mem, i2 + 0u); std::memcpy(q + 0, &r.vf[6].w[0], 4); std::memcpy(q + 4, &r.vf[6].w[1], 4); std::memcpy(q + 8, &r.vf[6].w[2], 4); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_02D0: { ++fl.t; const v4u uv = vmsubd(nacc, n4, n1); { std::uint8_t *q = qword(mem, i2 + 6u); std::memcpy(q + 4, &r.vf[6].w[1], 4); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n4 = vsel(n4, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_02D8: { ++fl.t; const v4u uv = vmuld(n18, n23); { std::uint8_t *q = qword(mem, i2 + 3u); std::memcpy(q + 0, &r.vf[6].w[0], 4); std::memcpy(q + 8, &r.vf[6].w[2], 4); } vstore(r.vf[7], uv); fl.stick<15u, kSticky>(uv); n7 = uv; }
L_02E0: { ++fl.t; const v4u uv = vmsubd(nacc, n5, n1); set_vi(i3, r.vf[26].w[3]); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_02E8: { ++fl.t; const v4u uv = vmaddd(nacc, n5, n1); { std::uint8_t *q = qword(mem, i2 + 9u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_02F0: { ++fl.t; { std::uint8_t *q = qword(mem, i2 + 6u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
L_02F8: { ++fl.t; { std::uint8_t *q = qword(mem, i2 + 3u); std::memcpy(q + 4, &r.vf[2].w[1], 4); } }
L_0300: { ++fl.t; set_vi(i1, i3 | i1); }
L_0308: { ++fl.t; const v4u uv = vftoi(vload(r.vf[3]), 4); { std::uint8_t *q = qword(mem, i2 + 11u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n3 = vshadow(r.vf[3]); }
L_0310: { ++fl.t; const v4u uv = vftoi(vload(r.vf[7]), 0); { std::uint8_t *q = qword(mem, i2 + 8u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } vstore(r.vf[2], uv); n2 = vshadow(r.vf[2]); }
L_0318: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { std::uint8_t *q = qword(mem, i2 + 5u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.push<1u, kSticky>(uv); n27 = vsel(n27, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0320: { ++fl.t; { std::uint8_t *q = qword(mem, i2 + 2u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0328: { ++fl.t; { std::uint8_t *q = qword(mem, i2 + 11u); std::memcpy(q + 0, &r.vf[3].w[0], 4); std::memcpy(q + 4, &r.vf[3].w[1], 4); std::memcpy(q + 8, &r.vf[3].w[2], 4); } }
L_0330: { ++fl.t; { std::uint8_t *q = qword(mem, i2 + 10u); std::memcpy(q, &r.vf[2], 16); } }
L_0338: { ++fl.t; const v4u uv = vftoi(vload(r.vf[4]), 4); { std::uint8_t *q = qword(mem, i2 + 7u); std::memcpy(q, &r.vf[2], 16); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n4 = vshadow(r.vf[4]); }
L_0340: { ++fl.t; const v4u uv = vftoi(vload(r.vf[6]), 4); r.vf[26].w[3] = r.p; vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n6 = vshadow(r.vf[6]); }
L_0348: { ++fl.t; const v4u uv = vftoi(vload(r.vf[1]), 4); { std::uint8_t *q = qword(mem, i2 + 4u); std::memcpy(q, &r.vf[2], 16); } vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n1 = vshadow(r.vf[1]); }
L_0350: { ++fl.t; { std::uint8_t *q = qword(mem, i2 + 1u); std::memcpy(q, &r.vf[2], 16); } }
L_0358: { ++fl.t; { std::uint8_t *q = qword(mem, i2 + 2u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); std::memcpy(q + 8, &r.vf[4].w[2], 4); } }
L_0360: { ++fl.t; { std::uint8_t *q = qword(mem, i2 + 5u); std::memcpy(q + 0, &r.vf[6].w[0], 4); std::memcpy(q + 4, &r.vf[6].w[1], 4); std::memcpy(q + 8, &r.vf[6].w[2], 4); } }
L_0368: { ++fl.t; { std::uint8_t *q = qword(mem, i2 + 8u); std::memcpy(q + 0, &r.vf[1].w[0], 4); std::memcpy(q + 4, &r.vf[1].w[1], 4); std::memcpy(q + 8, &r.vf[1].w[2], 4); } }
L_0370: { ++fl.t; set_vi(i15, (((880u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0378: { ++fl.t; set_vi(i1, 0u + 4u); }
    if (pend) { pend = false; goto L_0BB8; }
L_0380: { ++fl.t; set_vi(i1, i11 - i12); }
L_0388: { ++fl.t; set_vi(i6, i8 + 0u); }
L_0390: { ++fl.t; pend = static_cast<std::int16_t>(i1) > 0; }
L_0398: { ++fl.t; }
    if (pend) { pend = false; goto L_03C8; }
L_03A0: { ++fl.t; set_vi(i15, (((928u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_03A8: { ++fl.t; }
    if (pend) { pend = false; goto L_0B18; }
L_03B0: { ++fl.t; set_vi(i10, 0u + 0u); }
L_03B8: { ++fl.t; set_vi(i9, 0u + i12); }
L_03C0: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_03C8: { ++fl.t; pend = static_cast<std::int16_t>(i6) >= 0; }
L_03D0: { ++fl.t; set_vi(i8, r.vf[16].w[3]); }
    if (pend) { pend = false; vflushd(r.vf[7], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[27], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); goto L_01C8; }
L_03D8: { ++fl.t; set_vi(i5, 0u + 126u); }
L_03E0: { ++fl.t; pend = true; }
L_03E8: { ++fl.t; set_vi(i4, 0u + 57u); }
    if (pend) { pend = false; goto L_0CB8; }
    vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[27], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((1008u + sh) & 16383u));
    return;
L_0B18: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 114u) + 12, 2); set_vi(i3, v); } }
L_0B20: { ++fl.t; set_vi(i2, 0u + 32767u); }
L_0B28: { ++fl.t; set_vi(i2, i2 + 1u); }
L_0B30: { ++fl.t; set_vi(i2, i10 | i2); }
L_0B38: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 0u) + 12, 2); set_vi(i1, v); } }
L_0B40: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i2; std::memcpy(q + 0, &v, 4); } }
L_0B48: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 2u) + 12, 2); set_vi(i3, v); } }
L_0B50: { ++fl.t; }
L_0B58: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0B60: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 2u) + 12, 2); set_vi(i12, v); } }
L_0B68: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 4u) + 12, 2); set_vi(i11, v); } }
L_0B70: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0B78: { ++fl.t; vkick_last(daz, 1, i3); }
    if (pendj) { pendj = false; vflush(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflush(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflush(r.vf[27], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_0B80: { ++fl.t; ending = true; }
L_0B88: { ++fl.t; }
    if (ending) { vflush(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflush(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflush(r.vf[27], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; r.tpc = ((2960u + sh) & 16383u); return; }
    vflush(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflush(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflush(r.vf[27], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((2960u + sh) & 16383u));
    return;
L_0BB8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 31u); std::memcpy(&r.vf[1], q, 16); } n1 = vshadow(r.vf[1]); }
L_0BC0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 26u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); } n2 = vshadow(r.vf[2]); }
L_0BC8: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_0BD0: { ++fl.t; set_vi(i10, 0u + 0u); }
L_0BD8: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); std::memcpy(q, &r.vf[1], 16); } }
L_0BE0: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 1u); const std::uint32_t v = i1; std::memcpy(q + 0, &v, 4); } }
L_0BE8: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 2u); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); std::memcpy(q + 12, &r.vf[2].w[3], 4); } }
L_0BF0: { ++fl.t; set_vi(i9, i12 + 2u); }
L_0BF8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0C00: { ++fl.t; set_vi(i12, i12 + 3u); }
    if (pendj) { pendj = false; vflush(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflush(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflush(r.vf[27], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
    vflush(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflush(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflush(r.vf[27], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((3080u + sh) & 16383u));
    return;
L_0CB8: { ++fl.t; set_vi(i1, 0u + 1024u); }
L_0CC0: { ++fl.t; set_vi(i1, i6 & i1); }
L_0CC8: { ++fl.t; set_vi(i6, i6 + i6); }
L_0CD0: { ++fl.t; pend = 0u == i1; }
L_0CD8: { ++fl.t; set_vi(i6, i6 + i6); }
    if (pend) { pend = false; goto L_0D08; }
L_0CE0: { ++fl.t; set_vi(i15, (((3296u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0CE8: { ++fl.t; }
    if (pend) { pend = false; goto L_0B18; }
L_0CF0: { ++fl.t; set_vi(i10, 0u + 0u); }
L_0CF8: { ++fl.t; set_vi(i9, 0u + i12); }
L_0D00: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_0D08: { ++fl.t; }
L_0D10: { ++fl.t; pend = static_cast<std::int16_t>(i6) >= 0; }
L_0D18: { ++fl.t; set_vi(i6, i6 + i6); }
    if (pend) { pend = false; goto L_0D20; }
L_0D20: { ++fl.t; }
L_0D28: { ++fl.t; pend = static_cast<std::int16_t>(i6) >= 0; }
L_0D30: { ++fl.t; set_vi(i6, i6 + i6); }
    if (pend) { pend = false; goto L_0D88; }
L_0D38: { ++fl.t; set_vi(i15, (((3384u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0D40: { ++fl.t; }
    if (pend) { pend = false; goto L_0B80; }
L_0D48: { ++fl.t; jpc = (static_cast<std::uint32_t>(i5) * 8u) & 16383u; set_vi(i15, (((3400u + sh) & 16383u) + 16u) / 8u); pendj = true; }
L_0D50: { ++fl.t; }
    if (pendj) { pendj = false; vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[27], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_0D58: { ++fl.t; pend = static_cast<std::int16_t>(i6) < 0; }
L_0D60: { ++fl.t; }
    if (pend) { pend = false; goto L_0DB0; }
L_0D68: { ++fl.t; fl.flush_q(r); }
L_0D70: { ++fl.t; }
L_0D78: { ++fl.t; jpc = (static_cast<std::uint32_t>(i4) * 8u) & 16383u; pendj = true; }
L_0D80: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); r.vf[26].w[3] = r.p; vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.push<1u, kSticky>(uv); n27 = vsel(n27, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
    if (pendj) { pendj = false; vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[27], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_0D88: { ++fl.t; }
L_0D90: { ++fl.t; pend = static_cast<std::int16_t>(i6) < 0; }
L_0D98: { ++fl.t; }
    if (pend) { pend = false; goto L_0DB0; }
L_0DA0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i4) * 8u) & 16383u; pendj = true; }
L_0DA8: { ++fl.t; }
    if (pendj) { pendj = false; vflush(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflush(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflush(r.vf[27], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_0DB0: { ++fl.t; pend = true; }
L_0DB8: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
    if (pend) { pend = false; goto L_00F8; }
    vflush(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflush(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); vflush(r.vf[27], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((3520u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, jpc);
    return;
}
static __attribute__((noinline, cold)) void vu1_F9EEF1EF744E9F1A_c(Vu0Regs &r, std::uint8_t *mem, VuDaz &daz, std::uint32_t &hop) { vu1_F9EEF1EF744E9F1A_b<true>(r, mem, daz, hop); }
void vu1_F9EEF1EF744E9F1A(Vu0Regs &r, std::uint8_t *mem) {
    std::uint32_t hop = kNoHop;
    {
        VuDaz daz;
        if ((r.status & 0xC0u) == 0xC0u) vu1_F9EEF1EF744E9F1A_b<false>(r, mem, daz, hop);
        else vu1_F9EEF1EF744E9F1A_c(r, mem, daz, hop);
    }
    if (hop != kNoHop) vu::interpret(1, hop);
}

template <bool kSticky>
static void vu1_57426259393C43C4_s(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 7208u) & 16383u;
    (void)sh;
    v4u n1 = vshadow_eager(r.vf[1]);
    v4u n2 = vshadow_eager(r.vf[2]);
    v4u n3 = vshadow_eager(r.vf[3]);
    v4u n4 = vshadow_eager(r.vf[4]);
    v4u n5 = vshadow_eager(r.vf[5]);
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i3 = r.vi[3];
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i5 = r.vi[5];
    std::uint16_t i6 = r.vi[6];
    std::uint16_t i7 = r.vi[7];
    std::uint16_t i8 = r.vi[8];
    std::uint16_t i9 = r.vi[9];
    std::uint16_t i10 = r.vi[10];
    std::uint16_t i11 = r.vi[11];
    std::uint16_t i12 = r.vi[12];
    std::uint16_t i14 = r.vi[14];
    std::uint16_t i15 = r.vi[15];
    goto L_1C28;
L_1800: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 114u) + 12, 2); set_vi(i3, v); } }
L_1808: { ++fl.t; set_vi(i2, 0u + 32767u); }
L_1810: { ++fl.t; set_vi(i2, i2 + 1u); }
L_1818: { ++fl.t; set_vi(i2, i10 | i2); }
L_1820: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 0u) + 12, 2); set_vi(i1, v); } }
L_1828: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i2; std::memcpy(q + 0, &v, 4); } }
L_1830: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 2u) + 12, 2); set_vi(i3, v); } }
L_1838: { ++fl.t; }
L_1840: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_1848: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 2u) + 12, 2); set_vi(i12, v); } }
L_1850: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 4u) + 12, 2); set_vi(i11, v); } }
L_1858: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1860: { ++fl.t; vu::kick(1, i3); }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[7] = i7; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, ((6248u + sh) & 16383u));
    return;
L_1C28: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 133u); std::memcpy(&r.vf[1], q, 16); } n1 = vshadow_eager(r.vf[1]); }
L_1C30: { ++fl.t; set_vi(i15, (((7216u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1C38: { ++fl.t; set_vi(i7, i6 + 0u); }
    if (pend) { pend = false; goto L_1DF8; }
L_1C40: { ++fl.t; set_vi(i15, (((7232u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1C48: { ++fl.t; set_vi(i7, i5 + 0u); }
    if (pend) { pend = false; goto L_1DF8; }
L_1C50: { ++fl.t; set_vi(i15, (((7248u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1C58: { ++fl.t; set_vi(i7, i4 + 0u); }
    if (pend) { pend = false; goto L_1DF8; }
L_1C60: { ++fl.t; set_vi(i12, i12 - 3u); }
L_1C68: { ++fl.t; pend = true; }
L_1C70: { ++fl.t; set_vi(i10, i10 - 1u); }
    if (pend) { pend = false; goto L_1D20; }
    fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[7] = i7; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, ((7288u + sh) & 16383u));
    return;
L_1D20: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 115u) + 4, 2); set_vi(i15, v); } }
L_1D28: { ++fl.t; set_vi(i12, i12 + 3u); }
L_1D30: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1D38: { ++fl.t; set_vi(i10, i10 + 1u); }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[7] = i7; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, ((7488u + sh) & 16383u));
    return;
L_1DF8: { ++fl.t; set_vi(i14, i14 - 1u); }
L_1E00: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i3; std::memcpy(q + 0, &v, 4); } }
L_1E08: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i2; std::memcpy(q + 4, &v, 4); } }
L_1E10: { ++fl.t; { const std::uint8_t *q = qword(mem, i7 + 0u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } n3 = vshadow_eager(r.vf[3]); }
L_1E18: { ++fl.t; { const std::uint8_t *q = qword(mem, i7 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow_eager(r.vf[2]); }
L_1E20: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 39u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n4 = vshadow_eager(r.vf[4]); }
L_1E28: { ++fl.t; { const std::uint8_t *q = qword(mem, i7 + 3u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow_eager(r.vf[5]); }
L_1E30: { ++fl.t; { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[15].w[0], r.vf[3].w[2]); fl.end_q(r, qb, 7u); } }
L_1E38: { ++fl.t; }
L_1E40: { ++fl.t; const v4u uv = vaddn(n2, n4); set_vi(i2, 0u + 16384u); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1E48: { ++fl.t; const v4u uv = vmuln(n5, n1); set_vi(i2, i2 & i8); vstore(r.vf[5], uv); fl.stick<15u, kSticky>(uv); n5 = uv; }
L_1E50: { ++fl.t; set_vi(i2, i2 + i2); }
L_1E58: { ++fl.t; }
L_1E60: { ++fl.t; const v4u uv = vftoi(vload(r.vf[2]), 4); vstore(r.vf[4], uv); n4 = vshadow_eager(r.vf[4]); }
L_1E68: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd_eager(r.q)); { const std::uint8_t *q = qword(mem, i7 + 2u); std::memcpy(&r.vf[2], q, 16); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n2 = vshadow_eager(r.vf[2]); n3 = vsel(n3, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_1E70: { ++fl.t; const v4u uv = vftoi(vload(r.vf[5]), 0); vstore(r.vf[5], uv); n5 = vshadow_eager(r.vf[5]); }
L_1E78: { ++fl.t; }
L_1E80: { ++fl.t; set_vi(i3, r.vf[4].w[3]); }
L_1E88: { ++fl.t; const v4u uv = vmuln(n2, vsplat(n3[3])); { std::uint8_t *q = qword(mem, i12 + 2u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); std::memcpy(q + 8, &r.vf[4].w[2], 4); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.stick<12u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_1E90: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n3[3])); { std::uint8_t *q = qword(mem, i12 + 1u); std::memcpy(q, &r.vf[5], 16); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.push_last<2u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_1E98: { ++fl.t; }
L_1EA0: { ++fl.t; set_vi(i2, i3 | i2); }
L_1EA8: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 2u); const std::uint32_t v = i2; std::memcpy(q + 12, &v, 4); } }
L_1EB0: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); std::memcpy(q, &r.vf[2], 16); } }
L_1EB8: { ++fl.t; set_vi(i3, i11 - i12); }
L_1EC0: { ++fl.t; set_vi(i12, i12 + 3u); }
L_1EC8: { ++fl.t; pend = static_cast<std::int16_t>(i3) > 0; }
L_1ED0: { ++fl.t; set_vi(i10, i10 + 1u); }
    if (pend) { pend = false; goto L_1F18; }
L_1ED8: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i15; std::memcpy(q + 12, &v, 4); } }
L_1EE0: { ++fl.t; set_vi(i15, (((7904u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1EE8: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i1; std::memcpy(q + 8, &v, 4); } }
    if (pend) { pend = false; goto L_1800; }
L_1EF0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 8, 2); set_vi(i1, v); } }
L_1EF8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 12, 2); set_vi(i15, v); } }
L_1F00: { ++fl.t; set_vi(i10, 0u + 0u); }
L_1F08: { ++fl.t; set_vi(i9, 0u + i12); }
L_1F10: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_1F18: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 4, 2); set_vi(i2, v); } }
L_1F20: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 0, 2); set_vi(i3, v); } }
L_1F28: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1F30: { ++fl.t; set_vi(i14, i14 + 1u); }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[7] = i7; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, ((7992u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[7] = i7; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

static __attribute__((noinline, cold)) void vu1_57426259393C43C4_c(Vu0Regs &r, std::uint8_t *mem) { vu1_57426259393C43C4_s<true>(r, mem); }

void vu1_57426259393C43C4(Vu0Regs &r, std::uint8_t *mem) {
    if ((r.status & 0xC0u) == 0xC0u) vu1_57426259393C43C4_s<false>(r, mem);
    else vu1_57426259393C43C4_c(r, mem);
}

template <bool kSticky>
static void vu1_C9348CAC305714F3_s(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 7232u) & 16383u;
    (void)sh;
    v4u n1 = vshadow_eager(r.vf[1]);
    v4u n2 = vshadow_eager(r.vf[2]);
    v4u n3 = vshadow_eager(r.vf[3]);
    v4u n4 = vshadow_eager(r.vf[4]);
    v4u n5 = vshadow_eager(r.vf[5]);
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i3 = r.vi[3];
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i5 = r.vi[5];
    std::uint16_t i7 = r.vi[7];
    std::uint16_t i8 = r.vi[8];
    std::uint16_t i9 = r.vi[9];
    std::uint16_t i10 = r.vi[10];
    std::uint16_t i11 = r.vi[11];
    std::uint16_t i12 = r.vi[12];
    std::uint16_t i14 = r.vi[14];
    std::uint16_t i15 = r.vi[15];
    goto L_1C40;
L_1800: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 114u) + 12, 2); set_vi(i3, v); } }
L_1808: { ++fl.t; set_vi(i2, 0u + 32767u); }
L_1810: { ++fl.t; set_vi(i2, i2 + 1u); }
L_1818: { ++fl.t; set_vi(i2, i10 | i2); }
L_1820: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 0u) + 12, 2); set_vi(i1, v); } }
L_1828: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i2; std::memcpy(q + 0, &v, 4); } }
L_1830: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 2u) + 12, 2); set_vi(i3, v); } }
L_1838: { ++fl.t; }
L_1840: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_1848: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 2u) + 12, 2); set_vi(i12, v); } }
L_1850: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 4u) + 12, 2); set_vi(i11, v); } }
L_1858: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1860: { ++fl.t; vu::kick(1, i3); }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[7] = i7; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, ((6248u + sh) & 16383u));
    return;
L_1C40: { ++fl.t; set_vi(i15, (((7232u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1C48: { ++fl.t; set_vi(i7, i5 + 0u); }
    if (pend) { pend = false; goto L_1DF8; }
L_1C50: { ++fl.t; set_vi(i15, (((7248u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1C58: { ++fl.t; set_vi(i7, i4 + 0u); }
    if (pend) { pend = false; goto L_1DF8; }
L_1C60: { ++fl.t; set_vi(i12, i12 - 3u); }
L_1C68: { ++fl.t; pend = true; }
L_1C70: { ++fl.t; set_vi(i10, i10 - 1u); }
    if (pend) { pend = false; goto L_1D20; }
    fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[7] = i7; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, ((7288u + sh) & 16383u));
    return;
L_1D20: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 115u) + 4, 2); set_vi(i15, v); } }
L_1D28: { ++fl.t; set_vi(i12, i12 + 3u); }
L_1D30: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1D38: { ++fl.t; set_vi(i10, i10 + 1u); }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[7] = i7; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, ((7488u + sh) & 16383u));
    return;
L_1DF8: { ++fl.t; set_vi(i14, i14 - 1u); }
L_1E00: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i3; std::memcpy(q + 0, &v, 4); } }
L_1E08: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i2; std::memcpy(q + 4, &v, 4); } }
L_1E10: { ++fl.t; { const std::uint8_t *q = qword(mem, i7 + 0u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } n3 = vshadow_eager(r.vf[3]); }
L_1E18: { ++fl.t; { const std::uint8_t *q = qword(mem, i7 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow_eager(r.vf[2]); }
L_1E20: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 39u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n4 = vshadow_eager(r.vf[4]); }
L_1E28: { ++fl.t; { const std::uint8_t *q = qword(mem, i7 + 3u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow_eager(r.vf[5]); }
L_1E30: { ++fl.t; { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[15].w[0], r.vf[3].w[2]); fl.end_q(r, qb, 7u); } }
L_1E38: { ++fl.t; }
L_1E40: { ++fl.t; const v4u uv = vaddn(n2, n4); set_vi(i2, 0u + 16384u); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1E48: { ++fl.t; const v4u uv = vmuln(n5, n1); set_vi(i2, i2 & i8); vstore(r.vf[5], uv); fl.stick<15u, kSticky>(uv); n5 = uv; }
L_1E50: { ++fl.t; set_vi(i2, i2 + i2); }
L_1E58: { ++fl.t; }
L_1E60: { ++fl.t; const v4u uv = vftoi(vload(r.vf[2]), 4); vstore(r.vf[4], uv); n4 = vshadow_eager(r.vf[4]); }
L_1E68: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd_eager(r.q)); { const std::uint8_t *q = qword(mem, i7 + 2u); std::memcpy(&r.vf[2], q, 16); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n2 = vshadow_eager(r.vf[2]); n3 = vsel(n3, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_1E70: { ++fl.t; const v4u uv = vftoi(vload(r.vf[5]), 0); vstore(r.vf[5], uv); n5 = vshadow_eager(r.vf[5]); }
L_1E78: { ++fl.t; }
L_1E80: { ++fl.t; set_vi(i3, r.vf[4].w[3]); }
L_1E88: { ++fl.t; const v4u uv = vmuln(n2, vsplat(n3[3])); { std::uint8_t *q = qword(mem, i12 + 2u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); std::memcpy(q + 8, &r.vf[4].w[2], 4); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.stick<12u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_1E90: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n3[3])); { std::uint8_t *q = qword(mem, i12 + 1u); std::memcpy(q, &r.vf[5], 16); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.push_last<2u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_1E98: { ++fl.t; }
L_1EA0: { ++fl.t; set_vi(i2, i3 | i2); }
L_1EA8: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 2u); const std::uint32_t v = i2; std::memcpy(q + 12, &v, 4); } }
L_1EB0: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); std::memcpy(q, &r.vf[2], 16); } }
L_1EB8: { ++fl.t; set_vi(i3, i11 - i12); }
L_1EC0: { ++fl.t; set_vi(i12, i12 + 3u); }
L_1EC8: { ++fl.t; pend = static_cast<std::int16_t>(i3) > 0; }
L_1ED0: { ++fl.t; set_vi(i10, i10 + 1u); }
    if (pend) { pend = false; goto L_1F18; }
L_1ED8: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i15; std::memcpy(q + 12, &v, 4); } }
L_1EE0: { ++fl.t; set_vi(i15, (((7904u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1EE8: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i1; std::memcpy(q + 8, &v, 4); } }
    if (pend) { pend = false; goto L_1800; }
L_1EF0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 8, 2); set_vi(i1, v); } }
L_1EF8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 12, 2); set_vi(i15, v); } }
L_1F00: { ++fl.t; set_vi(i10, 0u + 0u); }
L_1F08: { ++fl.t; set_vi(i9, 0u + i12); }
L_1F10: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_1F18: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 4, 2); set_vi(i2, v); } }
L_1F20: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 0, 2); set_vi(i3, v); } }
L_1F28: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1F30: { ++fl.t; set_vi(i14, i14 + 1u); }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[7] = i7; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, ((7992u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[7] = i7; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

static __attribute__((noinline, cold)) void vu1_C9348CAC305714F3_c(Vu0Regs &r, std::uint8_t *mem) { vu1_C9348CAC305714F3_s<true>(r, mem); }

void vu1_C9348CAC305714F3(Vu0Regs &r, std::uint8_t *mem) {
    if ((r.status & 0xC0u) == 0xC0u) vu1_C9348CAC305714F3_s<false>(r, mem);
    else vu1_C9348CAC305714F3_c(r, mem);
}

void vu1_1F89820B2D951562(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 7264u) & 16383u;
    (void)sh;
    std::uint16_t i10 = r.vi[10];
    std::uint16_t i12 = r.vi[12];
    std::uint16_t i15 = r.vi[15];
    goto L_1C60;
L_1C60: { ++fl.t; set_vi(i12, i12 - 3u); }
L_1C68: { ++fl.t; pend = true; }
L_1C70: { ++fl.t; set_vi(i10, i10 - 1u); }
    if (pend) { pend = false; goto L_1D20; }
    fl.finish(r); r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((7288u + sh) & 16383u));
    return;
L_1D20: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 115u) + 4, 2); set_vi(i15, v); } }
L_1D28: { ++fl.t; set_vi(i12, i12 + 3u); }
L_1D30: { fl.t += 3u; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1D38: { ++fl.t; set_vi(i10, i10 + 1u); }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((7488u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

template <bool kSticky>
static void vu1_F9C65AEF995BFE4F_s(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 7248u) & 16383u;
    (void)sh;
    v4u n1 = vshadow_eager(r.vf[1]);
    v4u n2 = vshadow_eager(r.vf[2]);
    v4u n3 = vshadow_eager(r.vf[3]);
    v4u n4 = vshadow_eager(r.vf[4]);
    v4u n5 = vshadow_eager(r.vf[5]);
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i3 = r.vi[3];
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i7 = r.vi[7];
    std::uint16_t i8 = r.vi[8];
    std::uint16_t i9 = r.vi[9];
    std::uint16_t i10 = r.vi[10];
    std::uint16_t i11 = r.vi[11];
    std::uint16_t i12 = r.vi[12];
    std::uint16_t i14 = r.vi[14];
    std::uint16_t i15 = r.vi[15];
    goto L_1C50;
L_1800: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 114u) + 12, 2); set_vi(i3, v); } }
L_1808: { ++fl.t; set_vi(i2, 0u + 32767u); }
L_1810: { ++fl.t; set_vi(i2, i2 + 1u); }
L_1818: { ++fl.t; set_vi(i2, i10 | i2); }
L_1820: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 0u) + 12, 2); set_vi(i1, v); } }
L_1828: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i2; std::memcpy(q + 0, &v, 4); } }
L_1830: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 2u) + 12, 2); set_vi(i3, v); } }
L_1838: { ++fl.t; }
L_1840: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_1848: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 2u) + 12, 2); set_vi(i12, v); } }
L_1850: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 4u) + 12, 2); set_vi(i11, v); } }
L_1858: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1860: { ++fl.t; vu::kick(1, i3); }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[7] = i7; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, ((6248u + sh) & 16383u));
    return;
L_1C50: { ++fl.t; set_vi(i15, (((7248u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1C58: { ++fl.t; set_vi(i7, i4 + 0u); }
    if (pend) { pend = false; goto L_1DF8; }
L_1C60: { ++fl.t; set_vi(i12, i12 - 3u); }
L_1C68: { ++fl.t; pend = true; }
L_1C70: { ++fl.t; set_vi(i10, i10 - 1u); }
    if (pend) { pend = false; goto L_1D20; }
    fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[7] = i7; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, ((7288u + sh) & 16383u));
    return;
L_1D20: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 115u) + 4, 2); set_vi(i15, v); } }
L_1D28: { ++fl.t; set_vi(i12, i12 + 3u); }
L_1D30: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1D38: { ++fl.t; set_vi(i10, i10 + 1u); }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[7] = i7; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, ((7488u + sh) & 16383u));
    return;
L_1DF8: { ++fl.t; set_vi(i14, i14 - 1u); }
L_1E00: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i3; std::memcpy(q + 0, &v, 4); } }
L_1E08: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i2; std::memcpy(q + 4, &v, 4); } }
L_1E10: { ++fl.t; { const std::uint8_t *q = qword(mem, i7 + 0u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } n3 = vshadow_eager(r.vf[3]); }
L_1E18: { ++fl.t; { const std::uint8_t *q = qword(mem, i7 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow_eager(r.vf[2]); }
L_1E20: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 39u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n4 = vshadow_eager(r.vf[4]); }
L_1E28: { ++fl.t; { const std::uint8_t *q = qword(mem, i7 + 3u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow_eager(r.vf[5]); }
L_1E30: { ++fl.t; { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[15].w[0], r.vf[3].w[2]); fl.end_q(r, qb, 7u); } }
L_1E38: { ++fl.t; }
L_1E40: { ++fl.t; const v4u uv = vaddn(n2, n4); set_vi(i2, 0u + 16384u); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1E48: { ++fl.t; const v4u uv = vmuln(n5, n1); set_vi(i2, i2 & i8); vstore(r.vf[5], uv); fl.stick<15u, kSticky>(uv); n5 = uv; }
L_1E50: { ++fl.t; set_vi(i2, i2 + i2); }
L_1E58: { ++fl.t; }
L_1E60: { ++fl.t; const v4u uv = vftoi(vload(r.vf[2]), 4); vstore(r.vf[4], uv); n4 = vshadow_eager(r.vf[4]); }
L_1E68: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd_eager(r.q)); { const std::uint8_t *q = qword(mem, i7 + 2u); std::memcpy(&r.vf[2], q, 16); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n2 = vshadow_eager(r.vf[2]); n3 = vsel(n3, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_1E70: { ++fl.t; const v4u uv = vftoi(vload(r.vf[5]), 0); vstore(r.vf[5], uv); n5 = vshadow_eager(r.vf[5]); }
L_1E78: { ++fl.t; }
L_1E80: { ++fl.t; set_vi(i3, r.vf[4].w[3]); }
L_1E88: { ++fl.t; const v4u uv = vmuln(n2, vsplat(n3[3])); { std::uint8_t *q = qword(mem, i12 + 2u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); std::memcpy(q + 8, &r.vf[4].w[2], 4); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.stick<12u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_1E90: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n3[3])); { std::uint8_t *q = qword(mem, i12 + 1u); std::memcpy(q, &r.vf[5], 16); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.push_last<2u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_1E98: { ++fl.t; }
L_1EA0: { ++fl.t; set_vi(i2, i3 | i2); }
L_1EA8: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 2u); const std::uint32_t v = i2; std::memcpy(q + 12, &v, 4); } }
L_1EB0: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); std::memcpy(q, &r.vf[2], 16); } }
L_1EB8: { ++fl.t; set_vi(i3, i11 - i12); }
L_1EC0: { ++fl.t; set_vi(i12, i12 + 3u); }
L_1EC8: { ++fl.t; pend = static_cast<std::int16_t>(i3) > 0; }
L_1ED0: { ++fl.t; set_vi(i10, i10 + 1u); }
    if (pend) { pend = false; goto L_1F18; }
L_1ED8: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i15; std::memcpy(q + 12, &v, 4); } }
L_1EE0: { ++fl.t; set_vi(i15, (((7904u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1EE8: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i1; std::memcpy(q + 8, &v, 4); } }
    if (pend) { pend = false; goto L_1800; }
L_1EF0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 8, 2); set_vi(i1, v); } }
L_1EF8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 12, 2); set_vi(i15, v); } }
L_1F00: { ++fl.t; set_vi(i10, 0u + 0u); }
L_1F08: { ++fl.t; set_vi(i9, 0u + i12); }
L_1F10: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_1F18: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 4, 2); set_vi(i2, v); } }
L_1F20: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 0, 2); set_vi(i3, v); } }
L_1F28: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1F30: { ++fl.t; set_vi(i14, i14 + 1u); }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[7] = i7; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, ((7992u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[7] = i7; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

static __attribute__((noinline, cold)) void vu1_F9C65AEF995BFE4F_c(Vu0Regs &r, std::uint8_t *mem) { vu1_F9C65AEF995BFE4F_s<true>(r, mem); }

void vu1_F9C65AEF995BFE4F(Vu0Regs &r, std::uint8_t *mem) {
    if ((r.status & 0xC0u) == 0xC0u) vu1_F9C65AEF995BFE4F_s<false>(r, mem);
    else vu1_F9C65AEF995BFE4F_c(r, mem);
}

template <bool kSticky>
PS2_VU_BODY void vu1_4D59C9EA37F16471_b(Vu0Regs &r, std::uint8_t *mem, VuDaz &daz, std::uint32_t &hop) {
    (void)daz;
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 5696u) & 16383u;
    (void)sh;
    v4u n1 = vshadow(r.vf[1]);
    v4u n2 = vshadow(r.vf[2]);
    v4u n3 = vshadow(r.vf[3]);
    v4u n4 = vshadow(r.vf[4]);
    v4u n5 = vshadow(r.vf[5]);
    v4u n6 = vshadow(r.vf[6]);
    v4u n7 = vshadow(r.vf[7]);
    v4u n8 = vshadow(r.vf[8]);
    v4u n9 = vshadow(r.vf[9]);
    v4u n10 = vshadow(r.vf[10]);
    v4u n11 = vshadow(r.vf[11]);
    v4u n12 = vshadow(r.vf[12]);
    v4u n13 = vshadow(r.vf[13]);
    v4u n14 = vshadow(r.vf[14]);
    v4u n18 = vshadow(r.vf[18]);
    v4u n19 = vshadow(r.vf[19]);
    v4u n24 = vshadow(r.vf[24]);
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i3 = r.vi[3];
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i5 = r.vi[5];
    std::uint16_t i6 = r.vi[6];
    std::uint16_t i7 = r.vi[7];
    std::uint16_t i8 = r.vi[8];
    std::uint16_t i9 = r.vi[9];
    std::uint16_t i10 = r.vi[10];
    std::uint16_t i11 = r.vi[11];
    std::uint16_t i12 = r.vi[12];
    std::uint16_t i14 = r.vi[14];
    std::uint16_t i15 = r.vi[15];
    goto L_1640;
L_0E20: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 114u) + 12, 2); set_vi(i3, v); } }
L_0E28: { ++fl.t; set_vi(i2, 0u + 32767u); }
L_0E30: { ++fl.t; set_vi(i2, i2 + 1u); }
L_0E38: { ++fl.t; set_vi(i2, i10 | i2); }
L_0E40: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 0u) + 12, 2); set_vi(i1, v); } }
L_0E48: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i2; std::memcpy(q + 0, &v, 4); } }
L_0E50: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 2u) + 12, 2); set_vi(i3, v); } }
L_0E58: { ++fl.t; }
L_0E60: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0E68: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 2u) + 12, 2); set_vi(i12, v); } }
L_0E70: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 4u) + 12, 2); set_vi(i11, v); } }
L_0E78: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0E80: { ++fl.t; vkick_last(daz, 1, i3); }
    if (pendj) { pendj = false; vflush(r.vf[3], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); goto dispatch; }
    vflush(r.vf[3], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vhop(hop, ((3720u + sh) & 16383u));
    return;
L_0EC0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 31u); std::memcpy(&r.vf[1], q, 16); } n1 = vshadow(r.vf[1]); }
L_0EC8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 26u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); } n2 = vshadow(r.vf[2]); }
L_0ED0: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_0ED8: { ++fl.t; set_vi(i10, 0u + 0u); }
L_0EE0: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); std::memcpy(q, &r.vf[1], 16); } }
L_0EE8: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 1u); const std::uint32_t v = i1; std::memcpy(q + 0, &v, 4); } }
L_0EF0: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 2u); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); std::memcpy(q + 12, &r.vf[2].w[3], 4); } }
L_0EF8: { ++fl.t; set_vi(i9, i12 + 2u); }
L_0F00: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0F08: { ++fl.t; set_vi(i12, i12 + 3u); }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vhop(hop, ((3856u + sh) & 16383u));
    return;
L_1370: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n4[1])); vstore(r.vf[1], vsel(vload(r.vf[1]), vload(r.vf[4]), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vshadow(r.vf[1]); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_1378: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n5[0])); vstore(r.vf[2], vsel(vload(r.vf[2]), vload(r.vf[5]), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n2 = vshadow(r.vf[2]); n1 = vsel(n1, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_1380: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n6[1])); { const std::uint8_t *q = qword(mem, 0u + 39u); vstore(r.vf[7], vsel(vload(r.vf[7]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.stick<2u, kSticky>(uv); n7 = vshadow(r.vf[7]); n2 = vsel(n2, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_1388: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n6[0])); { const std::uint8_t *q = qword(mem, 0u + 40u); vstore(r.vf[8], vsel(vload(r.vf[8]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.push_last<2u, kSticky>(uv); n8 = vshadow(r.vf[8]); n1 = vsel(n1, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_1390: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[1], r.vf[7].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_1398: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[8].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_13A0: { ++fl.t; }
L_13A8: { ++fl.t; }
L_13B0: { ++fl.t; }
L_13B8: { ++fl.t; set_vi(i1, ((fl.clip() | 16774527u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); }
L_13C0: { ++fl.t; pend = 0u != i1; }
L_13C8: { ++fl.t; set_vi(i1, ((fl.clip() | 16775871u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); }
    if (pend) { pend = false; goto L_1410; }
L_13D0: { ++fl.t; pend = 0u != i1; }
L_13D8: { ++fl.t; set_vi(i1, ((fl.clip() | 16777173u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); }
    if (pend) { pend = false; goto L_1410; }
L_13E0: { ++fl.t; pend = 0u != i1; }
L_13E8: { ++fl.t; set_vi(i1, ((fl.clip() | 16777194u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); }
    if (pend) { pend = false; goto L_1410; }
L_13F0: { ++fl.t; pend = 0u != i1; }
L_13F8: { ++fl.t; set_vi(i1, 0u + 0u); }
    if (pend) { pend = false; goto L_1410; }
L_1400: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1408: { ++fl.t; }
    if (pendj) { pendj = false; vflushd(r.vf[1], v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0u}); goto dispatch; }
L_1410: { ++fl.t; set_vi(i1, 0u + 1u); }
L_1418: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1420: { ++fl.t; }
    if (pendj) { pendj = false; vflushd(r.vf[1], v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0u}); goto dispatch; }
    vflushd(r.vf[1], v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); 
L_1428: { ++fl.t; set_vi(i14, i14 - 1u); }
L_1430: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i3; std::memcpy(q + 0, &v, 4); } }
L_1438: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i2; std::memcpy(q + 4, &v, 4); } }
L_1440: { ++fl.t; { const std::uint8_t *q = qword(mem, i7 + 0u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } n3 = vshadow(r.vf[3]); }
L_1448: { ++fl.t; { const std::uint8_t *q = qword(mem, i7 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_1450: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 39u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n4 = vshadow(r.vf[4]); }
L_1458: { ++fl.t; { const std::uint8_t *q = qword(mem, i7 + 3u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
L_1460: { ++fl.t; { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[15].w[0], r.vf[3].w[2]); fl.end_q(r, qb, 7u); } }
L_1468: { ++fl.t; }
L_1470: { ++fl.t; const v4u uv = vaddd(n2, n4); set_vi(i2, 0u + 16384u); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1478: { ++fl.t; const v4u uv = vmuld(n5, n24); set_vi(i2, i2 & i8); vstore(r.vf[5], uv); fl.stick<15u, kSticky>(uv); n5 = uv; }
L_1480: { ++fl.t; set_vi(i2, i2 + i2); }
L_1488: { ++fl.t; }
L_1490: { ++fl.t; const v4u uv = vftoi(vload(r.vf[2]), 4); vstore(r.vf[4], uv); n4 = vshadow(r.vf[4]); }
L_1498: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { const std::uint8_t *q = qword(mem, i7 + 2u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0xFFFFFFFFu})); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n2 = vshadow(r.vf[2]); n3 = vsel(n3, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_14A0: { ++fl.t; const v4u uv = vftoi(vload(r.vf[5]), 0); vstore(r.vf[5], uv); n5 = vshadow(r.vf[5]); }
L_14A8: { ++fl.t; }
L_14B0: { ++fl.t; set_vi(i3, r.vf[4].w[3]); }
L_14B8: { ++fl.t; const v4u uv = vmuld(n2, vsplat(n3[3])); { std::uint8_t *q = qword(mem, i12 + 2u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); std::memcpy(q + 8, &r.vf[4].w[2], 4); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.stick<12u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_14C0: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n3[3])); { std::uint8_t *q = qword(mem, i12 + 1u); std::memcpy(q, &r.vf[5], 16); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.push_last<2u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_14C8: { ++fl.t; }
L_14D0: { ++fl.t; set_vi(i2, i3 | i2); }
L_14D8: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 2u); const std::uint32_t v = i2; std::memcpy(q + 12, &v, 4); } }
L_14E0: { ++fl.t; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); { std::uint8_t *q = qword(mem, i12 + 0u); std::memcpy(q, &r.vf[2], 16); } }
L_14E8: { ++fl.t; set_vi(i3, i11 - i12); }
L_14F0: { ++fl.t; set_vi(i12, i12 + 3u); }
L_14F8: { ++fl.t; pend = static_cast<std::int16_t>(i3) > 0; }
L_1500: { ++fl.t; set_vi(i10, i10 + 1u); }
    if (pend) { pend = false; goto L_1548; }
L_1508: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i15; std::memcpy(q + 12, &v, 4); } }
L_1510: { ++fl.t; set_vi(i15, (((5392u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1518: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i1; std::memcpy(q + 8, &v, 4); } }
    if (pend) { pend = false; goto L_0E20; }
L_1520: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 8, 2); set_vi(i1, v); } }
L_1528: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 12, 2); set_vi(i15, v); } }
L_1530: { ++fl.t; set_vi(i10, 0u + 0u); }
L_1538: { ++fl.t; set_vi(i9, 0u + i12); }
L_1540: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_1548: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 4, 2); set_vi(i2, v); } }
L_1550: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 0, 2); set_vi(i3, v); } }
L_1558: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1560: { ++fl.t; set_vi(i14, i14 + 1u); }
    if (pendj) { pendj = false; vflushd(r.vf[3], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); goto dispatch; }
    vflushd(r.vf[3], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); 
L_1568: { ++fl.t; set_vi(i14, i14 - 1u); }
L_1570: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i15; std::memcpy(q + 12, &v, 4); } }
L_1578: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i8; std::memcpy(q + 8, &v, 4); } }
L_1580: { ++fl.t; set_vi(i14, i14 - 1u); }
L_1588: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i9; std::memcpy(q + 12, &v, 4); } }
L_1590: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i10; std::memcpy(q + 8, &v, 4); } }
L_1598: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i11; std::memcpy(q + 4, &v, 4); } }
L_15A0: { ++fl.t; set_vi(i15, (((5536u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_15A8: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i12; std::memcpy(q + 0, &v, 4); } }
    if (pend) { pend = false; goto L_1B20; }
L_15B0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 0, 2); set_vi(i12, v); } }
L_15B8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 4, 2); set_vi(i11, v); } }
L_15C0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 8, 2); set_vi(i10, v); } }
L_15C8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 12, 2); set_vi(i9, v); } }
L_15D0: { ++fl.t; pend = 0u == i3; }
L_15D8: { ++fl.t; set_vi(i14, i14 + 1u); }
    if (pend) { pend = false; goto L_1620; }
L_15E0: { ++fl.t; set_vi(i4, 0u + i2); }
L_15E8: { ++fl.t; set_vi(i5, 0u + i3); }
L_15F0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4) + 8, 2); set_vi(i7, v); } }
L_15F8: { ++fl.t; set_vi(i5, i5 - 1u); }
L_1600: { ++fl.t; set_vi(i15, (((5632u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1608: { ++fl.t; set_vi(i4, i4 + 1u); }
    if (pend) { pend = false; goto L_1428; }
L_1610: { ++fl.t; pend = 0u != i5; }
L_1618: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4) + 8, 2); set_vi(i7, v); } }
    if (pend) { pend = false; goto L_15F8; }
L_1620: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 12, 2); set_vi(i15, v); } }
L_1628: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 8, 2); set_vi(i8, v); } }
L_1630: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1638: { ++fl.t; set_vi(i14, i14 + 1u); }
    if (pendj) { pendj = false; goto dispatch; }
L_1640: { ++fl.t; { std::uint8_t *q = qword(mem, i14 + 4294967295u); const std::uint32_t v = i15; std::memcpy(q + 12, &v, 4); } }
L_1648: { ++fl.t; set_vi(i15, (((5704u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1650: { ++fl.t; set_vi(i14, i14 - 1u); }
    if (pend) { pend = false; goto L_19D8; }
L_1658: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i1; std::memcpy(q + 0, &v, 4); } }
L_1660: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i6; std::memcpy(q + 4, &v, 4); } }
L_1668: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i2; std::memcpy(q + 8, &v, 4); } }
L_1670: { ++fl.t; set_vi(i15, (((5744u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1678: { ++fl.t; set_vi(i4, 0u + i1); }
    if (pend) { pend = false; goto L_18A0; }
L_1680: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 0, 2); set_vi(i4, v); } }
L_1688: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 4, 2); set_vi(i5, v); } }
L_1690: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 8, 2); set_vi(i6, v); } }
L_1698: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 12, 2); set_vi(i15, v); } }
L_16A0: { ++fl.t; pend = true; }
L_16A8: { ++fl.t; set_vi(i14, i14 + 1u); }
    if (pend) { pend = false; goto L_18A0; }
    fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vhop(hop, ((5808u + sh) & 16383u));
    return;
L_18A0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 44u); vstore(r.vf[7], vsel(vload(r.vf[7]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } n7 = vshadow(r.vf[7]); }
L_18A8: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 1u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } n4 = vshadow(r.vf[4]); }
L_18B0: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 1u); vstore(r.vf[5], vsel(vload(r.vf[5]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } n5 = vshadow(r.vf[5]); }
L_18B8: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); vstore(r.vf[6], vsel(vload(r.vf[6]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } n6 = vshadow(r.vf[6]); }
L_18C0: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[4], r.vf[7].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_18C8: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[5], r.vf[7].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_18D0: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[6], r.vf[7].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_18D8: { ++fl.t; }
L_18E0: { ++fl.t; }
L_18E8: { ++fl.t; }
L_18F0: { ++fl.t; set_vi(i1, (fl.clip() & 62415u) ? 1u : 0u); }
L_18F8: { ++fl.t; pend = 0u == i1; }
L_1900: { ++fl.t; }
    if (pend) { pend = false; goto L_1980; }
L_1908: { ++fl.t; set_vi(i3, 0u + i15); }
L_1910: { ++fl.t; set_vi(i15, (((6416u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1918: { ++fl.t; }
    if (pend) { pend = false; goto L_1370; }
L_1920: { ++fl.t; pend = 0u != i1; }
L_1928: { ++fl.t; set_vi(i15, 0u + i3); }
    if (pend) { pend = false; goto L_19C8; }
L_1930: { ++fl.t; set_vi(i14, i14 - 1u); }
L_1938: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i15; std::memcpy(q + 12, &v, 4); } }
L_1940: { ++fl.t; set_vi(i15, (((6464u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1948: { ++fl.t; set_vi(i1, 0u + 5u); }
    if (pend) { pend = false; goto L_0EC0; }
L_1950: { ++fl.t; set_vi(i15, (((6480u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1958: { ++fl.t; }
    if (pend) { pend = false; goto L_1568; }
L_1960: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 12, 2); set_vi(i15, v); } }
L_1968: { ++fl.t; set_vi(i14, i14 + 1u); }
L_1970: { ++fl.t; pend = true; }
L_1978: { ++fl.t; set_vi(i1, 0u + 4u); }
    if (pend) { pend = false; goto L_0EC0; }
L_1980: { ++fl.t; set_vi(i3, 0u + i15); }
L_1988: { ++fl.t; set_vi(i15, (((6536u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1990: { ++fl.t; set_vi(i7, 0u + i4); }
    if (pend) { pend = false; goto L_1428; }
L_1998: { ++fl.t; set_vi(i15, (((6552u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_19A0: { ++fl.t; set_vi(i7, 0u + i5); }
    if (pend) { pend = false; goto L_1428; }
L_19A8: { ++fl.t; set_vi(i15, (((6568u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_19B0: { ++fl.t; set_vi(i7, 0u + i6); }
    if (pend) { pend = false; goto L_1428; }
L_19B8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i3) * 8u) & 16383u; pendj = true; }
L_19C0: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_19C8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_19D0: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_19D8: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 0u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n2 = vshadow(r.vf[2]); }
L_19E0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 41u); vstore(r.vf[5], vsel(vload(r.vf[5]), vload_ptr(q), v4u{0u, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu})); } n5 = vshadow(r.vf[5]); }
L_19E8: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 0u); vstore(r.vf[6], vsel(vload(r.vf[6]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n6 = vshadow(r.vf[6]); }
L_19F0: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 0u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n4 = vshadow(r.vf[4]); }
L_19F8: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 3u); std::memcpy(&r.vf[3], q, 16); } n3 = vshadow(r.vf[3]); }
L_1A00: { ++fl.t; const v4u uv = vsubd(n5, vsplat(n2[2])); { const std::uint8_t *q = qword(mem, i4 + 2u); std::memcpy(&r.vf[1], q, 16); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n1 = vshadow(r.vf[1]); n5 = vsel(n5, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_1A08: { ++fl.t; const v4u uv = vsubd(n6, n2); { const std::uint8_t *q = qword(mem, i5 + 3u); std::memcpy(&r.vf[6], q, 16); } vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n6 = vshadow(r.vf[6]); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1A10: { ++fl.t; const v4u uv = vsubd(n4, n2); { const std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(&r.vf[8], q, 16); } vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n8 = vshadow(r.vf[8]); n7 = vsel(n7, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1A18: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(&r.vf[11], q, 16); } n11 = vshadow(r.vf[11]); }
L_1A20: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vsplat(n5[2])); { const std::uint8_t *q = qword(mem, i5 + 2u); std::memcpy(&r.vf[4], q, 16); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n4 = vshadow(r.vf[4]); n2 = vsel(n2, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_1A28: { ++fl.t; const v4u uv = vsubd(n6, n3); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[5].w[3], r.vf[9].w[2]); fl.end_q(r, qb, 7u); } vstore(r.vf[6], uv); fl.stick<15u, kSticky>(uv); n6 = uv; }
L_1A30: { ++fl.t; const v4u uv = vsubd(n8, n3); { const std::uint8_t *q = qword(mem, 0u + 38u); vstore(r.vf[13], vsel(vload(r.vf[13]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[10], uv); fl.stick<15u, kSticky>(uv); n13 = vshadow(r.vf[13]); n10 = uv; }
L_1A38: { ++fl.t; const v4u uv = vsubd(n11, n1); vstore(r.vf[11], uv); fl.stick<15u, kSticky>(uv); n11 = uv; }
L_1A40: { ++fl.t; const v4u uv = vsubd(n4, n1); vstore(r.vf[8], uv); fl.stick<15u, kSticky>(uv); n8 = uv; }
L_1A48: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vsplat(n5[2])); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_1A50: { ++fl.t; const v4u uv = vmuld(n13, vsplat(n5[2])); { const std::uint8_t *q = qword(mem, 0u + 33u); vstore(r.vf[12], vsel(vload(r.vf[12]), vload_ptr(q), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n12 = vshadow(r.vf[12]); n4 = vsel(n4, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1A58: { ++fl.t; const v4u uv = vmuld(n13, vsplat(n5[2])); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1A60: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vqd(r.q)); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[5].w[3], r.vf[7].w[2]); fl.end_q(r, qb, 7u); } vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n12 = vsel(n12, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_1A68: { ++fl.t; const v4u uv = vmuld(n9, vqd(r.q)); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1A70: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vsplat(n12[0])); vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n4 = vsel(n4, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_1A78: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vsplat(n12[0])); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_1A80: { ++fl.t; const v4u uv = vmuld(n11, vsplat(n12[1])); vstore(r.vf[11], uv); fl.stick<15u, kSticky>(uv); n11 = uv; }
L_1A88: { ++fl.t; const v4u uv = vaddd(n9, n2); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1A90: { ++fl.t; const v4u uv = vmuld(n10, vsplat(n12[1])); vstore(r.vf[14], uv); fl.stick<15u, kSticky>(uv); n14 = uv; }
L_1A98: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vqd(r.q)); vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n10 = vsel(n10, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_1AA0: { ++fl.t; fl.flush_q(r); const v4u uv = vmuld(n7, vqd(r.q)); set_vi(i2, 0u + 176u); vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n12 = vsel(n12, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1AA8: { ++fl.t; vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vaddd(n11, n1); { std::uint8_t *q = qword(mem, i2 + 0u); std::memcpy(q, &r.vf[9], 16); } vstore(r.vf[13], uv); fl.stick<15u, kSticky>(uv); n13 = uv; }
L_1AB0: { ++fl.t; const v4u uv = vaddd(n14, n3); vstore(r.vf[7], uv); fl.stick<15u, kSticky>(uv); n7 = uv; }
L_1AB8: { ++fl.t; const v4u uv = vmuld(n6, vsplat(n10[0])); vstore(r.vf[11], uv); fl.stick<15u, kSticky>(uv); n11 = uv; }
L_1AC0: { ++fl.t; const v4u uv = vaddd(n12, n2); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1AC8: { ++fl.t; vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vmuld(n8, vsplat(n10[0])); { std::uint8_t *q = qword(mem, i2 + 2u); std::memcpy(q, &r.vf[13], 16); } vstore(r.vf[6], uv); fl.stick<15u, kSticky>(uv); n6 = uv; }
L_1AD0: { ++fl.t; vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vmuld(n5, n9); { std::uint8_t *q = qword(mem, i2 + 3u); std::memcpy(q, &r.vf[7], 16); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.stick<12u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_1AD8: { ++fl.t; const v4u uv = vaddd(n11, n3); set_vi(i1, 0u + 172u); vstore(r.vf[3], uv); fl.stick<15u, kSticky>(uv); n3 = uv; }
L_1AE0: { ++fl.t; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vmuld(n4, n2); { std::uint8_t *q = qword(mem, i1 + 0u); std::memcpy(q, &r.vf[2], 16); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.stick<12u, kSticky>(uv); n4 = vsel(n4, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_1AE8: { ++fl.t; const v4u uv = vaddd(n6, n1); vstore(r.vf[2], uv); fl.push_last<15u, kSticky>(uv); n2 = uv; }
L_1AF0: { ++fl.t; vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i2 + 1u); std::memcpy(q, &r.vf[5], 16); } }
L_1AF8: { ++fl.t; vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i1 + 3u); std::memcpy(q, &r.vf[3], 16); } }
L_1B00: { ++fl.t; vflushd(r.vf[4], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i1 + 1u); std::memcpy(q, &r.vf[4], 16); } }
L_1B08: { ++fl.t; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i1 + 2u); std::memcpy(q, &r.vf[2], 16); } }
L_1B10: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1B18: { ++fl.t; }
    if (pendj) { pendj = false; vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[14], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
    vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[14], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); 
L_1B20: { ++fl.t; set_vi(i7, 0u + 0u); }
L_1B28: { ++fl.t; set_vi(i8, 0u + 180u); }
L_1B30: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 0u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_1B38: { ++fl.t; set_vi(i12, 0u + 3u); }
L_1B40: { ++fl.t; set_vi(i2, 0u + 7u); }
L_1B48: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 1u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
L_1B50: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 2u); std::memcpy(&r.vf[4], q, 16); } n4 = vshadow(r.vf[4]); }
L_1B58: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 3u); std::memcpy(&r.vf[3], q, 16); } n3 = vshadow(r.vf[3]); }
L_1B60: { ++fl.t; set_vi(i9, i8 + 4u); }
L_1B68: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 0u); std::memcpy(q, &r.vf[2], 16); } }
L_1B70: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 1u); std::memcpy(q, &r.vf[5], 16); } }
L_1B78: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 2u); std::memcpy(q, &r.vf[4], 16); } }
L_1B80: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 3u); std::memcpy(q, &r.vf[3], 16); } }
L_1B88: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 0u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
L_1B90: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 1u); std::memcpy(&r.vf[4], q, 16); } n4 = vshadow(r.vf[4]); }
L_1B98: { ++fl.t; { std::uint8_t *q = qword(mem, i7 + 0u); const std::uint32_t v = i8; std::memcpy(q + 8, &v, 4); } }
L_1BA0: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 2u); std::memcpy(&r.vf[3], q, 16); } n3 = vshadow(r.vf[3]); }
L_1BA8: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 3u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_1BB0: { ++fl.t; { std::uint8_t *q = qword(mem, i9 + 0u); std::memcpy(q, &r.vf[5], 16); } }
L_1BB8: { ++fl.t; { std::uint8_t *q = qword(mem, i9 + 1u); std::memcpy(q, &r.vf[4], 16); } }
L_1BC0: { ++fl.t; set_vi(i5, i9 + 4u); }
L_1BC8: { ++fl.t; { std::uint8_t *q = qword(mem, i9 + 2u); std::memcpy(q, &r.vf[3], 16); } }
L_1BD0: { ++fl.t; { std::uint8_t *q = qword(mem, i9 + 3u); std::memcpy(q, &r.vf[2], 16); } }
L_1BD8: { ++fl.t; set_vi(i4, 0u + i7); }
L_1BE0: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 0u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_1BE8: { ++fl.t; { std::uint8_t *q = qword(mem, i7 + 1u); const std::uint32_t v = i9; std::memcpy(q + 8, &v, 4); } }
L_1BF0: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
L_1BF8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i9, v); } }
L_1C00: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(&r.vf[4], q, 16); } n4 = vshadow(r.vf[4]); }
L_1C08: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(&r.vf[3], q, 16); } n3 = vshadow(r.vf[3]); }
L_1C10: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 44u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } n1 = vshadow(r.vf[1]); }
L_1C18: { ++fl.t; { std::uint8_t *q = qword(mem, i5 + 0u); std::memcpy(q, &r.vf[2], 16); } }
L_1C20: { ++fl.t; { const std::uint8_t *q = qword(mem, i9 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_1C28: { ++fl.t; { std::uint8_t *q = qword(mem, i5 + 1u); std::memcpy(q, &r.vf[5], 16); } }
L_1C30: { ++fl.t; r.clip = 0u; fl.set_clip(r.clip, fl.t - 4u); }
L_1C38: { ++fl.t; { std::uint8_t *q = qword(mem, i5 + 2u); std::memcpy(q, &r.vf[4], 16); } }
L_1C40: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); { std::uint8_t *q = qword(mem, i5 + 3u); std::memcpy(q, &r.vf[3], 16); } r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_1C48: { ++fl.t; { std::uint8_t *q = qword(mem, i7 + 2u); const std::uint32_t v = i5; std::memcpy(q + 8, &v, 4); } }
L_1C50: { ++fl.t; set_vi(i8, i5 + 4u); }
L_1C58: { ++fl.t; set_vi(i5, i4 + 1u); }
L_1C60: { ++fl.t; set_vi(i3, 0u + 0u); }
L_1C68: { ++fl.t; set_vi(i1, (fl.clip() & 1u) ? 1u : 0u); }
L_1C70: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i5 + 0u) + 8, 2); set_vi(i10, v); } }
L_1C78: { ++fl.t; set_vi(i11, i5 + 1u); }
L_1C80: { ++fl.t; pend = 0u == i1; }
L_1C88: { ++fl.t; set_vi(i12, i12 - 1u); }
    if (pend) { pend = false; goto L_1F10; }
L_1C90: { ++fl.t; { const std::uint8_t *q = qword(mem, i9 + 2u); std::memcpy(&r.vf[4], q, 16); } n4 = vshadow(r.vf[4]); }
L_1C98: { ++fl.t; vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_1CA0: { ++fl.t; { const std::uint8_t *q = qword(mem, i9 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_1CA8: { ++fl.t; { const std::uint8_t *q = qword(mem, i9 + 3u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
L_1CB0: { ++fl.t; }
L_1CB8: { ++fl.t; }
L_1CC0: { ++fl.t; }
L_1CC8: { ++fl.t; { const std::uint8_t *q = qword(mem, i10 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_1CD0: { ++fl.t; }
L_1CD8: { ++fl.t; }
L_1CE0: { ++fl.t; }
L_1CE8: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_1CF0: { ++fl.t; }
L_1CF8: { ++fl.t; }
L_1D00: { ++fl.t; }
L_1D08: { ++fl.t; set_vi(i1, (fl.clip() & 1u) ? 1u : 0u); }
L_1D10: { ++fl.t; pend = 0u != i1; }
L_1D18: { ++fl.t; }
    if (pend) { pend = false; goto L_1EB0; }
L_1D20: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n1[3])); { const std::uint8_t *q = qword(mem, i10 + 0u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n2 = vshadow(r.vf[2]); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_1D28: { ++fl.t; { const std::uint8_t *q = qword(mem, i10 + 1u); std::memcpy(&r.vf[7], q, 16); } n7 = vshadow(r.vf[7]); }
L_1D30: { ++fl.t; r.i = 3212836864u; }
L_1D38: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 38u); vstore(r.vf[10], vsel(vload(r.vf[10]), vload_ptr(q), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } n10 = vshadow(r.vf[10]); }
L_1D40: { ++fl.t; vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); const v4u uv = vsubd(n2, n1); vstore(r.vf[6], vsel(vload(r.vf[6]), vload(r.vf[9]), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n6 = vshadow(r.vf[6]); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1D48: { ++fl.t; const v4u uv = vsubd(n7, n3); { const std::uint8_t *q = qword(mem, i10 + 2u); std::memcpy(&r.vf[7], q, 16); } vstore(r.vf[8], uv); fl.stick<15u, kSticky>(uv); n7 = vshadow(r.vf[7]); n8 = uv; }
L_1D50: { ++fl.t; const v4u uv = vsubd(n9, n3); { const std::uint8_t *q = qword(mem, i10 + 3u); std::memcpy(&r.vf[9], q, 16); } vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n9 = vshadow(r.vf[9]); n12 = vsel(n12, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_1D58: { ++fl.t; const v4u uv = vmuld(n10, n1); set_vi(i1, 0u + i8); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_1D60: { ++fl.t; const v4u uv = vmuld(n6, vsplat(n1[2])); set_vi(i8, i8 + 4u); vstore(r.vf[11], vsel(vload(r.vf[11]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n11 = vsel(n11, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_1D68: { ++fl.t; const v4u uv = vmuld(n10, n2); set_vi(i4, i2 + i3); vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n10 = vsel(n10, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_1D70: { ++fl.t; const v4u uv = vmuld(n6, vsplat(n2[2])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[12].w[0], r.vf[8].w[0]); fl.end_q(r, qb, 7u); } vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n8 = vsel(n8, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_1D78: { ++fl.t; const v4u uv = vsubd(n7, n4); { std::uint8_t *q = qword(mem, i4 + 0u); const std::uint32_t v = i1; std::memcpy(q + 8, &v, 4); } vstore(r.vf[7], uv); fl.stick<15u, kSticky>(uv); n7 = uv; }
L_1D80: { ++fl.t; const v4u uv = vmuld(n11, vfix(vsplat(r.i))); set_vi(i3, i3 + 1u); vstore(r.vf[11], vsel(vload(r.vf[11]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n11 = vsel(n11, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_1D88: { ++fl.t; const v4u uv = vsubd(n9, n5); vstore(r.vf[9], uv); fl.stick<15u, kSticky>(uv); n9 = uv; }
L_1D90: { ++fl.t; }
L_1D98: { ++fl.t; const v4u uv = vaddd(n10, n8); vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n8 = vsel(n8, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_1DA0: { ++fl.t; const v4u uv = vsubd(n11, n3); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_1DA8: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_1DB0: { ++fl.t; }
L_1DB8: { ++fl.t; }
L_1DC0: { ++fl.t; { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[3].w[0], r.vf[8].w[0]); fl.end_q(r, qb, 7u); } }
L_1DC8: { ++fl.t; const v4u uv = vmuld(n8, vsplat(n2[3])); vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<7u, kSticky>(uv); n8 = vsel(n8, uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_1DD0: { ++fl.t; const v4u uv = vmuld(n9, vsplat(n2[3])); vstore(r.vf[9], uv); fl.stick<15u, kSticky>(uv); n9 = uv; }
L_1DD8: { ++fl.t; }
L_1DE0: { ++fl.t; }
L_1DE8: { ++fl.t; const v4u uv = vaddd(n3, n8); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<7u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_1DF0: { ++fl.t; const v4u uv = vaddd(n5, n9); vstore(r.vf[3], uv); fl.stick<15u, kSticky>(uv); n3 = uv; }
L_1DF8: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_1E00: { ++fl.t; }
L_1E08: { ++fl.t; vflushd(r.vf[6], v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i1 + 1u); std::memcpy(q, &r.vf[6], 16); } }
L_1E10: { ++fl.t; vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i1 + 3u); std::memcpy(q, &r.vf[3], 16); } }
L_1E18: { ++fl.t; const v4u uv = vmuld(n2, vsplat(n5[3])); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1E20: { ++fl.t; const v4u uv = vmuld(n7, vsplat(n5[3])); vstore(r.vf[5], uv); fl.stick<15u, kSticky>(uv); n5 = uv; }
L_1E28: { ++fl.t; }
L_1E30: { ++fl.t; }
L_1E38: { ++fl.t; const v4u uv = vaddd(n1, n3); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1E40: { ++fl.t; const v4u uv = vaddd(n4, n5); vstore(r.vf[4], uv); fl.push_last<15u, kSticky>(uv); n4 = uv; }
L_1E48: { ++fl.t; }
L_1E50: { ++fl.t; }
L_1E58: { ++fl.t; vflushd(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); { std::uint8_t *q = qword(mem, i1 + 0u); std::memcpy(q + 0, &r.vf[1].w[0], 4); std::memcpy(q + 4, &r.vf[1].w[1], 4); std::memcpy(q + 8, &r.vf[1].w[2], 4); } }
L_1E60: { ++fl.t; pend = 0u == i12; }
L_1E68: { ++fl.t; vflushd(r.vf[4], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i1 + 2u); std::memcpy(q, &r.vf[4], 16); } }
    if (pend) { pend = false; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_2168; }
L_1E70: { ++fl.t; set_vi(i12, i12 - 1u); }
L_1E78: { ++fl.t; set_vi(i9, 0u + i10); }
L_1E80: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i11 + 0u) + 8, 2); set_vi(i10, v); } }
L_1E88: { ++fl.t; set_vi(i11, i11 + 1u); }
L_1E90: { ++fl.t; pend = 0u != i12; }
L_1E98: { ++fl.t; }
    if (pend) { pend = false; vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_1F10; }
L_1EA0: { ++fl.t; pend = true; }
L_1EA8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i10, v); } }
    if (pend) { pend = false; vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_1F10; }
    vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); 
L_1EB0: { ++fl.t; { const std::uint8_t *q = qword(mem, i10 + 2u); std::memcpy(&r.vf[4], q, 16); } n4 = vshadow(r.vf[4]); }
L_1EB8: { ++fl.t; vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_1EC0: { ++fl.t; { const std::uint8_t *q = qword(mem, i10 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_1EC8: { ++fl.t; pend = 0u == i12; }
L_1ED0: { ++fl.t; { const std::uint8_t *q = qword(mem, i10 + 3u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
    if (pend) { pend = false; goto L_2168; }
L_1ED8: { ++fl.t; set_vi(i12, i12 - 1u); }
L_1EE0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i11 + 0u) + 8, 2); set_vi(i10, v); } }
L_1EE8: { ++fl.t; set_vi(i11, i11 + 1u); }
L_1EF0: { ++fl.t; pend = 0u != i12; }
L_1EF8: { ++fl.t; }
    if (pend) { pend = false; goto L_1CB0; }
L_1F00: { ++fl.t; pend = true; }
L_1F08: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i10, v); } }
    if (pend) { pend = false; goto L_1CB0; }
L_1F10: { ++fl.t; }
L_1F18: { ++fl.t; }
L_1F20: { ++fl.t; }
L_1F28: { ++fl.t; { const std::uint8_t *q = qword(mem, i10 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_1F30: { ++fl.t; }
L_1F38: { ++fl.t; }
L_1F40: { ++fl.t; }
L_1F48: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_1F50: { ++fl.t; }
L_1F58: { ++fl.t; }
L_1F60: { ++fl.t; }
L_1F68: { ++fl.t; set_vi(i1, (fl.clip() & 1u) ? 1u : 0u); }
L_1F70: { ++fl.t; pend = 0u != i1; }
L_1F78: { ++fl.t; }
    if (pend) { pend = false; goto L_1FE0; }
L_1F80: { ++fl.t; set_vi(i1, i2 + i3); }
L_1F88: { ++fl.t; set_vi(i3, i3 + 1u); }
L_1F90: { ++fl.t; pend = 0u == i12; }
L_1F98: { ++fl.t; { std::uint8_t *q = qword(mem, i1 + 0u); const std::uint32_t v = i9; std::memcpy(q + 8, &v, 4); } }
    if (pend) { pend = false; goto L_2168; }
L_1FA0: { ++fl.t; set_vi(i12, i12 - 1u); }
L_1FA8: { ++fl.t; set_vi(i9, 0u + i10); }
L_1FB0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i11 + 0u) + 8, 2); set_vi(i10, v); } }
L_1FB8: { ++fl.t; set_vi(i11, i11 + 1u); }
L_1FC0: { ++fl.t; pend = 0u != i12; }
L_1FC8: { ++fl.t; }
    if (pend) { pend = false; goto L_1F10; }
L_1FD0: { ++fl.t; pend = true; }
L_1FD8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i10, v); } }
    if (pend) { pend = false; goto L_1F10; }
L_1FE0: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n1[3])); { const std::uint8_t *q = qword(mem, i9 + 0u); vstore(r.vf[6], vsel(vload(r.vf[6]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n6 = vshadow(r.vf[6]); n4 = vsel(n4, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_1FE8: { ++fl.t; { const std::uint8_t *q = qword(mem, i10 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_1FF0: { ++fl.t; { const std::uint8_t *q = qword(mem, i9 + 1u); std::memcpy(&r.vf[9], q, 16); } n9 = vshadow(r.vf[9]); }
L_1FF8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 38u); vstore(r.vf[5], vsel(vload(r.vf[5]), vload_ptr(q), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } n5 = vshadow(r.vf[5]); }
L_2000: { ++fl.t; vflushd(r.vf[4], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vstore(r.vf[7], vsel(vload(r.vf[7]), vload(r.vf[4]), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n7 = vshadow(r.vf[7]); }
L_2008: { ++fl.t; const v4u uv = vsubd(n1, n6); vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n3 = vshadow(r.vf[3]); n8 = vsel(n8, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2010: { ++fl.t; const v4u uv = vsubd(n4, n9); r.i = 3212836864u; vstore(r.vf[11], vsel(vload(r.vf[11]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n11 = vsel(n11, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2018: { ++fl.t; const v4u uv = vmuld(n5, n6); { const std::uint8_t *q = qword(mem, i9 + 3u); std::memcpy(&r.vf[10], q, 16); } vstore(r.vf[14], vsel(vload(r.vf[14]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n10 = vshadow(r.vf[10]); n14 = vsel(n14, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2020: { ++fl.t; const v4u uv = vmuld(n7, vsplat(n6[2])); { const std::uint8_t *q = qword(mem, i9 + 2u); std::memcpy(&r.vf[2], q, 16); } vstore(r.vf[13], vsel(vload(r.vf[13]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n2 = vshadow(r.vf[2]); n13 = vsel(n13, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2028: { ++fl.t; const v4u uv = vsubd(n3, n9); { const std::uint8_t *q = qword(mem, i10 + 2u); std::memcpy(&r.vf[4], q, 16); } vstore(r.vf[12], uv); fl.stick<15u, kSticky>(uv); n4 = vshadow(r.vf[4]); n12 = uv; }
L_2030: { ++fl.t; const v4u uv = vmuld(n5, n8); { const std::uint8_t *q = qword(mem, i10 + 3u); std::memcpy(&r.vf[5], q, 16); } vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n5 = vshadow(r.vf[5]); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2038: { ++fl.t; const v4u uv = vmuld(n7, vsplat(n8[2])); set_vi(i1, i2 + i3); vstore(r.vf[19], vsel(vload(r.vf[19]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n19 = vsel(n19, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2040: { ++fl.t; const v4u uv = vmuld(n13, vfix(vsplat(r.i))); { std::uint8_t *q = qword(mem, i1 + 1u); const std::uint32_t v = i10; std::memcpy(q + 8, &v, 4); } vstore(r.vf[18], vsel(vload(r.vf[18]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n18 = vsel(n18, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2048: { ++fl.t; const v4u uv = vsubd(n4, n2); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[11].w[0], r.vf[12].w[0]); fl.end_q(r, qb, 7u); } vstore(r.vf[11], uv); fl.stick<15u, kSticky>(uv); n11 = uv; }
L_2050: { ++fl.t; const v4u uv = vsubd(n5, n10); { std::uint8_t *q = qword(mem, i1 + 0u); const std::uint32_t v = i9; std::memcpy(q + 8, &v, 4); } vstore(r.vf[13], uv); fl.stick<15u, kSticky>(uv); n13 = uv; }
L_2058: { ++fl.t; const v4u uv = vaddd(n9, n19); set_vi(i3, i3 + 2u); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2060: { ++fl.t; const v4u uv = vsubd(n18, n14); vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n12 = vsel(n12, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2068: { ++fl.t; }
L_2070: { ++fl.t; }
L_2078: { ++fl.t; }
L_2080: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[12].w[0], r.vf[9].w[0]); fl.end_q(r, qb, 7u); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_2088: { ++fl.t; }
L_2090: { ++fl.t; }
L_2098: { ++fl.t; }
L_20A0: { ++fl.t; const v4u uv = vmuld(n12, vsplat(n6[3])); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<7u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_20A8: { ++fl.t; const v4u uv = vmuld(n13, vsplat(n6[3])); vstore(r.vf[12], uv); fl.stick<15u, kSticky>(uv); n12 = uv; }
L_20B0: { ++fl.t; }
L_20B8: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_20C0: { ++fl.t; const v4u uv = vaddd(n9, n7); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<7u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_20C8: { ++fl.t; const v4u uv = vaddd(n10, n12); vstore(r.vf[12], uv); fl.stick<15u, kSticky>(uv); n12 = uv; }
L_20D0: { ++fl.t; }
L_20D8: { ++fl.t; const v4u uv = vmuld(n8, vsplat(n6[3])); vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n10 = vsel(n10, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_20E0: { ++fl.t; vflushd(r.vf[7], v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vmuld(n11, vsplat(n6[3])); { std::uint8_t *q = qword(mem, i10 + 1u); std::memcpy(q, &r.vf[7], 16); } vstore(r.vf[9], uv); fl.stick<15u, kSticky>(uv); n9 = uv; }
L_20E8: { ++fl.t; vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i10 + 3u); std::memcpy(q, &r.vf[12], 16); } }
L_20F0: { ++fl.t; }
L_20F8: { ++fl.t; const v4u uv = vaddd(n6, n10); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2100: { ++fl.t; const v4u uv = vaddd(n2, n9); vstore(r.vf[2], uv); fl.push_last<15u, kSticky>(uv); n2 = uv; }
L_2108: { ++fl.t; }
L_2110: { ++fl.t; }
L_2118: { ++fl.t; vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); { std::uint8_t *q = qword(mem, i10 + 0u); std::memcpy(q + 0, &r.vf[6].w[0], 4); std::memcpy(q + 4, &r.vf[6].w[1], 4); std::memcpy(q + 8, &r.vf[6].w[2], 4); } }
L_2120: { ++fl.t; pend = 0u == i12; }
L_2128: { ++fl.t; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i10 + 2u); std::memcpy(q, &r.vf[2], 16); } }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[14], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[18], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[19], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_2168; }
L_2130: { ++fl.t; set_vi(i12, i12 - 1u); }
L_2138: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i11 + 0u) + 8, 2); set_vi(i10, v); } }
L_2140: { ++fl.t; set_vi(i11, i11 + 1u); }
L_2148: { ++fl.t; pend = 0u != i12; }
L_2150: { ++fl.t; }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[14], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[18], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[19], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_1CB0; }
L_2158: { ++fl.t; pend = true; }
L_2160: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i10, v); } }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[14], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[18], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[19], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_1CB0; }
    vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[14], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[18], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[19], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); 
L_2168: { ++fl.t; }
L_2170: { ++fl.t; pend = 0u == i3; }
L_2178: { ++fl.t; }
    if (pend) { pend = false; goto L_3250; }
L_2180: { ++fl.t; set_vi(i4, 0u + 7u); }
L_2188: { ++fl.t; set_vi(i6, 0u + i4); }
L_2190: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i6 + 0u) + 8, 2); set_vi(i5, v); } }
L_2198: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 44u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } n1 = vshadow(r.vf[1]); }
L_21A0: { ++fl.t; set_vi(i6, i6 + 1u); }
L_21A8: { ++fl.t; set_vi(i9, 0u + i3); }
L_21B0: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_21B8: { ++fl.t; set_vi(i7, i6 + 1u); }
L_21C0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i6 + 0u) + 8, 2); set_vi(i6, v); } }
L_21C8: { ++fl.t; set_vi(i3, 0u + 0u); }
L_21D0: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); set_vi(i2, 0u + 0u); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_21D8: { ++fl.t; set_vi(i9, i9 - 1u); }
L_21E0: { ++fl.t; }
L_21E8: { ++fl.t; }
L_21F0: { ++fl.t; set_vi(i1, (fl.clip() & 2u) ? 1u : 0u); }
L_21F8: { ++fl.t; pend = 0u == i1; }
L_2200: { ++fl.t; }
    if (pend) { pend = false; goto L_24A8; }
L_2208: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 2u); std::memcpy(&r.vf[4], q, 16); } n4 = vshadow(r.vf[4]); }
L_2210: { ++fl.t; vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_2218: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_2220: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 3u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
L_2228: { ++fl.t; }
L_2230: { ++fl.t; }
L_2238: { ++fl.t; }
L_2240: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_2248: { ++fl.t; }
L_2250: { ++fl.t; }
L_2258: { ++fl.t; }
L_2260: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2268: { ++fl.t; }
L_2270: { ++fl.t; }
L_2278: { ++fl.t; }
L_2280: { ++fl.t; set_vi(i1, (fl.clip() & 2u) ? 1u : 0u); }
L_2288: { ++fl.t; pend = 0u != i1; }
L_2290: { ++fl.t; }
    if (pend) { pend = false; goto L_2448; }
L_2298: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n1[3])); r.i = 3212836864u; vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_22A0: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 0u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n2 = vshadow(r.vf[2]); }
L_22A8: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(&r.vf[7], q, 16); } n7 = vshadow(r.vf[7]); }
L_22B0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 38u); vstore(r.vf[9], vsel(vload(r.vf[9]), vload_ptr(q), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } n9 = vshadow(r.vf[9]); }
L_22B8: { ++fl.t; const v4u uv = vmuld(n6, vfix(vsplat(r.i))); { const std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(&r.vf[6], q, 16); } vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n6 = vshadow(r.vf[6]); n10 = vsel(n10, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_22C0: { ++fl.t; const v4u uv = vsubd(n2, n1); { const std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(&r.vf[8], q, 16); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n8 = vshadow(r.vf[8]); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_22C8: { ++fl.t; const v4u uv = vsubd(n7, n3); set_vi(i1, 0u + i8); vstore(r.vf[7], uv); fl.stick<15u, kSticky>(uv); n7 = uv; }
L_22D0: { ++fl.t; set_vi(i8, i8 + 4u); }
L_22D8: { ++fl.t; vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); const v4u uv = vsubd(n10, n3); vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[10]), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vshadow(r.vf[3]); n10 = vsel(n10, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_22E0: { ++fl.t; set_vi(i5, i2 + i3); }
L_22E8: { ++fl.t; const v4u uv = vsubd(n6, n4); { std::uint8_t *q = qword(mem, i5 + 0u); const std::uint32_t v = i1; std::memcpy(q + 8, &v, 4); } vstore(r.vf[6], uv); fl.stick<15u, kSticky>(uv); n6 = uv; }
L_22F0: { ++fl.t; const v4u uv = vsubd(n8, n5); set_vi(i3, i3 + 1u); vstore(r.vf[8], uv); fl.stick<15u, kSticky>(uv); n8 = uv; }
L_22F8: { ++fl.t; const v4u uv = vmuld(n3, vsplat(n1[2])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[10].w[0], r.vf[7].w[0]); fl.end_q(r, qb, 7u); } vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n10 = vsel(n10, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2300: { ++fl.t; const v4u uv = vmuld(n3, vsplat(n2[2])); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2308: { ++fl.t; const v4u uv = vmuld(n9, n2); vstore(r.vf[11], vsel(vload(r.vf[11]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n11 = vsel(n11, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2310: { ++fl.t; const v4u uv = vmuld(n9, n1); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2318: { ++fl.t; const v4u uv = vmuld(n10, vfix(vsplat(r.i))); vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n10 = vsel(n10, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2320: { ++fl.t; }
L_2328: { ++fl.t; const v4u uv = vaddd(n11, n7); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2330: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_2338: { ++fl.t; const v4u uv = vsubd(n10, n9); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2340: { ++fl.t; }
L_2348: { ++fl.t; }
L_2350: { ++fl.t; const v4u uv = vmuld(n7, vsplat(n2[3])); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<7u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_2358: { ++fl.t; const v4u uv = vmuld(n8, vsplat(n2[3])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[9].w[0], r.vf[7].w[0]); fl.end_q(r, qb, 7u); } vstore(r.vf[8], uv); fl.stick<15u, kSticky>(uv); n8 = uv; }
L_2360: { ++fl.t; }
L_2368: { ++fl.t; }
L_2370: { ++fl.t; const v4u uv = vaddd(n3, n7); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<7u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_2378: { ++fl.t; const v4u uv = vaddd(n5, n8); vstore(r.vf[5], uv); fl.stick<15u, kSticky>(uv); n5 = uv; }
L_2380: { ++fl.t; }
L_2388: { ++fl.t; }
L_2390: { ++fl.t; fl.flush_q(r); vflushd(r.vf[3], v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { std::uint8_t *q = qword(mem, i1 + 1u); std::memcpy(q, &r.vf[3], 16); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_2398: { ++fl.t; vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i1 + 3u); std::memcpy(q, &r.vf[5], 16); } }
L_23A0: { ++fl.t; }
L_23A8: { ++fl.t; }
L_23B0: { ++fl.t; const v4u uv = vmuld(n2, vsplat(n3[3])); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_23B8: { ++fl.t; const v4u uv = vmuld(n6, vsplat(n3[3])); vstore(r.vf[3], uv); fl.stick<15u, kSticky>(uv); n3 = uv; }
L_23C0: { ++fl.t; }
L_23C8: { ++fl.t; }
L_23D0: { ++fl.t; const v4u uv = vaddd(n1, n5); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_23D8: { ++fl.t; const v4u uv = vaddd(n4, n3); vstore(r.vf[4], uv); fl.push_last<15u, kSticky>(uv); n4 = uv; }
L_23E0: { ++fl.t; }
L_23E8: { ++fl.t; }
L_23F0: { ++fl.t; vflushd(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); { std::uint8_t *q = qword(mem, i1 + 0u); std::memcpy(q + 0, &r.vf[1].w[0], 4); std::memcpy(q + 4, &r.vf[1].w[1], 4); std::memcpy(q + 8, &r.vf[1].w[2], 4); } }
L_23F8: { ++fl.t; pend = 0u == i9; }
L_2400: { ++fl.t; vflushd(r.vf[4], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i1 + 2u); std::memcpy(q, &r.vf[4], 16); } }
    if (pend) { pend = false; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_2720; }
L_2408: { ++fl.t; set_vi(i9, i9 - 1u); }
L_2410: { ++fl.t; set_vi(i5, 0u + i6); }
L_2418: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_2420: { ++fl.t; set_vi(i7, i7 + 1u); }
L_2428: { ++fl.t; pend = 0u != i9; }
L_2430: { ++fl.t; }
    if (pend) { pend = false; vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_24A8; }
L_2438: { ++fl.t; pend = true; }
L_2440: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_24A8; }
    vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); 
L_2448: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(&r.vf[4], q, 16); } n4 = vshadow(r.vf[4]); }
L_2450: { ++fl.t; vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_2458: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_2460: { ++fl.t; pend = 0u == i9; }
L_2468: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
    if (pend) { pend = false; goto L_2720; }
L_2470: { ++fl.t; set_vi(i9, i9 - 1u); }
L_2478: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_2480: { ++fl.t; set_vi(i7, i7 + 1u); }
L_2488: { ++fl.t; pend = 0u != i9; }
L_2490: { ++fl.t; }
    if (pend) { pend = false; goto L_2228; }
L_2498: { ++fl.t; pend = true; }
L_24A0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; goto L_2228; }
L_24A8: { ++fl.t; }
L_24B0: { ++fl.t; }
L_24B8: { ++fl.t; }
L_24C0: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_24C8: { ++fl.t; }
L_24D0: { ++fl.t; }
L_24D8: { ++fl.t; }
L_24E0: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_24E8: { ++fl.t; }
L_24F0: { ++fl.t; }
L_24F8: { ++fl.t; }
L_2500: { ++fl.t; set_vi(i1, (fl.clip() & 2u) ? 1u : 0u); }
L_2508: { ++fl.t; pend = 0u != i1; }
L_2510: { ++fl.t; }
    if (pend) { pend = false; goto L_2578; }
L_2518: { ++fl.t; set_vi(i1, i2 + i3); }
L_2520: { ++fl.t; set_vi(i3, i3 + 1u); }
L_2528: { ++fl.t; pend = 0u == i9; }
L_2530: { ++fl.t; { std::uint8_t *q = qword(mem, i1 + 0u); const std::uint32_t v = i5; std::memcpy(q + 8, &v, 4); } }
    if (pend) { pend = false; goto L_2720; }
L_2538: { ++fl.t; set_vi(i9, i9 - 1u); }
L_2540: { ++fl.t; set_vi(i5, 0u + i6); }
L_2548: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_2550: { ++fl.t; set_vi(i7, i7 + 1u); }
L_2558: { ++fl.t; pend = 0u != i9; }
L_2560: { ++fl.t; }
    if (pend) { pend = false; goto L_24A8; }
L_2568: { ++fl.t; pend = true; }
L_2570: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; goto L_24A8; }
L_2578: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n1[3])); r.i = 3212836864u; vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2580: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 0u); vstore(r.vf[6], vsel(vload(r.vf[6]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n6 = vshadow(r.vf[6]); }
L_2588: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_2590: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 38u); vstore(r.vf[11], vsel(vload(r.vf[11]), vload_ptr(q), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } n11 = vshadow(r.vf[11]); }
L_2598: { ++fl.t; const v4u uv = vmuld(n3, vfix(vsplat(r.i))); { const std::uint8_t *q = qword(mem, i5 + 1u); std::memcpy(&r.vf[9], q, 16); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n9 = vshadow(r.vf[9]); n4 = vsel(n4, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_25A0: { ++fl.t; vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_25A8: { ++fl.t; const v4u uv = vsubd(n1, n6); { const std::uint8_t *q = qword(mem, i5 + 2u); std::memcpy(&r.vf[2], q, 16); } vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n2 = vshadow(r.vf[2]); n7 = vsel(n7, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_25B0: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 3u); std::memcpy(&r.vf[10], q, 16); } n10 = vshadow(r.vf[10]); }
L_25B8: { ++fl.t; vflushd(r.vf[4], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); const v4u uv = vsubd(n4, n9); vstore(r.vf[8], vsel(vload(r.vf[8]), vload(r.vf[4]), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); vstore(r.vf[13], vsel(vload(r.vf[13]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n8 = vshadow(r.vf[8]); n13 = vsel(n13, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_25C0: { ++fl.t; const v4u uv = vsubd(n3, n9); { const std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(&r.vf[4], q, 16); } vstore(r.vf[12], uv); fl.stick<15u, kSticky>(uv); n4 = vshadow(r.vf[4]); n12 = uv; }
L_25C8: { ++fl.t; const v4u uv = vmuld(n11, n7); { const std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(&r.vf[5], q, 16); } vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n5 = vshadow(r.vf[5]); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_25D0: { ++fl.t; const v4u uv = vmuld(n11, n6); set_vi(i1, i2 + i3); vstore(r.vf[14], vsel(vload(r.vf[14]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n14 = vsel(n14, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_25D8: { ++fl.t; const v4u uv = vmuld(n8, vsplat(n6[2])); { std::uint8_t *q = qword(mem, i1 + 1u); const std::uint32_t v = i6; std::memcpy(q + 8, &v, 4); } vstore(r.vf[18], vsel(vload(r.vf[18]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n18 = vsel(n18, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_25E0: { ++fl.t; const v4u uv = vmuld(n8, vsplat(n7[2])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[13].w[0], r.vf[12].w[0]); fl.end_q(r, qb, 7u); } vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n12 = vsel(n12, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_25E8: { ++fl.t; const v4u uv = vsubd(n4, n2); { std::uint8_t *q = qword(mem, i1 + 0u); const std::uint32_t v = i5; std::memcpy(q + 8, &v, 4); } vstore(r.vf[11], uv); fl.stick<15u, kSticky>(uv); n11 = uv; }
L_25F0: { ++fl.t; const v4u uv = vsubd(n5, n10); set_vi(i3, i3 + 2u); vstore(r.vf[13], uv); fl.stick<15u, kSticky>(uv); n13 = uv; }
L_25F8: { ++fl.t; const v4u uv = vmuld(n18, vfix(vsplat(r.i))); vstore(r.vf[18], vsel(vload(r.vf[18]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n18 = vsel(n18, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2600: { ++fl.t; }
L_2608: { ++fl.t; }
L_2610: { ++fl.t; const v4u uv = vaddd(n9, n12); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2618: { ++fl.t; const v4u uv = vsubd(n18, n14); vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n12 = vsel(n12, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2620: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_2628: { ++fl.t; }
L_2630: { ++fl.t; }
L_2638: { ++fl.t; { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[12].w[0], r.vf[9].w[0]); fl.end_q(r, qb, 7u); } }
L_2640: { ++fl.t; const v4u uv = vmuld(n12, vsplat(n6[3])); vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<7u, kSticky>(uv); n8 = vsel(n8, uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_2648: { ++fl.t; const v4u uv = vmuld(n13, vsplat(n6[3])); vstore(r.vf[12], uv); fl.stick<15u, kSticky>(uv); n12 = uv; }
L_2650: { ++fl.t; }
L_2658: { ++fl.t; }
L_2660: { ++fl.t; const v4u uv = vaddd(n9, n8); vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<7u, kSticky>(uv); n8 = vsel(n8, uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_2668: { ++fl.t; const v4u uv = vaddd(n10, n12); vstore(r.vf[9], uv); fl.stick<15u, kSticky>(uv); n9 = uv; }
L_2670: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_2678: { ++fl.t; }
L_2680: { ++fl.t; vflushd(r.vf[8], v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(q, &r.vf[8], 16); } }
L_2688: { ++fl.t; vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(q, &r.vf[9], 16); } }
L_2690: { ++fl.t; const v4u uv = vmuld(n7, vsplat(n6[3])); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2698: { ++fl.t; const v4u uv = vmuld(n11, vsplat(n6[3])); vstore(r.vf[11], uv); fl.stick<15u, kSticky>(uv); n11 = uv; }
L_26A0: { ++fl.t; }
L_26A8: { ++fl.t; }
L_26B0: { ++fl.t; const v4u uv = vaddd(n6, n9); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_26B8: { ++fl.t; const v4u uv = vaddd(n2, n11); vstore(r.vf[2], uv); fl.push_last<15u, kSticky>(uv); n2 = uv; }
L_26C0: { ++fl.t; }
L_26C8: { ++fl.t; }
L_26D0: { ++fl.t; vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); { std::uint8_t *q = qword(mem, i6 + 0u); std::memcpy(q + 0, &r.vf[6].w[0], 4); std::memcpy(q + 4, &r.vf[6].w[1], 4); std::memcpy(q + 8, &r.vf[6].w[2], 4); } }
L_26D8: { ++fl.t; pend = 0u == i9; }
L_26E0: { ++fl.t; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(q, &r.vf[2], 16); } }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[14], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[18], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_2720; }
L_26E8: { ++fl.t; set_vi(i9, i9 - 1u); }
L_26F0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_26F8: { ++fl.t; set_vi(i7, i7 + 1u); }
L_2700: { ++fl.t; pend = 0u != i9; }
L_2708: { ++fl.t; }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[14], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[18], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_2228; }
L_2710: { ++fl.t; pend = true; }
L_2718: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[14], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[18], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_2228; }
    vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[14], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[18], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); 
L_2720: { ++fl.t; }
L_2728: { ++fl.t; pend = 0u == i3; }
L_2730: { ++fl.t; }
    if (pend) { pend = false; goto L_3250; }
L_2738: { ++fl.t; set_vi(i4, 0u + 0u); }
L_2740: { ++fl.t; set_vi(i6, 0u + i4); }
L_2748: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i6 + 0u) + 8, 2); set_vi(i5, v); } }
L_2750: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 44u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } n1 = vshadow(r.vf[1]); }
L_2758: { ++fl.t; set_vi(i6, i6 + 1u); }
L_2760: { ++fl.t; set_vi(i9, 0u + i3); }
L_2768: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_2770: { ++fl.t; set_vi(i7, i6 + 1u); }
L_2778: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i6 + 0u) + 8, 2); set_vi(i6, v); } }
L_2780: { ++fl.t; set_vi(i3, 0u + 0u); }
L_2788: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); set_vi(i2, 0u + 7u); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2790: { ++fl.t; set_vi(i9, i9 - 1u); }
L_2798: { ++fl.t; }
L_27A0: { ++fl.t; }
L_27A8: { ++fl.t; set_vi(i1, (fl.clip() & 4u) ? 1u : 0u); }
L_27B0: { ++fl.t; pend = 0u == i1; }
L_27B8: { ++fl.t; }
    if (pend) { pend = false; goto L_2A40; }
L_27C0: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 2u); std::memcpy(&r.vf[4], q, 16); } n4 = vshadow(r.vf[4]); }
L_27C8: { ++fl.t; vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_27D0: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_27D8: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 3u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
L_27E0: { ++fl.t; }
L_27E8: { ++fl.t; }
L_27F0: { ++fl.t; }
L_27F8: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_2800: { ++fl.t; }
L_2808: { ++fl.t; }
L_2810: { ++fl.t; }
L_2818: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2820: { ++fl.t; }
L_2828: { ++fl.t; }
L_2830: { ++fl.t; }
L_2838: { ++fl.t; set_vi(i1, (fl.clip() & 4u) ? 1u : 0u); }
L_2840: { ++fl.t; pend = 0u != i1; }
L_2848: { ++fl.t; }
    if (pend) { pend = false; goto L_29E0; }
L_2850: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n1[3])); { const std::uint8_t *q = qword(mem, i6 + 0u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n2 = vshadow(r.vf[2]); n9 = vsel(n9, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2858: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(&r.vf[7], q, 16); } n7 = vshadow(r.vf[7]); }
L_2860: { ++fl.t; r.i = 3212836864u; }
L_2868: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 38u); vstore(r.vf[10], vsel(vload(r.vf[10]), vload_ptr(q), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); } n10 = vshadow(r.vf[10]); }
L_2870: { ++fl.t; vflushd(r.vf[9], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); const v4u uv = vsubd(n2, n1); vstore(r.vf[6], vsel(vload(r.vf[6]), vload(r.vf[9]), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n6 = vshadow(r.vf[6]); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2878: { ++fl.t; const v4u uv = vsubd(n7, n3); { const std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(&r.vf[7], q, 16); } vstore(r.vf[8], uv); fl.stick<15u, kSticky>(uv); n7 = vshadow(r.vf[7]); n8 = uv; }
L_2880: { ++fl.t; const v4u uv = vsubd(n9, n3); { const std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(&r.vf[9], q, 16); } vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n9 = vshadow(r.vf[9]); n12 = vsel(n12, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2888: { ++fl.t; const v4u uv = vmuld(n10, n1); set_vi(i1, 0u + i8); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2890: { ++fl.t; const v4u uv = vmuld(n6, vsplat(n1[2])); set_vi(i8, i8 + 4u); vstore(r.vf[11], vsel(vload(r.vf[11]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n11 = vsel(n11, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2898: { ++fl.t; const v4u uv = vmuld(n10, n2); set_vi(i5, i2 + i3); vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n10 = vsel(n10, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_28A0: { ++fl.t; const v4u uv = vmuld(n6, vsplat(n2[2])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[12].w[1], r.vf[8].w[1]); fl.end_q(r, qb, 7u); } vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n8 = vsel(n8, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_28A8: { ++fl.t; const v4u uv = vsubd(n7, n4); { std::uint8_t *q = qword(mem, i5 + 0u); const std::uint32_t v = i1; std::memcpy(q + 8, &v, 4); } vstore(r.vf[7], uv); fl.stick<15u, kSticky>(uv); n7 = uv; }
L_28B0: { ++fl.t; const v4u uv = vmuld(n11, vfix(vsplat(r.i))); set_vi(i3, i3 + 1u); vstore(r.vf[11], vsel(vload(r.vf[11]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n11 = vsel(n11, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_28B8: { ++fl.t; const v4u uv = vsubd(n9, n5); vstore(r.vf[9], uv); fl.stick<15u, kSticky>(uv); n9 = uv; }
L_28C0: { ++fl.t; }
L_28C8: { ++fl.t; const v4u uv = vaddd(n10, n8); vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n8 = vsel(n8, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_28D0: { ++fl.t; const v4u uv = vsubd(n11, n3); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_28D8: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_28E0: { ++fl.t; }
L_28E8: { ++fl.t; }
L_28F0: { ++fl.t; { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[3].w[1], r.vf[8].w[1]); fl.end_q(r, qb, 7u); } }
L_28F8: { ++fl.t; const v4u uv = vmuld(n8, vsplat(n2[3])); vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<11u, kSticky>(uv); n8 = vsel(n8, uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_2900: { ++fl.t; const v4u uv = vmuld(n9, vsplat(n2[3])); vstore(r.vf[9], uv); fl.stick<15u, kSticky>(uv); n9 = uv; }
L_2908: { ++fl.t; }
L_2910: { ++fl.t; }
L_2918: { ++fl.t; const v4u uv = vaddd(n3, n8); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<11u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_2920: { ++fl.t; const v4u uv = vaddd(n5, n9); vstore(r.vf[3], uv); fl.stick<15u, kSticky>(uv); n3 = uv; }
L_2928: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_2930: { ++fl.t; }
L_2938: { ++fl.t; vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i1 + 1u); std::memcpy(q, &r.vf[6], 16); } }
L_2940: { ++fl.t; vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i1 + 3u); std::memcpy(q, &r.vf[3], 16); } }
L_2948: { ++fl.t; const v4u uv = vmuld(n2, vsplat(n5[3])); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2950: { ++fl.t; const v4u uv = vmuld(n7, vsplat(n5[3])); vstore(r.vf[5], uv); fl.stick<15u, kSticky>(uv); n5 = uv; }
L_2958: { ++fl.t; }
L_2960: { ++fl.t; }
L_2968: { ++fl.t; const v4u uv = vaddd(n1, n3); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2970: { ++fl.t; const v4u uv = vaddd(n4, n5); vstore(r.vf[4], uv); fl.push_last<15u, kSticky>(uv); n4 = uv; }
L_2978: { ++fl.t; }
L_2980: { ++fl.t; }
L_2988: { ++fl.t; vflushd(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); { std::uint8_t *q = qword(mem, i1 + 0u); std::memcpy(q + 0, &r.vf[1].w[0], 4); std::memcpy(q + 4, &r.vf[1].w[1], 4); std::memcpy(q + 8, &r.vf[1].w[2], 4); } }
L_2990: { ++fl.t; pend = 0u == i9; }
L_2998: { ++fl.t; vflushd(r.vf[4], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i1 + 2u); std::memcpy(q, &r.vf[4], 16); } }
    if (pend) { pend = false; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[11], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[12], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_2C98; }
L_29A0: { ++fl.t; set_vi(i9, i9 - 1u); }
L_29A8: { ++fl.t; set_vi(i5, 0u + i6); }
L_29B0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_29B8: { ++fl.t; set_vi(i7, i7 + 1u); }
L_29C0: { ++fl.t; pend = 0u != i9; }
L_29C8: { ++fl.t; }
    if (pend) { pend = false; vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[11], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[12], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_2A40; }
L_29D0: { ++fl.t; pend = true; }
L_29D8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[11], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[12], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_2A40; }
    vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[11], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[12], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); 
L_29E0: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(&r.vf[4], q, 16); } n4 = vshadow(r.vf[4]); }
L_29E8: { ++fl.t; vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_29F0: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_29F8: { ++fl.t; pend = 0u == i9; }
L_2A00: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
    if (pend) { pend = false; goto L_2C98; }
L_2A08: { ++fl.t; set_vi(i9, i9 - 1u); }
L_2A10: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_2A18: { ++fl.t; set_vi(i7, i7 + 1u); }
L_2A20: { ++fl.t; pend = 0u != i9; }
L_2A28: { ++fl.t; }
    if (pend) { pend = false; goto L_27E0; }
L_2A30: { ++fl.t; pend = true; }
L_2A38: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; goto L_27E0; }
L_2A40: { ++fl.t; }
L_2A48: { ++fl.t; }
L_2A50: { ++fl.t; }
L_2A58: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_2A60: { ++fl.t; }
L_2A68: { ++fl.t; }
L_2A70: { ++fl.t; }
L_2A78: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2A80: { ++fl.t; }
L_2A88: { ++fl.t; }
L_2A90: { ++fl.t; }
L_2A98: { ++fl.t; set_vi(i1, (fl.clip() & 4u) ? 1u : 0u); }
L_2AA0: { ++fl.t; pend = 0u != i1; }
L_2AA8: { ++fl.t; }
    if (pend) { pend = false; goto L_2B10; }
L_2AB0: { ++fl.t; set_vi(i1, i2 + i3); }
L_2AB8: { ++fl.t; set_vi(i3, i3 + 1u); }
L_2AC0: { ++fl.t; pend = 0u == i9; }
L_2AC8: { ++fl.t; { std::uint8_t *q = qword(mem, i1 + 0u); const std::uint32_t v = i5; std::memcpy(q + 8, &v, 4); } }
    if (pend) { pend = false; goto L_2C98; }
L_2AD0: { ++fl.t; set_vi(i9, i9 - 1u); }
L_2AD8: { ++fl.t; set_vi(i5, 0u + i6); }
L_2AE0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_2AE8: { ++fl.t; set_vi(i7, i7 + 1u); }
L_2AF0: { ++fl.t; pend = 0u != i9; }
L_2AF8: { ++fl.t; }
    if (pend) { pend = false; goto L_2A40; }
L_2B00: { ++fl.t; pend = true; }
L_2B08: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; goto L_2A40; }
L_2B10: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n1[3])); { const std::uint8_t *q = qword(mem, i5 + 0u); vstore(r.vf[6], vsel(vload(r.vf[6]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n6 = vshadow(r.vf[6]); n4 = vsel(n4, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2B18: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_2B20: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 1u); std::memcpy(&r.vf[9], q, 16); } n9 = vshadow(r.vf[9]); }
L_2B28: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 38u); vstore(r.vf[5], vsel(vload(r.vf[5]), vload_ptr(q), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); } n5 = vshadow(r.vf[5]); }
L_2B30: { ++fl.t; vflushd(r.vf[4], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vstore(r.vf[7], vsel(vload(r.vf[7]), vload(r.vf[4]), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); n7 = vshadow(r.vf[7]); }
L_2B38: { ++fl.t; const v4u uv = vsubd(n1, n6); vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n3 = vshadow(r.vf[3]); n8 = vsel(n8, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2B40: { ++fl.t; const v4u uv = vsubd(n4, n9); r.i = 3212836864u; vstore(r.vf[11], vsel(vload(r.vf[11]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n11 = vsel(n11, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2B48: { ++fl.t; const v4u uv = vmuld(n5, n6); { const std::uint8_t *q = qword(mem, i5 + 3u); std::memcpy(&r.vf[10], q, 16); } vstore(r.vf[14], vsel(vload(r.vf[14]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n10 = vshadow(r.vf[10]); n14 = vsel(n14, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2B50: { ++fl.t; const v4u uv = vmuld(n7, vsplat(n6[2])); { const std::uint8_t *q = qword(mem, i5 + 2u); std::memcpy(&r.vf[2], q, 16); } vstore(r.vf[13], vsel(vload(r.vf[13]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n2 = vshadow(r.vf[2]); n13 = vsel(n13, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2B58: { ++fl.t; const v4u uv = vsubd(n3, n9); { const std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(&r.vf[4], q, 16); } vstore(r.vf[12], uv); fl.stick<15u, kSticky>(uv); n4 = vshadow(r.vf[4]); n12 = uv; }
L_2B60: { ++fl.t; const v4u uv = vmuld(n5, n8); { const std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(&r.vf[5], q, 16); } vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n5 = vshadow(r.vf[5]); n9 = vsel(n9, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2B68: { ++fl.t; const v4u uv = vmuld(n7, vsplat(n8[2])); set_vi(i1, i2 + i3); vstore(r.vf[19], vsel(vload(r.vf[19]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n19 = vsel(n19, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2B70: { ++fl.t; const v4u uv = vmuld(n13, vfix(vsplat(r.i))); { std::uint8_t *q = qword(mem, i1 + 1u); const std::uint32_t v = i6; std::memcpy(q + 8, &v, 4); } vstore(r.vf[18], vsel(vload(r.vf[18]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n18 = vsel(n18, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2B78: { ++fl.t; const v4u uv = vsubd(n4, n2); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[11].w[1], r.vf[12].w[1]); fl.end_q(r, qb, 7u); } vstore(r.vf[11], uv); fl.stick<15u, kSticky>(uv); n11 = uv; }
L_2B80: { ++fl.t; const v4u uv = vsubd(n5, n10); { std::uint8_t *q = qword(mem, i1 + 0u); const std::uint32_t v = i5; std::memcpy(q + 8, &v, 4); } vstore(r.vf[13], uv); fl.stick<15u, kSticky>(uv); n13 = uv; }
L_2B88: { ++fl.t; const v4u uv = vaddd(n9, n19); set_vi(i3, i3 + 2u); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2B90: { ++fl.t; const v4u uv = vsubd(n18, n14); vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n12 = vsel(n12, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2B98: { ++fl.t; }
L_2BA0: { ++fl.t; }
L_2BA8: { ++fl.t; }
L_2BB0: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[12].w[1], r.vf[9].w[1]); fl.end_q(r, qb, 7u); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_2BB8: { ++fl.t; }
L_2BC0: { ++fl.t; }
L_2BC8: { ++fl.t; }
L_2BD0: { ++fl.t; const v4u uv = vmuld(n12, vsplat(n6[3])); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<11u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_2BD8: { ++fl.t; const v4u uv = vmuld(n13, vsplat(n6[3])); vstore(r.vf[12], uv); fl.stick<15u, kSticky>(uv); n12 = uv; }
L_2BE0: { ++fl.t; }
L_2BE8: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_2BF0: { ++fl.t; const v4u uv = vaddd(n9, n7); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<11u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_2BF8: { ++fl.t; const v4u uv = vaddd(n10, n12); vstore(r.vf[12], uv); fl.stick<15u, kSticky>(uv); n12 = uv; }
L_2C00: { ++fl.t; }
L_2C08: { ++fl.t; const v4u uv = vmuld(n8, vsplat(n6[3])); vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n10 = vsel(n10, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2C10: { ++fl.t; vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vmuld(n11, vsplat(n6[3])); { std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(q, &r.vf[7], 16); } vstore(r.vf[9], uv); fl.stick<15u, kSticky>(uv); n9 = uv; }
L_2C18: { ++fl.t; vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(q, &r.vf[12], 16); } }
L_2C20: { ++fl.t; }
L_2C28: { ++fl.t; const v4u uv = vaddd(n6, n10); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2C30: { ++fl.t; const v4u uv = vaddd(n2, n9); vstore(r.vf[2], uv); fl.push_last<15u, kSticky>(uv); n2 = uv; }
L_2C38: { ++fl.t; }
L_2C40: { ++fl.t; }
L_2C48: { ++fl.t; vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); { std::uint8_t *q = qword(mem, i6 + 0u); std::memcpy(q + 0, &r.vf[6].w[0], 4); std::memcpy(q + 4, &r.vf[6].w[1], 4); std::memcpy(q + 8, &r.vf[6].w[2], 4); } }
L_2C50: { ++fl.t; pend = 0u == i9; }
L_2C58: { ++fl.t; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(q, &r.vf[2], 16); } }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[14], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[18], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[19], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_2C98; }
L_2C60: { ++fl.t; set_vi(i9, i9 - 1u); }
L_2C68: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_2C70: { ++fl.t; set_vi(i7, i7 + 1u); }
L_2C78: { ++fl.t; pend = 0u != i9; }
L_2C80: { ++fl.t; }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[14], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[18], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[19], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_27E0; }
L_2C88: { ++fl.t; pend = true; }
L_2C90: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[14], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[18], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[19], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_27E0; }
    vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[14], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[18], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[19], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); 
L_2C98: { ++fl.t; }
L_2CA0: { ++fl.t; pend = 0u == i3; }
L_2CA8: { ++fl.t; }
    if (pend) { pend = false; goto L_3250; }
L_2CB0: { ++fl.t; set_vi(i4, 0u + 7u); }
L_2CB8: { ++fl.t; set_vi(i6, 0u + i4); }
L_2CC0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i6 + 0u) + 8, 2); set_vi(i5, v); } }
L_2CC8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 44u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } n1 = vshadow(r.vf[1]); }
L_2CD0: { ++fl.t; set_vi(i6, i6 + 1u); }
L_2CD8: { ++fl.t; set_vi(i9, 0u + i3); }
L_2CE0: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_2CE8: { ++fl.t; set_vi(i7, i6 + 1u); }
L_2CF0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i6 + 0u) + 8, 2); set_vi(i6, v); } }
L_2CF8: { ++fl.t; set_vi(i3, 0u + 0u); }
L_2D00: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); set_vi(i2, 0u + 0u); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2D08: { ++fl.t; set_vi(i9, i9 - 1u); }
L_2D10: { ++fl.t; }
L_2D18: { ++fl.t; }
L_2D20: { ++fl.t; set_vi(i1, (fl.clip() & 8u) ? 1u : 0u); }
L_2D28: { ++fl.t; pend = 0u == i1; }
L_2D30: { ++fl.t; }
    if (pend) { pend = false; goto L_2FD8; }
L_2D38: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 2u); std::memcpy(&r.vf[4], q, 16); } n4 = vshadow(r.vf[4]); }
L_2D40: { ++fl.t; vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_2D48: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_2D50: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 3u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
L_2D58: { ++fl.t; }
L_2D60: { ++fl.t; }
L_2D68: { ++fl.t; }
L_2D70: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_2D78: { ++fl.t; }
L_2D80: { ++fl.t; }
L_2D88: { ++fl.t; }
L_2D90: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2D98: { ++fl.t; }
L_2DA0: { ++fl.t; }
L_2DA8: { ++fl.t; }
L_2DB0: { ++fl.t; set_vi(i1, (fl.clip() & 8u) ? 1u : 0u); }
L_2DB8: { ++fl.t; pend = 0u != i1; }
L_2DC0: { ++fl.t; }
    if (pend) { pend = false; goto L_2F78; }
L_2DC8: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n1[3])); r.i = 3212836864u; vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2DD0: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 0u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n2 = vshadow(r.vf[2]); }
L_2DD8: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(&r.vf[7], q, 16); } n7 = vshadow(r.vf[7]); }
L_2DE0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 38u); vstore(r.vf[9], vsel(vload(r.vf[9]), vload_ptr(q), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); } n9 = vshadow(r.vf[9]); }
L_2DE8: { ++fl.t; const v4u uv = vmuld(n6, vfix(vsplat(r.i))); { const std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(&r.vf[6], q, 16); } vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n6 = vshadow(r.vf[6]); n10 = vsel(n10, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2DF0: { ++fl.t; const v4u uv = vsubd(n2, n1); { const std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(&r.vf[8], q, 16); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n8 = vshadow(r.vf[8]); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2DF8: { ++fl.t; const v4u uv = vsubd(n7, n3); set_vi(i1, 0u + i8); vstore(r.vf[7], uv); fl.stick<15u, kSticky>(uv); n7 = uv; }
L_2E00: { ++fl.t; set_vi(i8, i8 + 4u); }
L_2E08: { ++fl.t; vflushd(r.vf[10], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); const v4u uv = vsubd(n10, n3); vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[10]), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n3 = vshadow(r.vf[3]); n10 = vsel(n10, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2E10: { ++fl.t; set_vi(i5, i2 + i3); }
L_2E18: { ++fl.t; const v4u uv = vsubd(n6, n4); { std::uint8_t *q = qword(mem, i5 + 0u); const std::uint32_t v = i1; std::memcpy(q + 8, &v, 4); } vstore(r.vf[6], uv); fl.stick<15u, kSticky>(uv); n6 = uv; }
L_2E20: { ++fl.t; const v4u uv = vsubd(n8, n5); set_vi(i3, i3 + 1u); vstore(r.vf[8], uv); fl.stick<15u, kSticky>(uv); n8 = uv; }
L_2E28: { ++fl.t; const v4u uv = vmuld(n3, vsplat(n1[2])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[10].w[1], r.vf[7].w[1]); fl.end_q(r, qb, 7u); } vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n10 = vsel(n10, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2E30: { ++fl.t; const v4u uv = vmuld(n3, vsplat(n2[2])); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2E38: { ++fl.t; const v4u uv = vmuld(n9, n2); vstore(r.vf[11], vsel(vload(r.vf[11]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n11 = vsel(n11, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2E40: { ++fl.t; const v4u uv = vmuld(n9, n1); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2E48: { ++fl.t; const v4u uv = vmuld(n10, vfix(vsplat(r.i))); vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n10 = vsel(n10, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2E50: { ++fl.t; }
L_2E58: { ++fl.t; const v4u uv = vaddd(n11, n7); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2E60: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_2E68: { ++fl.t; const v4u uv = vsubd(n10, n9); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2E70: { ++fl.t; }
L_2E78: { ++fl.t; }
L_2E80: { ++fl.t; const v4u uv = vmuld(n7, vsplat(n2[3])); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<11u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_2E88: { ++fl.t; const v4u uv = vmuld(n8, vsplat(n2[3])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[9].w[1], r.vf[7].w[1]); fl.end_q(r, qb, 7u); } vstore(r.vf[8], uv); fl.stick<15u, kSticky>(uv); n8 = uv; }
L_2E90: { ++fl.t; }
L_2E98: { ++fl.t; }
L_2EA0: { ++fl.t; const v4u uv = vaddd(n3, n7); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<11u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_2EA8: { ++fl.t; const v4u uv = vaddd(n5, n8); vstore(r.vf[5], uv); fl.stick<15u, kSticky>(uv); n5 = uv; }
L_2EB0: { ++fl.t; }
L_2EB8: { ++fl.t; }
L_2EC0: { ++fl.t; fl.flush_q(r); vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { std::uint8_t *q = qword(mem, i1 + 1u); std::memcpy(q, &r.vf[3], 16); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_2EC8: { ++fl.t; vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i1 + 3u); std::memcpy(q, &r.vf[5], 16); } }
L_2ED0: { ++fl.t; }
L_2ED8: { ++fl.t; }
L_2EE0: { ++fl.t; const v4u uv = vmuld(n2, vsplat(n3[3])); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2EE8: { ++fl.t; const v4u uv = vmuld(n6, vsplat(n3[3])); vstore(r.vf[3], uv); fl.stick<15u, kSticky>(uv); n3 = uv; }
L_2EF0: { ++fl.t; }
L_2EF8: { ++fl.t; }
L_2F00: { ++fl.t; const v4u uv = vaddd(n1, n5); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2F08: { ++fl.t; const v4u uv = vaddd(n4, n3); vstore(r.vf[4], uv); fl.push_last<15u, kSticky>(uv); n4 = uv; }
L_2F10: { ++fl.t; }
L_2F18: { ++fl.t; }
L_2F20: { ++fl.t; vflushd(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); { std::uint8_t *q = qword(mem, i1 + 0u); std::memcpy(q + 0, &r.vf[1].w[0], 4); std::memcpy(q + 4, &r.vf[1].w[1], 4); std::memcpy(q + 8, &r.vf[1].w[2], 4); } }
L_2F28: { ++fl.t; pend = 0u == i9; }
L_2F30: { ++fl.t; vflushd(r.vf[4], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i1 + 2u); std::memcpy(q, &r.vf[4], 16); } }
    if (pend) { pend = false; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[10], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[11], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_3250; }
L_2F38: { ++fl.t; set_vi(i9, i9 - 1u); }
L_2F40: { ++fl.t; set_vi(i5, 0u + i6); }
L_2F48: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_2F50: { ++fl.t; set_vi(i7, i7 + 1u); }
L_2F58: { ++fl.t; pend = 0u != i9; }
L_2F60: { ++fl.t; }
    if (pend) { pend = false; vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[10], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[11], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_2FD8; }
L_2F68: { ++fl.t; pend = true; }
L_2F70: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[10], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[11], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_2FD8; }
    vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[10], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[11], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); 
L_2F78: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(&r.vf[4], q, 16); } n4 = vshadow(r.vf[4]); }
L_2F80: { ++fl.t; vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_2F88: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_2F90: { ++fl.t; pend = 0u == i9; }
L_2F98: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
    if (pend) { pend = false; goto L_3250; }
L_2FA0: { ++fl.t; set_vi(i9, i9 - 1u); }
L_2FA8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_2FB0: { ++fl.t; set_vi(i7, i7 + 1u); }
L_2FB8: { ++fl.t; pend = 0u != i9; }
L_2FC0: { ++fl.t; }
    if (pend) { pend = false; goto L_2D58; }
L_2FC8: { ++fl.t; pend = true; }
L_2FD0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; goto L_2D58; }
L_2FD8: { ++fl.t; }
L_2FE0: { ++fl.t; }
L_2FE8: { ++fl.t; }
L_2FF0: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_2FF8: { ++fl.t; }
L_3000: { ++fl.t; }
L_3008: { ++fl.t; }
L_3010: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_3018: { ++fl.t; }
L_3020: { ++fl.t; }
L_3028: { ++fl.t; }
L_3030: { ++fl.t; set_vi(i1, (fl.clip() & 8u) ? 1u : 0u); }
L_3038: { ++fl.t; pend = 0u != i1; }
L_3040: { ++fl.t; }
    if (pend) { pend = false; goto L_30A8; }
L_3048: { ++fl.t; set_vi(i1, i2 + i3); }
L_3050: { ++fl.t; set_vi(i3, i3 + 1u); }
L_3058: { ++fl.t; pend = 0u == i9; }
L_3060: { ++fl.t; { std::uint8_t *q = qword(mem, i1 + 0u); const std::uint32_t v = i5; std::memcpy(q + 8, &v, 4); } }
    if (pend) { pend = false; goto L_3250; }
L_3068: { ++fl.t; set_vi(i9, i9 - 1u); }
L_3070: { ++fl.t; set_vi(i5, 0u + i6); }
L_3078: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_3080: { ++fl.t; set_vi(i7, i7 + 1u); }
L_3088: { ++fl.t; pend = 0u != i9; }
L_3090: { ++fl.t; }
    if (pend) { pend = false; goto L_2FD8; }
L_3098: { ++fl.t; pend = true; }
L_30A0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; goto L_2FD8; }
L_30A8: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n1[3])); r.i = 3212836864u; vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_30B0: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 0u); vstore(r.vf[6], vsel(vload(r.vf[6]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n6 = vshadow(r.vf[6]); }
L_30B8: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_30C0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 38u); vstore(r.vf[11], vsel(vload(r.vf[11]), vload_ptr(q), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); } n11 = vshadow(r.vf[11]); }
L_30C8: { ++fl.t; const v4u uv = vmuld(n3, vfix(vsplat(r.i))); { const std::uint8_t *q = qword(mem, i5 + 1u); std::memcpy(&r.vf[9], q, 16); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n9 = vshadow(r.vf[9]); n4 = vsel(n4, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_30D0: { ++fl.t; vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_30D8: { ++fl.t; const v4u uv = vsubd(n1, n6); { const std::uint8_t *q = qword(mem, i5 + 2u); std::memcpy(&r.vf[2], q, 16); } vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n2 = vshadow(r.vf[2]); n7 = vsel(n7, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_30E0: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 3u); std::memcpy(&r.vf[10], q, 16); } n10 = vshadow(r.vf[10]); }
L_30E8: { ++fl.t; vflushd(r.vf[4], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); const v4u uv = vsubd(n4, n9); vstore(r.vf[8], vsel(vload(r.vf[8]), vload(r.vf[4]), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); vstore(r.vf[13], vsel(vload(r.vf[13]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n8 = vshadow(r.vf[8]); n13 = vsel(n13, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_30F0: { ++fl.t; const v4u uv = vsubd(n3, n9); { const std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(&r.vf[4], q, 16); } vstore(r.vf[12], uv); fl.stick<15u, kSticky>(uv); n4 = vshadow(r.vf[4]); n12 = uv; }
L_30F8: { ++fl.t; const v4u uv = vmuld(n11, n7); { const std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(&r.vf[5], q, 16); } vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n5 = vshadow(r.vf[5]); n9 = vsel(n9, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3100: { ++fl.t; const v4u uv = vmuld(n11, n6); set_vi(i1, i2 + i3); vstore(r.vf[14], vsel(vload(r.vf[14]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n14 = vsel(n14, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3108: { ++fl.t; const v4u uv = vmuld(n8, vsplat(n6[2])); { std::uint8_t *q = qword(mem, i1 + 1u); const std::uint32_t v = i6; std::memcpy(q + 8, &v, 4); } vstore(r.vf[18], vsel(vload(r.vf[18]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n18 = vsel(n18, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3110: { ++fl.t; const v4u uv = vmuld(n8, vsplat(n7[2])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[13].w[1], r.vf[12].w[1]); fl.end_q(r, qb, 7u); } vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n12 = vsel(n12, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3118: { ++fl.t; const v4u uv = vsubd(n4, n2); { std::uint8_t *q = qword(mem, i1 + 0u); const std::uint32_t v = i5; std::memcpy(q + 8, &v, 4); } vstore(r.vf[11], uv); fl.stick<15u, kSticky>(uv); n11 = uv; }
L_3120: { ++fl.t; const v4u uv = vsubd(n5, n10); set_vi(i3, i3 + 2u); vstore(r.vf[13], uv); fl.stick<15u, kSticky>(uv); n13 = uv; }
L_3128: { ++fl.t; const v4u uv = vmuld(n18, vfix(vsplat(r.i))); vstore(r.vf[18], vsel(vload(r.vf[18]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n18 = vsel(n18, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3130: { ++fl.t; }
L_3138: { ++fl.t; }
L_3140: { ++fl.t; const v4u uv = vaddd(n9, n12); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3148: { ++fl.t; const v4u uv = vsubd(n18, n14); vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n12 = vsel(n12, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3150: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_3158: { ++fl.t; }
L_3160: { ++fl.t; }
L_3168: { ++fl.t; { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[12].w[1], r.vf[9].w[1]); fl.end_q(r, qb, 7u); } }
L_3170: { ++fl.t; const v4u uv = vmuld(n12, vsplat(n6[3])); vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<11u, kSticky>(uv); n8 = vsel(n8, uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_3178: { ++fl.t; const v4u uv = vmuld(n13, vsplat(n6[3])); vstore(r.vf[12], uv); fl.stick<15u, kSticky>(uv); n12 = uv; }
L_3180: { ++fl.t; }
L_3188: { ++fl.t; }
L_3190: { ++fl.t; const v4u uv = vaddd(n9, n8); vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<11u, kSticky>(uv); n8 = vsel(n8, uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_3198: { ++fl.t; const v4u uv = vaddd(n10, n12); vstore(r.vf[9], uv); fl.stick<15u, kSticky>(uv); n9 = uv; }
L_31A0: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_31A8: { ++fl.t; }
L_31B0: { ++fl.t; vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(q, &r.vf[8], 16); } }
L_31B8: { ++fl.t; vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(q, &r.vf[9], 16); } }
L_31C0: { ++fl.t; const v4u uv = vmuld(n7, vsplat(n6[3])); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_31C8: { ++fl.t; const v4u uv = vmuld(n11, vsplat(n6[3])); vstore(r.vf[11], uv); fl.stick<15u, kSticky>(uv); n11 = uv; }
L_31D0: { ++fl.t; }
L_31D8: { ++fl.t; }
L_31E0: { ++fl.t; const v4u uv = vaddd(n6, n9); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_31E8: { ++fl.t; const v4u uv = vaddd(n2, n11); vstore(r.vf[2], uv); fl.push_last<15u, kSticky>(uv); n2 = uv; }
L_31F0: { ++fl.t; }
L_31F8: { ++fl.t; }
L_3200: { ++fl.t; vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); { std::uint8_t *q = qword(mem, i6 + 0u); std::memcpy(q + 0, &r.vf[6].w[0], 4); std::memcpy(q + 4, &r.vf[6].w[1], 4); std::memcpy(q + 8, &r.vf[6].w[2], 4); } }
L_3208: { ++fl.t; pend = 0u == i9; }
L_3210: { ++fl.t; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(q, &r.vf[2], 16); } }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[14], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[18], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_3250; }
L_3218: { ++fl.t; set_vi(i9, i9 - 1u); }
L_3220: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_3228: { ++fl.t; set_vi(i7, i7 + 1u); }
L_3230: { ++fl.t; pend = 0u != i9; }
L_3238: { ++fl.t; }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[14], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[18], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_2D58; }
L_3240: { ++fl.t; pend = true; }
L_3248: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[14], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[18], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_2D58; }
    vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[14], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[18], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); 
L_3250: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_3258: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vhop(hop, ((12896u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vhop(hop, jpc);
    return;
}
static __attribute__((noinline, cold)) void vu1_4D59C9EA37F16471_c(Vu0Regs &r, std::uint8_t *mem, VuDaz &daz, std::uint32_t &hop) { vu1_4D59C9EA37F16471_b<true>(r, mem, daz, hop); }
void vu1_4D59C9EA37F16471(Vu0Regs &r, std::uint8_t *mem) {
    std::uint32_t hop = kNoHop;
    {
        VuDaz daz;
        if ((r.status & 0xC0u) == 0xC0u) vu1_4D59C9EA37F16471_b<false>(r, mem, daz, hop);
        else vu1_4D59C9EA37F16471_c(r, mem, daz, hop);
    }
    if (hop != kNoHop) vu::interpret(1, hop);
}

}
