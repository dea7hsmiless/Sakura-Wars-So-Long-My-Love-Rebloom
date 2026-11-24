#include "ps2/vu_ops.hpp"
#include <cstdio>

namespace gen {

using namespace ps2;
using namespace ps2::vuops;

void vu1_2E9B62A1BB5AB325(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 3480u) & 16383u;
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
    goto L_0D98;
L_0150: { ++fl.t; set_vi(i1, 0u + 15u); }
L_0158: { ++fl.t; set_vi(i1, i8 & i1); }
L_0160: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1) + 4, 2); set_vi(i2, v); } }
L_0168: { ++fl.t; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; pendj = true; }
L_0170: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((376u + sh) & 16383u));
    return;
L_08D8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 131u) + 12, 2); set_vi(i3, v); } }
L_08E0: { fl.t += 3u; { const std::uint8_t *q = qword(mem, i4 + 124u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0u})); } }
L_08E8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 129u); const std::uint32_t v = i4; std::memcpy(q + 12, &v, 4); } }
L_08F0: { ++fl.t; pend = true; }
L_08F8: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i3))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); } }
    if (pend) { pend = false; goto L_0DF0; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((2304u + sh) & 16383u));
    return;
L_0D98: { ++fl.t; set_vi(i15, (((3480u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0DA0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 34u) + 12, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_08D8; }
L_0DA8: { ++fl.t; set_vi(i1, i11 - i12); }
L_0DB0: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[16], q, 16); set_vi(i13, i13 + 1u); } }
L_0DB8: { ++fl.t; pend = static_cast<std::int16_t>(i1) > 0; }
L_0DC0: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[17], q, 16); set_vi(i13, i13 + 1u); } }
    if (pend) { pend = false; goto L_0DD8; }
L_0DC8: { ++fl.t; set_vi(i15, (((3528u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0DD0: { ++fl.t; }
    if (pend) { pend = false; goto L_0E20; }
L_0DD8: { ++fl.t; set_vi(i7, i8 + 0u); }
L_0DE0: { ++fl.t; pend = true; }
L_0DE8: { ++fl.t; set_vi(i15, 0u + 398u); }
    if (pend) { pend = false; goto L_0F40; }
L_0DF0: { ++fl.t; set_vi(i10, 0u + 1u); }
L_0DF8: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_0E00: { ++fl.t; set_vi(i9, 0u + i12); }
L_0E08: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_0E10: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0E18: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q, &r.vf[4], 16); set_vi(i12, i12 + 1u); } }
    if (pendj) { pendj = false; goto dispatch; }
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
L_0E80: { ++fl.t; vu::kick(1, i3); }
    if (pendj) { pendj = false; goto dispatch; }
L_0E88: { ++fl.t; ending = true; }
L_0E90: { ++fl.t; }
    if (ending) { fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; r.tpc = ((3736u + sh) & 16383u); return; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((3736u + sh) & 16383u));
    return;
L_0F40: { ++fl.t; pend = static_cast<std::int16_t>(i8) < 0; }
L_0F48: { ++fl.t; set_vi(i8, r.vf[16].w[3]); }
    if (pend) { pend = false; goto L_0F60; }
L_0F50: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0F58: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0F60: { ++fl.t; set_vi(i6, 0u + 4096u); }
L_0F68: { ++fl.t; set_vi(i1, i7 & i6); }
L_0F70: { ++fl.t; set_vi(i6, 0u + 2048u); }
L_0F78: { ++fl.t; set_vi(i6, i7 & i6); }
L_0F80: { ++fl.t; pend = 0u == i1; }
L_0F88: { ++fl.t; set_vi(i1, 0u + i15); }
    if (pend) { pend = false; goto L_0FA0; }
L_0F90: { ++fl.t; set_vi(i15, (((3984u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0F98: { ++fl.t; }
    if (pend) { pend = false; goto L_0E88; }
L_0FA0: { ++fl.t; pend = 0u != i6; }
L_0FA8: { ++fl.t; set_vi(i15, 0u + i1); }
    if (pend) { pend = false; goto L_0150; }
L_0FB0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0FB8: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((4032u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

void vu1_9957C730D50216E4(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 4152u) & 16383u;
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
    goto L_1038;
L_0150: { ++fl.t; set_vi(i1, 0u + 15u); }
L_0158: { ++fl.t; set_vi(i1, i8 & i1); }
L_0160: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1) + 4, 2); set_vi(i2, v); } }
L_0168: { fl.t += 4u; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; pendj = true; }
L_0170: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[6] = i6; r.vi[15] = i15; vu::interpret(1, ((376u + sh) & 16383u));
    return;
L_0E88: { ++fl.t; ending = true; }
L_0E90: { ++fl.t; }
    if (ending) { fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[6] = i6; r.vi[15] = i15; r.tpc = ((3736u + sh) & 16383u); return; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[6] = i6; r.vi[15] = i15; vu::interpret(1, ((3736u + sh) & 16383u));
    return;
L_1038: { ++fl.t; set_vi(i1, 0u + 1u); }
L_1040: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = i1; std::memcpy(q + 8, &v, 4); } }
L_1048: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = 0u; std::memcpy(q + 0, &v, 4); } }
L_1050: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = 0u; std::memcpy(q + 4, &v, 4); } }
L_1058: { ++fl.t; }
L_1060: { ++fl.t; pend = static_cast<std::int16_t>(i6) >= 0; }
L_1068: { ++fl.t; set_vi(i6, i6 + i6); }
    if (pend) { pend = false; goto L_10B0; }
L_1070: { ++fl.t; set_vi(i15, (((4208u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1078: { ++fl.t; }
    if (pend) { pend = false; goto L_0E88; }
L_1080: { ++fl.t; jpc = (static_cast<std::uint32_t>(i5) * 8u) & 16383u; set_vi(i15, (((4224u + sh) & 16383u) + 16u) / 8u); pendj = true; }
L_1088: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_1090: { ++fl.t; pend = static_cast<std::int16_t>(i6) < 0; }
L_1098: { ++fl.t; }
    if (pend) { pend = false; goto L_10D8; }
L_10A0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i4) * 8u) & 16383u; pendj = true; }
L_10A8: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_10B0: { ++fl.t; }
L_10B8: { ++fl.t; pend = static_cast<std::int16_t>(i6) < 0; }
L_10C0: { ++fl.t; }
    if (pend) { pend = false; goto L_10D8; }
L_10C8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i4) * 8u) & 16383u; pendj = true; }
L_10D0: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_10D8: { ++fl.t; pend = true; }
L_10E0: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
    if (pend) { pend = false; goto L_0150; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[6] = i6; r.vi[15] = i15; vu::interpret(1, ((4328u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[6] = i6; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

template <bool kSticky>
PS2_VU_BODY void vu1_A7759BC9532864DA_b(Vu0Regs &r, std::uint8_t *mem, VuDaz &daz, std::uint32_t &hop) {
    (void)daz;
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 1048u) & 16383u;
    (void)sh;
    unsigned st = 0u;
    static constexpr std::uint8_t ks_0488[] = {4, 0};
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
    v4u n16 = vshadow(r.vf[16]);
    v4u n17 = vshadow(r.vf[17]);
    v4u n18 = vshadow(r.vf[18]);
    v4u n19 = vshadow(r.vf[19]);
    v4u n20 = vshadow(r.vf[20]);
    v4u n22 = vshadow(r.vf[22]);
    v4u n23 = vshadow(r.vf[23]);
    v4u n24 = vshadow(r.vf[24]);
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
    std::uint16_t i7 = r.vi[7];
    std::uint16_t i8 = r.vi[8];
    std::uint16_t i9 = r.vi[9];
    std::uint16_t i10 = r.vi[10];
    std::uint16_t i11 = r.vi[11];
    std::uint16_t i12 = r.vi[12];
    std::uint16_t i13 = r.vi[13];
    std::uint16_t i14 = r.vi[14];
    std::uint16_t i15 = r.vi[15];
    goto L_0418;
L_0150: { ++fl.t; set_vi(i1, 0u + 15u); }
L_0158: { ++fl.t; set_vi(i1, i8 & i1); }
L_0160: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1) + 4, 2); set_vi(i2, v); } }
L_0168: { fl.t += 4u; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; pendj = true; }
L_0170: { ++fl.t; }
    if (pendj) { pendj = false; vflush(r.vf[24], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
    vflush(r.vf[24], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[14] = i14; r.vi[15] = i15; vhop(hop, ((376u + sh) & 16383u));
    return;
L_0418: { ++fl.t; const v4u uv = vmuld(n28, vsplat(n16[0])); { const std::uint8_t *q = qword(mem, 0u + 41u); vstore(r.vf[27], vsel(vload(r.vf[27]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); n27 = vshadow(r.vf[27]); nacc = uv; }
L_0420: { ++fl.t; const v4u uv = vmaddd(nacc, n29, vsplat(n16[1])); { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 114u) + 8, 2); set_vi(i10, v); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0428: { ++fl.t; const v4u uv = vmaddd(nacc, n30, vsplat(n16[2])); { const std::uint8_t *q = qword(mem, 0u + 26u); std::memcpy(&r.vf[15], q, 16); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0430: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, v4u{0u, 0u, 0u, 0x3F800000u}); { const std::uint8_t *q = qword(mem, 0u + 37u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); n1 = vshadow(r.vf[1]); n27 = vshadow(r.vf[27]); }
L_0438: { ++fl.t; const v4u uv = vaddd(nacc, (v4u)((v4f)n31 * (v4f)vsplat(0x3F800000u))); { const std::uint8_t *q = qword(mem, 0u + 133u); std::memcpy(&r.vf[24], q, 16); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); n24 = vshadow(r.vf[24]); nacc = uv; }
L_0440: { ++fl.t; { const std::uint8_t *q = qword(mem, i10 + 30u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_0448: { ++fl.t; set_vi(i10, 0u + 4u); }
L_0450: { ++fl.t; const v4u uv = vaddd(nacc, (v4u)((v4f)n27 * (v4f)vsplat(0x3F800000u))); { std::uint8_t *q = qword(mem, i12 + 2u); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); } vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n27 = vsel(n27, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0458: { ++fl.t; const v4u uv = vmuld(n24, vsplat(n1[3])); { std::uint8_t *q = qword(mem, i12 + 1u); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } vstore(r.vf[24], vsel(vload(r.vf[24]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n24 = vsel(n24, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0460: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); std::memcpy(q, &r.vf[2], 16); } }
L_0468: { ++fl.t; set_vi(i10, 0u + 0u); }
L_0470: { ++fl.t; { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[15].w[0], r.vf[27].w[2]); fl.end_q(r, qb, 7u); } }
L_0478: { ++fl.t; set_vi(i9, i12 + 2u); }
L_0480: { ++fl.t; set_vi(i12, i12 + 3u); }
    st = 0u; 
L_0488: { fl.t += 1u + ks_0488[st]; fl.flush_q(r); }
L_0490: { ++fl.t; }
L_0498: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); r.vf[26].w[3] = r.p; vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n27 = vsel(n27, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_04A0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 38u); vstore(r.vf[23], vsel(vload(r.vf[23]), vload_ptr(q), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } n23 = vshadow(r.vf[23]); }
L_04A8: { ++fl.t; vflushd(r.vf[27], v4u{0u, 0u, 0xFFFFFFFFu, 0u}); const v4u uv = vmin(vload(r.vf[27]), vsplat(r.vf[15].w[0])); { const std::uint8_t *q = qword(mem, 0u + 40u); vstore(r.vf[23], vsel(vload(r.vf[23]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); n23 = vshadow(r.vf[23]); n27 = vshadow(r.vf[27]); }
L_04B0: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[18], q, 16); set_vi(i13, i13 + 1u); } n18 = vshadow(r.vf[18]); }
L_04B8: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vsplat(n20[2])); r.clip = 0u; fl.set_clip(r.clip, fl.t - 4u); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_04C0: { ++fl.t; const v4u uv = vmuld(n23, vsplat(n27[3])); { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 114u) + 4, 2); set_vi(i4, v); } vstore(r.vf[23], vsel(vload(r.vf[23]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.stick<2u, kSticky>(uv); n23 = vsel(n23, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_04C8: { ++fl.t; const v4u uv = vmuld(n27, n23); { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 114u) + 0, 2); set_vi(i6, v); } vstore(r.vf[23], vsel(vload(r.vf[23]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.stick<12u, kSticky>(uv); n23 = vsel(n23, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_04D0: { ++fl.t; const v4u uv = vmaddd(nacc, n20, vsplat(n27[2])); { const std::uint8_t *q = qword(mem, 0u + 44u); vstore(r.vf[23], vsel(vload(r.vf[23]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n23 = vshadow(r.vf[23]); n2 = vsel(n2, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_04D8: { ++fl.t; const v4u uv = vitof(vload(r.vf[18]), 12); { const std::uint8_t *q = qword(mem, 0u + 41u); vstore(r.vf[16], vsel(vload(r.vf[16]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[18], uv); n16 = vshadow(r.vf[16]); n18 = vshadow(r.vf[18]); }
L_04E0: { ++fl.t; set_vi(i4, i4 + i4); }
L_04E8: { ++fl.t; const v4u uv = vaddd(n23, n22); set_vi(i6, i6 + i6); vstore(r.vf[16], vsel(vload(r.vf[16]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n16 = vsel(n16, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_04F0: { ++fl.t; vflushd(r.vf[2], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); const v4u uv = vmax(vload(r.vf[2]), vsplat(r.vf[20].w[1])); set_vi(i5, 0u + 14u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n1 = vshadow(r.vf[1]); }
L_04F8: { ++fl.t; const v4u uv = vmuld(n18, n24); set_vi(i7, 0u + 16u); vstore(r.vf[2], uv); fl.stick<15u, kSticky>(uv); n2 = uv; }
L_0500: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[23], r.vf[23].w[3]); set_vi(i4, i4 & i5); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_0508: { ++fl.t; set_vi(i6, i6 & i5); }
L_0510: { ++fl.t; const v4u uv = vmin(vload(r.vf[1]), vsplat(r.vf[20].w[0])); { const std::uint8_t *q = qword(mem, 0u + 41u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } vstore(r.vf[23], vsel(vload(r.vf[23]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n1 = vshadow(r.vf[1]); n23 = vshadow(r.vf[23]); }
L_0518: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 116u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } n3 = vshadow(r.vf[3]); }
L_0520: { ++fl.t; const v4u uv = vsubd(n16, vsplat(n27[2])); set_vi(i1, (fl.clip() & 15u) ? 1u : 0u); vstore(r.vf[16], vsel(vload(r.vf[16]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.push<1u, kSticky>(uv); n16 = vsel(n16, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0528: { ++fl.t; set_vi(i4, i4 + i1); }
L_0530: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = i4; std::memcpy(q + 4, &v, 4); } }
L_0538: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 117u) + 12, 2); set_vi(i4, v); } }
L_0540: { ++fl.t; set_vi(i7, (fl.mac() & 0xFFFFu) == i7 ? 1u : 0u); }
L_0548: { ++fl.t; const v4u uv = vaddd(n17, n3); set_vi(i6, i6 + i7); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.stick<12u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_0550: { ++fl.t; const v4u uv = vftoi(vload(r.vf[23]), 4); { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = i6; std::memcpy(q + 0, &v, 4); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n4 = vshadow(r.vf[4]); }
L_0558: { ++fl.t; vflushd(r.vf[23], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vftoi(vload(r.vf[16]), 4); { std::uint8_t *q = qword(mem, i4 + 1u); std::memcpy(q, &r.vf[23], 16); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n4 = vshadow(r.vf[4]); }
L_0560: { ++fl.t; const v4u uv = vftoi(vload(r.vf[2]), 0); { std::uint8_t *q = qword(mem, i4 + 3u); std::memcpy(q, &r.vf[18], 16); } vstore(r.vf[2], uv); n2 = vshadow(r.vf[2]); }
L_0568: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(0x3F800000u)); { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[16], q, 16); set_vi(i13, i13 + 1u); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<3u, kSticky>(uv); n16 = vshadow(r.vf[16]); n3 = vsel(n3, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_0570: { ++fl.t; set_vi(i6, i12 + 0u); }
L_0578: { ++fl.t; { std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(q, &r.vf[4], 16); } }
L_0580: { ++fl.t; { std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(q, &r.vf[2], 16); } }
L_0588: { ++fl.t; vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vmuld(n28, vsplat(n16[0])); { std::uint8_t *q = qword(mem, i6 + 0u); std::memcpy(q, &r.vf[3], 16); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0590: { ++fl.t; const v4u uv = vmaddd(nacc, n29, vsplat(n16[1])); { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 114u) + 0, 2); set_vi(i7, v); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0598: { ++fl.t; const v4u uv = vmaddd(nacc, n30, vsplat(n16[2])); { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 115u) + 12, 2); set_vi(i6, v); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_05A0: { ++fl.t; const v4u uv = vaddd(nacc, (v4u)((v4f)n31 * (v4f)vsplat(0x3F800000u))); { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 116u) + 12, 2); set_vi(i5, v); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_05A8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 114u) + 4, 2); set_vi(i3, v); } }
L_05B0: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, v4u{0u, 0u, 0u, 0x3F800000u}); { std::uint8_t *q = qword(mem, 0u + 116u); const std::uint32_t v = i4; std::memcpy(q + 12, &v, 4); } vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); n1 = vshadow(r.vf[1]); }
L_05B8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 117u); const std::uint32_t v = i6; std::memcpy(q + 12, &v, 4); } }
L_05C0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 115u); const std::uint32_t v = i5; std::memcpy(q + 12, &v, 4); } }
L_05C8: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 2u); std::memcpy(q, &r.vf[17], 16); } }
L_05D0: { ++fl.t; vflushd(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0xFFFFFFFFu}); const v4u uv = vaddd(nacc, (v4u)((v4f)n1 * (v4f)vsplat(0x3F800000u))); { std::uint8_t *q = qword(mem, i4 + 0u); std::memcpy(q, &r.vf[27], 16); } vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n27 = vsel(n27, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_05D8: { ++fl.t; set_vi(i1, i7 | i3); }
L_05E0: { ++fl.t; set_vi(i10, i10 + 1u); }
L_05E8: { ++fl.t; set_vi(i12, i12 + 3u); }
L_05F0: { ++fl.t; { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[15].w[0], r.vf[27].w[2]); fl.end_q(r, qb, 7u); } }
L_05F8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = 0u; std::memcpy(q + 8, &v, 4); } }
L_0600: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[17], q, 16); set_vi(i13, i13 + 1u); } n17 = vshadow(r.vf[17]); }
L_0608: { ++fl.t; pend = 0u == i1; }
L_0610: { ++fl.t; set_vi(i1, 0u + 197u); }
    if (pend) { pend = false; goto L_0630; }
L_0618: { ++fl.t; set_vi(i15, (((1560u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0620: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 115u); const std::uint32_t v = i1; std::memcpy(q + 4, &v, 4); } }
    if (pend) { pend = false; goto L_10E8; }
L_0628: { ++fl.t; { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[15].w[0], r.vf[27].w[2]); fl.end_q(r, qb, 7u); } }
L_0630: { ++fl.t; set_vi(i1, i11 - i12); }
L_0638: { ++fl.t; set_vi(i6, i8 + 0u); }
L_0640: { ++fl.t; pend = static_cast<std::int16_t>(i1) > 0; }
L_0648: { ++fl.t; }
    if (pend) { pend = false; goto L_0678; }
L_0650: { ++fl.t; set_vi(i15, (((1616u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0658: { ++fl.t; }
    if (pend) { pend = false; goto L_0E20; }
L_0660: { ++fl.t; set_vi(i10, 0u + 0u); }
L_0668: { ++fl.t; set_vi(i9, 0u + i12); }
L_0670: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_0678: { ++fl.t; pend = static_cast<std::int16_t>(i6) >= 0; }
L_0680: { ++fl.t; set_vi(i8, r.vf[16].w[3]); }
    if (pend) { pend = false; st = 1u; goto L_0488; }
L_0688: { ++fl.t; set_vi(i5, 0u + 212u); }
L_0690: { ++fl.t; pend = true; }
L_0698: { ++fl.t; set_vi(i4, 0u + 145u); }
    if (pend) { pend = false; goto L_0FC0; }
    vflushd(r.vf[24], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[14] = i14; r.vi[15] = i15; vhop(hop, ((1696u + sh) & 16383u));
    return;
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
    if (pendj) { pendj = false; vflush(r.vf[24], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_0E88: { ++fl.t; ending = true; }
L_0E90: { ++fl.t; }
    if (ending) { vflush(r.vf[24], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[14] = i14; r.vi[15] = i15; r.tpc = ((3736u + sh) & 16383u); return; }
    vflush(r.vf[24], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[14] = i14; r.vi[15] = i15; vhop(hop, ((3736u + sh) & 16383u));
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
    if (pendj) { pendj = false; vflush(r.vf[24], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
    vflush(r.vf[24], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[14] = i14; r.vi[15] = i15; vhop(hop, ((3856u + sh) & 16383u));
    return;
L_0FC0: { ++fl.t; set_vi(i1, 0u + 1024u); }
L_0FC8: { ++fl.t; set_vi(i1, i6 & i1); }
L_0FD0: { ++fl.t; set_vi(i6, i6 + i6); }
L_0FD8: { ++fl.t; pend = 0u == i1; }
L_0FE0: { ++fl.t; set_vi(i6, i6 + i6); }
    if (pend) { pend = false; goto L_1010; }
L_0FE8: { ++fl.t; set_vi(i15, (((4072u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0FF0: { ++fl.t; }
    if (pend) { pend = false; goto L_0E20; }
L_0FF8: { ++fl.t; set_vi(i10, 0u + 0u); }
L_1000: { ++fl.t; set_vi(i9, 0u + i12); }
L_1008: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_1010: { ++fl.t; }
L_1018: { ++fl.t; pend = static_cast<std::int16_t>(i6) >= 0; }
L_1020: { ++fl.t; set_vi(i6, i6 + i6); }
    if (pend) { pend = false; goto L_1058; }
L_1028: { ++fl.t; set_vi(i15, (((4136u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1030: { ++fl.t; set_vi(i1, 0u + 4u); }
    if (pend) { pend = false; goto L_0EC0; }
L_1038: { ++fl.t; set_vi(i1, 0u + 1u); }
L_1040: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = i1; std::memcpy(q + 8, &v, 4); } }
L_1048: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = 0u; std::memcpy(q + 0, &v, 4); } }
L_1050: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = 0u; std::memcpy(q + 4, &v, 4); } }
L_1058: { ++fl.t; }
L_1060: { ++fl.t; pend = static_cast<std::int16_t>(i6) >= 0; }
L_1068: { ++fl.t; set_vi(i6, i6 + i6); }
    if (pend) { pend = false; goto L_10B0; }
L_1070: { ++fl.t; set_vi(i15, (((4208u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1078: { ++fl.t; }
    if (pend) { pend = false; goto L_0E88; }
L_1080: { ++fl.t; jpc = (static_cast<std::uint32_t>(i5) * 8u) & 16383u; set_vi(i15, (((4224u + sh) & 16383u) + 16u) / 8u); pendj = true; }
L_1088: { ++fl.t; }
    if (pendj) { pendj = false; vflushd(r.vf[24], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_1090: { ++fl.t; pend = static_cast<std::int16_t>(i6) < 0; }
L_1098: { ++fl.t; }
    if (pend) { pend = false; goto L_10D8; }
L_10A0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i4) * 8u) & 16383u; pendj = true; }
L_10A8: { ++fl.t; }
    if (pendj) { pendj = false; vflushd(r.vf[24], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_10B0: { ++fl.t; }
L_10B8: { ++fl.t; pend = static_cast<std::int16_t>(i6) < 0; }
L_10C0: { ++fl.t; }
    if (pend) { pend = false; goto L_10D8; }
L_10C8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i4) * 8u) & 16383u; pendj = true; }
L_10D0: { ++fl.t; }
    if (pendj) { pendj = false; vflushd(r.vf[24], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_10D8: { ++fl.t; pend = true; }
L_10E0: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
    if (pend) { pend = false; goto L_0150; }
L_10E8: { ++fl.t; set_vi(i12, i12 - 3u); }
L_10F0: { ++fl.t; pend = 0u == i7; }
L_10F8: { ++fl.t; set_vi(i10, i10 - 1u); }
    if (pend) { pend = false; goto L_1210; }
L_1100: { ++fl.t; set_vi(i1, 0u + 7u); }
L_1108: { ++fl.t; set_vi(i7, i7 & i1); }
L_1110: { ++fl.t; set_vi(i1, i1 & i3); }
L_1118: { ++fl.t; pend = 0u != i7; }
L_1120: { ++fl.t; }
    if (pend) { pend = false; goto L_1190; }
L_1128: { ++fl.t; pend = 0u == i1; }
L_1130: { ++fl.t; }
    if (pend) { pend = false; goto L_1148; }
L_1138: { ++fl.t; pend = true; }
L_1140: { ++fl.t; }
    if (pend) { pend = false; goto L_1210; }
L_1148: { ++fl.t; set_vi(i15, (((4424u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1150: { ++fl.t; set_vi(i7, i6 + 0u); }
    if (pend) { pend = false; goto L_1428; }
L_1158: { ++fl.t; set_vi(i15, (((4440u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1160: { ++fl.t; set_vi(i7, i5 + 0u); }
    if (pend) { pend = false; goto L_1428; }
L_1168: { ++fl.t; set_vi(i15, (((4456u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1170: { ++fl.t; set_vi(i7, i4 + 0u); }
    if (pend) { pend = false; goto L_1428; }
L_1178: { ++fl.t; set_vi(i12, i12 - 3u); }
L_1180: { ++fl.t; pend = true; }
L_1188: { ++fl.t; set_vi(i10, i10 - 1u); }
    if (pend) { pend = false; goto L_1350; }
L_1190: { ++fl.t; set_vi(i2, 0u + 16384u); }
L_1198: { ++fl.t; set_vi(i2, i8 & i2); }
L_11A0: { ++fl.t; }
L_11A8: { ++fl.t; pend = 0u == i2; }
L_11B0: { ++fl.t; }
    if (pend) { pend = false; goto L_11D0; }
L_11B8: { ++fl.t; set_vi(i1, 0u + 4u); }
L_11C0: { ++fl.t; pend = true; }
L_11C8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 115u) + 4, 2); set_vi(i15, v); } }
    if (pend) { pend = false; goto L_0EC0; }
L_11D0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 5u) + 12, 2); set_vi(i2, v); } }
L_11D8: { ++fl.t; set_vi(i15, (((4568u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_11E0: { ++fl.t; set_vi(i1, 0u + 3u); }
    if (pend) { pend = false; goto L_0EC0; }
L_11E8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; set_vi(i15, (((4584u + sh) & 16383u) + 16u) / 8u); pendj = true; }
L_11F0: { ++fl.t; }
    if (pendj) { pendj = false; vflushd(r.vf[24], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_11F8: { ++fl.t; set_vi(i1, 0u + 4u); }
L_1200: { ++fl.t; pend = true; }
L_1208: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 115u) + 4, 2); set_vi(i15, v); } }
    if (pend) { pend = false; goto L_0EC0; }
L_1210: { ++fl.t; pend = 0u == i3; }
L_1218: { ++fl.t; set_vi(i2, 0u + 16384u); }
    if (pend) { pend = false; goto L_1350; }
L_1220: { ++fl.t; set_vi(i2, i8 & i2); }
L_1228: { ++fl.t; set_vi(i1, 0u + 7u); }
L_1230: { ++fl.t; set_vi(i3, i3 & i1); }
L_1238: { ++fl.t; pend = 0u != i2; }
L_1240: { ++fl.t; }
    if (pend) { pend = false; goto L_1350; }
L_1248: { ++fl.t; pend = 0u != i3; }
L_1250: { ++fl.t; }
    if (pend) { pend = false; goto L_12B0; }
L_1258: { ++fl.t; set_vi(i15, (((4696u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1260: { ++fl.t; set_vi(i1, 0u + 4u); }
    if (pend) { pend = false; goto L_0EC0; }
L_1268: { ++fl.t; set_vi(i15, (((4712u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1270: { ++fl.t; set_vi(i7, i6 + 0u); }
    if (pend) { pend = false; goto L_1428; }
L_1278: { ++fl.t; set_vi(i15, (((4728u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1280: { ++fl.t; set_vi(i7, i5 + 0u); }
    if (pend) { pend = false; goto L_1428; }
L_1288: { ++fl.t; set_vi(i15, (((4744u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1290: { ++fl.t; set_vi(i7, i4 + 0u); }
    if (pend) { pend = false; goto L_1428; }
L_1298: { ++fl.t; set_vi(i12, i12 - 3u); }
L_12A0: { ++fl.t; pend = true; }
L_12A8: { ++fl.t; set_vi(i10, i10 - 1u); }
    if (pend) { pend = false; goto L_1350; }
L_12B0: { ++fl.t; vstore(r.vf[4], vsel(vload(r.vf[4]), vload(r.vf[23]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n4 = vshadow(r.vf[4]); }
L_12B8: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 1u); vstore(r.vf[5], vsel(vload(r.vf[5]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } n5 = vshadow(r.vf[5]); }
L_12C0: { ++fl.t; set_vi(i3, 0u + i15); }
L_12C8: { ++fl.t; set_vi(i15, (((4808u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_12D0: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); vstore(r.vf[6], vsel(vload(r.vf[6]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } n6 = vshadow(r.vf[6]); }
    if (pend) { pend = false; goto L_1370; }
L_12D8: { ++fl.t; pend = 0u != i1; }
L_12E0: { ++fl.t; set_vi(i15, 0u + i3); }
    if (pend) { pend = false; goto L_1320; }
L_12E8: { ++fl.t; set_vi(i15, (((4840u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_12F0: { ++fl.t; set_vi(i1, 0u + 5u); }
    if (pend) { pend = false; goto L_0EC0; }
L_12F8: { ++fl.t; set_vi(i15, (((4856u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1300: { ++fl.t; }
    if (pend) { pend = false; goto L_1568; }
L_1308: { ++fl.t; set_vi(i1, 0u + 4u); }
L_1310: { ++fl.t; pend = true; }
L_1318: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 115u) + 4, 2); set_vi(i15, v); } }
    if (pend) { pend = false; goto L_0EC0; }
L_1320: { ++fl.t; set_vi(i1, 0u + 16384u); }
L_1328: { ++fl.t; set_vi(i8, i8 | i1); }
L_1330: { ++fl.t; set_vi(i15, (((4912u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1338: { ++fl.t; set_vi(i7, i4 + 0u); }
    if (pend) { pend = false; goto L_1428; }
L_1340: { ++fl.t; set_vi(i12, i12 - 3u); }
L_1348: { ++fl.t; set_vi(i10, i10 - 1u); }
L_1350: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 115u) + 4, 2); set_vi(i15, v); } }
L_1358: { ++fl.t; set_vi(i12, i12 + 3u); }
L_1360: { fl.t += 3u; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1368: { ++fl.t; set_vi(i10, i10 + 1u); }
    if (pendj) { pendj = false; vflushd(r.vf[24], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_1370: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n4[1])); vstore(r.vf[1], vsel(vload(r.vf[1]), vload(r.vf[4]), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vshadow(r.vf[1]); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_1378: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n5[0])); vstore(r.vf[2], vsel(vload(r.vf[2]), vload(r.vf[5]), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n2 = vshadow(r.vf[2]); n1 = vsel(n1, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_1380: { fl.t += 2u; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n6[1])); { const std::uint8_t *q = qword(mem, 0u + 39u); vstore(r.vf[7], vsel(vload(r.vf[7]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.stick<2u, kSticky>(uv); n7 = vshadow(r.vf[7]); n2 = vsel(n2, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_1388: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n6[0])); { const std::uint8_t *q = qword(mem, 0u + 40u); vstore(r.vf[8], vsel(vload(r.vf[8]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.push<2u, kSticky>(uv); n8 = vshadow(r.vf[8]); n1 = vsel(n1, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_1390: { fl.t += 4u; const std::uint32_t uclip = vclip_value(r, r.vf[1], r.vf[7].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
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
    if (pendj) { pendj = false; vflushd(r.vf[1], v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0u}); vflushd(r.vf[24], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_1410: { ++fl.t; set_vi(i1, 0u + 1u); }
L_1418: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1420: { ++fl.t; }
    if (pendj) { pendj = false; vflushd(r.vf[1], v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0u}); vflushd(r.vf[24], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
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
L_14C0: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n3[3])); { std::uint8_t *q = qword(mem, i12 + 1u); std::memcpy(q, &r.vf[5], 16); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.push<2u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
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
    if (pend) { pend = false; vflushd(r.vf[3], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); goto L_0E20; }
L_1520: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 8, 2); set_vi(i1, v); } }
L_1528: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 12, 2); set_vi(i15, v); } }
L_1530: { ++fl.t; set_vi(i10, 0u + 0u); }
L_1538: { ++fl.t; set_vi(i9, 0u + i12); }
L_1540: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_1548: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 4, 2); set_vi(i2, v); } }
L_1550: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 0, 2); set_vi(i3, v); } }
L_1558: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1560: { ++fl.t; set_vi(i14, i14 + 1u); }
    if (pendj) { pendj = false; vflushd(r.vf[3], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[24], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
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
    if (pendj) { pendj = false; vflush(r.vf[24], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
    vflush(r.vf[24], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[14] = i14; r.vi[15] = i15; vhop(hop, ((5696u + sh) & 16383u));
    return;
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
L_1E40: { ++fl.t; const v4u uv = vaddd(n4, n5); vstore(r.vf[4], uv); fl.push<15u, kSticky>(uv); n4 = uv; }
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
L_2100: { ++fl.t; const v4u uv = vaddd(n2, n9); vstore(r.vf[2], uv); fl.push<15u, kSticky>(uv); n2 = uv; }
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
L_23D8: { ++fl.t; const v4u uv = vaddd(n4, n3); vstore(r.vf[4], uv); fl.push<15u, kSticky>(uv); n4 = uv; }
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
L_26B8: { ++fl.t; const v4u uv = vaddd(n2, n11); vstore(r.vf[2], uv); fl.push<15u, kSticky>(uv); n2 = uv; }
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
L_2970: { ++fl.t; const v4u uv = vaddd(n4, n5); vstore(r.vf[4], uv); fl.push<15u, kSticky>(uv); n4 = uv; }
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
L_2C30: { ++fl.t; const v4u uv = vaddd(n2, n9); vstore(r.vf[2], uv); fl.push<15u, kSticky>(uv); n2 = uv; }
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
L_2F08: { ++fl.t; const v4u uv = vaddd(n4, n3); vstore(r.vf[4], uv); fl.push<15u, kSticky>(uv); n4 = uv; }
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
L_31E8: { ++fl.t; const v4u uv = vaddd(n2, n11); vstore(r.vf[2], uv); fl.push<15u, kSticky>(uv); n2 = uv; }
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
    if (pendj) { pendj = false; vflush(r.vf[24], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
    vflush(r.vf[24], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[14] = i14; r.vi[15] = i15; vhop(hop, ((12896u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[14] = i14; r.vi[15] = i15; vhop(hop, jpc);
    return;
}
static __attribute__((noinline, cold)) void vu1_A7759BC9532864DA_c(Vu0Regs &r, std::uint8_t *mem, VuDaz &daz, std::uint32_t &hop) { vu1_A7759BC9532864DA_b<true>(r, mem, daz, hop); }
void vu1_A7759BC9532864DA(Vu0Regs &r, std::uint8_t *mem) {
    std::uint32_t hop = kNoHop;
    {
        VuDaz daz;
        if ((r.status & 0xC0u) == 0xC0u) vu1_A7759BC9532864DA_b<false>(r, mem, daz, hop);
        else vu1_A7759BC9532864DA_c(r, mem, daz, hop);
    }
    if (hop != kNoHop) vu::interpret(1, hop);
}

void vu1_ED90513B53046D22(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 3496u) & 16383u;
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
    goto L_0DA8;
L_0150: { ++fl.t; set_vi(i1, 0u + 15u); }
L_0158: { ++fl.t; set_vi(i1, i8 & i1); }
L_0160: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1) + 4, 2); set_vi(i2, v); } }
L_0168: { fl.t += 4u; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; pendj = true; }
L_0170: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((376u + sh) & 16383u));
    return;
L_0DA8: { ++fl.t; set_vi(i1, i11 - i12); }
L_0DB0: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[16], q, 16); set_vi(i13, i13 + 1u); } }
L_0DB8: { ++fl.t; pend = static_cast<std::int16_t>(i1) > 0; }
L_0DC0: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[17], q, 16); set_vi(i13, i13 + 1u); } }
    if (pend) { pend = false; goto L_0DD8; }
L_0DC8: { ++fl.t; set_vi(i15, (((3528u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0DD0: { ++fl.t; }
    if (pend) { pend = false; goto L_0E20; }
L_0DD8: { ++fl.t; set_vi(i7, i8 + 0u); }
L_0DE0: { ++fl.t; pend = true; }
L_0DE8: { ++fl.t; set_vi(i15, 0u + 398u); }
    if (pend) { pend = false; goto L_0F40; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((3568u + sh) & 16383u));
    return;
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
L_0E80: { ++fl.t; vu::kick(1, i3); }
    if (pendj) { pendj = false; goto dispatch; }
L_0E88: { ++fl.t; ending = true; }
L_0E90: { ++fl.t; }
    if (ending) { fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; r.tpc = ((3736u + sh) & 16383u); return; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((3736u + sh) & 16383u));
    return;
L_0F40: { ++fl.t; pend = static_cast<std::int16_t>(i8) < 0; }
L_0F48: { ++fl.t; set_vi(i8, r.vf[16].w[3]); }
    if (pend) { pend = false; goto L_0F60; }
L_0F50: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0F58: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0F60: { ++fl.t; set_vi(i6, 0u + 4096u); }
L_0F68: { ++fl.t; set_vi(i1, i7 & i6); }
L_0F70: { ++fl.t; set_vi(i6, 0u + 2048u); }
L_0F78: { ++fl.t; set_vi(i6, i7 & i6); }
L_0F80: { ++fl.t; pend = 0u == i1; }
L_0F88: { ++fl.t; set_vi(i1, 0u + i15); }
    if (pend) { pend = false; goto L_0FA0; }
L_0F90: { ++fl.t; set_vi(i15, (((3984u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0F98: { ++fl.t; }
    if (pend) { pend = false; goto L_0E88; }
L_0FA0: { ++fl.t; pend = 0u != i6; }
L_0FA8: { ++fl.t; set_vi(i15, 0u + i1); }
    if (pend) { pend = false; goto L_0150; }
L_0FB0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0FB8: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((4032u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

void vu1_74316EC166A80A45(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 2912u) & 16383u;
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
    goto L_0B60;
L_0150: { ++fl.t; set_vi(i1, 0u + 15u); }
L_0158: { ++fl.t; set_vi(i1, i8 & i1); }
L_0160: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1) + 4, 2); set_vi(i2, v); } }
L_0168: { fl.t += 4u; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; pendj = true; }
L_0170: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((376u + sh) & 16383u));
    return;
L_0B60: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 24u); vstore(r.vf[15], vsel(vload(r.vf[15]), vload_ptr(q), v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); } }
L_0B68: { ++fl.t; set_vi(i6, r.vf[16].w[0]); }
L_0B70: { ++fl.t; set_vi(i10, 0u + 0u); }
L_0B78: { ++fl.t; set_vi(i9, 0u + i12); }
L_0B80: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_0B88: { ++fl.t; vstore(r.vf[16], vsel(vload(r.vf[16]), vload(r.vf[17]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); }
L_0B90: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[17], q, 16); set_vi(i13, i13 + 1u); } }
L_0B98: { ++fl.t; pend = static_cast<std::int16_t>(i6) <= 0; }
L_0BA0: { ++fl.t; set_vi(i7, i8 + 0u); }
    if (pend) { pend = false; goto L_0BE0; }
L_0BA8: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q, &r.vf[16], 16); set_vi(i12, i12 + 1u); } }
L_0BB0: { ++fl.t; set_vi(i1, i11 - i12); }
L_0BB8: { ++fl.t; set_vi(i10, i10 + 1u); }
L_0BC0: { ++fl.t; pend = static_cast<std::int16_t>(i1) > 0; }
L_0BC8: { ++fl.t; set_vi(i6, i6 - 1u); }
    if (pend) { pend = false; goto L_0B88; }
L_0BD0: { ++fl.t; pend = true; }
L_0BD8: { ++fl.t; set_vi(i15, 0u + 366u); }
    if (pend) { pend = false; goto L_0E20; }
L_0BE0: { ++fl.t; set_vi(i6, r.vf[16].w[0]); }
L_0BE8: { ++fl.t; pend = static_cast<std::int16_t>(i8) >= 0; }
L_0BF0: { ++fl.t; set_vi(i8, r.vf[16].w[3]); }
    if (pend) { pend = false; goto L_0B88; }
L_0BF8: { ++fl.t; set_vi(i4, 0u + 4096u); }
L_0C00: { ++fl.t; set_vi(i1, i7 & i4); }
L_0C08: { ++fl.t; set_vi(i4, 0u + 2048u); }
L_0C10: { ++fl.t; pend = 0u == i1; }
L_0C18: { ++fl.t; }
    if (pend) { pend = false; goto L_0C38; }
L_0C20: { ++fl.t; set_vi(i15, (((3104u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0C28: { ++fl.t; }
    if (pend) { pend = false; goto L_0E88; }
L_0C30: { ++fl.t; set_vi(i6, r.vf[16].w[0]); }
L_0C38: { ++fl.t; set_vi(i1, i7 & i4); }
L_0C40: { ++fl.t; }
L_0C48: { ++fl.t; pend = 0u == i1; }
L_0C50: { ++fl.t; }
    if (pend) { pend = false; goto L_0B88; }
L_0C58: { ++fl.t; pend = true; }
L_0C60: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
    if (pend) { pend = false; goto L_0150; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((3176u + sh) & 16383u));
    return;
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
L_0E80: { ++fl.t; vu::kick(1, i3); }
    if (pendj) { pendj = false; goto dispatch; }
L_0E88: { ++fl.t; ending = true; }
L_0E90: { ++fl.t; }
    if (ending) { fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; r.tpc = ((3736u + sh) & 16383u); return; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((3736u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

void vu1_29F2E35058AF09C2(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 2928u) & 16383u;
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
    goto L_0B70;
L_0150: { ++fl.t; set_vi(i1, 0u + 15u); }
L_0158: { ++fl.t; set_vi(i1, i8 & i1); }
L_0160: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1) + 4, 2); set_vi(i2, v); } }
L_0168: { fl.t += 4u; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; pendj = true; }
L_0170: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((376u + sh) & 16383u));
    return;
L_0B70: { ++fl.t; set_vi(i10, 0u + 0u); }
L_0B78: { ++fl.t; set_vi(i9, 0u + i12); }
L_0B80: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_0B88: { ++fl.t; vstore(r.vf[16], vsel(vload(r.vf[16]), vload(r.vf[17]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); }
L_0B90: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[17], q, 16); set_vi(i13, i13 + 1u); } }
L_0B98: { ++fl.t; pend = static_cast<std::int16_t>(i6) <= 0; }
L_0BA0: { ++fl.t; set_vi(i7, i8 + 0u); }
    if (pend) { pend = false; goto L_0BE0; }
L_0BA8: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q, &r.vf[16], 16); set_vi(i12, i12 + 1u); } }
L_0BB0: { ++fl.t; set_vi(i1, i11 - i12); }
L_0BB8: { ++fl.t; set_vi(i10, i10 + 1u); }
L_0BC0: { ++fl.t; pend = static_cast<std::int16_t>(i1) > 0; }
L_0BC8: { ++fl.t; set_vi(i6, i6 - 1u); }
    if (pend) { pend = false; goto L_0B88; }
L_0BD0: { ++fl.t; pend = true; }
L_0BD8: { ++fl.t; set_vi(i15, 0u + 366u); }
    if (pend) { pend = false; goto L_0E20; }
L_0BE0: { ++fl.t; set_vi(i6, r.vf[16].w[0]); }
L_0BE8: { ++fl.t; pend = static_cast<std::int16_t>(i8) >= 0; }
L_0BF0: { ++fl.t; set_vi(i8, r.vf[16].w[3]); }
    if (pend) { pend = false; goto L_0B88; }
L_0BF8: { ++fl.t; set_vi(i4, 0u + 4096u); }
L_0C00: { ++fl.t; set_vi(i1, i7 & i4); }
L_0C08: { ++fl.t; set_vi(i4, 0u + 2048u); }
L_0C10: { ++fl.t; pend = 0u == i1; }
L_0C18: { ++fl.t; }
    if (pend) { pend = false; goto L_0C38; }
L_0C20: { ++fl.t; set_vi(i15, (((3104u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0C28: { ++fl.t; }
    if (pend) { pend = false; goto L_0E88; }
L_0C30: { ++fl.t; set_vi(i6, r.vf[16].w[0]); }
L_0C38: { ++fl.t; set_vi(i1, i7 & i4); }
L_0C40: { ++fl.t; }
L_0C48: { ++fl.t; pend = 0u == i1; }
L_0C50: { ++fl.t; }
    if (pend) { pend = false; goto L_0B88; }
L_0C58: { ++fl.t; pend = true; }
L_0C60: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
    if (pend) { pend = false; goto L_0150; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((3176u + sh) & 16383u));
    return;
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
L_0E80: { ++fl.t; vu::kick(1, i3); }
    if (pendj) { pendj = false; goto dispatch; }
L_0E88: { ++fl.t; ending = true; }
L_0E90: { ++fl.t; }
    if (ending) { fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; r.tpc = ((3736u + sh) & 16383u); return; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((3736u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

void vu1_462E79FD400F2C5A(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 3120u) & 16383u;
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
    goto L_0C30;
L_0150: { ++fl.t; set_vi(i1, 0u + 15u); }
L_0158: { ++fl.t; set_vi(i1, i8 & i1); }
L_0160: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1) + 4, 2); set_vi(i2, v); } }
L_0168: { fl.t += 4u; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; pendj = true; }
L_0170: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((376u + sh) & 16383u));
    return;
L_0B88: { ++fl.t; vstore(r.vf[16], vsel(vload(r.vf[16]), vload(r.vf[17]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); }
L_0B90: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[17], q, 16); set_vi(i13, i13 + 1u); } }
L_0B98: { ++fl.t; pend = static_cast<std::int16_t>(i6) <= 0; }
L_0BA0: { ++fl.t; set_vi(i7, i8 + 0u); }
    if (pend) { pend = false; goto L_0BE0; }
L_0BA8: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q, &r.vf[16], 16); set_vi(i12, i12 + 1u); } }
L_0BB0: { ++fl.t; set_vi(i1, i11 - i12); }
L_0BB8: { ++fl.t; set_vi(i10, i10 + 1u); }
L_0BC0: { ++fl.t; pend = static_cast<std::int16_t>(i1) > 0; }
L_0BC8: { ++fl.t; set_vi(i6, i6 - 1u); }
    if (pend) { pend = false; goto L_0B88; }
L_0BD0: { ++fl.t; pend = true; }
L_0BD8: { ++fl.t; set_vi(i15, 0u + 366u); }
    if (pend) { pend = false; goto L_0E20; }
L_0BE0: { ++fl.t; set_vi(i6, r.vf[16].w[0]); }
L_0BE8: { ++fl.t; pend = static_cast<std::int16_t>(i8) >= 0; }
L_0BF0: { ++fl.t; set_vi(i8, r.vf[16].w[3]); }
    if (pend) { pend = false; goto L_0B88; }
L_0BF8: { ++fl.t; set_vi(i4, 0u + 4096u); }
L_0C00: { ++fl.t; set_vi(i1, i7 & i4); }
L_0C08: { ++fl.t; set_vi(i4, 0u + 2048u); }
L_0C10: { ++fl.t; pend = 0u == i1; }
L_0C18: { ++fl.t; }
    if (pend) { pend = false; goto L_0C38; }
L_0C20: { ++fl.t; set_vi(i15, (((3104u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0C28: { ++fl.t; }
    if (pend) { pend = false; goto L_0E88; }
L_0C30: { ++fl.t; set_vi(i6, r.vf[16].w[0]); }
L_0C38: { ++fl.t; set_vi(i1, i7 & i4); }
L_0C40: { ++fl.t; }
L_0C48: { ++fl.t; pend = 0u == i1; }
L_0C50: { ++fl.t; }
    if (pend) { pend = false; goto L_0B88; }
L_0C58: { ++fl.t; pend = true; }
L_0C60: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
    if (pend) { pend = false; goto L_0150; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((3176u + sh) & 16383u));
    return;
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
L_0E80: { ++fl.t; vu::kick(1, i3); }
    if (pendj) { pendj = false; goto dispatch; }
L_0E88: { ++fl.t; ending = true; }
L_0E90: { ++fl.t; }
    if (ending) { fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; r.tpc = ((3736u + sh) & 16383u); return; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((3736u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

void vu1_02A1F440360302CB(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 3856u) & 16383u;
    (void)sh;
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i3 = r.vi[3];
    std::uint16_t i9 = r.vi[9];
    std::uint16_t i10 = r.vi[10];
    std::uint16_t i11 = r.vi[11];
    std::uint16_t i12 = r.vi[12];
    std::uint16_t i15 = r.vi[15];
    goto L_0F10;
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
L_0E80: { ++fl.t; vu::kick(1, i3); }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((3720u + sh) & 16383u));
    return;
L_0F10: { ++fl.t; set_vi(i15, (((3856u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0F18: { ++fl.t; }
    if (pend) { pend = false; goto L_0E20; }
L_0F20: { ++fl.t; ending = true; }
L_0F28: { ++fl.t; }
    if (ending) { fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; r.tpc = ((3888u + sh) & 16383u); return; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((3888u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

void vu1_DEF947F9349C3D29(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 3872u) & 16383u;
    (void)sh;
    goto L_0F20;
L_0F20: { ++fl.t; ending = true; }
L_0F28: { ++fl.t; }
    if (ending) { fl.finish(r); r.tpc = ((3888u + sh) & 16383u); return; }
    fl.finish(r); vu::interpret(1, ((3888u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); vu::interpret(1, jpc);
    return;
}

template <bool kSticky>
static void vu1_48E2CD298921D36E_s(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 2656u) & 16383u;
    (void)sh;
    unsigned st = 0u;
    static constexpr std::uint8_t ks_0A78[] = {0, 0};
    static constexpr std::uint8_t ks_0A80[] = {0, 0};
    static constexpr std::uint8_t ks_0A88[] = {0, 1};
    static constexpr std::uint8_t ks_0AA0[] = {0, 0};
    static constexpr std::uint8_t ks_0AA8[] = {0, 0};
    static constexpr std::uint8_t ks_0AB0[] = {0, 1};
    static constexpr std::uint8_t ks_0AB8[] = {0, 0};
    static constexpr std::uint8_t ks_0AC0[] = {0, 2};
    static constexpr std::uint8_t ke_0A78_0A80[] = {0, 1};
    static constexpr std::uint8_t ke_0A80_0A88[] = {0, 1};
    static constexpr std::uint8_t ke_0A88_0A78[] = {1, 1};
    static constexpr std::uint8_t ke_0AA0_0AA8[] = {0, 1};
    static constexpr std::uint8_t ke_0AA8_0AB0[] = {0, 1};
    static constexpr std::uint8_t ke_0AB0_0AA0[] = {1, 1};
    static constexpr std::uint8_t ke_0AB0_0AB8[] = {1, 1};
    static constexpr std::uint8_t ke_0AB8_0AC0[] = {0, 1};
    v4u n1 = vshadow_eager(r.vf[1]);
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i5 = r.vi[5];
    std::uint16_t i15 = r.vi[15];
    goto L_0A60;
L_0A60: { ++fl.t; r.i = 1056964608u; }
L_0A68: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); pend = 0u == i4; vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.push_last<12u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_0A70: { ++fl.t; set_vi(i4, i4 - 1u); }
    if (pend) { pend = false; goto L_0A90; }
    st = 0u; 
L_0A78: { fl.t += 1u + ks_0A78[st]; set_vi(i5, r.vf[4].w[1]); }
    st = ke_0A78_0A80[st]; 
L_0A80: { fl.t += 1u + ks_0A80[st]; pend = 0u != i4; }
    st = ke_0A80_0A88[st]; 
L_0A88: { fl.t += 1u + ks_0A88[st]; const v4u uv = vmuln(n1, vfix(vsplat(r.i))); set_vi(i4, i4 - 1u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.push_last<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
    if (pend) { pend = false; st = ke_0A88_0A78[st]; goto L_0A78; }
L_0A90: { ++fl.t; pend = 0u == i5; }
L_0A98: { ++fl.t; set_vi(i5, i5 - 1u); }
    if (pend) { pend = false; st = 0u; goto L_0AB8; }
    st = 0u; 
L_0AA0: { fl.t += 1u + ks_0AA0[st]; }
    st = ke_0AA0_0AA8[st]; 
L_0AA8: { fl.t += 1u + ks_0AA8[st]; pend = 0u != i5; }
    st = ke_0AA8_0AB0[st]; 
L_0AB0: { fl.t += 1u + ks_0AB0[st]; const v4u uv = vmuln(n1, vfix(vsplat(r.i))); set_vi(i5, i5 - 1u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.push_last<4u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
    if (pend) { pend = false; st = ke_0AB0_0AA0[st]; goto L_0AA0; }
    st = ke_0AB0_0AB8[st]; 
L_0AB8: { fl.t += 1u + ks_0AB8[st]; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
    st = ke_0AB8_0AC0[st]; 
L_0AC0: { fl.t += 1u + ks_0AC0[st]; { std::uint8_t *q = qword(mem, 0u + 116u); std::memcpy(q + 0, &r.vf[1].w[0], 4); std::memcpy(q + 4, &r.vf[1].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[4] = i4; r.vi[5] = i5; vu::interpret(1, ((2760u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[4] = i4; r.vi[5] = i5; vu::interpret(1, jpc);
    return;
}

static __attribute__((noinline, cold)) void vu1_48E2CD298921D36E_c(Vu0Regs &r, std::uint8_t *mem) { vu1_48E2CD298921D36E_s<true>(r, mem); }

void vu1_48E2CD298921D36E(Vu0Regs &r, std::uint8_t *mem) {
    if ((r.status & 0xC0u) == 0xC0u) vu1_48E2CD298921D36E_s<false>(r, mem);
    else vu1_48E2CD298921D36E_c(r, mem);
}

template <bool kSticky>
static void vu1_78D9A100719E8319_s(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 0u) & 16383u;
    (void)sh;
    v4u n1 = vshadow_eager(r.vf[1]);
    v4u n2 = vshadow_eager(r.vf[2]);
    v4u n3 = vshadow_eager(r.vf[3]);
    v4u n5 = vshadow_eager(r.vf[5]);
    v4u n6 = vshadow_eager(r.vf[6]);
    v4u n7 = vshadow_eager(r.vf[7]);
    v4u nacc = vshadow_eager(r.acc);
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i3 = r.vi[3];
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i5 = r.vi[5];
    std::uint16_t i8 = r.vi[8];
    std::uint16_t i9 = r.vi[9];
    std::uint16_t i10 = r.vi[10];
    std::uint16_t i11 = r.vi[11];
    std::uint16_t i12 = r.vi[12];
    std::uint16_t i14 = r.vi[14];
    std::uint16_t i15 = r.vi[15];
    goto L_0000;
L_0000: { ++fl.t; set_vi(i14, 0u + 112u); }
L_0008: { ++fl.t; set_vi(i2, 0u + 168u); }
L_0010: { ++fl.t; set_vi(i3, 0u + 164u); }
L_0018: { ++fl.t; set_vi(i4, 0u + 160u); }
L_0020: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 115u); const std::uint32_t v = i2; std::memcpy(q + 12, &v, 4); } }
L_0028: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 116u); const std::uint32_t v = i3; std::memcpy(q + 12, &v, 4); } }
L_0030: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 117u); const std::uint32_t v = i4; std::memcpy(q + 12, &v, 4); } }
L_0038: { ++fl.t; r.i = 1124073472u; }
L_0040: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vfix(vsplat(r.i))); { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = 0u; std::memcpy(q + 0, &v, 4); } vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.push_last<1u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0048: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = 0u; std::memcpy(q + 4, &v, 4); } vstore(r.vf[2], uv); n2 = vshadow_eager(r.vf[2]); }
L_0050: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 128u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0058: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 129u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0060: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 130u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0068: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 133u); std::memcpy(q + 12, &r.vf[1].w[3], 4); } }
L_0070: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 139u); std::memcpy(q, &r.vf[2], 16); } }
L_0078: { ++fl.t; set_vi(i1, 0u + 1u); }
L_0080: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = i1; std::memcpy(q + 8, &v, 4); } }
L_0088: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 37u) + 4, 2); set_vi(i2, v); } }
L_0090: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0098: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 2u) + 12, 2); set_vi(i12, v); } }
L_00A0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 4u) + 12, 2); set_vi(i11, v); } }
L_00A8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 131u); const std::uint32_t v = i2; std::memcpy(q + 12, &v, 4); } }
L_00B0: { ++fl.t; set_vi(i3, 0u + 27u); }
L_00B8: { ++fl.t; vu::kick(1, i3); }
L_00C0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 24u); vstore(r.vf[15], vsel(vload(r.vf[15]), vload_ptr(q), v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); } }
L_00C8: { ++fl.t; set_vi(i1, 0u + 8u); }
L_00D0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_00D8: { ++fl.t; set_vi(i1, 0u + 26u); }
L_00E0: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(0u))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } }
L_00E8: { ++fl.t; set_vi(i15, (((232u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_00F0: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
    if (pend) { pend = false; goto L_1638; }
L_00F8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 12, 2); set_vi(i8, v); } }
L_0100: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0108: { ++fl.t; set_vi(i15, (((264u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0110: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 4, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0A68; }
L_0118: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0120: { ++fl.t; set_vi(i15, (((288u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0128: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_0E20; }
L_0130: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0138: { ++fl.t; set_vi(i15, (((312u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0140: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 37u) + 0, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0D78; }
L_0148: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0150: { ++fl.t; set_vi(i15, (((336u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0158: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_1238; }
L_0160: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0168: { ++fl.t; set_vi(i15, (((360u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0170: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_0F70; }
L_0178: { ++fl.t; set_vi(i1, 0u + 66u); }
L_0180: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 45u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } }
L_0188: { ++fl.t; set_vi(i15, (((392u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0190: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
    if (pend) { pend = false; goto L_1638; }
L_0198: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 66u); std::memcpy(&r.vf[18], q, 16); } }
L_01A0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 67u); std::memcpy(&r.vf[19], q, 16); } }
L_01A8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 68u); std::memcpy(&r.vf[20], q, 16); } }
L_01B0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 69u); std::memcpy(&r.vf[21], q, 16); } }
L_01B8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 70u); std::memcpy(&r.vf[22], q, 16); } }
L_01C0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 71u); std::memcpy(&r.vf[23], q, 16); } }
L_01C8: { ++fl.t; ending = true; }
L_01D0: { ++fl.t; }
    if (ending) { fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; r.tpc = ((472u + sh) & 16383u); return; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, ((472u + sh) & 16383u));
    return;
L_0A68: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0u)); set_vi(i1, 0u + 8u); vstore(r.vf[3], uv); n3 = vshadow_eager(r.vf[3]); }
L_0A70: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i1, i5 & i1); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n5 = vshadow_eager(r.vf[5]); }
L_0A78: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, v4u{0u, 0u, 0u, 0x3F800000u}); { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 8, 2); set_vi(i2, v); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n5 = vshadow_eager(r.vf[5]); }
L_0A80: { ++fl.t; pend = 0u == i1; }
L_0A88: { ++fl.t; set_vi(i3, 0u + 3u); }
    if (pend) { pend = false; goto L_0A98; }
L_0A90: { ++fl.t; set_vi(i4, 0u + i2); }
L_0A98: { ++fl.t; set_vi(i1, 0u + 8u); }
L_0AA0: { ++fl.t; set_vi(i1, i4 & i1); }
L_0AA8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 37u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } n1 = vshadow_eager(r.vf[1]); }
L_0AB0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 139u); std::memcpy(&r.vf[6], q, 16); } n6 = vshadow_eager(r.vf[6]); }
L_0AB8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 140u); std::memcpy(&r.vf[7], q, 16); } n7 = vshadow_eager(r.vf[7]); }
L_0AC0: { ++fl.t; pend = 0u == i1; }
L_0AC8: { ++fl.t; set_vi(i2, 0u + 4u); }
    if (pend) { pend = false; goto L_0AD8; }
L_0AD0: { ++fl.t; const v4u uv = vaddn(n1, n1); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0AD8: { ++fl.t; const v4u uv = (v4u)((v4f)n5 + (v4f)vsplat(0x3F800000u)); set_vi(i5, i4 & i3); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0AE0: { ++fl.t; set_vi(i4, i4 & i2); }
L_0AE8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 124u) + 12, 2); set_vi(i1, v); } }
L_0AF0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 138u); std::memcpy(q + 12, &r.vf[1].w[3], 4); } }
L_0AF8: { ++fl.t; pend = 0u == i5; }
L_0B00: { ++fl.t; set_vi(i5, i5 - 1u); }
    if (pend) { pend = false; goto L_0B48; }
L_0B08: { ++fl.t; r.i = 1124073472u; }
L_0B10: { ++fl.t; pend = 0u == i5; }
L_0B18: { ++fl.t; }
    if (pend) { pend = false; goto L_0B70; }
L_0B20: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); set_vi(i2, 0u + 1u); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_0B28: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 16u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B30: { ++fl.t; set_vi(i1, i1 | i3); }
L_0B38: { ++fl.t; pend = true; }
L_0B40: { ++fl.t; set_vi(i3, 0u + 1u); }
    if (pend) { pend = false; goto L_0B98; }
L_0B48: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); r.i = 1132396544u; vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B50: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 32751u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B58: { ++fl.t; set_vi(i1, i1 & i3); }
L_0B60: { ++fl.t; pend = true; }
L_0B68: { ++fl.t; set_vi(i3, 0u + 0u); }
    if (pend) { pend = false; goto L_0B98; }
L_0B70: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); set_vi(i2, 0u + 0u); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B78: { ++fl.t; r.i = 1124073472u; }
L_0B80: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 16u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B88: { ++fl.t; set_vi(i1, i1 | i3); }
L_0B90: { ++fl.t; set_vi(i3, 0u + 1u); }
L_0B98: { ++fl.t; pend = 0u == i4; }
L_0BA0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 134u); const std::uint32_t v = i3; std::memcpy(q + 8, &v, 4); } }
    if (pend) { pend = false; goto L_0BB8; }
L_0BA8: { ++fl.t; r.i = 1073676288u; }
L_0BB0: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vfix(vsplat(r.i))); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0BB8: { ++fl.t; set_vi(i3, 0u + 27u); }
L_0BC0: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(r.vf[1].w[0])); { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n2 = vshadow_eager(r.vf[2]); }
L_0BC8: { ++fl.t; const v4u uv = vmuln(n6, vsplat(n1[3])); { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i3))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0BD0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0BD8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 132u); const std::uint32_t v = i2; std::memcpy(q + 12, &v, 4); } }
L_0BE0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 112u); std::memcpy(q + 0, &r.vf[3].w[0], 4); std::memcpy(q + 4, &r.vf[3].w[1], 4); } }
L_0BE8: { ++fl.t; const v4u uv = vmuln(n7, n6); { std::uint8_t *q = qword(mem, 0u + 137u); std::memcpy(q + 12, &r.vf[5].w[3], 4); } vstore(r.vf[7], uv); fl.push_last<15u, kSticky>(uv); n7 = uv; }
L_0BF0: { ++fl.t; set_vi(i2, i15 + 0u); }
L_0BF8: { ++fl.t; set_vi(i15, (((3064u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0C00: { ++fl.t; }
    if (pend) { pend = false; goto L_1638; }
L_0C08: { ++fl.t; set_vi(i15, i2 + 0u); }
L_0C10: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 133u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
L_0C18: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 143u); std::memcpy(q, &r.vf[7], 16); } }
L_0C20: { ++fl.t; pend = true; }
L_0C28: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 125u) + 12, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0FA8; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, ((3120u + sh) & 16383u));
    return;
L_0D78: { ++fl.t; set_vi(i1, 0u + 16u); }
L_0D80: { ++fl.t; set_vi(i1, i5 & i1); }
L_0D88: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 12, 2); set_vi(i2, v); } }
L_0D90: { ++fl.t; pend = 0u == i1; }
L_0D98: { ++fl.t; }
    if (pend) { pend = false; goto L_0DB0; }
L_0DA0: { ++fl.t; set_vi(i4, 0u + i2); }
L_0DA8: { ++fl.t; }
L_0DB0: { ++fl.t; pend = 0u == i4; }
L_0DB8: { ++fl.t; set_vi(i4, i4 - 1u); }
    if (pend) { pend = false; goto L_0E08; }
L_0DC0: { ++fl.t; set_vi(i1, 0u + 16384u); }
L_0DC8: { ++fl.t; pend = 0u == i4; }
L_0DD0: { ++fl.t; }
    if (pend) { pend = false; goto L_0DF0; }
L_0DD8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0DE0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0DE8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0DF0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0DF8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0E00: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0E08: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0E10: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0E18: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0E20: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 8, 2); set_vi(i3, v); } }
L_0E28: { ++fl.t; set_vi(i2, 0u + 27u); }
L_0E30: { ++fl.t; pend = 0u != i4; }
L_0E38: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 124u) + 12, 2); set_vi(i1, v); } }
    if (pend) { pend = false; goto L_0E50; }
L_0E40: { ++fl.t; pend = 0u != i3; }
L_0E48: { ++fl.t; }
    if (pend) { pend = false; goto L_0E68; }
L_0E50: { ++fl.t; set_vi(i3, 0u + 32735u); }
L_0E58: { ++fl.t; pend = true; }
L_0E60: { ++fl.t; set_vi(i1, i1 & i3); }
    if (pend) { pend = false; goto L_0E78; }
L_0E68: { ++fl.t; set_vi(i3, 0u + 32u); }
L_0E70: { ++fl.t; set_vi(i1, i1 | i3); }
L_0E78: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } }
L_0E80: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i2))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
L_0E88: { ++fl.t; pend = true; }
L_0E90: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
    if (pend) { pend = false; goto L_1638; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, ((3736u + sh) & 16383u));
    return;
L_0F70: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i1, 0u + 4u); vstore(r.vf[1], uv); n1 = vshadow_eager(r.vf[1]); }
L_0F78: { ++fl.t; set_vi(i1, i5 & i1); }
L_0F80: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 4, 2); set_vi(i2, v); } }
L_0F88: { ++fl.t; pend = 0u == i1; }
L_0F90: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 145u); std::memcpy(q + 0, &r.vf[1].w[0], 4); } }
    if (pend) { pend = false; goto L_0FA0; }
L_0F98: { ++fl.t; set_vi(i4, 0u + i2); }
L_0FA0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 125u); const std::uint32_t v = i4; std::memcpy(q + 12, &v, 4); } }
L_0FA8: { ++fl.t; const v4u uv = vmin(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0u)); { const std::uint8_t *q = qword(mem, 0u + 138u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[4], uv); n3 = vshadow_eager(r.vf[3]); }
L_0FB0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 141u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n3 = vshadow_eager(r.vf[3]); }
L_0FB8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 64u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow_eager(r.vf[1]); }
L_0FC0: { ++fl.t; pend = 0u != i4; }
L_0FC8: { ++fl.t; const v4u uv = vmuln(n3, vsplat(n3[3])); { const std::uint8_t *q = qword(mem, 0u + 142u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vshadow_eager(r.vf[2]); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; goto L_0FE8; }
L_0FD0: { ++fl.t; const v4u uv = vmuln(n1, n3); { std::uint8_t *q = qword(mem, 0u + 145u); std::memcpy(q + 0, &r.vf[0].w[0], 4); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); }
L_0FD8: { ++fl.t; const v4u uv = vmuln(n1, n3); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0FE0: { ++fl.t; const v4u uv = vaddn(nacc, (v4u)((v4f)n2 * (v4f)vsplat(0x3F800000u))); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0FE8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 138u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); std::memcpy(q + 8, &r.vf[4].w[2], 4); } }
L_0FF0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0FF8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 137u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, ((4096u + sh) & 16383u));
    return;
L_1238: { ++fl.t; set_vi(i1, 0u + 32u); }
L_1240: { ++fl.t; set_vi(i1, i5 & i1); }
L_1248: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 47u) + 0, 2); set_vi(i2, v); } }
L_1250: { ++fl.t; pend = 0u == i1; }
L_1258: { ++fl.t; }
    if (pend) { pend = false; goto L_1270; }
L_1260: { ++fl.t; set_vi(i4, 0u + i2); }
L_1268: { ++fl.t; }
L_1270: { ++fl.t; pend = 0u != i4; }
L_1278: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 33u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } }
    if (pend) { pend = false; goto L_1290; }
L_1280: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1288: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 136u); std::memcpy(q + 0, &r.vf[0].w[0], 4); std::memcpy(q + 4, &r.vf[0].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_1290: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1298: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 136u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, ((4768u + sh) & 16383u));
    return;
L_1638: { ++fl.t; set_vi(i10, 0u + 1u); }
L_1640: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_1648: { ++fl.t; set_vi(i9, 0u + i12); }
L_1650: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_1658: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1660: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q, &r.vf[4], 16); set_vi(i12, i12 + 1u); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, ((5736u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

static __attribute__((noinline, cold)) void vu1_78D9A100719E8319_c(Vu0Regs &r, std::uint8_t *mem) { vu1_78D9A100719E8319_s<true>(r, mem); }

void vu1_78D9A100719E8319(Vu0Regs &r, std::uint8_t *mem) {
    if ((r.status & 0xC0u) == 0xC0u) vu1_78D9A100719E8319_s<false>(r, mem);
    else vu1_78D9A100719E8319_c(r, mem);
}

template <bool kSticky>
PS2_VU_BODY void vu1_09CF90EDB7FE2257_b(Vu0Regs &r, std::uint8_t *mem, VuDaz &daz, std::uint32_t &hop) {
    (void)daz;
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 1280u) & 16383u;
    (void)sh;
    std::uint16_t bk = 0, next_bk = 0;
    unsigned bi = 0;
    (void)bk;
    (void)next_bk;
    (void)bi;
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
    v4u n26 = vshadow(r.vf[26]);
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
    std::uint16_t i7 = r.vi[7];
    std::uint16_t i8 = r.vi[8];
    std::uint16_t i9 = r.vi[9];
    std::uint16_t i10 = r.vi[10];
    std::uint16_t i11 = r.vi[11];
    std::uint16_t i12 = r.vi[12];
    std::uint16_t i13 = r.vi[13];
    std::uint16_t i15 = r.vi[15];
    goto L_0500;
L_01F8: { ++fl.t; set_vi(i1, 0u + 15u); }
L_0200: { ++fl.t; set_vi(i1, i8 & i1); }
L_0208: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1) + 4, 2); set_vi(i2, v); } }
L_0210: { fl.t += 4u; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; pendj = true; }
L_0218: { ++fl.t; }
    if (pendj) { pendj = false; vflush(r.vf[4], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
    vflush(r.vf[4], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((544u + sh) & 16383u));
    return;
L_0500: { ++fl.t; set_vi(i9, 0u + 4u); }
L_0508: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 2u); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); } }
L_0510: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 1u); const std::uint32_t v = i9; std::memcpy(q + 0, &v, 4); } }
L_0518: { ++fl.t; { const std::uint8_t *q = qword(mem, i10 + 30u); std::memcpy(&r.vf[1], q, 16); } n1 = vshadow(r.vf[1]); }
L_0520: { ++fl.t; set_vi(i10, 0u + 0u); }
L_0528: { ++fl.t; set_vi(i9, i12 + 2u); }
L_0530: { ++fl.t; }
L_0538: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); std::memcpy(q, &r.vf[1], 16); } }
L_0540: { ++fl.t; set_vi(i12, i12 + 3u); }
L_0548: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); vefu(daz.csr, r, 115u, 26u, 2u); vstore(r.vf[5], uv); n5 = vshadow(r.vf[5]); }
L_0550: { ++fl.t; const v4u uv = vmuld(n18, n26); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0558: { ++fl.t; const v4u uv = vmuld(n20, n26); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[15].w[0], r.vf[27].w[2]); fl.end_q(r, qb, 7u); } vstore(r.vf[16], vsel(vload(r.vf[16]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n16 = vsel(n16, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0560: { ++fl.t; const v4u uv = vmuld(n22, n26); vstore(r.vf[17], vsel(vload(r.vf[17]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n17 = vsel(n17, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0568: { ++fl.t; }
L_0570: { ++fl.t; const v4u uv = vaddd(n1, vsplat(n1[1])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0578: { ++fl.t; const v4u uv = vmaddd(nacc, n5, vsplat(n1[2])); { const std::uint8_t *q = qword(mem, i13 + 5u); std::memcpy(&r.vf[3], q, 16); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vshadow(r.vf[3]); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0580: { ++fl.t; const v4u uv = vaddd(n16, vsplat(n16[0])); { const std::uint8_t *q = qword(mem, 0u + 38u); std::memcpy(&r.vf[7], q, 16); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n7 = vshadow(r.vf[7]); nacc = vsel(nacc, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_0588: { ++fl.t; const v4u uv = vmaddd(nacc, n5, vsplat(n16[2])); { const std::uint8_t *q = qword(mem, i13 + 2u); std::memcpy(&r.vf[16], q, 16); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n16 = vshadow(r.vf[16]); n6 = vsel(n6, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_0590: { ++fl.t; const v4u uv = vaddd(n17, vsplat(n17[0])); r.i = 998244352u; vstore(r.acc, vsel(vload(r.acc), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.stick<2u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_0598: { ++fl.t; const v4u uv = vmaddd(nacc, n5, vsplat(n17[1])); { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = 0u; std::memcpy(q + 8, &v, 4); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.stick<2u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_05A0: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vqd(r.q)); { const std::uint8_t *q = qword(mem, 0u + 143u); std::memcpy(&r.vf[4], q, 16); } vstore(r.vf[2], uv); fl.stick<15u, kSticky>(uv); n4 = vshadow(r.vf[4]); n2 = uv; }
L_05A8: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { const std::uint8_t *q = qword(mem, 0u + 142u); std::memcpy(&r.vf[1], q, 16); } vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n1 = vshadow(r.vf[1]); n27 = vsel(n27, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_05B0: { ++fl.t; const v4u uv = vmuld(n27, n7); { const std::uint8_t *q = qword(mem, 0u + 33u); std::memcpy(&r.vf[9], q, 16); } vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.stick<12u, kSticky>(uv); n9 = vshadow(r.vf[9]); n7 = vsel(n7, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_05B8: { ++fl.t; const v4u uv = vitof(vload(r.vf[3]), 15); { const std::uint8_t *q = qword(mem, 0u + 137u); vstore(r.vf[13], vsel(vload(r.vf[13]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[24], uv); n13 = vshadow(r.vf[13]); n24 = vshadow(r.vf[24]); }
L_05C0: { ++fl.t; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); const v4u uv = vmax(vload(r.vf[2]), vsplat(r.vf[7].w[3])); set_vi(i4, 0u + 16u); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n2 = vshadow(r.vf[2]); }
L_05C8: { ++fl.t; const v4u uv = vmuld(vswz<1, 2, 0, 3>(n13), vswz<2, 0, 1, 3>(n25)); { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 132u) + 12, 2); set_vi(i3, v); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_05D0: { ++fl.t; const v4u uv = vmsubd(nacc, vswz<1, 2, 0, 3>(n25), vswz<2, 0, 1, 3>(n13)); { const std::uint8_t *q = qword(mem, i13 + 4u); std::memcpy(&r.vf[17], q, 16); } vstore(r.vf[13], vsel(vload(r.vf[13]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n17 = vshadow(r.vf[17]); n13 = vsel(n13, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_05D8: { ++fl.t; const v4u uv = vmuld(n24, vfix(vsplat(r.i))); { const std::uint8_t *q = qword(mem, 0u + 135u); std::memcpy(&r.vf[11], q, 16); } vstore(r.vf[24], uv); fl.stick<15u, kSticky>(uv); n11 = vshadow(r.vf[11]); n24 = uv; }
L_05E0: { ++fl.t; const v4u uv = vmuld(n7, n2); { const std::uint8_t *q = qword(mem, 0u + 134u); std::memcpy(&r.vf[10], q, 16); } vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n10 = vshadow(r.vf[10]); n7 = vsel(n7, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_05E8: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vsplat(n9[2])); set_vi(i1, i8 & i4); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_05F0: { ++fl.t; const v4u uv = vmaddd(nacc, n9, vsplat(n27[2])); { const std::uint8_t *q = qword(mem, i1 + 15u); vstore(r.vf[7], vsel(vload(r.vf[7]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[16], vsel(vload(r.vf[16]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n7 = vshadow(r.vf[7]); n16 = vsel(n16, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_05F8: { ++fl.t; const v4u uv = vmuld(n13, n27); { const std::uint8_t *q = qword(mem, 0u + 136u); vstore(r.vf[8], vsel(vload(r.vf[8]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n8 = vshadow(r.vf[8]); n12 = vsel(n12, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0600: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n2[0])); { std::uint8_t *q = qword(mem, 0u + 112u); std::memcpy(q + 0, &r.vf[16].w[0], 4); std::memcpy(q + 4, &r.vf[16].w[1], 4); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.stick<2u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_0608: { ++fl.t; const v4u uv = vmuld(n17, vsplat(n24[0])); r.vf[24].w[3] = r.p; vstore(r.vf[13], vsel(vload(r.vf[13]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n24 = vshadow(r.vf[24]); n13 = vsel(n13, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0610: { ++fl.t; vflushd(r.vf[16], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); const v4u uv = vmax(vload(r.vf[16]), vsplat(r.vf[9].w[1])); set_vi(i5, 0u + 63u); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_0618: { ++fl.t; const v4u uv = vaddd(n12, vsplat(n12[1])); { const std::uint8_t *q = qword(mem, i13 + 3u); std::memcpy(&r.vf[16], q, 16); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n16 = vshadow(r.vf[16]); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0620: { ++fl.t; const v4u uv = vmaddd(nacc, n5, vsplat(n12[2])); set_vi(i2, r.vf[3].w[1]); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0628: { ++fl.t; const v4u uv = vmuld(n6, vsplat(n24[3])); vstore(r.vf[6], vsel(vload(r.vf[6]), vload(r.vf[0]), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n6 = vshadow(r.vf[6]); n12 = vsel(n12, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0630: { ++fl.t; const v4u uv = vmuld(n26, vsplat(n24[3])); set_vi(i6, 0u + 16384u); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0638: { ++fl.t; const v4u uv = vmin(vload(r.vf[3]), vsplat(r.vf[9].w[0])); set_vi(i1, i12 + 0u); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_0640: { ++fl.t; const v4u uv = vmuld(n7, vsplat(n3[0])); set_vi(i2, i2 & i5); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.push<1u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0648: { ++fl.t; vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vmax(vload(r.vf[12]), v4u{0u, 0u, 0u, 0x3F800000u}); { const std::uint8_t *q = qword(mem, 0u + 39u); vstore(r.vf[26], vsel(vload(r.vf[26]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n26 = vshadow(r.vf[26]); n6 = vshadow(r.vf[6]); }
L_0650: { ++fl.t; const v4u uv = vmuld(n5, n11); { const std::uint8_t *q = qword(mem, 0u + 145u); vstore(r.vf[5], vsel(vload(r.vf[5]), vload_ptr(q), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.push<12u, kSticky>(uv); n5 = vshadow(r.vf[5]); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_0658: { ++fl.t; const v4u uv = vaddd(nacc, (v4u)((v4f)n10 * (v4f)vsplat(0x3F800000u))); set_vi(i7, r.vf[3].w[2]); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.push<12u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_0660: { ++fl.t; const v4u uv = vftoi(vload(r.vf[3]), 4); set_vi(i4, (fl.mac() & 0xFFFFu) == i4 ? 1u : 0u); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n7 = vshadow(r.vf[7]); }
L_0668: { ++fl.t; const v4u uv = vmuld(n19, vsplat(n6[0])); { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 126u) + 12, 2); set_vi(i4, v); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0670: { ++fl.t; const v4u uv = vmaddd(nacc, n21, vsplat(n6[1])); { const std::uint8_t *q = qword(mem, i2 + 961u); std::memcpy(&r.vf[3], q, 16); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n3 = vshadow(r.vf[3]); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0678: { ++fl.t; vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); const v4u uv = vmaddd(nacc, n23, vsplat(n6[2])); { std::uint8_t *q = qword(mem, 0u + 113u); std::memcpy(q + 0, &r.vf[9].w[0], 4); std::memcpy(q + 4, &r.vf[9].w[1], 4); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0680: { ++fl.t; const v4u uv = vaddd(n7, n26); { const std::uint8_t *q = qword(mem, i3 + 112u); vstore(r.vf[11], vsel(vload(r.vf[11]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n11 = vshadow(r.vf[11]); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0688: { ++fl.t; const v4u uv = vmuld(n17, vsplat(n24[1])); set_vi(i8, i8 | i4); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0690: { ++fl.t; const v4u uv = vmuld(n16, vsplat(n24[0])); set_vi(i3, i6 & i8); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0698: { ++fl.t; vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vmax(vload(r.vf[6]), vsplat(r.vf[5].w[0])); set_vi(i4, i3 + i3); vstore(r.vf[10], uv); n10 = vshadow(r.vf[10]); }
L_06A0: { ++fl.t; const v4u uv = vaddd(n11, n8); set_vi(i6, r.vf[7].w[3]); vstore(r.vf[11], vsel(vload(r.vf[11]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.stick<12u, kSticky>(uv); n11 = vsel(n11, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_06A8: { ++fl.t; const v4u uv = vftoi(vload(r.vf[9]), 4); set_vi(i3, i7 & i5); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n5 = vshadow(r.vf[5]); }
L_06B0: { ++fl.t; const v4u uv = vmuld(n17, vsplat(n24[2])); { const std::uint8_t *q = qword(mem, 0u + 138u); vstore(r.vf[9], vsel(vload(r.vf[9]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n9 = vshadow(r.vf[9]); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_06B8: { ++fl.t; const v4u uv = vmuld(n4, n10); { const std::uint8_t *q = qword(mem, i13 + 1u); std::memcpy(&r.vf[10], q, 16); } vstore(r.vf[8], uv); fl.stick<15u, kSticky>(uv); n10 = vshadow(r.vf[10]); n8 = uv; }
L_06C0: { ++fl.t; const v4u uv = vmuld(n11, vsplat(n2[0])); set_vi(i4, i6 | i4); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.stick<12u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_06C8: { ++fl.t; const v4u uv = vmuld(n16, vsplat(n24[1])); { std::uint8_t *q = qword(mem, i1 + 2u); std::memcpy(q + 0, &r.vf[5].w[0], 4); std::memcpy(q + 4, &r.vf[5].w[1], 4); std::memcpy(q + 8, &r.vf[5].w[2], 4); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_06D0: { ++fl.t; const v4u uv = vmuld(n16, vsplat(n24[2])); { std::uint8_t *q = qword(mem, i1 + 2u); const std::uint32_t v = i4; std::memcpy(q + 12, &v, 4); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n4 = vsel(n4, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_06D8: { ++fl.t; const v4u uv = vmuld(n8, n10); { const std::uint8_t *q = qword(mem, i2 + 963u); std::memcpy(&r.vf[8], q, 16); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); n8 = vshadow(r.vf[8]); nacc = uv; }
L_06E0: { ++fl.t; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vmaddd(nacc, n9, n10); { std::uint8_t *q = qword(mem, i1 + 0u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_06E8: { ++fl.t; const v4u uv = vaddd(nacc, (v4u)((v4f)n1 * (v4f)vsplat(0x3F800000u))); set_vi(i12, i12 + 3u); vstore(r.vf[9], uv); fl.stick<15u, kSticky>(uv); n9 = uv; }
L_06F0: { ++fl.t; const v4u uv = vmuld(n28, vsplat(n13[0])); { const std::uint8_t *q = qword(mem, i2 + 960u); std::memcpy(&r.vf[1], q, 16); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); n1 = vshadow(r.vf[1]); nacc = uv; }
L_06F8: { ++fl.t; const v4u uv = vmaddd(nacc, n29, vsplat(n13[1])); set_vi(i10, i10 + 1u); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0700: { ++fl.t; const v4u uv = vmaddd(nacc, n30, vsplat(n13[2])); { const std::uint8_t *q = qword(mem, 0u + 133u); std::memcpy(&r.vf[10], q, 16); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); n10 = vshadow(r.vf[10]); nacc = uv; }
L_0708: { ++fl.t; vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vmin(vload(r.vf[9]), vsplat(r.vf[13].w[3])); set_vi(i13, i13 + 5u); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n9 = vshadow(r.vf[9]); }
L_0710: { ++fl.t; const v4u uv = vmaddd(nacc, n31, vsplat(n24[0])); { const std::uint8_t *q = qword(mem, i2 + 962u); std::memcpy(&r.vf[2], q, 16); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); n2 = vshadow(r.vf[2]); nacc = uv; }
L_0718: { ++fl.t; const v4u uv = vmaddd(nacc, n1, vsplat(n7[0])); vstore(r.vf[13], vsel(vload(r.vf[13]), vload(r.vf[25]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); n13 = vshadow(r.vf[13]); nacc = uv; }
L_0720: { ++fl.t; const v4u uv = vmaddd(nacc, n3, vsplat(n7[1])); { const std::uint8_t *q = qword(mem, i3 + 960u); std::memcpy(&r.vf[25], q, 16); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); n25 = vshadow(r.vf[25]); nacc = uv; }
L_0728: { ++fl.t; const v4u uv = vmuld(n9, n10); vstore(r.vf[10], uv); fl.stick<15u, kSticky>(uv); n10 = uv; }
L_0730: { ++fl.t; const v4u uv = vmaddd(nacc, n2, vsplat(n7[2])); { const std::uint8_t *q = qword(mem, i3 + 961u); std::memcpy(&r.vf[9], q, 16); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); n9 = vshadow(r.vf[9]); nacc = uv; }
L_0738: { ++fl.t; const v4u uv = vmaddd(nacc, n8, vsplat(n24[1])); { const std::uint8_t *q = qword(mem, i3 + 962u); std::memcpy(&r.vf[7], q, 16); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); n7 = vshadow(r.vf[7]); nacc = uv; }
L_0740: { ++fl.t; const v4u uv = vmaddd(nacc, n25, vsplat(n6[0])); { const std::uint8_t *q = qword(mem, i3 + 963u); std::memcpy(&r.vf[11], q, 16); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); n11 = vshadow(r.vf[11]); nacc = uv; }
L_0748: { ++fl.t; const v4u uv = vftoi(vload(r.vf[10]), 0); vstore(r.vf[8], uv); n8 = vshadow(r.vf[8]); }
L_0750: { ++fl.t; const v4u uv = vmaddd(nacc, n9, vsplat(n6[1])); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0758: { ++fl.t; const v4u uv = vmaddd(nacc, n7, vsplat(n6[2])); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0760: { ++fl.t; vflushd(r.vf[27], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); const v4u uv = vmaddd(nacc, n11, vsplat(n24[2])); vstore(r.vf[24], vsel(vload(r.vf[24]), vload(r.vf[27]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n24 = vshadow(r.vf[24]); n27 = vsel(n27, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0768: { ++fl.t; const v4u uv = vmuld(n28, vsplat(n26[0])); { std::uint8_t *q = qword(mem, i1 + 1u); std::memcpy(q, &r.vf[8], 16); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0770: { ++fl.t; const v4u uv = vmaddd(nacc, n29, vsplat(n26[1])); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0778: { ++fl.t; const v4u uv = vmaddd(nacc, n30, vsplat(n26[2])); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0780: { ++fl.t; const v4u uv = vmaddd(nacc, n1, vsplat(n5[0])); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0788: { ++fl.t; const v4u uv = vmaddd(nacc, n3, vsplat(n5[1])); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0790: { ++fl.t; const v4u uv = vmaddd(nacc, n2, vsplat(n5[2])); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0798: { ++fl.t; const v4u uv = vmaddd(nacc, n25, vsplat(n4[0])); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_07A0: { ++fl.t; const v4u uv = vsubd(n27, n24); vstore(r.vf[25], uv); fl.stick<15u, kSticky>(uv); n25 = uv; }
L_07A8: { ++fl.t; const v4u uv = vmaddd(nacc, n9, vsplat(n4[1])); vstore(r.acc, uv); fl.push<15u, kSticky>(uv); nacc = uv; }
L_07B0: { ++fl.t; const v4u uv = vmaddd(nacc, n7, vsplat(n4[2])); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_07B8: { ++fl.t; set_vi(i1, i11 - i12); }
L_07C0: { ++fl.t; set_vi(i6, i8 + 0u); }
L_07C8: { ++fl.t; pend = static_cast<std::int16_t>(i1) > 0; }
L_07D0: { ++fl.t; }
    if (pend) { pend = false; goto L_0800; }
L_07D8: { ++fl.t; set_vi(i15, (((2008u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_07E0: { ++fl.t; }
    if (pend) { pend = false; goto L_1668; }
L_07E8: { ++fl.t; set_vi(i10, 0u + 0u); }
L_07F0: { ++fl.t; set_vi(i9, 0u + i12); }
L_07F8: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_0800: { ++fl.t; pend = static_cast<std::int16_t>(i6) >= 0; }
L_0808: { ++fl.t; set_vi(i8, r.vf[16].w[3]); }
    if (pend) { pend = false; vflushd(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); goto L_0548; }
L_0810: { ++fl.t; set_vi(i5, 0u + 261u); }
L_0818: { ++fl.t; pend = true; }
L_0820: { ++fl.t; set_vi(i4, 0u + 169u); }
    if (pend) { pend = false; goto L_1808; }
    vflush(r.vf[4], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((2088u + sh) & 16383u));
    return;
L_1668: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 114u) + 12, 2); set_vi(i3, v); } }
L_1670: { ++fl.t; set_vi(i2, 0u + 32767u); }
L_1678: { ++fl.t; set_vi(i2, i2 + 1u); }
L_1680: { ++fl.t; set_vi(i2, i10 | i2); }
L_1688: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 0u) + 12, 2); set_vi(i1, v); } }
L_1690: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i2; std::memcpy(q + 0, &v, 4); } }
L_1698: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 2u) + 12, 2); set_vi(i3, v); } }
L_16A0: { ++fl.t; }
L_16A8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_16B0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 2u) + 12, 2); set_vi(i12, v); } }
L_16B8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 4u) + 12, 2); set_vi(i11, v); } }
L_16C0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_16C8: { ++fl.t; vkick_last(daz, 1, i3); }
    if (pendj) { pendj = false; vflush(r.vf[4], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_16D0: { ++fl.t; ending = true; }
L_16D8: { ++fl.t; }
    if (ending) { vflush(r.vf[4], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; r.tpc = ((5856u + sh) & 16383u); return; }
    vflush(r.vf[4], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((5856u + sh) & 16383u));
    return;
L_1708: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 31u); std::memcpy(&r.vf[1], q, 16); } n1 = vshadow(r.vf[1]); }
L_1710: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 26u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); } n2 = vshadow(r.vf[2]); }
L_1718: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_1720: { ++fl.t; set_vi(i10, 0u + 0u); }
L_1728: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); std::memcpy(q, &r.vf[1], 16); } }
L_1730: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 1u); const std::uint32_t v = i1; std::memcpy(q + 0, &v, 4); } }
L_1738: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 2u); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); std::memcpy(q + 12, &r.vf[2].w[3], 4); } }
L_1740: { ++fl.t; set_vi(i9, i12 + 2u); }
L_1748: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1750: { ++fl.t; set_vi(i12, i12 + 3u); }
    if (pendj) { pendj = false; vflush(r.vf[4], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
    vflush(r.vf[4], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((5976u + sh) & 16383u));
    return;
L_1808: { ++fl.t; set_vi(i6, i6 + i6); }
L_1810: { ++fl.t; set_vi(i6, i6 + i6); }
L_1818: { ++fl.t; set_vi(i3, 0u + 4096u); }
L_1820: { ++fl.t; pend = static_cast<std::int16_t>(i6) >= 0; }
L_1828: { ++fl.t; set_vi(i6, i6 + i6); }
    if (pend) { pend = false; goto L_1860; }
L_1830: { ++fl.t; set_vi(i15, (((6192u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1838: { ++fl.t; set_vi(i1, 0u + 4u); }
    if (pend) { pend = false; goto L_1708; }
L_1840: { ++fl.t; set_vi(i1, 0u + 1u); }
L_1848: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = i1; std::memcpy(q + 8, &v, 4); } }
L_1850: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = 0u; std::memcpy(q + 0, &v, 4); } }
L_1858: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = 0u; std::memcpy(q + 4, &v, 4); } }
L_1860: { ++fl.t; set_vi(i3, i6 & i3); }
L_1868: { ++fl.t; pend = static_cast<std::int16_t>(i6) >= 0; }
L_1870: { ++fl.t; set_vi(i6, i6 + i6); bi = 6u; }
    if (pend) { pend = false; goto L_1888; }
L_1878: { ++fl.t; set_vi(i15, (((6264u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1880: { ++fl.t; next_bk = i3; set_vi(i3, 0u + 512u); bk = next_bk; bi = 3u; }
    if (pend) { pend = false; goto L_16D0; }
L_1888: { ++fl.t; pend = 0u == (bi == 3 ? bk : i3); }
L_1890: { ++fl.t; { const std::uint8_t *q = qword(mem, i13 + 0u); std::memcpy(&r.vf[14], q, 16); } }
    if (pend) { pend = false; goto L_18C8; }
L_1898: { ++fl.t; pend = static_cast<std::int16_t>(i6) < 0; }
L_18A0: { ++fl.t; set_vi(i7, r.vf[17].w[3]); }
    if (pend) { pend = false; goto L_18E8; }
L_18A8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i5) * 8u) & 16383u; set_vi(i15, (((6312u + sh) & 16383u) + 16u) / 8u); pendj = true; }
L_18B0: { ++fl.t; set_vi(i6, i4 + 0u); }
    if (pendj) { pendj = false; vflush(r.vf[4], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_18B8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i6) * 8u) & 16383u; pendj = true; }
L_18C0: { ++fl.t; }
    if (pendj) { pendj = false; vflush(r.vf[4], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_18C8: { ++fl.t; pend = static_cast<std::int16_t>(i6) < 0; }
L_18D0: { ++fl.t; }
    if (pend) { pend = false; goto L_18E8; }
L_18D8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i4) * 8u) & 16383u; pendj = true; }
L_18E0: { ++fl.t; }
    if (pendj) { pendj = false; vflush(r.vf[4], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_18E8: { ++fl.t; pend = true; }
L_18F0: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
    if (pend) { pend = false; goto L_01F8; }
    vflush(r.vf[4], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((6392u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, jpc);
    return;
}
static __attribute__((noinline, cold)) void vu1_09CF90EDB7FE2257_c(Vu0Regs &r, std::uint8_t *mem, VuDaz &daz, std::uint32_t &hop) { vu1_09CF90EDB7FE2257_b<true>(r, mem, daz, hop); }
void vu1_09CF90EDB7FE2257(Vu0Regs &r, std::uint8_t *mem) {
    std::uint32_t hop = kNoHop;
    {
        VuDaz daz;
        if ((r.status & 0xC0u) == 0xC0u) vu1_09CF90EDB7FE2257_b<false>(r, mem, daz, hop);
        else vu1_09CF90EDB7FE2257_c(r, mem, daz, hop);
    }
    if (hop != kNoHop) vu::interpret(1, hop);
}

template <bool kSticky>
static void vu1_36696CB36EB54D6D_s(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 208u) & 16383u;
    (void)sh;
    v4u n1 = vshadow_eager(r.vf[1]);
    v4u n2 = vshadow_eager(r.vf[2]);
    v4u n3 = vshadow_eager(r.vf[3]);
    v4u n5 = vshadow_eager(r.vf[5]);
    v4u n6 = vshadow_eager(r.vf[6]);
    v4u n7 = vshadow_eager(r.vf[7]);
    v4u nacc = vshadow_eager(r.acc);
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i3 = r.vi[3];
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i5 = r.vi[5];
    std::uint16_t i8 = r.vi[8];
    std::uint16_t i9 = r.vi[9];
    std::uint16_t i10 = r.vi[10];
    std::uint16_t i12 = r.vi[12];
    std::uint16_t i15 = r.vi[15];
    goto L_00D0;
L_00D0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_00D8: { ++fl.t; set_vi(i1, 0u + 26u); }
L_00E0: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(0u))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } }
L_00E8: { ++fl.t; set_vi(i15, (((232u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_00F0: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
    if (pend) { pend = false; goto L_1638; }
L_00F8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 12, 2); set_vi(i8, v); } }
L_0100: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0108: { ++fl.t; set_vi(i15, (((264u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0110: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 4, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0A68; }
L_0118: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0120: { ++fl.t; set_vi(i15, (((288u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0128: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_0E20; }
L_0130: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0138: { ++fl.t; set_vi(i15, (((312u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0140: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 37u) + 0, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0D78; }
L_0148: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0150: { ++fl.t; set_vi(i15, (((336u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0158: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_1238; }
L_0160: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0168: { ++fl.t; set_vi(i15, (((360u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0170: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_0F70; }
L_0178: { ++fl.t; set_vi(i1, 0u + 66u); }
L_0180: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 45u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } }
L_0188: { ++fl.t; set_vi(i15, (((392u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0190: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
    if (pend) { pend = false; goto L_1638; }
L_0198: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 66u); std::memcpy(&r.vf[18], q, 16); } }
L_01A0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 67u); std::memcpy(&r.vf[19], q, 16); } }
L_01A8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 68u); std::memcpy(&r.vf[20], q, 16); } }
L_01B0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 69u); std::memcpy(&r.vf[21], q, 16); } }
L_01B8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 70u); std::memcpy(&r.vf[22], q, 16); } }
L_01C0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 71u); std::memcpy(&r.vf[23], q, 16); } }
L_01C8: { ++fl.t; ending = true; }
L_01D0: { ++fl.t; }
    if (ending) { fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; r.tpc = ((472u + sh) & 16383u); return; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((472u + sh) & 16383u));
    return;
L_0A68: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0u)); set_vi(i1, 0u + 8u); vstore(r.vf[3], uv); n3 = vshadow_eager(r.vf[3]); }
L_0A70: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i1, i5 & i1); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n5 = vshadow_eager(r.vf[5]); }
L_0A78: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, v4u{0u, 0u, 0u, 0x3F800000u}); { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 8, 2); set_vi(i2, v); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n5 = vshadow_eager(r.vf[5]); }
L_0A80: { ++fl.t; pend = 0u == i1; }
L_0A88: { ++fl.t; set_vi(i3, 0u + 3u); }
    if (pend) { pend = false; goto L_0A98; }
L_0A90: { ++fl.t; set_vi(i4, 0u + i2); }
L_0A98: { ++fl.t; set_vi(i1, 0u + 8u); }
L_0AA0: { ++fl.t; set_vi(i1, i4 & i1); }
L_0AA8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 37u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } n1 = vshadow_eager(r.vf[1]); }
L_0AB0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 139u); std::memcpy(&r.vf[6], q, 16); } n6 = vshadow_eager(r.vf[6]); }
L_0AB8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 140u); std::memcpy(&r.vf[7], q, 16); } n7 = vshadow_eager(r.vf[7]); }
L_0AC0: { ++fl.t; pend = 0u == i1; }
L_0AC8: { ++fl.t; set_vi(i2, 0u + 4u); }
    if (pend) { pend = false; goto L_0AD8; }
L_0AD0: { ++fl.t; const v4u uv = vaddn(n1, n1); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0AD8: { ++fl.t; const v4u uv = (v4u)((v4f)n5 + (v4f)vsplat(0x3F800000u)); set_vi(i5, i4 & i3); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0AE0: { ++fl.t; set_vi(i4, i4 & i2); }
L_0AE8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 124u) + 12, 2); set_vi(i1, v); } }
L_0AF0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 138u); std::memcpy(q + 12, &r.vf[1].w[3], 4); } }
L_0AF8: { ++fl.t; pend = 0u == i5; }
L_0B00: { ++fl.t; set_vi(i5, i5 - 1u); }
    if (pend) { pend = false; goto L_0B48; }
L_0B08: { ++fl.t; r.i = 1124073472u; }
L_0B10: { ++fl.t; pend = 0u == i5; }
L_0B18: { ++fl.t; }
    if (pend) { pend = false; goto L_0B70; }
L_0B20: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); set_vi(i2, 0u + 1u); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_0B28: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 16u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B30: { ++fl.t; set_vi(i1, i1 | i3); }
L_0B38: { ++fl.t; pend = true; }
L_0B40: { ++fl.t; set_vi(i3, 0u + 1u); }
    if (pend) { pend = false; goto L_0B98; }
L_0B48: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); r.i = 1132396544u; vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B50: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 32751u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B58: { ++fl.t; set_vi(i1, i1 & i3); }
L_0B60: { ++fl.t; pend = true; }
L_0B68: { ++fl.t; set_vi(i3, 0u + 0u); }
    if (pend) { pend = false; goto L_0B98; }
L_0B70: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); set_vi(i2, 0u + 0u); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B78: { ++fl.t; r.i = 1124073472u; }
L_0B80: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 16u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B88: { ++fl.t; set_vi(i1, i1 | i3); }
L_0B90: { ++fl.t; set_vi(i3, 0u + 1u); }
L_0B98: { ++fl.t; pend = 0u == i4; }
L_0BA0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 134u); const std::uint32_t v = i3; std::memcpy(q + 8, &v, 4); } }
    if (pend) { pend = false; goto L_0BB8; }
L_0BA8: { ++fl.t; r.i = 1073676288u; }
L_0BB0: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vfix(vsplat(r.i))); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0BB8: { ++fl.t; set_vi(i3, 0u + 27u); }
L_0BC0: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(r.vf[1].w[0])); { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n2 = vshadow_eager(r.vf[2]); }
L_0BC8: { ++fl.t; const v4u uv = vmuln(n6, vsplat(n1[3])); { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i3))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0BD0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0BD8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 132u); const std::uint32_t v = i2; std::memcpy(q + 12, &v, 4); } }
L_0BE0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 112u); std::memcpy(q + 0, &r.vf[3].w[0], 4); std::memcpy(q + 4, &r.vf[3].w[1], 4); } }
L_0BE8: { ++fl.t; const v4u uv = vmuln(n7, n6); { std::uint8_t *q = qword(mem, 0u + 137u); std::memcpy(q + 12, &r.vf[5].w[3], 4); } vstore(r.vf[7], uv); fl.push_last<15u, kSticky>(uv); n7 = uv; }
L_0BF0: { ++fl.t; set_vi(i2, i15 + 0u); }
L_0BF8: { ++fl.t; set_vi(i15, (((3064u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0C00: { ++fl.t; }
    if (pend) { pend = false; goto L_1638; }
L_0C08: { ++fl.t; set_vi(i15, i2 + 0u); }
L_0C10: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 133u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
L_0C18: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 143u); std::memcpy(q, &r.vf[7], 16); } }
L_0C20: { ++fl.t; pend = true; }
L_0C28: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 125u) + 12, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0FA8; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((3120u + sh) & 16383u));
    return;
L_0D78: { ++fl.t; set_vi(i1, 0u + 16u); }
L_0D80: { ++fl.t; set_vi(i1, i5 & i1); }
L_0D88: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 12, 2); set_vi(i2, v); } }
L_0D90: { ++fl.t; pend = 0u == i1; }
L_0D98: { ++fl.t; }
    if (pend) { pend = false; goto L_0DB0; }
L_0DA0: { ++fl.t; set_vi(i4, 0u + i2); }
L_0DA8: { ++fl.t; }
L_0DB0: { ++fl.t; pend = 0u == i4; }
L_0DB8: { ++fl.t; set_vi(i4, i4 - 1u); }
    if (pend) { pend = false; goto L_0E08; }
L_0DC0: { ++fl.t; set_vi(i1, 0u + 16384u); }
L_0DC8: { ++fl.t; pend = 0u == i4; }
L_0DD0: { ++fl.t; }
    if (pend) { pend = false; goto L_0DF0; }
L_0DD8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0DE0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0DE8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0DF0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0DF8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0E00: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0E08: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0E10: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0E18: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0E20: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 8, 2); set_vi(i3, v); } }
L_0E28: { ++fl.t; set_vi(i2, 0u + 27u); }
L_0E30: { ++fl.t; pend = 0u != i4; }
L_0E38: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 124u) + 12, 2); set_vi(i1, v); } }
    if (pend) { pend = false; goto L_0E50; }
L_0E40: { ++fl.t; pend = 0u != i3; }
L_0E48: { ++fl.t; }
    if (pend) { pend = false; goto L_0E68; }
L_0E50: { ++fl.t; set_vi(i3, 0u + 32735u); }
L_0E58: { ++fl.t; pend = true; }
L_0E60: { ++fl.t; set_vi(i1, i1 & i3); }
    if (pend) { pend = false; goto L_0E78; }
L_0E68: { ++fl.t; set_vi(i3, 0u + 32u); }
L_0E70: { ++fl.t; set_vi(i1, i1 | i3); }
L_0E78: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } }
L_0E80: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i2))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
L_0E88: { ++fl.t; pend = true; }
L_0E90: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
    if (pend) { pend = false; goto L_1638; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((3736u + sh) & 16383u));
    return;
L_0F70: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i1, 0u + 4u); vstore(r.vf[1], uv); n1 = vshadow_eager(r.vf[1]); }
L_0F78: { ++fl.t; set_vi(i1, i5 & i1); }
L_0F80: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 4, 2); set_vi(i2, v); } }
L_0F88: { ++fl.t; pend = 0u == i1; }
L_0F90: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 145u); std::memcpy(q + 0, &r.vf[1].w[0], 4); } }
    if (pend) { pend = false; goto L_0FA0; }
L_0F98: { ++fl.t; set_vi(i4, 0u + i2); }
L_0FA0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 125u); const std::uint32_t v = i4; std::memcpy(q + 12, &v, 4); } }
L_0FA8: { ++fl.t; const v4u uv = vmin(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0u)); { const std::uint8_t *q = qword(mem, 0u + 138u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[4], uv); n3 = vshadow_eager(r.vf[3]); }
L_0FB0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 141u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n3 = vshadow_eager(r.vf[3]); }
L_0FB8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 64u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow_eager(r.vf[1]); }
L_0FC0: { ++fl.t; pend = 0u != i4; }
L_0FC8: { ++fl.t; const v4u uv = vmuln(n3, vsplat(n3[3])); { const std::uint8_t *q = qword(mem, 0u + 142u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vshadow_eager(r.vf[2]); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; goto L_0FE8; }
L_0FD0: { ++fl.t; const v4u uv = vmuln(n1, n3); { std::uint8_t *q = qword(mem, 0u + 145u); std::memcpy(q + 0, &r.vf[0].w[0], 4); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); }
L_0FD8: { ++fl.t; const v4u uv = vmuln(n1, n3); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0FE0: { ++fl.t; const v4u uv = vaddn(nacc, (v4u)((v4f)n2 * (v4f)vsplat(0x3F800000u))); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0FE8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 138u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); std::memcpy(q + 8, &r.vf[4].w[2], 4); } }
L_0FF0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0FF8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 137u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((4096u + sh) & 16383u));
    return;
L_1238: { ++fl.t; set_vi(i1, 0u + 32u); }
L_1240: { ++fl.t; set_vi(i1, i5 & i1); }
L_1248: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 47u) + 0, 2); set_vi(i2, v); } }
L_1250: { ++fl.t; pend = 0u == i1; }
L_1258: { ++fl.t; }
    if (pend) { pend = false; goto L_1270; }
L_1260: { ++fl.t; set_vi(i4, 0u + i2); }
L_1268: { ++fl.t; }
L_1270: { ++fl.t; pend = 0u != i4; }
L_1278: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 33u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } }
    if (pend) { pend = false; goto L_1290; }
L_1280: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1288: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 136u); std::memcpy(q + 0, &r.vf[0].w[0], 4); std::memcpy(q + 4, &r.vf[0].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_1290: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1298: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 136u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((4768u + sh) & 16383u));
    return;
L_1638: { ++fl.t; set_vi(i10, 0u + 1u); }
L_1640: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_1648: { ++fl.t; set_vi(i9, 0u + i12); }
L_1650: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_1658: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1660: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q, &r.vf[4], 16); set_vi(i12, i12 + 1u); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((5736u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

static __attribute__((noinline, cold)) void vu1_36696CB36EB54D6D_c(Vu0Regs &r, std::uint8_t *mem) { vu1_36696CB36EB54D6D_s<true>(r, mem); }

void vu1_36696CB36EB54D6D(Vu0Regs &r, std::uint8_t *mem) {
    if ((r.status & 0xC0u) == 0xC0u) vu1_36696CB36EB54D6D_s<false>(r, mem);
    else vu1_36696CB36EB54D6D_c(r, mem);
}

template <bool kSticky>
PS2_VU_BODY void vu1_3FA33CCA70A0C081_b(Vu0Regs &r, std::uint8_t *mem, VuDaz &daz, std::uint32_t &hop) {
    (void)daz;
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 1312u) & 16383u;
    (void)sh;
    std::uint16_t bk = 0, next_bk = 0;
    unsigned bi = 0;
    (void)bk;
    (void)next_bk;
    (void)bi;
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
    v4u n26 = vshadow(r.vf[26]);
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
    std::uint16_t i7 = r.vi[7];
    std::uint16_t i8 = r.vi[8];
    std::uint16_t i9 = r.vi[9];
    std::uint16_t i10 = r.vi[10];
    std::uint16_t i11 = r.vi[11];
    std::uint16_t i12 = r.vi[12];
    std::uint16_t i13 = r.vi[13];
    std::uint16_t i15 = r.vi[15];
    goto L_0520;
L_01F8: { ++fl.t; set_vi(i1, 0u + 15u); }
L_0200: { ++fl.t; set_vi(i1, i8 & i1); }
L_0208: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1) + 4, 2); set_vi(i2, v); } }
L_0210: { fl.t += 4u; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; pendj = true; }
L_0218: { ++fl.t; }
    if (pendj) { pendj = false; vflush(r.vf[4], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
    vflush(r.vf[4], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((544u + sh) & 16383u));
    return;
L_0520: { ++fl.t; set_vi(i10, 0u + 0u); }
L_0528: { ++fl.t; set_vi(i9, i12 + 2u); }
L_0530: { ++fl.t; }
L_0538: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); std::memcpy(q, &r.vf[1], 16); } }
L_0540: { ++fl.t; set_vi(i12, i12 + 3u); }
L_0548: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); vefu(daz.csr, r, 115u, 26u, 2u); vstore(r.vf[5], uv); n5 = vshadow(r.vf[5]); }
L_0550: { ++fl.t; const v4u uv = vmuld(n18, n26); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0558: { ++fl.t; const v4u uv = vmuld(n20, n26); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[15].w[0], r.vf[27].w[2]); fl.end_q(r, qb, 7u); } vstore(r.vf[16], vsel(vload(r.vf[16]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n16 = vsel(n16, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0560: { ++fl.t; const v4u uv = vmuld(n22, n26); vstore(r.vf[17], vsel(vload(r.vf[17]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n17 = vsel(n17, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0568: { ++fl.t; }
L_0570: { ++fl.t; const v4u uv = vaddd(n1, vsplat(n1[1])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0578: { ++fl.t; const v4u uv = vmaddd(nacc, n5, vsplat(n1[2])); { const std::uint8_t *q = qword(mem, i13 + 5u); std::memcpy(&r.vf[3], q, 16); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vshadow(r.vf[3]); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0580: { ++fl.t; const v4u uv = vaddd(n16, vsplat(n16[0])); { const std::uint8_t *q = qword(mem, 0u + 38u); std::memcpy(&r.vf[7], q, 16); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n7 = vshadow(r.vf[7]); nacc = vsel(nacc, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_0588: { ++fl.t; const v4u uv = vmaddd(nacc, n5, vsplat(n16[2])); { const std::uint8_t *q = qword(mem, i13 + 2u); std::memcpy(&r.vf[16], q, 16); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n16 = vshadow(r.vf[16]); n6 = vsel(n6, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_0590: { ++fl.t; const v4u uv = vaddd(n17, vsplat(n17[0])); r.i = 998244352u; vstore(r.acc, vsel(vload(r.acc), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.stick<2u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_0598: { ++fl.t; const v4u uv = vmaddd(nacc, n5, vsplat(n17[1])); { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = 0u; std::memcpy(q + 8, &v, 4); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.stick<2u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_05A0: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vqd(r.q)); { const std::uint8_t *q = qword(mem, 0u + 143u); std::memcpy(&r.vf[4], q, 16); } vstore(r.vf[2], uv); fl.stick<15u, kSticky>(uv); n4 = vshadow(r.vf[4]); n2 = uv; }
L_05A8: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { const std::uint8_t *q = qword(mem, 0u + 142u); std::memcpy(&r.vf[1], q, 16); } vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n1 = vshadow(r.vf[1]); n27 = vsel(n27, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_05B0: { ++fl.t; const v4u uv = vmuld(n27, n7); { const std::uint8_t *q = qword(mem, 0u + 33u); std::memcpy(&r.vf[9], q, 16); } vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.stick<12u, kSticky>(uv); n9 = vshadow(r.vf[9]); n7 = vsel(n7, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_05B8: { ++fl.t; const v4u uv = vitof(vload(r.vf[3]), 15); { const std::uint8_t *q = qword(mem, 0u + 137u); vstore(r.vf[13], vsel(vload(r.vf[13]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[24], uv); n13 = vshadow(r.vf[13]); n24 = vshadow(r.vf[24]); }
L_05C0: { ++fl.t; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); const v4u uv = vmax(vload(r.vf[2]), vsplat(r.vf[7].w[3])); set_vi(i4, 0u + 16u); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n2 = vshadow(r.vf[2]); }
L_05C8: { ++fl.t; const v4u uv = vmuld(vswz<1, 2, 0, 3>(n13), vswz<2, 0, 1, 3>(n25)); { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 132u) + 12, 2); set_vi(i3, v); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_05D0: { ++fl.t; const v4u uv = vmsubd(nacc, vswz<1, 2, 0, 3>(n25), vswz<2, 0, 1, 3>(n13)); { const std::uint8_t *q = qword(mem, i13 + 4u); std::memcpy(&r.vf[17], q, 16); } vstore(r.vf[13], vsel(vload(r.vf[13]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n17 = vshadow(r.vf[17]); n13 = vsel(n13, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_05D8: { ++fl.t; const v4u uv = vmuld(n24, vfix(vsplat(r.i))); { const std::uint8_t *q = qword(mem, 0u + 135u); std::memcpy(&r.vf[11], q, 16); } vstore(r.vf[24], uv); fl.stick<15u, kSticky>(uv); n11 = vshadow(r.vf[11]); n24 = uv; }
L_05E0: { ++fl.t; const v4u uv = vmuld(n7, n2); { const std::uint8_t *q = qword(mem, 0u + 134u); std::memcpy(&r.vf[10], q, 16); } vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n10 = vshadow(r.vf[10]); n7 = vsel(n7, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_05E8: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vsplat(n9[2])); set_vi(i1, i8 & i4); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_05F0: { ++fl.t; const v4u uv = vmaddd(nacc, n9, vsplat(n27[2])); { const std::uint8_t *q = qword(mem, i1 + 15u); vstore(r.vf[7], vsel(vload(r.vf[7]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[16], vsel(vload(r.vf[16]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n7 = vshadow(r.vf[7]); n16 = vsel(n16, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_05F8: { ++fl.t; const v4u uv = vmuld(n13, n27); { const std::uint8_t *q = qword(mem, 0u + 136u); vstore(r.vf[8], vsel(vload(r.vf[8]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n8 = vshadow(r.vf[8]); n12 = vsel(n12, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0600: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n2[0])); { std::uint8_t *q = qword(mem, 0u + 112u); std::memcpy(q + 0, &r.vf[16].w[0], 4); std::memcpy(q + 4, &r.vf[16].w[1], 4); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.stick<2u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_0608: { ++fl.t; const v4u uv = vmuld(n17, vsplat(n24[0])); r.vf[24].w[3] = r.p; vstore(r.vf[13], vsel(vload(r.vf[13]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n24 = vshadow(r.vf[24]); n13 = vsel(n13, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0610: { ++fl.t; vflushd(r.vf[16], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); const v4u uv = vmax(vload(r.vf[16]), vsplat(r.vf[9].w[1])); set_vi(i5, 0u + 63u); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_0618: { ++fl.t; const v4u uv = vaddd(n12, vsplat(n12[1])); { const std::uint8_t *q = qword(mem, i13 + 3u); std::memcpy(&r.vf[16], q, 16); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n16 = vshadow(r.vf[16]); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0620: { ++fl.t; const v4u uv = vmaddd(nacc, n5, vsplat(n12[2])); set_vi(i2, r.vf[3].w[1]); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0628: { ++fl.t; const v4u uv = vmuld(n6, vsplat(n24[3])); vstore(r.vf[6], vsel(vload(r.vf[6]), vload(r.vf[0]), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n6 = vshadow(r.vf[6]); n12 = vsel(n12, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0630: { ++fl.t; const v4u uv = vmuld(n26, vsplat(n24[3])); set_vi(i6, 0u + 16384u); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0638: { ++fl.t; const v4u uv = vmin(vload(r.vf[3]), vsplat(r.vf[9].w[0])); set_vi(i1, i12 + 0u); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_0640: { ++fl.t; const v4u uv = vmuld(n7, vsplat(n3[0])); set_vi(i2, i2 & i5); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.push<1u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0648: { ++fl.t; vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vmax(vload(r.vf[12]), v4u{0u, 0u, 0u, 0x3F800000u}); { const std::uint8_t *q = qword(mem, 0u + 39u); vstore(r.vf[26], vsel(vload(r.vf[26]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n26 = vshadow(r.vf[26]); n6 = vshadow(r.vf[6]); }
L_0650: { ++fl.t; const v4u uv = vmuld(n5, n11); { const std::uint8_t *q = qword(mem, 0u + 145u); vstore(r.vf[5], vsel(vload(r.vf[5]), vload_ptr(q), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.push<12u, kSticky>(uv); n5 = vshadow(r.vf[5]); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_0658: { ++fl.t; const v4u uv = vaddd(nacc, (v4u)((v4f)n10 * (v4f)vsplat(0x3F800000u))); set_vi(i7, r.vf[3].w[2]); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.push<12u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_0660: { ++fl.t; const v4u uv = vftoi(vload(r.vf[3]), 4); set_vi(i4, (fl.mac() & 0xFFFFu) == i4 ? 1u : 0u); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n7 = vshadow(r.vf[7]); }
L_0668: { ++fl.t; const v4u uv = vmuld(n19, vsplat(n6[0])); { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 126u) + 12, 2); set_vi(i4, v); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0670: { ++fl.t; const v4u uv = vmaddd(nacc, n21, vsplat(n6[1])); { const std::uint8_t *q = qword(mem, i2 + 961u); std::memcpy(&r.vf[3], q, 16); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n3 = vshadow(r.vf[3]); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0678: { ++fl.t; vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); const v4u uv = vmaddd(nacc, n23, vsplat(n6[2])); { std::uint8_t *q = qword(mem, 0u + 113u); std::memcpy(q + 0, &r.vf[9].w[0], 4); std::memcpy(q + 4, &r.vf[9].w[1], 4); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0680: { ++fl.t; const v4u uv = vaddd(n7, n26); { const std::uint8_t *q = qword(mem, i3 + 112u); vstore(r.vf[11], vsel(vload(r.vf[11]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n11 = vshadow(r.vf[11]); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0688: { ++fl.t; const v4u uv = vmuld(n17, vsplat(n24[1])); set_vi(i8, i8 | i4); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0690: { ++fl.t; const v4u uv = vmuld(n16, vsplat(n24[0])); set_vi(i3, i6 & i8); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0698: { ++fl.t; vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vmax(vload(r.vf[6]), vsplat(r.vf[5].w[0])); set_vi(i4, i3 + i3); vstore(r.vf[10], uv); n10 = vshadow(r.vf[10]); }
L_06A0: { ++fl.t; const v4u uv = vaddd(n11, n8); set_vi(i6, r.vf[7].w[3]); vstore(r.vf[11], vsel(vload(r.vf[11]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.stick<12u, kSticky>(uv); n11 = vsel(n11, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_06A8: { ++fl.t; const v4u uv = vftoi(vload(r.vf[9]), 4); set_vi(i3, i7 & i5); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n5 = vshadow(r.vf[5]); }
L_06B0: { ++fl.t; const v4u uv = vmuld(n17, vsplat(n24[2])); { const std::uint8_t *q = qword(mem, 0u + 138u); vstore(r.vf[9], vsel(vload(r.vf[9]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n9 = vshadow(r.vf[9]); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_06B8: { ++fl.t; const v4u uv = vmuld(n4, n10); { const std::uint8_t *q = qword(mem, i13 + 1u); std::memcpy(&r.vf[10], q, 16); } vstore(r.vf[8], uv); fl.stick<15u, kSticky>(uv); n10 = vshadow(r.vf[10]); n8 = uv; }
L_06C0: { ++fl.t; const v4u uv = vmuld(n11, vsplat(n2[0])); set_vi(i4, i6 | i4); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.stick<12u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_06C8: { ++fl.t; const v4u uv = vmuld(n16, vsplat(n24[1])); { std::uint8_t *q = qword(mem, i1 + 2u); std::memcpy(q + 0, &r.vf[5].w[0], 4); std::memcpy(q + 4, &r.vf[5].w[1], 4); std::memcpy(q + 8, &r.vf[5].w[2], 4); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_06D0: { ++fl.t; const v4u uv = vmuld(n16, vsplat(n24[2])); { std::uint8_t *q = qword(mem, i1 + 2u); const std::uint32_t v = i4; std::memcpy(q + 12, &v, 4); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n4 = vsel(n4, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_06D8: { ++fl.t; const v4u uv = vmuld(n8, n10); { const std::uint8_t *q = qword(mem, i2 + 963u); std::memcpy(&r.vf[8], q, 16); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); n8 = vshadow(r.vf[8]); nacc = uv; }
L_06E0: { ++fl.t; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vmaddd(nacc, n9, n10); { std::uint8_t *q = qword(mem, i1 + 0u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_06E8: { ++fl.t; const v4u uv = vaddd(nacc, (v4u)((v4f)n1 * (v4f)vsplat(0x3F800000u))); set_vi(i12, i12 + 3u); vstore(r.vf[9], uv); fl.stick<15u, kSticky>(uv); n9 = uv; }
L_06F0: { ++fl.t; const v4u uv = vmuld(n28, vsplat(n13[0])); { const std::uint8_t *q = qword(mem, i2 + 960u); std::memcpy(&r.vf[1], q, 16); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); n1 = vshadow(r.vf[1]); nacc = uv; }
L_06F8: { ++fl.t; const v4u uv = vmaddd(nacc, n29, vsplat(n13[1])); set_vi(i10, i10 + 1u); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0700: { ++fl.t; const v4u uv = vmaddd(nacc, n30, vsplat(n13[2])); { const std::uint8_t *q = qword(mem, 0u + 133u); std::memcpy(&r.vf[10], q, 16); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); n10 = vshadow(r.vf[10]); nacc = uv; }
L_0708: { ++fl.t; vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vmin(vload(r.vf[9]), vsplat(r.vf[13].w[3])); set_vi(i13, i13 + 5u); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n9 = vshadow(r.vf[9]); }
L_0710: { ++fl.t; const v4u uv = vmaddd(nacc, n31, vsplat(n24[0])); { const std::uint8_t *q = qword(mem, i2 + 962u); std::memcpy(&r.vf[2], q, 16); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); n2 = vshadow(r.vf[2]); nacc = uv; }
L_0718: { ++fl.t; const v4u uv = vmaddd(nacc, n1, vsplat(n7[0])); vstore(r.vf[13], vsel(vload(r.vf[13]), vload(r.vf[25]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); n13 = vshadow(r.vf[13]); nacc = uv; }
L_0720: { ++fl.t; const v4u uv = vmaddd(nacc, n3, vsplat(n7[1])); { const std::uint8_t *q = qword(mem, i3 + 960u); std::memcpy(&r.vf[25], q, 16); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); n25 = vshadow(r.vf[25]); nacc = uv; }
L_0728: { ++fl.t; const v4u uv = vmuld(n9, n10); vstore(r.vf[10], uv); fl.stick<15u, kSticky>(uv); n10 = uv; }
L_0730: { ++fl.t; const v4u uv = vmaddd(nacc, n2, vsplat(n7[2])); { const std::uint8_t *q = qword(mem, i3 + 961u); std::memcpy(&r.vf[9], q, 16); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); n9 = vshadow(r.vf[9]); nacc = uv; }
L_0738: { ++fl.t; const v4u uv = vmaddd(nacc, n8, vsplat(n24[1])); { const std::uint8_t *q = qword(mem, i3 + 962u); std::memcpy(&r.vf[7], q, 16); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); n7 = vshadow(r.vf[7]); nacc = uv; }
L_0740: { ++fl.t; const v4u uv = vmaddd(nacc, n25, vsplat(n6[0])); { const std::uint8_t *q = qword(mem, i3 + 963u); std::memcpy(&r.vf[11], q, 16); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); n11 = vshadow(r.vf[11]); nacc = uv; }
L_0748: { ++fl.t; const v4u uv = vftoi(vload(r.vf[10]), 0); vstore(r.vf[8], uv); n8 = vshadow(r.vf[8]); }
L_0750: { ++fl.t; const v4u uv = vmaddd(nacc, n9, vsplat(n6[1])); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0758: { ++fl.t; const v4u uv = vmaddd(nacc, n7, vsplat(n6[2])); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0760: { ++fl.t; vflushd(r.vf[27], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); const v4u uv = vmaddd(nacc, n11, vsplat(n24[2])); vstore(r.vf[24], vsel(vload(r.vf[24]), vload(r.vf[27]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n24 = vshadow(r.vf[24]); n27 = vsel(n27, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0768: { ++fl.t; const v4u uv = vmuld(n28, vsplat(n26[0])); { std::uint8_t *q = qword(mem, i1 + 1u); std::memcpy(q, &r.vf[8], 16); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0770: { ++fl.t; const v4u uv = vmaddd(nacc, n29, vsplat(n26[1])); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0778: { ++fl.t; const v4u uv = vmaddd(nacc, n30, vsplat(n26[2])); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0780: { ++fl.t; const v4u uv = vmaddd(nacc, n1, vsplat(n5[0])); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0788: { ++fl.t; const v4u uv = vmaddd(nacc, n3, vsplat(n5[1])); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0790: { ++fl.t; const v4u uv = vmaddd(nacc, n2, vsplat(n5[2])); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0798: { ++fl.t; const v4u uv = vmaddd(nacc, n25, vsplat(n4[0])); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_07A0: { ++fl.t; const v4u uv = vsubd(n27, n24); vstore(r.vf[25], uv); fl.stick<15u, kSticky>(uv); n25 = uv; }
L_07A8: { ++fl.t; const v4u uv = vmaddd(nacc, n9, vsplat(n4[1])); vstore(r.acc, uv); fl.push<15u, kSticky>(uv); nacc = uv; }
L_07B0: { ++fl.t; const v4u uv = vmaddd(nacc, n7, vsplat(n4[2])); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_07B8: { ++fl.t; set_vi(i1, i11 - i12); }
L_07C0: { ++fl.t; set_vi(i6, i8 + 0u); }
L_07C8: { ++fl.t; pend = static_cast<std::int16_t>(i1) > 0; }
L_07D0: { ++fl.t; }
    if (pend) { pend = false; goto L_0800; }
L_07D8: { ++fl.t; set_vi(i15, (((2008u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_07E0: { ++fl.t; }
    if (pend) { pend = false; goto L_1668; }
L_07E8: { ++fl.t; set_vi(i10, 0u + 0u); }
L_07F0: { ++fl.t; set_vi(i9, 0u + i12); }
L_07F8: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_0800: { ++fl.t; pend = static_cast<std::int16_t>(i6) >= 0; }
L_0808: { ++fl.t; set_vi(i8, r.vf[16].w[3]); }
    if (pend) { pend = false; vflushd(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); goto L_0548; }
L_0810: { ++fl.t; set_vi(i5, 0u + 261u); }
L_0818: { ++fl.t; pend = true; }
L_0820: { ++fl.t; set_vi(i4, 0u + 169u); }
    if (pend) { pend = false; goto L_1808; }
    vflush(r.vf[4], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((2088u + sh) & 16383u));
    return;
L_1668: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 114u) + 12, 2); set_vi(i3, v); } }
L_1670: { ++fl.t; set_vi(i2, 0u + 32767u); }
L_1678: { ++fl.t; set_vi(i2, i2 + 1u); }
L_1680: { ++fl.t; set_vi(i2, i10 | i2); }
L_1688: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 0u) + 12, 2); set_vi(i1, v); } }
L_1690: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i2; std::memcpy(q + 0, &v, 4); } }
L_1698: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 2u) + 12, 2); set_vi(i3, v); } }
L_16A0: { ++fl.t; }
L_16A8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_16B0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 2u) + 12, 2); set_vi(i12, v); } }
L_16B8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 4u) + 12, 2); set_vi(i11, v); } }
L_16C0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_16C8: { ++fl.t; vkick_last(daz, 1, i3); }
    if (pendj) { pendj = false; vflush(r.vf[4], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_16D0: { ++fl.t; ending = true; }
L_16D8: { ++fl.t; }
    if (ending) { vflush(r.vf[4], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; r.tpc = ((5856u + sh) & 16383u); return; }
    vflush(r.vf[4], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((5856u + sh) & 16383u));
    return;
L_1708: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 31u); std::memcpy(&r.vf[1], q, 16); } n1 = vshadow(r.vf[1]); }
L_1710: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 26u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); } n2 = vshadow(r.vf[2]); }
L_1718: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_1720: { ++fl.t; set_vi(i10, 0u + 0u); }
L_1728: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); std::memcpy(q, &r.vf[1], 16); } }
L_1730: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 1u); const std::uint32_t v = i1; std::memcpy(q + 0, &v, 4); } }
L_1738: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 2u); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); std::memcpy(q + 12, &r.vf[2].w[3], 4); } }
L_1740: { ++fl.t; set_vi(i9, i12 + 2u); }
L_1748: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1750: { ++fl.t; set_vi(i12, i12 + 3u); }
    if (pendj) { pendj = false; vflush(r.vf[4], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
    vflush(r.vf[4], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((5976u + sh) & 16383u));
    return;
L_1808: { ++fl.t; set_vi(i6, i6 + i6); }
L_1810: { ++fl.t; set_vi(i6, i6 + i6); }
L_1818: { ++fl.t; set_vi(i3, 0u + 4096u); }
L_1820: { ++fl.t; pend = static_cast<std::int16_t>(i6) >= 0; }
L_1828: { ++fl.t; set_vi(i6, i6 + i6); }
    if (pend) { pend = false; goto L_1860; }
L_1830: { ++fl.t; set_vi(i15, (((6192u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1838: { ++fl.t; set_vi(i1, 0u + 4u); }
    if (pend) { pend = false; goto L_1708; }
L_1840: { ++fl.t; set_vi(i1, 0u + 1u); }
L_1848: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = i1; std::memcpy(q + 8, &v, 4); } }
L_1850: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = 0u; std::memcpy(q + 0, &v, 4); } }
L_1858: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = 0u; std::memcpy(q + 4, &v, 4); } }
L_1860: { ++fl.t; set_vi(i3, i6 & i3); }
L_1868: { ++fl.t; pend = static_cast<std::int16_t>(i6) >= 0; }
L_1870: { ++fl.t; set_vi(i6, i6 + i6); bi = 6u; }
    if (pend) { pend = false; goto L_1888; }
L_1878: { ++fl.t; set_vi(i15, (((6264u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1880: { ++fl.t; next_bk = i3; set_vi(i3, 0u + 512u); bk = next_bk; bi = 3u; }
    if (pend) { pend = false; goto L_16D0; }
L_1888: { ++fl.t; pend = 0u == (bi == 3 ? bk : i3); }
L_1890: { ++fl.t; { const std::uint8_t *q = qword(mem, i13 + 0u); std::memcpy(&r.vf[14], q, 16); } }
    if (pend) { pend = false; goto L_18C8; }
L_1898: { ++fl.t; pend = static_cast<std::int16_t>(i6) < 0; }
L_18A0: { ++fl.t; set_vi(i7, r.vf[17].w[3]); }
    if (pend) { pend = false; goto L_18E8; }
L_18A8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i5) * 8u) & 16383u; set_vi(i15, (((6312u + sh) & 16383u) + 16u) / 8u); pendj = true; }
L_18B0: { ++fl.t; set_vi(i6, i4 + 0u); }
    if (pendj) { pendj = false; vflush(r.vf[4], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_18B8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i6) * 8u) & 16383u; pendj = true; }
L_18C0: { ++fl.t; }
    if (pendj) { pendj = false; vflush(r.vf[4], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_18C8: { ++fl.t; pend = static_cast<std::int16_t>(i6) < 0; }
L_18D0: { ++fl.t; }
    if (pend) { pend = false; goto L_18E8; }
L_18D8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i4) * 8u) & 16383u; pendj = true; }
L_18E0: { ++fl.t; }
    if (pendj) { pendj = false; vflush(r.vf[4], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_18E8: { ++fl.t; pend = true; }
L_18F0: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
    if (pend) { pend = false; goto L_01F8; }
    vflush(r.vf[4], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((6392u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, jpc);
    return;
}
static __attribute__((noinline, cold)) void vu1_3FA33CCA70A0C081_c(Vu0Regs &r, std::uint8_t *mem, VuDaz &daz, std::uint32_t &hop) { vu1_3FA33CCA70A0C081_b<true>(r, mem, daz, hop); }
void vu1_3FA33CCA70A0C081(Vu0Regs &r, std::uint8_t *mem) {
    std::uint32_t hop = kNoHop;
    {
        VuDaz daz;
        if ((r.status & 0xC0u) == 0xC0u) vu1_3FA33CCA70A0C081_b<false>(r, mem, daz, hop);
        else vu1_3FA33CCA70A0C081_c(r, mem, daz, hop);
    }
    if (hop != kNoHop) vu::interpret(1, hop);
}

template <bool kSticky>
PS2_VU_BODY void vu1_657090AEA687D22F_b(Vu0Regs &r, std::uint8_t *mem, VuDaz &daz, std::uint32_t &hop) {
    (void)daz;
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 1344u) & 16383u;
    (void)sh;
    std::uint16_t bk = 0, next_bk = 0;
    unsigned bi = 0;
    (void)bk;
    (void)next_bk;
    (void)bi;
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
    v4u n26 = vshadow(r.vf[26]);
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
    std::uint16_t i7 = r.vi[7];
    std::uint16_t i8 = r.vi[8];
    std::uint16_t i9 = r.vi[9];
    std::uint16_t i10 = r.vi[10];
    std::uint16_t i11 = r.vi[11];
    std::uint16_t i12 = r.vi[12];
    std::uint16_t i13 = r.vi[13];
    std::uint16_t i15 = r.vi[15];
    goto L_0540;
L_01F8: { ++fl.t; set_vi(i1, 0u + 15u); }
L_0200: { ++fl.t; set_vi(i1, i8 & i1); }
L_0208: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1) + 4, 2); set_vi(i2, v); } }
L_0210: { fl.t += 4u; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; pendj = true; }
L_0218: { ++fl.t; }
    if (pendj) { pendj = false; vflush(r.vf[4], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
    vflush(r.vf[4], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((544u + sh) & 16383u));
    return;
L_0540: { ++fl.t; set_vi(i12, i12 + 3u); }
L_0548: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); vefu(daz.csr, r, 115u, 26u, 2u); vstore(r.vf[5], uv); n5 = vshadow(r.vf[5]); }
L_0550: { ++fl.t; const v4u uv = vmuld(n18, n26); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0558: { ++fl.t; const v4u uv = vmuld(n20, n26); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[15].w[0], r.vf[27].w[2]); fl.end_q(r, qb, 7u); } vstore(r.vf[16], vsel(vload(r.vf[16]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n16 = vsel(n16, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0560: { ++fl.t; const v4u uv = vmuld(n22, n26); vstore(r.vf[17], vsel(vload(r.vf[17]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n17 = vsel(n17, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0568: { ++fl.t; }
L_0570: { ++fl.t; const v4u uv = vaddd(n1, vsplat(n1[1])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0578: { ++fl.t; const v4u uv = vmaddd(nacc, n5, vsplat(n1[2])); { const std::uint8_t *q = qword(mem, i13 + 5u); std::memcpy(&r.vf[3], q, 16); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vshadow(r.vf[3]); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0580: { ++fl.t; const v4u uv = vaddd(n16, vsplat(n16[0])); { const std::uint8_t *q = qword(mem, 0u + 38u); std::memcpy(&r.vf[7], q, 16); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n7 = vshadow(r.vf[7]); nacc = vsel(nacc, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_0588: { ++fl.t; const v4u uv = vmaddd(nacc, n5, vsplat(n16[2])); { const std::uint8_t *q = qword(mem, i13 + 2u); std::memcpy(&r.vf[16], q, 16); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n16 = vshadow(r.vf[16]); n6 = vsel(n6, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_0590: { ++fl.t; const v4u uv = vaddd(n17, vsplat(n17[0])); r.i = 998244352u; vstore(r.acc, vsel(vload(r.acc), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.stick<2u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_0598: { ++fl.t; const v4u uv = vmaddd(nacc, n5, vsplat(n17[1])); { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = 0u; std::memcpy(q + 8, &v, 4); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.stick<2u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_05A0: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vqd(r.q)); { const std::uint8_t *q = qword(mem, 0u + 143u); std::memcpy(&r.vf[4], q, 16); } vstore(r.vf[2], uv); fl.stick<15u, kSticky>(uv); n4 = vshadow(r.vf[4]); n2 = uv; }
L_05A8: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { const std::uint8_t *q = qword(mem, 0u + 142u); std::memcpy(&r.vf[1], q, 16); } vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n1 = vshadow(r.vf[1]); n27 = vsel(n27, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_05B0: { ++fl.t; const v4u uv = vmuld(n27, n7); { const std::uint8_t *q = qword(mem, 0u + 33u); std::memcpy(&r.vf[9], q, 16); } vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.stick<12u, kSticky>(uv); n9 = vshadow(r.vf[9]); n7 = vsel(n7, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_05B8: { ++fl.t; const v4u uv = vitof(vload(r.vf[3]), 15); { const std::uint8_t *q = qword(mem, 0u + 137u); vstore(r.vf[13], vsel(vload(r.vf[13]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[24], uv); n13 = vshadow(r.vf[13]); n24 = vshadow(r.vf[24]); }
L_05C0: { ++fl.t; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); const v4u uv = vmax(vload(r.vf[2]), vsplat(r.vf[7].w[3])); set_vi(i4, 0u + 16u); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n2 = vshadow(r.vf[2]); }
L_05C8: { ++fl.t; const v4u uv = vmuld(vswz<1, 2, 0, 3>(n13), vswz<2, 0, 1, 3>(n25)); { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 132u) + 12, 2); set_vi(i3, v); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_05D0: { ++fl.t; const v4u uv = vmsubd(nacc, vswz<1, 2, 0, 3>(n25), vswz<2, 0, 1, 3>(n13)); { const std::uint8_t *q = qword(mem, i13 + 4u); std::memcpy(&r.vf[17], q, 16); } vstore(r.vf[13], vsel(vload(r.vf[13]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n17 = vshadow(r.vf[17]); n13 = vsel(n13, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_05D8: { ++fl.t; const v4u uv = vmuld(n24, vfix(vsplat(r.i))); { const std::uint8_t *q = qword(mem, 0u + 135u); std::memcpy(&r.vf[11], q, 16); } vstore(r.vf[24], uv); fl.stick<15u, kSticky>(uv); n11 = vshadow(r.vf[11]); n24 = uv; }
L_05E0: { ++fl.t; const v4u uv = vmuld(n7, n2); { const std::uint8_t *q = qword(mem, 0u + 134u); std::memcpy(&r.vf[10], q, 16); } vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n10 = vshadow(r.vf[10]); n7 = vsel(n7, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_05E8: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vsplat(n9[2])); set_vi(i1, i8 & i4); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_05F0: { ++fl.t; const v4u uv = vmaddd(nacc, n9, vsplat(n27[2])); { const std::uint8_t *q = qword(mem, i1 + 15u); vstore(r.vf[7], vsel(vload(r.vf[7]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[16], vsel(vload(r.vf[16]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n7 = vshadow(r.vf[7]); n16 = vsel(n16, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_05F8: { ++fl.t; const v4u uv = vmuld(n13, n27); { const std::uint8_t *q = qword(mem, 0u + 136u); vstore(r.vf[8], vsel(vload(r.vf[8]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n8 = vshadow(r.vf[8]); n12 = vsel(n12, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0600: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n2[0])); { std::uint8_t *q = qword(mem, 0u + 112u); std::memcpy(q + 0, &r.vf[16].w[0], 4); std::memcpy(q + 4, &r.vf[16].w[1], 4); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.stick<2u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_0608: { ++fl.t; const v4u uv = vmuld(n17, vsplat(n24[0])); r.vf[24].w[3] = r.p; vstore(r.vf[13], vsel(vload(r.vf[13]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n24 = vshadow(r.vf[24]); n13 = vsel(n13, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0610: { ++fl.t; vflushd(r.vf[16], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); const v4u uv = vmax(vload(r.vf[16]), vsplat(r.vf[9].w[1])); set_vi(i5, 0u + 63u); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_0618: { ++fl.t; const v4u uv = vaddd(n12, vsplat(n12[1])); { const std::uint8_t *q = qword(mem, i13 + 3u); std::memcpy(&r.vf[16], q, 16); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n16 = vshadow(r.vf[16]); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0620: { ++fl.t; const v4u uv = vmaddd(nacc, n5, vsplat(n12[2])); set_vi(i2, r.vf[3].w[1]); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0628: { ++fl.t; const v4u uv = vmuld(n6, vsplat(n24[3])); vstore(r.vf[6], vsel(vload(r.vf[6]), vload(r.vf[0]), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n6 = vshadow(r.vf[6]); n12 = vsel(n12, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0630: { ++fl.t; const v4u uv = vmuld(n26, vsplat(n24[3])); set_vi(i6, 0u + 16384u); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0638: { ++fl.t; const v4u uv = vmin(vload(r.vf[3]), vsplat(r.vf[9].w[0])); set_vi(i1, i12 + 0u); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_0640: { ++fl.t; const v4u uv = vmuld(n7, vsplat(n3[0])); set_vi(i2, i2 & i5); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.push<1u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0648: { ++fl.t; vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vmax(vload(r.vf[12]), v4u{0u, 0u, 0u, 0x3F800000u}); { const std::uint8_t *q = qword(mem, 0u + 39u); vstore(r.vf[26], vsel(vload(r.vf[26]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n26 = vshadow(r.vf[26]); n6 = vshadow(r.vf[6]); }
L_0650: { ++fl.t; const v4u uv = vmuld(n5, n11); { const std::uint8_t *q = qword(mem, 0u + 145u); vstore(r.vf[5], vsel(vload(r.vf[5]), vload_ptr(q), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.push<12u, kSticky>(uv); n5 = vshadow(r.vf[5]); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_0658: { ++fl.t; const v4u uv = vaddd(nacc, (v4u)((v4f)n10 * (v4f)vsplat(0x3F800000u))); set_vi(i7, r.vf[3].w[2]); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.push<12u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_0660: { ++fl.t; const v4u uv = vftoi(vload(r.vf[3]), 4); set_vi(i4, (fl.mac() & 0xFFFFu) == i4 ? 1u : 0u); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n7 = vshadow(r.vf[7]); }
L_0668: { ++fl.t; const v4u uv = vmuld(n19, vsplat(n6[0])); { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 126u) + 12, 2); set_vi(i4, v); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0670: { ++fl.t; const v4u uv = vmaddd(nacc, n21, vsplat(n6[1])); { const std::uint8_t *q = qword(mem, i2 + 961u); std::memcpy(&r.vf[3], q, 16); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n3 = vshadow(r.vf[3]); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0678: { ++fl.t; vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); const v4u uv = vmaddd(nacc, n23, vsplat(n6[2])); { std::uint8_t *q = qword(mem, 0u + 113u); std::memcpy(q + 0, &r.vf[9].w[0], 4); std::memcpy(q + 4, &r.vf[9].w[1], 4); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0680: { ++fl.t; const v4u uv = vaddd(n7, n26); { const std::uint8_t *q = qword(mem, i3 + 112u); vstore(r.vf[11], vsel(vload(r.vf[11]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n11 = vshadow(r.vf[11]); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0688: { ++fl.t; const v4u uv = vmuld(n17, vsplat(n24[1])); set_vi(i8, i8 | i4); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0690: { ++fl.t; const v4u uv = vmuld(n16, vsplat(n24[0])); set_vi(i3, i6 & i8); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0698: { ++fl.t; vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vmax(vload(r.vf[6]), vsplat(r.vf[5].w[0])); set_vi(i4, i3 + i3); vstore(r.vf[10], uv); n10 = vshadow(r.vf[10]); }
L_06A0: { ++fl.t; const v4u uv = vaddd(n11, n8); set_vi(i6, r.vf[7].w[3]); vstore(r.vf[11], vsel(vload(r.vf[11]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.stick<12u, kSticky>(uv); n11 = vsel(n11, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_06A8: { ++fl.t; const v4u uv = vftoi(vload(r.vf[9]), 4); set_vi(i3, i7 & i5); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n5 = vshadow(r.vf[5]); }
L_06B0: { ++fl.t; const v4u uv = vmuld(n17, vsplat(n24[2])); { const std::uint8_t *q = qword(mem, 0u + 138u); vstore(r.vf[9], vsel(vload(r.vf[9]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n9 = vshadow(r.vf[9]); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_06B8: { ++fl.t; const v4u uv = vmuld(n4, n10); { const std::uint8_t *q = qword(mem, i13 + 1u); std::memcpy(&r.vf[10], q, 16); } vstore(r.vf[8], uv); fl.stick<15u, kSticky>(uv); n10 = vshadow(r.vf[10]); n8 = uv; }
L_06C0: { ++fl.t; const v4u uv = vmuld(n11, vsplat(n2[0])); set_vi(i4, i6 | i4); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.stick<12u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_06C8: { ++fl.t; const v4u uv = vmuld(n16, vsplat(n24[1])); { std::uint8_t *q = qword(mem, i1 + 2u); std::memcpy(q + 0, &r.vf[5].w[0], 4); std::memcpy(q + 4, &r.vf[5].w[1], 4); std::memcpy(q + 8, &r.vf[5].w[2], 4); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_06D0: { ++fl.t; const v4u uv = vmuld(n16, vsplat(n24[2])); { std::uint8_t *q = qword(mem, i1 + 2u); const std::uint32_t v = i4; std::memcpy(q + 12, &v, 4); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n4 = vsel(n4, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_06D8: { ++fl.t; const v4u uv = vmuld(n8, n10); { const std::uint8_t *q = qword(mem, i2 + 963u); std::memcpy(&r.vf[8], q, 16); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); n8 = vshadow(r.vf[8]); nacc = uv; }
L_06E0: { ++fl.t; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vmaddd(nacc, n9, n10); { std::uint8_t *q = qword(mem, i1 + 0u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_06E8: { ++fl.t; const v4u uv = vaddd(nacc, (v4u)((v4f)n1 * (v4f)vsplat(0x3F800000u))); set_vi(i12, i12 + 3u); vstore(r.vf[9], uv); fl.stick<15u, kSticky>(uv); n9 = uv; }
L_06F0: { ++fl.t; const v4u uv = vmuld(n28, vsplat(n13[0])); { const std::uint8_t *q = qword(mem, i2 + 960u); std::memcpy(&r.vf[1], q, 16); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); n1 = vshadow(r.vf[1]); nacc = uv; }
L_06F8: { ++fl.t; const v4u uv = vmaddd(nacc, n29, vsplat(n13[1])); set_vi(i10, i10 + 1u); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0700: { ++fl.t; const v4u uv = vmaddd(nacc, n30, vsplat(n13[2])); { const std::uint8_t *q = qword(mem, 0u + 133u); std::memcpy(&r.vf[10], q, 16); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); n10 = vshadow(r.vf[10]); nacc = uv; }
L_0708: { ++fl.t; vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vmin(vload(r.vf[9]), vsplat(r.vf[13].w[3])); set_vi(i13, i13 + 5u); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n9 = vshadow(r.vf[9]); }
L_0710: { ++fl.t; const v4u uv = vmaddd(nacc, n31, vsplat(n24[0])); { const std::uint8_t *q = qword(mem, i2 + 962u); std::memcpy(&r.vf[2], q, 16); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); n2 = vshadow(r.vf[2]); nacc = uv; }
L_0718: { ++fl.t; const v4u uv = vmaddd(nacc, n1, vsplat(n7[0])); vstore(r.vf[13], vsel(vload(r.vf[13]), vload(r.vf[25]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); n13 = vshadow(r.vf[13]); nacc = uv; }
L_0720: { ++fl.t; const v4u uv = vmaddd(nacc, n3, vsplat(n7[1])); { const std::uint8_t *q = qword(mem, i3 + 960u); std::memcpy(&r.vf[25], q, 16); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); n25 = vshadow(r.vf[25]); nacc = uv; }
L_0728: { ++fl.t; const v4u uv = vmuld(n9, n10); vstore(r.vf[10], uv); fl.stick<15u, kSticky>(uv); n10 = uv; }
L_0730: { ++fl.t; const v4u uv = vmaddd(nacc, n2, vsplat(n7[2])); { const std::uint8_t *q = qword(mem, i3 + 961u); std::memcpy(&r.vf[9], q, 16); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); n9 = vshadow(r.vf[9]); nacc = uv; }
L_0738: { ++fl.t; const v4u uv = vmaddd(nacc, n8, vsplat(n24[1])); { const std::uint8_t *q = qword(mem, i3 + 962u); std::memcpy(&r.vf[7], q, 16); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); n7 = vshadow(r.vf[7]); nacc = uv; }
L_0740: { ++fl.t; const v4u uv = vmaddd(nacc, n25, vsplat(n6[0])); { const std::uint8_t *q = qword(mem, i3 + 963u); std::memcpy(&r.vf[11], q, 16); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); n11 = vshadow(r.vf[11]); nacc = uv; }
L_0748: { ++fl.t; const v4u uv = vftoi(vload(r.vf[10]), 0); vstore(r.vf[8], uv); n8 = vshadow(r.vf[8]); }
L_0750: { ++fl.t; const v4u uv = vmaddd(nacc, n9, vsplat(n6[1])); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0758: { ++fl.t; const v4u uv = vmaddd(nacc, n7, vsplat(n6[2])); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0760: { ++fl.t; vflushd(r.vf[27], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); const v4u uv = vmaddd(nacc, n11, vsplat(n24[2])); vstore(r.vf[24], vsel(vload(r.vf[24]), vload(r.vf[27]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n24 = vshadow(r.vf[24]); n27 = vsel(n27, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0768: { ++fl.t; const v4u uv = vmuld(n28, vsplat(n26[0])); { std::uint8_t *q = qword(mem, i1 + 1u); std::memcpy(q, &r.vf[8], 16); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0770: { ++fl.t; const v4u uv = vmaddd(nacc, n29, vsplat(n26[1])); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0778: { ++fl.t; const v4u uv = vmaddd(nacc, n30, vsplat(n26[2])); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0780: { ++fl.t; const v4u uv = vmaddd(nacc, n1, vsplat(n5[0])); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0788: { ++fl.t; const v4u uv = vmaddd(nacc, n3, vsplat(n5[1])); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0790: { ++fl.t; const v4u uv = vmaddd(nacc, n2, vsplat(n5[2])); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0798: { ++fl.t; const v4u uv = vmaddd(nacc, n25, vsplat(n4[0])); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_07A0: { ++fl.t; const v4u uv = vsubd(n27, n24); vstore(r.vf[25], uv); fl.stick<15u, kSticky>(uv); n25 = uv; }
L_07A8: { ++fl.t; const v4u uv = vmaddd(nacc, n9, vsplat(n4[1])); vstore(r.acc, uv); fl.push<15u, kSticky>(uv); nacc = uv; }
L_07B0: { ++fl.t; const v4u uv = vmaddd(nacc, n7, vsplat(n4[2])); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_07B8: { ++fl.t; set_vi(i1, i11 - i12); }
L_07C0: { ++fl.t; set_vi(i6, i8 + 0u); }
L_07C8: { ++fl.t; pend = static_cast<std::int16_t>(i1) > 0; }
L_07D0: { ++fl.t; }
    if (pend) { pend = false; goto L_0800; }
L_07D8: { ++fl.t; set_vi(i15, (((2008u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_07E0: { ++fl.t; }
    if (pend) { pend = false; goto L_1668; }
L_07E8: { ++fl.t; set_vi(i10, 0u + 0u); }
L_07F0: { ++fl.t; set_vi(i9, 0u + i12); }
L_07F8: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_0800: { ++fl.t; pend = static_cast<std::int16_t>(i6) >= 0; }
L_0808: { ++fl.t; set_vi(i8, r.vf[16].w[3]); }
    if (pend) { pend = false; vflushd(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); goto L_0548; }
L_0810: { ++fl.t; set_vi(i5, 0u + 261u); }
L_0818: { ++fl.t; pend = true; }
L_0820: { ++fl.t; set_vi(i4, 0u + 169u); }
    if (pend) { pend = false; goto L_1808; }
    vflush(r.vf[4], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((2088u + sh) & 16383u));
    return;
L_1668: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 114u) + 12, 2); set_vi(i3, v); } }
L_1670: { ++fl.t; set_vi(i2, 0u + 32767u); }
L_1678: { ++fl.t; set_vi(i2, i2 + 1u); }
L_1680: { ++fl.t; set_vi(i2, i10 | i2); }
L_1688: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 0u) + 12, 2); set_vi(i1, v); } }
L_1690: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i2; std::memcpy(q + 0, &v, 4); } }
L_1698: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 2u) + 12, 2); set_vi(i3, v); } }
L_16A0: { ++fl.t; }
L_16A8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_16B0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 2u) + 12, 2); set_vi(i12, v); } }
L_16B8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 4u) + 12, 2); set_vi(i11, v); } }
L_16C0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_16C8: { ++fl.t; vkick_last(daz, 1, i3); }
    if (pendj) { pendj = false; vflush(r.vf[4], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_16D0: { ++fl.t; ending = true; }
L_16D8: { ++fl.t; }
    if (ending) { vflush(r.vf[4], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; r.tpc = ((5856u + sh) & 16383u); return; }
    vflush(r.vf[4], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((5856u + sh) & 16383u));
    return;
L_1708: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 31u); std::memcpy(&r.vf[1], q, 16); } n1 = vshadow(r.vf[1]); }
L_1710: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 26u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); } n2 = vshadow(r.vf[2]); }
L_1718: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_1720: { ++fl.t; set_vi(i10, 0u + 0u); }
L_1728: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); std::memcpy(q, &r.vf[1], 16); } }
L_1730: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 1u); const std::uint32_t v = i1; std::memcpy(q + 0, &v, 4); } }
L_1738: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 2u); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); std::memcpy(q + 12, &r.vf[2].w[3], 4); } }
L_1740: { ++fl.t; set_vi(i9, i12 + 2u); }
L_1748: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1750: { ++fl.t; set_vi(i12, i12 + 3u); }
    if (pendj) { pendj = false; vflush(r.vf[4], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
    vflush(r.vf[4], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((5976u + sh) & 16383u));
    return;
L_1808: { ++fl.t; set_vi(i6, i6 + i6); }
L_1810: { ++fl.t; set_vi(i6, i6 + i6); }
L_1818: { ++fl.t; set_vi(i3, 0u + 4096u); }
L_1820: { ++fl.t; pend = static_cast<std::int16_t>(i6) >= 0; }
L_1828: { ++fl.t; set_vi(i6, i6 + i6); }
    if (pend) { pend = false; goto L_1860; }
L_1830: { ++fl.t; set_vi(i15, (((6192u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1838: { ++fl.t; set_vi(i1, 0u + 4u); }
    if (pend) { pend = false; goto L_1708; }
L_1840: { ++fl.t; set_vi(i1, 0u + 1u); }
L_1848: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = i1; std::memcpy(q + 8, &v, 4); } }
L_1850: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = 0u; std::memcpy(q + 0, &v, 4); } }
L_1858: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = 0u; std::memcpy(q + 4, &v, 4); } }
L_1860: { ++fl.t; set_vi(i3, i6 & i3); }
L_1868: { ++fl.t; pend = static_cast<std::int16_t>(i6) >= 0; }
L_1870: { ++fl.t; set_vi(i6, i6 + i6); bi = 6u; }
    if (pend) { pend = false; goto L_1888; }
L_1878: { ++fl.t; set_vi(i15, (((6264u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1880: { ++fl.t; next_bk = i3; set_vi(i3, 0u + 512u); bk = next_bk; bi = 3u; }
    if (pend) { pend = false; goto L_16D0; }
L_1888: { ++fl.t; pend = 0u == (bi == 3 ? bk : i3); }
L_1890: { ++fl.t; { const std::uint8_t *q = qword(mem, i13 + 0u); std::memcpy(&r.vf[14], q, 16); } }
    if (pend) { pend = false; goto L_18C8; }
L_1898: { ++fl.t; pend = static_cast<std::int16_t>(i6) < 0; }
L_18A0: { ++fl.t; set_vi(i7, r.vf[17].w[3]); }
    if (pend) { pend = false; goto L_18E8; }
L_18A8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i5) * 8u) & 16383u; set_vi(i15, (((6312u + sh) & 16383u) + 16u) / 8u); pendj = true; }
L_18B0: { ++fl.t; set_vi(i6, i4 + 0u); }
    if (pendj) { pendj = false; vflush(r.vf[4], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_18B8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i6) * 8u) & 16383u; pendj = true; }
L_18C0: { ++fl.t; }
    if (pendj) { pendj = false; vflush(r.vf[4], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_18C8: { ++fl.t; pend = static_cast<std::int16_t>(i6) < 0; }
L_18D0: { ++fl.t; }
    if (pend) { pend = false; goto L_18E8; }
L_18D8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i4) * 8u) & 16383u; pendj = true; }
L_18E0: { ++fl.t; }
    if (pendj) { pendj = false; vflush(r.vf[4], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_18E8: { ++fl.t; pend = true; }
L_18F0: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
    if (pend) { pend = false; goto L_01F8; }
    vflush(r.vf[4], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((6392u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, jpc);
    return;
}
static __attribute__((noinline, cold)) void vu1_657090AEA687D22F_c(Vu0Regs &r, std::uint8_t *mem, VuDaz &daz, std::uint32_t &hop) { vu1_657090AEA687D22F_b<true>(r, mem, daz, hop); }
void vu1_657090AEA687D22F(Vu0Regs &r, std::uint8_t *mem) {
    std::uint32_t hop = kNoHop;
    {
        VuDaz daz;
        if ((r.status & 0xC0u) == 0xC0u) vu1_657090AEA687D22F_b<false>(r, mem, daz, hop);
        else vu1_657090AEA687D22F_c(r, mem, daz, hop);
    }
    if (hop != kNoHop) vu::interpret(1, hop);
}

template <bool kSticky>
PS2_VU_BODY void vu1_9EF7A7A211FE8924_b(Vu0Regs &r, std::uint8_t *mem, VuDaz &daz, std::uint32_t &hop) {
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
    std::uint16_t bk = 0, next_bk = 0;
    unsigned bi = 0;
    (void)bk;
    (void)next_bk;
    (void)bi;
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
    v4u n13 = vshadow(r.vf[13]);
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
    v4u n26 = vshadow(r.vf[26]);
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
    std::uint16_t i7 = r.vi[7];
    std::uint16_t i8 = r.vi[8];
    std::uint16_t i9 = r.vi[9];
    std::uint16_t i10 = r.vi[10];
    std::uint16_t i11 = r.vi[11];
    std::uint16_t i12 = r.vi[12];
    std::uint16_t i13 = r.vi[13];
    std::uint16_t i15 = r.vi[15];
    goto L_0380;
L_01F8: { ++fl.t; set_vi(i1, 0u + 15u); }
L_0200: { ++fl.t; set_vi(i1, i8 & i1); }
L_0208: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1) + 4, 2); set_vi(i2, v); } }
L_0210: { fl.t += 4u; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; pendj = true; }
L_0218: { ++fl.t; }
    if (pendj) { pendj = false; vflush(r.vf[4], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
    vflush(r.vf[4], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((544u + sh) & 16383u));
    return;
L_0270: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[15].w[0], r.vf[27].w[2]); fl.end_q(r, qb, 7u); } vstore(r.vf[24], uv); n24 = vshadow(r.vf[24]); }
L_0278: { ++fl.t; const v4u uv = vmuld(n18, n26); vstore(r.vf[17], vsel(vload(r.vf[17]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n17 = vsel(n17, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0280: { ++fl.t; const v4u uv = vmuld(n20, n26); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0288: { ++fl.t; const v4u uv = vmuld(n22, n26); vstore(r.vf[16], vsel(vload(r.vf[16]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n16 = vsel(n16, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0290: { ++fl.t; }
L_0298: { ++fl.t; const v4u uv = vaddd(n17, vsplat(n17[1])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_02A0: { ++fl.t; const v4u uv = vmaddd(nacc, n24, vsplat(n17[2])); vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n4 = vsel(n4, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_02A8: { ++fl.t; const v4u uv = vaddd(n2, vsplat(n2[0])); { const std::uint8_t *q = qword(mem, 0u + 38u); std::memcpy(&r.vf[17], q, 16); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n17 = vshadow(r.vf[17]); nacc = vsel(nacc, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_02B0: { ++fl.t; const v4u uv = vmaddd(nacc, n24, vsplat(n2[2])); { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = 0u; std::memcpy(q + 8, &v, 4); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n4 = vsel(n4, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_02B8: { ++fl.t; const v4u uv = vaddd(n16, vsplat(n16[0])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.stick<2u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_02C0: { ++fl.t; const v4u uv = vmaddd(nacc, n24, vsplat(n16[1])); { const std::uint8_t *q = qword(mem, 0u + 33u); std::memcpy(&r.vf[2], q, 16); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.stick<2u, kSticky>(uv); n2 = vshadow(r.vf[2]); n4 = vsel(n4, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_02C8: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vqd(r.q)); { const std::uint8_t *q = qword(mem, i13 + 1u); std::memcpy(&r.vf[16], q, 16); } vstore(r.vf[1], uv); fl.stick<15u, kSticky>(uv); n16 = vshadow(r.vf[16]); n1 = uv; }
L_02D0: { ++fl.t; const v4u uv = vmuld(n27, n17); set_vi(i2, 0u + 16u); vstore(r.vf[17], vsel(vload(r.vf[17]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.stick<12u, kSticky>(uv); n17 = vsel(n17, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_02D8: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 132u) + 12, 2); set_vi(i3, v); } vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n27 = vsel(n27, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_02E0: { ++fl.t; vflushd(r.vf[4], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vmax(vload(r.vf[4]), v4u{0u, 0u, 0u, 0x3F800000u}); { const std::uint8_t *q = qword(mem, 0u + 135u); std::memcpy(&r.vf[6], q, 16); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n6 = vshadow(r.vf[6]); n3 = vshadow(r.vf[3]); }
L_02E8: { ++fl.t; vflushd(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); const v4u uv = vmax(vload(r.vf[1]), vsplat(r.vf[17].w[3])); { const std::uint8_t *q = qword(mem, 0u + 134u); std::memcpy(&r.vf[5], q, 16); } vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n5 = vshadow(r.vf[5]); n1 = vshadow(r.vf[1]); }
L_02F0: { ++fl.t; const v4u uv = vmuld(vswz<1, 2, 0, 3>(n13), vswz<2, 0, 1, 3>(n25)); set_vi(i4, i8 & i2); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_02F8: { ++fl.t; const v4u uv = vmsubd(nacc, vswz<1, 2, 0, 3>(n25), vswz<2, 0, 1, 3>(n13)); { const std::uint8_t *q = qword(mem, 0u + 142u); std::memcpy(&r.vf[4], q, 16); } vstore(r.vf[13], vsel(vload(r.vf[13]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n4 = vshadow(r.vf[4]); n13 = vsel(n13, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0300: { ++fl.t; const v4u uv = vmuld(n19, vsplat(n3[0])); vstore(r.vf[16], vsel(vload(r.vf[16]), vload(r.vf[0]), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n16 = vshadow(r.vf[16]); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0308: { ++fl.t; const v4u uv = vmaddd(nacc, n21, vsplat(n3[1])); { std::uint8_t *q = qword(mem, 0u + 112u); std::memcpy(q + 0, &r.vf[16].w[0], 4); std::memcpy(q + 4, &r.vf[16].w[1], 4); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0310: { ++fl.t; const v4u uv = vmaddd(nacc, n23, vsplat(n3[2])); { const std::uint8_t *q = qword(mem, 0u + 145u); vstore(r.vf[8], vsel(vload(r.vf[8]), vload_ptr(q), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } vstore(r.vf[16], vsel(vload(r.vf[16]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n8 = vshadow(r.vf[8]); n16 = vsel(n16, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0318: { ++fl.t; const v4u uv = vmuld(n17, n1); { const std::uint8_t *q = qword(mem, 0u + 138u); vstore(r.vf[7], vsel(vload(r.vf[7]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n7 = vshadow(r.vf[7]); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0320: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vsplat(n2[2])); set_vi(i1, i12 + 0u); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0328: { ++fl.t; const v4u uv = vmaddd(nacc, n2, vsplat(n27[2])); { const std::uint8_t *q = qword(mem, 0u + 143u); std::memcpy(&r.vf[9], q, 16); } vstore(r.vf[13], vsel(vload(r.vf[13]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n9 = vshadow(r.vf[9]); n13 = vsel(n13, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0330: { ++fl.t; vflushd(r.vf[16], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vmax(vload(r.vf[16]), vsplat(r.vf[8].w[0])); { const std::uint8_t *q = qword(mem, i13 + 3u); std::memcpy(&r.vf[17], q, 16); } vstore(r.vf[10], uv); n17 = vshadow(r.vf[17]); n10 = vshadow(r.vf[10]); }
L_0338: { ++fl.t; const v4u uv = vmuld(n13, n27); { const std::uint8_t *q = qword(mem, i13 + 2u); std::memcpy(&r.vf[16], q, 16); } vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n16 = vshadow(r.vf[16]); n8 = vsel(n8, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0340: { ++fl.t; const v4u uv = vmuld(n26, n6); { const std::uint8_t *q = qword(mem, i13 + 0u); std::memcpy(&r.vf[6], q, 16); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.stick<12u, kSticky>(uv); n6 = vshadow(r.vf[6]); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_0348: { ++fl.t; vflushd(r.vf[13], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); const v4u uv = vmax(vload(r.vf[13]), vsplat(r.vf[2].w[1])); set_vi(i12, i12 + 3u); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n2 = vshadow(r.vf[2]); }
L_0350: { ++fl.t; const v4u uv = vmuld(n9, n10); set_vi(i10, i10 + 1u); vstore(r.vf[9], uv); fl.stick<15u, kSticky>(uv); n9 = uv; }
L_0358: { ++fl.t; const v4u uv = vaddd(nacc, (v4u)((v4f)n5 * (v4f)vsplat(0x3F800000u))); set_vi(i13, i13 + 4u); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.stick<12u, kSticky>(uv); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_0360: { ++fl.t; vflushd(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n1[0])); vstore(r.vf[13], vsel(vload(r.vf[13]), vload(r.vf[25]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.stick<2u, kSticky>(uv); n13 = vshadow(r.vf[13]); n25 = vsel(n25, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_0368: { ++fl.t; const v4u uv = vmin(vload(r.vf[2]), vsplat(r.vf[2].w[0])); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n25 = vshadow(r.vf[25]); }
L_0370: { ++fl.t; const v4u uv = vmuld(n9, n6); { const std::uint8_t *q = qword(mem, 0u + 137u); vstore(r.vf[24], vsel(vload(r.vf[24]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); n24 = vshadow(r.vf[24]); nacc = uv; }
L_0378: { ++fl.t; vflushd(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); const v4u uv = vmaddd(nacc, n7, n6); { std::uint8_t *q = qword(mem, 0u + 113u); std::memcpy(q + 0, &r.vf[26].w[0], 4); std::memcpy(q + 4, &r.vf[26].w[1], 4); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    vflushd(r.vf[1], v4u{0u, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[25], v4u{0u, 0u, 0xFFFFFFFFu, 0u}); vflushd(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); 
L_0380: { ++fl.t; const v4u uv = vaddd(nacc, (v4u)((v4f)n4 * (v4f)vsplat(0x3F800000u))); { const std::uint8_t *q = qword(mem, i3 + 112u); vstore(r.vf[25], vsel(vload(r.vf[25]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } vstore(r.vf[4], uv); fl.stick<15u, kSticky>(uv); n25 = vshadow(r.vf[25]); n4 = uv; }
L_0388: { ++fl.t; const v4u uv = vaddd(n8, vsplat(n8[1])); { const std::uint8_t *q = qword(mem, 0u + 136u); vstore(r.vf[6], vsel(vload(r.vf[6]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n6 = vshadow(r.vf[6]); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0390: { ++fl.t; const v4u uv = vmaddd(nacc, n24, vsplat(n8[2])); { const std::uint8_t *q = qword(mem, i4 + 15u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n2 = vshadow(r.vf[2]); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0398: { ++fl.t; const v4u uv = vftoi(vload(r.vf[25]), 4); { const std::uint8_t *q = qword(mem, 0u + 39u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n2 = vshadow(r.vf[2]); n25 = vshadow(r.vf[25]); }
L_03A0: { ++fl.t; vflushd(r.vf[4], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vmin(vload(r.vf[4]), vsplat(r.vf[24].w[3])); { const std::uint8_t *q = qword(mem, 0u + 133u); std::memcpy(&r.vf[24], q, 16); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n24 = vshadow(r.vf[24]); n4 = vshadow(r.vf[4]); }
L_03A8: { ++fl.t; const v4u uv = vaddd(n25, n6); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.stick<12u, kSticky>(uv); n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_03B0: { ++fl.t; const v4u uv = vmuld(n2, vsplat(n26[0])); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.push<1u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_03B8: { ++fl.t; const v4u uv = vaddd(n3, n2); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_03C0: { ++fl.t; const v4u uv = vmuld(n4, n24); vstore(r.vf[2], uv); fl.push<15u, kSticky>(uv); n2 = uv; }
L_03C8: { ++fl.t; const v4u uv = vmuld(n25, vsplat(n1[0])); set_vi(i3, r.vf[25].w[3]); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.push<12u, kSticky>(uv); n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_03D0: { ++fl.t; const v4u uv = vmuld(n28, vsplat(n17[0])); set_vi(i2, (fl.mac() & 0xFFFFu) == i2 ? 1u : 0u); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_03D8: { ++fl.t; const v4u uv = vftoi(vload(r.vf[26]), 4); { std::uint16_t v; std::memcpy(&v, qword(mem, i2 + 126u) + 12, 2); set_vi(i2, v); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n4 = vshadow(r.vf[4]); }
L_03E0: { ++fl.t; const v4u uv = vftoi(vload(r.vf[2]), 0); vstore(r.vf[24], vsel(vload(r.vf[24]), vload(r.vf[27]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); vstore(r.vf[2], uv); n24 = vshadow(r.vf[24]); n2 = vshadow(r.vf[2]); }
L_03E8: { ++fl.t; vflushd(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); const v4u uv = vmaddd(nacc, n29, vsplat(n17[1])); { std::uint8_t *q = qword(mem, i1 + 0u); std::memcpy(q + 0, &r.vf[25].w[0], 4); std::memcpy(q + 4, &r.vf[25].w[1], 4); std::memcpy(q + 8, &r.vf[25].w[2], 4); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_03F0: { ++fl.t; const v4u uv = vmaddd(nacc, n30, vsplat(n17[2])); set_vi(i4, 0u + 16384u); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_03F8: { ++fl.t; const v4u uv = vaddd(nacc, (v4u)((v4f)n31 * (v4f)vsplat(0x3F800000u))); set_vi(i8, i8 | i2); vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n27 = vsel(n27, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0400: { ++fl.t; const v4u uv = vmuld(n28, vsplat(n16[0])); set_vi(i2, i4 & i8); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0408: { ++fl.t; const v4u uv = vmaddd(nacc, n29, vsplat(n16[1])); set_vi(i2, i2 + i2); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0410: { ++fl.t; const v4u uv = vmaddd(nacc, n30, vsplat(n16[2])); { std::uint8_t *q = qword(mem, i1 + 1u); std::memcpy(q, &r.vf[2], 16); } vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0418: { ++fl.t; const v4u uv = vsubd(n27, n24); { std::uint8_t *q = qword(mem, i1 + 2u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); std::memcpy(q + 8, &r.vf[4].w[2], 4); } vstore(r.vf[25], uv); fl.push<15u, kSticky>(uv); n25 = uv; }
L_0420: { ++fl.t; set_vi(i2, i3 | i2); }
L_0428: { ++fl.t; { std::uint8_t *q = qword(mem, i1 + 2u); const std::uint32_t v = i2; std::memcpy(q + 12, &v, 4); } }
L_0430: { ++fl.t; set_vi(i1, i11 - i12); }
L_0438: { ++fl.t; set_vi(i6, i8 + 0u); }
L_0440: { ++fl.t; pend = static_cast<std::int16_t>(i1) > 0; }
L_0448: { ++fl.t; }
    if (pend) { pend = false; goto L_0478; }
L_0450: { ++fl.t; set_vi(i15, (((1104u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0458: { ++fl.t; }
    if (pend) { pend = false; goto L_1668; }
L_0460: { ++fl.t; set_vi(i10, 0u + 0u); }
L_0468: { ++fl.t; set_vi(i9, 0u + i12); }
L_0470: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_0478: { ++fl.t; pend = static_cast<std::int16_t>(i6) >= 0; }
L_0480: { ++fl.t; set_vi(i8, r.vf[16].w[3]); }
    if (pend) { pend = false; goto L_0270; }
L_0488: { ++fl.t; set_vi(i5, 0u + 148u); }
L_0490: { ++fl.t; pend = true; }
L_0498: { ++fl.t; set_vi(i4, 0u + 78u); }
    if (pend) { pend = false; goto L_1808; }
    vflush(r.vf[4], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((1184u + sh) & 16383u));
    return;
L_1668: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 114u) + 12, 2); set_vi(i3, v); } }
L_1670: { ++fl.t; set_vi(i2, 0u + 32767u); }
L_1678: { ++fl.t; set_vi(i2, i2 + 1u); }
L_1680: { ++fl.t; set_vi(i2, i10 | i2); }
L_1688: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 0u) + 12, 2); set_vi(i1, v); } }
L_1690: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i2; std::memcpy(q + 0, &v, 4); } }
L_1698: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 2u) + 12, 2); set_vi(i3, v); } }
L_16A0: { ++fl.t; }
L_16A8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_16B0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 2u) + 12, 2); set_vi(i12, v); } }
L_16B8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 4u) + 12, 2); set_vi(i11, v); } }
L_16C0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_16C8: { ++fl.t; vkick_last(daz, 1, i3); }
    if (pendj) { pendj = false; vflush(r.vf[4], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_16D0: { ++fl.t; ending = true; }
L_16D8: { ++fl.t; }
    if (ending) { vflush(r.vf[4], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; r.tpc = ((5856u + sh) & 16383u); return; }
    vflush(r.vf[4], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((5856u + sh) & 16383u));
    return;
L_1708: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 31u); std::memcpy(&r.vf[1], q, 16); } n1 = vshadow(r.vf[1]); }
L_1710: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 26u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); } n2 = vshadow(r.vf[2]); }
L_1718: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_1720: { ++fl.t; set_vi(i10, 0u + 0u); }
L_1728: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); std::memcpy(q, &r.vf[1], 16); } }
L_1730: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 1u); const std::uint32_t v = i1; std::memcpy(q + 0, &v, 4); } }
L_1738: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 2u); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); std::memcpy(q + 12, &r.vf[2].w[3], 4); } }
L_1740: { ++fl.t; set_vi(i9, i12 + 2u); }
L_1748: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1750: { ++fl.t; set_vi(i12, i12 + 3u); }
    if (pendj) { pendj = false; vflush(r.vf[4], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
    vflush(r.vf[4], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((5976u + sh) & 16383u));
    return;
L_1808: { ++fl.t; set_vi(i6, i6 + i6); }
L_1810: { ++fl.t; set_vi(i6, i6 + i6); }
L_1818: { ++fl.t; set_vi(i3, 0u + 4096u); }
L_1820: { ++fl.t; pend = static_cast<std::int16_t>(i6) >= 0; }
L_1828: { ++fl.t; set_vi(i6, i6 + i6); }
    if (pend) { pend = false; goto L_1860; }
L_1830: { ++fl.t; set_vi(i15, (((6192u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1838: { ++fl.t; set_vi(i1, 0u + 4u); }
    if (pend) { pend = false; goto L_1708; }
L_1840: { ++fl.t; set_vi(i1, 0u + 1u); }
L_1848: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = i1; std::memcpy(q + 8, &v, 4); } }
L_1850: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = 0u; std::memcpy(q + 0, &v, 4); } }
L_1858: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = 0u; std::memcpy(q + 4, &v, 4); } }
L_1860: { ++fl.t; set_vi(i3, i6 & i3); }
L_1868: { ++fl.t; pend = static_cast<std::int16_t>(i6) >= 0; }
L_1870: { ++fl.t; set_vi(i6, i6 + i6); bi = 6u; }
    if (pend) { pend = false; goto L_1888; }
L_1878: { ++fl.t; set_vi(i15, (((6264u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1880: { ++fl.t; next_bk = i3; set_vi(i3, 0u + 512u); bk = next_bk; bi = 3u; }
    if (pend) { pend = false; goto L_16D0; }
L_1888: { ++fl.t; pend = 0u == (bi == 3 ? bk : i3); }
L_1890: { ++fl.t; { const std::uint8_t *q = qword(mem, i13 + 0u); std::memcpy(&r.vf[14], q, 16); } }
    if (pend) { pend = false; goto L_18C8; }
L_1898: { ++fl.t; pend = static_cast<std::int16_t>(i6) < 0; }
L_18A0: { ++fl.t; set_vi(i7, r.vf[17].w[3]); }
    if (pend) { pend = false; goto L_18E8; }
L_18A8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i5) * 8u) & 16383u; set_vi(i15, (((6312u + sh) & 16383u) + 16u) / 8u); pendj = true; }
L_18B0: { ++fl.t; set_vi(i6, i4 + 0u); }
    if (pendj) { pendj = false; vflush(r.vf[4], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_18B8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i6) * 8u) & 16383u; pendj = true; }
L_18C0: { ++fl.t; }
    if (pendj) { pendj = false; vflush(r.vf[4], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_18C8: { ++fl.t; pend = static_cast<std::int16_t>(i6) < 0; }
L_18D0: { ++fl.t; }
    if (pend) { pend = false; goto L_18E8; }
L_18D8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i4) * 8u) & 16383u; pendj = true; }
L_18E0: { ++fl.t; }
    if (pendj) { pendj = false; vflush(r.vf[4], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_18E8: { ++fl.t; pend = true; }
L_18F0: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
    if (pend) { pend = false; goto L_01F8; }
    vflush(r.vf[4], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((6392u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, jpc);
    return;
}
static __attribute__((noinline, cold)) void vu1_9EF7A7A211FE8924_c(Vu0Regs &r, std::uint8_t *mem, VuDaz &daz, std::uint32_t &hop) { vu1_9EF7A7A211FE8924_b<true>(r, mem, daz, hop); }
void vu1_9EF7A7A211FE8924(Vu0Regs &r, std::uint8_t *mem) {
    std::uint32_t hop = kNoHop;
    {
        VuDaz daz;
        if ((r.status & 0xC0u) == 0xC0u) vu1_9EF7A7A211FE8924_b<false>(r, mem, daz, hop);
        else vu1_9EF7A7A211FE8924_c(r, mem, daz, hop);
    }
    if (hop != kNoHop) vu::interpret(1, hop);
}

template <bool kSticky>
static void vu1_BF90FFA4C4D07F5F_s(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 24u) & 16383u;
    (void)sh;
    v4u n1 = vshadow_eager(r.vf[1]);
    v4u n2 = vshadow_eager(r.vf[2]);
    v4u n3 = vshadow_eager(r.vf[3]);
    v4u n5 = vshadow_eager(r.vf[5]);
    v4u n6 = vshadow_eager(r.vf[6]);
    v4u n7 = vshadow_eager(r.vf[7]);
    v4u nacc = vshadow_eager(r.acc);
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i3 = r.vi[3];
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i5 = r.vi[5];
    std::uint16_t i8 = r.vi[8];
    std::uint16_t i9 = r.vi[9];
    std::uint16_t i10 = r.vi[10];
    std::uint16_t i11 = r.vi[11];
    std::uint16_t i12 = r.vi[12];
    std::uint16_t i15 = r.vi[15];
    goto L_0018;
L_0018: { ++fl.t; set_vi(i4, 0u + 160u); }
L_0020: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 115u); const std::uint32_t v = i2; std::memcpy(q + 12, &v, 4); } }
L_0028: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 116u); const std::uint32_t v = i3; std::memcpy(q + 12, &v, 4); } }
L_0030: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 117u); const std::uint32_t v = i4; std::memcpy(q + 12, &v, 4); } }
L_0038: { ++fl.t; r.i = 1124073472u; }
L_0040: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vfix(vsplat(r.i))); { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = 0u; std::memcpy(q + 0, &v, 4); } vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.push_last<1u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0048: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = 0u; std::memcpy(q + 4, &v, 4); } vstore(r.vf[2], uv); n2 = vshadow_eager(r.vf[2]); }
L_0050: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 128u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0058: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 129u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0060: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 130u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0068: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 133u); std::memcpy(q + 12, &r.vf[1].w[3], 4); } }
L_0070: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 139u); std::memcpy(q, &r.vf[2], 16); } }
L_0078: { ++fl.t; set_vi(i1, 0u + 1u); }
L_0080: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = i1; std::memcpy(q + 8, &v, 4); } }
L_0088: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 37u) + 4, 2); set_vi(i2, v); } }
L_0090: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0098: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 2u) + 12, 2); set_vi(i12, v); } }
L_00A0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 4u) + 12, 2); set_vi(i11, v); } }
L_00A8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 131u); const std::uint32_t v = i2; std::memcpy(q + 12, &v, 4); } }
L_00B0: { ++fl.t; set_vi(i3, 0u + 27u); }
L_00B8: { ++fl.t; vu::kick(1, i3); }
L_00C0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 24u); vstore(r.vf[15], vsel(vload(r.vf[15]), vload_ptr(q), v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); } }
L_00C8: { ++fl.t; set_vi(i1, 0u + 8u); }
L_00D0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_00D8: { ++fl.t; set_vi(i1, 0u + 26u); }
L_00E0: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(0u))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } }
L_00E8: { ++fl.t; set_vi(i15, (((232u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_00F0: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
    if (pend) { pend = false; goto L_1638; }
L_00F8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 12, 2); set_vi(i8, v); } }
L_0100: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0108: { ++fl.t; set_vi(i15, (((264u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0110: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 4, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0A68; }
L_0118: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0120: { ++fl.t; set_vi(i15, (((288u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0128: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_0E20; }
L_0130: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0138: { ++fl.t; set_vi(i15, (((312u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0140: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 37u) + 0, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0D78; }
L_0148: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0150: { ++fl.t; set_vi(i15, (((336u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0158: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_1238; }
L_0160: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0168: { ++fl.t; set_vi(i15, (((360u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0170: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_0F70; }
L_0178: { ++fl.t; set_vi(i1, 0u + 66u); }
L_0180: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 45u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } }
L_0188: { ++fl.t; set_vi(i15, (((392u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0190: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
    if (pend) { pend = false; goto L_1638; }
L_0198: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 66u); std::memcpy(&r.vf[18], q, 16); } }
L_01A0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 67u); std::memcpy(&r.vf[19], q, 16); } }
L_01A8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 68u); std::memcpy(&r.vf[20], q, 16); } }
L_01B0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 69u); std::memcpy(&r.vf[21], q, 16); } }
L_01B8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 70u); std::memcpy(&r.vf[22], q, 16); } }
L_01C0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 71u); std::memcpy(&r.vf[23], q, 16); } }
L_01C8: { ++fl.t; ending = true; }
L_01D0: { ++fl.t; }
    if (ending) { fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; r.tpc = ((472u + sh) & 16383u); return; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((472u + sh) & 16383u));
    return;
L_0A68: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0u)); set_vi(i1, 0u + 8u); vstore(r.vf[3], uv); n3 = vshadow_eager(r.vf[3]); }
L_0A70: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i1, i5 & i1); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n5 = vshadow_eager(r.vf[5]); }
L_0A78: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, v4u{0u, 0u, 0u, 0x3F800000u}); { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 8, 2); set_vi(i2, v); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n5 = vshadow_eager(r.vf[5]); }
L_0A80: { ++fl.t; pend = 0u == i1; }
L_0A88: { ++fl.t; set_vi(i3, 0u + 3u); }
    if (pend) { pend = false; goto L_0A98; }
L_0A90: { ++fl.t; set_vi(i4, 0u + i2); }
L_0A98: { ++fl.t; set_vi(i1, 0u + 8u); }
L_0AA0: { ++fl.t; set_vi(i1, i4 & i1); }
L_0AA8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 37u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } n1 = vshadow_eager(r.vf[1]); }
L_0AB0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 139u); std::memcpy(&r.vf[6], q, 16); } n6 = vshadow_eager(r.vf[6]); }
L_0AB8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 140u); std::memcpy(&r.vf[7], q, 16); } n7 = vshadow_eager(r.vf[7]); }
L_0AC0: { ++fl.t; pend = 0u == i1; }
L_0AC8: { ++fl.t; set_vi(i2, 0u + 4u); }
    if (pend) { pend = false; goto L_0AD8; }
L_0AD0: { ++fl.t; const v4u uv = vaddn(n1, n1); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0AD8: { ++fl.t; const v4u uv = (v4u)((v4f)n5 + (v4f)vsplat(0x3F800000u)); set_vi(i5, i4 & i3); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0AE0: { ++fl.t; set_vi(i4, i4 & i2); }
L_0AE8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 124u) + 12, 2); set_vi(i1, v); } }
L_0AF0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 138u); std::memcpy(q + 12, &r.vf[1].w[3], 4); } }
L_0AF8: { ++fl.t; pend = 0u == i5; }
L_0B00: { ++fl.t; set_vi(i5, i5 - 1u); }
    if (pend) { pend = false; goto L_0B48; }
L_0B08: { ++fl.t; r.i = 1124073472u; }
L_0B10: { ++fl.t; pend = 0u == i5; }
L_0B18: { ++fl.t; }
    if (pend) { pend = false; goto L_0B70; }
L_0B20: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); set_vi(i2, 0u + 1u); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_0B28: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 16u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B30: { ++fl.t; set_vi(i1, i1 | i3); }
L_0B38: { ++fl.t; pend = true; }
L_0B40: { ++fl.t; set_vi(i3, 0u + 1u); }
    if (pend) { pend = false; goto L_0B98; }
L_0B48: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); r.i = 1132396544u; vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B50: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 32751u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B58: { ++fl.t; set_vi(i1, i1 & i3); }
L_0B60: { ++fl.t; pend = true; }
L_0B68: { ++fl.t; set_vi(i3, 0u + 0u); }
    if (pend) { pend = false; goto L_0B98; }
L_0B70: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); set_vi(i2, 0u + 0u); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B78: { ++fl.t; r.i = 1124073472u; }
L_0B80: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 16u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B88: { ++fl.t; set_vi(i1, i1 | i3); }
L_0B90: { ++fl.t; set_vi(i3, 0u + 1u); }
L_0B98: { ++fl.t; pend = 0u == i4; }
L_0BA0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 134u); const std::uint32_t v = i3; std::memcpy(q + 8, &v, 4); } }
    if (pend) { pend = false; goto L_0BB8; }
L_0BA8: { ++fl.t; r.i = 1073676288u; }
L_0BB0: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vfix(vsplat(r.i))); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0BB8: { ++fl.t; set_vi(i3, 0u + 27u); }
L_0BC0: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(r.vf[1].w[0])); { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n2 = vshadow_eager(r.vf[2]); }
L_0BC8: { ++fl.t; const v4u uv = vmuln(n6, vsplat(n1[3])); { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i3))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0BD0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0BD8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 132u); const std::uint32_t v = i2; std::memcpy(q + 12, &v, 4); } }
L_0BE0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 112u); std::memcpy(q + 0, &r.vf[3].w[0], 4); std::memcpy(q + 4, &r.vf[3].w[1], 4); } }
L_0BE8: { ++fl.t; const v4u uv = vmuln(n7, n6); { std::uint8_t *q = qword(mem, 0u + 137u); std::memcpy(q + 12, &r.vf[5].w[3], 4); } vstore(r.vf[7], uv); fl.push_last<15u, kSticky>(uv); n7 = uv; }
L_0BF0: { ++fl.t; set_vi(i2, i15 + 0u); }
L_0BF8: { ++fl.t; set_vi(i15, (((3064u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0C00: { ++fl.t; }
    if (pend) { pend = false; goto L_1638; }
L_0C08: { ++fl.t; set_vi(i15, i2 + 0u); }
L_0C10: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 133u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
L_0C18: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 143u); std::memcpy(q, &r.vf[7], 16); } }
L_0C20: { ++fl.t; pend = true; }
L_0C28: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 125u) + 12, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0FA8; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((3120u + sh) & 16383u));
    return;
L_0D78: { ++fl.t; set_vi(i1, 0u + 16u); }
L_0D80: { ++fl.t; set_vi(i1, i5 & i1); }
L_0D88: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 12, 2); set_vi(i2, v); } }
L_0D90: { ++fl.t; pend = 0u == i1; }
L_0D98: { ++fl.t; }
    if (pend) { pend = false; goto L_0DB0; }
L_0DA0: { ++fl.t; set_vi(i4, 0u + i2); }
L_0DA8: { ++fl.t; }
L_0DB0: { ++fl.t; pend = 0u == i4; }
L_0DB8: { ++fl.t; set_vi(i4, i4 - 1u); }
    if (pend) { pend = false; goto L_0E08; }
L_0DC0: { ++fl.t; set_vi(i1, 0u + 16384u); }
L_0DC8: { ++fl.t; pend = 0u == i4; }
L_0DD0: { ++fl.t; }
    if (pend) { pend = false; goto L_0DF0; }
L_0DD8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0DE0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0DE8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0DF0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0DF8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0E00: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0E08: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0E10: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0E18: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0E20: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 8, 2); set_vi(i3, v); } }
L_0E28: { ++fl.t; set_vi(i2, 0u + 27u); }
L_0E30: { ++fl.t; pend = 0u != i4; }
L_0E38: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 124u) + 12, 2); set_vi(i1, v); } }
    if (pend) { pend = false; goto L_0E50; }
L_0E40: { ++fl.t; pend = 0u != i3; }
L_0E48: { ++fl.t; }
    if (pend) { pend = false; goto L_0E68; }
L_0E50: { ++fl.t; set_vi(i3, 0u + 32735u); }
L_0E58: { ++fl.t; pend = true; }
L_0E60: { ++fl.t; set_vi(i1, i1 & i3); }
    if (pend) { pend = false; goto L_0E78; }
L_0E68: { ++fl.t; set_vi(i3, 0u + 32u); }
L_0E70: { ++fl.t; set_vi(i1, i1 | i3); }
L_0E78: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } }
L_0E80: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i2))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
L_0E88: { ++fl.t; pend = true; }
L_0E90: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
    if (pend) { pend = false; goto L_1638; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((3736u + sh) & 16383u));
    return;
L_0F70: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i1, 0u + 4u); vstore(r.vf[1], uv); n1 = vshadow_eager(r.vf[1]); }
L_0F78: { ++fl.t; set_vi(i1, i5 & i1); }
L_0F80: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 4, 2); set_vi(i2, v); } }
L_0F88: { ++fl.t; pend = 0u == i1; }
L_0F90: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 145u); std::memcpy(q + 0, &r.vf[1].w[0], 4); } }
    if (pend) { pend = false; goto L_0FA0; }
L_0F98: { ++fl.t; set_vi(i4, 0u + i2); }
L_0FA0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 125u); const std::uint32_t v = i4; std::memcpy(q + 12, &v, 4); } }
L_0FA8: { ++fl.t; const v4u uv = vmin(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0u)); { const std::uint8_t *q = qword(mem, 0u + 138u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[4], uv); n3 = vshadow_eager(r.vf[3]); }
L_0FB0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 141u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n3 = vshadow_eager(r.vf[3]); }
L_0FB8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 64u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow_eager(r.vf[1]); }
L_0FC0: { ++fl.t; pend = 0u != i4; }
L_0FC8: { ++fl.t; const v4u uv = vmuln(n3, vsplat(n3[3])); { const std::uint8_t *q = qword(mem, 0u + 142u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vshadow_eager(r.vf[2]); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; goto L_0FE8; }
L_0FD0: { ++fl.t; const v4u uv = vmuln(n1, n3); { std::uint8_t *q = qword(mem, 0u + 145u); std::memcpy(q + 0, &r.vf[0].w[0], 4); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); }
L_0FD8: { ++fl.t; const v4u uv = vmuln(n1, n3); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0FE0: { ++fl.t; const v4u uv = vaddn(nacc, (v4u)((v4f)n2 * (v4f)vsplat(0x3F800000u))); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0FE8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 138u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); std::memcpy(q + 8, &r.vf[4].w[2], 4); } }
L_0FF0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0FF8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 137u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((4096u + sh) & 16383u));
    return;
L_1238: { ++fl.t; set_vi(i1, 0u + 32u); }
L_1240: { ++fl.t; set_vi(i1, i5 & i1); }
L_1248: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 47u) + 0, 2); set_vi(i2, v); } }
L_1250: { ++fl.t; pend = 0u == i1; }
L_1258: { ++fl.t; }
    if (pend) { pend = false; goto L_1270; }
L_1260: { ++fl.t; set_vi(i4, 0u + i2); }
L_1268: { ++fl.t; }
L_1270: { ++fl.t; pend = 0u != i4; }
L_1278: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 33u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } }
    if (pend) { pend = false; goto L_1290; }
L_1280: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1288: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 136u); std::memcpy(q + 0, &r.vf[0].w[0], 4); std::memcpy(q + 4, &r.vf[0].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_1290: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1298: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 136u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((4768u + sh) & 16383u));
    return;
L_1638: { ++fl.t; set_vi(i10, 0u + 1u); }
L_1640: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_1648: { ++fl.t; set_vi(i9, 0u + i12); }
L_1650: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_1658: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1660: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q, &r.vf[4], 16); set_vi(i12, i12 + 1u); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((5736u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

static __attribute__((noinline, cold)) void vu1_BF90FFA4C4D07F5F_c(Vu0Regs &r, std::uint8_t *mem) { vu1_BF90FFA4C4D07F5F_s<true>(r, mem); }

void vu1_BF90FFA4C4D07F5F(Vu0Regs &r, std::uint8_t *mem) {
    if ((r.status & 0xC0u) == 0xC0u) vu1_BF90FFA4C4D07F5F_s<false>(r, mem);
    else vu1_BF90FFA4C4D07F5F_c(r, mem);
}

template <bool kSticky>
static void vu1_C81557457B7A0C9E_s(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 16120u) & 16383u;
    (void)sh;
    v4u n1 = vshadow_eager(r.vf[1]);
    v4u n2 = vshadow_eager(r.vf[2]);
    v4u n3 = vshadow_eager(r.vf[3]);
    v4u n5 = vshadow_eager(r.vf[5]);
    v4u n6 = vshadow_eager(r.vf[6]);
    v4u n7 = vshadow_eager(r.vf[7]);
    v4u nacc = vshadow_eager(r.acc);
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i3 = r.vi[3];
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i5 = r.vi[5];
    std::uint16_t i8 = r.vi[8];
    std::uint16_t i9 = r.vi[9];
    std::uint16_t i10 = r.vi[10];
    std::uint16_t i11 = r.vi[11];
    std::uint16_t i12 = r.vi[12];
    std::uint16_t i14 = r.vi[14];
    std::uint16_t i15 = r.vi[15];
    goto L_3EF8;
L_0000: { ++fl.t; set_vi(i14, 0u + 112u); }
L_0008: { ++fl.t; set_vi(i2, 0u + 168u); }
L_0010: { ++fl.t; set_vi(i3, 0u + 164u); }
L_0018: { ++fl.t; set_vi(i4, 0u + 160u); }
L_0020: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 115u); const std::uint32_t v = i2; std::memcpy(q + 12, &v, 4); } }
L_0028: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 116u); const std::uint32_t v = i3; std::memcpy(q + 12, &v, 4); } }
L_0030: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 117u); const std::uint32_t v = i4; std::memcpy(q + 12, &v, 4); } }
L_0038: { ++fl.t; r.i = 1124073472u; }
L_0040: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vfix(vsplat(r.i))); { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = 0u; std::memcpy(q + 0, &v, 4); } vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.push_last<1u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0048: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = 0u; std::memcpy(q + 4, &v, 4); } vstore(r.vf[2], uv); n2 = vshadow_eager(r.vf[2]); }
L_0050: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 128u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0058: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 129u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0060: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 130u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0068: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 133u); std::memcpy(q + 12, &r.vf[1].w[3], 4); } }
L_0070: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 139u); std::memcpy(q, &r.vf[2], 16); } }
L_0078: { ++fl.t; set_vi(i1, 0u + 1u); }
L_0080: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = i1; std::memcpy(q + 8, &v, 4); } }
L_0088: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 37u) + 4, 2); set_vi(i2, v); } }
L_0090: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0098: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 2u) + 12, 2); set_vi(i12, v); } }
L_00A0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 4u) + 12, 2); set_vi(i11, v); } }
L_00A8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 131u); const std::uint32_t v = i2; std::memcpy(q + 12, &v, 4); } }
L_00B0: { ++fl.t; set_vi(i3, 0u + 27u); }
L_00B8: { ++fl.t; vu::kick(1, i3); }
L_00C0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 24u); vstore(r.vf[15], vsel(vload(r.vf[15]), vload_ptr(q), v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); } }
L_00C8: { ++fl.t; set_vi(i1, 0u + 8u); }
L_00D0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_00D8: { ++fl.t; set_vi(i1, 0u + 26u); }
L_00E0: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(0u))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } }
L_00E8: { ++fl.t; set_vi(i15, (((232u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_00F0: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
    if (pend) { pend = false; goto L_1638; }
L_00F8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 12, 2); set_vi(i8, v); } }
L_0100: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0108: { ++fl.t; set_vi(i15, (((264u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0110: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 4, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0A68; }
L_0118: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0120: { ++fl.t; set_vi(i15, (((288u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0128: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_0E20; }
L_0130: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0138: { ++fl.t; set_vi(i15, (((312u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0140: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 37u) + 0, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0D78; }
L_0148: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0150: { ++fl.t; set_vi(i15, (((336u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0158: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_1238; }
L_0160: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0168: { ++fl.t; set_vi(i15, (((360u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0170: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_0F70; }
L_0178: { ++fl.t; set_vi(i1, 0u + 66u); }
L_0180: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 45u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } }
L_0188: { ++fl.t; set_vi(i15, (((392u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0190: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
    if (pend) { pend = false; goto L_1638; }
L_0198: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 66u); std::memcpy(&r.vf[18], q, 16); } }
L_01A0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 67u); std::memcpy(&r.vf[19], q, 16); } }
L_01A8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 68u); std::memcpy(&r.vf[20], q, 16); } }
L_01B0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 69u); std::memcpy(&r.vf[21], q, 16); } }
L_01B8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 70u); std::memcpy(&r.vf[22], q, 16); } }
L_01C0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 71u); std::memcpy(&r.vf[23], q, 16); } }
L_01C8: { ++fl.t; ending = true; }
L_01D0: { ++fl.t; }
    if (ending) { fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; r.tpc = ((472u + sh) & 16383u); return; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, ((472u + sh) & 16383u));
    return;
L_0A68: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0u)); set_vi(i1, 0u + 8u); vstore(r.vf[3], uv); n3 = vshadow_eager(r.vf[3]); }
L_0A70: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i1, i5 & i1); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n5 = vshadow_eager(r.vf[5]); }
L_0A78: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, v4u{0u, 0u, 0u, 0x3F800000u}); { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 8, 2); set_vi(i2, v); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n5 = vshadow_eager(r.vf[5]); }
L_0A80: { ++fl.t; pend = 0u == i1; }
L_0A88: { ++fl.t; set_vi(i3, 0u + 3u); }
    if (pend) { pend = false; goto L_0A98; }
L_0A90: { ++fl.t; set_vi(i4, 0u + i2); }
L_0A98: { ++fl.t; set_vi(i1, 0u + 8u); }
L_0AA0: { ++fl.t; set_vi(i1, i4 & i1); }
L_0AA8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 37u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } n1 = vshadow_eager(r.vf[1]); }
L_0AB0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 139u); std::memcpy(&r.vf[6], q, 16); } n6 = vshadow_eager(r.vf[6]); }
L_0AB8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 140u); std::memcpy(&r.vf[7], q, 16); } n7 = vshadow_eager(r.vf[7]); }
L_0AC0: { ++fl.t; pend = 0u == i1; }
L_0AC8: { ++fl.t; set_vi(i2, 0u + 4u); }
    if (pend) { pend = false; goto L_0AD8; }
L_0AD0: { ++fl.t; const v4u uv = vaddn(n1, n1); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0AD8: { ++fl.t; const v4u uv = (v4u)((v4f)n5 + (v4f)vsplat(0x3F800000u)); set_vi(i5, i4 & i3); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0AE0: { ++fl.t; set_vi(i4, i4 & i2); }
L_0AE8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 124u) + 12, 2); set_vi(i1, v); } }
L_0AF0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 138u); std::memcpy(q + 12, &r.vf[1].w[3], 4); } }
L_0AF8: { ++fl.t; pend = 0u == i5; }
L_0B00: { ++fl.t; set_vi(i5, i5 - 1u); }
    if (pend) { pend = false; goto L_0B48; }
L_0B08: { ++fl.t; r.i = 1124073472u; }
L_0B10: { ++fl.t; pend = 0u == i5; }
L_0B18: { ++fl.t; }
    if (pend) { pend = false; goto L_0B70; }
L_0B20: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); set_vi(i2, 0u + 1u); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_0B28: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 16u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B30: { ++fl.t; set_vi(i1, i1 | i3); }
L_0B38: { ++fl.t; pend = true; }
L_0B40: { ++fl.t; set_vi(i3, 0u + 1u); }
    if (pend) { pend = false; goto L_0B98; }
L_0B48: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); r.i = 1132396544u; vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B50: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 32751u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B58: { ++fl.t; set_vi(i1, i1 & i3); }
L_0B60: { ++fl.t; pend = true; }
L_0B68: { ++fl.t; set_vi(i3, 0u + 0u); }
    if (pend) { pend = false; goto L_0B98; }
L_0B70: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); set_vi(i2, 0u + 0u); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B78: { ++fl.t; r.i = 1124073472u; }
L_0B80: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 16u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B88: { ++fl.t; set_vi(i1, i1 | i3); }
L_0B90: { ++fl.t; set_vi(i3, 0u + 1u); }
L_0B98: { ++fl.t; pend = 0u == i4; }
L_0BA0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 134u); const std::uint32_t v = i3; std::memcpy(q + 8, &v, 4); } }
    if (pend) { pend = false; goto L_0BB8; }
L_0BA8: { ++fl.t; r.i = 1073676288u; }
L_0BB0: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vfix(vsplat(r.i))); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0BB8: { ++fl.t; set_vi(i3, 0u + 27u); }
L_0BC0: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(r.vf[1].w[0])); { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n2 = vshadow_eager(r.vf[2]); }
L_0BC8: { ++fl.t; const v4u uv = vmuln(n6, vsplat(n1[3])); { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i3))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0BD0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0BD8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 132u); const std::uint32_t v = i2; std::memcpy(q + 12, &v, 4); } }
L_0BE0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 112u); std::memcpy(q + 0, &r.vf[3].w[0], 4); std::memcpy(q + 4, &r.vf[3].w[1], 4); } }
L_0BE8: { ++fl.t; const v4u uv = vmuln(n7, n6); { std::uint8_t *q = qword(mem, 0u + 137u); std::memcpy(q + 12, &r.vf[5].w[3], 4); } vstore(r.vf[7], uv); fl.push_last<15u, kSticky>(uv); n7 = uv; }
L_0BF0: { ++fl.t; set_vi(i2, i15 + 0u); }
L_0BF8: { ++fl.t; set_vi(i15, (((3064u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0C00: { ++fl.t; }
    if (pend) { pend = false; goto L_1638; }
L_0C08: { ++fl.t; set_vi(i15, i2 + 0u); }
L_0C10: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 133u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
L_0C18: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 143u); std::memcpy(q, &r.vf[7], 16); } }
L_0C20: { ++fl.t; pend = true; }
L_0C28: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 125u) + 12, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0FA8; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, ((3120u + sh) & 16383u));
    return;
L_0D78: { ++fl.t; set_vi(i1, 0u + 16u); }
L_0D80: { ++fl.t; set_vi(i1, i5 & i1); }
L_0D88: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 12, 2); set_vi(i2, v); } }
L_0D90: { ++fl.t; pend = 0u == i1; }
L_0D98: { ++fl.t; }
    if (pend) { pend = false; goto L_0DB0; }
L_0DA0: { ++fl.t; set_vi(i4, 0u + i2); }
L_0DA8: { ++fl.t; }
L_0DB0: { ++fl.t; pend = 0u == i4; }
L_0DB8: { ++fl.t; set_vi(i4, i4 - 1u); }
    if (pend) { pend = false; goto L_0E08; }
L_0DC0: { ++fl.t; set_vi(i1, 0u + 16384u); }
L_0DC8: { ++fl.t; pend = 0u == i4; }
L_0DD0: { ++fl.t; }
    if (pend) { pend = false; goto L_0DF0; }
L_0DD8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0DE0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0DE8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0DF0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0DF8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0E00: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0E08: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0E10: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0E18: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0E20: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 8, 2); set_vi(i3, v); } }
L_0E28: { ++fl.t; set_vi(i2, 0u + 27u); }
L_0E30: { ++fl.t; pend = 0u != i4; }
L_0E38: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 124u) + 12, 2); set_vi(i1, v); } }
    if (pend) { pend = false; goto L_0E50; }
L_0E40: { ++fl.t; pend = 0u != i3; }
L_0E48: { ++fl.t; }
    if (pend) { pend = false; goto L_0E68; }
L_0E50: { ++fl.t; set_vi(i3, 0u + 32735u); }
L_0E58: { ++fl.t; pend = true; }
L_0E60: { ++fl.t; set_vi(i1, i1 & i3); }
    if (pend) { pend = false; goto L_0E78; }
L_0E68: { ++fl.t; set_vi(i3, 0u + 32u); }
L_0E70: { ++fl.t; set_vi(i1, i1 | i3); }
L_0E78: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } }
L_0E80: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i2))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
L_0E88: { ++fl.t; pend = true; }
L_0E90: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
    if (pend) { pend = false; goto L_1638; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, ((3736u + sh) & 16383u));
    return;
L_0F70: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i1, 0u + 4u); vstore(r.vf[1], uv); n1 = vshadow_eager(r.vf[1]); }
L_0F78: { ++fl.t; set_vi(i1, i5 & i1); }
L_0F80: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 4, 2); set_vi(i2, v); } }
L_0F88: { ++fl.t; pend = 0u == i1; }
L_0F90: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 145u); std::memcpy(q + 0, &r.vf[1].w[0], 4); } }
    if (pend) { pend = false; goto L_0FA0; }
L_0F98: { ++fl.t; set_vi(i4, 0u + i2); }
L_0FA0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 125u); const std::uint32_t v = i4; std::memcpy(q + 12, &v, 4); } }
L_0FA8: { ++fl.t; const v4u uv = vmin(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0u)); { const std::uint8_t *q = qword(mem, 0u + 138u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[4], uv); n3 = vshadow_eager(r.vf[3]); }
L_0FB0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 141u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n3 = vshadow_eager(r.vf[3]); }
L_0FB8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 64u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow_eager(r.vf[1]); }
L_0FC0: { ++fl.t; pend = 0u != i4; }
L_0FC8: { ++fl.t; const v4u uv = vmuln(n3, vsplat(n3[3])); { const std::uint8_t *q = qword(mem, 0u + 142u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vshadow_eager(r.vf[2]); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; goto L_0FE8; }
L_0FD0: { ++fl.t; const v4u uv = vmuln(n1, n3); { std::uint8_t *q = qword(mem, 0u + 145u); std::memcpy(q + 0, &r.vf[0].w[0], 4); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); }
L_0FD8: { ++fl.t; const v4u uv = vmuln(n1, n3); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0FE0: { ++fl.t; const v4u uv = vaddn(nacc, (v4u)((v4f)n2 * (v4f)vsplat(0x3F800000u))); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0FE8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 138u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); std::memcpy(q + 8, &r.vf[4].w[2], 4); } }
L_0FF0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0FF8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 137u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, ((4096u + sh) & 16383u));
    return;
L_1238: { ++fl.t; set_vi(i1, 0u + 32u); }
L_1240: { ++fl.t; set_vi(i1, i5 & i1); }
L_1248: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 47u) + 0, 2); set_vi(i2, v); } }
L_1250: { ++fl.t; pend = 0u == i1; }
L_1258: { ++fl.t; }
    if (pend) { pend = false; goto L_1270; }
L_1260: { ++fl.t; set_vi(i4, 0u + i2); }
L_1268: { ++fl.t; }
L_1270: { ++fl.t; pend = 0u != i4; }
L_1278: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 33u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } }
    if (pend) { pend = false; goto L_1290; }
L_1280: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1288: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 136u); std::memcpy(q + 0, &r.vf[0].w[0], 4); std::memcpy(q + 4, &r.vf[0].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_1290: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1298: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 136u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, ((4768u + sh) & 16383u));
    return;
L_1638: { ++fl.t; set_vi(i10, 0u + 1u); }
L_1640: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_1648: { ++fl.t; set_vi(i9, 0u + i12); }
L_1650: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_1658: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1660: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q, &r.vf[4], 16); set_vi(i12, i12 + 1u); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, ((5736u + sh) & 16383u));
    return;
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
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

static __attribute__((noinline, cold)) void vu1_C81557457B7A0C9E_c(Vu0Regs &r, std::uint8_t *mem) { vu1_C81557457B7A0C9E_s<true>(r, mem); }

void vu1_C81557457B7A0C9E(Vu0Regs &r, std::uint8_t *mem) {
    if ((r.status & 0xC0u) == 0xC0u) vu1_C81557457B7A0C9E_s<false>(r, mem);
    else vu1_C81557457B7A0C9E_c(r, mem);
}

template <bool kSticky>
static void vu1_D792D35ECA45FCF7_s(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 16248u) & 16383u;
    (void)sh;
    v4u n1 = vshadow_eager(r.vf[1]);
    v4u n2 = vshadow_eager(r.vf[2]);
    v4u n3 = vshadow_eager(r.vf[3]);
    v4u n5 = vshadow_eager(r.vf[5]);
    v4u n6 = vshadow_eager(r.vf[6]);
    v4u n7 = vshadow_eager(r.vf[7]);
    v4u nacc = vshadow_eager(r.acc);
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i3 = r.vi[3];
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i5 = r.vi[5];
    std::uint16_t i8 = r.vi[8];
    std::uint16_t i9 = r.vi[9];
    std::uint16_t i10 = r.vi[10];
    std::uint16_t i11 = r.vi[11];
    std::uint16_t i12 = r.vi[12];
    std::uint16_t i14 = r.vi[14];
    std::uint16_t i15 = r.vi[15];
    goto L_3F78;
L_0000: { ++fl.t; set_vi(i14, 0u + 112u); }
L_0008: { ++fl.t; set_vi(i2, 0u + 168u); }
L_0010: { ++fl.t; set_vi(i3, 0u + 164u); }
L_0018: { ++fl.t; set_vi(i4, 0u + 160u); }
L_0020: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 115u); const std::uint32_t v = i2; std::memcpy(q + 12, &v, 4); } }
L_0028: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 116u); const std::uint32_t v = i3; std::memcpy(q + 12, &v, 4); } }
L_0030: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 117u); const std::uint32_t v = i4; std::memcpy(q + 12, &v, 4); } }
L_0038: { ++fl.t; r.i = 1124073472u; }
L_0040: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vfix(vsplat(r.i))); { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = 0u; std::memcpy(q + 0, &v, 4); } vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.push_last<1u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0048: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = 0u; std::memcpy(q + 4, &v, 4); } vstore(r.vf[2], uv); n2 = vshadow_eager(r.vf[2]); }
L_0050: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 128u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0058: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 129u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0060: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 130u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0068: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 133u); std::memcpy(q + 12, &r.vf[1].w[3], 4); } }
L_0070: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 139u); std::memcpy(q, &r.vf[2], 16); } }
L_0078: { ++fl.t; set_vi(i1, 0u + 1u); }
L_0080: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = i1; std::memcpy(q + 8, &v, 4); } }
L_0088: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 37u) + 4, 2); set_vi(i2, v); } }
L_0090: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0098: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 2u) + 12, 2); set_vi(i12, v); } }
L_00A0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 4u) + 12, 2); set_vi(i11, v); } }
L_00A8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 131u); const std::uint32_t v = i2; std::memcpy(q + 12, &v, 4); } }
L_00B0: { ++fl.t; set_vi(i3, 0u + 27u); }
L_00B8: { ++fl.t; vu::kick(1, i3); }
L_00C0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 24u); vstore(r.vf[15], vsel(vload(r.vf[15]), vload_ptr(q), v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); } }
L_00C8: { ++fl.t; set_vi(i1, 0u + 8u); }
L_00D0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_00D8: { ++fl.t; set_vi(i1, 0u + 26u); }
L_00E0: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(0u))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } }
L_00E8: { ++fl.t; set_vi(i15, (((232u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_00F0: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
    if (pend) { pend = false; goto L_1638; }
L_00F8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 12, 2); set_vi(i8, v); } }
L_0100: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0108: { ++fl.t; set_vi(i15, (((264u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0110: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 4, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0A68; }
L_0118: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0120: { ++fl.t; set_vi(i15, (((288u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0128: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_0E20; }
L_0130: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0138: { ++fl.t; set_vi(i15, (((312u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0140: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 37u) + 0, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0D78; }
L_0148: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0150: { ++fl.t; set_vi(i15, (((336u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0158: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_1238; }
L_0160: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0168: { ++fl.t; set_vi(i15, (((360u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0170: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_0F70; }
L_0178: { ++fl.t; set_vi(i1, 0u + 66u); }
L_0180: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 45u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } }
L_0188: { ++fl.t; set_vi(i15, (((392u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0190: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
    if (pend) { pend = false; goto L_1638; }
L_0198: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 66u); std::memcpy(&r.vf[18], q, 16); } }
L_01A0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 67u); std::memcpy(&r.vf[19], q, 16); } }
L_01A8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 68u); std::memcpy(&r.vf[20], q, 16); } }
L_01B0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 69u); std::memcpy(&r.vf[21], q, 16); } }
L_01B8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 70u); std::memcpy(&r.vf[22], q, 16); } }
L_01C0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 71u); std::memcpy(&r.vf[23], q, 16); } }
L_01C8: { ++fl.t; ending = true; }
L_01D0: { ++fl.t; }
    if (ending) { fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; r.tpc = ((472u + sh) & 16383u); return; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, ((472u + sh) & 16383u));
    return;
L_0A68: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0u)); set_vi(i1, 0u + 8u); vstore(r.vf[3], uv); n3 = vshadow_eager(r.vf[3]); }
L_0A70: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i1, i5 & i1); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n5 = vshadow_eager(r.vf[5]); }
L_0A78: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, v4u{0u, 0u, 0u, 0x3F800000u}); { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 8, 2); set_vi(i2, v); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n5 = vshadow_eager(r.vf[5]); }
L_0A80: { ++fl.t; pend = 0u == i1; }
L_0A88: { ++fl.t; set_vi(i3, 0u + 3u); }
    if (pend) { pend = false; goto L_0A98; }
L_0A90: { ++fl.t; set_vi(i4, 0u + i2); }
L_0A98: { ++fl.t; set_vi(i1, 0u + 8u); }
L_0AA0: { ++fl.t; set_vi(i1, i4 & i1); }
L_0AA8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 37u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } n1 = vshadow_eager(r.vf[1]); }
L_0AB0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 139u); std::memcpy(&r.vf[6], q, 16); } n6 = vshadow_eager(r.vf[6]); }
L_0AB8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 140u); std::memcpy(&r.vf[7], q, 16); } n7 = vshadow_eager(r.vf[7]); }
L_0AC0: { ++fl.t; pend = 0u == i1; }
L_0AC8: { ++fl.t; set_vi(i2, 0u + 4u); }
    if (pend) { pend = false; goto L_0AD8; }
L_0AD0: { ++fl.t; const v4u uv = vaddn(n1, n1); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0AD8: { ++fl.t; const v4u uv = (v4u)((v4f)n5 + (v4f)vsplat(0x3F800000u)); set_vi(i5, i4 & i3); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0AE0: { ++fl.t; set_vi(i4, i4 & i2); }
L_0AE8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 124u) + 12, 2); set_vi(i1, v); } }
L_0AF0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 138u); std::memcpy(q + 12, &r.vf[1].w[3], 4); } }
L_0AF8: { ++fl.t; pend = 0u == i5; }
L_0B00: { ++fl.t; set_vi(i5, i5 - 1u); }
    if (pend) { pend = false; goto L_0B48; }
L_0B08: { ++fl.t; r.i = 1124073472u; }
L_0B10: { ++fl.t; pend = 0u == i5; }
L_0B18: { ++fl.t; }
    if (pend) { pend = false; goto L_0B70; }
L_0B20: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); set_vi(i2, 0u + 1u); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_0B28: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 16u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B30: { ++fl.t; set_vi(i1, i1 | i3); }
L_0B38: { ++fl.t; pend = true; }
L_0B40: { ++fl.t; set_vi(i3, 0u + 1u); }
    if (pend) { pend = false; goto L_0B98; }
L_0B48: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); r.i = 1132396544u; vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B50: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 32751u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B58: { ++fl.t; set_vi(i1, i1 & i3); }
L_0B60: { ++fl.t; pend = true; }
L_0B68: { ++fl.t; set_vi(i3, 0u + 0u); }
    if (pend) { pend = false; goto L_0B98; }
L_0B70: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); set_vi(i2, 0u + 0u); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B78: { ++fl.t; r.i = 1124073472u; }
L_0B80: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 16u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B88: { ++fl.t; set_vi(i1, i1 | i3); }
L_0B90: { ++fl.t; set_vi(i3, 0u + 1u); }
L_0B98: { ++fl.t; pend = 0u == i4; }
L_0BA0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 134u); const std::uint32_t v = i3; std::memcpy(q + 8, &v, 4); } }
    if (pend) { pend = false; goto L_0BB8; }
L_0BA8: { ++fl.t; r.i = 1073676288u; }
L_0BB0: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vfix(vsplat(r.i))); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0BB8: { ++fl.t; set_vi(i3, 0u + 27u); }
L_0BC0: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(r.vf[1].w[0])); { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n2 = vshadow_eager(r.vf[2]); }
L_0BC8: { ++fl.t; const v4u uv = vmuln(n6, vsplat(n1[3])); { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i3))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0BD0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0BD8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 132u); const std::uint32_t v = i2; std::memcpy(q + 12, &v, 4); } }
L_0BE0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 112u); std::memcpy(q + 0, &r.vf[3].w[0], 4); std::memcpy(q + 4, &r.vf[3].w[1], 4); } }
L_0BE8: { ++fl.t; const v4u uv = vmuln(n7, n6); { std::uint8_t *q = qword(mem, 0u + 137u); std::memcpy(q + 12, &r.vf[5].w[3], 4); } vstore(r.vf[7], uv); fl.push_last<15u, kSticky>(uv); n7 = uv; }
L_0BF0: { ++fl.t; set_vi(i2, i15 + 0u); }
L_0BF8: { ++fl.t; set_vi(i15, (((3064u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0C00: { ++fl.t; }
    if (pend) { pend = false; goto L_1638; }
L_0C08: { ++fl.t; set_vi(i15, i2 + 0u); }
L_0C10: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 133u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
L_0C18: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 143u); std::memcpy(q, &r.vf[7], 16); } }
L_0C20: { ++fl.t; pend = true; }
L_0C28: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 125u) + 12, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0FA8; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, ((3120u + sh) & 16383u));
    return;
L_0D78: { ++fl.t; set_vi(i1, 0u + 16u); }
L_0D80: { ++fl.t; set_vi(i1, i5 & i1); }
L_0D88: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 12, 2); set_vi(i2, v); } }
L_0D90: { ++fl.t; pend = 0u == i1; }
L_0D98: { ++fl.t; }
    if (pend) { pend = false; goto L_0DB0; }
L_0DA0: { ++fl.t; set_vi(i4, 0u + i2); }
L_0DA8: { ++fl.t; }
L_0DB0: { ++fl.t; pend = 0u == i4; }
L_0DB8: { ++fl.t; set_vi(i4, i4 - 1u); }
    if (pend) { pend = false; goto L_0E08; }
L_0DC0: { ++fl.t; set_vi(i1, 0u + 16384u); }
L_0DC8: { ++fl.t; pend = 0u == i4; }
L_0DD0: { ++fl.t; }
    if (pend) { pend = false; goto L_0DF0; }
L_0DD8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0DE0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0DE8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0DF0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0DF8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0E00: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0E08: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0E10: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0E18: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0E20: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 8, 2); set_vi(i3, v); } }
L_0E28: { ++fl.t; set_vi(i2, 0u + 27u); }
L_0E30: { ++fl.t; pend = 0u != i4; }
L_0E38: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 124u) + 12, 2); set_vi(i1, v); } }
    if (pend) { pend = false; goto L_0E50; }
L_0E40: { ++fl.t; pend = 0u != i3; }
L_0E48: { ++fl.t; }
    if (pend) { pend = false; goto L_0E68; }
L_0E50: { ++fl.t; set_vi(i3, 0u + 32735u); }
L_0E58: { ++fl.t; pend = true; }
L_0E60: { ++fl.t; set_vi(i1, i1 & i3); }
    if (pend) { pend = false; goto L_0E78; }
L_0E68: { ++fl.t; set_vi(i3, 0u + 32u); }
L_0E70: { ++fl.t; set_vi(i1, i1 | i3); }
L_0E78: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } }
L_0E80: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i2))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
L_0E88: { ++fl.t; pend = true; }
L_0E90: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
    if (pend) { pend = false; goto L_1638; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, ((3736u + sh) & 16383u));
    return;
L_0F70: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i1, 0u + 4u); vstore(r.vf[1], uv); n1 = vshadow_eager(r.vf[1]); }
L_0F78: { ++fl.t; set_vi(i1, i5 & i1); }
L_0F80: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 4, 2); set_vi(i2, v); } }
L_0F88: { ++fl.t; pend = 0u == i1; }
L_0F90: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 145u); std::memcpy(q + 0, &r.vf[1].w[0], 4); } }
    if (pend) { pend = false; goto L_0FA0; }
L_0F98: { ++fl.t; set_vi(i4, 0u + i2); }
L_0FA0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 125u); const std::uint32_t v = i4; std::memcpy(q + 12, &v, 4); } }
L_0FA8: { ++fl.t; const v4u uv = vmin(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0u)); { const std::uint8_t *q = qword(mem, 0u + 138u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[4], uv); n3 = vshadow_eager(r.vf[3]); }
L_0FB0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 141u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n3 = vshadow_eager(r.vf[3]); }
L_0FB8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 64u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow_eager(r.vf[1]); }
L_0FC0: { ++fl.t; pend = 0u != i4; }
L_0FC8: { ++fl.t; const v4u uv = vmuln(n3, vsplat(n3[3])); { const std::uint8_t *q = qword(mem, 0u + 142u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vshadow_eager(r.vf[2]); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; goto L_0FE8; }
L_0FD0: { ++fl.t; const v4u uv = vmuln(n1, n3); { std::uint8_t *q = qword(mem, 0u + 145u); std::memcpy(q + 0, &r.vf[0].w[0], 4); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); }
L_0FD8: { ++fl.t; const v4u uv = vmuln(n1, n3); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0FE0: { ++fl.t; const v4u uv = vaddn(nacc, (v4u)((v4f)n2 * (v4f)vsplat(0x3F800000u))); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0FE8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 138u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); std::memcpy(q + 8, &r.vf[4].w[2], 4); } }
L_0FF0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0FF8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 137u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, ((4096u + sh) & 16383u));
    return;
L_1238: { ++fl.t; set_vi(i1, 0u + 32u); }
L_1240: { ++fl.t; set_vi(i1, i5 & i1); }
L_1248: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 47u) + 0, 2); set_vi(i2, v); } }
L_1250: { ++fl.t; pend = 0u == i1; }
L_1258: { ++fl.t; }
    if (pend) { pend = false; goto L_1270; }
L_1260: { ++fl.t; set_vi(i4, 0u + i2); }
L_1268: { ++fl.t; }
L_1270: { ++fl.t; pend = 0u != i4; }
L_1278: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 33u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } }
    if (pend) { pend = false; goto L_1290; }
L_1280: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1288: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 136u); std::memcpy(q + 0, &r.vf[0].w[0], 4); std::memcpy(q + 4, &r.vf[0].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_1290: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1298: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 136u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, ((4768u + sh) & 16383u));
    return;
L_1638: { ++fl.t; set_vi(i10, 0u + 1u); }
L_1640: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_1648: { ++fl.t; set_vi(i9, 0u + i12); }
L_1650: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_1658: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1660: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q, &r.vf[4], 16); set_vi(i12, i12 + 1u); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, ((5736u + sh) & 16383u));
    return;
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
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

static __attribute__((noinline, cold)) void vu1_D792D35ECA45FCF7_c(Vu0Regs &r, std::uint8_t *mem) { vu1_D792D35ECA45FCF7_s<true>(r, mem); }

void vu1_D792D35ECA45FCF7(Vu0Regs &r, std::uint8_t *mem) {
    if ((r.status & 0xC0u) == 0xC0u) vu1_D792D35ECA45FCF7_s<false>(r, mem);
    else vu1_D792D35ECA45FCF7_c(r, mem);
}

template <bool kSticky>
static void vu1_EAB265B5C365F08E_s(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 64u) & 16383u;
    (void)sh;
    v4u n1 = vshadow_eager(r.vf[1]);
    v4u n2 = vshadow_eager(r.vf[2]);
    v4u n3 = vshadow_eager(r.vf[3]);
    v4u n5 = vshadow_eager(r.vf[5]);
    v4u n6 = vshadow_eager(r.vf[6]);
    v4u n7 = vshadow_eager(r.vf[7]);
    v4u nacc = vshadow_eager(r.acc);
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i3 = r.vi[3];
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i5 = r.vi[5];
    std::uint16_t i8 = r.vi[8];
    std::uint16_t i9 = r.vi[9];
    std::uint16_t i10 = r.vi[10];
    std::uint16_t i11 = r.vi[11];
    std::uint16_t i12 = r.vi[12];
    std::uint16_t i15 = r.vi[15];
    goto L_0040;
L_0040: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vfix(vsplat(r.i))); { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = 0u; std::memcpy(q + 0, &v, 4); } vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.push_last<1u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0048: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = 0u; std::memcpy(q + 4, &v, 4); } vstore(r.vf[2], uv); n2 = vshadow_eager(r.vf[2]); }
L_0050: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 128u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0058: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 129u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0060: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 130u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0068: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 133u); std::memcpy(q + 12, &r.vf[1].w[3], 4); } }
L_0070: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 139u); std::memcpy(q, &r.vf[2], 16); } }
L_0078: { ++fl.t; set_vi(i1, 0u + 1u); }
L_0080: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = i1; std::memcpy(q + 8, &v, 4); } }
L_0088: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 37u) + 4, 2); set_vi(i2, v); } }
L_0090: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0098: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 2u) + 12, 2); set_vi(i12, v); } }
L_00A0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 4u) + 12, 2); set_vi(i11, v); } }
L_00A8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 131u); const std::uint32_t v = i2; std::memcpy(q + 12, &v, 4); } }
L_00B0: { ++fl.t; set_vi(i3, 0u + 27u); }
L_00B8: { ++fl.t; vu::kick(1, i3); }
L_00C0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 24u); vstore(r.vf[15], vsel(vload(r.vf[15]), vload_ptr(q), v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); } }
L_00C8: { ++fl.t; set_vi(i1, 0u + 8u); }
L_00D0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_00D8: { ++fl.t; set_vi(i1, 0u + 26u); }
L_00E0: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(0u))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } }
L_00E8: { ++fl.t; set_vi(i15, (((232u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_00F0: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
    if (pend) { pend = false; goto L_1638; }
L_00F8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 12, 2); set_vi(i8, v); } }
L_0100: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0108: { ++fl.t; set_vi(i15, (((264u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0110: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 4, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0A68; }
L_0118: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0120: { ++fl.t; set_vi(i15, (((288u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0128: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_0E20; }
L_0130: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0138: { ++fl.t; set_vi(i15, (((312u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0140: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 37u) + 0, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0D78; }
L_0148: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0150: { ++fl.t; set_vi(i15, (((336u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0158: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_1238; }
L_0160: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0168: { ++fl.t; set_vi(i15, (((360u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0170: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_0F70; }
L_0178: { ++fl.t; set_vi(i1, 0u + 66u); }
L_0180: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 45u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } }
L_0188: { ++fl.t; set_vi(i15, (((392u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0190: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
    if (pend) { pend = false; goto L_1638; }
L_0198: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 66u); std::memcpy(&r.vf[18], q, 16); } }
L_01A0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 67u); std::memcpy(&r.vf[19], q, 16); } }
L_01A8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 68u); std::memcpy(&r.vf[20], q, 16); } }
L_01B0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 69u); std::memcpy(&r.vf[21], q, 16); } }
L_01B8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 70u); std::memcpy(&r.vf[22], q, 16); } }
L_01C0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 71u); std::memcpy(&r.vf[23], q, 16); } }
L_01C8: { ++fl.t; ending = true; }
L_01D0: { ++fl.t; }
    if (ending) { fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; r.tpc = ((472u + sh) & 16383u); return; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((472u + sh) & 16383u));
    return;
L_0A68: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0u)); set_vi(i1, 0u + 8u); vstore(r.vf[3], uv); n3 = vshadow_eager(r.vf[3]); }
L_0A70: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i1, i5 & i1); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n5 = vshadow_eager(r.vf[5]); }
L_0A78: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, v4u{0u, 0u, 0u, 0x3F800000u}); { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 8, 2); set_vi(i2, v); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n5 = vshadow_eager(r.vf[5]); }
L_0A80: { ++fl.t; pend = 0u == i1; }
L_0A88: { ++fl.t; set_vi(i3, 0u + 3u); }
    if (pend) { pend = false; goto L_0A98; }
L_0A90: { ++fl.t; set_vi(i4, 0u + i2); }
L_0A98: { ++fl.t; set_vi(i1, 0u + 8u); }
L_0AA0: { ++fl.t; set_vi(i1, i4 & i1); }
L_0AA8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 37u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } n1 = vshadow_eager(r.vf[1]); }
L_0AB0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 139u); std::memcpy(&r.vf[6], q, 16); } n6 = vshadow_eager(r.vf[6]); }
L_0AB8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 140u); std::memcpy(&r.vf[7], q, 16); } n7 = vshadow_eager(r.vf[7]); }
L_0AC0: { ++fl.t; pend = 0u == i1; }
L_0AC8: { ++fl.t; set_vi(i2, 0u + 4u); }
    if (pend) { pend = false; goto L_0AD8; }
L_0AD0: { ++fl.t; const v4u uv = vaddn(n1, n1); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0AD8: { ++fl.t; const v4u uv = (v4u)((v4f)n5 + (v4f)vsplat(0x3F800000u)); set_vi(i5, i4 & i3); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0AE0: { ++fl.t; set_vi(i4, i4 & i2); }
L_0AE8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 124u) + 12, 2); set_vi(i1, v); } }
L_0AF0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 138u); std::memcpy(q + 12, &r.vf[1].w[3], 4); } }
L_0AF8: { ++fl.t; pend = 0u == i5; }
L_0B00: { ++fl.t; set_vi(i5, i5 - 1u); }
    if (pend) { pend = false; goto L_0B48; }
L_0B08: { ++fl.t; r.i = 1124073472u; }
L_0B10: { ++fl.t; pend = 0u == i5; }
L_0B18: { ++fl.t; }
    if (pend) { pend = false; goto L_0B70; }
L_0B20: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); set_vi(i2, 0u + 1u); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_0B28: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 16u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B30: { ++fl.t; set_vi(i1, i1 | i3); }
L_0B38: { ++fl.t; pend = true; }
L_0B40: { ++fl.t; set_vi(i3, 0u + 1u); }
    if (pend) { pend = false; goto L_0B98; }
L_0B48: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); r.i = 1132396544u; vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B50: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 32751u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B58: { ++fl.t; set_vi(i1, i1 & i3); }
L_0B60: { ++fl.t; pend = true; }
L_0B68: { ++fl.t; set_vi(i3, 0u + 0u); }
    if (pend) { pend = false; goto L_0B98; }
L_0B70: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); set_vi(i2, 0u + 0u); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B78: { ++fl.t; r.i = 1124073472u; }
L_0B80: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 16u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B88: { ++fl.t; set_vi(i1, i1 | i3); }
L_0B90: { ++fl.t; set_vi(i3, 0u + 1u); }
L_0B98: { ++fl.t; pend = 0u == i4; }
L_0BA0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 134u); const std::uint32_t v = i3; std::memcpy(q + 8, &v, 4); } }
    if (pend) { pend = false; goto L_0BB8; }
L_0BA8: { ++fl.t; r.i = 1073676288u; }
L_0BB0: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vfix(vsplat(r.i))); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0BB8: { ++fl.t; set_vi(i3, 0u + 27u); }
L_0BC0: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(r.vf[1].w[0])); { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n2 = vshadow_eager(r.vf[2]); }
L_0BC8: { ++fl.t; const v4u uv = vmuln(n6, vsplat(n1[3])); { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i3))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0BD0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0BD8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 132u); const std::uint32_t v = i2; std::memcpy(q + 12, &v, 4); } }
L_0BE0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 112u); std::memcpy(q + 0, &r.vf[3].w[0], 4); std::memcpy(q + 4, &r.vf[3].w[1], 4); } }
L_0BE8: { ++fl.t; const v4u uv = vmuln(n7, n6); { std::uint8_t *q = qword(mem, 0u + 137u); std::memcpy(q + 12, &r.vf[5].w[3], 4); } vstore(r.vf[7], uv); fl.push_last<15u, kSticky>(uv); n7 = uv; }
L_0BF0: { ++fl.t; set_vi(i2, i15 + 0u); }
L_0BF8: { ++fl.t; set_vi(i15, (((3064u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0C00: { ++fl.t; }
    if (pend) { pend = false; goto L_1638; }
L_0C08: { ++fl.t; set_vi(i15, i2 + 0u); }
L_0C10: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 133u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
L_0C18: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 143u); std::memcpy(q, &r.vf[7], 16); } }
L_0C20: { ++fl.t; pend = true; }
L_0C28: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 125u) + 12, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0FA8; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((3120u + sh) & 16383u));
    return;
L_0D78: { ++fl.t; set_vi(i1, 0u + 16u); }
L_0D80: { ++fl.t; set_vi(i1, i5 & i1); }
L_0D88: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 12, 2); set_vi(i2, v); } }
L_0D90: { ++fl.t; pend = 0u == i1; }
L_0D98: { ++fl.t; }
    if (pend) { pend = false; goto L_0DB0; }
L_0DA0: { ++fl.t; set_vi(i4, 0u + i2); }
L_0DA8: { ++fl.t; }
L_0DB0: { ++fl.t; pend = 0u == i4; }
L_0DB8: { ++fl.t; set_vi(i4, i4 - 1u); }
    if (pend) { pend = false; goto L_0E08; }
L_0DC0: { ++fl.t; set_vi(i1, 0u + 16384u); }
L_0DC8: { ++fl.t; pend = 0u == i4; }
L_0DD0: { ++fl.t; }
    if (pend) { pend = false; goto L_0DF0; }
L_0DD8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0DE0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0DE8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0DF0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0DF8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0E00: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0E08: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0E10: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0E18: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0E20: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 8, 2); set_vi(i3, v); } }
L_0E28: { ++fl.t; set_vi(i2, 0u + 27u); }
L_0E30: { ++fl.t; pend = 0u != i4; }
L_0E38: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 124u) + 12, 2); set_vi(i1, v); } }
    if (pend) { pend = false; goto L_0E50; }
L_0E40: { ++fl.t; pend = 0u != i3; }
L_0E48: { ++fl.t; }
    if (pend) { pend = false; goto L_0E68; }
L_0E50: { ++fl.t; set_vi(i3, 0u + 32735u); }
L_0E58: { ++fl.t; pend = true; }
L_0E60: { ++fl.t; set_vi(i1, i1 & i3); }
    if (pend) { pend = false; goto L_0E78; }
L_0E68: { ++fl.t; set_vi(i3, 0u + 32u); }
L_0E70: { ++fl.t; set_vi(i1, i1 | i3); }
L_0E78: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } }
L_0E80: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i2))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
L_0E88: { ++fl.t; pend = true; }
L_0E90: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
    if (pend) { pend = false; goto L_1638; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((3736u + sh) & 16383u));
    return;
L_0F70: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i1, 0u + 4u); vstore(r.vf[1], uv); n1 = vshadow_eager(r.vf[1]); }
L_0F78: { ++fl.t; set_vi(i1, i5 & i1); }
L_0F80: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 4, 2); set_vi(i2, v); } }
L_0F88: { ++fl.t; pend = 0u == i1; }
L_0F90: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 145u); std::memcpy(q + 0, &r.vf[1].w[0], 4); } }
    if (pend) { pend = false; goto L_0FA0; }
L_0F98: { ++fl.t; set_vi(i4, 0u + i2); }
L_0FA0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 125u); const std::uint32_t v = i4; std::memcpy(q + 12, &v, 4); } }
L_0FA8: { ++fl.t; const v4u uv = vmin(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0u)); { const std::uint8_t *q = qword(mem, 0u + 138u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[4], uv); n3 = vshadow_eager(r.vf[3]); }
L_0FB0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 141u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n3 = vshadow_eager(r.vf[3]); }
L_0FB8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 64u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow_eager(r.vf[1]); }
L_0FC0: { ++fl.t; pend = 0u != i4; }
L_0FC8: { ++fl.t; const v4u uv = vmuln(n3, vsplat(n3[3])); { const std::uint8_t *q = qword(mem, 0u + 142u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vshadow_eager(r.vf[2]); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; goto L_0FE8; }
L_0FD0: { ++fl.t; const v4u uv = vmuln(n1, n3); { std::uint8_t *q = qword(mem, 0u + 145u); std::memcpy(q + 0, &r.vf[0].w[0], 4); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); }
L_0FD8: { ++fl.t; const v4u uv = vmuln(n1, n3); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0FE0: { ++fl.t; const v4u uv = vaddn(nacc, (v4u)((v4f)n2 * (v4f)vsplat(0x3F800000u))); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0FE8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 138u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); std::memcpy(q + 8, &r.vf[4].w[2], 4); } }
L_0FF0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0FF8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 137u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((4096u + sh) & 16383u));
    return;
L_1238: { ++fl.t; set_vi(i1, 0u + 32u); }
L_1240: { ++fl.t; set_vi(i1, i5 & i1); }
L_1248: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 47u) + 0, 2); set_vi(i2, v); } }
L_1250: { ++fl.t; pend = 0u == i1; }
L_1258: { ++fl.t; }
    if (pend) { pend = false; goto L_1270; }
L_1260: { ++fl.t; set_vi(i4, 0u + i2); }
L_1268: { ++fl.t; }
L_1270: { ++fl.t; pend = 0u != i4; }
L_1278: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 33u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } }
    if (pend) { pend = false; goto L_1290; }
L_1280: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1288: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 136u); std::memcpy(q + 0, &r.vf[0].w[0], 4); std::memcpy(q + 4, &r.vf[0].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_1290: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1298: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 136u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((4768u + sh) & 16383u));
    return;
L_1638: { ++fl.t; set_vi(i10, 0u + 1u); }
L_1640: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_1648: { ++fl.t; set_vi(i9, 0u + i12); }
L_1650: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_1658: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1660: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q, &r.vf[4], 16); set_vi(i12, i12 + 1u); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((5736u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

static __attribute__((noinline, cold)) void vu1_EAB265B5C365F08E_c(Vu0Regs &r, std::uint8_t *mem) { vu1_EAB265B5C365F08E_s<true>(r, mem); }

void vu1_EAB265B5C365F08E(Vu0Regs &r, std::uint8_t *mem) {
    if ((r.status & 0xC0u) == 0xC0u) vu1_EAB265B5C365F08E_s<false>(r, mem);
    else vu1_EAB265B5C365F08E_c(r, mem);
}

template <bool kSticky>
static void vu1_D4B88996F82FA530_s(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 248u) & 16383u;
    (void)sh;
    v4u n1 = vshadow_eager(r.vf[1]);
    v4u n2 = vshadow_eager(r.vf[2]);
    v4u n3 = vshadow_eager(r.vf[3]);
    v4u n5 = vshadow_eager(r.vf[5]);
    v4u n6 = vshadow_eager(r.vf[6]);
    v4u n7 = vshadow_eager(r.vf[7]);
    v4u nacc = vshadow_eager(r.acc);
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i3 = r.vi[3];
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i5 = r.vi[5];
    std::uint16_t i8 = r.vi[8];
    std::uint16_t i9 = r.vi[9];
    std::uint16_t i10 = r.vi[10];
    std::uint16_t i12 = r.vi[12];
    std::uint16_t i15 = r.vi[15];
    goto L_00F8;
L_00F8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 12, 2); set_vi(i8, v); } }
L_0100: { fl.t += 4u; set_vi(i5, i8 + 0u); }
L_0108: { ++fl.t; set_vi(i15, (((264u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0110: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 4, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0A68; }
L_0118: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0120: { ++fl.t; set_vi(i15, (((288u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0128: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_0E20; }
L_0130: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0138: { ++fl.t; set_vi(i15, (((312u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0140: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 37u) + 0, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0D78; }
L_0148: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0150: { ++fl.t; set_vi(i15, (((336u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0158: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_1238; }
L_0160: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0168: { ++fl.t; set_vi(i15, (((360u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0170: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_0F70; }
L_0178: { ++fl.t; set_vi(i1, 0u + 66u); }
L_0180: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 45u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } }
L_0188: { ++fl.t; set_vi(i15, (((392u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0190: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
    if (pend) { pend = false; goto L_1638; }
L_0198: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 66u); std::memcpy(&r.vf[18], q, 16); } }
L_01A0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 67u); std::memcpy(&r.vf[19], q, 16); } }
L_01A8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 68u); std::memcpy(&r.vf[20], q, 16); } }
L_01B0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 69u); std::memcpy(&r.vf[21], q, 16); } }
L_01B8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 70u); std::memcpy(&r.vf[22], q, 16); } }
L_01C0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 71u); std::memcpy(&r.vf[23], q, 16); } }
L_01C8: { ++fl.t; ending = true; }
L_01D0: { ++fl.t; }
    if (ending) { fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; r.tpc = ((472u + sh) & 16383u); return; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((472u + sh) & 16383u));
    return;
L_0A68: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0u)); set_vi(i1, 0u + 8u); vstore(r.vf[3], uv); n3 = vshadow_eager(r.vf[3]); }
L_0A70: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i1, i5 & i1); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n5 = vshadow_eager(r.vf[5]); }
L_0A78: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, v4u{0u, 0u, 0u, 0x3F800000u}); { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 8, 2); set_vi(i2, v); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n5 = vshadow_eager(r.vf[5]); }
L_0A80: { ++fl.t; pend = 0u == i1; }
L_0A88: { ++fl.t; set_vi(i3, 0u + 3u); }
    if (pend) { pend = false; goto L_0A98; }
L_0A90: { fl.t += 2u; set_vi(i4, 0u + i2); }
L_0A98: { ++fl.t; set_vi(i1, 0u + 8u); }
L_0AA0: { ++fl.t; set_vi(i1, i4 & i1); }
L_0AA8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 37u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } n1 = vshadow_eager(r.vf[1]); }
L_0AB0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 139u); std::memcpy(&r.vf[6], q, 16); } n6 = vshadow_eager(r.vf[6]); }
L_0AB8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 140u); std::memcpy(&r.vf[7], q, 16); } n7 = vshadow_eager(r.vf[7]); }
L_0AC0: { ++fl.t; pend = 0u == i1; }
L_0AC8: { ++fl.t; set_vi(i2, 0u + 4u); }
    if (pend) { pend = false; goto L_0AD8; }
L_0AD0: { ++fl.t; const v4u uv = vaddn(n1, n1); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0AD8: { ++fl.t; const v4u uv = (v4u)((v4f)n5 + (v4f)vsplat(0x3F800000u)); set_vi(i5, i4 & i3); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0AE0: { ++fl.t; set_vi(i4, i4 & i2); }
L_0AE8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 124u) + 12, 2); set_vi(i1, v); } }
L_0AF0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 138u); std::memcpy(q + 12, &r.vf[1].w[3], 4); } }
L_0AF8: { ++fl.t; pend = 0u == i5; }
L_0B00: { ++fl.t; set_vi(i5, i5 - 1u); }
    if (pend) { pend = false; goto L_0B48; }
L_0B08: { ++fl.t; r.i = 1124073472u; }
L_0B10: { ++fl.t; pend = 0u == i5; }
L_0B18: { ++fl.t; }
    if (pend) { pend = false; goto L_0B70; }
L_0B20: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); set_vi(i2, 0u + 1u); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_0B28: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 16u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B30: { ++fl.t; set_vi(i1, i1 | i3); }
L_0B38: { ++fl.t; pend = true; }
L_0B40: { ++fl.t; set_vi(i3, 0u + 1u); }
    if (pend) { pend = false; goto L_0B98; }
L_0B48: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); r.i = 1132396544u; vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B50: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 32751u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B58: { ++fl.t; set_vi(i1, i1 & i3); }
L_0B60: { ++fl.t; pend = true; }
L_0B68: { ++fl.t; set_vi(i3, 0u + 0u); }
    if (pend) { pend = false; goto L_0B98; }
L_0B70: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); set_vi(i2, 0u + 0u); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B78: { ++fl.t; r.i = 1124073472u; }
L_0B80: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 16u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B88: { ++fl.t; set_vi(i1, i1 | i3); }
L_0B90: { ++fl.t; set_vi(i3, 0u + 1u); }
L_0B98: { ++fl.t; pend = 0u == i4; }
L_0BA0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 134u); const std::uint32_t v = i3; std::memcpy(q + 8, &v, 4); } }
    if (pend) { pend = false; goto L_0BB8; }
L_0BA8: { ++fl.t; r.i = 1073676288u; }
L_0BB0: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vfix(vsplat(r.i))); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0BB8: { ++fl.t; set_vi(i3, 0u + 27u); }
L_0BC0: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(r.vf[1].w[0])); { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n2 = vshadow_eager(r.vf[2]); }
L_0BC8: { ++fl.t; const v4u uv = vmuln(n6, vsplat(n1[3])); { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i3))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0BD0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0BD8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 132u); const std::uint32_t v = i2; std::memcpy(q + 12, &v, 4); } }
L_0BE0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 112u); std::memcpy(q + 0, &r.vf[3].w[0], 4); std::memcpy(q + 4, &r.vf[3].w[1], 4); } }
L_0BE8: { ++fl.t; const v4u uv = vmuln(n7, n6); { std::uint8_t *q = qword(mem, 0u + 137u); std::memcpy(q + 12, &r.vf[5].w[3], 4); } vstore(r.vf[7], uv); fl.push_last<15u, kSticky>(uv); n7 = uv; }
L_0BF0: { ++fl.t; set_vi(i2, i15 + 0u); }
L_0BF8: { ++fl.t; set_vi(i15, (((3064u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0C00: { ++fl.t; }
    if (pend) { pend = false; goto L_1638; }
L_0C08: { ++fl.t; set_vi(i15, i2 + 0u); }
L_0C10: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 133u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
L_0C18: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 143u); std::memcpy(q, &r.vf[7], 16); } }
L_0C20: { ++fl.t; pend = true; }
L_0C28: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 125u) + 12, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0FA8; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((3120u + sh) & 16383u));
    return;
L_0D78: { ++fl.t; set_vi(i1, 0u + 16u); }
L_0D80: { ++fl.t; set_vi(i1, i5 & i1); }
L_0D88: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 12, 2); set_vi(i2, v); } }
L_0D90: { ++fl.t; pend = 0u == i1; }
L_0D98: { ++fl.t; }
    if (pend) { pend = false; goto L_0DB0; }
L_0DA0: { ++fl.t; set_vi(i4, 0u + i2); }
L_0DA8: { ++fl.t; }
L_0DB0: { ++fl.t; pend = 0u == i4; }
L_0DB8: { ++fl.t; set_vi(i4, i4 - 1u); }
    if (pend) { pend = false; goto L_0E08; }
L_0DC0: { ++fl.t; set_vi(i1, 0u + 16384u); }
L_0DC8: { ++fl.t; pend = 0u == i4; }
L_0DD0: { ++fl.t; }
    if (pend) { pend = false; goto L_0DF0; }
L_0DD8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0DE0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0DE8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0DF0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0DF8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0E00: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0E08: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0E10: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0E18: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0E20: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 8, 2); set_vi(i3, v); } }
L_0E28: { ++fl.t; set_vi(i2, 0u + 27u); }
L_0E30: { ++fl.t; pend = 0u != i4; }
L_0E38: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 124u) + 12, 2); set_vi(i1, v); } }
    if (pend) { pend = false; goto L_0E50; }
L_0E40: { ++fl.t; pend = 0u != i3; }
L_0E48: { ++fl.t; }
    if (pend) { pend = false; goto L_0E68; }
L_0E50: { ++fl.t; set_vi(i3, 0u + 32735u); }
L_0E58: { ++fl.t; pend = true; }
L_0E60: { ++fl.t; set_vi(i1, i1 & i3); }
    if (pend) { pend = false; goto L_0E78; }
L_0E68: { ++fl.t; set_vi(i3, 0u + 32u); }
L_0E70: { ++fl.t; set_vi(i1, i1 | i3); }
L_0E78: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } }
L_0E80: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i2))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
L_0E88: { ++fl.t; pend = true; }
L_0E90: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
    if (pend) { pend = false; goto L_1638; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((3736u + sh) & 16383u));
    return;
L_0F70: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i1, 0u + 4u); vstore(r.vf[1], uv); n1 = vshadow_eager(r.vf[1]); }
L_0F78: { ++fl.t; set_vi(i1, i5 & i1); }
L_0F80: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 4, 2); set_vi(i2, v); } }
L_0F88: { ++fl.t; pend = 0u == i1; }
L_0F90: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 145u); std::memcpy(q + 0, &r.vf[1].w[0], 4); } }
    if (pend) { pend = false; goto L_0FA0; }
L_0F98: { ++fl.t; set_vi(i4, 0u + i2); }
L_0FA0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 125u); const std::uint32_t v = i4; std::memcpy(q + 12, &v, 4); } }
L_0FA8: { ++fl.t; const v4u uv = vmin(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0u)); { const std::uint8_t *q = qword(mem, 0u + 138u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[4], uv); n3 = vshadow_eager(r.vf[3]); }
L_0FB0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 141u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n3 = vshadow_eager(r.vf[3]); }
L_0FB8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 64u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow_eager(r.vf[1]); }
L_0FC0: { ++fl.t; pend = 0u != i4; }
L_0FC8: { ++fl.t; const v4u uv = vmuln(n3, vsplat(n3[3])); { const std::uint8_t *q = qword(mem, 0u + 142u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vshadow_eager(r.vf[2]); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; goto L_0FE8; }
L_0FD0: { ++fl.t; const v4u uv = vmuln(n1, n3); { std::uint8_t *q = qword(mem, 0u + 145u); std::memcpy(q + 0, &r.vf[0].w[0], 4); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); }
L_0FD8: { ++fl.t; const v4u uv = vmuln(n1, n3); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0FE0: { ++fl.t; const v4u uv = vaddn(nacc, (v4u)((v4f)n2 * (v4f)vsplat(0x3F800000u))); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0FE8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 138u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); std::memcpy(q + 8, &r.vf[4].w[2], 4); } }
L_0FF0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0FF8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 137u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((4096u + sh) & 16383u));
    return;
L_1238: { ++fl.t; set_vi(i1, 0u + 32u); }
L_1240: { ++fl.t; set_vi(i1, i5 & i1); }
L_1248: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 47u) + 0, 2); set_vi(i2, v); } }
L_1250: { ++fl.t; pend = 0u == i1; }
L_1258: { ++fl.t; }
    if (pend) { pend = false; goto L_1270; }
L_1260: { ++fl.t; set_vi(i4, 0u + i2); }
L_1268: { ++fl.t; }
L_1270: { ++fl.t; pend = 0u != i4; }
L_1278: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 33u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } }
    if (pend) { pend = false; goto L_1290; }
L_1280: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1288: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 136u); std::memcpy(q + 0, &r.vf[0].w[0], 4); std::memcpy(q + 4, &r.vf[0].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_1290: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1298: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 136u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((4768u + sh) & 16383u));
    return;
L_1638: { ++fl.t; set_vi(i10, 0u + 1u); }
L_1640: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_1648: { ++fl.t; set_vi(i9, 0u + i12); }
L_1650: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_1658: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1660: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q, &r.vf[4], 16); set_vi(i12, i12 + 1u); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((5736u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

static __attribute__((noinline, cold)) void vu1_D4B88996F82FA530_c(Vu0Regs &r, std::uint8_t *mem) { vu1_D4B88996F82FA530_s<true>(r, mem); }

void vu1_D4B88996F82FA530(Vu0Regs &r, std::uint8_t *mem) {
    if ((r.status & 0xC0u) == 0xC0u) vu1_D4B88996F82FA530_s<false>(r, mem);
    else vu1_D4B88996F82FA530_c(r, mem);
}

template <bool kSticky>
static void vu1_8EBC2129870EE54B_s(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 3080u) & 16383u;
    (void)sh;
    unsigned st = 0u;
    static constexpr std::uint8_t ks_0FE8[] = {0, 1};
    static constexpr std::uint8_t ks_0FF0[] = {0, 0};
    static constexpr std::uint8_t ks_0FF8[] = {1, 0};
    static constexpr std::uint8_t ke_0FE8_0FF0[] = {0, 1};
    static constexpr std::uint8_t ke_0FF0_0FF8[] = {0, 1};
    v4u n1 = vshadow_eager(r.vf[1]);
    v4u n2 = vshadow_eager(r.vf[2]);
    v4u n3 = vshadow_eager(r.vf[3]);
    v4u nacc = vshadow_eager(r.acc);
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i15 = r.vi[15];
    goto L_0C08;
L_0C08: { ++fl.t; set_vi(i15, i2 + 0u); }
L_0C10: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 133u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
L_0C18: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 143u); std::memcpy(q, &r.vf[7], 16); } }
L_0C20: { ++fl.t; pend = true; }
L_0C28: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 125u) + 12, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0FA8; }
    fl.finish(r); r.vi[4] = i4; r.vi[15] = i15; vu::interpret(1, ((3120u + sh) & 16383u));
    return;
L_0FA8: { ++fl.t; const v4u uv = vmin(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0u)); { const std::uint8_t *q = qword(mem, 0u + 138u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[4], uv); n3 = vshadow_eager(r.vf[3]); }
L_0FB0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 141u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n3 = vshadow_eager(r.vf[3]); }
L_0FB8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 64u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow_eager(r.vf[1]); }
L_0FC0: { ++fl.t; pend = 0u != i4; }
L_0FC8: { fl.t += 2u; const v4u uv = vmuln(n3, vsplat(n3[3])); { const std::uint8_t *q = qword(mem, 0u + 142u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vshadow_eager(r.vf[2]); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; st = 0u; goto L_0FE8; }
L_0FD0: { fl.t += 4u; const v4u uv = vmuln(n1, n3); { std::uint8_t *q = qword(mem, 0u + 145u); std::memcpy(q + 0, &r.vf[0].w[0], 4); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); }
L_0FD8: { ++fl.t; const v4u uv = vmuln(n1, n3); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0FE0: { ++fl.t; const v4u uv = vaddn(nacc, (v4u)((v4f)n2 * (v4f)vsplat(0x3F800000u))); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    st = 1u; 
L_0FE8: { fl.t += 1u + ks_0FE8[st]; { std::uint8_t *q = qword(mem, 0u + 138u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); std::memcpy(q + 8, &r.vf[4].w[2], 4); } }
    st = ke_0FE8_0FF0[st]; 
L_0FF0: { fl.t += 1u + ks_0FF0[st]; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
    st = ke_0FF0_0FF8[st]; 
L_0FF8: { fl.t += 1u + ks_0FF8[st]; { std::uint8_t *q = qword(mem, 0u + 137u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[4] = i4; r.vi[15] = i15; vu::interpret(1, ((4096u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[4] = i4; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

static __attribute__((noinline, cold)) void vu1_8EBC2129870EE54B_c(Vu0Regs &r, std::uint8_t *mem) { vu1_8EBC2129870EE54B_s<true>(r, mem); }

void vu1_8EBC2129870EE54B(Vu0Regs &r, std::uint8_t *mem) {
    if ((r.status & 0xC0u) == 0xC0u) vu1_8EBC2129870EE54B_s<false>(r, mem);
    else vu1_8EBC2129870EE54B_c(r, mem);
}

template <bool kSticky>
static void vu1_D8D9ADBC35528BCF_s(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 280u) & 16383u;
    (void)sh;
    unsigned st = 0u;
    static constexpr std::uint8_t ks_0E50[] = {0, 0};
    static constexpr std::uint8_t ks_0E58[] = {0, 0};
    static constexpr std::uint8_t ks_0E60[] = {1, 0};
    static constexpr std::uint8_t ke_0E50_0E58[] = {0, 1};
    static constexpr std::uint8_t ke_0E58_0E60[] = {0, 1};
    v4u n1 = vshadow_eager(r.vf[1]);
    v4u n2 = vshadow_eager(r.vf[2]);
    v4u n3 = vshadow_eager(r.vf[3]);
    v4u nacc = vshadow_eager(r.acc);
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i3 = r.vi[3];
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i5 = r.vi[5];
    std::uint16_t i8 = r.vi[8];
    std::uint16_t i9 = r.vi[9];
    std::uint16_t i10 = r.vi[10];
    std::uint16_t i12 = r.vi[12];
    std::uint16_t i15 = r.vi[15];
    goto L_0118;
L_0118: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0120: { ++fl.t; set_vi(i15, (((288u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0128: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_0E20; }
L_0130: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0138: { ++fl.t; set_vi(i15, (((312u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0140: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 37u) + 0, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0D78; }
L_0148: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0150: { ++fl.t; set_vi(i15, (((336u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0158: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_1238; }
L_0160: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0168: { ++fl.t; set_vi(i15, (((360u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0170: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_0F70; }
L_0178: { ++fl.t; set_vi(i1, 0u + 66u); }
L_0180: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 45u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } }
L_0188: { ++fl.t; set_vi(i15, (((392u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0190: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
    if (pend) { pend = false; goto L_1638; }
L_0198: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 66u); std::memcpy(&r.vf[18], q, 16); } }
L_01A0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 67u); std::memcpy(&r.vf[19], q, 16); } }
L_01A8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 68u); std::memcpy(&r.vf[20], q, 16); } }
L_01B0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 69u); std::memcpy(&r.vf[21], q, 16); } }
L_01B8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 70u); std::memcpy(&r.vf[22], q, 16); } }
L_01C0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 71u); std::memcpy(&r.vf[23], q, 16); } }
L_01C8: { ++fl.t; ending = true; }
L_01D0: { ++fl.t; }
    if (ending) { fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; r.tpc = ((472u + sh) & 16383u); return; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((472u + sh) & 16383u));
    return;
L_0D78: { ++fl.t; set_vi(i1, 0u + 16u); }
L_0D80: { ++fl.t; set_vi(i1, i5 & i1); }
L_0D88: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 12, 2); set_vi(i2, v); } }
L_0D90: { ++fl.t; pend = 0u == i1; }
L_0D98: { ++fl.t; }
    if (pend) { pend = false; goto L_0DB0; }
L_0DA0: { ++fl.t; set_vi(i4, 0u + i2); }
L_0DA8: { ++fl.t; }
L_0DB0: { ++fl.t; pend = 0u == i4; }
L_0DB8: { ++fl.t; set_vi(i4, i4 - 1u); }
    if (pend) { pend = false; goto L_0E08; }
L_0DC0: { ++fl.t; set_vi(i1, 0u + 16384u); }
L_0DC8: { ++fl.t; pend = 0u == i4; }
L_0DD0: { ++fl.t; }
    if (pend) { pend = false; goto L_0DF0; }
L_0DD8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0DE0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0DE8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0DF0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0DF8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0E00: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0E08: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0E10: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0E18: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0E20: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 8, 2); set_vi(i3, v); } }
L_0E28: { ++fl.t; set_vi(i2, 0u + 27u); }
L_0E30: { ++fl.t; pend = 0u != i4; }
L_0E38: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 124u) + 12, 2); set_vi(i1, v); } }
    if (pend) { pend = false; st = 0u; goto L_0E50; }
L_0E40: { ++fl.t; pend = 0u != i3; }
L_0E48: { ++fl.t; }
    if (pend) { pend = false; goto L_0E68; }
    st = 1u; 
L_0E50: { fl.t += 1u + ks_0E50[st]; set_vi(i3, 0u + 32735u); }
    st = ke_0E50_0E58[st]; 
L_0E58: { fl.t += 1u + ks_0E58[st]; pend = true; }
    st = ke_0E58_0E60[st]; 
L_0E60: { fl.t += 1u + ks_0E60[st]; set_vi(i1, i1 & i3); }
    if (pend) { pend = false; goto L_0E78; }
L_0E68: { ++fl.t; set_vi(i3, 0u + 32u); }
L_0E70: { ++fl.t; set_vi(i1, i1 | i3); }
L_0E78: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } }
L_0E80: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i2))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
L_0E88: { ++fl.t; pend = true; }
L_0E90: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
    if (pend) { pend = false; goto L_1638; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((3736u + sh) & 16383u));
    return;
L_0F70: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i1, 0u + 4u); vstore(r.vf[1], uv); n1 = vshadow_eager(r.vf[1]); }
L_0F78: { ++fl.t; set_vi(i1, i5 & i1); }
L_0F80: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 4, 2); set_vi(i2, v); } }
L_0F88: { ++fl.t; pend = 0u == i1; }
L_0F90: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 145u); std::memcpy(q + 0, &r.vf[1].w[0], 4); } }
    if (pend) { pend = false; goto L_0FA0; }
L_0F98: { ++fl.t; set_vi(i4, 0u + i2); }
L_0FA0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 125u); const std::uint32_t v = i4; std::memcpy(q + 12, &v, 4); } }
L_0FA8: { ++fl.t; const v4u uv = vmin(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0u)); { const std::uint8_t *q = qword(mem, 0u + 138u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[4], uv); n3 = vshadow_eager(r.vf[3]); }
L_0FB0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 141u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n3 = vshadow_eager(r.vf[3]); }
L_0FB8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 64u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow_eager(r.vf[1]); }
L_0FC0: { ++fl.t; pend = 0u != i4; }
L_0FC8: { ++fl.t; const v4u uv = vmuln(n3, vsplat(n3[3])); { const std::uint8_t *q = qword(mem, 0u + 142u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vshadow_eager(r.vf[2]); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; goto L_0FE8; }
L_0FD0: { ++fl.t; const v4u uv = vmuln(n1, n3); { std::uint8_t *q = qword(mem, 0u + 145u); std::memcpy(q + 0, &r.vf[0].w[0], 4); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); }
L_0FD8: { ++fl.t; const v4u uv = vmuln(n1, n3); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0FE0: { ++fl.t; const v4u uv = vaddn(nacc, (v4u)((v4f)n2 * (v4f)vsplat(0x3F800000u))); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0FE8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 138u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); std::memcpy(q + 8, &r.vf[4].w[2], 4); } }
L_0FF0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0FF8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 137u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((4096u + sh) & 16383u));
    return;
L_1238: { ++fl.t; set_vi(i1, 0u + 32u); }
L_1240: { ++fl.t; set_vi(i1, i5 & i1); }
L_1248: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 47u) + 0, 2); set_vi(i2, v); } }
L_1250: { ++fl.t; pend = 0u == i1; }
L_1258: { ++fl.t; }
    if (pend) { pend = false; goto L_1270; }
L_1260: { ++fl.t; set_vi(i4, 0u + i2); }
L_1268: { ++fl.t; }
L_1270: { ++fl.t; pend = 0u != i4; }
L_1278: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 33u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } }
    if (pend) { pend = false; goto L_1290; }
L_1280: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1288: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 136u); std::memcpy(q + 0, &r.vf[0].w[0], 4); std::memcpy(q + 4, &r.vf[0].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_1290: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1298: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 136u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((4768u + sh) & 16383u));
    return;
L_1638: { ++fl.t; set_vi(i10, 0u + 1u); }
L_1640: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_1648: { ++fl.t; set_vi(i9, 0u + i12); }
L_1650: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_1658: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1660: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q, &r.vf[4], 16); set_vi(i12, i12 + 1u); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((5736u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

static __attribute__((noinline, cold)) void vu1_D8D9ADBC35528BCF_c(Vu0Regs &r, std::uint8_t *mem) { vu1_D8D9ADBC35528BCF_s<true>(r, mem); }

void vu1_D8D9ADBC35528BCF(Vu0Regs &r, std::uint8_t *mem) {
    if ((r.status & 0xC0u) == 0xC0u) vu1_D8D9ADBC35528BCF_s<false>(r, mem);
    else vu1_D8D9ADBC35528BCF_c(r, mem);
}

template <bool kSticky>
static void vu1_42A1F800BA1E2375_s(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 328u) & 16383u;
    (void)sh;
    v4u n1 = vshadow_eager(r.vf[1]);
    v4u n2 = vshadow_eager(r.vf[2]);
    v4u n3 = vshadow_eager(r.vf[3]);
    v4u nacc = vshadow_eager(r.acc);
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i5 = r.vi[5];
    std::uint16_t i8 = r.vi[8];
    std::uint16_t i9 = r.vi[9];
    std::uint16_t i10 = r.vi[10];
    std::uint16_t i12 = r.vi[12];
    std::uint16_t i15 = r.vi[15];
    goto L_0148;
L_0148: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0150: { ++fl.t; set_vi(i15, (((336u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0158: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_1238; }
L_0160: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0168: { ++fl.t; set_vi(i15, (((360u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0170: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_0F70; }
L_0178: { ++fl.t; set_vi(i1, 0u + 66u); }
L_0180: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 45u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } }
L_0188: { ++fl.t; set_vi(i15, (((392u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0190: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
    if (pend) { pend = false; goto L_1638; }
L_0198: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 66u); std::memcpy(&r.vf[18], q, 16); } }
L_01A0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 67u); std::memcpy(&r.vf[19], q, 16); } }
L_01A8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 68u); std::memcpy(&r.vf[20], q, 16); } }
L_01B0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 69u); std::memcpy(&r.vf[21], q, 16); } }
L_01B8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 70u); std::memcpy(&r.vf[22], q, 16); } }
L_01C0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 71u); std::memcpy(&r.vf[23], q, 16); } }
L_01C8: { ++fl.t; ending = true; }
L_01D0: { ++fl.t; }
    if (ending) { fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[4] = i4; r.vi[5] = i5; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; r.tpc = ((472u + sh) & 16383u); return; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[4] = i4; r.vi[5] = i5; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((472u + sh) & 16383u));
    return;
L_0F70: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i1, 0u + 4u); vstore(r.vf[1], uv); n1 = vshadow_eager(r.vf[1]); }
L_0F78: { ++fl.t; set_vi(i1, i5 & i1); }
L_0F80: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 4, 2); set_vi(i2, v); } }
L_0F88: { ++fl.t; pend = 0u == i1; }
L_0F90: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 145u); std::memcpy(q + 0, &r.vf[1].w[0], 4); } }
    if (pend) { pend = false; goto L_0FA0; }
L_0F98: { ++fl.t; set_vi(i4, 0u + i2); }
L_0FA0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 125u); const std::uint32_t v = i4; std::memcpy(q + 12, &v, 4); } }
L_0FA8: { ++fl.t; const v4u uv = vmin(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0u)); { const std::uint8_t *q = qword(mem, 0u + 138u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[4], uv); n3 = vshadow_eager(r.vf[3]); }
L_0FB0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 141u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n3 = vshadow_eager(r.vf[3]); }
L_0FB8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 64u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow_eager(r.vf[1]); }
L_0FC0: { ++fl.t; pend = 0u != i4; }
L_0FC8: { ++fl.t; const v4u uv = vmuln(n3, vsplat(n3[3])); { const std::uint8_t *q = qword(mem, 0u + 142u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vshadow_eager(r.vf[2]); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; goto L_0FE8; }
L_0FD0: { ++fl.t; const v4u uv = vmuln(n1, n3); { std::uint8_t *q = qword(mem, 0u + 145u); std::memcpy(q + 0, &r.vf[0].w[0], 4); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); }
L_0FD8: { ++fl.t; const v4u uv = vmuln(n1, n3); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0FE0: { ++fl.t; const v4u uv = vaddn(nacc, (v4u)((v4f)n2 * (v4f)vsplat(0x3F800000u))); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0FE8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 138u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); std::memcpy(q + 8, &r.vf[4].w[2], 4); } }
L_0FF0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0FF8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 137u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[4] = i4; r.vi[5] = i5; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((4096u + sh) & 16383u));
    return;
L_1238: { ++fl.t; set_vi(i1, 0u + 32u); }
L_1240: { ++fl.t; set_vi(i1, i5 & i1); }
L_1248: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 47u) + 0, 2); set_vi(i2, v); } }
L_1250: { ++fl.t; pend = 0u == i1; }
L_1258: { ++fl.t; }
    if (pend) { pend = false; goto L_1270; }
L_1260: { fl.t += 2u; set_vi(i4, 0u + i2); }
L_1268: { ++fl.t; }
L_1270: { ++fl.t; pend = 0u != i4; }
L_1278: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 33u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } }
    if (pend) { pend = false; goto L_1290; }
L_1280: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1288: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 136u); std::memcpy(q + 0, &r.vf[0].w[0], 4); std::memcpy(q + 4, &r.vf[0].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_1290: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1298: { fl.t += 3u; { std::uint8_t *q = qword(mem, 0u + 136u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[4] = i4; r.vi[5] = i5; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((4768u + sh) & 16383u));
    return;
L_1638: { ++fl.t; set_vi(i10, 0u + 1u); }
L_1640: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_1648: { ++fl.t; set_vi(i9, 0u + i12); }
L_1650: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_1658: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1660: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q, &r.vf[4], 16); set_vi(i12, i12 + 1u); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[4] = i4; r.vi[5] = i5; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((5736u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[4] = i4; r.vi[5] = i5; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

static __attribute__((noinline, cold)) void vu1_42A1F800BA1E2375_c(Vu0Regs &r, std::uint8_t *mem) { vu1_42A1F800BA1E2375_s<true>(r, mem); }

void vu1_42A1F800BA1E2375(Vu0Regs &r, std::uint8_t *mem) {
    if ((r.status & 0xC0u) == 0xC0u) vu1_42A1F800BA1E2375_s<false>(r, mem);
    else vu1_42A1F800BA1E2375_c(r, mem);
}

template <bool kSticky>
static void vu1_1DBF8A207C66CA3B_s(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 256u) & 16383u;
    (void)sh;
    v4u n1 = vshadow_eager(r.vf[1]);
    v4u n2 = vshadow_eager(r.vf[2]);
    v4u n3 = vshadow_eager(r.vf[3]);
    v4u n5 = vshadow_eager(r.vf[5]);
    v4u n6 = vshadow_eager(r.vf[6]);
    v4u n7 = vshadow_eager(r.vf[7]);
    v4u nacc = vshadow_eager(r.acc);
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i3 = r.vi[3];
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i5 = r.vi[5];
    std::uint16_t i8 = r.vi[8];
    std::uint16_t i9 = r.vi[9];
    std::uint16_t i10 = r.vi[10];
    std::uint16_t i12 = r.vi[12];
    std::uint16_t i15 = r.vi[15];
    goto L_0100;
L_0100: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0108: { ++fl.t; set_vi(i15, (((264u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0110: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 4, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0A68; }
L_0118: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0120: { ++fl.t; set_vi(i15, (((288u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0128: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_0E20; }
L_0130: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0138: { ++fl.t; set_vi(i15, (((312u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0140: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 37u) + 0, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0D78; }
L_0148: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0150: { ++fl.t; set_vi(i15, (((336u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0158: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_1238; }
L_0160: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0168: { ++fl.t; set_vi(i15, (((360u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0170: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_0F70; }
L_0178: { ++fl.t; set_vi(i1, 0u + 66u); }
L_0180: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 45u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } }
L_0188: { ++fl.t; set_vi(i15, (((392u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0190: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
    if (pend) { pend = false; goto L_1638; }
L_0198: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 66u); std::memcpy(&r.vf[18], q, 16); } }
L_01A0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 67u); std::memcpy(&r.vf[19], q, 16); } }
L_01A8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 68u); std::memcpy(&r.vf[20], q, 16); } }
L_01B0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 69u); std::memcpy(&r.vf[21], q, 16); } }
L_01B8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 70u); std::memcpy(&r.vf[22], q, 16); } }
L_01C0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 71u); std::memcpy(&r.vf[23], q, 16); } }
L_01C8: { ++fl.t; ending = true; }
L_01D0: { ++fl.t; }
    if (ending) { fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; r.tpc = ((472u + sh) & 16383u); return; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((472u + sh) & 16383u));
    return;
L_0A68: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0u)); set_vi(i1, 0u + 8u); vstore(r.vf[3], uv); n3 = vshadow_eager(r.vf[3]); }
L_0A70: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i1, i5 & i1); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n5 = vshadow_eager(r.vf[5]); }
L_0A78: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, v4u{0u, 0u, 0u, 0x3F800000u}); { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 8, 2); set_vi(i2, v); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n5 = vshadow_eager(r.vf[5]); }
L_0A80: { ++fl.t; pend = 0u == i1; }
L_0A88: { ++fl.t; set_vi(i3, 0u + 3u); }
    if (pend) { pend = false; goto L_0A98; }
L_0A90: { fl.t += 2u; set_vi(i4, 0u + i2); }
L_0A98: { ++fl.t; set_vi(i1, 0u + 8u); }
L_0AA0: { ++fl.t; set_vi(i1, i4 & i1); }
L_0AA8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 37u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } n1 = vshadow_eager(r.vf[1]); }
L_0AB0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 139u); std::memcpy(&r.vf[6], q, 16); } n6 = vshadow_eager(r.vf[6]); }
L_0AB8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 140u); std::memcpy(&r.vf[7], q, 16); } n7 = vshadow_eager(r.vf[7]); }
L_0AC0: { ++fl.t; pend = 0u == i1; }
L_0AC8: { ++fl.t; set_vi(i2, 0u + 4u); }
    if (pend) { pend = false; goto L_0AD8; }
L_0AD0: { ++fl.t; const v4u uv = vaddn(n1, n1); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0AD8: { ++fl.t; const v4u uv = (v4u)((v4f)n5 + (v4f)vsplat(0x3F800000u)); set_vi(i5, i4 & i3); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0AE0: { ++fl.t; set_vi(i4, i4 & i2); }
L_0AE8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 124u) + 12, 2); set_vi(i1, v); } }
L_0AF0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 138u); std::memcpy(q + 12, &r.vf[1].w[3], 4); } }
L_0AF8: { ++fl.t; pend = 0u == i5; }
L_0B00: { ++fl.t; set_vi(i5, i5 - 1u); }
    if (pend) { pend = false; goto L_0B48; }
L_0B08: { ++fl.t; r.i = 1124073472u; }
L_0B10: { ++fl.t; pend = 0u == i5; }
L_0B18: { ++fl.t; }
    if (pend) { pend = false; goto L_0B70; }
L_0B20: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); set_vi(i2, 0u + 1u); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_0B28: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 16u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B30: { ++fl.t; set_vi(i1, i1 | i3); }
L_0B38: { ++fl.t; pend = true; }
L_0B40: { ++fl.t; set_vi(i3, 0u + 1u); }
    if (pend) { pend = false; goto L_0B98; }
L_0B48: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); r.i = 1132396544u; vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B50: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 32751u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B58: { ++fl.t; set_vi(i1, i1 & i3); }
L_0B60: { ++fl.t; pend = true; }
L_0B68: { ++fl.t; set_vi(i3, 0u + 0u); }
    if (pend) { pend = false; goto L_0B98; }
L_0B70: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); set_vi(i2, 0u + 0u); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B78: { ++fl.t; r.i = 1124073472u; }
L_0B80: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 16u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B88: { ++fl.t; set_vi(i1, i1 | i3); }
L_0B90: { ++fl.t; set_vi(i3, 0u + 1u); }
L_0B98: { ++fl.t; pend = 0u == i4; }
L_0BA0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 134u); const std::uint32_t v = i3; std::memcpy(q + 8, &v, 4); } }
    if (pend) { pend = false; goto L_0BB8; }
L_0BA8: { ++fl.t; r.i = 1073676288u; }
L_0BB0: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vfix(vsplat(r.i))); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0BB8: { ++fl.t; set_vi(i3, 0u + 27u); }
L_0BC0: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(r.vf[1].w[0])); { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n2 = vshadow_eager(r.vf[2]); }
L_0BC8: { ++fl.t; const v4u uv = vmuln(n6, vsplat(n1[3])); { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i3))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0BD0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0BD8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 132u); const std::uint32_t v = i2; std::memcpy(q + 12, &v, 4); } }
L_0BE0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 112u); std::memcpy(q + 0, &r.vf[3].w[0], 4); std::memcpy(q + 4, &r.vf[3].w[1], 4); } }
L_0BE8: { ++fl.t; const v4u uv = vmuln(n7, n6); { std::uint8_t *q = qword(mem, 0u + 137u); std::memcpy(q + 12, &r.vf[5].w[3], 4); } vstore(r.vf[7], uv); fl.push_last<15u, kSticky>(uv); n7 = uv; }
L_0BF0: { ++fl.t; set_vi(i2, i15 + 0u); }
L_0BF8: { ++fl.t; set_vi(i15, (((3064u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0C00: { ++fl.t; }
    if (pend) { pend = false; goto L_1638; }
L_0C08: { ++fl.t; set_vi(i15, i2 + 0u); }
L_0C10: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 133u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
L_0C18: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 143u); std::memcpy(q, &r.vf[7], 16); } }
L_0C20: { ++fl.t; pend = true; }
L_0C28: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 125u) + 12, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0FA8; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((3120u + sh) & 16383u));
    return;
L_0D78: { ++fl.t; set_vi(i1, 0u + 16u); }
L_0D80: { ++fl.t; set_vi(i1, i5 & i1); }
L_0D88: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 12, 2); set_vi(i2, v); } }
L_0D90: { ++fl.t; pend = 0u == i1; }
L_0D98: { ++fl.t; }
    if (pend) { pend = false; goto L_0DB0; }
L_0DA0: { ++fl.t; set_vi(i4, 0u + i2); }
L_0DA8: { ++fl.t; }
L_0DB0: { ++fl.t; pend = 0u == i4; }
L_0DB8: { ++fl.t; set_vi(i4, i4 - 1u); }
    if (pend) { pend = false; goto L_0E08; }
L_0DC0: { ++fl.t; set_vi(i1, 0u + 16384u); }
L_0DC8: { ++fl.t; pend = 0u == i4; }
L_0DD0: { ++fl.t; }
    if (pend) { pend = false; goto L_0DF0; }
L_0DD8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0DE0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0DE8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0DF0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0DF8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0E00: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0E08: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0E10: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0E18: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0E20: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 8, 2); set_vi(i3, v); } }
L_0E28: { ++fl.t; set_vi(i2, 0u + 27u); }
L_0E30: { ++fl.t; pend = 0u != i4; }
L_0E38: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 124u) + 12, 2); set_vi(i1, v); } }
    if (pend) { pend = false; goto L_0E50; }
L_0E40: { ++fl.t; pend = 0u != i3; }
L_0E48: { ++fl.t; }
    if (pend) { pend = false; goto L_0E68; }
L_0E50: { ++fl.t; set_vi(i3, 0u + 32735u); }
L_0E58: { ++fl.t; pend = true; }
L_0E60: { ++fl.t; set_vi(i1, i1 & i3); }
    if (pend) { pend = false; goto L_0E78; }
L_0E68: { ++fl.t; set_vi(i3, 0u + 32u); }
L_0E70: { ++fl.t; set_vi(i1, i1 | i3); }
L_0E78: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } }
L_0E80: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i2))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
L_0E88: { ++fl.t; pend = true; }
L_0E90: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
    if (pend) { pend = false; goto L_1638; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((3736u + sh) & 16383u));
    return;
L_0F70: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i1, 0u + 4u); vstore(r.vf[1], uv); n1 = vshadow_eager(r.vf[1]); }
L_0F78: { ++fl.t; set_vi(i1, i5 & i1); }
L_0F80: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 4, 2); set_vi(i2, v); } }
L_0F88: { ++fl.t; pend = 0u == i1; }
L_0F90: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 145u); std::memcpy(q + 0, &r.vf[1].w[0], 4); } }
    if (pend) { pend = false; goto L_0FA0; }
L_0F98: { ++fl.t; set_vi(i4, 0u + i2); }
L_0FA0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 125u); const std::uint32_t v = i4; std::memcpy(q + 12, &v, 4); } }
L_0FA8: { ++fl.t; const v4u uv = vmin(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0u)); { const std::uint8_t *q = qword(mem, 0u + 138u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[4], uv); n3 = vshadow_eager(r.vf[3]); }
L_0FB0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 141u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n3 = vshadow_eager(r.vf[3]); }
L_0FB8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 64u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow_eager(r.vf[1]); }
L_0FC0: { ++fl.t; pend = 0u != i4; }
L_0FC8: { ++fl.t; const v4u uv = vmuln(n3, vsplat(n3[3])); { const std::uint8_t *q = qword(mem, 0u + 142u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vshadow_eager(r.vf[2]); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; goto L_0FE8; }
L_0FD0: { ++fl.t; const v4u uv = vmuln(n1, n3); { std::uint8_t *q = qword(mem, 0u + 145u); std::memcpy(q + 0, &r.vf[0].w[0], 4); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); }
L_0FD8: { ++fl.t; const v4u uv = vmuln(n1, n3); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0FE0: { ++fl.t; const v4u uv = vaddn(nacc, (v4u)((v4f)n2 * (v4f)vsplat(0x3F800000u))); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0FE8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 138u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); std::memcpy(q + 8, &r.vf[4].w[2], 4); } }
L_0FF0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0FF8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 137u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((4096u + sh) & 16383u));
    return;
L_1238: { ++fl.t; set_vi(i1, 0u + 32u); }
L_1240: { ++fl.t; set_vi(i1, i5 & i1); }
L_1248: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 47u) + 0, 2); set_vi(i2, v); } }
L_1250: { ++fl.t; pend = 0u == i1; }
L_1258: { ++fl.t; }
    if (pend) { pend = false; goto L_1270; }
L_1260: { ++fl.t; set_vi(i4, 0u + i2); }
L_1268: { ++fl.t; }
L_1270: { ++fl.t; pend = 0u != i4; }
L_1278: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 33u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } }
    if (pend) { pend = false; goto L_1290; }
L_1280: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1288: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 136u); std::memcpy(q + 0, &r.vf[0].w[0], 4); std::memcpy(q + 4, &r.vf[0].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_1290: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1298: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 136u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((4768u + sh) & 16383u));
    return;
L_1638: { ++fl.t; set_vi(i10, 0u + 1u); }
L_1640: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_1648: { ++fl.t; set_vi(i9, 0u + i12); }
L_1650: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_1658: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1660: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q, &r.vf[4], 16); set_vi(i12, i12 + 1u); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((5736u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

static __attribute__((noinline, cold)) void vu1_1DBF8A207C66CA3B_c(Vu0Regs &r, std::uint8_t *mem) { vu1_1DBF8A207C66CA3B_s<true>(r, mem); }

void vu1_1DBF8A207C66CA3B(Vu0Regs &r, std::uint8_t *mem) {
    if ((r.status & 0xC0u) == 0xC0u) vu1_1DBF8A207C66CA3B_s<false>(r, mem);
    else vu1_1DBF8A207C66CA3B_c(r, mem);
}

template <bool kSticky>
static void vu1_D1AF5D0528A200D9_s(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 304u) & 16383u;
    (void)sh;
    v4u n1 = vshadow_eager(r.vf[1]);
    v4u n2 = vshadow_eager(r.vf[2]);
    v4u n3 = vshadow_eager(r.vf[3]);
    v4u nacc = vshadow_eager(r.acc);
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i5 = r.vi[5];
    std::uint16_t i8 = r.vi[8];
    std::uint16_t i9 = r.vi[9];
    std::uint16_t i10 = r.vi[10];
    std::uint16_t i12 = r.vi[12];
    std::uint16_t i15 = r.vi[15];
    goto L_0130;
L_0130: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0138: { ++fl.t; set_vi(i15, (((312u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0140: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 37u) + 0, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0D78; }
L_0148: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0150: { ++fl.t; set_vi(i15, (((336u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0158: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_1238; }
L_0160: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0168: { ++fl.t; set_vi(i15, (((360u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0170: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_0F70; }
L_0178: { ++fl.t; set_vi(i1, 0u + 66u); }
L_0180: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 45u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } }
L_0188: { ++fl.t; set_vi(i15, (((392u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0190: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
    if (pend) { pend = false; goto L_1638; }
L_0198: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 66u); std::memcpy(&r.vf[18], q, 16); } }
L_01A0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 67u); std::memcpy(&r.vf[19], q, 16); } }
L_01A8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 68u); std::memcpy(&r.vf[20], q, 16); } }
L_01B0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 69u); std::memcpy(&r.vf[21], q, 16); } }
L_01B8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 70u); std::memcpy(&r.vf[22], q, 16); } }
L_01C0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 71u); std::memcpy(&r.vf[23], q, 16); } }
L_01C8: { ++fl.t; ending = true; }
L_01D0: { ++fl.t; }
    if (ending) { fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[4] = i4; r.vi[5] = i5; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; r.tpc = ((472u + sh) & 16383u); return; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[4] = i4; r.vi[5] = i5; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((472u + sh) & 16383u));
    return;
L_0D78: { ++fl.t; set_vi(i1, 0u + 16u); }
L_0D80: { ++fl.t; set_vi(i1, i5 & i1); }
L_0D88: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 12, 2); set_vi(i2, v); } }
L_0D90: { ++fl.t; pend = 0u == i1; }
L_0D98: { ++fl.t; }
    if (pend) { pend = false; goto L_0DB0; }
L_0DA0: { fl.t += 2u; set_vi(i4, 0u + i2); }
L_0DA8: { ++fl.t; }
L_0DB0: { ++fl.t; pend = 0u == i4; }
L_0DB8: { ++fl.t; set_vi(i4, i4 - 1u); }
    if (pend) { pend = false; goto L_0E08; }
L_0DC0: { ++fl.t; set_vi(i1, 0u + 16384u); }
L_0DC8: { ++fl.t; pend = 0u == i4; }
L_0DD0: { ++fl.t; }
    if (pend) { pend = false; goto L_0DF0; }
L_0DD8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0DE0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0DE8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0DF0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0DF8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0E00: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0E08: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0E10: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0E18: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[4] = i4; r.vi[5] = i5; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((3616u + sh) & 16383u));
    return;
L_0F70: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i1, 0u + 4u); vstore(r.vf[1], uv); n1 = vshadow_eager(r.vf[1]); }
L_0F78: { ++fl.t; set_vi(i1, i5 & i1); }
L_0F80: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 4, 2); set_vi(i2, v); } }
L_0F88: { ++fl.t; pend = 0u == i1; }
L_0F90: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 145u); std::memcpy(q + 0, &r.vf[1].w[0], 4); } }
    if (pend) { pend = false; goto L_0FA0; }
L_0F98: { ++fl.t; set_vi(i4, 0u + i2); }
L_0FA0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 125u); const std::uint32_t v = i4; std::memcpy(q + 12, &v, 4); } }
L_0FA8: { ++fl.t; const v4u uv = vmin(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0u)); { const std::uint8_t *q = qword(mem, 0u + 138u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[4], uv); n3 = vshadow_eager(r.vf[3]); }
L_0FB0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 141u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n3 = vshadow_eager(r.vf[3]); }
L_0FB8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 64u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow_eager(r.vf[1]); }
L_0FC0: { ++fl.t; pend = 0u != i4; }
L_0FC8: { ++fl.t; const v4u uv = vmuln(n3, vsplat(n3[3])); { const std::uint8_t *q = qword(mem, 0u + 142u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vshadow_eager(r.vf[2]); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; goto L_0FE8; }
L_0FD0: { ++fl.t; const v4u uv = vmuln(n1, n3); { std::uint8_t *q = qword(mem, 0u + 145u); std::memcpy(q + 0, &r.vf[0].w[0], 4); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); }
L_0FD8: { ++fl.t; const v4u uv = vmuln(n1, n3); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0FE0: { ++fl.t; const v4u uv = vaddn(nacc, (v4u)((v4f)n2 * (v4f)vsplat(0x3F800000u))); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0FE8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 138u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); std::memcpy(q + 8, &r.vf[4].w[2], 4); } }
L_0FF0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0FF8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 137u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[4] = i4; r.vi[5] = i5; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((4096u + sh) & 16383u));
    return;
L_1238: { ++fl.t; set_vi(i1, 0u + 32u); }
L_1240: { ++fl.t; set_vi(i1, i5 & i1); }
L_1248: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 47u) + 0, 2); set_vi(i2, v); } }
L_1250: { ++fl.t; pend = 0u == i1; }
L_1258: { ++fl.t; }
    if (pend) { pend = false; goto L_1270; }
L_1260: { ++fl.t; set_vi(i4, 0u + i2); }
L_1268: { ++fl.t; }
L_1270: { ++fl.t; pend = 0u != i4; }
L_1278: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 33u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } }
    if (pend) { pend = false; goto L_1290; }
L_1280: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1288: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 136u); std::memcpy(q + 0, &r.vf[0].w[0], 4); std::memcpy(q + 4, &r.vf[0].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_1290: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1298: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 136u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[4] = i4; r.vi[5] = i5; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((4768u + sh) & 16383u));
    return;
L_1638: { ++fl.t; set_vi(i10, 0u + 1u); }
L_1640: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_1648: { ++fl.t; set_vi(i9, 0u + i12); }
L_1650: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_1658: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1660: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q, &r.vf[4], 16); set_vi(i12, i12 + 1u); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[4] = i4; r.vi[5] = i5; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((5736u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[4] = i4; r.vi[5] = i5; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

static __attribute__((noinline, cold)) void vu1_D1AF5D0528A200D9_c(Vu0Regs &r, std::uint8_t *mem) { vu1_D1AF5D0528A200D9_s<true>(r, mem); }

void vu1_D1AF5D0528A200D9(Vu0Regs &r, std::uint8_t *mem) {
    if ((r.status & 0xC0u) == 0xC0u) vu1_D1AF5D0528A200D9_s<false>(r, mem);
    else vu1_D1AF5D0528A200D9_c(r, mem);
}

void vu1_2997B263854FBE9F(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 376u) & 16383u;
    (void)sh;
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i9 = r.vi[9];
    std::uint16_t i10 = r.vi[10];
    std::uint16_t i12 = r.vi[12];
    std::uint16_t i15 = r.vi[15];
    goto L_0178;
L_0178: { ++fl.t; set_vi(i1, 0u + 66u); }
L_0180: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 45u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } }
L_0188: { ++fl.t; set_vi(i15, (((392u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0190: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
    if (pend) { pend = false; goto L_1638; }
L_0198: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 66u); std::memcpy(&r.vf[18], q, 16); } }
L_01A0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 67u); std::memcpy(&r.vf[19], q, 16); } }
L_01A8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 68u); std::memcpy(&r.vf[20], q, 16); } }
L_01B0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 69u); std::memcpy(&r.vf[21], q, 16); } }
L_01B8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 70u); std::memcpy(&r.vf[22], q, 16); } }
L_01C0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 71u); std::memcpy(&r.vf[23], q, 16); } }
L_01C8: { ++fl.t; ending = true; }
L_01D0: { ++fl.t; }
    if (ending) { fl.finish(r); r.vi[1] = i1; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; r.tpc = ((472u + sh) & 16383u); return; }
    fl.finish(r); r.vi[1] = i1; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((472u + sh) & 16383u));
    return;
L_1638: { ++fl.t; set_vi(i10, 0u + 1u); }
L_1640: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_1648: { ++fl.t; set_vi(i9, 0u + i12); }
L_1650: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_1658: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1660: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q, &r.vf[4], 16); set_vi(i12, i12 + 1u); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((5736u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

template <bool kSticky>
static void vu1_6E44A83730DC5CE7_s(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 352u) & 16383u;
    (void)sh;
    unsigned st = 0u;
    static constexpr std::uint8_t ks_0FE8[] = {0, 1};
    static constexpr std::uint8_t ks_0FF0[] = {0, 0};
    static constexpr std::uint8_t ks_0FF8[] = {1, 0};
    static constexpr std::uint8_t ke_0FE8_0FF0[] = {0, 1};
    static constexpr std::uint8_t ke_0FF0_0FF8[] = {0, 1};
    v4u n1 = vshadow_eager(r.vf[1]);
    v4u n2 = vshadow_eager(r.vf[2]);
    v4u n3 = vshadow_eager(r.vf[3]);
    v4u nacc = vshadow_eager(r.acc);
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i5 = r.vi[5];
    std::uint16_t i8 = r.vi[8];
    std::uint16_t i9 = r.vi[9];
    std::uint16_t i10 = r.vi[10];
    std::uint16_t i12 = r.vi[12];
    std::uint16_t i15 = r.vi[15];
    goto L_0160;
L_0160: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0168: { ++fl.t; set_vi(i15, (((360u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0170: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_0F70; }
L_0178: { ++fl.t; set_vi(i1, 0u + 66u); }
L_0180: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 45u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } }
L_0188: { ++fl.t; set_vi(i15, (((392u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0190: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
    if (pend) { pend = false; goto L_1638; }
L_0198: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 66u); std::memcpy(&r.vf[18], q, 16); } }
L_01A0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 67u); std::memcpy(&r.vf[19], q, 16); } }
L_01A8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 68u); std::memcpy(&r.vf[20], q, 16); } }
L_01B0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 69u); std::memcpy(&r.vf[21], q, 16); } }
L_01B8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 70u); std::memcpy(&r.vf[22], q, 16); } }
L_01C0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 71u); std::memcpy(&r.vf[23], q, 16); } }
L_01C8: { ++fl.t; ending = true; }
L_01D0: { ++fl.t; }
    if (ending) { fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[4] = i4; r.vi[5] = i5; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; r.tpc = ((472u + sh) & 16383u); return; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[4] = i4; r.vi[5] = i5; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((472u + sh) & 16383u));
    return;
L_0F70: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i1, 0u + 4u); vstore(r.vf[1], uv); n1 = vshadow_eager(r.vf[1]); }
L_0F78: { ++fl.t; set_vi(i1, i5 & i1); }
L_0F80: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 4, 2); set_vi(i2, v); } }
L_0F88: { ++fl.t; pend = 0u == i1; }
L_0F90: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 145u); std::memcpy(q + 0, &r.vf[1].w[0], 4); } }
    if (pend) { pend = false; goto L_0FA0; }
L_0F98: { fl.t += 2u; set_vi(i4, 0u + i2); }
L_0FA0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 125u); const std::uint32_t v = i4; std::memcpy(q + 12, &v, 4); } }
L_0FA8: { ++fl.t; const v4u uv = vmin(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0u)); { const std::uint8_t *q = qword(mem, 0u + 138u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[4], uv); n3 = vshadow_eager(r.vf[3]); }
L_0FB0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 141u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n3 = vshadow_eager(r.vf[3]); }
L_0FB8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 64u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow_eager(r.vf[1]); }
L_0FC0: { ++fl.t; pend = 0u != i4; }
L_0FC8: { fl.t += 2u; const v4u uv = vmuln(n3, vsplat(n3[3])); { const std::uint8_t *q = qword(mem, 0u + 142u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vshadow_eager(r.vf[2]); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; st = 0u; goto L_0FE8; }
L_0FD0: { fl.t += 4u; const v4u uv = vmuln(n1, n3); { std::uint8_t *q = qword(mem, 0u + 145u); std::memcpy(q + 0, &r.vf[0].w[0], 4); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); }
L_0FD8: { ++fl.t; const v4u uv = vmuln(n1, n3); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0FE0: { ++fl.t; const v4u uv = vaddn(nacc, (v4u)((v4f)n2 * (v4f)vsplat(0x3F800000u))); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    st = 1u; 
L_0FE8: { fl.t += 1u + ks_0FE8[st]; { std::uint8_t *q = qword(mem, 0u + 138u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); std::memcpy(q + 8, &r.vf[4].w[2], 4); } }
    st = ke_0FE8_0FF0[st]; 
L_0FF0: { fl.t += 1u + ks_0FF0[st]; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
    st = ke_0FF0_0FF8[st]; 
L_0FF8: { fl.t += 1u + ks_0FF8[st]; { std::uint8_t *q = qword(mem, 0u + 137u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[4] = i4; r.vi[5] = i5; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((4096u + sh) & 16383u));
    return;
L_1638: { ++fl.t; set_vi(i10, 0u + 1u); }
L_1640: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_1648: { ++fl.t; set_vi(i9, 0u + i12); }
L_1650: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_1658: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1660: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q, &r.vf[4], 16); set_vi(i12, i12 + 1u); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[4] = i4; r.vi[5] = i5; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((5736u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[4] = i4; r.vi[5] = i5; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

static __attribute__((noinline, cold)) void vu1_6E44A83730DC5CE7_c(Vu0Regs &r, std::uint8_t *mem) { vu1_6E44A83730DC5CE7_s<true>(r, mem); }

void vu1_6E44A83730DC5CE7(Vu0Regs &r, std::uint8_t *mem) {
    if ((r.status & 0xC0u) == 0xC0u) vu1_6E44A83730DC5CE7_s<false>(r, mem);
    else vu1_6E44A83730DC5CE7_c(r, mem);
}

}
