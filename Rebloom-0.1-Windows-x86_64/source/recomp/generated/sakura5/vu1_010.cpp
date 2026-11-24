#include "ps2/vu_ops.hpp"
#include <cstdio>

namespace gen {

using namespace ps2;
using namespace ps2::vuops;

template <bool kSticky>
static void vu1_7B17BC1C085987EF_s(Vu0Regs &r, std::uint8_t *mem) {
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
    static constexpr std::uint8_t ks_11A0[] = {0, 1};
    static constexpr std::uint8_t ks_11A8[] = {0, 0};
    static constexpr std::uint8_t ks_11B0[] = {1, 0};
    static constexpr std::uint8_t ke_11A0_11A8[] = {0, 1};
    static constexpr std::uint8_t ke_11A8_11B0[] = {0, 1};
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
    if (pend) { pend = false; goto L_1128; }
L_0178: { ++fl.t; set_vi(i1, 0u + 66u); }
L_0180: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 45u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } }
L_0188: { ++fl.t; set_vi(i15, (((392u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0190: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
    if (pend) { pend = false; goto L_17F0; }
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
L_1128: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i1, 0u + 4u); vstore(r.vf[1], uv); n1 = vshadow_eager(r.vf[1]); }
L_1130: { ++fl.t; set_vi(i1, i5 & i1); }
L_1138: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 4, 2); set_vi(i2, v); } }
L_1140: { ++fl.t; pend = 0u == i1; }
L_1148: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 145u); std::memcpy(q + 0, &r.vf[1].w[0], 4); } }
    if (pend) { pend = false; goto L_1158; }
L_1150: { fl.t += 2u; set_vi(i4, 0u + i2); }
L_1158: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 125u); const std::uint32_t v = i4; std::memcpy(q + 12, &v, 4); } }
L_1160: { ++fl.t; const v4u uv = vmin(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0u)); { const std::uint8_t *q = qword(mem, 0u + 138u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[4], uv); n3 = vshadow_eager(r.vf[3]); }
L_1168: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 141u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n3 = vshadow_eager(r.vf[3]); }
L_1170: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 64u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow_eager(r.vf[1]); }
L_1178: { ++fl.t; pend = 0u != i4; }
L_1180: { fl.t += 2u; const v4u uv = vmuln(n3, vsplat(n3[3])); { const std::uint8_t *q = qword(mem, 0u + 142u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vshadow_eager(r.vf[2]); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; st = 0u; goto L_11A0; }
L_1188: { fl.t += 4u; const v4u uv = vmuln(n1, n3); { std::uint8_t *q = qword(mem, 0u + 145u); std::memcpy(q + 0, &r.vf[0].w[0], 4); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); }
L_1190: { ++fl.t; const v4u uv = vmuln(n1, n3); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1198: { ++fl.t; const v4u uv = vaddn(nacc, (v4u)((v4f)n2 * (v4f)vsplat(0x3F800000u))); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    st = 1u; 
L_11A0: { fl.t += 1u + ks_11A0[st]; { std::uint8_t *q = qword(mem, 0u + 138u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); std::memcpy(q + 8, &r.vf[4].w[2], 4); } }
    st = ke_11A0_11A8[st]; 
L_11A8: { fl.t += 1u + ks_11A8[st]; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
    st = ke_11A8_11B0[st]; 
L_11B0: { fl.t += 1u + ks_11B0[st]; { std::uint8_t *q = qword(mem, 0u + 137u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[4] = i4; r.vi[5] = i5; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((4536u + sh) & 16383u));
    return;
L_17F0: { ++fl.t; set_vi(i10, 0u + 1u); }
L_17F8: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_1800: { ++fl.t; set_vi(i9, 0u + i12); }
L_1808: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_1810: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1818: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q, &r.vf[4], 16); set_vi(i12, i12 + 1u); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[4] = i4; r.vi[5] = i5; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((6176u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[4] = i4; r.vi[5] = i5; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

static __attribute__((noinline, cold)) void vu1_7B17BC1C085987EF_c(Vu0Regs &r, std::uint8_t *mem) { vu1_7B17BC1C085987EF_s<true>(r, mem); }

void vu1_7B17BC1C085987EF(Vu0Regs &r, std::uint8_t *mem) {
    if ((r.status & 0xC0u) == 0xC0u) vu1_7B17BC1C085987EF_s<false>(r, mem);
    else vu1_7B17BC1C085987EF_c(r, mem);
}

void vu1_23BB9B0761CE3361(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 5768u) & 16383u;
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
    goto L_1688;
L_01F8: { ++fl.t; set_vi(i1, 0u + 15u); }
L_0200: { ++fl.t; set_vi(i1, i8 & i1); }
L_0208: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1) + 4, 2); set_vi(i2, v); } }
L_0210: { fl.t += 4u; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; pendj = true; }
L_0218: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((544u + sh) & 16383u));
    return;
L_1688: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 24u); vstore(r.vf[15], vsel(vload(r.vf[15]), vload_ptr(q), v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); } }
L_1690: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[1], q, 16); set_vi(i13, i13 + 1u); } }
L_1698: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[2], q, 16); set_vi(i13, i13 + 1u); } }
L_16A0: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[3], q, 16); set_vi(i13, i13 + 1u); } }
L_16A8: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[4], q, 16); set_vi(i13, i13 + 1u); } }
L_16B0: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[5], q, 16); set_vi(i13, i13 + 1u); } }
L_16B8: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[6], q, 16); set_vi(i13, i13 + 1u); } }
L_16C0: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[7], q, 16); set_vi(i13, i13 + 1u); } }
L_16C8: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[8], q, 16); set_vi(i13, i13 + 1u); } }
L_16D0: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[9], q, 16); set_vi(i13, i13 + 1u); } }
L_16D8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 128u); std::memcpy(q + 0, &r.vf[16].w[0], 4); std::memcpy(q + 4, &r.vf[16].w[1], 4); std::memcpy(q + 8, &r.vf[16].w[2], 4); } }
L_16E0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 129u); std::memcpy(q + 0, &r.vf[17].w[0], 4); std::memcpy(q + 4, &r.vf[17].w[1], 4); std::memcpy(q + 8, &r.vf[17].w[2], 4); } }
L_16E8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 130u); std::memcpy(q + 0, &r.vf[1].w[0], 4); std::memcpy(q + 4, &r.vf[1].w[1], 4); std::memcpy(q + 8, &r.vf[1].w[2], 4); } }
L_16F0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
L_16F8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 125u); std::memcpy(q + 0, &r.vf[3].w[0], 4); std::memcpy(q + 4, &r.vf[3].w[1], 4); std::memcpy(q + 8, &r.vf[3].w[2], 4); } }
L_1700: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); std::memcpy(q + 8, &r.vf[4].w[2], 4); } }
L_1708: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); std::memcpy(q + 0, &r.vf[5].w[0], 4); std::memcpy(q + 4, &r.vf[5].w[1], 4); std::memcpy(q + 8, &r.vf[5].w[2], 4); } }
L_1710: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 131u); std::memcpy(q + 0, &r.vf[6].w[0], 4); std::memcpy(q + 4, &r.vf[6].w[1], 4); std::memcpy(q + 8, &r.vf[6].w[2], 4); } }
L_1718: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 132u); std::memcpy(q + 0, &r.vf[7].w[0], 4); std::memcpy(q + 4, &r.vf[7].w[1], 4); std::memcpy(q + 8, &r.vf[7].w[2], 4); } }
L_1720: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 128u) + 12, 2); set_vi(i1, v); } }
L_1728: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 129u) + 12, 2); set_vi(i2, v); } }
L_1730: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 130u) + 12, 2); set_vi(i3, v); } }
L_1738: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 131u) + 12, 2); set_vi(i4, v); } }
L_1740: { ++fl.t; set_vi(i10, 0u + 5u); }
L_1748: { ++fl.t; set_vi(i9, 0u + i12); }
L_1750: { ++fl.t; { const std::uint8_t *q = qword(mem, i1 + 128u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } }
L_1758: { ++fl.t; { const std::uint8_t *q = qword(mem, i2 + 124u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0u})); } }
L_1760: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i4))); vstore(r.vf[2], vsel(vload(r.vf[2]), vsplat(v), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); } }
L_1768: { ++fl.t; { const std::uint8_t *q = qword(mem, i3 + 131u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } }
L_1770: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_1778: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_1780: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); set_vi(i12, i12 + 1u); } }
L_1788: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 0, &r.vf[1].w[0], 4); std::memcpy(q + 4, &r.vf[1].w[1], 4); std::memcpy(q + 8, &r.vf[1].w[2], 4); set_vi(i12, i12 + 1u); } }
L_1790: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 0, &r.vf[3].w[0], 4); std::memcpy(q + 4, &r.vf[3].w[1], 4); std::memcpy(q + 8, &r.vf[3].w[2], 4); set_vi(i12, i12 + 1u); } }
L_1798: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 0, &r.vf[8].w[0], 4); std::memcpy(q + 4, &r.vf[8].w[1], 4); std::memcpy(q + 8, &r.vf[8].w[2], 4); set_vi(i12, i12 + 1u); } }
L_17A0: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 0, &r.vf[9].w[0], 4); std::memcpy(q + 4, &r.vf[9].w[1], 4); std::memcpy(q + 8, &r.vf[9].w[2], 4); set_vi(i12, i12 + 1u); } }
L_17A8: { ++fl.t; set_vi(i1, i11 - i12); }
L_17B0: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[16], q, 16); set_vi(i13, i13 + 1u); } }
L_17B8: { ++fl.t; pend = static_cast<std::int16_t>(i1) > 0; }
L_17C0: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[17], q, 16); set_vi(i13, i13 + 1u); } }
    if (pend) { pend = false; goto L_17D8; }
L_17C8: { ++fl.t; set_vi(i15, (((6088u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_17D0: { ++fl.t; }
    if (pend) { pend = false; goto L_1820; }
L_17D8: { ++fl.t; set_vi(i7, i8 + 0u); }
L_17E0: { ++fl.t; pend = true; }
L_17E8: { ++fl.t; set_vi(i15, 0u + 722u); }
    if (pend) { pend = false; goto L_1940; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((6128u + sh) & 16383u));
    return;
L_1820: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 114u) + 12, 2); set_vi(i3, v); } }
L_1828: { ++fl.t; set_vi(i2, 0u + 32767u); }
L_1830: { ++fl.t; set_vi(i2, i2 + 1u); }
L_1838: { ++fl.t; set_vi(i2, i10 | i2); }
L_1840: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 0u) + 12, 2); set_vi(i1, v); } }
L_1848: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i2; std::memcpy(q + 0, &v, 4); } }
L_1850: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 2u) + 12, 2); set_vi(i3, v); } }
L_1858: { ++fl.t; }
L_1860: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_1868: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 2u) + 12, 2); set_vi(i12, v); } }
L_1870: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 4u) + 12, 2); set_vi(i11, v); } }
L_1878: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1880: { ++fl.t; vu::kick(1, i3); }
    if (pendj) { pendj = false; goto dispatch; }
L_1888: { ++fl.t; ending = true; }
L_1890: { ++fl.t; }
    if (ending) { fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; r.tpc = ((6296u + sh) & 16383u); return; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((6296u + sh) & 16383u));
    return;
L_1940: { ++fl.t; pend = static_cast<std::int16_t>(i8) < 0; }
L_1948: { ++fl.t; set_vi(i8, r.vf[16].w[3]); }
    if (pend) { pend = false; goto L_1960; }
L_1950: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1958: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_1960: { ++fl.t; set_vi(i6, 0u + 4096u); }
L_1968: { ++fl.t; set_vi(i1, i7 & i6); }
L_1970: { ++fl.t; set_vi(i6, 0u + 2048u); }
L_1978: { ++fl.t; set_vi(i6, i7 & i6); }
L_1980: { ++fl.t; pend = 0u == i1; }
L_1988: { ++fl.t; set_vi(i1, 0u + i15); }
    if (pend) { pend = false; goto L_19A0; }
L_1990: { ++fl.t; set_vi(i15, (((6544u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1998: { ++fl.t; }
    if (pend) { pend = false; goto L_1888; }
L_19A0: { ++fl.t; pend = 0u != i6; }
L_19A8: { ++fl.t; set_vi(i15, 0u + i1); }
    if (pend) { pend = false; goto L_01F8; }
L_19B0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_19B8: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((6592u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

void vu1_3DE6BB43A8D2EBEA(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 5776u) & 16383u;
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
    goto L_1690;
L_01F8: { ++fl.t; set_vi(i1, 0u + 15u); }
L_0200: { ++fl.t; set_vi(i1, i8 & i1); }
L_0208: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1) + 4, 2); set_vi(i2, v); } }
L_0210: { fl.t += 4u; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; pendj = true; }
L_0218: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((544u + sh) & 16383u));
    return;
L_1690: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[1], q, 16); set_vi(i13, i13 + 1u); } }
L_1698: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[2], q, 16); set_vi(i13, i13 + 1u); } }
L_16A0: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[3], q, 16); set_vi(i13, i13 + 1u); } }
L_16A8: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[4], q, 16); set_vi(i13, i13 + 1u); } }
L_16B0: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[5], q, 16); set_vi(i13, i13 + 1u); } }
L_16B8: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[6], q, 16); set_vi(i13, i13 + 1u); } }
L_16C0: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[7], q, 16); set_vi(i13, i13 + 1u); } }
L_16C8: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[8], q, 16); set_vi(i13, i13 + 1u); } }
L_16D0: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[9], q, 16); set_vi(i13, i13 + 1u); } }
L_16D8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 128u); std::memcpy(q + 0, &r.vf[16].w[0], 4); std::memcpy(q + 4, &r.vf[16].w[1], 4); std::memcpy(q + 8, &r.vf[16].w[2], 4); } }
L_16E0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 129u); std::memcpy(q + 0, &r.vf[17].w[0], 4); std::memcpy(q + 4, &r.vf[17].w[1], 4); std::memcpy(q + 8, &r.vf[17].w[2], 4); } }
L_16E8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 130u); std::memcpy(q + 0, &r.vf[1].w[0], 4); std::memcpy(q + 4, &r.vf[1].w[1], 4); std::memcpy(q + 8, &r.vf[1].w[2], 4); } }
L_16F0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
L_16F8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 125u); std::memcpy(q + 0, &r.vf[3].w[0], 4); std::memcpy(q + 4, &r.vf[3].w[1], 4); std::memcpy(q + 8, &r.vf[3].w[2], 4); } }
L_1700: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); std::memcpy(q + 8, &r.vf[4].w[2], 4); } }
L_1708: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); std::memcpy(q + 0, &r.vf[5].w[0], 4); std::memcpy(q + 4, &r.vf[5].w[1], 4); std::memcpy(q + 8, &r.vf[5].w[2], 4); } }
L_1710: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 131u); std::memcpy(q + 0, &r.vf[6].w[0], 4); std::memcpy(q + 4, &r.vf[6].w[1], 4); std::memcpy(q + 8, &r.vf[6].w[2], 4); } }
L_1718: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 132u); std::memcpy(q + 0, &r.vf[7].w[0], 4); std::memcpy(q + 4, &r.vf[7].w[1], 4); std::memcpy(q + 8, &r.vf[7].w[2], 4); } }
L_1720: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 128u) + 12, 2); set_vi(i1, v); } }
L_1728: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 129u) + 12, 2); set_vi(i2, v); } }
L_1730: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 130u) + 12, 2); set_vi(i3, v); } }
L_1738: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 131u) + 12, 2); set_vi(i4, v); } }
L_1740: { ++fl.t; set_vi(i10, 0u + 5u); }
L_1748: { ++fl.t; set_vi(i9, 0u + i12); }
L_1750: { ++fl.t; { const std::uint8_t *q = qword(mem, i1 + 128u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } }
L_1758: { ++fl.t; { const std::uint8_t *q = qword(mem, i2 + 124u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0u})); } }
L_1760: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i4))); vstore(r.vf[2], vsel(vload(r.vf[2]), vsplat(v), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); } }
L_1768: { ++fl.t; { const std::uint8_t *q = qword(mem, i3 + 131u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } }
L_1770: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_1778: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_1780: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); set_vi(i12, i12 + 1u); } }
L_1788: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 0, &r.vf[1].w[0], 4); std::memcpy(q + 4, &r.vf[1].w[1], 4); std::memcpy(q + 8, &r.vf[1].w[2], 4); set_vi(i12, i12 + 1u); } }
L_1790: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 0, &r.vf[3].w[0], 4); std::memcpy(q + 4, &r.vf[3].w[1], 4); std::memcpy(q + 8, &r.vf[3].w[2], 4); set_vi(i12, i12 + 1u); } }
L_1798: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 0, &r.vf[8].w[0], 4); std::memcpy(q + 4, &r.vf[8].w[1], 4); std::memcpy(q + 8, &r.vf[8].w[2], 4); set_vi(i12, i12 + 1u); } }
L_17A0: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 0, &r.vf[9].w[0], 4); std::memcpy(q + 4, &r.vf[9].w[1], 4); std::memcpy(q + 8, &r.vf[9].w[2], 4); set_vi(i12, i12 + 1u); } }
L_17A8: { ++fl.t; set_vi(i1, i11 - i12); }
L_17B0: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[16], q, 16); set_vi(i13, i13 + 1u); } }
L_17B8: { ++fl.t; pend = static_cast<std::int16_t>(i1) > 0; }
L_17C0: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[17], q, 16); set_vi(i13, i13 + 1u); } }
    if (pend) { pend = false; goto L_17D8; }
L_17C8: { ++fl.t; set_vi(i15, (((6088u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_17D0: { ++fl.t; }
    if (pend) { pend = false; goto L_1820; }
L_17D8: { ++fl.t; set_vi(i7, i8 + 0u); }
L_17E0: { ++fl.t; pend = true; }
L_17E8: { ++fl.t; set_vi(i15, 0u + 722u); }
    if (pend) { pend = false; goto L_1940; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((6128u + sh) & 16383u));
    return;
L_1820: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 114u) + 12, 2); set_vi(i3, v); } }
L_1828: { ++fl.t; set_vi(i2, 0u + 32767u); }
L_1830: { ++fl.t; set_vi(i2, i2 + 1u); }
L_1838: { ++fl.t; set_vi(i2, i10 | i2); }
L_1840: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 0u) + 12, 2); set_vi(i1, v); } }
L_1848: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i2; std::memcpy(q + 0, &v, 4); } }
L_1850: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 2u) + 12, 2); set_vi(i3, v); } }
L_1858: { ++fl.t; }
L_1860: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_1868: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 2u) + 12, 2); set_vi(i12, v); } }
L_1870: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 4u) + 12, 2); set_vi(i11, v); } }
L_1878: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1880: { ++fl.t; vu::kick(1, i3); }
    if (pendj) { pendj = false; goto dispatch; }
L_1888: { ++fl.t; ending = true; }
L_1890: { ++fl.t; }
    if (ending) { fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; r.tpc = ((6296u + sh) & 16383u); return; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((6296u + sh) & 16383u));
    return;
L_1940: { ++fl.t; pend = static_cast<std::int16_t>(i8) < 0; }
L_1948: { ++fl.t; set_vi(i8, r.vf[16].w[3]); }
    if (pend) { pend = false; goto L_1960; }
L_1950: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1958: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_1960: { ++fl.t; set_vi(i6, 0u + 4096u); }
L_1968: { ++fl.t; set_vi(i1, i7 & i6); }
L_1970: { ++fl.t; set_vi(i6, 0u + 2048u); }
L_1978: { ++fl.t; set_vi(i6, i7 & i6); }
L_1980: { ++fl.t; pend = 0u == i1; }
L_1988: { ++fl.t; set_vi(i1, 0u + i15); }
    if (pend) { pend = false; goto L_19A0; }
L_1990: { ++fl.t; set_vi(i15, (((6544u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1998: { ++fl.t; }
    if (pend) { pend = false; goto L_1888; }
L_19A0: { ++fl.t; pend = 0u != i6; }
L_19A8: { ++fl.t; set_vi(i15, 0u + i1); }
    if (pend) { pend = false; goto L_01F8; }
L_19B0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_19B8: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((6592u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

void vu1_C6223B5265247457(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 6104u) & 16383u;
    (void)sh;
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i6 = r.vi[6];
    std::uint16_t i7 = r.vi[7];
    std::uint16_t i8 = r.vi[8];
    std::uint16_t i15 = r.vi[15];
    goto L_17D8;
L_01F8: { ++fl.t; set_vi(i1, 0u + 15u); }
L_0200: { ++fl.t; set_vi(i1, i8 & i1); }
L_0208: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1) + 4, 2); set_vi(i2, v); } }
L_0210: { fl.t += 4u; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; pendj = true; }
L_0218: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[15] = i15; vu::interpret(1, ((544u + sh) & 16383u));
    return;
L_17D8: { ++fl.t; set_vi(i7, i8 + 0u); }
L_17E0: { ++fl.t; pend = true; }
L_17E8: { ++fl.t; set_vi(i15, 0u + 722u); }
    if (pend) { pend = false; goto L_1940; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[15] = i15; vu::interpret(1, ((6128u + sh) & 16383u));
    return;
L_1888: { ++fl.t; ending = true; }
L_1890: { ++fl.t; }
    if (ending) { fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[15] = i15; r.tpc = ((6296u + sh) & 16383u); return; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[15] = i15; vu::interpret(1, ((6296u + sh) & 16383u));
    return;
L_1940: { ++fl.t; pend = static_cast<std::int16_t>(i8) < 0; }
L_1948: { ++fl.t; set_vi(i8, r.vf[16].w[3]); }
    if (pend) { pend = false; goto L_1960; }
L_1950: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1958: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_1960: { ++fl.t; set_vi(i6, 0u + 4096u); }
L_1968: { ++fl.t; set_vi(i1, i7 & i6); }
L_1970: { ++fl.t; set_vi(i6, 0u + 2048u); }
L_1978: { ++fl.t; set_vi(i6, i7 & i6); }
L_1980: { ++fl.t; pend = 0u == i1; }
L_1988: { ++fl.t; set_vi(i1, 0u + i15); }
    if (pend) { pend = false; goto L_19A0; }
L_1990: { ++fl.t; set_vi(i15, (((6544u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1998: { ++fl.t; }
    if (pend) { pend = false; goto L_1888; }
L_19A0: { ++fl.t; pend = 0u != i6; }
L_19A8: { ++fl.t; set_vi(i15, 0u + i1); }
    if (pend) { pend = false; goto L_01F8; }
L_19B0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_19B8: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[15] = i15; vu::interpret(1, ((6592u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

void vu1_764D73D309289E76(Vu0Regs &r, std::uint8_t *mem) {
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
    if (pend) { pend = false; goto L_17F0; }
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
L_17F0: { ++fl.t; set_vi(i10, 0u + 1u); }
L_17F8: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_1800: { ++fl.t; set_vi(i9, 0u + i12); }
L_1808: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_1810: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1818: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q, &r.vf[4], 16); set_vi(i12, i12 + 1u); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((6176u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

void vu1_289CBEF33D93DCA3(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 6560u) & 16383u;
    (void)sh;
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i6 = r.vi[6];
    std::uint16_t i8 = r.vi[8];
    std::uint16_t i15 = r.vi[15];
    goto L_19A0;
L_01F8: { ++fl.t; set_vi(i1, 0u + 15u); }
L_0200: { ++fl.t; set_vi(i1, i8 & i1); }
L_0208: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1) + 4, 2); set_vi(i2, v); } }
L_0210: { fl.t += 4u; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; pendj = true; }
L_0218: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[15] = i15; vu::interpret(1, ((544u + sh) & 16383u));
    return;
L_19A0: { ++fl.t; pend = 0u != i6; }
L_19A8: { ++fl.t; set_vi(i15, 0u + i1); }
    if (pend) { pend = false; goto L_01F8; }
L_19B0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_19B8: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[15] = i15; vu::interpret(1, ((6592u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

void vu1_A7E146DC473C81EE(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 2840u) & 16383u;
    (void)sh;
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
    goto L_0B18;
L_01F8: { ++fl.t; set_vi(i1, 0u + 15u); }
L_0200: { ++fl.t; set_vi(i1, i8 & i1); }
L_0208: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1) + 4, 2); set_vi(i2, v); } }
L_0210: { fl.t += 4u; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; pendj = true; }
L_0218: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((544u + sh) & 16383u));
    return;
L_0B18: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 24u); vstore(r.vf[15], vsel(vload(r.vf[15]), vload_ptr(q), v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); } }
L_0B20: { ++fl.t; set_vi(i6, r.vf[16].w[0]); }
L_0B28: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[11], q, 16); set_vi(i13, i13 + 1u); } }
L_0B30: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[12], q, 16); set_vi(i13, i13 + 1u); } }
L_0B38: { ++fl.t; set_vi(i7, 0u + 2u); }
L_0B40: { ++fl.t; pend = 0u == i6; }
L_0B48: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i6) + 0, 2); set_vi(i2, v); } }
    if (pend) { pend = false; goto L_0BA0; }
L_0B50: { ++fl.t; vstore(r.vf[4], vsel(vload(r.vf[4]), vload(r.vf[17]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); }
L_0B58: { ++fl.t; set_vi(i4, r.vf[17].w[0]); }
L_0B60: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 12, 2); set_vi(i5, v); } }
L_0B68: { ++fl.t; { const v4u m = vload(r.vf[16]); vstore(r.vf[16], vsel(vload(r.vf[16]), v4u{m[1], m[2], m[3], m[0]}, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); } }
L_0B70: { ++fl.t; vstore(r.vf[17], vsel(vload(r.vf[17]), vload(r.vf[11]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); }
L_0B78: { ++fl.t; vstore(r.vf[11], vsel(vload(r.vf[11]), vload(r.vf[12]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); }
L_0B80: { ++fl.t; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; set_vi(i15, (((2944u + sh) & 16383u) + 16u) / 8u); pendj = true; }
L_0B88: { ++fl.t; set_vi(i6, r.vf[16].w[0]); }
    if (pendj) { pendj = false; goto dispatch; }
L_0B90: { ++fl.t; pend = 0u != i7; }
L_0B98: { ++fl.t; set_vi(i7, i7 - 1u); }
    if (pend) { pend = false; goto L_0B40; }
L_0BA0: { ++fl.t; set_vi(i1, i11 - i12); }
L_0BA8: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[16], q, 16); set_vi(i13, i13 + 1u); } }
L_0BB0: { ++fl.t; pend = static_cast<std::int16_t>(i1) > 0; }
L_0BB8: { ++fl.t; set_vi(i7, i8 + 0u); }
    if (pend) { pend = false; goto L_0BD0; }
L_0BC0: { ++fl.t; set_vi(i15, (((3008u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0BC8: { ++fl.t; }
    if (pend) { pend = false; goto L_1820; }
L_0BD0: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[17], q, 16); set_vi(i13, i13 + 1u); } }
L_0BD8: { ++fl.t; pend = true; }
L_0BE0: { ++fl.t; set_vi(i15, 0u + 356u); }
    if (pend) { pend = false; goto L_1940; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((3048u + sh) & 16383u));
    return;
L_1820: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 114u) + 12, 2); set_vi(i3, v); } }
L_1828: { ++fl.t; set_vi(i2, 0u + 32767u); }
L_1830: { ++fl.t; set_vi(i2, i2 + 1u); }
L_1838: { ++fl.t; set_vi(i2, i10 | i2); }
L_1840: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 0u) + 12, 2); set_vi(i1, v); } }
L_1848: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i2; std::memcpy(q + 0, &v, 4); } }
L_1850: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 2u) + 12, 2); set_vi(i3, v); } }
L_1858: { ++fl.t; }
L_1860: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_1868: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 2u) + 12, 2); set_vi(i12, v); } }
L_1870: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 4u) + 12, 2); set_vi(i11, v); } }
L_1878: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1880: { ++fl.t; vu::kick(1, i3); }
    if (pendj) { pendj = false; goto dispatch; }
L_1888: { ++fl.t; ending = true; }
L_1890: { ++fl.t; }
    if (ending) { fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; r.tpc = ((6296u + sh) & 16383u); return; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((6296u + sh) & 16383u));
    return;
L_1940: { ++fl.t; pend = static_cast<std::int16_t>(i8) < 0; }
L_1948: { ++fl.t; set_vi(i8, r.vf[16].w[3]); }
    if (pend) { pend = false; goto L_1960; }
L_1950: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1958: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_1960: { ++fl.t; set_vi(i6, 0u + 4096u); }
L_1968: { ++fl.t; set_vi(i1, i7 & i6); }
L_1970: { ++fl.t; set_vi(i6, 0u + 2048u); }
L_1978: { ++fl.t; set_vi(i6, i7 & i6); }
L_1980: { ++fl.t; pend = 0u == i1; }
L_1988: { ++fl.t; set_vi(i1, 0u + i15); }
    if (pend) { pend = false; goto L_19A0; }
L_1990: { ++fl.t; set_vi(i15, (((6544u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1998: { ++fl.t; }
    if (pend) { pend = false; goto L_1888; }
L_19A0: { ++fl.t; pend = 0u != i6; }
L_19A8: { ++fl.t; set_vi(i15, 0u + i1); }
    if (pend) { pend = false; goto L_01F8; }
L_19B0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_19B8: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((6592u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

void vu1_4189784C072350FE(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 2960u) & 16383u;
    (void)sh;
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
    goto L_0B90;
L_01F8: { ++fl.t; set_vi(i1, 0u + 15u); }
L_0200: { ++fl.t; set_vi(i1, i8 & i1); }
L_0208: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1) + 4, 2); set_vi(i2, v); } }
L_0210: { fl.t += 4u; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; pendj = true; }
L_0218: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((544u + sh) & 16383u));
    return;
L_0B40: { ++fl.t; pend = 0u == i6; }
L_0B48: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i6) + 0, 2); set_vi(i2, v); } }
    if (pend) { pend = false; goto L_0BA0; }
L_0B50: { ++fl.t; vstore(r.vf[4], vsel(vload(r.vf[4]), vload(r.vf[17]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); }
L_0B58: { ++fl.t; set_vi(i4, r.vf[17].w[0]); }
L_0B60: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 12, 2); set_vi(i5, v); } }
L_0B68: { ++fl.t; { const v4u m = vload(r.vf[16]); vstore(r.vf[16], vsel(vload(r.vf[16]), v4u{m[1], m[2], m[3], m[0]}, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); } }
L_0B70: { ++fl.t; vstore(r.vf[17], vsel(vload(r.vf[17]), vload(r.vf[11]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); }
L_0B78: { ++fl.t; vstore(r.vf[11], vsel(vload(r.vf[11]), vload(r.vf[12]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); }
L_0B80: { ++fl.t; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; set_vi(i15, (((2944u + sh) & 16383u) + 16u) / 8u); pendj = true; }
L_0B88: { ++fl.t; set_vi(i6, r.vf[16].w[0]); }
    if (pendj) { pendj = false; goto dispatch; }
L_0B90: { ++fl.t; pend = 0u != i7; }
L_0B98: { ++fl.t; set_vi(i7, i7 - 1u); }
    if (pend) { pend = false; goto L_0B40; }
L_0BA0: { ++fl.t; set_vi(i1, i11 - i12); }
L_0BA8: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[16], q, 16); set_vi(i13, i13 + 1u); } }
L_0BB0: { ++fl.t; pend = static_cast<std::int16_t>(i1) > 0; }
L_0BB8: { ++fl.t; set_vi(i7, i8 + 0u); }
    if (pend) { pend = false; goto L_0BD0; }
L_0BC0: { ++fl.t; set_vi(i15, (((3008u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0BC8: { ++fl.t; }
    if (pend) { pend = false; goto L_1820; }
L_0BD0: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[17], q, 16); set_vi(i13, i13 + 1u); } }
L_0BD8: { ++fl.t; pend = true; }
L_0BE0: { ++fl.t; set_vi(i15, 0u + 356u); }
    if (pend) { pend = false; goto L_1940; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((3048u + sh) & 16383u));
    return;
L_1820: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 114u) + 12, 2); set_vi(i3, v); } }
L_1828: { ++fl.t; set_vi(i2, 0u + 32767u); }
L_1830: { ++fl.t; set_vi(i2, i2 + 1u); }
L_1838: { ++fl.t; set_vi(i2, i10 | i2); }
L_1840: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 0u) + 12, 2); set_vi(i1, v); } }
L_1848: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i2; std::memcpy(q + 0, &v, 4); } }
L_1850: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 2u) + 12, 2); set_vi(i3, v); } }
L_1858: { ++fl.t; }
L_1860: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_1868: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 2u) + 12, 2); set_vi(i12, v); } }
L_1870: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 4u) + 12, 2); set_vi(i11, v); } }
L_1878: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1880: { ++fl.t; vu::kick(1, i3); }
    if (pendj) { pendj = false; goto dispatch; }
L_1888: { ++fl.t; ending = true; }
L_1890: { ++fl.t; }
    if (ending) { fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; r.tpc = ((6296u + sh) & 16383u); return; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((6296u + sh) & 16383u));
    return;
L_1940: { ++fl.t; pend = static_cast<std::int16_t>(i8) < 0; }
L_1948: { ++fl.t; set_vi(i8, r.vf[16].w[3]); }
    if (pend) { pend = false; goto L_1960; }
L_1950: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1958: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_1960: { ++fl.t; set_vi(i6, 0u + 4096u); }
L_1968: { ++fl.t; set_vi(i1, i7 & i6); }
L_1970: { ++fl.t; set_vi(i6, 0u + 2048u); }
L_1978: { ++fl.t; set_vi(i6, i7 & i6); }
L_1980: { ++fl.t; pend = 0u == i1; }
L_1988: { ++fl.t; set_vi(i1, 0u + i15); }
    if (pend) { pend = false; goto L_19A0; }
L_1990: { ++fl.t; set_vi(i15, (((6544u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1998: { ++fl.t; }
    if (pend) { pend = false; goto L_1888; }
L_19A0: { ++fl.t; pend = 0u != i6; }
L_19A8: { ++fl.t; set_vi(i15, 0u + i1); }
    if (pend) { pend = false; goto L_01F8; }
L_19B0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_19B8: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((6592u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

void vu1_CA775F48E90EA58E(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 3024u) & 16383u;
    (void)sh;
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i6 = r.vi[6];
    std::uint16_t i7 = r.vi[7];
    std::uint16_t i8 = r.vi[8];
    std::uint16_t i13 = r.vi[13];
    std::uint16_t i15 = r.vi[15];
    goto L_0BD0;
L_01F8: { ++fl.t; set_vi(i1, 0u + 15u); }
L_0200: { ++fl.t; set_vi(i1, i8 & i1); }
L_0208: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1) + 4, 2); set_vi(i2, v); } }
L_0210: { fl.t += 4u; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; pendj = true; }
L_0218: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[6] = i6; r.vi[8] = i8; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((544u + sh) & 16383u));
    return;
L_0BD0: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[17], q, 16); set_vi(i13, i13 + 1u); } }
L_0BD8: { ++fl.t; pend = true; }
L_0BE0: { ++fl.t; set_vi(i15, 0u + 356u); }
    if (pend) { pend = false; goto L_1940; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[6] = i6; r.vi[8] = i8; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((3048u + sh) & 16383u));
    return;
L_1888: { ++fl.t; ending = true; }
L_1890: { ++fl.t; }
    if (ending) { fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[6] = i6; r.vi[8] = i8; r.vi[13] = i13; r.vi[15] = i15; r.tpc = ((6296u + sh) & 16383u); return; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[6] = i6; r.vi[8] = i8; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((6296u + sh) & 16383u));
    return;
L_1940: { ++fl.t; pend = static_cast<std::int16_t>(i8) < 0; }
L_1948: { ++fl.t; set_vi(i8, r.vf[16].w[3]); }
    if (pend) { pend = false; goto L_1960; }
L_1950: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1958: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_1960: { ++fl.t; set_vi(i6, 0u + 4096u); }
L_1968: { ++fl.t; set_vi(i1, i7 & i6); }
L_1970: { ++fl.t; set_vi(i6, 0u + 2048u); }
L_1978: { ++fl.t; set_vi(i6, i7 & i6); }
L_1980: { ++fl.t; pend = 0u == i1; }
L_1988: { ++fl.t; set_vi(i1, 0u + i15); }
    if (pend) { pend = false; goto L_19A0; }
L_1990: { ++fl.t; set_vi(i15, (((6544u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1998: { ++fl.t; }
    if (pend) { pend = false; goto L_1888; }
L_19A0: { ++fl.t; pend = 0u != i6; }
L_19A8: { ++fl.t; set_vi(i15, 0u + i1); }
    if (pend) { pend = false; goto L_01F8; }
L_19B0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_19B8: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[6] = i6; r.vi[8] = i8; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((6592u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[6] = i6; r.vi[8] = i8; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

void vu1_57AA97B96CCB2CA3(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 2848u) & 16383u;
    (void)sh;
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
    goto L_0B20;
L_01F8: { ++fl.t; set_vi(i1, 0u + 15u); }
L_0200: { ++fl.t; set_vi(i1, i8 & i1); }
L_0208: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1) + 4, 2); set_vi(i2, v); } }
L_0210: { fl.t += 4u; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; pendj = true; }
L_0218: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((544u + sh) & 16383u));
    return;
L_0B20: { ++fl.t; set_vi(i6, r.vf[16].w[0]); }
L_0B28: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[11], q, 16); set_vi(i13, i13 + 1u); } }
L_0B30: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[12], q, 16); set_vi(i13, i13 + 1u); } }
L_0B38: { ++fl.t; set_vi(i7, 0u + 2u); }
L_0B40: { ++fl.t; pend = 0u == i6; }
L_0B48: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i6) + 0, 2); set_vi(i2, v); } }
    if (pend) { pend = false; goto L_0BA0; }
L_0B50: { ++fl.t; vstore(r.vf[4], vsel(vload(r.vf[4]), vload(r.vf[17]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); }
L_0B58: { ++fl.t; set_vi(i4, r.vf[17].w[0]); }
L_0B60: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 12, 2); set_vi(i5, v); } }
L_0B68: { ++fl.t; { const v4u m = vload(r.vf[16]); vstore(r.vf[16], vsel(vload(r.vf[16]), v4u{m[1], m[2], m[3], m[0]}, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); } }
L_0B70: { ++fl.t; vstore(r.vf[17], vsel(vload(r.vf[17]), vload(r.vf[11]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); }
L_0B78: { ++fl.t; vstore(r.vf[11], vsel(vload(r.vf[11]), vload(r.vf[12]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); }
L_0B80: { ++fl.t; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; set_vi(i15, (((2944u + sh) & 16383u) + 16u) / 8u); pendj = true; }
L_0B88: { ++fl.t; set_vi(i6, r.vf[16].w[0]); }
    if (pendj) { pendj = false; goto dispatch; }
L_0B90: { ++fl.t; pend = 0u != i7; }
L_0B98: { ++fl.t; set_vi(i7, i7 - 1u); }
    if (pend) { pend = false; goto L_0B40; }
L_0BA0: { ++fl.t; set_vi(i1, i11 - i12); }
L_0BA8: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[16], q, 16); set_vi(i13, i13 + 1u); } }
L_0BB0: { ++fl.t; pend = static_cast<std::int16_t>(i1) > 0; }
L_0BB8: { ++fl.t; set_vi(i7, i8 + 0u); }
    if (pend) { pend = false; goto L_0BD0; }
L_0BC0: { ++fl.t; set_vi(i15, (((3008u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0BC8: { ++fl.t; }
    if (pend) { pend = false; goto L_1820; }
L_0BD0: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[17], q, 16); set_vi(i13, i13 + 1u); } }
L_0BD8: { ++fl.t; pend = true; }
L_0BE0: { ++fl.t; set_vi(i15, 0u + 356u); }
    if (pend) { pend = false; goto L_1940; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((3048u + sh) & 16383u));
    return;
L_1820: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 114u) + 12, 2); set_vi(i3, v); } }
L_1828: { ++fl.t; set_vi(i2, 0u + 32767u); }
L_1830: { ++fl.t; set_vi(i2, i2 + 1u); }
L_1838: { ++fl.t; set_vi(i2, i10 | i2); }
L_1840: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 0u) + 12, 2); set_vi(i1, v); } }
L_1848: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i2; std::memcpy(q + 0, &v, 4); } }
L_1850: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 2u) + 12, 2); set_vi(i3, v); } }
L_1858: { ++fl.t; }
L_1860: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_1868: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 2u) + 12, 2); set_vi(i12, v); } }
L_1870: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 4u) + 12, 2); set_vi(i11, v); } }
L_1878: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1880: { ++fl.t; vu::kick(1, i3); }
    if (pendj) { pendj = false; goto dispatch; }
L_1888: { ++fl.t; ending = true; }
L_1890: { ++fl.t; }
    if (ending) { fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; r.tpc = ((6296u + sh) & 16383u); return; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((6296u + sh) & 16383u));
    return;
L_1940: { ++fl.t; pend = static_cast<std::int16_t>(i8) < 0; }
L_1948: { ++fl.t; set_vi(i8, r.vf[16].w[3]); }
    if (pend) { pend = false; goto L_1960; }
L_1950: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1958: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_1960: { ++fl.t; set_vi(i6, 0u + 4096u); }
L_1968: { ++fl.t; set_vi(i1, i7 & i6); }
L_1970: { ++fl.t; set_vi(i6, 0u + 2048u); }
L_1978: { ++fl.t; set_vi(i6, i7 & i6); }
L_1980: { ++fl.t; pend = 0u == i1; }
L_1988: { ++fl.t; set_vi(i1, 0u + i15); }
    if (pend) { pend = false; goto L_19A0; }
L_1990: { ++fl.t; set_vi(i15, (((6544u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1998: { ++fl.t; }
    if (pend) { pend = false; goto L_1888; }
L_19A0: { ++fl.t; pend = 0u != i6; }
L_19A8: { ++fl.t; set_vi(i15, 0u + i1); }
    if (pend) { pend = false; goto L_01F8; }
L_19B0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_19B8: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((6592u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

template <bool kSticky>
static void vu1_C0841D0AC676AA8E_s(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 16u) & 16383u;
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
    goto L_0010;
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
    if (pend) { pend = false; goto L_17F0; }
L_00F8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 12, 2); set_vi(i8, v); } }
L_0100: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0108: { ++fl.t; set_vi(i15, (((264u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0110: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 4, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0C20; }
L_0118: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0120: { ++fl.t; set_vi(i15, (((288u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0128: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_0FD8; }
L_0130: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0138: { ++fl.t; set_vi(i15, (((312u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0140: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 37u) + 0, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0F30; }
L_0148: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0150: { ++fl.t; set_vi(i15, (((336u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0158: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_13F0; }
L_0160: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0168: { ++fl.t; set_vi(i15, (((360u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0170: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_1128; }
L_0178: { ++fl.t; set_vi(i1, 0u + 66u); }
L_0180: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 45u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } }
L_0188: { ++fl.t; set_vi(i15, (((392u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0190: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
    if (pend) { pend = false; goto L_17F0; }
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
L_0C20: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0u)); set_vi(i1, 0u + 8u); vstore(r.vf[3], uv); n3 = vshadow_eager(r.vf[3]); }
L_0C28: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i1, i5 & i1); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n5 = vshadow_eager(r.vf[5]); }
L_0C30: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, v4u{0u, 0u, 0u, 0x3F800000u}); { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 8, 2); set_vi(i2, v); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n5 = vshadow_eager(r.vf[5]); }
L_0C38: { ++fl.t; pend = 0u == i1; }
L_0C40: { ++fl.t; set_vi(i3, 0u + 3u); }
    if (pend) { pend = false; goto L_0C50; }
L_0C48: { ++fl.t; set_vi(i4, 0u + i2); }
L_0C50: { ++fl.t; set_vi(i1, 0u + 8u); }
L_0C58: { ++fl.t; set_vi(i1, i4 & i1); }
L_0C60: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 37u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } n1 = vshadow_eager(r.vf[1]); }
L_0C68: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 139u); std::memcpy(&r.vf[6], q, 16); } n6 = vshadow_eager(r.vf[6]); }
L_0C70: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 140u); std::memcpy(&r.vf[7], q, 16); } n7 = vshadow_eager(r.vf[7]); }
L_0C78: { ++fl.t; pend = 0u == i1; }
L_0C80: { ++fl.t; set_vi(i2, 0u + 4u); }
    if (pend) { pend = false; goto L_0C90; }
L_0C88: { ++fl.t; const v4u uv = vaddn(n1, n1); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0C90: { ++fl.t; const v4u uv = (v4u)((v4f)n5 + (v4f)vsplat(0x3F800000u)); set_vi(i5, i4 & i3); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0C98: { ++fl.t; set_vi(i4, i4 & i2); }
L_0CA0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 124u) + 12, 2); set_vi(i1, v); } }
L_0CA8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 138u); std::memcpy(q + 12, &r.vf[1].w[3], 4); } }
L_0CB0: { ++fl.t; pend = 0u == i5; }
L_0CB8: { ++fl.t; set_vi(i5, i5 - 1u); }
    if (pend) { pend = false; goto L_0D00; }
L_0CC0: { ++fl.t; r.i = 1124073472u; }
L_0CC8: { ++fl.t; pend = 0u == i5; }
L_0CD0: { ++fl.t; }
    if (pend) { pend = false; goto L_0D28; }
L_0CD8: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); set_vi(i2, 0u + 1u); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_0CE0: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 16u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0CE8: { ++fl.t; set_vi(i1, i1 | i3); }
L_0CF0: { ++fl.t; pend = true; }
L_0CF8: { ++fl.t; set_vi(i3, 0u + 1u); }
    if (pend) { pend = false; goto L_0D50; }
L_0D00: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); r.i = 1132396544u; vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0D08: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 32751u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0D10: { ++fl.t; set_vi(i1, i1 & i3); }
L_0D18: { ++fl.t; pend = true; }
L_0D20: { ++fl.t; set_vi(i3, 0u + 0u); }
    if (pend) { pend = false; goto L_0D50; }
L_0D28: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); set_vi(i2, 0u + 0u); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0D30: { ++fl.t; r.i = 1124073472u; }
L_0D38: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 16u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0D40: { ++fl.t; set_vi(i1, i1 | i3); }
L_0D48: { ++fl.t; set_vi(i3, 0u + 1u); }
L_0D50: { ++fl.t; pend = 0u == i4; }
L_0D58: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 134u); const std::uint32_t v = i3; std::memcpy(q + 8, &v, 4); } }
    if (pend) { pend = false; goto L_0D70; }
L_0D60: { ++fl.t; r.i = 1073676288u; }
L_0D68: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vfix(vsplat(r.i))); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0D70: { ++fl.t; set_vi(i3, 0u + 27u); }
L_0D78: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(r.vf[1].w[0])); { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n2 = vshadow_eager(r.vf[2]); }
L_0D80: { ++fl.t; const v4u uv = vmuln(n6, vsplat(n1[3])); { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i3))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0D88: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0D90: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 132u); const std::uint32_t v = i2; std::memcpy(q + 12, &v, 4); } }
L_0D98: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 112u); std::memcpy(q + 0, &r.vf[3].w[0], 4); std::memcpy(q + 4, &r.vf[3].w[1], 4); } }
L_0DA0: { ++fl.t; const v4u uv = vmuln(n7, n6); { std::uint8_t *q = qword(mem, 0u + 137u); std::memcpy(q + 12, &r.vf[5].w[3], 4); } vstore(r.vf[7], uv); fl.push_last<15u, kSticky>(uv); n7 = uv; }
L_0DA8: { ++fl.t; set_vi(i2, i15 + 0u); }
L_0DB0: { ++fl.t; set_vi(i15, (((3504u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0DB8: { ++fl.t; }
    if (pend) { pend = false; goto L_17F0; }
L_0DC0: { ++fl.t; set_vi(i15, i2 + 0u); }
L_0DC8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 133u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
L_0DD0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 143u); std::memcpy(q, &r.vf[7], 16); } }
L_0DD8: { ++fl.t; pend = true; }
L_0DE0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 125u) + 12, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_1160; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((3560u + sh) & 16383u));
    return;
L_0F30: { ++fl.t; set_vi(i1, 0u + 16u); }
L_0F38: { ++fl.t; set_vi(i1, i5 & i1); }
L_0F40: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 12, 2); set_vi(i2, v); } }
L_0F48: { ++fl.t; pend = 0u == i1; }
L_0F50: { ++fl.t; }
    if (pend) { pend = false; goto L_0F68; }
L_0F58: { ++fl.t; set_vi(i4, 0u + i2); }
L_0F60: { ++fl.t; }
L_0F68: { ++fl.t; pend = 0u == i4; }
L_0F70: { ++fl.t; set_vi(i4, i4 - 1u); }
    if (pend) { pend = false; goto L_0FC0; }
L_0F78: { ++fl.t; set_vi(i1, 0u + 16384u); }
L_0F80: { ++fl.t; pend = 0u == i4; }
L_0F88: { ++fl.t; }
    if (pend) { pend = false; goto L_0FA8; }
L_0F90: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0F98: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0FA0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0FA8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0FB0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0FB8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0FC0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0FC8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0FD0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0FD8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 8, 2); set_vi(i3, v); } }
L_0FE0: { ++fl.t; set_vi(i2, 0u + 27u); }
L_0FE8: { ++fl.t; pend = 0u != i4; }
L_0FF0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 124u) + 12, 2); set_vi(i1, v); } }
    if (pend) { pend = false; goto L_1008; }
L_0FF8: { ++fl.t; pend = 0u != i3; }
L_1000: { ++fl.t; }
    if (pend) { pend = false; goto L_1020; }
L_1008: { ++fl.t; set_vi(i3, 0u + 32735u); }
L_1010: { ++fl.t; pend = true; }
L_1018: { ++fl.t; set_vi(i1, i1 & i3); }
    if (pend) { pend = false; goto L_1030; }
L_1020: { ++fl.t; set_vi(i3, 0u + 32u); }
L_1028: { ++fl.t; set_vi(i1, i1 | i3); }
L_1030: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } }
L_1038: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i2))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
L_1040: { ++fl.t; pend = true; }
L_1048: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
    if (pend) { pend = false; goto L_17F0; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((4176u + sh) & 16383u));
    return;
L_1128: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i1, 0u + 4u); vstore(r.vf[1], uv); n1 = vshadow_eager(r.vf[1]); }
L_1130: { ++fl.t; set_vi(i1, i5 & i1); }
L_1138: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 4, 2); set_vi(i2, v); } }
L_1140: { ++fl.t; pend = 0u == i1; }
L_1148: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 145u); std::memcpy(q + 0, &r.vf[1].w[0], 4); } }
    if (pend) { pend = false; goto L_1158; }
L_1150: { ++fl.t; set_vi(i4, 0u + i2); }
L_1158: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 125u); const std::uint32_t v = i4; std::memcpy(q + 12, &v, 4); } }
L_1160: { ++fl.t; const v4u uv = vmin(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0u)); { const std::uint8_t *q = qword(mem, 0u + 138u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[4], uv); n3 = vshadow_eager(r.vf[3]); }
L_1168: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 141u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n3 = vshadow_eager(r.vf[3]); }
L_1170: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 64u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow_eager(r.vf[1]); }
L_1178: { ++fl.t; pend = 0u != i4; }
L_1180: { ++fl.t; const v4u uv = vmuln(n3, vsplat(n3[3])); { const std::uint8_t *q = qword(mem, 0u + 142u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vshadow_eager(r.vf[2]); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; goto L_11A0; }
L_1188: { ++fl.t; const v4u uv = vmuln(n1, n3); { std::uint8_t *q = qword(mem, 0u + 145u); std::memcpy(q + 0, &r.vf[0].w[0], 4); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); }
L_1190: { ++fl.t; const v4u uv = vmuln(n1, n3); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1198: { ++fl.t; const v4u uv = vaddn(nacc, (v4u)((v4f)n2 * (v4f)vsplat(0x3F800000u))); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_11A0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 138u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); std::memcpy(q + 8, &r.vf[4].w[2], 4); } }
L_11A8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_11B0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 137u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((4536u + sh) & 16383u));
    return;
L_13F0: { ++fl.t; set_vi(i1, 0u + 32u); }
L_13F8: { ++fl.t; set_vi(i1, i5 & i1); }
L_1400: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 47u) + 0, 2); set_vi(i2, v); } }
L_1408: { ++fl.t; pend = 0u == i1; }
L_1410: { ++fl.t; }
    if (pend) { pend = false; goto L_1428; }
L_1418: { ++fl.t; set_vi(i4, 0u + i2); }
L_1420: { ++fl.t; }
L_1428: { ++fl.t; pend = 0u != i4; }
L_1430: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 33u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } }
    if (pend) { pend = false; goto L_1448; }
L_1438: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1440: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 136u); std::memcpy(q + 0, &r.vf[0].w[0], 4); std::memcpy(q + 4, &r.vf[0].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_1448: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1450: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 136u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((5208u + sh) & 16383u));
    return;
L_17F0: { ++fl.t; set_vi(i10, 0u + 1u); }
L_17F8: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_1800: { ++fl.t; set_vi(i9, 0u + i12); }
L_1808: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_1810: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1818: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q, &r.vf[4], 16); set_vi(i12, i12 + 1u); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((6176u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

static __attribute__((noinline, cold)) void vu1_C0841D0AC676AA8E_c(Vu0Regs &r, std::uint8_t *mem) { vu1_C0841D0AC676AA8E_s<true>(r, mem); }

void vu1_C0841D0AC676AA8E(Vu0Regs &r, std::uint8_t *mem) {
    if ((r.status & 0xC0u) == 0xC0u) vu1_C0841D0AC676AA8E_s<false>(r, mem);
    else vu1_C0841D0AC676AA8E_c(r, mem);
}

void vu1_678C0DB1E1A8A263(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 5352u) & 16383u;
    (void)sh;
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i6 = r.vi[6];
    std::uint16_t i7 = r.vi[7];
    std::uint16_t i8 = r.vi[8];
    std::uint16_t i13 = r.vi[13];
    std::uint16_t i15 = r.vi[15];
    goto L_14E8;
L_01F8: { ++fl.t; set_vi(i1, 0u + 15u); }
L_0200: { ++fl.t; set_vi(i1, i8 & i1); }
L_0208: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1) + 4, 2); set_vi(i2, v); } }
L_0210: { fl.t += 4u; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; pendj = true; }
L_0218: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((544u + sh) & 16383u));
    return;
L_14E8: { ++fl.t; set_vi(i6, r.vf[16].w[0]); }
L_14F0: { ++fl.t; set_vi(i6, i6 - 1u); }
L_14F8: { ++fl.t; set_vi(i1, r.vf[17].w[0]); }
L_1500: { ++fl.t; { const v4u m = vload(r.vf[17]); vstore(r.vf[17], vsel(vload(r.vf[17]), v4u{m[1], m[2], m[3], m[0]}, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); } }
L_1508: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[2], q, 16); set_vi(i13, i13 + 1u); } }
L_1510: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[3], q, 16); set_vi(i13, i13 + 1u); } }
L_1518: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[4], q, 16); set_vi(i13, i13 + 1u); } }
L_1520: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[5], q, 16); set_vi(i13, i13 + 1u); } }
L_1528: { ++fl.t; { std::uint8_t *q = qword(mem, i1 + 960u); std::memcpy(q, &r.vf[2], 16); } }
L_1530: { ++fl.t; { std::uint8_t *q = qword(mem, i1 + 961u); std::memcpy(q, &r.vf[3], 16); } }
L_1538: { ++fl.t; { std::uint8_t *q = qword(mem, i1 + 962u); std::memcpy(q, &r.vf[4], 16); } }
L_1540: { ++fl.t; { std::uint8_t *q = qword(mem, i1 + 963u); std::memcpy(q, &r.vf[5], 16); } }
L_1548: { ++fl.t; pend = 0u != i6; }
L_1550: { ++fl.t; set_vi(i6, i6 - 1u); }
    if (pend) { pend = false; goto L_14F8; }
L_1558: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[16], q, 16); set_vi(i13, i13 + 1u); } }
L_1560: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[17], q, 16); set_vi(i13, i13 + 1u); } }
L_1568: { ++fl.t; set_vi(i7, i8 + 0u); }
L_1570: { ++fl.t; pend = true; }
L_1578: { ++fl.t; set_vi(i15, 0u + 669u); }
    if (pend) { pend = false; goto L_1940; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((5504u + sh) & 16383u));
    return;
L_1888: { ++fl.t; ending = true; }
L_1890: { ++fl.t; }
    if (ending) { fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[13] = i13; r.vi[15] = i15; r.tpc = ((6296u + sh) & 16383u); return; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((6296u + sh) & 16383u));
    return;
L_1940: { ++fl.t; pend = static_cast<std::int16_t>(i8) < 0; }
L_1948: { ++fl.t; set_vi(i8, r.vf[16].w[3]); }
    if (pend) { pend = false; goto L_1960; }
L_1950: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1958: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_1960: { ++fl.t; set_vi(i6, 0u + 4096u); }
L_1968: { ++fl.t; set_vi(i1, i7 & i6); }
L_1970: { ++fl.t; set_vi(i6, 0u + 2048u); }
L_1978: { ++fl.t; set_vi(i6, i7 & i6); }
L_1980: { ++fl.t; pend = 0u == i1; }
L_1988: { ++fl.t; set_vi(i1, 0u + i15); }
    if (pend) { pend = false; goto L_19A0; }
L_1990: { ++fl.t; set_vi(i15, (((6544u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1998: { ++fl.t; }
    if (pend) { pend = false; goto L_1888; }
L_19A0: { ++fl.t; pend = 0u != i6; }
L_19A8: { ++fl.t; set_vi(i15, 0u + i1); }
    if (pend) { pend = false; goto L_01F8; }
L_19B0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_19B8: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((6592u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

void vu1_A354165DEE91C8BF(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 6720u) & 16383u;
    (void)sh;
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
    std::uint16_t i13 = r.vi[13];
    std::uint16_t i15 = r.vi[15];
    goto L_1A40;
L_01F8: { ++fl.t; set_vi(i1, 0u + 15u); }
L_0200: { ++fl.t; set_vi(i1, i8 & i1); }
L_0208: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1) + 4, 2); set_vi(i2, v); } }
L_0210: { fl.t += 4u; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; pendj = true; }
L_0218: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[6] = i6; r.vi[7] = i7; r.vi[15] = i15; vu::interpret(1, ((544u + sh) & 16383u));
    return;
L_1A40: { ++fl.t; pend = 0u == i3; }
L_1A48: { ++fl.t; { const std::uint8_t *q = qword(mem, i13 + 0u); std::memcpy(&r.vf[14], q, 16); } }
    if (pend) { pend = false; goto L_1A80; }
L_1A50: { ++fl.t; pend = static_cast<std::int16_t>(i6) < 0; }
L_1A58: { ++fl.t; set_vi(i7, r.vf[17].w[3]); }
    if (pend) { pend = false; goto L_1AA0; }
L_1A60: { ++fl.t; jpc = (static_cast<std::uint32_t>(i5) * 8u) & 16383u; set_vi(i15, (((6752u + sh) & 16383u) + 16u) / 8u); pendj = true; }
L_1A68: { ++fl.t; set_vi(i6, i4 + 0u); }
    if (pendj) { pendj = false; goto dispatch; }
L_1A70: { ++fl.t; jpc = (static_cast<std::uint32_t>(i6) * 8u) & 16383u; pendj = true; }
L_1A78: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_1A80: { ++fl.t; pend = static_cast<std::int16_t>(i6) < 0; }
L_1A88: { ++fl.t; }
    if (pend) { pend = false; goto L_1AA0; }
L_1A90: { ++fl.t; jpc = (static_cast<std::uint32_t>(i4) * 8u) & 16383u; pendj = true; }
L_1A98: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_1AA0: { ++fl.t; pend = true; }
L_1AA8: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
    if (pend) { pend = false; goto L_01F8; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[6] = i6; r.vi[7] = i7; r.vi[15] = i15; vu::interpret(1, ((6832u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[6] = i6; r.vi[7] = i7; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

template <bool kSticky>
PS2_VU_BODY void vu1_ECC1F2148557EE5E_b(Vu0Regs &r, std::uint8_t *mem, VuDaz &daz, std::uint32_t &hop) {
    (void)daz;
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 544u) & 16383u;
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
    std::uint16_t i14 = r.vi[14];
    std::uint16_t i15 = r.vi[15];
    goto L_0220;
L_01F8: { ++fl.t; set_vi(i1, 0u + 15u); }
L_0200: { ++fl.t; set_vi(i1, i8 & i1); }
L_0208: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1) + 4, 2); set_vi(i2, v); } }
L_0210: { fl.t += 4u; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; pendj = true; }
L_0218: { ++fl.t; }
    if (pendj) { pendj = false; vflushd(r.vf[1], v4u{0u, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[3], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
    vflushd(r.vf[25], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); 
L_0220: { ++fl.t; const v4u uv = vmuld(n28, vsplat(n17[0])); { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 114u) + 8, 2); set_vi(i10, v); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0228: { ++fl.t; const v4u uv = vmaddd(nacc, n29, vsplat(n17[1])); { const std::uint8_t *q = qword(mem, 0u + 26u); std::memcpy(&r.vf[15], q, 16); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0230: { ++fl.t; const v4u uv = vmaddd(nacc, n30, vsplat(n17[2])); set_vi(i9, 0u + 4u); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0238: { ++fl.t; const v4u uv = vaddd(nacc, (v4u)((v4f)n31 * (v4f)vsplat(0x3F800000u))); { std::uint8_t *q = qword(mem, i12 + 1u); const std::uint32_t v = i9; std::memcpy(q + 0, &v, 4); } vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n27 = vsel(n27, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0240: { ++fl.t; const v4u uv = vmuld(n28, vsplat(n16[0])); { const std::uint8_t *q = qword(mem, i10 + 30u); std::memcpy(&r.vf[1], q, 16); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n1 = vshadow(r.vf[1]); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0248: { ++fl.t; const v4u uv = vmaddd(nacc, n29, vsplat(n16[1])); { std::uint8_t *q = qword(mem, i12 + 2u); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0250: { ++fl.t; const v4u uv = vmaddd(nacc, n30, vsplat(n16[2])); set_vi(i10, 0u + 0u); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0258: { ++fl.t; const v4u uv = vsubd(n27, n24); set_vi(i9, i12 + 2u); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0260: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); std::memcpy(q, &r.vf[1], 16); } }
L_0268: { ++fl.t; set_vi(i12, i12 + 3u); }
L_0270: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[15].w[0], r.vf[27].w[2]); fl.end_q(r, qb, 7u); } vstore(r.vf[17], uv); n17 = vshadow(r.vf[17]); }
L_0278: { ++fl.t; const v4u uv = vmuld(n18, n26); { const std::uint8_t *q = qword(mem, i13 + 0u); std::memcpy(&r.vf[16], q, 16); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n16 = vshadow(r.vf[16]); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0280: { ++fl.t; const v4u uv = vmuld(n20, n26); { const std::uint8_t *q = qword(mem, 0u + 38u); std::memcpy(&r.vf[24], q, 16); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n24 = vshadow(r.vf[24]); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0288: { ++fl.t; const v4u uv = vmuld(n22, n26); vstore(r.vf[5], vsel(vload(r.vf[5]), vload(r.vf[0]), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n5 = vshadow(r.vf[5]); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0290: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 145u); vstore(r.vf[7], vsel(vload(r.vf[7]), vload_ptr(q), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } n7 = vshadow(r.vf[7]); }
L_0298: { ++fl.t; const v4u uv = vaddd(n3, vsplat(n3[1])); { const std::uint8_t *q = qword(mem, 0u + 143u); std::memcpy(&r.vf[4], q, 16); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n4 = vshadow(r.vf[4]); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_02A0: { ++fl.t; const v4u uv = vmaddd(nacc, n17, vsplat(n3[2])); { const std::uint8_t *q = qword(mem, i13 + 1u); std::memcpy(&r.vf[11], q, 16); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n11 = vshadow(r.vf[11]); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_02A8: { ++fl.t; const v4u uv = vaddd(n2, vsplat(n2[0])); { const std::uint8_t *q = qword(mem, 0u + 138u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n3 = vshadow(r.vf[3]); nacc = vsel(nacc, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_02B0: { ++fl.t; const v4u uv = vmaddd(nacc, n17, vsplat(n2[2])); { const std::uint8_t *q = qword(mem, 0u + 142u); std::memcpy(&r.vf[2], q, 16); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n2 = vshadow(r.vf[2]); n6 = vsel(n6, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_02B8: { ++fl.t; const v4u uv = vaddd(n1, vsplat(n1[0])); { const std::uint8_t *q = qword(mem, 0u + 33u); std::memcpy(&r.vf[8], q, 16); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.stick<2u, kSticky>(uv); n8 = vshadow(r.vf[8]); nacc = vsel(nacc, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_02C0: { ++fl.t; const v4u uv = vmaddd(nacc, n17, vsplat(n1[1])); { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = 0u; std::memcpy(q + 8, &v, 4); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.stick<2u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_02C8: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vqd(r.q)); { const std::uint8_t *q = qword(mem, 0u + 137u); vstore(r.vf[27], vsel(vload(r.vf[27]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[1], uv); fl.stick<15u, kSticky>(uv); n27 = vshadow(r.vf[27]); n1 = uv; }
L_02D0: { ++fl.t; const v4u uv = vmuld(n27, n24); { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 132u) + 12, 2); set_vi(i4, v); } vstore(r.vf[24], vsel(vload(r.vf[24]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.stick<12u, kSticky>(uv); n24 = vsel(n24, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_02D8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 135u); std::memcpy(&r.vf[10], q, 16); } n10 = vshadow(r.vf[10]); }
L_02E0: { ++fl.t; vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vmax(vload(r.vf[6]), v4u{0u, 0u, 0u, 0x3F800000u}); { const std::uint8_t *q = qword(mem, 0u + 134u); std::memcpy(&r.vf[9], q, 16); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n9 = vshadow(r.vf[9]); n5 = vshadow(r.vf[5]); }
L_02E8: { ++fl.t; vflushd(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); const v4u uv = vmax(vload(r.vf[1]), vsplat(r.vf[24].w[3])); { const std::uint8_t *q = qword(mem, 0u + 136u); vstore(r.vf[6], vsel(vload(r.vf[6]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n6 = vshadow(r.vf[6]); n1 = vshadow(r.vf[1]); }
L_02F0: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vsplat(n8[2])); { std::uint8_t *q = qword(mem, 0u + 112u); std::memcpy(q + 0, &r.vf[11].w[0], 4); std::memcpy(q + 4, &r.vf[11].w[1], 4); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_02F8: { ++fl.t; const v4u uv = vmaddd(nacc, n8, vsplat(n27[2])); { const std::uint8_t *q = qword(mem, 0u + 41u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[24], vsel(vload(r.vf[24]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n3 = vshadow(r.vf[3]); n24 = vsel(n24, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0300: { ++fl.t; const v4u uv = vmuld(n19, vsplat(n5[0])); { const std::uint8_t *q = qword(mem, 0u + 44u); vstore(r.vf[13], vsel(vload(r.vf[13]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n13 = vshadow(r.vf[13]); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0308: { ++fl.t; const v4u uv = vmaddd(nacc, n21, vsplat(n5[1])); set_vi(i6, 0u + 16u); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0310: { ++fl.t; const v4u uv = vmaddd(nacc, n23, vsplat(n5[2])); { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 114u) + 0, 2); set_vi(i3, v); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0318: { ++fl.t; const v4u uv = vmuld(n24, n1); set_vi(i7, 0u + 14u); vstore(r.vf[24], vsel(vload(r.vf[24]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n24 = vsel(n24, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0320: { ++fl.t; vflushd(r.vf[24], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); const v4u uv = vmax(vload(r.vf[24]), vsplat(r.vf[8].w[1])); set_vi(i2, i8 & i6); vstore(r.vf[24], vsel(vload(r.vf[24]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n24 = vshadow(r.vf[24]); }
L_0328: { ++fl.t; const v4u uv = vmuld(n26, n10); set_vi(i5, 0u + 16u); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.stick<12u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_0330: { ++fl.t; vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vmax(vload(r.vf[5]), vsplat(r.vf[7].w[0])); set_vi(i3, i3 + i3); vstore(r.vf[5], uv); n5 = vshadow(r.vf[5]); }
L_0338: { ++fl.t; const v4u uv = vaddd(nacc, (v4u)((v4f)n9 * (v4f)vsplat(0x3F800000u))); { const std::uint8_t *q = qword(mem, i2 + 15u); vstore(r.vf[17], vsel(vload(r.vf[17]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.stick<12u, kSticky>(uv); n17 = vshadow(r.vf[17]); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_0340: { ++fl.t; const v4u uv = vmin(vload(r.vf[24]), vsplat(r.vf[8].w[0])); set_vi(i3, i3 & i7); vstore(r.vf[24], vsel(vload(r.vf[24]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n24 = vshadow(r.vf[24]); }
L_0348: { ++fl.t; const v4u uv = vmuld(vswz<1, 2, 0, 3>(n13), vswz<2, 0, 1, 3>(n25)); { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 114u) + 4, 2); set_vi(i2, v); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0350: { ++fl.t; const v4u uv = vmuld(n4, n5); r.clip = 0u; fl.set_clip(r.clip, fl.t - 4u); vstore(r.vf[5], uv); fl.stick<15u, kSticky>(uv); n5 = uv; }
L_0358: { ++fl.t; vflushd(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); const v4u uv = vmsubd(nacc, vswz<1, 2, 0, 3>(n25), vswz<2, 0, 1, 3>(n13)); { std::uint8_t *q = qword(mem, 0u + 113u); std::memcpy(q + 0, &r.vf[26].w[0], 4); std::memcpy(q + 4, &r.vf[26].w[1], 4); } vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0360: { ++fl.t; const v4u uv = vsubd(n3, vsplat(n27[2])); { const std::uint8_t *q = qword(mem, i4 + 112u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.push<1u, kSticky>(uv); n4 = vshadow(r.vf[4]); n3 = vsel(n3, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0368: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[24], r.vf[13].w[3]); set_vi(i4, i2 + i2); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_0370: { ++fl.t; const v4u uv = vmuld(n5, n16); set_vi(i4, i4 & i7); vstore(r.acc, uv); fl.push<15u, kSticky>(uv); nacc = uv; }
L_0378: { ++fl.t; const v4u uv = vmaddd(nacc, n3, n16); { const std::uint8_t *q = qword(mem, 0u + 133u); std::memcpy(&r.vf[13], q, 16); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n13 = vshadow(r.vf[13]); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0380: { ++fl.t; const v4u uv = vaddd(nacc, (v4u)((v4f)n2 * (v4f)vsplat(0x3F800000u))); set_vi(i5, (fl.mac() & 0xFFFFu) == i5 ? 1u : 0u); vstore(r.vf[2], uv); fl.stick<15u, kSticky>(uv); n2 = uv; }
L_0388: { ++fl.t; const v4u uv = vaddd(n4, n6); set_vi(i5, i3 + i5); vstore(r.vf[16], vsel(vload(r.vf[16]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.stick<12u, kSticky>(uv); n16 = vsel(n16, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_0390: { ++fl.t; const v4u uv = vmuld(n26, n27); { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = i5; std::memcpy(q + 0, &v, 4); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n4 = vsel(n4, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0398: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n1[0])); set_vi(i1, (fl.clip() & 15u) ? 1u : 0u); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.stick<2u, kSticky>(uv); n26 = vsel(n26, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_03A0: { ++fl.t; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vmin(vload(r.vf[2]), vsplat(r.vf[27].w[3])); set_vi(i4, i4 + i1); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n2 = vshadow(r.vf[2]); }
L_03A8: { ++fl.t; const v4u uv = vmuld(n16, vsplat(n1[0])); { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = i4; std::memcpy(q + 4, &v, 4); } vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.stick<12u, kSticky>(uv); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_03B0: { ++fl.t; const v4u uv = vaddd(n4, vsplat(n4[1])); set_vi(i3, 0u + 16384u); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_03B8: { ++fl.t; const v4u uv = vmaddd(nacc, n17, vsplat(n4[2])); set_vi(i7, i12 + 0u); vstore(r.vf[17], vsel(vload(r.vf[17]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n17 = vsel(n17, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_03C0: { ++fl.t; const v4u uv = vmuld(n2, n13); { const std::uint8_t *q = qword(mem, 0u + 39u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[13], uv); fl.stick<15u, kSticky>(uv); n4 = vshadow(r.vf[4]); n13 = uv; }
L_03C8: { ++fl.t; vflushd(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vftoi(vload(r.vf[24]), 4); { std::uint8_t *q = qword(mem, i7 + 0u); std::memcpy(q + 0, &r.vf[26].w[0], 4); std::memcpy(q + 4, &r.vf[26].w[1], 4); std::memcpy(q + 8, &r.vf[26].w[2], 4); } vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n27 = vshadow(r.vf[27]); }
L_03D0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 117u) + 12, 2); set_vi(i4, v); } }
L_03D8: { ++fl.t; const v4u uv = vmuld(n17, vsplat(n17[0])); { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 116u) + 12, 2); set_vi(i5, v); } vstore(r.vf[16], vsel(vload(r.vf[16]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.push<1u, kSticky>(uv); n16 = vsel(n16, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_03E0: { ++fl.t; const v4u uv = vftoi(vload(r.vf[13]), 0); { const std::uint8_t *q = qword(mem, i13 + 3u); std::memcpy(&r.vf[17], q, 16); } vstore(r.vf[13], uv); n17 = vshadow(r.vf[17]); n13 = vshadow(r.vf[13]); }
L_03E8: { ++fl.t; const v4u uv = vaddd(n24, n4); set_vi(i2, r.vf[27].w[3]); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_03F0: { ++fl.t; vflushd(r.vf[2], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i4 + 3u); std::memcpy(q, &r.vf[2], 16); } }
L_03F8: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); set_vi(i6, (fl.mac() & 0xFFFFu) == i6 ? 1u : 0u); vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n27 = vsel(n27, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0400: { ++fl.t; const v4u uv = vmuld(n28, vsplat(n17[0])); { std::uint16_t v; std::memcpy(&v, qword(mem, i6 + 126u) + 12, 2); set_vi(i6, v); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0408: { ++fl.t; const v4u uv = vftoi(vload(r.vf[26]), 4); { std::uint8_t *q = qword(mem, i7 + 1u); std::memcpy(q, &r.vf[13], 16); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n2 = vshadow(r.vf[2]); }
L_0410: { ++fl.t; vflushd(r.vf[24], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vmaddd(nacc, n29, vsplat(n17[1])); { std::uint8_t *q = qword(mem, i4 + 1u); std::memcpy(q, &r.vf[24], 16); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0418: { ++fl.t; vflushd(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vmaddd(nacc, n30, vsplat(n17[2])); { std::uint8_t *q = qword(mem, i4 + 0u); std::memcpy(q, &r.vf[27], 16); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0420: { ++fl.t; set_vi(i8, i8 | i6); }
L_0428: { ++fl.t; set_vi(i6, i3 & i8); }
L_0430: { ++fl.t; set_vi(i6, i6 + i6); }
L_0438: { ++fl.t; { std::uint8_t *q = qword(mem, i7 + 2u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
L_0440: { ++fl.t; set_vi(i6, i2 | i6); }
L_0448: { ++fl.t; { std::uint8_t *q = qword(mem, i7 + 2u); const std::uint32_t v = i6; std::memcpy(q + 12, &v, 4); } }
L_0450: { ++fl.t; set_vi(i12, i12 + 3u); }
L_0458: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 115u) + 12, 2); set_vi(i6, v); } }
L_0460: { ++fl.t; vflushd(r.vf[16], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); { std::uint8_t *q = qword(mem, i4 + 2u); std::memcpy(q + 0, &r.vf[16].w[0], 4); std::memcpy(q + 4, &r.vf[16].w[1], 4); } }
L_0468: { ++fl.t; set_vi(i10, i10 + 1u); }
L_0470: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 114u) + 0, 2); set_vi(i7, v); } }
L_0478: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 116u); const std::uint32_t v = i4; std::memcpy(q + 12, &v, 4); } }
L_0480: { ++fl.t; { const std::uint8_t *q = qword(mem, i13 + 2u); std::memcpy(&r.vf[16], q, 16); } n16 = vshadow(r.vf[16]); }
L_0488: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 114u) + 4, 2); set_vi(i3, v); } }
L_0490: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 115u); const std::uint32_t v = i5; std::memcpy(q + 12, &v, 4); } }
L_0498: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 117u); const std::uint32_t v = i6; std::memcpy(q + 12, &v, 4); } }
L_04A0: { ++fl.t; const v4u uv = vaddd(nacc, (v4u)((v4f)n31 * (v4f)vsplat(0x3F800000u))); vstore(r.vf[24], vsel(vload(r.vf[24]), vload(r.vf[27]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n24 = vshadow(r.vf[24]); n27 = vsel(n27, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_04A8: { ++fl.t; const v4u uv = vmuld(n28, vsplat(n16[0])); set_vi(i2, i7 | i3); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_04B0: { ++fl.t; const v4u uv = vmaddd(nacc, n29, vsplat(n16[1])); { std::uint8_t *q = qword(mem, 0u + 113u); const std::uint32_t v = i2; std::memcpy(q + 12, &v, 4); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_04B8: { ++fl.t; const v4u uv = vmaddd(nacc, n30, vsplat(n16[2])); set_vi(i13, i13 + 4u); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_04C0: { ++fl.t; vflushd(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vsubd(n27, n24); vstore(r.vf[13], vsel(vload(r.vf[13]), vload(r.vf[25]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); vstore(r.vf[25], uv); fl.push<15u, kSticky>(uv); n13 = vshadow(r.vf[13]); n25 = uv; }
L_04C8: { ++fl.t; pend = 0u == i2; }
L_04D0: { ++fl.t; set_vi(i1, 0u + 157u); }
    if (pend) { pend = false; goto L_04E8; }
L_04D8: { ++fl.t; set_vi(i15, (((1240u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_04E0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 115u); const std::uint32_t v = i1; std::memcpy(q + 4, &v, 4); } }
    if (pend) { pend = false; goto L_1AB0; }
L_04E8: { ++fl.t; set_vi(i1, i11 - i12); }
L_04F0: { ++fl.t; set_vi(i6, i8 + 0u); }
L_04F8: { ++fl.t; pend = static_cast<std::int16_t>(i1) > 0; }
L_0500: { ++fl.t; }
    if (pend) { pend = false; goto L_0530; }
L_0508: { ++fl.t; set_vi(i15, (((1288u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0510: { ++fl.t; }
    if (pend) { pend = false; vflushd(r.vf[1], v4u{0u, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto L_1820; }
L_0518: { ++fl.t; set_vi(i10, 0u + 0u); }
L_0520: { ++fl.t; set_vi(i9, 0u + i12); }
L_0528: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_0530: { ++fl.t; pend = static_cast<std::int16_t>(i6) >= 0; }
L_0538: { ++fl.t; set_vi(i8, r.vf[16].w[3]); }
    if (pend) { pend = false; vflushd(r.vf[25], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); goto L_0270; }
L_0540: { ++fl.t; set_vi(i5, 0u + 171u); }
L_0548: { ++fl.t; pend = true; }
L_0550: { ++fl.t; set_vi(i4, 0u + 78u); }
    if (pend) { pend = false; goto L_19C0; }
    vflushd(r.vf[1], v4u{0u, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[3], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[14] = i14; r.vi[15] = i15; vhop(hop, ((1368u + sh) & 16383u));
    return;
L_1820: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 114u) + 12, 2); set_vi(i3, v); } }
L_1828: { ++fl.t; set_vi(i2, 0u + 32767u); }
L_1830: { ++fl.t; set_vi(i2, i2 + 1u); }
L_1838: { ++fl.t; set_vi(i2, i10 | i2); }
L_1840: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 0u) + 12, 2); set_vi(i1, v); } }
L_1848: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i2; std::memcpy(q + 0, &v, 4); } }
L_1850: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 2u) + 12, 2); set_vi(i3, v); } }
L_1858: { ++fl.t; }
L_1860: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_1868: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 2u) + 12, 2); set_vi(i12, v); } }
L_1870: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 4u) + 12, 2); set_vi(i11, v); } }
L_1878: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1880: { ++fl.t; vkick_last(daz, 1, i3); }
    if (pendj) { pendj = false; vflush(r.vf[3], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_1888: { ++fl.t; ending = true; }
L_1890: { ++fl.t; }
    if (ending) { vflush(r.vf[3], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[14] = i14; r.vi[15] = i15; r.tpc = ((6296u + sh) & 16383u); return; }
    vflush(r.vf[3], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[14] = i14; r.vi[15] = i15; vhop(hop, ((6296u + sh) & 16383u));
    return;
L_18C0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 31u); std::memcpy(&r.vf[1], q, 16); } n1 = vshadow(r.vf[1]); }
L_18C8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 26u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); } n2 = vshadow(r.vf[2]); }
L_18D0: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_18D8: { ++fl.t; set_vi(i10, 0u + 0u); }
L_18E0: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); std::memcpy(q, &r.vf[1], 16); } }
L_18E8: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 1u); const std::uint32_t v = i1; std::memcpy(q + 0, &v, 4); } }
L_18F0: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 2u); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); std::memcpy(q + 12, &r.vf[2].w[3], 4); } }
L_18F8: { ++fl.t; set_vi(i9, i12 + 2u); }
L_1900: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1908: { ++fl.t; set_vi(i12, i12 + 3u); }
    if (pendj) { pendj = false; vflush(r.vf[3], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.vf[5], v4u{0u, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
    vflush(r.vf[3], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.vf[5], v4u{0u, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[14] = i14; r.vi[15] = i15; vhop(hop, ((6416u + sh) & 16383u));
    return;
L_19C0: { ++fl.t; set_vi(i6, i6 + i6); }
L_19C8: { ++fl.t; set_vi(i6, i6 + i6); }
L_19D0: { ++fl.t; set_vi(i3, 0u + 4096u); }
L_19D8: { ++fl.t; pend = static_cast<std::int16_t>(i6) >= 0; }
L_19E0: { ++fl.t; set_vi(i6, i6 + i6); }
    if (pend) { pend = false; goto L_1A18; }
L_19E8: { ++fl.t; set_vi(i15, (((6632u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_19F0: { ++fl.t; set_vi(i1, 0u + 4u); }
    if (pend) { pend = false; vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); goto L_18C0; }
L_19F8: { ++fl.t; set_vi(i1, 0u + 1u); }
L_1A00: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = i1; std::memcpy(q + 8, &v, 4); } }
L_1A08: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = 0u; std::memcpy(q + 0, &v, 4); } }
L_1A10: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = 0u; std::memcpy(q + 4, &v, 4); } }
L_1A18: { ++fl.t; set_vi(i3, i6 & i3); }
L_1A20: { ++fl.t; pend = static_cast<std::int16_t>(i6) >= 0; }
L_1A28: { ++fl.t; set_vi(i6, i6 + i6); bi = 6u; }
    if (pend) { pend = false; goto L_1A40; }
L_1A30: { ++fl.t; set_vi(i15, (((6704u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1A38: { ++fl.t; next_bk = i3; set_vi(i3, 0u + 512u); bk = next_bk; bi = 3u; }
    if (pend) { pend = false; vflushd(r.vf[1], v4u{0u, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto L_1888; }
L_1A40: { ++fl.t; pend = 0u == (bi == 3 ? bk : i3); }
L_1A48: { ++fl.t; { const std::uint8_t *q = qword(mem, i13 + 0u); std::memcpy(&r.vf[14], q, 16); } }
    if (pend) { pend = false; goto L_1A80; }
L_1A50: { ++fl.t; pend = static_cast<std::int16_t>(i6) < 0; }
L_1A58: { ++fl.t; set_vi(i7, r.vf[17].w[3]); }
    if (pend) { pend = false; goto L_1AA0; }
L_1A60: { ++fl.t; jpc = (static_cast<std::uint32_t>(i5) * 8u) & 16383u; set_vi(i15, (((6752u + sh) & 16383u) + 16u) / 8u); pendj = true; }
L_1A68: { ++fl.t; set_vi(i6, i4 + 0u); }
    if (pendj) { pendj = false; vflushd(r.vf[1], v4u{0u, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[3], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_1A70: { ++fl.t; jpc = (static_cast<std::uint32_t>(i6) * 8u) & 16383u; pendj = true; }
L_1A78: { ++fl.t; }
    if (pendj) { pendj = false; vflushd(r.vf[1], v4u{0u, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[3], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_1A80: { ++fl.t; pend = static_cast<std::int16_t>(i6) < 0; }
L_1A88: { ++fl.t; }
    if (pend) { pend = false; goto L_1AA0; }
L_1A90: { ++fl.t; jpc = (static_cast<std::uint32_t>(i4) * 8u) & 16383u; pendj = true; }
L_1A98: { ++fl.t; }
    if (pendj) { pendj = false; vflushd(r.vf[1], v4u{0u, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[3], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_1AA0: { ++fl.t; pend = true; }
L_1AA8: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
    if (pend) { pend = false; goto L_01F8; }
L_1AB0: { ++fl.t; set_vi(i12, i12 - 3u); }
L_1AB8: { ++fl.t; pend = 0u == i7; }
L_1AC0: { ++fl.t; set_vi(i10, i10 - 1u); }
    if (pend) { pend = false; vflushd(r.vf[1], v4u{0u, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto L_1BF0; }
L_1AC8: { ++fl.t; set_vi(i1, 0u + 7u); }
L_1AD0: { ++fl.t; set_vi(i7, i7 & i1); }
L_1AD8: { ++fl.t; set_vi(i1, i1 & i3); }
L_1AE0: { ++fl.t; pend = 0u != i7; }
L_1AE8: { ++fl.t; }
    if (pend) { pend = false; vflushd(r.vf[1], v4u{0u, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto L_1B58; }
L_1AF0: { ++fl.t; pend = 0u == i1; }
L_1AF8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 133u); std::memcpy(&r.vf[1], q, 16); } n1 = vshadow(r.vf[1]); }
    if (pend) { pend = false; goto L_1B10; }
L_1B00: { ++fl.t; pend = true; }
L_1B08: { ++fl.t; }
    if (pend) { pend = false; goto L_1BF0; }
L_1B10: { ++fl.t; set_vi(i15, (((6928u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1B18: { ++fl.t; set_vi(i7, i6 + 0u); }
    if (pend) { pend = false; goto L_1E18; }
L_1B20: { ++fl.t; set_vi(i15, (((6944u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1B28: { ++fl.t; set_vi(i7, i5 + 0u); }
    if (pend) { pend = false; goto L_1E18; }
L_1B30: { ++fl.t; set_vi(i15, (((6960u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1B38: { ++fl.t; set_vi(i7, i4 + 0u); }
    if (pend) { pend = false; goto L_1E18; }
L_1B40: { ++fl.t; set_vi(i12, i12 - 3u); }
L_1B48: { ++fl.t; pend = true; }
L_1B50: { ++fl.t; set_vi(i10, i10 - 1u); }
    if (pend) { pend = false; vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); goto L_1D40; }
L_1B58: { ++fl.t; set_vi(i2, 0u + 16384u); }
L_1B60: { ++fl.t; set_vi(i2, i8 & i2); }
L_1B68: { ++fl.t; }
L_1B70: { ++fl.t; pend = 0u == i2; }
L_1B78: { ++fl.t; }
    if (pend) { pend = false; goto L_1B98; }
L_1B80: { ++fl.t; set_vi(i1, 0u + 4u); }
L_1B88: { ++fl.t; pend = true; }
L_1B90: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 115u) + 4, 2); set_vi(i15, v); } }
    if (pend) { pend = false; vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); goto L_18C0; }
L_1B98: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 5u) + 12, 2); set_vi(i2, v); } }
L_1BA0: { ++fl.t; set_vi(i15, (((7072u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1BA8: { ++fl.t; set_vi(i1, 0u + 3u); }
    if (pend) { pend = false; vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); goto L_18C0; }
L_1BB0: { ++fl.t; { set_vi(i14, i14 - 1u); std::uint8_t *q = qword(mem, i14); std::memcpy(q, &r.vf[23], 16); } }
L_1BB8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; set_vi(i15, (((7096u + sh) & 16383u) + 16u) / 8u); pendj = true; }
L_1BC0: { ++fl.t; { set_vi(i14, i14 - 1u); std::uint8_t *q = qword(mem, i14); std::memcpy(q, &r.vf[24], 16); } }
    if (pendj) { pendj = false; vflushd(r.vf[3], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_1BC8: { ++fl.t; { const std::uint8_t *q = qword(mem, i14); std::memcpy(&r.vf[24], q, 16); set_vi(i14, i14 + 1u); } n24 = vshadow(r.vf[24]); }
L_1BD0: { ++fl.t; { const std::uint8_t *q = qword(mem, i14); std::memcpy(&r.vf[23], q, 16); set_vi(i14, i14 + 1u); } n23 = vshadow(r.vf[23]); }
L_1BD8: { ++fl.t; set_vi(i1, 0u + 4u); }
L_1BE0: { ++fl.t; pend = true; }
L_1BE8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 115u) + 4, 2); set_vi(i15, v); } }
    if (pend) { pend = false; vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); goto L_18C0; }
L_1BF0: { ++fl.t; pend = 0u == i3; }
L_1BF8: { ++fl.t; set_vi(i2, 0u + 16384u); }
    if (pend) { pend = false; vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); goto L_1D40; }
L_1C00: { ++fl.t; set_vi(i2, i8 & i2); }
L_1C08: { ++fl.t; set_vi(i1, 0u + 7u); }
L_1C10: { ++fl.t; set_vi(i3, i3 & i1); }
L_1C18: { ++fl.t; pend = 0u != i2; }
L_1C20: { ++fl.t; }
    if (pend) { pend = false; vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); goto L_1D40; }
L_1C28: { ++fl.t; pend = 0u != i3; }
L_1C30: { ++fl.t; }
    if (pend) { pend = false; goto L_1C98; }
L_1C38: { ++fl.t; set_vi(i15, (((7224u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1C40: { ++fl.t; set_vi(i1, 0u + 4u); }
    if (pend) { pend = false; vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); goto L_18C0; }
L_1C48: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 133u); std::memcpy(&r.vf[1], q, 16); } n1 = vshadow(r.vf[1]); }
L_1C50: { ++fl.t; set_vi(i15, (((7248u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1C58: { ++fl.t; set_vi(i7, i6 + 0u); }
    if (pend) { pend = false; goto L_1E18; }
L_1C60: { ++fl.t; set_vi(i15, (((7264u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1C68: { ++fl.t; set_vi(i7, i5 + 0u); }
    if (pend) { pend = false; goto L_1E18; }
L_1C70: { ++fl.t; set_vi(i15, (((7280u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1C78: { ++fl.t; set_vi(i7, i4 + 0u); }
    if (pend) { pend = false; goto L_1E18; }
L_1C80: { ++fl.t; set_vi(i12, i12 - 3u); }
L_1C88: { ++fl.t; pend = true; }
L_1C90: { ++fl.t; set_vi(i10, i10 - 1u); }
    if (pend) { pend = false; vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); goto L_1D40; }
L_1C98: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 1u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } n4 = vshadow(r.vf[4]); }
L_1CA0: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 1u); vstore(r.vf[5], vsel(vload(r.vf[5]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } n5 = vshadow(r.vf[5]); }
L_1CA8: { ++fl.t; set_vi(i3, 0u + i15); }
L_1CB0: { ++fl.t; set_vi(i15, (((7344u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1CB8: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); vstore(r.vf[6], vsel(vload(r.vf[6]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } n6 = vshadow(r.vf[6]); }
    if (pend) { pend = false; goto L_1D60; }
L_1CC0: { ++fl.t; pend = 0u != i1; }
L_1CC8: { ++fl.t; set_vi(i15, 0u + i3); }
    if (pend) { pend = false; goto L_1D08; }
L_1CD0: { ++fl.t; set_vi(i15, (((7376u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1CD8: { ++fl.t; set_vi(i1, 0u + 5u); }
    if (pend) { pend = false; goto L_18C0; }
L_1CE0: { ++fl.t; set_vi(i15, (((7392u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1CE8: { ++fl.t; }
    if (pend) { pend = false; vflushd(r.vf[5], v4u{0u, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto L_1F58; }
L_1CF0: { ++fl.t; set_vi(i1, 0u + 4u); }
L_1CF8: { ++fl.t; pend = true; }
L_1D00: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 115u) + 4, 2); set_vi(i15, v); } }
    if (pend) { pend = false; goto L_18C0; }
L_1D08: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 133u); std::memcpy(&r.vf[1], q, 16); } n1 = vshadow(r.vf[1]); }
L_1D10: { ++fl.t; set_vi(i1, 0u + 16384u); }
L_1D18: { ++fl.t; set_vi(i8, i8 | i1); }
L_1D20: { ++fl.t; set_vi(i15, (((7456u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1D28: { ++fl.t; set_vi(i7, i4 + 0u); }
    if (pend) { pend = false; goto L_1E18; }
L_1D30: { ++fl.t; set_vi(i12, i12 - 3u); }
L_1D38: { ++fl.t; set_vi(i10, i10 - 1u); }
L_1D40: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 115u) + 4, 2); set_vi(i15, v); } }
L_1D48: { ++fl.t; set_vi(i12, i12 + 3u); }
L_1D50: { fl.t += 3u; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1D58: { ++fl.t; set_vi(i10, i10 + 1u); }
    if (pendj) { pendj = false; vflushd(r.vf[3], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[5], v4u{0u, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_1D60: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n4[1])); vstore(r.vf[1], vsel(vload(r.vf[1]), vload(r.vf[4]), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vshadow(r.vf[1]); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_1D68: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n5[0])); vstore(r.vf[2], vsel(vload(r.vf[2]), vload(r.vf[5]), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n2 = vshadow(r.vf[2]); n1 = vsel(n1, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_1D70: { fl.t += 2u; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n6[1])); { const std::uint8_t *q = qword(mem, 0u + 39u); vstore(r.vf[7], vsel(vload(r.vf[7]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.stick<2u, kSticky>(uv); n7 = vshadow(r.vf[7]); n2 = vsel(n2, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_1D78: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n6[0])); { const std::uint8_t *q = qword(mem, 0u + 40u); vstore(r.vf[8], vsel(vload(r.vf[8]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.push<2u, kSticky>(uv); n8 = vshadow(r.vf[8]); n1 = vsel(n1, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_1D80: { fl.t += 4u; const std::uint32_t uclip = vclip_value(r, r.vf[1], r.vf[7].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_1D88: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[8].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_1D90: { ++fl.t; }
L_1D98: { ++fl.t; }
L_1DA0: { ++fl.t; }
L_1DA8: { ++fl.t; set_vi(i1, ((fl.clip() | 16774527u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); }
L_1DB0: { ++fl.t; pend = 0u != i1; }
L_1DB8: { ++fl.t; set_vi(i1, ((fl.clip() | 16775871u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); }
    if (pend) { pend = false; goto L_1E00; }
L_1DC0: { ++fl.t; pend = 0u != i1; }
L_1DC8: { ++fl.t; set_vi(i1, ((fl.clip() | 16777173u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); }
    if (pend) { pend = false; goto L_1E00; }
L_1DD0: { ++fl.t; pend = 0u != i1; }
L_1DD8: { ++fl.t; set_vi(i1, ((fl.clip() | 16777194u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); }
    if (pend) { pend = false; goto L_1E00; }
L_1DE0: { ++fl.t; pend = 0u != i1; }
L_1DE8: { ++fl.t; set_vi(i1, 0u + 0u); }
    if (pend) { pend = false; goto L_1E00; }
L_1DF0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1DF8: { ++fl.t; }
    if (pendj) { pendj = false; vflushd(r.vf[1], v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0u}); vflushd(r.vf[3], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[5], v4u{0u, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_1E00: { ++fl.t; set_vi(i1, 0u + 1u); }
L_1E08: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1E10: { ++fl.t; }
    if (pendj) { pendj = false; vflushd(r.vf[1], v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0u}); vflushd(r.vf[3], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[5], v4u{0u, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
    vflushd(r.vf[1], v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); 
L_1E18: { ++fl.t; set_vi(i14, i14 - 1u); }
L_1E20: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i3; std::memcpy(q + 0, &v, 4); } }
L_1E28: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i2; std::memcpy(q + 4, &v, 4); } }
L_1E30: { ++fl.t; { const std::uint8_t *q = qword(mem, i7 + 0u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } n3 = vshadow(r.vf[3]); }
L_1E38: { ++fl.t; { const std::uint8_t *q = qword(mem, i7 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_1E40: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 39u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n4 = vshadow(r.vf[4]); }
L_1E48: { ++fl.t; { const std::uint8_t *q = qword(mem, i7 + 3u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
L_1E50: { ++fl.t; { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[15].w[0], r.vf[3].w[2]); fl.end_q(r, qb, 7u); } }
L_1E58: { ++fl.t; }
L_1E60: { ++fl.t; const v4u uv = vaddd(n2, n4); set_vi(i2, 0u + 16384u); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1E68: { ++fl.t; const v4u uv = vmuld(n5, n1); set_vi(i2, i2 & i8); vstore(r.vf[5], uv); fl.stick<15u, kSticky>(uv); n5 = uv; }
L_1E70: { ++fl.t; set_vi(i2, i2 + i2); }
L_1E78: { ++fl.t; }
L_1E80: { ++fl.t; const v4u uv = vftoi(vload(r.vf[2]), 4); vstore(r.vf[4], uv); n4 = vshadow(r.vf[4]); }
L_1E88: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { const std::uint8_t *q = qword(mem, i7 + 2u); std::memcpy(&r.vf[2], q, 16); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n2 = vshadow(r.vf[2]); n3 = vsel(n3, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_1E90: { ++fl.t; const v4u uv = vftoi(vload(r.vf[5]), 0); vstore(r.vf[5], uv); n5 = vshadow(r.vf[5]); }
L_1E98: { ++fl.t; }
L_1EA0: { ++fl.t; set_vi(i3, r.vf[4].w[3]); }
L_1EA8: { ++fl.t; const v4u uv = vmuld(n2, vsplat(n3[3])); { std::uint8_t *q = qword(mem, i12 + 2u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); std::memcpy(q + 8, &r.vf[4].w[2], 4); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.stick<12u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_1EB0: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n3[3])); { std::uint8_t *q = qword(mem, i12 + 1u); std::memcpy(q, &r.vf[5], 16); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.push<2u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_1EB8: { ++fl.t; }
L_1EC0: { ++fl.t; set_vi(i2, i3 | i2); }
L_1EC8: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 2u); const std::uint32_t v = i2; std::memcpy(q + 12, &v, 4); } }
L_1ED0: { ++fl.t; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); { std::uint8_t *q = qword(mem, i12 + 0u); std::memcpy(q, &r.vf[2], 16); } }
L_1ED8: { ++fl.t; set_vi(i3, i11 - i12); }
L_1EE0: { ++fl.t; set_vi(i12, i12 + 3u); }
L_1EE8: { ++fl.t; pend = static_cast<std::int16_t>(i3) > 0; }
L_1EF0: { ++fl.t; set_vi(i10, i10 + 1u); }
    if (pend) { pend = false; goto L_1F38; }
L_1EF8: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i15; std::memcpy(q + 12, &v, 4); } }
L_1F00: { ++fl.t; set_vi(i15, (((7936u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1F08: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i1; std::memcpy(q + 8, &v, 4); } }
    if (pend) { pend = false; goto L_1820; }
L_1F10: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 8, 2); set_vi(i1, v); } }
L_1F18: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 12, 2); set_vi(i15, v); } }
L_1F20: { ++fl.t; set_vi(i10, 0u + 0u); }
L_1F28: { ++fl.t; set_vi(i9, 0u + i12); }
L_1F30: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_1F38: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 4, 2); set_vi(i2, v); } }
L_1F40: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 0, 2); set_vi(i3, v); } }
L_1F48: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1F50: { ++fl.t; set_vi(i14, i14 + 1u); }
    if (pendj) { pendj = false; vflushd(r.vf[3], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_1F58: { ++fl.t; { set_vi(i14, i14 - 1u); std::uint8_t *q = qword(mem, i14); std::memcpy(q, &r.vf[13], 16); } }
L_1F60: { ++fl.t; { set_vi(i14, i14 - 1u); std::uint8_t *q = qword(mem, i14); std::memcpy(q, &r.vf[18], 16); } }
L_1F68: { ++fl.t; { set_vi(i14, i14 - 1u); std::uint8_t *q = qword(mem, i14); std::memcpy(q, &r.vf[19], 16); } }
L_1F70: { ++fl.t; { set_vi(i14, i14 - 1u); std::uint8_t *q = qword(mem, i14); std::memcpy(q, &r.vf[23], 16); } }
L_1F78: { ++fl.t; set_vi(i14, i14 - 1u); }
L_1F80: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i15; std::memcpy(q + 12, &v, 4); } }
L_1F88: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i8; std::memcpy(q + 8, &v, 4); } }
L_1F90: { ++fl.t; set_vi(i14, i14 - 1u); }
L_1F98: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i9; std::memcpy(q + 12, &v, 4); } }
L_1FA0: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i10; std::memcpy(q + 8, &v, 4); } }
L_1FA8: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i11; std::memcpy(q + 4, &v, 4); } }
L_1FB0: { ++fl.t; set_vi(i15, (((8112u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1FB8: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i12; std::memcpy(q + 0, &v, 4); } }
    if (pend) { pend = false; goto L_2418; }
L_1FC0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 0, 2); set_vi(i12, v); } }
L_1FC8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 4, 2); set_vi(i11, v); } }
L_1FD0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 8, 2); set_vi(i10, v); } }
L_1FD8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 12, 2); set_vi(i9, v); } }
L_1FE0: { ++fl.t; pend = 0u == i3; }
L_1FE8: { ++fl.t; set_vi(i14, i14 + 1u); }
    if (pend) { pend = false; goto L_2038; }
L_1FF0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 133u); std::memcpy(&r.vf[1], q, 16); } n1 = vshadow(r.vf[1]); }
L_1FF8: { ++fl.t; set_vi(i4, 0u + i2); }
L_2000: { ++fl.t; set_vi(i5, 0u + i3); }
L_2008: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4) + 8, 2); set_vi(i7, v); } }
L_2010: { ++fl.t; set_vi(i5, i5 - 1u); }
L_2018: { ++fl.t; set_vi(i15, (((8216u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_2020: { ++fl.t; set_vi(i4, i4 + 1u); }
    if (pend) { pend = false; goto L_1E18; }
L_2028: { ++fl.t; pend = 0u != i5; }
L_2030: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4) + 8, 2); set_vi(i7, v); } }
    if (pend) { pend = false; goto L_2010; }
L_2038: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 8, 2); set_vi(i8, v); } }
L_2040: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 12, 2); set_vi(i15, v); } }
L_2048: { ++fl.t; set_vi(i14, i14 + 1u); }
L_2050: { ++fl.t; { const std::uint8_t *q = qword(mem, i14); std::memcpy(&r.vf[23], q, 16); set_vi(i14, i14 + 1u); } n23 = vshadow(r.vf[23]); }
L_2058: { ++fl.t; { const std::uint8_t *q = qword(mem, i14); std::memcpy(&r.vf[19], q, 16); set_vi(i14, i14 + 1u); } n19 = vshadow(r.vf[19]); }
L_2060: { ++fl.t; { const std::uint8_t *q = qword(mem, i14); std::memcpy(&r.vf[18], q, 16); set_vi(i14, i14 + 1u); } n18 = vshadow(r.vf[18]); }
L_2068: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_2070: { ++fl.t; { const std::uint8_t *q = qword(mem, i14); std::memcpy(&r.vf[13], q, 16); set_vi(i14, i14 + 1u); } n13 = vshadow(r.vf[13]); }
    if (pendj) { pendj = false; vflush(r.vf[3], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
    vflush(r.vf[3], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[14] = i14; r.vi[15] = i15; vhop(hop, ((8312u + sh) & 16383u));
    return;
L_2418: { ++fl.t; r.i = 3212836864u; }
L_2420: { ++fl.t; set_vi(i7, 0u + 0u); }
L_2428: { ++fl.t; set_vi(i8, 0u + 180u); }
L_2430: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 0u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_2438: { ++fl.t; set_vi(i12, 0u + 3u); }
L_2440: { ++fl.t; set_vi(i2, 0u + 7u); }
L_2448: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 1u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
L_2450: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 2u); std::memcpy(&r.vf[4], q, 16); } n4 = vshadow(r.vf[4]); }
L_2458: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 3u); std::memcpy(&r.vf[3], q, 16); } n3 = vshadow(r.vf[3]); }
L_2460: { ++fl.t; set_vi(i9, i8 + 4u); }
L_2468: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 0u); std::memcpy(q, &r.vf[2], 16); } }
L_2470: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 1u); std::memcpy(q, &r.vf[5], 16); } }
L_2478: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 2u); std::memcpy(q, &r.vf[4], 16); } }
L_2480: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 3u); std::memcpy(q, &r.vf[3], 16); } }
L_2488: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 0u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
L_2490: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 1u); std::memcpy(&r.vf[4], q, 16); } n4 = vshadow(r.vf[4]); }
L_2498: { ++fl.t; { std::uint8_t *q = qword(mem, i7 + 0u); const std::uint32_t v = i8; std::memcpy(q + 8, &v, 4); } }
L_24A0: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 2u); std::memcpy(&r.vf[3], q, 16); } n3 = vshadow(r.vf[3]); }
L_24A8: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 3u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_24B0: { ++fl.t; { std::uint8_t *q = qword(mem, i9 + 0u); std::memcpy(q, &r.vf[5], 16); } }
L_24B8: { ++fl.t; { std::uint8_t *q = qword(mem, i9 + 1u); std::memcpy(q, &r.vf[4], 16); } }
L_24C0: { ++fl.t; set_vi(i5, i9 + 4u); }
L_24C8: { ++fl.t; { std::uint8_t *q = qword(mem, i9 + 2u); std::memcpy(q, &r.vf[3], 16); } }
L_24D0: { ++fl.t; { std::uint8_t *q = qword(mem, i9 + 3u); std::memcpy(q, &r.vf[2], 16); } }
L_24D8: { ++fl.t; set_vi(i4, 0u + i7); }
L_24E0: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 0u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_24E8: { ++fl.t; { std::uint8_t *q = qword(mem, i7 + 1u); const std::uint32_t v = i9; std::memcpy(q + 8, &v, 4); } }
L_24F0: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
L_24F8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i9, v); } }
L_2500: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(&r.vf[4], q, 16); } n4 = vshadow(r.vf[4]); }
L_2508: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(&r.vf[3], q, 16); } n3 = vshadow(r.vf[3]); }
L_2510: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 44u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } n1 = vshadow(r.vf[1]); }
L_2518: { ++fl.t; { std::uint8_t *q = qword(mem, i5 + 0u); std::memcpy(q, &r.vf[2], 16); } }
L_2520: { ++fl.t; { const std::uint8_t *q = qword(mem, i9 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_2528: { ++fl.t; { std::uint8_t *q = qword(mem, i5 + 1u); std::memcpy(q, &r.vf[5], 16); } }
L_2530: { ++fl.t; r.clip = 0u; fl.set_clip(r.clip, fl.t - 4u); }
L_2538: { ++fl.t; { std::uint8_t *q = qword(mem, i5 + 2u); std::memcpy(q, &r.vf[4], 16); } }
L_2540: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); { std::uint8_t *q = qword(mem, i5 + 3u); std::memcpy(q, &r.vf[3], 16); } r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2548: { ++fl.t; { std::uint8_t *q = qword(mem, i7 + 2u); const std::uint32_t v = i5; std::memcpy(q + 8, &v, 4); } }
L_2550: { ++fl.t; set_vi(i8, i5 + 4u); }
L_2558: { ++fl.t; set_vi(i5, i4 + 1u); }
L_2560: { ++fl.t; set_vi(i3, 0u + 0u); }
L_2568: { ++fl.t; set_vi(i1, (fl.clip() & 1u) ? 1u : 0u); }
L_2570: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i5 + 0u) + 8, 2); set_vi(i10, v); } }
L_2578: { ++fl.t; set_vi(i11, i5 + 1u); }
L_2580: { ++fl.t; pend = 0u == i1; }
L_2588: { ++fl.t; set_vi(i12, i12 - 1u); }
    if (pend) { pend = false; goto L_2758; }
L_2590: { ++fl.t; { const std::uint8_t *q = qword(mem, i9 + 2u); std::memcpy(&r.vf[4], q, 16); } n4 = vshadow(r.vf[4]); }
L_2598: { ++fl.t; vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_25A0: { ++fl.t; { const std::uint8_t *q = qword(mem, i9 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_25A8: { ++fl.t; { const std::uint8_t *q = qword(mem, i9 + 3u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
L_25B0: { ++fl.t; { const std::uint8_t *q = qword(mem, i10 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_25B8: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_25C0: { ++fl.t; }
L_25C8: { ++fl.t; }
L_25D0: { ++fl.t; }
L_25D8: { ++fl.t; set_vi(i1, (fl.clip() & 1u) ? 1u : 0u); }
L_25E0: { ++fl.t; pend = 0u != i1; }
L_25E8: { ++fl.t; }
    if (pend) { pend = false; goto L_2700; }
L_25F0: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n1[3])); { const std::uint8_t *q = qword(mem, i10 + 0u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n2 = vshadow(r.vf[2]); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_25F8: { ++fl.t; { const std::uint8_t *q = qword(mem, i10 + 1u); std::memcpy(&r.vf[7], q, 16); } n7 = vshadow(r.vf[7]); }
L_2600: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 38u); vstore(r.vf[10], vsel(vload(r.vf[10]), vload_ptr(q), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } n10 = vshadow(r.vf[10]); }
L_2608: { ++fl.t; vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); const v4u uv = vsubd(n2, n1); vstore(r.vf[6], vsel(vload(r.vf[6]), vload(r.vf[9]), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n6 = vshadow(r.vf[6]); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2610: { ++fl.t; const v4u uv = vsubd(n7, n3); { const std::uint8_t *q = qword(mem, i10 + 2u); std::memcpy(&r.vf[7], q, 16); } vstore(r.vf[8], uv); fl.stick<15u, kSticky>(uv); n7 = vshadow(r.vf[7]); n8 = uv; }
L_2618: { ++fl.t; const v4u uv = vsubd(n9, n3); { const std::uint8_t *q = qword(mem, i10 + 3u); std::memcpy(&r.vf[9], q, 16); } vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n9 = vshadow(r.vf[9]); n12 = vsel(n12, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2620: { ++fl.t; const v4u uv = vmuld(n10, n1); set_vi(i1, 0u + i8); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2628: { ++fl.t; const v4u uv = vmuld(n6, vsplat(n1[2])); set_vi(i8, i8 + 4u); vstore(r.vf[11], vsel(vload(r.vf[11]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n11 = vsel(n11, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2630: { ++fl.t; const v4u uv = vmuld(n10, n2); set_vi(i4, i2 + i3); vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n10 = vsel(n10, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2638: { ++fl.t; const v4u uv = vmuld(n6, vsplat(n2[2])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[12].w[0], r.vf[8].w[0]); fl.end_q(r, qb, 7u); } vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n8 = vsel(n8, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2640: { ++fl.t; const v4u uv = vsubd(n7, n4); { std::uint8_t *q = qword(mem, i4 + 0u); const std::uint32_t v = i1; std::memcpy(q + 8, &v, 4); } vstore(r.vf[7], uv); fl.stick<15u, kSticky>(uv); n7 = uv; }
L_2648: { ++fl.t; const v4u uv = vmuld(n11, vfix(vsplat(r.i))); set_vi(i3, i3 + 1u); vstore(r.vf[11], vsel(vload(r.vf[11]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n11 = vsel(n11, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2650: { ++fl.t; const v4u uv = vsubd(n9, n5); vstore(r.vf[9], uv); fl.stick<15u, kSticky>(uv); n9 = uv; }
L_2658: { ++fl.t; const v4u uv = vaddd(n10, n8); vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n8 = vsel(n8, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2660: { ++fl.t; const v4u uv = vsubd(n11, n3); fl.flush_q(r); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2668: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[3].w[0], r.vf[8].w[0]); fl.end_q(r, qb, 7u); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_2670: { ++fl.t; const v4u uv = vmuld(n8, vsplat(n2[3])); vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<7u, kSticky>(uv); n8 = vsel(n8, uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_2678: { ++fl.t; const v4u uv = vmuld(n9, vsplat(n2[3])); vstore(r.vf[9], uv); fl.stick<15u, kSticky>(uv); n9 = uv; }
L_2680: { ++fl.t; const v4u uv = vaddd(n3, n8); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<7u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_2688: { ++fl.t; const v4u uv = vaddd(n5, n9); fl.flush_q(r); vstore(r.vf[3], uv); fl.stick<15u, kSticky>(uv); n3 = uv; }
L_2690: { ++fl.t; fl.flush_q(r); vflushd(r.vf[6], v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { std::uint8_t *q = qword(mem, i1 + 1u); std::memcpy(q, &r.vf[6], 16); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_2698: { ++fl.t; vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vmuld(n2, vsplat(n5[3])); { std::uint8_t *q = qword(mem, i1 + 3u); std::memcpy(q, &r.vf[3], 16); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_26A0: { ++fl.t; const v4u uv = vmuld(n7, vsplat(n5[3])); vstore(r.vf[5], uv); fl.push<15u, kSticky>(uv); n5 = uv; }
L_26A8: { ++fl.t; const v4u uv = vaddd(n1, n3); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_26B0: { ++fl.t; vflushd(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vaddd(n4, n5); { std::uint8_t *q = qword(mem, i1 + 0u); std::memcpy(q + 0, &r.vf[1].w[0], 4); std::memcpy(q + 4, &r.vf[1].w[1], 4); std::memcpy(q + 8, &r.vf[1].w[2], 4); } vstore(r.vf[4], uv); fl.push<15u, kSticky>(uv); n4 = uv; }
L_26B8: { ++fl.t; pend = 0u == i12; }
L_26C0: { ++fl.t; vflushd(r.vf[4], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i1 + 2u); std::memcpy(q, &r.vf[4], 16); } }
    if (pend) { pend = false; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_2900; }
L_26C8: { ++fl.t; set_vi(i12, i12 - 1u); }
L_26D0: { ++fl.t; set_vi(i9, 0u + i10); }
L_26D8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i11 + 0u) + 8, 2); set_vi(i10, v); } }
L_26E0: { ++fl.t; pend = 0u != i12; }
L_26E8: { ++fl.t; set_vi(i11, i11 + 1u); }
    if (pend) { pend = false; vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_2758; }
L_26F0: { ++fl.t; pend = true; }
L_26F8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i10, v); } }
    if (pend) { pend = false; vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_2758; }
    vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); 
L_2700: { ++fl.t; { const std::uint8_t *q = qword(mem, i10 + 2u); std::memcpy(&r.vf[4], q, 16); } n4 = vshadow(r.vf[4]); }
L_2708: { ++fl.t; vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_2710: { ++fl.t; { const std::uint8_t *q = qword(mem, i10 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_2718: { ++fl.t; pend = 0u == i12; }
L_2720: { ++fl.t; { const std::uint8_t *q = qword(mem, i10 + 3u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
    if (pend) { pend = false; goto L_2900; }
L_2728: { ++fl.t; set_vi(i12, i12 - 1u); }
L_2730: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i11 + 0u) + 8, 2); set_vi(i10, v); } }
L_2738: { ++fl.t; pend = 0u != i12; }
L_2740: { ++fl.t; set_vi(i11, i11 + 1u); }
    if (pend) { pend = false; goto L_25B0; }
L_2748: { ++fl.t; pend = true; }
L_2750: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i10, v); } }
    if (pend) { pend = false; goto L_25B0; }
L_2758: { ++fl.t; { const std::uint8_t *q = qword(mem, i10 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_2760: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2768: { ++fl.t; }
L_2770: { ++fl.t; }
L_2778: { ++fl.t; }
L_2780: { ++fl.t; set_vi(i1, (fl.clip() & 1u) ? 1u : 0u); }
L_2788: { ++fl.t; pend = 0u != i1; }
L_2790: { ++fl.t; }
    if (pend) { pend = false; goto L_27F0; }
L_2798: { ++fl.t; set_vi(i1, i2 + i3); }
L_27A0: { ++fl.t; set_vi(i3, i3 + 1u); }
L_27A8: { ++fl.t; pend = 0u == i12; }
L_27B0: { ++fl.t; { std::uint8_t *q = qword(mem, i1 + 0u); const std::uint32_t v = i9; std::memcpy(q + 8, &v, 4); } }
    if (pend) { pend = false; goto L_2900; }
L_27B8: { ++fl.t; set_vi(i12, i12 - 1u); }
L_27C0: { ++fl.t; set_vi(i9, 0u + i10); }
L_27C8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i11 + 0u) + 8, 2); set_vi(i10, v); } }
L_27D0: { ++fl.t; pend = 0u != i12; }
L_27D8: { ++fl.t; set_vi(i11, i11 + 1u); }
    if (pend) { pend = false; goto L_2758; }
L_27E0: { ++fl.t; pend = true; }
L_27E8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i10, v); } }
    if (pend) { pend = false; goto L_2758; }
L_27F0: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n1[3])); { const std::uint8_t *q = qword(mem, i9 + 0u); vstore(r.vf[6], vsel(vload(r.vf[6]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n6 = vshadow(r.vf[6]); n4 = vsel(n4, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_27F8: { ++fl.t; { const std::uint8_t *q = qword(mem, i10 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_2800: { ++fl.t; { const std::uint8_t *q = qword(mem, i9 + 1u); std::memcpy(&r.vf[9], q, 16); } n9 = vshadow(r.vf[9]); }
L_2808: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 38u); vstore(r.vf[5], vsel(vload(r.vf[5]), vload_ptr(q), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } n5 = vshadow(r.vf[5]); }
L_2810: { ++fl.t; vflushd(r.vf[4], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); const v4u uv = vsubd(n1, n6); vstore(r.vf[7], vsel(vload(r.vf[7]), vload(r.vf[4]), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n7 = vshadow(r.vf[7]); n8 = vsel(n8, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2818: { ++fl.t; const v4u uv = vsubd(n4, n9); vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); vstore(r.vf[11], vsel(vload(r.vf[11]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vshadow(r.vf[3]); n11 = vsel(n11, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2820: { ++fl.t; const v4u uv = vmuld(n5, n6); { const std::uint8_t *q = qword(mem, i9 + 3u); std::memcpy(&r.vf[10], q, 16); } vstore(r.vf[18], vsel(vload(r.vf[18]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n10 = vshadow(r.vf[10]); n18 = vsel(n18, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2828: { ++fl.t; const v4u uv = vmuld(n7, vsplat(n6[2])); { const std::uint8_t *q = qword(mem, i9 + 2u); std::memcpy(&r.vf[2], q, 16); } vstore(r.vf[13], vsel(vload(r.vf[13]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n2 = vshadow(r.vf[2]); n13 = vsel(n13, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2830: { ++fl.t; const v4u uv = vsubd(n3, n9); { const std::uint8_t *q = qword(mem, i10 + 2u); std::memcpy(&r.vf[4], q, 16); } vstore(r.vf[12], uv); fl.stick<15u, kSticky>(uv); n4 = vshadow(r.vf[4]); n12 = uv; }
L_2838: { ++fl.t; const v4u uv = vmuld(n5, n8); { const std::uint8_t *q = qword(mem, i10 + 3u); std::memcpy(&r.vf[5], q, 16); } vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n5 = vshadow(r.vf[5]); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2840: { ++fl.t; const v4u uv = vmuld(n7, vsplat(n8[2])); set_vi(i1, i2 + i3); vstore(r.vf[23], vsel(vload(r.vf[23]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n23 = vsel(n23, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2848: { ++fl.t; const v4u uv = vmuld(n13, vfix(vsplat(r.i))); { std::uint8_t *q = qword(mem, i1 + 1u); const std::uint32_t v = i10; std::memcpy(q + 8, &v, 4); } vstore(r.vf[19], vsel(vload(r.vf[19]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n19 = vsel(n19, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2850: { ++fl.t; const v4u uv = vsubd(n4, n2); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[11].w[0], r.vf[12].w[0]); fl.end_q(r, qb, 7u); } vstore(r.vf[11], uv); fl.stick<15u, kSticky>(uv); n11 = uv; }
L_2858: { ++fl.t; const v4u uv = vsubd(n5, n10); { std::uint8_t *q = qword(mem, i1 + 0u); const std::uint32_t v = i9; std::memcpy(q + 8, &v, 4); } vstore(r.vf[13], uv); fl.stick<15u, kSticky>(uv); n13 = uv; }
L_2860: { ++fl.t; const v4u uv = vaddd(n9, n23); set_vi(i3, i3 + 2u); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2868: { ++fl.t; const v4u uv = vsubd(n19, n18); fl.flush_q(r); vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n12 = vsel(n12, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2870: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[12].w[0], r.vf[9].w[0]); fl.end_q(r, qb, 7u); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_2878: { ++fl.t; const v4u uv = vmuld(n12, vsplat(n6[3])); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<7u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_2880: { ++fl.t; const v4u uv = vmuld(n13, vsplat(n6[3])); fl.flush_q(r); vstore(r.vf[12], uv); fl.stick<15u, kSticky>(uv); n12 = uv; }
L_2888: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_2890: { ++fl.t; const v4u uv = vaddd(n9, n7); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<7u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_2898: { ++fl.t; const v4u uv = vaddd(n10, n12); vstore(r.vf[12], uv); fl.stick<15u, kSticky>(uv); n12 = uv; }
L_28A0: { ++fl.t; const v4u uv = vmuld(n8, vsplat(n6[3])); vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n10 = vsel(n10, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_28A8: { ++fl.t; vflushd(r.vf[7], v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vmuld(n11, vsplat(n6[3])); { std::uint8_t *q = qword(mem, i10 + 1u); std::memcpy(q, &r.vf[7], 16); } vstore(r.vf[9], uv); fl.push<15u, kSticky>(uv); n9 = uv; }
L_28B0: { ++fl.t; vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vaddd(n6, n10); { std::uint8_t *q = qword(mem, i10 + 3u); std::memcpy(q, &r.vf[12], 16); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_28B8: { ++fl.t; vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vaddd(n2, n9); { std::uint8_t *q = qword(mem, i10 + 0u); std::memcpy(q + 0, &r.vf[6].w[0], 4); std::memcpy(q + 4, &r.vf[6].w[1], 4); std::memcpy(q + 8, &r.vf[6].w[2], 4); } vstore(r.vf[2], uv); fl.push<15u, kSticky>(uv); n2 = uv; }
L_28C0: { ++fl.t; pend = 0u == i12; }
L_28C8: { ++fl.t; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i10 + 2u); std::memcpy(q, &r.vf[2], 16); } }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[19], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[23], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_2900; }
L_28D0: { ++fl.t; set_vi(i12, i12 - 1u); }
L_28D8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i11 + 0u) + 8, 2); set_vi(i10, v); } }
L_28E0: { ++fl.t; pend = 0u != i12; }
L_28E8: { ++fl.t; set_vi(i11, i11 + 1u); }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[19], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[23], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_25B0; }
L_28F0: { ++fl.t; pend = true; }
L_28F8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i10, v); } }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[19], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[23], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_25B0; }
    vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[19], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[23], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); 
L_2900: { ++fl.t; pend = 0u == i3; }
L_2908: { ++fl.t; }
    if (pend) { pend = false; goto L_3568; }
L_2910: { ++fl.t; set_vi(i4, 0u + 7u); }
L_2918: { ++fl.t; set_vi(i6, 0u + i4); }
L_2920: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i6 + 0u) + 8, 2); set_vi(i5, v); } }
L_2928: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 44u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } n1 = vshadow(r.vf[1]); }
L_2930: { ++fl.t; set_vi(i6, i6 + 1u); }
L_2938: { ++fl.t; set_vi(i9, 0u + i3); }
L_2940: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_2948: { ++fl.t; set_vi(i7, i6 + 1u); }
L_2950: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i6 + 0u) + 8, 2); set_vi(i6, v); } }
L_2958: { ++fl.t; set_vi(i3, 0u + 0u); }
L_2960: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); set_vi(i2, 0u + 0u); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2968: { ++fl.t; set_vi(i9, i9 - 1u); }
L_2970: { ++fl.t; }
L_2978: { ++fl.t; }
L_2980: { ++fl.t; set_vi(i1, (fl.clip() & 2u) ? 1u : 0u); }
L_2988: { ++fl.t; pend = 0u == i1; }
L_2990: { ++fl.t; }
    if (pend) { pend = false; goto L_2B78; }
L_2998: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 2u); std::memcpy(&r.vf[4], q, 16); } n4 = vshadow(r.vf[4]); }
L_29A0: { ++fl.t; vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_29A8: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_29B0: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 3u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
L_29B8: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_29C0: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_29C8: { ++fl.t; }
L_29D0: { ++fl.t; }
L_29D8: { ++fl.t; }
L_29E0: { ++fl.t; set_vi(i1, (fl.clip() & 2u) ? 1u : 0u); }
L_29E8: { ++fl.t; pend = 0u != i1; }
L_29F0: { ++fl.t; }
    if (pend) { pend = false; goto L_2B20; }
L_29F8: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n1[3])); { const std::uint8_t *q = qword(mem, i6 + 0u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n2 = vshadow(r.vf[2]); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2A00: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(&r.vf[7], q, 16); } n7 = vshadow(r.vf[7]); }
L_2A08: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 38u); vstore(r.vf[9], vsel(vload(r.vf[9]), vload_ptr(q), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } n9 = vshadow(r.vf[9]); }
L_2A10: { ++fl.t; const v4u uv = vmuld(n6, vfix(vsplat(r.i))); { const std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(&r.vf[6], q, 16); } vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n6 = vshadow(r.vf[6]); n10 = vsel(n10, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2A18: { ++fl.t; const v4u uv = vsubd(n2, n1); { const std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(&r.vf[8], q, 16); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n8 = vshadow(r.vf[8]); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2A20: { ++fl.t; const v4u uv = vsubd(n7, n3); set_vi(i1, 0u + i8); vstore(r.vf[7], uv); fl.stick<15u, kSticky>(uv); n7 = uv; }
L_2A28: { ++fl.t; set_vi(i8, i8 + 4u); }
L_2A30: { ++fl.t; vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); const v4u uv = vsubd(n10, n3); vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[10]), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vshadow(r.vf[3]); n10 = vsel(n10, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2A38: { ++fl.t; set_vi(i5, i2 + i3); }
L_2A40: { ++fl.t; const v4u uv = vsubd(n6, n4); { std::uint8_t *q = qword(mem, i5 + 0u); const std::uint32_t v = i1; std::memcpy(q + 8, &v, 4); } vstore(r.vf[6], uv); fl.stick<15u, kSticky>(uv); n6 = uv; }
L_2A48: { ++fl.t; const v4u uv = vsubd(n8, n5); set_vi(i3, i3 + 1u); vstore(r.vf[8], uv); fl.stick<15u, kSticky>(uv); n8 = uv; }
L_2A50: { ++fl.t; const v4u uv = vmuld(n3, vsplat(n1[2])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[10].w[0], r.vf[7].w[0]); fl.end_q(r, qb, 7u); } vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n10 = vsel(n10, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2A58: { ++fl.t; const v4u uv = vmuld(n3, vsplat(n2[2])); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2A60: { ++fl.t; const v4u uv = vmuld(n9, n2); vstore(r.vf[11], vsel(vload(r.vf[11]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n11 = vsel(n11, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2A68: { ++fl.t; const v4u uv = vmuld(n9, n1); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2A70: { ++fl.t; const v4u uv = vmuld(n10, vfix(vsplat(r.i))); vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n10 = vsel(n10, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2A78: { ++fl.t; const v4u uv = vaddd(n11, n7); fl.flush_q(r); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2A80: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_2A88: { ++fl.t; const v4u uv = vsubd(n10, n9); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2A90: { ++fl.t; const v4u uv = vmuld(n7, vsplat(n2[3])); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<7u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_2A98: { ++fl.t; const v4u uv = vmuld(n8, vsplat(n2[3])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[9].w[0], r.vf[7].w[0]); fl.end_q(r, qb, 7u); } vstore(r.vf[8], uv); fl.stick<15u, kSticky>(uv); n8 = uv; }
L_2AA0: { ++fl.t; const v4u uv = vaddd(n3, n7); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<7u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_2AA8: { ++fl.t; const v4u uv = vaddd(n5, n8); fl.flush_q(r); vstore(r.vf[5], uv); fl.stick<15u, kSticky>(uv); n5 = uv; }
L_2AB0: { ++fl.t; fl.flush_q(r); vflushd(r.vf[3], v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { std::uint8_t *q = qword(mem, i1 + 1u); std::memcpy(q, &r.vf[3], 16); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_2AB8: { ++fl.t; vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vmuld(n2, vsplat(n3[3])); { std::uint8_t *q = qword(mem, i1 + 3u); std::memcpy(q, &r.vf[5], 16); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2AC0: { ++fl.t; const v4u uv = vmuld(n6, vsplat(n3[3])); vstore(r.vf[3], uv); fl.push<15u, kSticky>(uv); n3 = uv; }
L_2AC8: { ++fl.t; const v4u uv = vaddd(n1, n5); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2AD0: { ++fl.t; vflushd(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vaddd(n4, n3); { std::uint8_t *q = qword(mem, i1 + 0u); std::memcpy(q + 0, &r.vf[1].w[0], 4); std::memcpy(q + 4, &r.vf[1].w[1], 4); std::memcpy(q + 8, &r.vf[1].w[2], 4); } vstore(r.vf[4], uv); fl.push<15u, kSticky>(uv); n4 = uv; }
L_2AD8: { ++fl.t; pend = 0u == i9; }
L_2AE0: { ++fl.t; vflushd(r.vf[4], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i1 + 2u); std::memcpy(q, &r.vf[4], 16); } }
    if (pend) { pend = false; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_2D30; }
L_2AE8: { ++fl.t; set_vi(i9, i9 - 1u); }
L_2AF0: { ++fl.t; set_vi(i5, 0u + i6); }
L_2AF8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_2B00: { ++fl.t; pend = 0u != i9; }
L_2B08: { ++fl.t; set_vi(i7, i7 + 1u); }
    if (pend) { pend = false; vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_2B78; }
L_2B10: { ++fl.t; pend = true; }
L_2B18: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_2B78; }
    vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); 
L_2B20: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(&r.vf[4], q, 16); } n4 = vshadow(r.vf[4]); }
L_2B28: { ++fl.t; vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_2B30: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_2B38: { ++fl.t; pend = 0u == i9; }
L_2B40: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
    if (pend) { pend = false; goto L_2D30; }
L_2B48: { ++fl.t; set_vi(i9, i9 - 1u); }
L_2B50: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_2B58: { ++fl.t; pend = 0u != i9; }
L_2B60: { ++fl.t; set_vi(i7, i7 + 1u); }
    if (pend) { pend = false; goto L_29B8; }
L_2B68: { ++fl.t; pend = true; }
L_2B70: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; goto L_29B8; }
L_2B78: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_2B80: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2B88: { ++fl.t; }
L_2B90: { ++fl.t; }
L_2B98: { ++fl.t; }
L_2BA0: { ++fl.t; set_vi(i1, (fl.clip() & 2u) ? 1u : 0u); }
L_2BA8: { ++fl.t; pend = 0u != i1; }
L_2BB0: { ++fl.t; }
    if (pend) { pend = false; goto L_2C10; }
L_2BB8: { ++fl.t; set_vi(i1, i2 + i3); }
L_2BC0: { ++fl.t; set_vi(i3, i3 + 1u); }
L_2BC8: { ++fl.t; pend = 0u == i9; }
L_2BD0: { ++fl.t; { std::uint8_t *q = qword(mem, i1 + 0u); const std::uint32_t v = i5; std::memcpy(q + 8, &v, 4); } }
    if (pend) { pend = false; goto L_2D30; }
L_2BD8: { ++fl.t; set_vi(i9, i9 - 1u); }
L_2BE0: { ++fl.t; set_vi(i5, 0u + i6); }
L_2BE8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_2BF0: { ++fl.t; pend = 0u != i9; }
L_2BF8: { ++fl.t; set_vi(i7, i7 + 1u); }
    if (pend) { pend = false; goto L_2B78; }
L_2C00: { ++fl.t; pend = true; }
L_2C08: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; goto L_2B78; }
L_2C10: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n1[3])); { const std::uint8_t *q = qword(mem, i5 + 0u); vstore(r.vf[6], vsel(vload(r.vf[6]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n6 = vshadow(r.vf[6]); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2C18: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_2C20: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 38u); vstore(r.vf[11], vsel(vload(r.vf[11]), vload_ptr(q), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } n11 = vshadow(r.vf[11]); }
L_2C28: { ++fl.t; const v4u uv = vmuld(n3, vfix(vsplat(r.i))); { const std::uint8_t *q = qword(mem, i5 + 1u); std::memcpy(&r.vf[9], q, 16); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n9 = vshadow(r.vf[9]); n4 = vsel(n4, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2C30: { ++fl.t; vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_2C38: { ++fl.t; const v4u uv = vsubd(n1, n6); { const std::uint8_t *q = qword(mem, i5 + 2u); std::memcpy(&r.vf[2], q, 16); } vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n2 = vshadow(r.vf[2]); n7 = vsel(n7, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2C40: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 3u); std::memcpy(&r.vf[10], q, 16); } n10 = vshadow(r.vf[10]); }
L_2C48: { ++fl.t; vflushd(r.vf[4], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); const v4u uv = vsubd(n4, n9); vstore(r.vf[8], vsel(vload(r.vf[8]), vload(r.vf[4]), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); vstore(r.vf[13], vsel(vload(r.vf[13]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n8 = vshadow(r.vf[8]); n13 = vsel(n13, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2C50: { ++fl.t; const v4u uv = vsubd(n3, n9); { const std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(&r.vf[4], q, 16); } vstore(r.vf[12], uv); fl.stick<15u, kSticky>(uv); n4 = vshadow(r.vf[4]); n12 = uv; }
L_2C58: { ++fl.t; const v4u uv = vmuld(n11, n7); { const std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(&r.vf[5], q, 16); } vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n5 = vshadow(r.vf[5]); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2C60: { ++fl.t; const v4u uv = vmuld(n11, n6); set_vi(i1, i2 + i3); vstore(r.vf[18], vsel(vload(r.vf[18]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n18 = vsel(n18, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2C68: { ++fl.t; const v4u uv = vmuld(n8, vsplat(n6[2])); { std::uint8_t *q = qword(mem, i1 + 1u); const std::uint32_t v = i6; std::memcpy(q + 8, &v, 4); } vstore(r.vf[19], vsel(vload(r.vf[19]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n19 = vsel(n19, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2C70: { ++fl.t; const v4u uv = vmuld(n8, vsplat(n7[2])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[13].w[0], r.vf[12].w[0]); fl.end_q(r, qb, 7u); } vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n12 = vsel(n12, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2C78: { ++fl.t; const v4u uv = vsubd(n4, n2); { std::uint8_t *q = qword(mem, i1 + 0u); const std::uint32_t v = i5; std::memcpy(q + 8, &v, 4); } vstore(r.vf[11], uv); fl.stick<15u, kSticky>(uv); n11 = uv; }
L_2C80: { ++fl.t; const v4u uv = vsubd(n5, n10); set_vi(i3, i3 + 2u); vstore(r.vf[13], uv); fl.stick<15u, kSticky>(uv); n13 = uv; }
L_2C88: { ++fl.t; const v4u uv = vmuld(n19, vfix(vsplat(r.i))); vstore(r.vf[19], vsel(vload(r.vf[19]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n19 = vsel(n19, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2C90: { ++fl.t; const v4u uv = vaddd(n9, n12); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2C98: { ++fl.t; const v4u uv = vsubd(n19, n18); fl.flush_q(r); vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n12 = vsel(n12, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2CA0: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[12].w[0], r.vf[9].w[0]); fl.end_q(r, qb, 7u); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_2CA8: { ++fl.t; const v4u uv = vmuld(n12, vsplat(n6[3])); vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<7u, kSticky>(uv); n8 = vsel(n8, uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_2CB0: { ++fl.t; const v4u uv = vmuld(n13, vsplat(n6[3])); vstore(r.vf[12], uv); fl.stick<15u, kSticky>(uv); n12 = uv; }
L_2CB8: { ++fl.t; const v4u uv = vaddd(n9, n8); vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<7u, kSticky>(uv); n8 = vsel(n8, uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_2CC0: { ++fl.t; const v4u uv = vaddd(n10, n12); fl.flush_q(r); vstore(r.vf[9], uv); fl.stick<15u, kSticky>(uv); n9 = uv; }
L_2CC8: { ++fl.t; fl.flush_q(r); vflushd(r.vf[8], v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(q, &r.vf[8], 16); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_2CD0: { ++fl.t; vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vmuld(n7, vsplat(n6[3])); { std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(q, &r.vf[9], 16); } vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2CD8: { ++fl.t; const v4u uv = vmuld(n11, vsplat(n6[3])); vstore(r.vf[11], uv); fl.push<15u, kSticky>(uv); n11 = uv; }
L_2CE0: { ++fl.t; const v4u uv = vaddd(n6, n9); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2CE8: { ++fl.t; vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vaddd(n2, n11); { std::uint8_t *q = qword(mem, i6 + 0u); std::memcpy(q + 0, &r.vf[6].w[0], 4); std::memcpy(q + 4, &r.vf[6].w[1], 4); std::memcpy(q + 8, &r.vf[6].w[2], 4); } vstore(r.vf[2], uv); fl.push<15u, kSticky>(uv); n2 = uv; }
L_2CF0: { ++fl.t; pend = 0u == i9; }
L_2CF8: { ++fl.t; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(q, &r.vf[2], 16); } }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[19], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_2D30; }
L_2D00: { ++fl.t; set_vi(i9, i9 - 1u); }
L_2D08: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_2D10: { ++fl.t; pend = 0u != i9; }
L_2D18: { ++fl.t; set_vi(i7, i7 + 1u); }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[19], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_29B8; }
L_2D20: { ++fl.t; pend = true; }
L_2D28: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[19], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_29B8; }
    vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[19], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); 
L_2D30: { ++fl.t; pend = 0u == i3; }
L_2D38: { ++fl.t; }
    if (pend) { pend = false; goto L_3568; }
L_2D40: { ++fl.t; set_vi(i4, 0u + 0u); }
L_2D48: { ++fl.t; set_vi(i6, 0u + i4); }
L_2D50: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i6 + 0u) + 8, 2); set_vi(i5, v); } }
L_2D58: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 44u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } n1 = vshadow(r.vf[1]); }
L_2D60: { ++fl.t; set_vi(i6, i6 + 1u); }
L_2D68: { ++fl.t; set_vi(i9, 0u + i3); }
L_2D70: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_2D78: { ++fl.t; set_vi(i7, i6 + 1u); }
L_2D80: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i6 + 0u) + 8, 2); set_vi(i6, v); } }
L_2D88: { ++fl.t; set_vi(i3, 0u + 0u); }
L_2D90: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); set_vi(i2, 0u + 7u); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2D98: { ++fl.t; set_vi(i9, i9 - 1u); }
L_2DA0: { ++fl.t; }
L_2DA8: { ++fl.t; }
L_2DB0: { ++fl.t; set_vi(i1, (fl.clip() & 4u) ? 1u : 0u); }
L_2DB8: { ++fl.t; pend = 0u == i1; }
L_2DC0: { ++fl.t; }
    if (pend) { pend = false; goto L_2F90; }
L_2DC8: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 2u); std::memcpy(&r.vf[4], q, 16); } n4 = vshadow(r.vf[4]); }
L_2DD0: { ++fl.t; vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_2DD8: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_2DE0: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 3u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
L_2DE8: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_2DF0: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2DF8: { ++fl.t; }
L_2E00: { ++fl.t; }
L_2E08: { ++fl.t; }
L_2E10: { ++fl.t; set_vi(i1, (fl.clip() & 4u) ? 1u : 0u); }
L_2E18: { ++fl.t; pend = 0u != i1; }
L_2E20: { ++fl.t; }
    if (pend) { pend = false; goto L_2F38; }
L_2E28: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n1[3])); { const std::uint8_t *q = qword(mem, i6 + 0u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n2 = vshadow(r.vf[2]); n9 = vsel(n9, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2E30: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(&r.vf[7], q, 16); } n7 = vshadow(r.vf[7]); }
L_2E38: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 38u); vstore(r.vf[10], vsel(vload(r.vf[10]), vload_ptr(q), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); } n10 = vshadow(r.vf[10]); }
L_2E40: { ++fl.t; vflushd(r.vf[9], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); const v4u uv = vsubd(n2, n1); vstore(r.vf[6], vsel(vload(r.vf[6]), vload(r.vf[9]), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n6 = vshadow(r.vf[6]); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2E48: { ++fl.t; const v4u uv = vsubd(n7, n3); { const std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(&r.vf[7], q, 16); } vstore(r.vf[8], uv); fl.stick<15u, kSticky>(uv); n7 = vshadow(r.vf[7]); n8 = uv; }
L_2E50: { ++fl.t; const v4u uv = vsubd(n9, n3); { const std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(&r.vf[9], q, 16); } vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n9 = vshadow(r.vf[9]); n12 = vsel(n12, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2E58: { ++fl.t; const v4u uv = vmuld(n10, n1); set_vi(i1, 0u + i8); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2E60: { ++fl.t; const v4u uv = vmuld(n6, vsplat(n1[2])); set_vi(i8, i8 + 4u); vstore(r.vf[11], vsel(vload(r.vf[11]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n11 = vsel(n11, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2E68: { ++fl.t; const v4u uv = vmuld(n10, n2); set_vi(i5, i2 + i3); vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n10 = vsel(n10, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2E70: { ++fl.t; const v4u uv = vmuld(n6, vsplat(n2[2])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[12].w[1], r.vf[8].w[1]); fl.end_q(r, qb, 7u); } vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n8 = vsel(n8, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2E78: { ++fl.t; const v4u uv = vsubd(n7, n4); { std::uint8_t *q = qword(mem, i5 + 0u); const std::uint32_t v = i1; std::memcpy(q + 8, &v, 4); } vstore(r.vf[7], uv); fl.stick<15u, kSticky>(uv); n7 = uv; }
L_2E80: { ++fl.t; const v4u uv = vmuld(n11, vfix(vsplat(r.i))); set_vi(i3, i3 + 1u); vstore(r.vf[11], vsel(vload(r.vf[11]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n11 = vsel(n11, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2E88: { ++fl.t; const v4u uv = vsubd(n9, n5); vstore(r.vf[9], uv); fl.stick<15u, kSticky>(uv); n9 = uv; }
L_2E90: { ++fl.t; const v4u uv = vaddd(n10, n8); vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n8 = vsel(n8, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2E98: { ++fl.t; const v4u uv = vsubd(n11, n3); fl.flush_q(r); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2EA0: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[3].w[1], r.vf[8].w[1]); fl.end_q(r, qb, 7u); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_2EA8: { ++fl.t; const v4u uv = vmuld(n8, vsplat(n2[3])); vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<11u, kSticky>(uv); n8 = vsel(n8, uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_2EB0: { ++fl.t; const v4u uv = vmuld(n9, vsplat(n2[3])); vstore(r.vf[9], uv); fl.stick<15u, kSticky>(uv); n9 = uv; }
L_2EB8: { ++fl.t; const v4u uv = vaddd(n3, n8); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<11u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_2EC0: { ++fl.t; const v4u uv = vaddd(n5, n9); fl.flush_q(r); vstore(r.vf[3], uv); fl.stick<15u, kSticky>(uv); n3 = uv; }
L_2EC8: { ++fl.t; fl.flush_q(r); vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { std::uint8_t *q = qword(mem, i1 + 1u); std::memcpy(q, &r.vf[6], 16); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_2ED0: { ++fl.t; vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vmuld(n2, vsplat(n5[3])); { std::uint8_t *q = qword(mem, i1 + 3u); std::memcpy(q, &r.vf[3], 16); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2ED8: { ++fl.t; const v4u uv = vmuld(n7, vsplat(n5[3])); vstore(r.vf[5], uv); fl.push<15u, kSticky>(uv); n5 = uv; }
L_2EE0: { ++fl.t; const v4u uv = vaddd(n1, n3); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2EE8: { ++fl.t; vflushd(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vaddd(n4, n5); { std::uint8_t *q = qword(mem, i1 + 0u); std::memcpy(q + 0, &r.vf[1].w[0], 4); std::memcpy(q + 4, &r.vf[1].w[1], 4); std::memcpy(q + 8, &r.vf[1].w[2], 4); } vstore(r.vf[4], uv); fl.push<15u, kSticky>(uv); n4 = uv; }
L_2EF0: { ++fl.t; pend = 0u == i9; }
L_2EF8: { ++fl.t; vflushd(r.vf[4], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i1 + 2u); std::memcpy(q, &r.vf[4], 16); } }
    if (pend) { pend = false; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[11], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[12], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_3138; }
L_2F00: { ++fl.t; set_vi(i9, i9 - 1u); }
L_2F08: { ++fl.t; set_vi(i5, 0u + i6); }
L_2F10: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_2F18: { ++fl.t; pend = 0u != i9; }
L_2F20: { ++fl.t; set_vi(i7, i7 + 1u); }
    if (pend) { pend = false; vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[11], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[12], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_2F90; }
L_2F28: { ++fl.t; pend = true; }
L_2F30: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[11], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[12], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_2F90; }
    vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[11], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[12], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); 
L_2F38: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(&r.vf[4], q, 16); } n4 = vshadow(r.vf[4]); }
L_2F40: { ++fl.t; vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_2F48: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_2F50: { ++fl.t; pend = 0u == i9; }
L_2F58: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
    if (pend) { pend = false; goto L_3138; }
L_2F60: { ++fl.t; set_vi(i9, i9 - 1u); }
L_2F68: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_2F70: { ++fl.t; pend = 0u != i9; }
L_2F78: { ++fl.t; set_vi(i7, i7 + 1u); }
    if (pend) { pend = false; goto L_2DE8; }
L_2F80: { ++fl.t; pend = true; }
L_2F88: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; goto L_2DE8; }
L_2F90: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_2F98: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2FA0: { ++fl.t; }
L_2FA8: { ++fl.t; }
L_2FB0: { ++fl.t; }
L_2FB8: { ++fl.t; set_vi(i1, (fl.clip() & 4u) ? 1u : 0u); }
L_2FC0: { ++fl.t; pend = 0u != i1; }
L_2FC8: { ++fl.t; }
    if (pend) { pend = false; goto L_3028; }
L_2FD0: { ++fl.t; set_vi(i1, i2 + i3); }
L_2FD8: { ++fl.t; set_vi(i3, i3 + 1u); }
L_2FE0: { ++fl.t; pend = 0u == i9; }
L_2FE8: { ++fl.t; { std::uint8_t *q = qword(mem, i1 + 0u); const std::uint32_t v = i5; std::memcpy(q + 8, &v, 4); } }
    if (pend) { pend = false; goto L_3138; }
L_2FF0: { ++fl.t; set_vi(i9, i9 - 1u); }
L_2FF8: { ++fl.t; set_vi(i5, 0u + i6); }
L_3000: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_3008: { ++fl.t; pend = 0u != i9; }
L_3010: { ++fl.t; set_vi(i7, i7 + 1u); }
    if (pend) { pend = false; goto L_2F90; }
L_3018: { ++fl.t; pend = true; }
L_3020: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; goto L_2F90; }
L_3028: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n1[3])); { const std::uint8_t *q = qword(mem, i5 + 0u); vstore(r.vf[6], vsel(vload(r.vf[6]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n6 = vshadow(r.vf[6]); n4 = vsel(n4, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3030: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_3038: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 1u); std::memcpy(&r.vf[9], q, 16); } n9 = vshadow(r.vf[9]); }
L_3040: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 38u); vstore(r.vf[5], vsel(vload(r.vf[5]), vload_ptr(q), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); } n5 = vshadow(r.vf[5]); }
L_3048: { ++fl.t; vflushd(r.vf[4], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); const v4u uv = vsubd(n1, n6); vstore(r.vf[7], vsel(vload(r.vf[7]), vload(r.vf[4]), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n7 = vshadow(r.vf[7]); n8 = vsel(n8, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3050: { ++fl.t; const v4u uv = vsubd(n4, n9); vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); vstore(r.vf[11], vsel(vload(r.vf[11]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n3 = vshadow(r.vf[3]); n11 = vsel(n11, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3058: { ++fl.t; const v4u uv = vmuld(n5, n6); { const std::uint8_t *q = qword(mem, i5 + 3u); std::memcpy(&r.vf[10], q, 16); } vstore(r.vf[18], vsel(vload(r.vf[18]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n10 = vshadow(r.vf[10]); n18 = vsel(n18, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3060: { ++fl.t; const v4u uv = vmuld(n7, vsplat(n6[2])); { const std::uint8_t *q = qword(mem, i5 + 2u); std::memcpy(&r.vf[2], q, 16); } vstore(r.vf[13], vsel(vload(r.vf[13]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n2 = vshadow(r.vf[2]); n13 = vsel(n13, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3068: { ++fl.t; const v4u uv = vsubd(n3, n9); { const std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(&r.vf[4], q, 16); } vstore(r.vf[12], uv); fl.stick<15u, kSticky>(uv); n4 = vshadow(r.vf[4]); n12 = uv; }
L_3070: { ++fl.t; const v4u uv = vmuld(n5, n8); { const std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(&r.vf[5], q, 16); } vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n5 = vshadow(r.vf[5]); n9 = vsel(n9, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3078: { ++fl.t; const v4u uv = vmuld(n7, vsplat(n8[2])); set_vi(i1, i2 + i3); vstore(r.vf[23], vsel(vload(r.vf[23]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n23 = vsel(n23, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3080: { ++fl.t; const v4u uv = vmuld(n13, vfix(vsplat(r.i))); { std::uint8_t *q = qword(mem, i1 + 1u); const std::uint32_t v = i6; std::memcpy(q + 8, &v, 4); } vstore(r.vf[19], vsel(vload(r.vf[19]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n19 = vsel(n19, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3088: { ++fl.t; const v4u uv = vsubd(n4, n2); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[11].w[1], r.vf[12].w[1]); fl.end_q(r, qb, 7u); } vstore(r.vf[11], uv); fl.stick<15u, kSticky>(uv); n11 = uv; }
L_3090: { ++fl.t; const v4u uv = vsubd(n5, n10); { std::uint8_t *q = qword(mem, i1 + 0u); const std::uint32_t v = i5; std::memcpy(q + 8, &v, 4); } vstore(r.vf[13], uv); fl.stick<15u, kSticky>(uv); n13 = uv; }
L_3098: { ++fl.t; const v4u uv = vaddd(n9, n23); set_vi(i3, i3 + 2u); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_30A0: { ++fl.t; const v4u uv = vsubd(n19, n18); fl.flush_q(r); vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n12 = vsel(n12, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_30A8: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[12].w[1], r.vf[9].w[1]); fl.end_q(r, qb, 7u); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_30B0: { ++fl.t; const v4u uv = vmuld(n12, vsplat(n6[3])); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<11u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_30B8: { ++fl.t; const v4u uv = vmuld(n13, vsplat(n6[3])); fl.flush_q(r); vstore(r.vf[12], uv); fl.stick<15u, kSticky>(uv); n12 = uv; }
L_30C0: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_30C8: { ++fl.t; const v4u uv = vaddd(n9, n7); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<11u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_30D0: { ++fl.t; const v4u uv = vaddd(n10, n12); vstore(r.vf[12], uv); fl.stick<15u, kSticky>(uv); n12 = uv; }
L_30D8: { ++fl.t; const v4u uv = vmuld(n8, vsplat(n6[3])); vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n10 = vsel(n10, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_30E0: { ++fl.t; vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vmuld(n11, vsplat(n6[3])); { std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(q, &r.vf[7], 16); } vstore(r.vf[9], uv); fl.push<15u, kSticky>(uv); n9 = uv; }
L_30E8: { ++fl.t; vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vaddd(n6, n10); { std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(q, &r.vf[12], 16); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_30F0: { ++fl.t; vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vaddd(n2, n9); { std::uint8_t *q = qword(mem, i6 + 0u); std::memcpy(q + 0, &r.vf[6].w[0], 4); std::memcpy(q + 4, &r.vf[6].w[1], 4); std::memcpy(q + 8, &r.vf[6].w[2], 4); } vstore(r.vf[2], uv); fl.push<15u, kSticky>(uv); n2 = uv; }
L_30F8: { ++fl.t; pend = 0u == i9; }
L_3100: { ++fl.t; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(q, &r.vf[2], 16); } }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[19], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[23], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_3138; }
L_3108: { ++fl.t; set_vi(i9, i9 - 1u); }
L_3110: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_3118: { ++fl.t; pend = 0u != i9; }
L_3120: { ++fl.t; set_vi(i7, i7 + 1u); }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[19], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[23], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_2DE8; }
L_3128: { ++fl.t; pend = true; }
L_3130: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[19], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[23], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_2DE8; }
    vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[19], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[23], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); 
L_3138: { ++fl.t; pend = 0u == i3; }
L_3140: { ++fl.t; }
    if (pend) { pend = false; goto L_3568; }
L_3148: { ++fl.t; set_vi(i4, 0u + 7u); }
L_3150: { ++fl.t; set_vi(i6, 0u + i4); }
L_3158: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i6 + 0u) + 8, 2); set_vi(i5, v); } }
L_3160: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 44u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } n1 = vshadow(r.vf[1]); }
L_3168: { ++fl.t; set_vi(i6, i6 + 1u); }
L_3170: { ++fl.t; set_vi(i9, 0u + i3); }
L_3178: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_3180: { ++fl.t; set_vi(i7, i6 + 1u); }
L_3188: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i6 + 0u) + 8, 2); set_vi(i6, v); } }
L_3190: { ++fl.t; set_vi(i3, 0u + 0u); }
L_3198: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); set_vi(i2, 0u + 0u); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_31A0: { ++fl.t; set_vi(i9, i9 - 1u); }
L_31A8: { ++fl.t; }
L_31B0: { ++fl.t; }
L_31B8: { ++fl.t; set_vi(i1, (fl.clip() & 8u) ? 1u : 0u); }
L_31C0: { ++fl.t; pend = 0u == i1; }
L_31C8: { ++fl.t; }
    if (pend) { pend = false; goto L_33B0; }
L_31D0: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 2u); std::memcpy(&r.vf[4], q, 16); } n4 = vshadow(r.vf[4]); }
L_31D8: { ++fl.t; vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_31E0: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_31E8: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 3u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
L_31F0: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_31F8: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_3200: { ++fl.t; }
L_3208: { ++fl.t; }
L_3210: { ++fl.t; }
L_3218: { ++fl.t; set_vi(i1, (fl.clip() & 8u) ? 1u : 0u); }
L_3220: { ++fl.t; pend = 0u != i1; }
L_3228: { ++fl.t; }
    if (pend) { pend = false; goto L_3358; }
L_3230: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n1[3])); { const std::uint8_t *q = qword(mem, i6 + 0u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n2 = vshadow(r.vf[2]); n6 = vsel(n6, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3238: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(&r.vf[7], q, 16); } n7 = vshadow(r.vf[7]); }
L_3240: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 38u); vstore(r.vf[9], vsel(vload(r.vf[9]), vload_ptr(q), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); } n9 = vshadow(r.vf[9]); }
L_3248: { ++fl.t; const v4u uv = vmuld(n6, vfix(vsplat(r.i))); { const std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(&r.vf[6], q, 16); } vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n6 = vshadow(r.vf[6]); n10 = vsel(n10, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3250: { ++fl.t; const v4u uv = vsubd(n2, n1); { const std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(&r.vf[8], q, 16); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n8 = vshadow(r.vf[8]); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3258: { ++fl.t; const v4u uv = vsubd(n7, n3); set_vi(i1, 0u + i8); vstore(r.vf[7], uv); fl.stick<15u, kSticky>(uv); n7 = uv; }
L_3260: { ++fl.t; set_vi(i8, i8 + 4u); }
L_3268: { ++fl.t; vflushd(r.vf[10], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); const v4u uv = vsubd(n10, n3); vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[10]), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n3 = vshadow(r.vf[3]); n10 = vsel(n10, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3270: { ++fl.t; set_vi(i5, i2 + i3); }
L_3278: { ++fl.t; const v4u uv = vsubd(n6, n4); { std::uint8_t *q = qword(mem, i5 + 0u); const std::uint32_t v = i1; std::memcpy(q + 8, &v, 4); } vstore(r.vf[6], uv); fl.stick<15u, kSticky>(uv); n6 = uv; }
L_3280: { ++fl.t; const v4u uv = vsubd(n8, n5); set_vi(i3, i3 + 1u); vstore(r.vf[8], uv); fl.stick<15u, kSticky>(uv); n8 = uv; }
L_3288: { ++fl.t; const v4u uv = vmuld(n3, vsplat(n1[2])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[10].w[1], r.vf[7].w[1]); fl.end_q(r, qb, 7u); } vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n10 = vsel(n10, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3290: { ++fl.t; const v4u uv = vmuld(n3, vsplat(n2[2])); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3298: { ++fl.t; const v4u uv = vmuld(n9, n2); vstore(r.vf[11], vsel(vload(r.vf[11]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n11 = vsel(n11, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_32A0: { ++fl.t; const v4u uv = vmuld(n9, n1); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_32A8: { ++fl.t; const v4u uv = vmuld(n10, vfix(vsplat(r.i))); vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n10 = vsel(n10, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_32B0: { ++fl.t; const v4u uv = vaddd(n11, n7); fl.flush_q(r); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_32B8: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_32C0: { ++fl.t; const v4u uv = vsubd(n10, n9); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_32C8: { ++fl.t; const v4u uv = vmuld(n7, vsplat(n2[3])); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<11u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_32D0: { ++fl.t; const v4u uv = vmuld(n8, vsplat(n2[3])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[9].w[1], r.vf[7].w[1]); fl.end_q(r, qb, 7u); } vstore(r.vf[8], uv); fl.stick<15u, kSticky>(uv); n8 = uv; }
L_32D8: { ++fl.t; const v4u uv = vaddd(n3, n7); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<11u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_32E0: { ++fl.t; const v4u uv = vaddd(n5, n8); fl.flush_q(r); vstore(r.vf[5], uv); fl.stick<15u, kSticky>(uv); n5 = uv; }
L_32E8: { ++fl.t; fl.flush_q(r); vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { std::uint8_t *q = qword(mem, i1 + 1u); std::memcpy(q, &r.vf[3], 16); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_32F0: { ++fl.t; vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vmuld(n2, vsplat(n3[3])); { std::uint8_t *q = qword(mem, i1 + 3u); std::memcpy(q, &r.vf[5], 16); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_32F8: { ++fl.t; const v4u uv = vmuld(n6, vsplat(n3[3])); vstore(r.vf[3], uv); fl.push<15u, kSticky>(uv); n3 = uv; }
L_3300: { ++fl.t; const v4u uv = vaddd(n1, n5); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3308: { ++fl.t; vflushd(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vaddd(n4, n3); { std::uint8_t *q = qword(mem, i1 + 0u); std::memcpy(q + 0, &r.vf[1].w[0], 4); std::memcpy(q + 4, &r.vf[1].w[1], 4); std::memcpy(q + 8, &r.vf[1].w[2], 4); } vstore(r.vf[4], uv); fl.push<15u, kSticky>(uv); n4 = uv; }
L_3310: { ++fl.t; pend = 0u == i9; }
L_3318: { ++fl.t; vflushd(r.vf[4], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i1 + 2u); std::memcpy(q, &r.vf[4], 16); } }
    if (pend) { pend = false; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[10], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[11], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_3568; }
L_3320: { ++fl.t; set_vi(i9, i9 - 1u); }
L_3328: { ++fl.t; set_vi(i5, 0u + i6); }
L_3330: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_3338: { ++fl.t; pend = 0u != i9; }
L_3340: { ++fl.t; set_vi(i7, i7 + 1u); }
    if (pend) { pend = false; vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[10], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[11], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_33B0; }
L_3348: { ++fl.t; pend = true; }
L_3350: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[10], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[11], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_33B0; }
    vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[10], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[11], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); 
L_3358: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(&r.vf[4], q, 16); } n4 = vshadow(r.vf[4]); }
L_3360: { ++fl.t; vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_3368: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_3370: { ++fl.t; pend = 0u == i9; }
L_3378: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
    if (pend) { pend = false; goto L_3568; }
L_3380: { ++fl.t; set_vi(i9, i9 - 1u); }
L_3388: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_3390: { ++fl.t; pend = 0u != i9; }
L_3398: { ++fl.t; set_vi(i7, i7 + 1u); }
    if (pend) { pend = false; goto L_31F0; }
L_33A0: { ++fl.t; pend = true; }
L_33A8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; goto L_31F0; }
L_33B0: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_33B8: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_33C0: { ++fl.t; }
L_33C8: { ++fl.t; }
L_33D0: { ++fl.t; }
L_33D8: { ++fl.t; set_vi(i1, (fl.clip() & 8u) ? 1u : 0u); }
L_33E0: { ++fl.t; pend = 0u != i1; }
L_33E8: { ++fl.t; }
    if (pend) { pend = false; goto L_3448; }
L_33F0: { ++fl.t; set_vi(i1, i2 + i3); }
L_33F8: { ++fl.t; set_vi(i3, i3 + 1u); }
L_3400: { ++fl.t; pend = 0u == i9; }
L_3408: { ++fl.t; { std::uint8_t *q = qword(mem, i1 + 0u); const std::uint32_t v = i5; std::memcpy(q + 8, &v, 4); } }
    if (pend) { pend = false; goto L_3568; }
L_3410: { ++fl.t; set_vi(i9, i9 - 1u); }
L_3418: { ++fl.t; set_vi(i5, 0u + i6); }
L_3420: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_3428: { ++fl.t; pend = 0u != i9; }
L_3430: { ++fl.t; set_vi(i7, i7 + 1u); }
    if (pend) { pend = false; goto L_33B0; }
L_3438: { ++fl.t; pend = true; }
L_3440: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; goto L_33B0; }
L_3448: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n1[3])); { const std::uint8_t *q = qword(mem, i5 + 0u); vstore(r.vf[6], vsel(vload(r.vf[6]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n6 = vshadow(r.vf[6]); n3 = vsel(n3, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3450: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_3458: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 38u); vstore(r.vf[11], vsel(vload(r.vf[11]), vload_ptr(q), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); } n11 = vshadow(r.vf[11]); }
L_3460: { ++fl.t; const v4u uv = vmuld(n3, vfix(vsplat(r.i))); { const std::uint8_t *q = qword(mem, i5 + 1u); std::memcpy(&r.vf[9], q, 16); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n9 = vshadow(r.vf[9]); n4 = vsel(n4, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3468: { ++fl.t; vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_3470: { ++fl.t; const v4u uv = vsubd(n1, n6); { const std::uint8_t *q = qword(mem, i5 + 2u); std::memcpy(&r.vf[2], q, 16); } vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n2 = vshadow(r.vf[2]); n7 = vsel(n7, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3478: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 3u); std::memcpy(&r.vf[10], q, 16); } n10 = vshadow(r.vf[10]); }
L_3480: { ++fl.t; vflushd(r.vf[4], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); const v4u uv = vsubd(n4, n9); vstore(r.vf[8], vsel(vload(r.vf[8]), vload(r.vf[4]), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); vstore(r.vf[13], vsel(vload(r.vf[13]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n8 = vshadow(r.vf[8]); n13 = vsel(n13, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3488: { ++fl.t; const v4u uv = vsubd(n3, n9); { const std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(&r.vf[4], q, 16); } vstore(r.vf[12], uv); fl.stick<15u, kSticky>(uv); n4 = vshadow(r.vf[4]); n12 = uv; }
L_3490: { ++fl.t; const v4u uv = vmuld(n11, n7); { const std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(&r.vf[5], q, 16); } vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n5 = vshadow(r.vf[5]); n9 = vsel(n9, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3498: { ++fl.t; const v4u uv = vmuld(n11, n6); set_vi(i1, i2 + i3); vstore(r.vf[18], vsel(vload(r.vf[18]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n18 = vsel(n18, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_34A0: { ++fl.t; const v4u uv = vmuld(n8, vsplat(n6[2])); { std::uint8_t *q = qword(mem, i1 + 1u); const std::uint32_t v = i6; std::memcpy(q + 8, &v, 4); } vstore(r.vf[19], vsel(vload(r.vf[19]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n19 = vsel(n19, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_34A8: { ++fl.t; const v4u uv = vmuld(n8, vsplat(n7[2])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[13].w[1], r.vf[12].w[1]); fl.end_q(r, qb, 7u); } vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n12 = vsel(n12, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_34B0: { ++fl.t; const v4u uv = vsubd(n4, n2); { std::uint8_t *q = qword(mem, i1 + 0u); const std::uint32_t v = i5; std::memcpy(q + 8, &v, 4); } vstore(r.vf[11], uv); fl.stick<15u, kSticky>(uv); n11 = uv; }
L_34B8: { ++fl.t; const v4u uv = vsubd(n5, n10); set_vi(i3, i3 + 2u); vstore(r.vf[13], uv); fl.stick<15u, kSticky>(uv); n13 = uv; }
L_34C0: { ++fl.t; const v4u uv = vmuld(n19, vfix(vsplat(r.i))); vstore(r.vf[19], vsel(vload(r.vf[19]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n19 = vsel(n19, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_34C8: { ++fl.t; const v4u uv = vaddd(n9, n12); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_34D0: { ++fl.t; const v4u uv = vsubd(n19, n18); fl.flush_q(r); vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n12 = vsel(n12, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_34D8: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[12].w[1], r.vf[9].w[1]); fl.end_q(r, qb, 7u); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_34E0: { ++fl.t; const v4u uv = vmuld(n12, vsplat(n6[3])); vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<11u, kSticky>(uv); n8 = vsel(n8, uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_34E8: { ++fl.t; const v4u uv = vmuld(n13, vsplat(n6[3])); vstore(r.vf[12], uv); fl.stick<15u, kSticky>(uv); n12 = uv; }
L_34F0: { ++fl.t; const v4u uv = vaddd(n9, n8); vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<11u, kSticky>(uv); n8 = vsel(n8, uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_34F8: { ++fl.t; const v4u uv = vaddd(n10, n12); fl.flush_q(r); vstore(r.vf[9], uv); fl.stick<15u, kSticky>(uv); n9 = uv; }
L_3500: { ++fl.t; fl.flush_q(r); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(q, &r.vf[8], 16); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_3508: { ++fl.t; vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vmuld(n7, vsplat(n6[3])); { std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(q, &r.vf[9], 16); } vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3510: { ++fl.t; const v4u uv = vmuld(n11, vsplat(n6[3])); vstore(r.vf[11], uv); fl.push<15u, kSticky>(uv); n11 = uv; }
L_3518: { ++fl.t; const v4u uv = vaddd(n6, n9); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3520: { ++fl.t; vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vaddd(n2, n11); { std::uint8_t *q = qword(mem, i6 + 0u); std::memcpy(q + 0, &r.vf[6].w[0], 4); std::memcpy(q + 4, &r.vf[6].w[1], 4); std::memcpy(q + 8, &r.vf[6].w[2], 4); } vstore(r.vf[2], uv); fl.push<15u, kSticky>(uv); n2 = uv; }
L_3528: { ++fl.t; pend = 0u == i9; }
L_3530: { ++fl.t; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(q, &r.vf[2], 16); } }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[19], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_3568; }
L_3538: { ++fl.t; set_vi(i9, i9 - 1u); }
L_3540: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_3548: { ++fl.t; pend = 0u != i9; }
L_3550: { ++fl.t; set_vi(i7, i7 + 1u); }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[19], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_31F0; }
L_3558: { ++fl.t; pend = true; }
L_3560: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[19], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_31F0; }
    vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[19], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); 
L_3568: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_3570: { ++fl.t; }
    if (pendj) { pendj = false; vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
    vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[14] = i14; r.vi[15] = i15; vhop(hop, ((13688u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[14] = i14; r.vi[15] = i15; vhop(hop, jpc);
    return;
}
static __attribute__((noinline, cold)) void vu1_ECC1F2148557EE5E_c(Vu0Regs &r, std::uint8_t *mem, VuDaz &daz, std::uint32_t &hop) { vu1_ECC1F2148557EE5E_b<true>(r, mem, daz, hop); }
void vu1_ECC1F2148557EE5E(Vu0Regs &r, std::uint8_t *mem) {
    std::uint32_t hop = kNoHop;
    {
        VuDaz daz;
        if ((r.status & 0xC0u) == 0xC0u) vu1_ECC1F2148557EE5E_b<false>(r, mem, daz, hop);
        else vu1_ECC1F2148557EE5E_c(r, mem, daz, hop);
    }
    if (hop != kNoHop) vu::interpret(1, hop);
}

template <bool kSticky>
PS2_VU_BODY void vu1_167699303484A4A8_b(Vu0Regs &r, std::uint8_t *mem, VuDaz &daz, std::uint32_t &hop) {
    (void)daz;
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 624u) & 16383u;
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
    std::uint16_t i14 = r.vi[14];
    std::uint16_t i15 = r.vi[15];
    goto L_0270;
L_01F8: { ++fl.t; set_vi(i1, 0u + 15u); }
L_0200: { ++fl.t; set_vi(i1, i8 & i1); }
L_0208: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1) + 4, 2); set_vi(i2, v); } }
L_0210: { fl.t += 4u; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; pendj = true; }
L_0218: { ++fl.t; }
    if (pendj) { pendj = false; vflush(r.vf[1], v4u{0u, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[3], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
    vflush(r.vf[1], v4u{0u, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[3], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[14] = i14; r.vi[15] = i15; vhop(hop, ((544u + sh) & 16383u));
    return;
L_0270: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[15].w[0], r.vf[27].w[2]); fl.end_q(r, qb, 7u); } vstore(r.vf[17], uv); n17 = vshadow(r.vf[17]); }
L_0278: { ++fl.t; const v4u uv = vmuld(n18, n26); { const std::uint8_t *q = qword(mem, i13 + 0u); std::memcpy(&r.vf[16], q, 16); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n16 = vshadow(r.vf[16]); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0280: { ++fl.t; const v4u uv = vmuld(n20, n26); { const std::uint8_t *q = qword(mem, 0u + 38u); std::memcpy(&r.vf[24], q, 16); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n24 = vshadow(r.vf[24]); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0288: { ++fl.t; const v4u uv = vmuld(n22, n26); vstore(r.vf[5], vsel(vload(r.vf[5]), vload(r.vf[0]), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n5 = vshadow(r.vf[5]); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0290: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 145u); vstore(r.vf[7], vsel(vload(r.vf[7]), vload_ptr(q), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } n7 = vshadow(r.vf[7]); }
L_0298: { ++fl.t; const v4u uv = vaddd(n3, vsplat(n3[1])); { const std::uint8_t *q = qword(mem, 0u + 143u); std::memcpy(&r.vf[4], q, 16); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n4 = vshadow(r.vf[4]); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_02A0: { ++fl.t; const v4u uv = vmaddd(nacc, n17, vsplat(n3[2])); { const std::uint8_t *q = qword(mem, i13 + 1u); std::memcpy(&r.vf[11], q, 16); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n11 = vshadow(r.vf[11]); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_02A8: { ++fl.t; const v4u uv = vaddd(n2, vsplat(n2[0])); { const std::uint8_t *q = qword(mem, 0u + 138u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n3 = vshadow(r.vf[3]); nacc = vsel(nacc, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_02B0: { ++fl.t; const v4u uv = vmaddd(nacc, n17, vsplat(n2[2])); { const std::uint8_t *q = qword(mem, 0u + 142u); std::memcpy(&r.vf[2], q, 16); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n2 = vshadow(r.vf[2]); n6 = vsel(n6, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_02B8: { ++fl.t; const v4u uv = vaddd(n1, vsplat(n1[0])); { const std::uint8_t *q = qword(mem, 0u + 33u); std::memcpy(&r.vf[8], q, 16); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.stick<2u, kSticky>(uv); n8 = vshadow(r.vf[8]); nacc = vsel(nacc, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_02C0: { ++fl.t; const v4u uv = vmaddd(nacc, n17, vsplat(n1[1])); { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = 0u; std::memcpy(q + 8, &v, 4); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.stick<2u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_02C8: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vqd(r.q)); { const std::uint8_t *q = qword(mem, 0u + 137u); vstore(r.vf[27], vsel(vload(r.vf[27]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[1], uv); fl.stick<15u, kSticky>(uv); n27 = vshadow(r.vf[27]); n1 = uv; }
L_02D0: { ++fl.t; const v4u uv = vmuld(n27, n24); { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 132u) + 12, 2); set_vi(i4, v); } vstore(r.vf[24], vsel(vload(r.vf[24]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.stick<12u, kSticky>(uv); n24 = vsel(n24, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_02D8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 135u); std::memcpy(&r.vf[10], q, 16); } n10 = vshadow(r.vf[10]); }
L_02E0: { ++fl.t; vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vmax(vload(r.vf[6]), v4u{0u, 0u, 0u, 0x3F800000u}); { const std::uint8_t *q = qword(mem, 0u + 134u); std::memcpy(&r.vf[9], q, 16); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n9 = vshadow(r.vf[9]); n5 = vshadow(r.vf[5]); }
L_02E8: { ++fl.t; vflushd(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); const v4u uv = vmax(vload(r.vf[1]), vsplat(r.vf[24].w[3])); { const std::uint8_t *q = qword(mem, 0u + 136u); vstore(r.vf[6], vsel(vload(r.vf[6]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n6 = vshadow(r.vf[6]); n1 = vshadow(r.vf[1]); }
L_02F0: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vsplat(n8[2])); { std::uint8_t *q = qword(mem, 0u + 112u); std::memcpy(q + 0, &r.vf[11].w[0], 4); std::memcpy(q + 4, &r.vf[11].w[1], 4); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_02F8: { ++fl.t; const v4u uv = vmaddd(nacc, n8, vsplat(n27[2])); { const std::uint8_t *q = qword(mem, 0u + 41u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[24], vsel(vload(r.vf[24]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n3 = vshadow(r.vf[3]); n24 = vsel(n24, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0300: { ++fl.t; const v4u uv = vmuld(n19, vsplat(n5[0])); { const std::uint8_t *q = qword(mem, 0u + 44u); vstore(r.vf[13], vsel(vload(r.vf[13]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n13 = vshadow(r.vf[13]); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0308: { ++fl.t; const v4u uv = vmaddd(nacc, n21, vsplat(n5[1])); set_vi(i6, 0u + 16u); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0310: { ++fl.t; const v4u uv = vmaddd(nacc, n23, vsplat(n5[2])); { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 114u) + 0, 2); set_vi(i3, v); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0318: { ++fl.t; const v4u uv = vmuld(n24, n1); set_vi(i7, 0u + 14u); vstore(r.vf[24], vsel(vload(r.vf[24]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n24 = vsel(n24, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0320: { ++fl.t; vflushd(r.vf[24], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); const v4u uv = vmax(vload(r.vf[24]), vsplat(r.vf[8].w[1])); set_vi(i2, i8 & i6); vstore(r.vf[24], vsel(vload(r.vf[24]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n24 = vshadow(r.vf[24]); }
L_0328: { ++fl.t; const v4u uv = vmuld(n26, n10); set_vi(i5, 0u + 16u); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.stick<12u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_0330: { ++fl.t; vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vmax(vload(r.vf[5]), vsplat(r.vf[7].w[0])); set_vi(i3, i3 + i3); vstore(r.vf[5], uv); n5 = vshadow(r.vf[5]); }
L_0338: { ++fl.t; const v4u uv = vaddd(nacc, (v4u)((v4f)n9 * (v4f)vsplat(0x3F800000u))); { const std::uint8_t *q = qword(mem, i2 + 15u); vstore(r.vf[17], vsel(vload(r.vf[17]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.stick<12u, kSticky>(uv); n17 = vshadow(r.vf[17]); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_0340: { ++fl.t; const v4u uv = vmin(vload(r.vf[24]), vsplat(r.vf[8].w[0])); set_vi(i3, i3 & i7); vstore(r.vf[24], vsel(vload(r.vf[24]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n24 = vshadow(r.vf[24]); }
L_0348: { ++fl.t; const v4u uv = vmuld(vswz<1, 2, 0, 3>(n13), vswz<2, 0, 1, 3>(n25)); { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 114u) + 4, 2); set_vi(i2, v); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0350: { ++fl.t; const v4u uv = vmuld(n4, n5); r.clip = 0u; fl.set_clip(r.clip, fl.t - 4u); vstore(r.vf[5], uv); fl.stick<15u, kSticky>(uv); n5 = uv; }
L_0358: { ++fl.t; vflushd(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); const v4u uv = vmsubd(nacc, vswz<1, 2, 0, 3>(n25), vswz<2, 0, 1, 3>(n13)); { std::uint8_t *q = qword(mem, 0u + 113u); std::memcpy(q + 0, &r.vf[26].w[0], 4); std::memcpy(q + 4, &r.vf[26].w[1], 4); } vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0360: { ++fl.t; const v4u uv = vsubd(n3, vsplat(n27[2])); { const std::uint8_t *q = qword(mem, i4 + 112u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.push<1u, kSticky>(uv); n4 = vshadow(r.vf[4]); n3 = vsel(n3, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0368: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[24], r.vf[13].w[3]); set_vi(i4, i2 + i2); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_0370: { ++fl.t; const v4u uv = vmuld(n5, n16); set_vi(i4, i4 & i7); vstore(r.acc, uv); fl.push<15u, kSticky>(uv); nacc = uv; }
L_0378: { ++fl.t; const v4u uv = vmaddd(nacc, n3, n16); { const std::uint8_t *q = qword(mem, 0u + 133u); std::memcpy(&r.vf[13], q, 16); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n13 = vshadow(r.vf[13]); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0380: { ++fl.t; const v4u uv = vaddd(nacc, (v4u)((v4f)n2 * (v4f)vsplat(0x3F800000u))); set_vi(i5, (fl.mac() & 0xFFFFu) == i5 ? 1u : 0u); vstore(r.vf[2], uv); fl.stick<15u, kSticky>(uv); n2 = uv; }
L_0388: { ++fl.t; const v4u uv = vaddd(n4, n6); set_vi(i5, i3 + i5); vstore(r.vf[16], vsel(vload(r.vf[16]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.stick<12u, kSticky>(uv); n16 = vsel(n16, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_0390: { ++fl.t; const v4u uv = vmuld(n26, n27); { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = i5; std::memcpy(q + 0, &v, 4); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n4 = vsel(n4, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0398: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n1[0])); set_vi(i1, (fl.clip() & 15u) ? 1u : 0u); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.stick<2u, kSticky>(uv); n26 = vsel(n26, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_03A0: { ++fl.t; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vmin(vload(r.vf[2]), vsplat(r.vf[27].w[3])); set_vi(i4, i4 + i1); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n2 = vshadow(r.vf[2]); }
L_03A8: { ++fl.t; const v4u uv = vmuld(n16, vsplat(n1[0])); { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = i4; std::memcpy(q + 4, &v, 4); } vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.stick<12u, kSticky>(uv); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_03B0: { ++fl.t; const v4u uv = vaddd(n4, vsplat(n4[1])); set_vi(i3, 0u + 16384u); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_03B8: { ++fl.t; const v4u uv = vmaddd(nacc, n17, vsplat(n4[2])); set_vi(i7, i12 + 0u); vstore(r.vf[17], vsel(vload(r.vf[17]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n17 = vsel(n17, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_03C0: { ++fl.t; const v4u uv = vmuld(n2, n13); { const std::uint8_t *q = qword(mem, 0u + 39u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[13], uv); fl.stick<15u, kSticky>(uv); n4 = vshadow(r.vf[4]); n13 = uv; }
L_03C8: { ++fl.t; vflushd(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vftoi(vload(r.vf[24]), 4); { std::uint8_t *q = qword(mem, i7 + 0u); std::memcpy(q + 0, &r.vf[26].w[0], 4); std::memcpy(q + 4, &r.vf[26].w[1], 4); std::memcpy(q + 8, &r.vf[26].w[2], 4); } vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n27 = vshadow(r.vf[27]); }
L_03D0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 117u) + 12, 2); set_vi(i4, v); } }
L_03D8: { ++fl.t; const v4u uv = vmuld(n17, vsplat(n17[0])); { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 116u) + 12, 2); set_vi(i5, v); } vstore(r.vf[16], vsel(vload(r.vf[16]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.push<1u, kSticky>(uv); n16 = vsel(n16, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_03E0: { ++fl.t; const v4u uv = vftoi(vload(r.vf[13]), 0); { const std::uint8_t *q = qword(mem, i13 + 3u); std::memcpy(&r.vf[17], q, 16); } vstore(r.vf[13], uv); n17 = vshadow(r.vf[17]); n13 = vshadow(r.vf[13]); }
L_03E8: { ++fl.t; const v4u uv = vaddd(n24, n4); set_vi(i2, r.vf[27].w[3]); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_03F0: { ++fl.t; vflushd(r.vf[2], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i4 + 3u); std::memcpy(q, &r.vf[2], 16); } }
L_03F8: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); set_vi(i6, (fl.mac() & 0xFFFFu) == i6 ? 1u : 0u); vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n27 = vsel(n27, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0400: { ++fl.t; const v4u uv = vmuld(n28, vsplat(n17[0])); { std::uint16_t v; std::memcpy(&v, qword(mem, i6 + 126u) + 12, 2); set_vi(i6, v); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0408: { ++fl.t; const v4u uv = vftoi(vload(r.vf[26]), 4); { std::uint8_t *q = qword(mem, i7 + 1u); std::memcpy(q, &r.vf[13], 16); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n2 = vshadow(r.vf[2]); }
L_0410: { ++fl.t; vflushd(r.vf[24], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vmaddd(nacc, n29, vsplat(n17[1])); { std::uint8_t *q = qword(mem, i4 + 1u); std::memcpy(q, &r.vf[24], 16); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0418: { ++fl.t; vflushd(r.vf[27], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); const v4u uv = vmaddd(nacc, n30, vsplat(n17[2])); { std::uint8_t *q = qword(mem, i4 + 0u); std::memcpy(q, &r.vf[27], 16); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0420: { ++fl.t; set_vi(i8, i8 | i6); }
L_0428: { ++fl.t; set_vi(i6, i3 & i8); }
L_0430: { ++fl.t; set_vi(i6, i6 + i6); }
L_0438: { ++fl.t; { std::uint8_t *q = qword(mem, i7 + 2u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
L_0440: { ++fl.t; set_vi(i6, i2 | i6); }
L_0448: { ++fl.t; { std::uint8_t *q = qword(mem, i7 + 2u); const std::uint32_t v = i6; std::memcpy(q + 12, &v, 4); } }
L_0450: { ++fl.t; set_vi(i12, i12 + 3u); }
L_0458: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 115u) + 12, 2); set_vi(i6, v); } }
L_0460: { ++fl.t; vflushd(r.vf[16], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); { std::uint8_t *q = qword(mem, i4 + 2u); std::memcpy(q + 0, &r.vf[16].w[0], 4); std::memcpy(q + 4, &r.vf[16].w[1], 4); } }
L_0468: { ++fl.t; set_vi(i10, i10 + 1u); }
L_0470: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 114u) + 0, 2); set_vi(i7, v); } }
L_0478: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 116u); const std::uint32_t v = i4; std::memcpy(q + 12, &v, 4); } }
L_0480: { ++fl.t; { const std::uint8_t *q = qword(mem, i13 + 2u); std::memcpy(&r.vf[16], q, 16); } n16 = vshadow(r.vf[16]); }
L_0488: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 114u) + 4, 2); set_vi(i3, v); } }
L_0490: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 115u); const std::uint32_t v = i5; std::memcpy(q + 12, &v, 4); } }
L_0498: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 117u); const std::uint32_t v = i6; std::memcpy(q + 12, &v, 4); } }
L_04A0: { ++fl.t; const v4u uv = vaddd(nacc, (v4u)((v4f)n31 * (v4f)vsplat(0x3F800000u))); vstore(r.vf[24], vsel(vload(r.vf[24]), vload(r.vf[27]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n24 = vshadow(r.vf[24]); n27 = vsel(n27, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_04A8: { ++fl.t; const v4u uv = vmuld(n28, vsplat(n16[0])); set_vi(i2, i7 | i3); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_04B0: { ++fl.t; const v4u uv = vmaddd(nacc, n29, vsplat(n16[1])); { std::uint8_t *q = qword(mem, 0u + 113u); const std::uint32_t v = i2; std::memcpy(q + 12, &v, 4); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_04B8: { ++fl.t; const v4u uv = vmaddd(nacc, n30, vsplat(n16[2])); set_vi(i13, i13 + 4u); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_04C0: { ++fl.t; const v4u uv = vsubd(n27, n24); vstore(r.vf[13], vsel(vload(r.vf[13]), vload(r.vf[25]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); vstore(r.vf[25], uv); fl.push<15u, kSticky>(uv); n13 = vshadow(r.vf[13]); n25 = uv; }
L_04C8: { ++fl.t; pend = 0u == i2; }
L_04D0: { ++fl.t; set_vi(i1, 0u + 157u); }
    if (pend) { pend = false; goto L_04E8; }
L_04D8: { ++fl.t; set_vi(i15, (((1240u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_04E0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 115u); const std::uint32_t v = i1; std::memcpy(q + 4, &v, 4); } }
    if (pend) { pend = false; goto L_1AB0; }
L_04E8: { ++fl.t; set_vi(i1, i11 - i12); }
L_04F0: { ++fl.t; set_vi(i6, i8 + 0u); }
L_04F8: { ++fl.t; pend = static_cast<std::int16_t>(i1) > 0; }
L_0500: { ++fl.t; }
    if (pend) { pend = false; goto L_0530; }
L_0508: { ++fl.t; set_vi(i15, (((1288u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0510: { ++fl.t; }
    if (pend) { pend = false; vflushd(r.vf[1], v4u{0u, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto L_1820; }
L_0518: { ++fl.t; set_vi(i10, 0u + 0u); }
L_0520: { ++fl.t; set_vi(i9, 0u + i12); }
L_0528: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_0530: { ++fl.t; pend = static_cast<std::int16_t>(i6) >= 0; }
L_0538: { ++fl.t; set_vi(i8, r.vf[16].w[3]); }
    if (pend) { pend = false; vflushd(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); goto L_0270; }
L_0540: { ++fl.t; set_vi(i5, 0u + 171u); }
L_0548: { ++fl.t; pend = true; }
L_0550: { ++fl.t; set_vi(i4, 0u + 78u); }
    if (pend) { pend = false; goto L_19C0; }
    vflushd(r.vf[1], v4u{0u, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[3], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[14] = i14; r.vi[15] = i15; vhop(hop, ((1368u + sh) & 16383u));
    return;
L_1820: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 114u) + 12, 2); set_vi(i3, v); } }
L_1828: { ++fl.t; set_vi(i2, 0u + 32767u); }
L_1830: { ++fl.t; set_vi(i2, i2 + 1u); }
L_1838: { ++fl.t; set_vi(i2, i10 | i2); }
L_1840: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 0u) + 12, 2); set_vi(i1, v); } }
L_1848: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i2; std::memcpy(q + 0, &v, 4); } }
L_1850: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 2u) + 12, 2); set_vi(i3, v); } }
L_1858: { ++fl.t; }
L_1860: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_1868: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 2u) + 12, 2); set_vi(i12, v); } }
L_1870: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 4u) + 12, 2); set_vi(i11, v); } }
L_1878: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1880: { ++fl.t; vkick_last(daz, 1, i3); }
    if (pendj) { pendj = false; vflush(r.vf[3], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_1888: { ++fl.t; ending = true; }
L_1890: { ++fl.t; }
    if (ending) { vflush(r.vf[3], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[14] = i14; r.vi[15] = i15; r.tpc = ((6296u + sh) & 16383u); return; }
    vflush(r.vf[3], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[14] = i14; r.vi[15] = i15; vhop(hop, ((6296u + sh) & 16383u));
    return;
L_18C0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 31u); std::memcpy(&r.vf[1], q, 16); } n1 = vshadow(r.vf[1]); }
L_18C8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 26u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); } n2 = vshadow(r.vf[2]); }
L_18D0: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_18D8: { ++fl.t; set_vi(i10, 0u + 0u); }
L_18E0: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); std::memcpy(q, &r.vf[1], 16); } }
L_18E8: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 1u); const std::uint32_t v = i1; std::memcpy(q + 0, &v, 4); } }
L_18F0: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 2u); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); std::memcpy(q + 12, &r.vf[2].w[3], 4); } }
L_18F8: { ++fl.t; set_vi(i9, i12 + 2u); }
L_1900: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1908: { ++fl.t; set_vi(i12, i12 + 3u); }
    if (pendj) { pendj = false; vflush(r.vf[3], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.vf[5], v4u{0u, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
    vflush(r.vf[3], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.vf[5], v4u{0u, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[14] = i14; r.vi[15] = i15; vhop(hop, ((6416u + sh) & 16383u));
    return;
L_19C0: { ++fl.t; set_vi(i6, i6 + i6); }
L_19C8: { ++fl.t; set_vi(i6, i6 + i6); }
L_19D0: { ++fl.t; set_vi(i3, 0u + 4096u); }
L_19D8: { ++fl.t; pend = static_cast<std::int16_t>(i6) >= 0; }
L_19E0: { ++fl.t; set_vi(i6, i6 + i6); }
    if (pend) { pend = false; goto L_1A18; }
L_19E8: { ++fl.t; set_vi(i15, (((6632u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_19F0: { ++fl.t; set_vi(i1, 0u + 4u); }
    if (pend) { pend = false; vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); goto L_18C0; }
L_19F8: { ++fl.t; set_vi(i1, 0u + 1u); }
L_1A00: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = i1; std::memcpy(q + 8, &v, 4); } }
L_1A08: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = 0u; std::memcpy(q + 0, &v, 4); } }
L_1A10: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = 0u; std::memcpy(q + 4, &v, 4); } }
L_1A18: { ++fl.t; set_vi(i3, i6 & i3); }
L_1A20: { ++fl.t; pend = static_cast<std::int16_t>(i6) >= 0; }
L_1A28: { ++fl.t; set_vi(i6, i6 + i6); bi = 6u; }
    if (pend) { pend = false; goto L_1A40; }
L_1A30: { ++fl.t; set_vi(i15, (((6704u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1A38: { ++fl.t; next_bk = i3; set_vi(i3, 0u + 512u); bk = next_bk; bi = 3u; }
    if (pend) { pend = false; vflushd(r.vf[1], v4u{0u, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto L_1888; }
L_1A40: { ++fl.t; pend = 0u == (bi == 3 ? bk : i3); }
L_1A48: { ++fl.t; { const std::uint8_t *q = qword(mem, i13 + 0u); std::memcpy(&r.vf[14], q, 16); } }
    if (pend) { pend = false; goto L_1A80; }
L_1A50: { ++fl.t; pend = static_cast<std::int16_t>(i6) < 0; }
L_1A58: { ++fl.t; set_vi(i7, r.vf[17].w[3]); }
    if (pend) { pend = false; goto L_1AA0; }
L_1A60: { ++fl.t; jpc = (static_cast<std::uint32_t>(i5) * 8u) & 16383u; set_vi(i15, (((6752u + sh) & 16383u) + 16u) / 8u); pendj = true; }
L_1A68: { ++fl.t; set_vi(i6, i4 + 0u); }
    if (pendj) { pendj = false; vflushd(r.vf[1], v4u{0u, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[3], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_1A70: { ++fl.t; jpc = (static_cast<std::uint32_t>(i6) * 8u) & 16383u; pendj = true; }
L_1A78: { ++fl.t; }
    if (pendj) { pendj = false; vflushd(r.vf[1], v4u{0u, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[3], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_1A80: { ++fl.t; pend = static_cast<std::int16_t>(i6) < 0; }
L_1A88: { ++fl.t; }
    if (pend) { pend = false; goto L_1AA0; }
L_1A90: { ++fl.t; jpc = (static_cast<std::uint32_t>(i4) * 8u) & 16383u; pendj = true; }
L_1A98: { ++fl.t; }
    if (pendj) { pendj = false; vflushd(r.vf[1], v4u{0u, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[3], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_1AA0: { ++fl.t; pend = true; }
L_1AA8: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
    if (pend) { pend = false; goto L_01F8; }
L_1AB0: { ++fl.t; set_vi(i12, i12 - 3u); }
L_1AB8: { ++fl.t; pend = 0u == i7; }
L_1AC0: { ++fl.t; set_vi(i10, i10 - 1u); }
    if (pend) { pend = false; vflushd(r.vf[1], v4u{0u, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto L_1BF0; }
L_1AC8: { ++fl.t; set_vi(i1, 0u + 7u); }
L_1AD0: { ++fl.t; set_vi(i7, i7 & i1); }
L_1AD8: { ++fl.t; set_vi(i1, i1 & i3); }
L_1AE0: { ++fl.t; pend = 0u != i7; }
L_1AE8: { ++fl.t; }
    if (pend) { pend = false; vflushd(r.vf[1], v4u{0u, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto L_1B58; }
L_1AF0: { ++fl.t; pend = 0u == i1; }
L_1AF8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 133u); std::memcpy(&r.vf[1], q, 16); } n1 = vshadow(r.vf[1]); }
    if (pend) { pend = false; goto L_1B10; }
L_1B00: { ++fl.t; pend = true; }
L_1B08: { ++fl.t; }
    if (pend) { pend = false; goto L_1BF0; }
L_1B10: { ++fl.t; set_vi(i15, (((6928u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1B18: { ++fl.t; set_vi(i7, i6 + 0u); }
    if (pend) { pend = false; goto L_1E18; }
L_1B20: { ++fl.t; set_vi(i15, (((6944u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1B28: { ++fl.t; set_vi(i7, i5 + 0u); }
    if (pend) { pend = false; goto L_1E18; }
L_1B30: { ++fl.t; set_vi(i15, (((6960u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1B38: { ++fl.t; set_vi(i7, i4 + 0u); }
    if (pend) { pend = false; goto L_1E18; }
L_1B40: { ++fl.t; set_vi(i12, i12 - 3u); }
L_1B48: { ++fl.t; pend = true; }
L_1B50: { ++fl.t; set_vi(i10, i10 - 1u); }
    if (pend) { pend = false; vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); goto L_1D40; }
L_1B58: { ++fl.t; set_vi(i2, 0u + 16384u); }
L_1B60: { ++fl.t; set_vi(i2, i8 & i2); }
L_1B68: { ++fl.t; }
L_1B70: { ++fl.t; pend = 0u == i2; }
L_1B78: { ++fl.t; }
    if (pend) { pend = false; goto L_1B98; }
L_1B80: { ++fl.t; set_vi(i1, 0u + 4u); }
L_1B88: { ++fl.t; pend = true; }
L_1B90: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 115u) + 4, 2); set_vi(i15, v); } }
    if (pend) { pend = false; vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); goto L_18C0; }
L_1B98: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 5u) + 12, 2); set_vi(i2, v); } }
L_1BA0: { ++fl.t; set_vi(i15, (((7072u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1BA8: { ++fl.t; set_vi(i1, 0u + 3u); }
    if (pend) { pend = false; vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); goto L_18C0; }
L_1BB0: { ++fl.t; { set_vi(i14, i14 - 1u); std::uint8_t *q = qword(mem, i14); std::memcpy(q, &r.vf[23], 16); } }
L_1BB8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; set_vi(i15, (((7096u + sh) & 16383u) + 16u) / 8u); pendj = true; }
L_1BC0: { ++fl.t; { set_vi(i14, i14 - 1u); std::uint8_t *q = qword(mem, i14); std::memcpy(q, &r.vf[24], 16); } }
    if (pendj) { pendj = false; vflushd(r.vf[3], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_1BC8: { ++fl.t; { const std::uint8_t *q = qword(mem, i14); std::memcpy(&r.vf[24], q, 16); set_vi(i14, i14 + 1u); } n24 = vshadow(r.vf[24]); }
L_1BD0: { ++fl.t; { const std::uint8_t *q = qword(mem, i14); std::memcpy(&r.vf[23], q, 16); set_vi(i14, i14 + 1u); } n23 = vshadow(r.vf[23]); }
L_1BD8: { ++fl.t; set_vi(i1, 0u + 4u); }
L_1BE0: { ++fl.t; pend = true; }
L_1BE8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 115u) + 4, 2); set_vi(i15, v); } }
    if (pend) { pend = false; vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); goto L_18C0; }
L_1BF0: { ++fl.t; pend = 0u == i3; }
L_1BF8: { ++fl.t; set_vi(i2, 0u + 16384u); }
    if (pend) { pend = false; vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); goto L_1D40; }
L_1C00: { ++fl.t; set_vi(i2, i8 & i2); }
L_1C08: { ++fl.t; set_vi(i1, 0u + 7u); }
L_1C10: { ++fl.t; set_vi(i3, i3 & i1); }
L_1C18: { ++fl.t; pend = 0u != i2; }
L_1C20: { ++fl.t; }
    if (pend) { pend = false; vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); goto L_1D40; }
L_1C28: { ++fl.t; pend = 0u != i3; }
L_1C30: { ++fl.t; }
    if (pend) { pend = false; goto L_1C98; }
L_1C38: { ++fl.t; set_vi(i15, (((7224u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1C40: { ++fl.t; set_vi(i1, 0u + 4u); }
    if (pend) { pend = false; vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); goto L_18C0; }
L_1C48: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 133u); std::memcpy(&r.vf[1], q, 16); } n1 = vshadow(r.vf[1]); }
L_1C50: { ++fl.t; set_vi(i15, (((7248u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1C58: { ++fl.t; set_vi(i7, i6 + 0u); }
    if (pend) { pend = false; goto L_1E18; }
L_1C60: { ++fl.t; set_vi(i15, (((7264u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1C68: { ++fl.t; set_vi(i7, i5 + 0u); }
    if (pend) { pend = false; goto L_1E18; }
L_1C70: { ++fl.t; set_vi(i15, (((7280u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1C78: { ++fl.t; set_vi(i7, i4 + 0u); }
    if (pend) { pend = false; goto L_1E18; }
L_1C80: { ++fl.t; set_vi(i12, i12 - 3u); }
L_1C88: { ++fl.t; pend = true; }
L_1C90: { ++fl.t; set_vi(i10, i10 - 1u); }
    if (pend) { pend = false; vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); goto L_1D40; }
L_1C98: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 1u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } n4 = vshadow(r.vf[4]); }
L_1CA0: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 1u); vstore(r.vf[5], vsel(vload(r.vf[5]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } n5 = vshadow(r.vf[5]); }
L_1CA8: { ++fl.t; set_vi(i3, 0u + i15); }
L_1CB0: { ++fl.t; set_vi(i15, (((7344u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1CB8: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); vstore(r.vf[6], vsel(vload(r.vf[6]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } n6 = vshadow(r.vf[6]); }
    if (pend) { pend = false; goto L_1D60; }
L_1CC0: { ++fl.t; pend = 0u != i1; }
L_1CC8: { ++fl.t; set_vi(i15, 0u + i3); }
    if (pend) { pend = false; goto L_1D08; }
L_1CD0: { ++fl.t; set_vi(i15, (((7376u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1CD8: { ++fl.t; set_vi(i1, 0u + 5u); }
    if (pend) { pend = false; goto L_18C0; }
L_1CE0: { ++fl.t; set_vi(i15, (((7392u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1CE8: { ++fl.t; }
    if (pend) { pend = false; vflushd(r.vf[5], v4u{0u, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto L_1F58; }
L_1CF0: { ++fl.t; set_vi(i1, 0u + 4u); }
L_1CF8: { ++fl.t; pend = true; }
L_1D00: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 115u) + 4, 2); set_vi(i15, v); } }
    if (pend) { pend = false; goto L_18C0; }
L_1D08: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 133u); std::memcpy(&r.vf[1], q, 16); } n1 = vshadow(r.vf[1]); }
L_1D10: { ++fl.t; set_vi(i1, 0u + 16384u); }
L_1D18: { ++fl.t; set_vi(i8, i8 | i1); }
L_1D20: { ++fl.t; set_vi(i15, (((7456u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1D28: { ++fl.t; set_vi(i7, i4 + 0u); }
    if (pend) { pend = false; goto L_1E18; }
L_1D30: { ++fl.t; set_vi(i12, i12 - 3u); }
L_1D38: { ++fl.t; set_vi(i10, i10 - 1u); }
L_1D40: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 115u) + 4, 2); set_vi(i15, v); } }
L_1D48: { ++fl.t; set_vi(i12, i12 + 3u); }
L_1D50: { fl.t += 3u; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1D58: { ++fl.t; set_vi(i10, i10 + 1u); }
    if (pendj) { pendj = false; vflushd(r.vf[3], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[5], v4u{0u, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_1D60: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n4[1])); vstore(r.vf[1], vsel(vload(r.vf[1]), vload(r.vf[4]), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vshadow(r.vf[1]); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_1D68: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n5[0])); vstore(r.vf[2], vsel(vload(r.vf[2]), vload(r.vf[5]), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n2 = vshadow(r.vf[2]); n1 = vsel(n1, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_1D70: { fl.t += 2u; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n6[1])); { const std::uint8_t *q = qword(mem, 0u + 39u); vstore(r.vf[7], vsel(vload(r.vf[7]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.stick<2u, kSticky>(uv); n7 = vshadow(r.vf[7]); n2 = vsel(n2, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_1D78: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n6[0])); { const std::uint8_t *q = qword(mem, 0u + 40u); vstore(r.vf[8], vsel(vload(r.vf[8]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.push<2u, kSticky>(uv); n8 = vshadow(r.vf[8]); n1 = vsel(n1, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_1D80: { fl.t += 4u; const std::uint32_t uclip = vclip_value(r, r.vf[1], r.vf[7].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_1D88: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[8].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_1D90: { ++fl.t; }
L_1D98: { ++fl.t; }
L_1DA0: { ++fl.t; }
L_1DA8: { ++fl.t; set_vi(i1, ((fl.clip() | 16774527u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); }
L_1DB0: { ++fl.t; pend = 0u != i1; }
L_1DB8: { ++fl.t; set_vi(i1, ((fl.clip() | 16775871u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); }
    if (pend) { pend = false; goto L_1E00; }
L_1DC0: { ++fl.t; pend = 0u != i1; }
L_1DC8: { ++fl.t; set_vi(i1, ((fl.clip() | 16777173u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); }
    if (pend) { pend = false; goto L_1E00; }
L_1DD0: { ++fl.t; pend = 0u != i1; }
L_1DD8: { ++fl.t; set_vi(i1, ((fl.clip() | 16777194u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); }
    if (pend) { pend = false; goto L_1E00; }
L_1DE0: { ++fl.t; pend = 0u != i1; }
L_1DE8: { ++fl.t; set_vi(i1, 0u + 0u); }
    if (pend) { pend = false; goto L_1E00; }
L_1DF0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1DF8: { ++fl.t; }
    if (pendj) { pendj = false; vflushd(r.vf[1], v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0u}); vflushd(r.vf[3], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[5], v4u{0u, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_1E00: { ++fl.t; set_vi(i1, 0u + 1u); }
L_1E08: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1E10: { ++fl.t; }
    if (pendj) { pendj = false; vflushd(r.vf[1], v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0u}); vflushd(r.vf[3], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[5], v4u{0u, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
    vflushd(r.vf[1], v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); 
L_1E18: { ++fl.t; set_vi(i14, i14 - 1u); }
L_1E20: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i3; std::memcpy(q + 0, &v, 4); } }
L_1E28: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i2; std::memcpy(q + 4, &v, 4); } }
L_1E30: { ++fl.t; { const std::uint8_t *q = qword(mem, i7 + 0u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } n3 = vshadow(r.vf[3]); }
L_1E38: { ++fl.t; { const std::uint8_t *q = qword(mem, i7 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_1E40: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 39u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n4 = vshadow(r.vf[4]); }
L_1E48: { ++fl.t; { const std::uint8_t *q = qword(mem, i7 + 3u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
L_1E50: { ++fl.t; { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[15].w[0], r.vf[3].w[2]); fl.end_q(r, qb, 7u); } }
L_1E58: { ++fl.t; }
L_1E60: { ++fl.t; const v4u uv = vaddd(n2, n4); set_vi(i2, 0u + 16384u); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1E68: { ++fl.t; const v4u uv = vmuld(n5, n1); set_vi(i2, i2 & i8); vstore(r.vf[5], uv); fl.stick<15u, kSticky>(uv); n5 = uv; }
L_1E70: { ++fl.t; set_vi(i2, i2 + i2); }
L_1E78: { ++fl.t; }
L_1E80: { ++fl.t; const v4u uv = vftoi(vload(r.vf[2]), 4); vstore(r.vf[4], uv); n4 = vshadow(r.vf[4]); }
L_1E88: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { const std::uint8_t *q = qword(mem, i7 + 2u); std::memcpy(&r.vf[2], q, 16); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n2 = vshadow(r.vf[2]); n3 = vsel(n3, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_1E90: { ++fl.t; const v4u uv = vftoi(vload(r.vf[5]), 0); vstore(r.vf[5], uv); n5 = vshadow(r.vf[5]); }
L_1E98: { ++fl.t; }
L_1EA0: { ++fl.t; set_vi(i3, r.vf[4].w[3]); }
L_1EA8: { ++fl.t; const v4u uv = vmuld(n2, vsplat(n3[3])); { std::uint8_t *q = qword(mem, i12 + 2u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); std::memcpy(q + 8, &r.vf[4].w[2], 4); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.stick<12u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_1EB0: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n3[3])); { std::uint8_t *q = qword(mem, i12 + 1u); std::memcpy(q, &r.vf[5], 16); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.push<2u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_1EB8: { ++fl.t; }
L_1EC0: { ++fl.t; set_vi(i2, i3 | i2); }
L_1EC8: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 2u); const std::uint32_t v = i2; std::memcpy(q + 12, &v, 4); } }
L_1ED0: { ++fl.t; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); { std::uint8_t *q = qword(mem, i12 + 0u); std::memcpy(q, &r.vf[2], 16); } }
L_1ED8: { ++fl.t; set_vi(i3, i11 - i12); }
L_1EE0: { ++fl.t; set_vi(i12, i12 + 3u); }
L_1EE8: { ++fl.t; pend = static_cast<std::int16_t>(i3) > 0; }
L_1EF0: { ++fl.t; set_vi(i10, i10 + 1u); }
    if (pend) { pend = false; goto L_1F38; }
L_1EF8: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i15; std::memcpy(q + 12, &v, 4); } }
L_1F00: { ++fl.t; set_vi(i15, (((7936u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1F08: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i1; std::memcpy(q + 8, &v, 4); } }
    if (pend) { pend = false; goto L_1820; }
L_1F10: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 8, 2); set_vi(i1, v); } }
L_1F18: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 12, 2); set_vi(i15, v); } }
L_1F20: { ++fl.t; set_vi(i10, 0u + 0u); }
L_1F28: { ++fl.t; set_vi(i9, 0u + i12); }
L_1F30: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_1F38: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 4, 2); set_vi(i2, v); } }
L_1F40: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 0, 2); set_vi(i3, v); } }
L_1F48: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1F50: { ++fl.t; set_vi(i14, i14 + 1u); }
    if (pendj) { pendj = false; vflushd(r.vf[3], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_1F58: { ++fl.t; { set_vi(i14, i14 - 1u); std::uint8_t *q = qword(mem, i14); std::memcpy(q, &r.vf[13], 16); } }
L_1F60: { ++fl.t; { set_vi(i14, i14 - 1u); std::uint8_t *q = qword(mem, i14); std::memcpy(q, &r.vf[18], 16); } }
L_1F68: { ++fl.t; { set_vi(i14, i14 - 1u); std::uint8_t *q = qword(mem, i14); std::memcpy(q, &r.vf[19], 16); } }
L_1F70: { ++fl.t; { set_vi(i14, i14 - 1u); std::uint8_t *q = qword(mem, i14); std::memcpy(q, &r.vf[23], 16); } }
L_1F78: { ++fl.t; set_vi(i14, i14 - 1u); }
L_1F80: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i15; std::memcpy(q + 12, &v, 4); } }
L_1F88: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i8; std::memcpy(q + 8, &v, 4); } }
L_1F90: { ++fl.t; set_vi(i14, i14 - 1u); }
L_1F98: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i9; std::memcpy(q + 12, &v, 4); } }
L_1FA0: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i10; std::memcpy(q + 8, &v, 4); } }
L_1FA8: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i11; std::memcpy(q + 4, &v, 4); } }
L_1FB0: { ++fl.t; set_vi(i15, (((8112u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1FB8: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i12; std::memcpy(q + 0, &v, 4); } }
    if (pend) { pend = false; goto L_2418; }
L_1FC0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 0, 2); set_vi(i12, v); } }
L_1FC8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 4, 2); set_vi(i11, v); } }
L_1FD0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 8, 2); set_vi(i10, v); } }
L_1FD8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 12, 2); set_vi(i9, v); } }
L_1FE0: { ++fl.t; pend = 0u == i3; }
L_1FE8: { ++fl.t; set_vi(i14, i14 + 1u); }
    if (pend) { pend = false; goto L_2038; }
L_1FF0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 133u); std::memcpy(&r.vf[1], q, 16); } n1 = vshadow(r.vf[1]); }
L_1FF8: { ++fl.t; set_vi(i4, 0u + i2); }
L_2000: { ++fl.t; set_vi(i5, 0u + i3); }
L_2008: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4) + 8, 2); set_vi(i7, v); } }
L_2010: { ++fl.t; set_vi(i5, i5 - 1u); }
L_2018: { ++fl.t; set_vi(i15, (((8216u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_2020: { ++fl.t; set_vi(i4, i4 + 1u); }
    if (pend) { pend = false; goto L_1E18; }
L_2028: { ++fl.t; pend = 0u != i5; }
L_2030: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4) + 8, 2); set_vi(i7, v); } }
    if (pend) { pend = false; goto L_2010; }
L_2038: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 8, 2); set_vi(i8, v); } }
L_2040: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 12, 2); set_vi(i15, v); } }
L_2048: { ++fl.t; set_vi(i14, i14 + 1u); }
L_2050: { ++fl.t; { const std::uint8_t *q = qword(mem, i14); std::memcpy(&r.vf[23], q, 16); set_vi(i14, i14 + 1u); } n23 = vshadow(r.vf[23]); }
L_2058: { ++fl.t; { const std::uint8_t *q = qword(mem, i14); std::memcpy(&r.vf[19], q, 16); set_vi(i14, i14 + 1u); } n19 = vshadow(r.vf[19]); }
L_2060: { ++fl.t; { const std::uint8_t *q = qword(mem, i14); std::memcpy(&r.vf[18], q, 16); set_vi(i14, i14 + 1u); } n18 = vshadow(r.vf[18]); }
L_2068: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_2070: { ++fl.t; { const std::uint8_t *q = qword(mem, i14); std::memcpy(&r.vf[13], q, 16); set_vi(i14, i14 + 1u); } n13 = vshadow(r.vf[13]); }
    if (pendj) { pendj = false; vflush(r.vf[3], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
    vflush(r.vf[3], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[14] = i14; r.vi[15] = i15; vhop(hop, ((8312u + sh) & 16383u));
    return;
L_2418: { ++fl.t; r.i = 3212836864u; }
L_2420: { ++fl.t; set_vi(i7, 0u + 0u); }
L_2428: { ++fl.t; set_vi(i8, 0u + 180u); }
L_2430: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 0u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_2438: { ++fl.t; set_vi(i12, 0u + 3u); }
L_2440: { ++fl.t; set_vi(i2, 0u + 7u); }
L_2448: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 1u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
L_2450: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 2u); std::memcpy(&r.vf[4], q, 16); } n4 = vshadow(r.vf[4]); }
L_2458: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 3u); std::memcpy(&r.vf[3], q, 16); } n3 = vshadow(r.vf[3]); }
L_2460: { ++fl.t; set_vi(i9, i8 + 4u); }
L_2468: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 0u); std::memcpy(q, &r.vf[2], 16); } }
L_2470: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 1u); std::memcpy(q, &r.vf[5], 16); } }
L_2478: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 2u); std::memcpy(q, &r.vf[4], 16); } }
L_2480: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 3u); std::memcpy(q, &r.vf[3], 16); } }
L_2488: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 0u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
L_2490: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 1u); std::memcpy(&r.vf[4], q, 16); } n4 = vshadow(r.vf[4]); }
L_2498: { ++fl.t; { std::uint8_t *q = qword(mem, i7 + 0u); const std::uint32_t v = i8; std::memcpy(q + 8, &v, 4); } }
L_24A0: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 2u); std::memcpy(&r.vf[3], q, 16); } n3 = vshadow(r.vf[3]); }
L_24A8: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 3u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_24B0: { ++fl.t; { std::uint8_t *q = qword(mem, i9 + 0u); std::memcpy(q, &r.vf[5], 16); } }
L_24B8: { ++fl.t; { std::uint8_t *q = qword(mem, i9 + 1u); std::memcpy(q, &r.vf[4], 16); } }
L_24C0: { ++fl.t; set_vi(i5, i9 + 4u); }
L_24C8: { ++fl.t; { std::uint8_t *q = qword(mem, i9 + 2u); std::memcpy(q, &r.vf[3], 16); } }
L_24D0: { ++fl.t; { std::uint8_t *q = qword(mem, i9 + 3u); std::memcpy(q, &r.vf[2], 16); } }
L_24D8: { ++fl.t; set_vi(i4, 0u + i7); }
L_24E0: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 0u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_24E8: { ++fl.t; { std::uint8_t *q = qword(mem, i7 + 1u); const std::uint32_t v = i9; std::memcpy(q + 8, &v, 4); } }
L_24F0: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
L_24F8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i9, v); } }
L_2500: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(&r.vf[4], q, 16); } n4 = vshadow(r.vf[4]); }
L_2508: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(&r.vf[3], q, 16); } n3 = vshadow(r.vf[3]); }
L_2510: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 44u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } n1 = vshadow(r.vf[1]); }
L_2518: { ++fl.t; { std::uint8_t *q = qword(mem, i5 + 0u); std::memcpy(q, &r.vf[2], 16); } }
L_2520: { ++fl.t; { const std::uint8_t *q = qword(mem, i9 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_2528: { ++fl.t; { std::uint8_t *q = qword(mem, i5 + 1u); std::memcpy(q, &r.vf[5], 16); } }
L_2530: { ++fl.t; r.clip = 0u; fl.set_clip(r.clip, fl.t - 4u); }
L_2538: { ++fl.t; { std::uint8_t *q = qword(mem, i5 + 2u); std::memcpy(q, &r.vf[4], 16); } }
L_2540: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); { std::uint8_t *q = qword(mem, i5 + 3u); std::memcpy(q, &r.vf[3], 16); } r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2548: { ++fl.t; { std::uint8_t *q = qword(mem, i7 + 2u); const std::uint32_t v = i5; std::memcpy(q + 8, &v, 4); } }
L_2550: { ++fl.t; set_vi(i8, i5 + 4u); }
L_2558: { ++fl.t; set_vi(i5, i4 + 1u); }
L_2560: { ++fl.t; set_vi(i3, 0u + 0u); }
L_2568: { ++fl.t; set_vi(i1, (fl.clip() & 1u) ? 1u : 0u); }
L_2570: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i5 + 0u) + 8, 2); set_vi(i10, v); } }
L_2578: { ++fl.t; set_vi(i11, i5 + 1u); }
L_2580: { ++fl.t; pend = 0u == i1; }
L_2588: { ++fl.t; set_vi(i12, i12 - 1u); }
    if (pend) { pend = false; goto L_2758; }
L_2590: { ++fl.t; { const std::uint8_t *q = qword(mem, i9 + 2u); std::memcpy(&r.vf[4], q, 16); } n4 = vshadow(r.vf[4]); }
L_2598: { ++fl.t; vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_25A0: { ++fl.t; { const std::uint8_t *q = qword(mem, i9 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_25A8: { ++fl.t; { const std::uint8_t *q = qword(mem, i9 + 3u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
L_25B0: { ++fl.t; { const std::uint8_t *q = qword(mem, i10 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_25B8: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_25C0: { ++fl.t; }
L_25C8: { ++fl.t; }
L_25D0: { ++fl.t; }
L_25D8: { ++fl.t; set_vi(i1, (fl.clip() & 1u) ? 1u : 0u); }
L_25E0: { ++fl.t; pend = 0u != i1; }
L_25E8: { ++fl.t; }
    if (pend) { pend = false; goto L_2700; }
L_25F0: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n1[3])); { const std::uint8_t *q = qword(mem, i10 + 0u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n2 = vshadow(r.vf[2]); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_25F8: { ++fl.t; { const std::uint8_t *q = qword(mem, i10 + 1u); std::memcpy(&r.vf[7], q, 16); } n7 = vshadow(r.vf[7]); }
L_2600: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 38u); vstore(r.vf[10], vsel(vload(r.vf[10]), vload_ptr(q), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } n10 = vshadow(r.vf[10]); }
L_2608: { ++fl.t; vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); const v4u uv = vsubd(n2, n1); vstore(r.vf[6], vsel(vload(r.vf[6]), vload(r.vf[9]), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n6 = vshadow(r.vf[6]); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2610: { ++fl.t; const v4u uv = vsubd(n7, n3); { const std::uint8_t *q = qword(mem, i10 + 2u); std::memcpy(&r.vf[7], q, 16); } vstore(r.vf[8], uv); fl.stick<15u, kSticky>(uv); n7 = vshadow(r.vf[7]); n8 = uv; }
L_2618: { ++fl.t; const v4u uv = vsubd(n9, n3); { const std::uint8_t *q = qword(mem, i10 + 3u); std::memcpy(&r.vf[9], q, 16); } vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n9 = vshadow(r.vf[9]); n12 = vsel(n12, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2620: { ++fl.t; const v4u uv = vmuld(n10, n1); set_vi(i1, 0u + i8); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2628: { ++fl.t; const v4u uv = vmuld(n6, vsplat(n1[2])); set_vi(i8, i8 + 4u); vstore(r.vf[11], vsel(vload(r.vf[11]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n11 = vsel(n11, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2630: { ++fl.t; const v4u uv = vmuld(n10, n2); set_vi(i4, i2 + i3); vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n10 = vsel(n10, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2638: { ++fl.t; const v4u uv = vmuld(n6, vsplat(n2[2])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[12].w[0], r.vf[8].w[0]); fl.end_q(r, qb, 7u); } vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n8 = vsel(n8, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2640: { ++fl.t; const v4u uv = vsubd(n7, n4); { std::uint8_t *q = qword(mem, i4 + 0u); const std::uint32_t v = i1; std::memcpy(q + 8, &v, 4); } vstore(r.vf[7], uv); fl.stick<15u, kSticky>(uv); n7 = uv; }
L_2648: { ++fl.t; const v4u uv = vmuld(n11, vfix(vsplat(r.i))); set_vi(i3, i3 + 1u); vstore(r.vf[11], vsel(vload(r.vf[11]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n11 = vsel(n11, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2650: { ++fl.t; const v4u uv = vsubd(n9, n5); vstore(r.vf[9], uv); fl.stick<15u, kSticky>(uv); n9 = uv; }
L_2658: { ++fl.t; const v4u uv = vaddd(n10, n8); vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n8 = vsel(n8, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2660: { ++fl.t; const v4u uv = vsubd(n11, n3); fl.flush_q(r); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2668: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[3].w[0], r.vf[8].w[0]); fl.end_q(r, qb, 7u); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_2670: { ++fl.t; const v4u uv = vmuld(n8, vsplat(n2[3])); vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<7u, kSticky>(uv); n8 = vsel(n8, uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_2678: { ++fl.t; const v4u uv = vmuld(n9, vsplat(n2[3])); vstore(r.vf[9], uv); fl.stick<15u, kSticky>(uv); n9 = uv; }
L_2680: { ++fl.t; const v4u uv = vaddd(n3, n8); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<7u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_2688: { ++fl.t; const v4u uv = vaddd(n5, n9); fl.flush_q(r); vstore(r.vf[3], uv); fl.stick<15u, kSticky>(uv); n3 = uv; }
L_2690: { ++fl.t; fl.flush_q(r); vflushd(r.vf[6], v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { std::uint8_t *q = qword(mem, i1 + 1u); std::memcpy(q, &r.vf[6], 16); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_2698: { ++fl.t; vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vmuld(n2, vsplat(n5[3])); { std::uint8_t *q = qword(mem, i1 + 3u); std::memcpy(q, &r.vf[3], 16); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_26A0: { ++fl.t; const v4u uv = vmuld(n7, vsplat(n5[3])); vstore(r.vf[5], uv); fl.push<15u, kSticky>(uv); n5 = uv; }
L_26A8: { ++fl.t; const v4u uv = vaddd(n1, n3); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_26B0: { ++fl.t; vflushd(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vaddd(n4, n5); { std::uint8_t *q = qword(mem, i1 + 0u); std::memcpy(q + 0, &r.vf[1].w[0], 4); std::memcpy(q + 4, &r.vf[1].w[1], 4); std::memcpy(q + 8, &r.vf[1].w[2], 4); } vstore(r.vf[4], uv); fl.push<15u, kSticky>(uv); n4 = uv; }
L_26B8: { ++fl.t; pend = 0u == i12; }
L_26C0: { ++fl.t; vflushd(r.vf[4], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i1 + 2u); std::memcpy(q, &r.vf[4], 16); } }
    if (pend) { pend = false; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_2900; }
L_26C8: { ++fl.t; set_vi(i12, i12 - 1u); }
L_26D0: { ++fl.t; set_vi(i9, 0u + i10); }
L_26D8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i11 + 0u) + 8, 2); set_vi(i10, v); } }
L_26E0: { ++fl.t; pend = 0u != i12; }
L_26E8: { ++fl.t; set_vi(i11, i11 + 1u); }
    if (pend) { pend = false; vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_2758; }
L_26F0: { ++fl.t; pend = true; }
L_26F8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i10, v); } }
    if (pend) { pend = false; vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_2758; }
    vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); 
L_2700: { ++fl.t; { const std::uint8_t *q = qword(mem, i10 + 2u); std::memcpy(&r.vf[4], q, 16); } n4 = vshadow(r.vf[4]); }
L_2708: { ++fl.t; vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_2710: { ++fl.t; { const std::uint8_t *q = qword(mem, i10 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_2718: { ++fl.t; pend = 0u == i12; }
L_2720: { ++fl.t; { const std::uint8_t *q = qword(mem, i10 + 3u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
    if (pend) { pend = false; goto L_2900; }
L_2728: { ++fl.t; set_vi(i12, i12 - 1u); }
L_2730: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i11 + 0u) + 8, 2); set_vi(i10, v); } }
L_2738: { ++fl.t; pend = 0u != i12; }
L_2740: { ++fl.t; set_vi(i11, i11 + 1u); }
    if (pend) { pend = false; goto L_25B0; }
L_2748: { ++fl.t; pend = true; }
L_2750: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i10, v); } }
    if (pend) { pend = false; goto L_25B0; }
L_2758: { ++fl.t; { const std::uint8_t *q = qword(mem, i10 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_2760: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2768: { ++fl.t; }
L_2770: { ++fl.t; }
L_2778: { ++fl.t; }
L_2780: { ++fl.t; set_vi(i1, (fl.clip() & 1u) ? 1u : 0u); }
L_2788: { ++fl.t; pend = 0u != i1; }
L_2790: { ++fl.t; }
    if (pend) { pend = false; goto L_27F0; }
L_2798: { ++fl.t; set_vi(i1, i2 + i3); }
L_27A0: { ++fl.t; set_vi(i3, i3 + 1u); }
L_27A8: { ++fl.t; pend = 0u == i12; }
L_27B0: { ++fl.t; { std::uint8_t *q = qword(mem, i1 + 0u); const std::uint32_t v = i9; std::memcpy(q + 8, &v, 4); } }
    if (pend) { pend = false; goto L_2900; }
L_27B8: { ++fl.t; set_vi(i12, i12 - 1u); }
L_27C0: { ++fl.t; set_vi(i9, 0u + i10); }
L_27C8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i11 + 0u) + 8, 2); set_vi(i10, v); } }
L_27D0: { ++fl.t; pend = 0u != i12; }
L_27D8: { ++fl.t; set_vi(i11, i11 + 1u); }
    if (pend) { pend = false; goto L_2758; }
L_27E0: { ++fl.t; pend = true; }
L_27E8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i10, v); } }
    if (pend) { pend = false; goto L_2758; }
L_27F0: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n1[3])); { const std::uint8_t *q = qword(mem, i9 + 0u); vstore(r.vf[6], vsel(vload(r.vf[6]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n6 = vshadow(r.vf[6]); n4 = vsel(n4, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_27F8: { ++fl.t; { const std::uint8_t *q = qword(mem, i10 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_2800: { ++fl.t; { const std::uint8_t *q = qword(mem, i9 + 1u); std::memcpy(&r.vf[9], q, 16); } n9 = vshadow(r.vf[9]); }
L_2808: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 38u); vstore(r.vf[5], vsel(vload(r.vf[5]), vload_ptr(q), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } n5 = vshadow(r.vf[5]); }
L_2810: { ++fl.t; vflushd(r.vf[4], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); const v4u uv = vsubd(n1, n6); vstore(r.vf[7], vsel(vload(r.vf[7]), vload(r.vf[4]), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n7 = vshadow(r.vf[7]); n8 = vsel(n8, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2818: { ++fl.t; const v4u uv = vsubd(n4, n9); vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); vstore(r.vf[11], vsel(vload(r.vf[11]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vshadow(r.vf[3]); n11 = vsel(n11, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2820: { ++fl.t; const v4u uv = vmuld(n5, n6); { const std::uint8_t *q = qword(mem, i9 + 3u); std::memcpy(&r.vf[10], q, 16); } vstore(r.vf[18], vsel(vload(r.vf[18]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n10 = vshadow(r.vf[10]); n18 = vsel(n18, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2828: { ++fl.t; const v4u uv = vmuld(n7, vsplat(n6[2])); { const std::uint8_t *q = qword(mem, i9 + 2u); std::memcpy(&r.vf[2], q, 16); } vstore(r.vf[13], vsel(vload(r.vf[13]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n2 = vshadow(r.vf[2]); n13 = vsel(n13, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2830: { ++fl.t; const v4u uv = vsubd(n3, n9); { const std::uint8_t *q = qword(mem, i10 + 2u); std::memcpy(&r.vf[4], q, 16); } vstore(r.vf[12], uv); fl.stick<15u, kSticky>(uv); n4 = vshadow(r.vf[4]); n12 = uv; }
L_2838: { ++fl.t; const v4u uv = vmuld(n5, n8); { const std::uint8_t *q = qword(mem, i10 + 3u); std::memcpy(&r.vf[5], q, 16); } vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n5 = vshadow(r.vf[5]); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2840: { ++fl.t; const v4u uv = vmuld(n7, vsplat(n8[2])); set_vi(i1, i2 + i3); vstore(r.vf[23], vsel(vload(r.vf[23]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n23 = vsel(n23, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2848: { ++fl.t; const v4u uv = vmuld(n13, vfix(vsplat(r.i))); { std::uint8_t *q = qword(mem, i1 + 1u); const std::uint32_t v = i10; std::memcpy(q + 8, &v, 4); } vstore(r.vf[19], vsel(vload(r.vf[19]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n19 = vsel(n19, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2850: { ++fl.t; const v4u uv = vsubd(n4, n2); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[11].w[0], r.vf[12].w[0]); fl.end_q(r, qb, 7u); } vstore(r.vf[11], uv); fl.stick<15u, kSticky>(uv); n11 = uv; }
L_2858: { ++fl.t; const v4u uv = vsubd(n5, n10); { std::uint8_t *q = qword(mem, i1 + 0u); const std::uint32_t v = i9; std::memcpy(q + 8, &v, 4); } vstore(r.vf[13], uv); fl.stick<15u, kSticky>(uv); n13 = uv; }
L_2860: { ++fl.t; const v4u uv = vaddd(n9, n23); set_vi(i3, i3 + 2u); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2868: { ++fl.t; const v4u uv = vsubd(n19, n18); fl.flush_q(r); vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n12 = vsel(n12, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2870: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[12].w[0], r.vf[9].w[0]); fl.end_q(r, qb, 7u); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_2878: { ++fl.t; const v4u uv = vmuld(n12, vsplat(n6[3])); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<7u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_2880: { ++fl.t; const v4u uv = vmuld(n13, vsplat(n6[3])); fl.flush_q(r); vstore(r.vf[12], uv); fl.stick<15u, kSticky>(uv); n12 = uv; }
L_2888: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_2890: { ++fl.t; const v4u uv = vaddd(n9, n7); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<7u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_2898: { ++fl.t; const v4u uv = vaddd(n10, n12); vstore(r.vf[12], uv); fl.stick<15u, kSticky>(uv); n12 = uv; }
L_28A0: { ++fl.t; const v4u uv = vmuld(n8, vsplat(n6[3])); vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n10 = vsel(n10, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_28A8: { ++fl.t; vflushd(r.vf[7], v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vmuld(n11, vsplat(n6[3])); { std::uint8_t *q = qword(mem, i10 + 1u); std::memcpy(q, &r.vf[7], 16); } vstore(r.vf[9], uv); fl.push<15u, kSticky>(uv); n9 = uv; }
L_28B0: { ++fl.t; vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vaddd(n6, n10); { std::uint8_t *q = qword(mem, i10 + 3u); std::memcpy(q, &r.vf[12], 16); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_28B8: { ++fl.t; vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vaddd(n2, n9); { std::uint8_t *q = qword(mem, i10 + 0u); std::memcpy(q + 0, &r.vf[6].w[0], 4); std::memcpy(q + 4, &r.vf[6].w[1], 4); std::memcpy(q + 8, &r.vf[6].w[2], 4); } vstore(r.vf[2], uv); fl.push<15u, kSticky>(uv); n2 = uv; }
L_28C0: { ++fl.t; pend = 0u == i12; }
L_28C8: { ++fl.t; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i10 + 2u); std::memcpy(q, &r.vf[2], 16); } }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[19], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[23], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_2900; }
L_28D0: { ++fl.t; set_vi(i12, i12 - 1u); }
L_28D8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i11 + 0u) + 8, 2); set_vi(i10, v); } }
L_28E0: { ++fl.t; pend = 0u != i12; }
L_28E8: { ++fl.t; set_vi(i11, i11 + 1u); }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[19], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[23], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_25B0; }
L_28F0: { ++fl.t; pend = true; }
L_28F8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i10, v); } }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[19], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[23], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_25B0; }
    vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[19], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[23], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); 
L_2900: { ++fl.t; pend = 0u == i3; }
L_2908: { ++fl.t; }
    if (pend) { pend = false; goto L_3568; }
L_2910: { ++fl.t; set_vi(i4, 0u + 7u); }
L_2918: { ++fl.t; set_vi(i6, 0u + i4); }
L_2920: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i6 + 0u) + 8, 2); set_vi(i5, v); } }
L_2928: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 44u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } n1 = vshadow(r.vf[1]); }
L_2930: { ++fl.t; set_vi(i6, i6 + 1u); }
L_2938: { ++fl.t; set_vi(i9, 0u + i3); }
L_2940: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_2948: { ++fl.t; set_vi(i7, i6 + 1u); }
L_2950: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i6 + 0u) + 8, 2); set_vi(i6, v); } }
L_2958: { ++fl.t; set_vi(i3, 0u + 0u); }
L_2960: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); set_vi(i2, 0u + 0u); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2968: { ++fl.t; set_vi(i9, i9 - 1u); }
L_2970: { ++fl.t; }
L_2978: { ++fl.t; }
L_2980: { ++fl.t; set_vi(i1, (fl.clip() & 2u) ? 1u : 0u); }
L_2988: { ++fl.t; pend = 0u == i1; }
L_2990: { ++fl.t; }
    if (pend) { pend = false; goto L_2B78; }
L_2998: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 2u); std::memcpy(&r.vf[4], q, 16); } n4 = vshadow(r.vf[4]); }
L_29A0: { ++fl.t; vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_29A8: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_29B0: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 3u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
L_29B8: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_29C0: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_29C8: { ++fl.t; }
L_29D0: { ++fl.t; }
L_29D8: { ++fl.t; }
L_29E0: { ++fl.t; set_vi(i1, (fl.clip() & 2u) ? 1u : 0u); }
L_29E8: { ++fl.t; pend = 0u != i1; }
L_29F0: { ++fl.t; }
    if (pend) { pend = false; goto L_2B20; }
L_29F8: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n1[3])); { const std::uint8_t *q = qword(mem, i6 + 0u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n2 = vshadow(r.vf[2]); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2A00: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(&r.vf[7], q, 16); } n7 = vshadow(r.vf[7]); }
L_2A08: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 38u); vstore(r.vf[9], vsel(vload(r.vf[9]), vload_ptr(q), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } n9 = vshadow(r.vf[9]); }
L_2A10: { ++fl.t; const v4u uv = vmuld(n6, vfix(vsplat(r.i))); { const std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(&r.vf[6], q, 16); } vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n6 = vshadow(r.vf[6]); n10 = vsel(n10, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2A18: { ++fl.t; const v4u uv = vsubd(n2, n1); { const std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(&r.vf[8], q, 16); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n8 = vshadow(r.vf[8]); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2A20: { ++fl.t; const v4u uv = vsubd(n7, n3); set_vi(i1, 0u + i8); vstore(r.vf[7], uv); fl.stick<15u, kSticky>(uv); n7 = uv; }
L_2A28: { ++fl.t; set_vi(i8, i8 + 4u); }
L_2A30: { ++fl.t; vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); const v4u uv = vsubd(n10, n3); vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[10]), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vshadow(r.vf[3]); n10 = vsel(n10, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2A38: { ++fl.t; set_vi(i5, i2 + i3); }
L_2A40: { ++fl.t; const v4u uv = vsubd(n6, n4); { std::uint8_t *q = qword(mem, i5 + 0u); const std::uint32_t v = i1; std::memcpy(q + 8, &v, 4); } vstore(r.vf[6], uv); fl.stick<15u, kSticky>(uv); n6 = uv; }
L_2A48: { ++fl.t; const v4u uv = vsubd(n8, n5); set_vi(i3, i3 + 1u); vstore(r.vf[8], uv); fl.stick<15u, kSticky>(uv); n8 = uv; }
L_2A50: { ++fl.t; const v4u uv = vmuld(n3, vsplat(n1[2])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[10].w[0], r.vf[7].w[0]); fl.end_q(r, qb, 7u); } vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n10 = vsel(n10, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2A58: { ++fl.t; const v4u uv = vmuld(n3, vsplat(n2[2])); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2A60: { ++fl.t; const v4u uv = vmuld(n9, n2); vstore(r.vf[11], vsel(vload(r.vf[11]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n11 = vsel(n11, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2A68: { ++fl.t; const v4u uv = vmuld(n9, n1); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2A70: { ++fl.t; const v4u uv = vmuld(n10, vfix(vsplat(r.i))); vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n10 = vsel(n10, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2A78: { ++fl.t; const v4u uv = vaddd(n11, n7); fl.flush_q(r); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2A80: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_2A88: { ++fl.t; const v4u uv = vsubd(n10, n9); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2A90: { ++fl.t; const v4u uv = vmuld(n7, vsplat(n2[3])); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<7u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_2A98: { ++fl.t; const v4u uv = vmuld(n8, vsplat(n2[3])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[9].w[0], r.vf[7].w[0]); fl.end_q(r, qb, 7u); } vstore(r.vf[8], uv); fl.stick<15u, kSticky>(uv); n8 = uv; }
L_2AA0: { ++fl.t; const v4u uv = vaddd(n3, n7); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<7u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_2AA8: { ++fl.t; const v4u uv = vaddd(n5, n8); fl.flush_q(r); vstore(r.vf[5], uv); fl.stick<15u, kSticky>(uv); n5 = uv; }
L_2AB0: { ++fl.t; fl.flush_q(r); vflushd(r.vf[3], v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { std::uint8_t *q = qword(mem, i1 + 1u); std::memcpy(q, &r.vf[3], 16); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_2AB8: { ++fl.t; vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vmuld(n2, vsplat(n3[3])); { std::uint8_t *q = qword(mem, i1 + 3u); std::memcpy(q, &r.vf[5], 16); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2AC0: { ++fl.t; const v4u uv = vmuld(n6, vsplat(n3[3])); vstore(r.vf[3], uv); fl.push<15u, kSticky>(uv); n3 = uv; }
L_2AC8: { ++fl.t; const v4u uv = vaddd(n1, n5); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2AD0: { ++fl.t; vflushd(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vaddd(n4, n3); { std::uint8_t *q = qword(mem, i1 + 0u); std::memcpy(q + 0, &r.vf[1].w[0], 4); std::memcpy(q + 4, &r.vf[1].w[1], 4); std::memcpy(q + 8, &r.vf[1].w[2], 4); } vstore(r.vf[4], uv); fl.push<15u, kSticky>(uv); n4 = uv; }
L_2AD8: { ++fl.t; pend = 0u == i9; }
L_2AE0: { ++fl.t; vflushd(r.vf[4], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i1 + 2u); std::memcpy(q, &r.vf[4], 16); } }
    if (pend) { pend = false; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_2D30; }
L_2AE8: { ++fl.t; set_vi(i9, i9 - 1u); }
L_2AF0: { ++fl.t; set_vi(i5, 0u + i6); }
L_2AF8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_2B00: { ++fl.t; pend = 0u != i9; }
L_2B08: { ++fl.t; set_vi(i7, i7 + 1u); }
    if (pend) { pend = false; vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_2B78; }
L_2B10: { ++fl.t; pend = true; }
L_2B18: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_2B78; }
    vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); 
L_2B20: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(&r.vf[4], q, 16); } n4 = vshadow(r.vf[4]); }
L_2B28: { ++fl.t; vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_2B30: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_2B38: { ++fl.t; pend = 0u == i9; }
L_2B40: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
    if (pend) { pend = false; goto L_2D30; }
L_2B48: { ++fl.t; set_vi(i9, i9 - 1u); }
L_2B50: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_2B58: { ++fl.t; pend = 0u != i9; }
L_2B60: { ++fl.t; set_vi(i7, i7 + 1u); }
    if (pend) { pend = false; goto L_29B8; }
L_2B68: { ++fl.t; pend = true; }
L_2B70: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; goto L_29B8; }
L_2B78: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_2B80: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2B88: { ++fl.t; }
L_2B90: { ++fl.t; }
L_2B98: { ++fl.t; }
L_2BA0: { ++fl.t; set_vi(i1, (fl.clip() & 2u) ? 1u : 0u); }
L_2BA8: { ++fl.t; pend = 0u != i1; }
L_2BB0: { ++fl.t; }
    if (pend) { pend = false; goto L_2C10; }
L_2BB8: { ++fl.t; set_vi(i1, i2 + i3); }
L_2BC0: { ++fl.t; set_vi(i3, i3 + 1u); }
L_2BC8: { ++fl.t; pend = 0u == i9; }
L_2BD0: { ++fl.t; { std::uint8_t *q = qword(mem, i1 + 0u); const std::uint32_t v = i5; std::memcpy(q + 8, &v, 4); } }
    if (pend) { pend = false; goto L_2D30; }
L_2BD8: { ++fl.t; set_vi(i9, i9 - 1u); }
L_2BE0: { ++fl.t; set_vi(i5, 0u + i6); }
L_2BE8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_2BF0: { ++fl.t; pend = 0u != i9; }
L_2BF8: { ++fl.t; set_vi(i7, i7 + 1u); }
    if (pend) { pend = false; goto L_2B78; }
L_2C00: { ++fl.t; pend = true; }
L_2C08: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; goto L_2B78; }
L_2C10: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n1[3])); { const std::uint8_t *q = qword(mem, i5 + 0u); vstore(r.vf[6], vsel(vload(r.vf[6]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n6 = vshadow(r.vf[6]); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2C18: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_2C20: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 38u); vstore(r.vf[11], vsel(vload(r.vf[11]), vload_ptr(q), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } n11 = vshadow(r.vf[11]); }
L_2C28: { ++fl.t; const v4u uv = vmuld(n3, vfix(vsplat(r.i))); { const std::uint8_t *q = qword(mem, i5 + 1u); std::memcpy(&r.vf[9], q, 16); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n9 = vshadow(r.vf[9]); n4 = vsel(n4, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2C30: { ++fl.t; vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_2C38: { ++fl.t; const v4u uv = vsubd(n1, n6); { const std::uint8_t *q = qword(mem, i5 + 2u); std::memcpy(&r.vf[2], q, 16); } vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n2 = vshadow(r.vf[2]); n7 = vsel(n7, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2C40: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 3u); std::memcpy(&r.vf[10], q, 16); } n10 = vshadow(r.vf[10]); }
L_2C48: { ++fl.t; vflushd(r.vf[4], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); const v4u uv = vsubd(n4, n9); vstore(r.vf[8], vsel(vload(r.vf[8]), vload(r.vf[4]), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); vstore(r.vf[13], vsel(vload(r.vf[13]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n8 = vshadow(r.vf[8]); n13 = vsel(n13, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2C50: { ++fl.t; const v4u uv = vsubd(n3, n9); { const std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(&r.vf[4], q, 16); } vstore(r.vf[12], uv); fl.stick<15u, kSticky>(uv); n4 = vshadow(r.vf[4]); n12 = uv; }
L_2C58: { ++fl.t; const v4u uv = vmuld(n11, n7); { const std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(&r.vf[5], q, 16); } vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n5 = vshadow(r.vf[5]); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2C60: { ++fl.t; const v4u uv = vmuld(n11, n6); set_vi(i1, i2 + i3); vstore(r.vf[18], vsel(vload(r.vf[18]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n18 = vsel(n18, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2C68: { ++fl.t; const v4u uv = vmuld(n8, vsplat(n6[2])); { std::uint8_t *q = qword(mem, i1 + 1u); const std::uint32_t v = i6; std::memcpy(q + 8, &v, 4); } vstore(r.vf[19], vsel(vload(r.vf[19]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n19 = vsel(n19, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2C70: { ++fl.t; const v4u uv = vmuld(n8, vsplat(n7[2])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[13].w[0], r.vf[12].w[0]); fl.end_q(r, qb, 7u); } vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n12 = vsel(n12, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2C78: { ++fl.t; const v4u uv = vsubd(n4, n2); { std::uint8_t *q = qword(mem, i1 + 0u); const std::uint32_t v = i5; std::memcpy(q + 8, &v, 4); } vstore(r.vf[11], uv); fl.stick<15u, kSticky>(uv); n11 = uv; }
L_2C80: { ++fl.t; const v4u uv = vsubd(n5, n10); set_vi(i3, i3 + 2u); vstore(r.vf[13], uv); fl.stick<15u, kSticky>(uv); n13 = uv; }
L_2C88: { ++fl.t; const v4u uv = vmuld(n19, vfix(vsplat(r.i))); vstore(r.vf[19], vsel(vload(r.vf[19]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n19 = vsel(n19, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2C90: { ++fl.t; const v4u uv = vaddd(n9, n12); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2C98: { ++fl.t; const v4u uv = vsubd(n19, n18); fl.flush_q(r); vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n12 = vsel(n12, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2CA0: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[12].w[0], r.vf[9].w[0]); fl.end_q(r, qb, 7u); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_2CA8: { ++fl.t; const v4u uv = vmuld(n12, vsplat(n6[3])); vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<7u, kSticky>(uv); n8 = vsel(n8, uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_2CB0: { ++fl.t; const v4u uv = vmuld(n13, vsplat(n6[3])); vstore(r.vf[12], uv); fl.stick<15u, kSticky>(uv); n12 = uv; }
L_2CB8: { ++fl.t; const v4u uv = vaddd(n9, n8); vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<7u, kSticky>(uv); n8 = vsel(n8, uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_2CC0: { ++fl.t; const v4u uv = vaddd(n10, n12); fl.flush_q(r); vstore(r.vf[9], uv); fl.stick<15u, kSticky>(uv); n9 = uv; }
L_2CC8: { ++fl.t; fl.flush_q(r); vflushd(r.vf[8], v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(q, &r.vf[8], 16); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_2CD0: { ++fl.t; vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vmuld(n7, vsplat(n6[3])); { std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(q, &r.vf[9], 16); } vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2CD8: { ++fl.t; const v4u uv = vmuld(n11, vsplat(n6[3])); vstore(r.vf[11], uv); fl.push<15u, kSticky>(uv); n11 = uv; }
L_2CE0: { ++fl.t; const v4u uv = vaddd(n6, n9); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2CE8: { ++fl.t; vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vaddd(n2, n11); { std::uint8_t *q = qword(mem, i6 + 0u); std::memcpy(q + 0, &r.vf[6].w[0], 4); std::memcpy(q + 4, &r.vf[6].w[1], 4); std::memcpy(q + 8, &r.vf[6].w[2], 4); } vstore(r.vf[2], uv); fl.push<15u, kSticky>(uv); n2 = uv; }
L_2CF0: { ++fl.t; pend = 0u == i9; }
L_2CF8: { ++fl.t; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(q, &r.vf[2], 16); } }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[19], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_2D30; }
L_2D00: { ++fl.t; set_vi(i9, i9 - 1u); }
L_2D08: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_2D10: { ++fl.t; pend = 0u != i9; }
L_2D18: { ++fl.t; set_vi(i7, i7 + 1u); }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[19], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_29B8; }
L_2D20: { ++fl.t; pend = true; }
L_2D28: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[19], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_29B8; }
    vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[19], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); 
L_2D30: { ++fl.t; pend = 0u == i3; }
L_2D38: { ++fl.t; }
    if (pend) { pend = false; goto L_3568; }
L_2D40: { ++fl.t; set_vi(i4, 0u + 0u); }
L_2D48: { ++fl.t; set_vi(i6, 0u + i4); }
L_2D50: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i6 + 0u) + 8, 2); set_vi(i5, v); } }
L_2D58: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 44u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } n1 = vshadow(r.vf[1]); }
L_2D60: { ++fl.t; set_vi(i6, i6 + 1u); }
L_2D68: { ++fl.t; set_vi(i9, 0u + i3); }
L_2D70: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_2D78: { ++fl.t; set_vi(i7, i6 + 1u); }
L_2D80: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i6 + 0u) + 8, 2); set_vi(i6, v); } }
L_2D88: { ++fl.t; set_vi(i3, 0u + 0u); }
L_2D90: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); set_vi(i2, 0u + 7u); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2D98: { ++fl.t; set_vi(i9, i9 - 1u); }
L_2DA0: { ++fl.t; }
L_2DA8: { ++fl.t; }
L_2DB0: { ++fl.t; set_vi(i1, (fl.clip() & 4u) ? 1u : 0u); }
L_2DB8: { ++fl.t; pend = 0u == i1; }
L_2DC0: { ++fl.t; }
    if (pend) { pend = false; goto L_2F90; }
L_2DC8: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 2u); std::memcpy(&r.vf[4], q, 16); } n4 = vshadow(r.vf[4]); }
L_2DD0: { ++fl.t; vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_2DD8: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_2DE0: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 3u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
L_2DE8: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_2DF0: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2DF8: { ++fl.t; }
L_2E00: { ++fl.t; }
L_2E08: { ++fl.t; }
L_2E10: { ++fl.t; set_vi(i1, (fl.clip() & 4u) ? 1u : 0u); }
L_2E18: { ++fl.t; pend = 0u != i1; }
L_2E20: { ++fl.t; }
    if (pend) { pend = false; goto L_2F38; }
L_2E28: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n1[3])); { const std::uint8_t *q = qword(mem, i6 + 0u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n2 = vshadow(r.vf[2]); n9 = vsel(n9, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2E30: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(&r.vf[7], q, 16); } n7 = vshadow(r.vf[7]); }
L_2E38: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 38u); vstore(r.vf[10], vsel(vload(r.vf[10]), vload_ptr(q), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); } n10 = vshadow(r.vf[10]); }
L_2E40: { ++fl.t; vflushd(r.vf[9], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); const v4u uv = vsubd(n2, n1); vstore(r.vf[6], vsel(vload(r.vf[6]), vload(r.vf[9]), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n6 = vshadow(r.vf[6]); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2E48: { ++fl.t; const v4u uv = vsubd(n7, n3); { const std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(&r.vf[7], q, 16); } vstore(r.vf[8], uv); fl.stick<15u, kSticky>(uv); n7 = vshadow(r.vf[7]); n8 = uv; }
L_2E50: { ++fl.t; const v4u uv = vsubd(n9, n3); { const std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(&r.vf[9], q, 16); } vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n9 = vshadow(r.vf[9]); n12 = vsel(n12, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2E58: { ++fl.t; const v4u uv = vmuld(n10, n1); set_vi(i1, 0u + i8); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2E60: { ++fl.t; const v4u uv = vmuld(n6, vsplat(n1[2])); set_vi(i8, i8 + 4u); vstore(r.vf[11], vsel(vload(r.vf[11]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n11 = vsel(n11, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2E68: { ++fl.t; const v4u uv = vmuld(n10, n2); set_vi(i5, i2 + i3); vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n10 = vsel(n10, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2E70: { ++fl.t; const v4u uv = vmuld(n6, vsplat(n2[2])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[12].w[1], r.vf[8].w[1]); fl.end_q(r, qb, 7u); } vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n8 = vsel(n8, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2E78: { ++fl.t; const v4u uv = vsubd(n7, n4); { std::uint8_t *q = qword(mem, i5 + 0u); const std::uint32_t v = i1; std::memcpy(q + 8, &v, 4); } vstore(r.vf[7], uv); fl.stick<15u, kSticky>(uv); n7 = uv; }
L_2E80: { ++fl.t; const v4u uv = vmuld(n11, vfix(vsplat(r.i))); set_vi(i3, i3 + 1u); vstore(r.vf[11], vsel(vload(r.vf[11]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n11 = vsel(n11, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2E88: { ++fl.t; const v4u uv = vsubd(n9, n5); vstore(r.vf[9], uv); fl.stick<15u, kSticky>(uv); n9 = uv; }
L_2E90: { ++fl.t; const v4u uv = vaddd(n10, n8); vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n8 = vsel(n8, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2E98: { ++fl.t; const v4u uv = vsubd(n11, n3); fl.flush_q(r); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2EA0: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[3].w[1], r.vf[8].w[1]); fl.end_q(r, qb, 7u); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_2EA8: { ++fl.t; const v4u uv = vmuld(n8, vsplat(n2[3])); vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<11u, kSticky>(uv); n8 = vsel(n8, uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_2EB0: { ++fl.t; const v4u uv = vmuld(n9, vsplat(n2[3])); vstore(r.vf[9], uv); fl.stick<15u, kSticky>(uv); n9 = uv; }
L_2EB8: { ++fl.t; const v4u uv = vaddd(n3, n8); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<11u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_2EC0: { ++fl.t; const v4u uv = vaddd(n5, n9); fl.flush_q(r); vstore(r.vf[3], uv); fl.stick<15u, kSticky>(uv); n3 = uv; }
L_2EC8: { ++fl.t; fl.flush_q(r); vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { std::uint8_t *q = qword(mem, i1 + 1u); std::memcpy(q, &r.vf[6], 16); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_2ED0: { ++fl.t; vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vmuld(n2, vsplat(n5[3])); { std::uint8_t *q = qword(mem, i1 + 3u); std::memcpy(q, &r.vf[3], 16); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2ED8: { ++fl.t; const v4u uv = vmuld(n7, vsplat(n5[3])); vstore(r.vf[5], uv); fl.push<15u, kSticky>(uv); n5 = uv; }
L_2EE0: { ++fl.t; const v4u uv = vaddd(n1, n3); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2EE8: { ++fl.t; vflushd(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vaddd(n4, n5); { std::uint8_t *q = qword(mem, i1 + 0u); std::memcpy(q + 0, &r.vf[1].w[0], 4); std::memcpy(q + 4, &r.vf[1].w[1], 4); std::memcpy(q + 8, &r.vf[1].w[2], 4); } vstore(r.vf[4], uv); fl.push<15u, kSticky>(uv); n4 = uv; }
L_2EF0: { ++fl.t; pend = 0u == i9; }
L_2EF8: { ++fl.t; vflushd(r.vf[4], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i1 + 2u); std::memcpy(q, &r.vf[4], 16); } }
    if (pend) { pend = false; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[11], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[12], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_3138; }
L_2F00: { ++fl.t; set_vi(i9, i9 - 1u); }
L_2F08: { ++fl.t; set_vi(i5, 0u + i6); }
L_2F10: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_2F18: { ++fl.t; pend = 0u != i9; }
L_2F20: { ++fl.t; set_vi(i7, i7 + 1u); }
    if (pend) { pend = false; vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[11], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[12], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_2F90; }
L_2F28: { ++fl.t; pend = true; }
L_2F30: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[11], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[12], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_2F90; }
    vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[11], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[12], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); 
L_2F38: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(&r.vf[4], q, 16); } n4 = vshadow(r.vf[4]); }
L_2F40: { ++fl.t; vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_2F48: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_2F50: { ++fl.t; pend = 0u == i9; }
L_2F58: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
    if (pend) { pend = false; goto L_3138; }
L_2F60: { ++fl.t; set_vi(i9, i9 - 1u); }
L_2F68: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_2F70: { ++fl.t; pend = 0u != i9; }
L_2F78: { ++fl.t; set_vi(i7, i7 + 1u); }
    if (pend) { pend = false; goto L_2DE8; }
L_2F80: { ++fl.t; pend = true; }
L_2F88: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; goto L_2DE8; }
L_2F90: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_2F98: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2FA0: { ++fl.t; }
L_2FA8: { ++fl.t; }
L_2FB0: { ++fl.t; }
L_2FB8: { ++fl.t; set_vi(i1, (fl.clip() & 4u) ? 1u : 0u); }
L_2FC0: { ++fl.t; pend = 0u != i1; }
L_2FC8: { ++fl.t; }
    if (pend) { pend = false; goto L_3028; }
L_2FD0: { ++fl.t; set_vi(i1, i2 + i3); }
L_2FD8: { ++fl.t; set_vi(i3, i3 + 1u); }
L_2FE0: { ++fl.t; pend = 0u == i9; }
L_2FE8: { ++fl.t; { std::uint8_t *q = qword(mem, i1 + 0u); const std::uint32_t v = i5; std::memcpy(q + 8, &v, 4); } }
    if (pend) { pend = false; goto L_3138; }
L_2FF0: { ++fl.t; set_vi(i9, i9 - 1u); }
L_2FF8: { ++fl.t; set_vi(i5, 0u + i6); }
L_3000: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_3008: { ++fl.t; pend = 0u != i9; }
L_3010: { ++fl.t; set_vi(i7, i7 + 1u); }
    if (pend) { pend = false; goto L_2F90; }
L_3018: { ++fl.t; pend = true; }
L_3020: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; goto L_2F90; }
L_3028: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n1[3])); { const std::uint8_t *q = qword(mem, i5 + 0u); vstore(r.vf[6], vsel(vload(r.vf[6]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n6 = vshadow(r.vf[6]); n4 = vsel(n4, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3030: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_3038: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 1u); std::memcpy(&r.vf[9], q, 16); } n9 = vshadow(r.vf[9]); }
L_3040: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 38u); vstore(r.vf[5], vsel(vload(r.vf[5]), vload_ptr(q), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); } n5 = vshadow(r.vf[5]); }
L_3048: { ++fl.t; vflushd(r.vf[4], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); const v4u uv = vsubd(n1, n6); vstore(r.vf[7], vsel(vload(r.vf[7]), vload(r.vf[4]), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n7 = vshadow(r.vf[7]); n8 = vsel(n8, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3050: { ++fl.t; const v4u uv = vsubd(n4, n9); vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); vstore(r.vf[11], vsel(vload(r.vf[11]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n3 = vshadow(r.vf[3]); n11 = vsel(n11, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3058: { ++fl.t; const v4u uv = vmuld(n5, n6); { const std::uint8_t *q = qword(mem, i5 + 3u); std::memcpy(&r.vf[10], q, 16); } vstore(r.vf[18], vsel(vload(r.vf[18]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n10 = vshadow(r.vf[10]); n18 = vsel(n18, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3060: { ++fl.t; const v4u uv = vmuld(n7, vsplat(n6[2])); { const std::uint8_t *q = qword(mem, i5 + 2u); std::memcpy(&r.vf[2], q, 16); } vstore(r.vf[13], vsel(vload(r.vf[13]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n2 = vshadow(r.vf[2]); n13 = vsel(n13, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3068: { ++fl.t; const v4u uv = vsubd(n3, n9); { const std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(&r.vf[4], q, 16); } vstore(r.vf[12], uv); fl.stick<15u, kSticky>(uv); n4 = vshadow(r.vf[4]); n12 = uv; }
L_3070: { ++fl.t; const v4u uv = vmuld(n5, n8); { const std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(&r.vf[5], q, 16); } vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n5 = vshadow(r.vf[5]); n9 = vsel(n9, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3078: { ++fl.t; const v4u uv = vmuld(n7, vsplat(n8[2])); set_vi(i1, i2 + i3); vstore(r.vf[23], vsel(vload(r.vf[23]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n23 = vsel(n23, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3080: { ++fl.t; const v4u uv = vmuld(n13, vfix(vsplat(r.i))); { std::uint8_t *q = qword(mem, i1 + 1u); const std::uint32_t v = i6; std::memcpy(q + 8, &v, 4); } vstore(r.vf[19], vsel(vload(r.vf[19]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n19 = vsel(n19, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3088: { ++fl.t; const v4u uv = vsubd(n4, n2); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[11].w[1], r.vf[12].w[1]); fl.end_q(r, qb, 7u); } vstore(r.vf[11], uv); fl.stick<15u, kSticky>(uv); n11 = uv; }
L_3090: { ++fl.t; const v4u uv = vsubd(n5, n10); { std::uint8_t *q = qword(mem, i1 + 0u); const std::uint32_t v = i5; std::memcpy(q + 8, &v, 4); } vstore(r.vf[13], uv); fl.stick<15u, kSticky>(uv); n13 = uv; }
L_3098: { ++fl.t; const v4u uv = vaddd(n9, n23); set_vi(i3, i3 + 2u); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_30A0: { ++fl.t; const v4u uv = vsubd(n19, n18); fl.flush_q(r); vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n12 = vsel(n12, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_30A8: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[12].w[1], r.vf[9].w[1]); fl.end_q(r, qb, 7u); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_30B0: { ++fl.t; const v4u uv = vmuld(n12, vsplat(n6[3])); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<11u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_30B8: { ++fl.t; const v4u uv = vmuld(n13, vsplat(n6[3])); fl.flush_q(r); vstore(r.vf[12], uv); fl.stick<15u, kSticky>(uv); n12 = uv; }
L_30C0: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_30C8: { ++fl.t; const v4u uv = vaddd(n9, n7); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<11u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_30D0: { ++fl.t; const v4u uv = vaddd(n10, n12); vstore(r.vf[12], uv); fl.stick<15u, kSticky>(uv); n12 = uv; }
L_30D8: { ++fl.t; const v4u uv = vmuld(n8, vsplat(n6[3])); vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n10 = vsel(n10, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_30E0: { ++fl.t; vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vmuld(n11, vsplat(n6[3])); { std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(q, &r.vf[7], 16); } vstore(r.vf[9], uv); fl.push<15u, kSticky>(uv); n9 = uv; }
L_30E8: { ++fl.t; vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vaddd(n6, n10); { std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(q, &r.vf[12], 16); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_30F0: { ++fl.t; vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vaddd(n2, n9); { std::uint8_t *q = qword(mem, i6 + 0u); std::memcpy(q + 0, &r.vf[6].w[0], 4); std::memcpy(q + 4, &r.vf[6].w[1], 4); std::memcpy(q + 8, &r.vf[6].w[2], 4); } vstore(r.vf[2], uv); fl.push<15u, kSticky>(uv); n2 = uv; }
L_30F8: { ++fl.t; pend = 0u == i9; }
L_3100: { ++fl.t; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(q, &r.vf[2], 16); } }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[19], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[23], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_3138; }
L_3108: { ++fl.t; set_vi(i9, i9 - 1u); }
L_3110: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_3118: { ++fl.t; pend = 0u != i9; }
L_3120: { ++fl.t; set_vi(i7, i7 + 1u); }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[19], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[23], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_2DE8; }
L_3128: { ++fl.t; pend = true; }
L_3130: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[19], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[23], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_2DE8; }
    vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[19], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[23], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); 
L_3138: { ++fl.t; pend = 0u == i3; }
L_3140: { ++fl.t; }
    if (pend) { pend = false; goto L_3568; }
L_3148: { ++fl.t; set_vi(i4, 0u + 7u); }
L_3150: { ++fl.t; set_vi(i6, 0u + i4); }
L_3158: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i6 + 0u) + 8, 2); set_vi(i5, v); } }
L_3160: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 44u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } n1 = vshadow(r.vf[1]); }
L_3168: { ++fl.t; set_vi(i6, i6 + 1u); }
L_3170: { ++fl.t; set_vi(i9, 0u + i3); }
L_3178: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_3180: { ++fl.t; set_vi(i7, i6 + 1u); }
L_3188: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i6 + 0u) + 8, 2); set_vi(i6, v); } }
L_3190: { ++fl.t; set_vi(i3, 0u + 0u); }
L_3198: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); set_vi(i2, 0u + 0u); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_31A0: { ++fl.t; set_vi(i9, i9 - 1u); }
L_31A8: { ++fl.t; }
L_31B0: { ++fl.t; }
L_31B8: { ++fl.t; set_vi(i1, (fl.clip() & 8u) ? 1u : 0u); }
L_31C0: { ++fl.t; pend = 0u == i1; }
L_31C8: { ++fl.t; }
    if (pend) { pend = false; goto L_33B0; }
L_31D0: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 2u); std::memcpy(&r.vf[4], q, 16); } n4 = vshadow(r.vf[4]); }
L_31D8: { ++fl.t; vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_31E0: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_31E8: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 3u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
L_31F0: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_31F8: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_3200: { ++fl.t; }
L_3208: { ++fl.t; }
L_3210: { ++fl.t; }
L_3218: { ++fl.t; set_vi(i1, (fl.clip() & 8u) ? 1u : 0u); }
L_3220: { ++fl.t; pend = 0u != i1; }
L_3228: { ++fl.t; }
    if (pend) { pend = false; goto L_3358; }
L_3230: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n1[3])); { const std::uint8_t *q = qword(mem, i6 + 0u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n2 = vshadow(r.vf[2]); n6 = vsel(n6, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3238: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(&r.vf[7], q, 16); } n7 = vshadow(r.vf[7]); }
L_3240: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 38u); vstore(r.vf[9], vsel(vload(r.vf[9]), vload_ptr(q), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); } n9 = vshadow(r.vf[9]); }
L_3248: { ++fl.t; const v4u uv = vmuld(n6, vfix(vsplat(r.i))); { const std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(&r.vf[6], q, 16); } vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n6 = vshadow(r.vf[6]); n10 = vsel(n10, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3250: { ++fl.t; const v4u uv = vsubd(n2, n1); { const std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(&r.vf[8], q, 16); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n8 = vshadow(r.vf[8]); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3258: { ++fl.t; const v4u uv = vsubd(n7, n3); set_vi(i1, 0u + i8); vstore(r.vf[7], uv); fl.stick<15u, kSticky>(uv); n7 = uv; }
L_3260: { ++fl.t; set_vi(i8, i8 + 4u); }
L_3268: { ++fl.t; vflushd(r.vf[10], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); const v4u uv = vsubd(n10, n3); vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[10]), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n3 = vshadow(r.vf[3]); n10 = vsel(n10, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3270: { ++fl.t; set_vi(i5, i2 + i3); }
L_3278: { ++fl.t; const v4u uv = vsubd(n6, n4); { std::uint8_t *q = qword(mem, i5 + 0u); const std::uint32_t v = i1; std::memcpy(q + 8, &v, 4); } vstore(r.vf[6], uv); fl.stick<15u, kSticky>(uv); n6 = uv; }
L_3280: { ++fl.t; const v4u uv = vsubd(n8, n5); set_vi(i3, i3 + 1u); vstore(r.vf[8], uv); fl.stick<15u, kSticky>(uv); n8 = uv; }
L_3288: { ++fl.t; const v4u uv = vmuld(n3, vsplat(n1[2])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[10].w[1], r.vf[7].w[1]); fl.end_q(r, qb, 7u); } vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n10 = vsel(n10, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3290: { ++fl.t; const v4u uv = vmuld(n3, vsplat(n2[2])); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3298: { ++fl.t; const v4u uv = vmuld(n9, n2); vstore(r.vf[11], vsel(vload(r.vf[11]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n11 = vsel(n11, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_32A0: { ++fl.t; const v4u uv = vmuld(n9, n1); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_32A8: { ++fl.t; const v4u uv = vmuld(n10, vfix(vsplat(r.i))); vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n10 = vsel(n10, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_32B0: { ++fl.t; const v4u uv = vaddd(n11, n7); fl.flush_q(r); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_32B8: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_32C0: { ++fl.t; const v4u uv = vsubd(n10, n9); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_32C8: { ++fl.t; const v4u uv = vmuld(n7, vsplat(n2[3])); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<11u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_32D0: { ++fl.t; const v4u uv = vmuld(n8, vsplat(n2[3])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[9].w[1], r.vf[7].w[1]); fl.end_q(r, qb, 7u); } vstore(r.vf[8], uv); fl.stick<15u, kSticky>(uv); n8 = uv; }
L_32D8: { ++fl.t; const v4u uv = vaddd(n3, n7); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<11u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_32E0: { ++fl.t; const v4u uv = vaddd(n5, n8); fl.flush_q(r); vstore(r.vf[5], uv); fl.stick<15u, kSticky>(uv); n5 = uv; }
L_32E8: { ++fl.t; fl.flush_q(r); vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { std::uint8_t *q = qword(mem, i1 + 1u); std::memcpy(q, &r.vf[3], 16); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_32F0: { ++fl.t; vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vmuld(n2, vsplat(n3[3])); { std::uint8_t *q = qword(mem, i1 + 3u); std::memcpy(q, &r.vf[5], 16); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_32F8: { ++fl.t; const v4u uv = vmuld(n6, vsplat(n3[3])); vstore(r.vf[3], uv); fl.push<15u, kSticky>(uv); n3 = uv; }
L_3300: { ++fl.t; const v4u uv = vaddd(n1, n5); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3308: { ++fl.t; vflushd(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vaddd(n4, n3); { std::uint8_t *q = qword(mem, i1 + 0u); std::memcpy(q + 0, &r.vf[1].w[0], 4); std::memcpy(q + 4, &r.vf[1].w[1], 4); std::memcpy(q + 8, &r.vf[1].w[2], 4); } vstore(r.vf[4], uv); fl.push<15u, kSticky>(uv); n4 = uv; }
L_3310: { ++fl.t; pend = 0u == i9; }
L_3318: { ++fl.t; vflushd(r.vf[4], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i1 + 2u); std::memcpy(q, &r.vf[4], 16); } }
    if (pend) { pend = false; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[10], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[11], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_3568; }
L_3320: { ++fl.t; set_vi(i9, i9 - 1u); }
L_3328: { ++fl.t; set_vi(i5, 0u + i6); }
L_3330: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_3338: { ++fl.t; pend = 0u != i9; }
L_3340: { ++fl.t; set_vi(i7, i7 + 1u); }
    if (pend) { pend = false; vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[10], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[11], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_33B0; }
L_3348: { ++fl.t; pend = true; }
L_3350: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[10], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[11], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_33B0; }
    vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[10], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[11], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); 
L_3358: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(&r.vf[4], q, 16); } n4 = vshadow(r.vf[4]); }
L_3360: { ++fl.t; vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_3368: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_3370: { ++fl.t; pend = 0u == i9; }
L_3378: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
    if (pend) { pend = false; goto L_3568; }
L_3380: { ++fl.t; set_vi(i9, i9 - 1u); }
L_3388: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_3390: { ++fl.t; pend = 0u != i9; }
L_3398: { ++fl.t; set_vi(i7, i7 + 1u); }
    if (pend) { pend = false; goto L_31F0; }
L_33A0: { ++fl.t; pend = true; }
L_33A8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; goto L_31F0; }
L_33B0: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_33B8: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_33C0: { ++fl.t; }
L_33C8: { ++fl.t; }
L_33D0: { ++fl.t; }
L_33D8: { ++fl.t; set_vi(i1, (fl.clip() & 8u) ? 1u : 0u); }
L_33E0: { ++fl.t; pend = 0u != i1; }
L_33E8: { ++fl.t; }
    if (pend) { pend = false; goto L_3448; }
L_33F0: { ++fl.t; set_vi(i1, i2 + i3); }
L_33F8: { ++fl.t; set_vi(i3, i3 + 1u); }
L_3400: { ++fl.t; pend = 0u == i9; }
L_3408: { ++fl.t; { std::uint8_t *q = qword(mem, i1 + 0u); const std::uint32_t v = i5; std::memcpy(q + 8, &v, 4); } }
    if (pend) { pend = false; goto L_3568; }
L_3410: { ++fl.t; set_vi(i9, i9 - 1u); }
L_3418: { ++fl.t; set_vi(i5, 0u + i6); }
L_3420: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_3428: { ++fl.t; pend = 0u != i9; }
L_3430: { ++fl.t; set_vi(i7, i7 + 1u); }
    if (pend) { pend = false; goto L_33B0; }
L_3438: { ++fl.t; pend = true; }
L_3440: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; goto L_33B0; }
L_3448: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n1[3])); { const std::uint8_t *q = qword(mem, i5 + 0u); vstore(r.vf[6], vsel(vload(r.vf[6]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n6 = vshadow(r.vf[6]); n3 = vsel(n3, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3450: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_3458: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 38u); vstore(r.vf[11], vsel(vload(r.vf[11]), vload_ptr(q), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); } n11 = vshadow(r.vf[11]); }
L_3460: { ++fl.t; const v4u uv = vmuld(n3, vfix(vsplat(r.i))); { const std::uint8_t *q = qword(mem, i5 + 1u); std::memcpy(&r.vf[9], q, 16); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n9 = vshadow(r.vf[9]); n4 = vsel(n4, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3468: { ++fl.t; vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_3470: { ++fl.t; const v4u uv = vsubd(n1, n6); { const std::uint8_t *q = qword(mem, i5 + 2u); std::memcpy(&r.vf[2], q, 16); } vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n2 = vshadow(r.vf[2]); n7 = vsel(n7, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3478: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 3u); std::memcpy(&r.vf[10], q, 16); } n10 = vshadow(r.vf[10]); }
L_3480: { ++fl.t; vflushd(r.vf[4], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); const v4u uv = vsubd(n4, n9); vstore(r.vf[8], vsel(vload(r.vf[8]), vload(r.vf[4]), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); vstore(r.vf[13], vsel(vload(r.vf[13]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n8 = vshadow(r.vf[8]); n13 = vsel(n13, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3488: { ++fl.t; const v4u uv = vsubd(n3, n9); { const std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(&r.vf[4], q, 16); } vstore(r.vf[12], uv); fl.stick<15u, kSticky>(uv); n4 = vshadow(r.vf[4]); n12 = uv; }
L_3490: { ++fl.t; const v4u uv = vmuld(n11, n7); { const std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(&r.vf[5], q, 16); } vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n5 = vshadow(r.vf[5]); n9 = vsel(n9, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3498: { ++fl.t; const v4u uv = vmuld(n11, n6); set_vi(i1, i2 + i3); vstore(r.vf[18], vsel(vload(r.vf[18]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n18 = vsel(n18, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_34A0: { ++fl.t; const v4u uv = vmuld(n8, vsplat(n6[2])); { std::uint8_t *q = qword(mem, i1 + 1u); const std::uint32_t v = i6; std::memcpy(q + 8, &v, 4); } vstore(r.vf[19], vsel(vload(r.vf[19]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n19 = vsel(n19, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_34A8: { ++fl.t; const v4u uv = vmuld(n8, vsplat(n7[2])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[13].w[1], r.vf[12].w[1]); fl.end_q(r, qb, 7u); } vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n12 = vsel(n12, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_34B0: { ++fl.t; const v4u uv = vsubd(n4, n2); { std::uint8_t *q = qword(mem, i1 + 0u); const std::uint32_t v = i5; std::memcpy(q + 8, &v, 4); } vstore(r.vf[11], uv); fl.stick<15u, kSticky>(uv); n11 = uv; }
L_34B8: { ++fl.t; const v4u uv = vsubd(n5, n10); set_vi(i3, i3 + 2u); vstore(r.vf[13], uv); fl.stick<15u, kSticky>(uv); n13 = uv; }
L_34C0: { ++fl.t; const v4u uv = vmuld(n19, vfix(vsplat(r.i))); vstore(r.vf[19], vsel(vload(r.vf[19]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n19 = vsel(n19, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_34C8: { ++fl.t; const v4u uv = vaddd(n9, n12); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_34D0: { ++fl.t; const v4u uv = vsubd(n19, n18); fl.flush_q(r); vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n12 = vsel(n12, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_34D8: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[12].w[1], r.vf[9].w[1]); fl.end_q(r, qb, 7u); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_34E0: { ++fl.t; const v4u uv = vmuld(n12, vsplat(n6[3])); vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<11u, kSticky>(uv); n8 = vsel(n8, uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_34E8: { ++fl.t; const v4u uv = vmuld(n13, vsplat(n6[3])); vstore(r.vf[12], uv); fl.stick<15u, kSticky>(uv); n12 = uv; }
L_34F0: { ++fl.t; const v4u uv = vaddd(n9, n8); vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<11u, kSticky>(uv); n8 = vsel(n8, uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_34F8: { ++fl.t; const v4u uv = vaddd(n10, n12); fl.flush_q(r); vstore(r.vf[9], uv); fl.stick<15u, kSticky>(uv); n9 = uv; }
L_3500: { ++fl.t; fl.flush_q(r); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(q, &r.vf[8], 16); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_3508: { ++fl.t; vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vmuld(n7, vsplat(n6[3])); { std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(q, &r.vf[9], 16); } vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3510: { ++fl.t; const v4u uv = vmuld(n11, vsplat(n6[3])); vstore(r.vf[11], uv); fl.push<15u, kSticky>(uv); n11 = uv; }
L_3518: { ++fl.t; const v4u uv = vaddd(n6, n9); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3520: { ++fl.t; vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vaddd(n2, n11); { std::uint8_t *q = qword(mem, i6 + 0u); std::memcpy(q + 0, &r.vf[6].w[0], 4); std::memcpy(q + 4, &r.vf[6].w[1], 4); std::memcpy(q + 8, &r.vf[6].w[2], 4); } vstore(r.vf[2], uv); fl.push<15u, kSticky>(uv); n2 = uv; }
L_3528: { ++fl.t; pend = 0u == i9; }
L_3530: { ++fl.t; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(q, &r.vf[2], 16); } }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[19], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_3568; }
L_3538: { ++fl.t; set_vi(i9, i9 - 1u); }
L_3540: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_3548: { ++fl.t; pend = 0u != i9; }
L_3550: { ++fl.t; set_vi(i7, i7 + 1u); }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[19], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_31F0; }
L_3558: { ++fl.t; pend = true; }
L_3560: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[19], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_31F0; }
    vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[19], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); 
L_3568: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_3570: { ++fl.t; }
    if (pendj) { pendj = false; vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
    vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[14] = i14; r.vi[15] = i15; vhop(hop, ((13688u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[14] = i14; r.vi[15] = i15; vhop(hop, jpc);
    return;
}
static __attribute__((noinline, cold)) void vu1_167699303484A4A8_c(Vu0Regs &r, std::uint8_t *mem, VuDaz &daz, std::uint32_t &hop) { vu1_167699303484A4A8_b<true>(r, mem, daz, hop); }
void vu1_167699303484A4A8(Vu0Regs &r, std::uint8_t *mem) {
    std::uint32_t hop = kNoHop;
    {
        VuDaz daz;
        if ((r.status & 0xC0u) == 0xC0u) vu1_167699303484A4A8_b<false>(r, mem, daz, hop);
        else vu1_167699303484A4A8_c(r, mem, daz, hop);
    }
    if (hop != kNoHop) vu::interpret(1, hop);
}

template <bool kSticky>
static void vu1_2D84F84D31FEFFBE_s(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 128u) & 16383u;
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
    goto L_0080;
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
    if (pend) { pend = false; goto L_17F0; }
L_00F8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 12, 2); set_vi(i8, v); } }
L_0100: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0108: { ++fl.t; set_vi(i15, (((264u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0110: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 4, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0C20; }
L_0118: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0120: { ++fl.t; set_vi(i15, (((288u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0128: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_0FD8; }
L_0130: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0138: { ++fl.t; set_vi(i15, (((312u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0140: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 37u) + 0, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0F30; }
L_0148: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0150: { ++fl.t; set_vi(i15, (((336u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0158: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_13F0; }
L_0160: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0168: { ++fl.t; set_vi(i15, (((360u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0170: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_1128; }
L_0178: { ++fl.t; set_vi(i1, 0u + 66u); }
L_0180: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 45u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } }
L_0188: { ++fl.t; set_vi(i15, (((392u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0190: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
    if (pend) { pend = false; goto L_17F0; }
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
L_0C20: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0u)); set_vi(i1, 0u + 8u); vstore(r.vf[3], uv); n3 = vshadow_eager(r.vf[3]); }
L_0C28: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i1, i5 & i1); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n5 = vshadow_eager(r.vf[5]); }
L_0C30: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, v4u{0u, 0u, 0u, 0x3F800000u}); { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 8, 2); set_vi(i2, v); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n5 = vshadow_eager(r.vf[5]); }
L_0C38: { ++fl.t; pend = 0u == i1; }
L_0C40: { ++fl.t; set_vi(i3, 0u + 3u); }
    if (pend) { pend = false; goto L_0C50; }
L_0C48: { ++fl.t; set_vi(i4, 0u + i2); }
L_0C50: { ++fl.t; set_vi(i1, 0u + 8u); }
L_0C58: { ++fl.t; set_vi(i1, i4 & i1); }
L_0C60: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 37u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } n1 = vshadow_eager(r.vf[1]); }
L_0C68: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 139u); std::memcpy(&r.vf[6], q, 16); } n6 = vshadow_eager(r.vf[6]); }
L_0C70: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 140u); std::memcpy(&r.vf[7], q, 16); } n7 = vshadow_eager(r.vf[7]); }
L_0C78: { ++fl.t; pend = 0u == i1; }
L_0C80: { ++fl.t; set_vi(i2, 0u + 4u); }
    if (pend) { pend = false; goto L_0C90; }
L_0C88: { ++fl.t; const v4u uv = vaddn(n1, n1); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0C90: { ++fl.t; const v4u uv = (v4u)((v4f)n5 + (v4f)vsplat(0x3F800000u)); set_vi(i5, i4 & i3); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0C98: { ++fl.t; set_vi(i4, i4 & i2); }
L_0CA0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 124u) + 12, 2); set_vi(i1, v); } }
L_0CA8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 138u); std::memcpy(q + 12, &r.vf[1].w[3], 4); } }
L_0CB0: { ++fl.t; pend = 0u == i5; }
L_0CB8: { ++fl.t; set_vi(i5, i5 - 1u); }
    if (pend) { pend = false; goto L_0D00; }
L_0CC0: { ++fl.t; r.i = 1124073472u; }
L_0CC8: { ++fl.t; pend = 0u == i5; }
L_0CD0: { ++fl.t; }
    if (pend) { pend = false; goto L_0D28; }
L_0CD8: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); set_vi(i2, 0u + 1u); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_0CE0: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 16u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0CE8: { ++fl.t; set_vi(i1, i1 | i3); }
L_0CF0: { ++fl.t; pend = true; }
L_0CF8: { ++fl.t; set_vi(i3, 0u + 1u); }
    if (pend) { pend = false; goto L_0D50; }
L_0D00: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); r.i = 1132396544u; vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0D08: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 32751u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0D10: { ++fl.t; set_vi(i1, i1 & i3); }
L_0D18: { ++fl.t; pend = true; }
L_0D20: { ++fl.t; set_vi(i3, 0u + 0u); }
    if (pend) { pend = false; goto L_0D50; }
L_0D28: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); set_vi(i2, 0u + 0u); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0D30: { ++fl.t; r.i = 1124073472u; }
L_0D38: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 16u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0D40: { ++fl.t; set_vi(i1, i1 | i3); }
L_0D48: { ++fl.t; set_vi(i3, 0u + 1u); }
L_0D50: { ++fl.t; pend = 0u == i4; }
L_0D58: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 134u); const std::uint32_t v = i3; std::memcpy(q + 8, &v, 4); } }
    if (pend) { pend = false; goto L_0D70; }
L_0D60: { ++fl.t; r.i = 1073676288u; }
L_0D68: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vfix(vsplat(r.i))); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0D70: { ++fl.t; set_vi(i3, 0u + 27u); }
L_0D78: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(r.vf[1].w[0])); { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n2 = vshadow_eager(r.vf[2]); }
L_0D80: { ++fl.t; const v4u uv = vmuln(n6, vsplat(n1[3])); { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i3))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0D88: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0D90: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 132u); const std::uint32_t v = i2; std::memcpy(q + 12, &v, 4); } }
L_0D98: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 112u); std::memcpy(q + 0, &r.vf[3].w[0], 4); std::memcpy(q + 4, &r.vf[3].w[1], 4); } }
L_0DA0: { ++fl.t; const v4u uv = vmuln(n7, n6); { std::uint8_t *q = qword(mem, 0u + 137u); std::memcpy(q + 12, &r.vf[5].w[3], 4); } vstore(r.vf[7], uv); fl.push_last<15u, kSticky>(uv); n7 = uv; }
L_0DA8: { ++fl.t; set_vi(i2, i15 + 0u); }
L_0DB0: { ++fl.t; set_vi(i15, (((3504u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0DB8: { ++fl.t; }
    if (pend) { pend = false; goto L_17F0; }
L_0DC0: { ++fl.t; set_vi(i15, i2 + 0u); }
L_0DC8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 133u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
L_0DD0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 143u); std::memcpy(q, &r.vf[7], 16); } }
L_0DD8: { ++fl.t; pend = true; }
L_0DE0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 125u) + 12, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_1160; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((3560u + sh) & 16383u));
    return;
L_0F30: { ++fl.t; set_vi(i1, 0u + 16u); }
L_0F38: { ++fl.t; set_vi(i1, i5 & i1); }
L_0F40: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 12, 2); set_vi(i2, v); } }
L_0F48: { ++fl.t; pend = 0u == i1; }
L_0F50: { ++fl.t; }
    if (pend) { pend = false; goto L_0F68; }
L_0F58: { ++fl.t; set_vi(i4, 0u + i2); }
L_0F60: { ++fl.t; }
L_0F68: { ++fl.t; pend = 0u == i4; }
L_0F70: { ++fl.t; set_vi(i4, i4 - 1u); }
    if (pend) { pend = false; goto L_0FC0; }
L_0F78: { ++fl.t; set_vi(i1, 0u + 16384u); }
L_0F80: { ++fl.t; pend = 0u == i4; }
L_0F88: { ++fl.t; }
    if (pend) { pend = false; goto L_0FA8; }
L_0F90: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0F98: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0FA0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0FA8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0FB0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0FB8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0FC0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0FC8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0FD0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0FD8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 8, 2); set_vi(i3, v); } }
L_0FE0: { ++fl.t; set_vi(i2, 0u + 27u); }
L_0FE8: { ++fl.t; pend = 0u != i4; }
L_0FF0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 124u) + 12, 2); set_vi(i1, v); } }
    if (pend) { pend = false; goto L_1008; }
L_0FF8: { ++fl.t; pend = 0u != i3; }
L_1000: { ++fl.t; }
    if (pend) { pend = false; goto L_1020; }
L_1008: { ++fl.t; set_vi(i3, 0u + 32735u); }
L_1010: { ++fl.t; pend = true; }
L_1018: { ++fl.t; set_vi(i1, i1 & i3); }
    if (pend) { pend = false; goto L_1030; }
L_1020: { ++fl.t; set_vi(i3, 0u + 32u); }
L_1028: { ++fl.t; set_vi(i1, i1 | i3); }
L_1030: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } }
L_1038: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i2))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
L_1040: { ++fl.t; pend = true; }
L_1048: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
    if (pend) { pend = false; goto L_17F0; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((4176u + sh) & 16383u));
    return;
L_1128: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i1, 0u + 4u); vstore(r.vf[1], uv); n1 = vshadow_eager(r.vf[1]); }
L_1130: { ++fl.t; set_vi(i1, i5 & i1); }
L_1138: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 4, 2); set_vi(i2, v); } }
L_1140: { ++fl.t; pend = 0u == i1; }
L_1148: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 145u); std::memcpy(q + 0, &r.vf[1].w[0], 4); } }
    if (pend) { pend = false; goto L_1158; }
L_1150: { ++fl.t; set_vi(i4, 0u + i2); }
L_1158: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 125u); const std::uint32_t v = i4; std::memcpy(q + 12, &v, 4); } }
L_1160: { ++fl.t; const v4u uv = vmin(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0u)); { const std::uint8_t *q = qword(mem, 0u + 138u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[4], uv); n3 = vshadow_eager(r.vf[3]); }
L_1168: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 141u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n3 = vshadow_eager(r.vf[3]); }
L_1170: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 64u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow_eager(r.vf[1]); }
L_1178: { ++fl.t; pend = 0u != i4; }
L_1180: { ++fl.t; const v4u uv = vmuln(n3, vsplat(n3[3])); { const std::uint8_t *q = qword(mem, 0u + 142u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vshadow_eager(r.vf[2]); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; goto L_11A0; }
L_1188: { ++fl.t; const v4u uv = vmuln(n1, n3); { std::uint8_t *q = qword(mem, 0u + 145u); std::memcpy(q + 0, &r.vf[0].w[0], 4); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); }
L_1190: { ++fl.t; const v4u uv = vmuln(n1, n3); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1198: { ++fl.t; const v4u uv = vaddn(nacc, (v4u)((v4f)n2 * (v4f)vsplat(0x3F800000u))); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_11A0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 138u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); std::memcpy(q + 8, &r.vf[4].w[2], 4); } }
L_11A8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_11B0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 137u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((4536u + sh) & 16383u));
    return;
L_13F0: { ++fl.t; set_vi(i1, 0u + 32u); }
L_13F8: { ++fl.t; set_vi(i1, i5 & i1); }
L_1400: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 47u) + 0, 2); set_vi(i2, v); } }
L_1408: { ++fl.t; pend = 0u == i1; }
L_1410: { ++fl.t; }
    if (pend) { pend = false; goto L_1428; }
L_1418: { ++fl.t; set_vi(i4, 0u + i2); }
L_1420: { ++fl.t; }
L_1428: { ++fl.t; pend = 0u != i4; }
L_1430: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 33u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } }
    if (pend) { pend = false; goto L_1448; }
L_1438: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1440: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 136u); std::memcpy(q + 0, &r.vf[0].w[0], 4); std::memcpy(q + 4, &r.vf[0].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_1448: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1450: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 136u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((5208u + sh) & 16383u));
    return;
L_17F0: { ++fl.t; set_vi(i10, 0u + 1u); }
L_17F8: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_1800: { ++fl.t; set_vi(i9, 0u + i12); }
L_1808: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_1810: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1818: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q, &r.vf[4], 16); set_vi(i12, i12 + 1u); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((6176u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

static __attribute__((noinline, cold)) void vu1_2D84F84D31FEFFBE_c(Vu0Regs &r, std::uint8_t *mem) { vu1_2D84F84D31FEFFBE_s<true>(r, mem); }

void vu1_2D84F84D31FEFFBE(Vu0Regs &r, std::uint8_t *mem) {
    if ((r.status & 0xC0u) == 0xC0u) vu1_2D84F84D31FEFFBE_s<false>(r, mem);
    else vu1_2D84F84D31FEFFBE_c(r, mem);
}

template <bool kSticky>
static void vu1_7B022793B5A10E44_s(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 112u) & 16383u;
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
    goto L_0070;
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
    if (pend) { pend = false; goto L_17F0; }
L_00F8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 12, 2); set_vi(i8, v); } }
L_0100: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0108: { ++fl.t; set_vi(i15, (((264u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0110: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 4, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0C20; }
L_0118: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0120: { ++fl.t; set_vi(i15, (((288u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0128: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_0FD8; }
L_0130: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0138: { ++fl.t; set_vi(i15, (((312u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0140: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 37u) + 0, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0F30; }
L_0148: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0150: { ++fl.t; set_vi(i15, (((336u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0158: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_13F0; }
L_0160: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0168: { ++fl.t; set_vi(i15, (((360u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0170: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_1128; }
L_0178: { ++fl.t; set_vi(i1, 0u + 66u); }
L_0180: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 45u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } }
L_0188: { ++fl.t; set_vi(i15, (((392u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0190: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
    if (pend) { pend = false; goto L_17F0; }
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
L_0C20: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0u)); set_vi(i1, 0u + 8u); vstore(r.vf[3], uv); n3 = vshadow_eager(r.vf[3]); }
L_0C28: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i1, i5 & i1); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n5 = vshadow_eager(r.vf[5]); }
L_0C30: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, v4u{0u, 0u, 0u, 0x3F800000u}); { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 8, 2); set_vi(i2, v); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n5 = vshadow_eager(r.vf[5]); }
L_0C38: { ++fl.t; pend = 0u == i1; }
L_0C40: { ++fl.t; set_vi(i3, 0u + 3u); }
    if (pend) { pend = false; goto L_0C50; }
L_0C48: { ++fl.t; set_vi(i4, 0u + i2); }
L_0C50: { ++fl.t; set_vi(i1, 0u + 8u); }
L_0C58: { ++fl.t; set_vi(i1, i4 & i1); }
L_0C60: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 37u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } n1 = vshadow_eager(r.vf[1]); }
L_0C68: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 139u); std::memcpy(&r.vf[6], q, 16); } n6 = vshadow_eager(r.vf[6]); }
L_0C70: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 140u); std::memcpy(&r.vf[7], q, 16); } n7 = vshadow_eager(r.vf[7]); }
L_0C78: { ++fl.t; pend = 0u == i1; }
L_0C80: { ++fl.t; set_vi(i2, 0u + 4u); }
    if (pend) { pend = false; goto L_0C90; }
L_0C88: { ++fl.t; const v4u uv = vaddn(n1, n1); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0C90: { ++fl.t; const v4u uv = (v4u)((v4f)n5 + (v4f)vsplat(0x3F800000u)); set_vi(i5, i4 & i3); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0C98: { ++fl.t; set_vi(i4, i4 & i2); }
L_0CA0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 124u) + 12, 2); set_vi(i1, v); } }
L_0CA8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 138u); std::memcpy(q + 12, &r.vf[1].w[3], 4); } }
L_0CB0: { ++fl.t; pend = 0u == i5; }
L_0CB8: { ++fl.t; set_vi(i5, i5 - 1u); }
    if (pend) { pend = false; goto L_0D00; }
L_0CC0: { ++fl.t; r.i = 1124073472u; }
L_0CC8: { ++fl.t; pend = 0u == i5; }
L_0CD0: { ++fl.t; }
    if (pend) { pend = false; goto L_0D28; }
L_0CD8: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); set_vi(i2, 0u + 1u); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_0CE0: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 16u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0CE8: { ++fl.t; set_vi(i1, i1 | i3); }
L_0CF0: { ++fl.t; pend = true; }
L_0CF8: { ++fl.t; set_vi(i3, 0u + 1u); }
    if (pend) { pend = false; goto L_0D50; }
L_0D00: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); r.i = 1132396544u; vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0D08: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 32751u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0D10: { ++fl.t; set_vi(i1, i1 & i3); }
L_0D18: { ++fl.t; pend = true; }
L_0D20: { ++fl.t; set_vi(i3, 0u + 0u); }
    if (pend) { pend = false; goto L_0D50; }
L_0D28: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); set_vi(i2, 0u + 0u); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0D30: { ++fl.t; r.i = 1124073472u; }
L_0D38: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 16u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0D40: { ++fl.t; set_vi(i1, i1 | i3); }
L_0D48: { ++fl.t; set_vi(i3, 0u + 1u); }
L_0D50: { ++fl.t; pend = 0u == i4; }
L_0D58: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 134u); const std::uint32_t v = i3; std::memcpy(q + 8, &v, 4); } }
    if (pend) { pend = false; goto L_0D70; }
L_0D60: { ++fl.t; r.i = 1073676288u; }
L_0D68: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vfix(vsplat(r.i))); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0D70: { ++fl.t; set_vi(i3, 0u + 27u); }
L_0D78: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(r.vf[1].w[0])); { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n2 = vshadow_eager(r.vf[2]); }
L_0D80: { ++fl.t; const v4u uv = vmuln(n6, vsplat(n1[3])); { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i3))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0D88: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0D90: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 132u); const std::uint32_t v = i2; std::memcpy(q + 12, &v, 4); } }
L_0D98: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 112u); std::memcpy(q + 0, &r.vf[3].w[0], 4); std::memcpy(q + 4, &r.vf[3].w[1], 4); } }
L_0DA0: { ++fl.t; const v4u uv = vmuln(n7, n6); { std::uint8_t *q = qword(mem, 0u + 137u); std::memcpy(q + 12, &r.vf[5].w[3], 4); } vstore(r.vf[7], uv); fl.push_last<15u, kSticky>(uv); n7 = uv; }
L_0DA8: { ++fl.t; set_vi(i2, i15 + 0u); }
L_0DB0: { ++fl.t; set_vi(i15, (((3504u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0DB8: { ++fl.t; }
    if (pend) { pend = false; goto L_17F0; }
L_0DC0: { ++fl.t; set_vi(i15, i2 + 0u); }
L_0DC8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 133u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
L_0DD0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 143u); std::memcpy(q, &r.vf[7], 16); } }
L_0DD8: { ++fl.t; pend = true; }
L_0DE0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 125u) + 12, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_1160; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((3560u + sh) & 16383u));
    return;
L_0F30: { ++fl.t; set_vi(i1, 0u + 16u); }
L_0F38: { ++fl.t; set_vi(i1, i5 & i1); }
L_0F40: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 12, 2); set_vi(i2, v); } }
L_0F48: { ++fl.t; pend = 0u == i1; }
L_0F50: { ++fl.t; }
    if (pend) { pend = false; goto L_0F68; }
L_0F58: { ++fl.t; set_vi(i4, 0u + i2); }
L_0F60: { ++fl.t; }
L_0F68: { ++fl.t; pend = 0u == i4; }
L_0F70: { ++fl.t; set_vi(i4, i4 - 1u); }
    if (pend) { pend = false; goto L_0FC0; }
L_0F78: { ++fl.t; set_vi(i1, 0u + 16384u); }
L_0F80: { ++fl.t; pend = 0u == i4; }
L_0F88: { ++fl.t; }
    if (pend) { pend = false; goto L_0FA8; }
L_0F90: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0F98: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0FA0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0FA8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0FB0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0FB8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0FC0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0FC8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0FD0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0FD8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 8, 2); set_vi(i3, v); } }
L_0FE0: { ++fl.t; set_vi(i2, 0u + 27u); }
L_0FE8: { ++fl.t; pend = 0u != i4; }
L_0FF0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 124u) + 12, 2); set_vi(i1, v); } }
    if (pend) { pend = false; goto L_1008; }
L_0FF8: { ++fl.t; pend = 0u != i3; }
L_1000: { ++fl.t; }
    if (pend) { pend = false; goto L_1020; }
L_1008: { ++fl.t; set_vi(i3, 0u + 32735u); }
L_1010: { ++fl.t; pend = true; }
L_1018: { ++fl.t; set_vi(i1, i1 & i3); }
    if (pend) { pend = false; goto L_1030; }
L_1020: { ++fl.t; set_vi(i3, 0u + 32u); }
L_1028: { ++fl.t; set_vi(i1, i1 | i3); }
L_1030: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } }
L_1038: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i2))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
L_1040: { ++fl.t; pend = true; }
L_1048: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
    if (pend) { pend = false; goto L_17F0; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((4176u + sh) & 16383u));
    return;
L_1128: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i1, 0u + 4u); vstore(r.vf[1], uv); n1 = vshadow_eager(r.vf[1]); }
L_1130: { ++fl.t; set_vi(i1, i5 & i1); }
L_1138: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 4, 2); set_vi(i2, v); } }
L_1140: { ++fl.t; pend = 0u == i1; }
L_1148: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 145u); std::memcpy(q + 0, &r.vf[1].w[0], 4); } }
    if (pend) { pend = false; goto L_1158; }
L_1150: { ++fl.t; set_vi(i4, 0u + i2); }
L_1158: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 125u); const std::uint32_t v = i4; std::memcpy(q + 12, &v, 4); } }
L_1160: { ++fl.t; const v4u uv = vmin(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0u)); { const std::uint8_t *q = qword(mem, 0u + 138u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[4], uv); n3 = vshadow_eager(r.vf[3]); }
L_1168: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 141u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n3 = vshadow_eager(r.vf[3]); }
L_1170: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 64u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow_eager(r.vf[1]); }
L_1178: { ++fl.t; pend = 0u != i4; }
L_1180: { ++fl.t; const v4u uv = vmuln(n3, vsplat(n3[3])); { const std::uint8_t *q = qword(mem, 0u + 142u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vshadow_eager(r.vf[2]); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; goto L_11A0; }
L_1188: { ++fl.t; const v4u uv = vmuln(n1, n3); { std::uint8_t *q = qword(mem, 0u + 145u); std::memcpy(q + 0, &r.vf[0].w[0], 4); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); }
L_1190: { ++fl.t; const v4u uv = vmuln(n1, n3); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1198: { ++fl.t; const v4u uv = vaddn(nacc, (v4u)((v4f)n2 * (v4f)vsplat(0x3F800000u))); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_11A0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 138u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); std::memcpy(q + 8, &r.vf[4].w[2], 4); } }
L_11A8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_11B0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 137u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((4536u + sh) & 16383u));
    return;
L_13F0: { ++fl.t; set_vi(i1, 0u + 32u); }
L_13F8: { ++fl.t; set_vi(i1, i5 & i1); }
L_1400: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 47u) + 0, 2); set_vi(i2, v); } }
L_1408: { ++fl.t; pend = 0u == i1; }
L_1410: { ++fl.t; }
    if (pend) { pend = false; goto L_1428; }
L_1418: { ++fl.t; set_vi(i4, 0u + i2); }
L_1420: { ++fl.t; }
L_1428: { ++fl.t; pend = 0u != i4; }
L_1430: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 33u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } }
    if (pend) { pend = false; goto L_1448; }
L_1438: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1440: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 136u); std::memcpy(q + 0, &r.vf[0].w[0], 4); std::memcpy(q + 4, &r.vf[0].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_1448: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1450: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 136u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((5208u + sh) & 16383u));
    return;
L_17F0: { ++fl.t; set_vi(i10, 0u + 1u); }
L_17F8: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_1800: { ++fl.t; set_vi(i9, 0u + i12); }
L_1808: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_1810: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1818: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q, &r.vf[4], 16); set_vi(i12, i12 + 1u); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((6176u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

static __attribute__((noinline, cold)) void vu1_7B022793B5A10E44_c(Vu0Regs &r, std::uint8_t *mem) { vu1_7B022793B5A10E44_s<true>(r, mem); }

void vu1_7B022793B5A10E44(Vu0Regs &r, std::uint8_t *mem) {
    if ((r.status & 0xC0u) == 0xC0u) vu1_7B022793B5A10E44_s<false>(r, mem);
    else vu1_7B022793B5A10E44_c(r, mem);
}

template <bool kSticky>
static void vu1_A340431456F2CD02_s(Vu0Regs &r, std::uint8_t *mem) {
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
    goto L_0078;
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
    if (pend) { pend = false; goto L_17F0; }
L_00F8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 12, 2); set_vi(i8, v); } }
L_0100: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0108: { ++fl.t; set_vi(i15, (((264u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0110: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 4, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0C20; }
L_0118: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0120: { ++fl.t; set_vi(i15, (((288u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0128: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_0FD8; }
L_0130: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0138: { ++fl.t; set_vi(i15, (((312u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0140: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 37u) + 0, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0F30; }
L_0148: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0150: { ++fl.t; set_vi(i15, (((336u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0158: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_13F0; }
L_0160: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0168: { ++fl.t; set_vi(i15, (((360u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0170: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_1128; }
L_0178: { ++fl.t; set_vi(i1, 0u + 66u); }
L_0180: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 45u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } }
L_0188: { ++fl.t; set_vi(i15, (((392u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0190: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
    if (pend) { pend = false; goto L_17F0; }
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
L_0C20: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0u)); set_vi(i1, 0u + 8u); vstore(r.vf[3], uv); n3 = vshadow_eager(r.vf[3]); }
L_0C28: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i1, i5 & i1); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n5 = vshadow_eager(r.vf[5]); }
L_0C30: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, v4u{0u, 0u, 0u, 0x3F800000u}); { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 8, 2); set_vi(i2, v); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n5 = vshadow_eager(r.vf[5]); }
L_0C38: { ++fl.t; pend = 0u == i1; }
L_0C40: { ++fl.t; set_vi(i3, 0u + 3u); }
    if (pend) { pend = false; goto L_0C50; }
L_0C48: { ++fl.t; set_vi(i4, 0u + i2); }
L_0C50: { ++fl.t; set_vi(i1, 0u + 8u); }
L_0C58: { ++fl.t; set_vi(i1, i4 & i1); }
L_0C60: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 37u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } n1 = vshadow_eager(r.vf[1]); }
L_0C68: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 139u); std::memcpy(&r.vf[6], q, 16); } n6 = vshadow_eager(r.vf[6]); }
L_0C70: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 140u); std::memcpy(&r.vf[7], q, 16); } n7 = vshadow_eager(r.vf[7]); }
L_0C78: { ++fl.t; pend = 0u == i1; }
L_0C80: { ++fl.t; set_vi(i2, 0u + 4u); }
    if (pend) { pend = false; goto L_0C90; }
L_0C88: { ++fl.t; const v4u uv = vaddn(n1, n1); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0C90: { ++fl.t; const v4u uv = (v4u)((v4f)n5 + (v4f)vsplat(0x3F800000u)); set_vi(i5, i4 & i3); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0C98: { ++fl.t; set_vi(i4, i4 & i2); }
L_0CA0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 124u) + 12, 2); set_vi(i1, v); } }
L_0CA8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 138u); std::memcpy(q + 12, &r.vf[1].w[3], 4); } }
L_0CB0: { ++fl.t; pend = 0u == i5; }
L_0CB8: { ++fl.t; set_vi(i5, i5 - 1u); }
    if (pend) { pend = false; goto L_0D00; }
L_0CC0: { ++fl.t; r.i = 1124073472u; }
L_0CC8: { ++fl.t; pend = 0u == i5; }
L_0CD0: { ++fl.t; }
    if (pend) { pend = false; goto L_0D28; }
L_0CD8: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); set_vi(i2, 0u + 1u); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_0CE0: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 16u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0CE8: { ++fl.t; set_vi(i1, i1 | i3); }
L_0CF0: { ++fl.t; pend = true; }
L_0CF8: { ++fl.t; set_vi(i3, 0u + 1u); }
    if (pend) { pend = false; goto L_0D50; }
L_0D00: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); r.i = 1132396544u; vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0D08: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 32751u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0D10: { ++fl.t; set_vi(i1, i1 & i3); }
L_0D18: { ++fl.t; pend = true; }
L_0D20: { ++fl.t; set_vi(i3, 0u + 0u); }
    if (pend) { pend = false; goto L_0D50; }
L_0D28: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); set_vi(i2, 0u + 0u); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0D30: { ++fl.t; r.i = 1124073472u; }
L_0D38: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 16u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0D40: { ++fl.t; set_vi(i1, i1 | i3); }
L_0D48: { ++fl.t; set_vi(i3, 0u + 1u); }
L_0D50: { ++fl.t; pend = 0u == i4; }
L_0D58: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 134u); const std::uint32_t v = i3; std::memcpy(q + 8, &v, 4); } }
    if (pend) { pend = false; goto L_0D70; }
L_0D60: { ++fl.t; r.i = 1073676288u; }
L_0D68: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vfix(vsplat(r.i))); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0D70: { ++fl.t; set_vi(i3, 0u + 27u); }
L_0D78: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(r.vf[1].w[0])); { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n2 = vshadow_eager(r.vf[2]); }
L_0D80: { ++fl.t; const v4u uv = vmuln(n6, vsplat(n1[3])); { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i3))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0D88: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0D90: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 132u); const std::uint32_t v = i2; std::memcpy(q + 12, &v, 4); } }
L_0D98: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 112u); std::memcpy(q + 0, &r.vf[3].w[0], 4); std::memcpy(q + 4, &r.vf[3].w[1], 4); } }
L_0DA0: { ++fl.t; const v4u uv = vmuln(n7, n6); { std::uint8_t *q = qword(mem, 0u + 137u); std::memcpy(q + 12, &r.vf[5].w[3], 4); } vstore(r.vf[7], uv); fl.push_last<15u, kSticky>(uv); n7 = uv; }
L_0DA8: { ++fl.t; set_vi(i2, i15 + 0u); }
L_0DB0: { ++fl.t; set_vi(i15, (((3504u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0DB8: { ++fl.t; }
    if (pend) { pend = false; goto L_17F0; }
L_0DC0: { ++fl.t; set_vi(i15, i2 + 0u); }
L_0DC8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 133u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
L_0DD0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 143u); std::memcpy(q, &r.vf[7], 16); } }
L_0DD8: { ++fl.t; pend = true; }
L_0DE0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 125u) + 12, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_1160; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((3560u + sh) & 16383u));
    return;
L_0F30: { ++fl.t; set_vi(i1, 0u + 16u); }
L_0F38: { ++fl.t; set_vi(i1, i5 & i1); }
L_0F40: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 12, 2); set_vi(i2, v); } }
L_0F48: { ++fl.t; pend = 0u == i1; }
L_0F50: { ++fl.t; }
    if (pend) { pend = false; goto L_0F68; }
L_0F58: { ++fl.t; set_vi(i4, 0u + i2); }
L_0F60: { ++fl.t; }
L_0F68: { ++fl.t; pend = 0u == i4; }
L_0F70: { ++fl.t; set_vi(i4, i4 - 1u); }
    if (pend) { pend = false; goto L_0FC0; }
L_0F78: { ++fl.t; set_vi(i1, 0u + 16384u); }
L_0F80: { ++fl.t; pend = 0u == i4; }
L_0F88: { ++fl.t; }
    if (pend) { pend = false; goto L_0FA8; }
L_0F90: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0F98: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0FA0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0FA8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0FB0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0FB8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0FC0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0FC8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0FD0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0FD8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 8, 2); set_vi(i3, v); } }
L_0FE0: { ++fl.t; set_vi(i2, 0u + 27u); }
L_0FE8: { ++fl.t; pend = 0u != i4; }
L_0FF0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 124u) + 12, 2); set_vi(i1, v); } }
    if (pend) { pend = false; goto L_1008; }
L_0FF8: { ++fl.t; pend = 0u != i3; }
L_1000: { ++fl.t; }
    if (pend) { pend = false; goto L_1020; }
L_1008: { ++fl.t; set_vi(i3, 0u + 32735u); }
L_1010: { ++fl.t; pend = true; }
L_1018: { ++fl.t; set_vi(i1, i1 & i3); }
    if (pend) { pend = false; goto L_1030; }
L_1020: { ++fl.t; set_vi(i3, 0u + 32u); }
L_1028: { ++fl.t; set_vi(i1, i1 | i3); }
L_1030: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } }
L_1038: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i2))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
L_1040: { ++fl.t; pend = true; }
L_1048: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
    if (pend) { pend = false; goto L_17F0; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((4176u + sh) & 16383u));
    return;
L_1128: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i1, 0u + 4u); vstore(r.vf[1], uv); n1 = vshadow_eager(r.vf[1]); }
L_1130: { ++fl.t; set_vi(i1, i5 & i1); }
L_1138: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 4, 2); set_vi(i2, v); } }
L_1140: { ++fl.t; pend = 0u == i1; }
L_1148: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 145u); std::memcpy(q + 0, &r.vf[1].w[0], 4); } }
    if (pend) { pend = false; goto L_1158; }
L_1150: { ++fl.t; set_vi(i4, 0u + i2); }
L_1158: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 125u); const std::uint32_t v = i4; std::memcpy(q + 12, &v, 4); } }
L_1160: { ++fl.t; const v4u uv = vmin(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0u)); { const std::uint8_t *q = qword(mem, 0u + 138u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[4], uv); n3 = vshadow_eager(r.vf[3]); }
L_1168: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 141u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n3 = vshadow_eager(r.vf[3]); }
L_1170: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 64u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow_eager(r.vf[1]); }
L_1178: { ++fl.t; pend = 0u != i4; }
L_1180: { ++fl.t; const v4u uv = vmuln(n3, vsplat(n3[3])); { const std::uint8_t *q = qword(mem, 0u + 142u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vshadow_eager(r.vf[2]); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; goto L_11A0; }
L_1188: { ++fl.t; const v4u uv = vmuln(n1, n3); { std::uint8_t *q = qword(mem, 0u + 145u); std::memcpy(q + 0, &r.vf[0].w[0], 4); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); }
L_1190: { ++fl.t; const v4u uv = vmuln(n1, n3); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1198: { ++fl.t; const v4u uv = vaddn(nacc, (v4u)((v4f)n2 * (v4f)vsplat(0x3F800000u))); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_11A0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 138u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); std::memcpy(q + 8, &r.vf[4].w[2], 4); } }
L_11A8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_11B0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 137u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((4536u + sh) & 16383u));
    return;
L_13F0: { ++fl.t; set_vi(i1, 0u + 32u); }
L_13F8: { ++fl.t; set_vi(i1, i5 & i1); }
L_1400: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 47u) + 0, 2); set_vi(i2, v); } }
L_1408: { ++fl.t; pend = 0u == i1; }
L_1410: { ++fl.t; }
    if (pend) { pend = false; goto L_1428; }
L_1418: { ++fl.t; set_vi(i4, 0u + i2); }
L_1420: { ++fl.t; }
L_1428: { ++fl.t; pend = 0u != i4; }
L_1430: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 33u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } }
    if (pend) { pend = false; goto L_1448; }
L_1438: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1440: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 136u); std::memcpy(q + 0, &r.vf[0].w[0], 4); std::memcpy(q + 4, &r.vf[0].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_1448: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1450: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 136u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((5208u + sh) & 16383u));
    return;
L_17F0: { ++fl.t; set_vi(i10, 0u + 1u); }
L_17F8: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_1800: { ++fl.t; set_vi(i9, 0u + i12); }
L_1808: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_1810: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1818: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q, &r.vf[4], 16); set_vi(i12, i12 + 1u); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((6176u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

static __attribute__((noinline, cold)) void vu1_A340431456F2CD02_c(Vu0Regs &r, std::uint8_t *mem) { vu1_A340431456F2CD02_s<true>(r, mem); }

void vu1_A340431456F2CD02(Vu0Regs &r, std::uint8_t *mem) {
    if ((r.status & 0xC0u) == 0xC0u) vu1_A340431456F2CD02_s<false>(r, mem);
    else vu1_A340431456F2CD02_c(r, mem);
}

void vu1_D2B0D7E14E4AD4DE(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 4096u) & 16383u;
    (void)sh;
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i3 = r.vi[3];
    std::uint16_t i9 = r.vi[9];
    std::uint16_t i10 = r.vi[10];
    std::uint16_t i12 = r.vi[12];
    std::uint16_t i15 = r.vi[15];
    goto L_1000;
L_1000: { ++fl.t; }
L_1008: { ++fl.t; set_vi(i3, 0u + 32735u); }
L_1010: { ++fl.t; pend = true; }
L_1018: { ++fl.t; set_vi(i1, i1 & i3); }
    if (pend) { pend = false; goto L_1030; }
    fl.finish(r); r.vi[1] = i1; r.vi[3] = i3; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; vu::interpret(1, ((4128u + sh) & 16383u));
    return;
L_1030: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } }
L_1038: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i2))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
L_1040: { ++fl.t; pend = true; }
L_1048: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
    if (pend) { pend = false; goto L_17F0; }
    fl.finish(r); r.vi[1] = i1; r.vi[3] = i3; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; vu::interpret(1, ((4176u + sh) & 16383u));
    return;
L_17F0: { ++fl.t; set_vi(i10, 0u + 1u); }
L_17F8: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_1800: { ++fl.t; set_vi(i9, 0u + i12); }
L_1808: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_1810: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1818: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q, &r.vf[4], 16); set_vi(i12, i12 + 1u); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[3] = i3; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; vu::interpret(1, ((6176u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[3] = i3; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; vu::interpret(1, jpc);
    return;
}

void vu1_39DA7B8BB77D8219(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 6648u) & 16383u;
    (void)sh;
    std::uint16_t bk = 0, next_bk = 0;
    unsigned bi = 0;
    (void)bk;
    (void)next_bk;
    (void)bi;
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
    std::uint16_t i13 = r.vi[13];
    std::uint16_t i15 = r.vi[15];
    goto L_19F8;
L_01F8: { ++fl.t; set_vi(i1, 0u + 15u); }
L_0200: { ++fl.t; set_vi(i1, i8 & i1); }
L_0208: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1) + 4, 2); set_vi(i2, v); } }
L_0210: { fl.t += 4u; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; pendj = true; }
L_0218: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[6] = i6; r.vi[7] = i7; r.vi[15] = i15; vu::interpret(1, ((544u + sh) & 16383u));
    return;
L_1888: { ++fl.t; ending = true; }
L_1890: { ++fl.t; }
    if (ending) { fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[6] = i6; r.vi[7] = i7; r.vi[15] = i15; r.tpc = ((6296u + sh) & 16383u); return; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[6] = i6; r.vi[7] = i7; r.vi[15] = i15; vu::interpret(1, ((6296u + sh) & 16383u));
    return;
L_19F8: { ++fl.t; set_vi(i1, 0u + 1u); }
L_1A00: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = i1; std::memcpy(q + 8, &v, 4); } }
L_1A08: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = 0u; std::memcpy(q + 0, &v, 4); } }
L_1A10: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = 0u; std::memcpy(q + 4, &v, 4); } }
L_1A18: { ++fl.t; set_vi(i3, i6 & i3); }
L_1A20: { ++fl.t; pend = static_cast<std::int16_t>(i6) >= 0; }
L_1A28: { ++fl.t; set_vi(i6, i6 + i6); bi = 6u; }
    if (pend) { pend = false; goto L_1A40; }
L_1A30: { ++fl.t; set_vi(i15, (((6704u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1A38: { ++fl.t; next_bk = i3; set_vi(i3, 0u + 512u); bk = next_bk; bi = 3u; }
    if (pend) { pend = false; goto L_1888; }
L_1A40: { ++fl.t; pend = 0u == (bi == 3 ? bk : i3); }
L_1A48: { ++fl.t; { const std::uint8_t *q = qword(mem, i13 + 0u); std::memcpy(&r.vf[14], q, 16); } }
    if (pend) { pend = false; goto L_1A80; }
L_1A50: { ++fl.t; pend = static_cast<std::int16_t>(i6) < 0; }
L_1A58: { ++fl.t; set_vi(i7, r.vf[17].w[3]); }
    if (pend) { pend = false; goto L_1AA0; }
L_1A60: { ++fl.t; jpc = (static_cast<std::uint32_t>(i5) * 8u) & 16383u; set_vi(i15, (((6752u + sh) & 16383u) + 16u) / 8u); pendj = true; }
L_1A68: { ++fl.t; set_vi(i6, i4 + 0u); }
    if (pendj) { pendj = false; goto dispatch; }
L_1A70: { ++fl.t; jpc = (static_cast<std::uint32_t>(i6) * 8u) & 16383u; pendj = true; }
L_1A78: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_1A80: { ++fl.t; pend = static_cast<std::int16_t>(i6) < 0; }
L_1A88: { ++fl.t; }
    if (pend) { pend = false; goto L_1AA0; }
L_1A90: { ++fl.t; jpc = (static_cast<std::uint32_t>(i4) * 8u) & 16383u; pendj = true; }
L_1A98: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_1AA0: { ++fl.t; pend = true; }
L_1AA8: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
    if (pend) { pend = false; goto L_01F8; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[6] = i6; r.vi[7] = i7; r.vi[15] = i15; vu::interpret(1, ((6832u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[6] = i6; r.vi[7] = i7; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

template <bool kSticky>
PS2_VU_BODY void vu1_FCB564FBA4B71498_b(Vu0Regs &r, std::uint8_t *mem, VuDaz &daz, std::uint32_t &hop) {
    (void)daz;
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 1304u) & 16383u;
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
    std::uint16_t i14 = r.vi[14];
    std::uint16_t i15 = r.vi[15];
    goto L_0518;
L_01F8: { ++fl.t; set_vi(i1, 0u + 15u); }
L_0200: { ++fl.t; set_vi(i1, i8 & i1); }
L_0208: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1) + 4, 2); set_vi(i2, v); } }
L_0210: { fl.t += 4u; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; pendj = true; }
L_0218: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[14] = i14; r.vi[15] = i15; vhop(hop, ((544u + sh) & 16383u));
    return;
L_0270: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[15].w[0], r.vf[27].w[2]); fl.end_q(r, qb, 7u); } vstore(r.vf[17], uv); n17 = vshadow(r.vf[17]); }
L_0278: { ++fl.t; const v4u uv = vmuld(n18, n26); { const std::uint8_t *q = qword(mem, i13 + 0u); std::memcpy(&r.vf[16], q, 16); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n16 = vshadow(r.vf[16]); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0280: { ++fl.t; const v4u uv = vmuld(n20, n26); { const std::uint8_t *q = qword(mem, 0u + 38u); std::memcpy(&r.vf[24], q, 16); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n24 = vshadow(r.vf[24]); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0288: { ++fl.t; const v4u uv = vmuld(n22, n26); vstore(r.vf[5], vsel(vload(r.vf[5]), vload(r.vf[0]), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n5 = vshadow(r.vf[5]); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0290: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 145u); vstore(r.vf[7], vsel(vload(r.vf[7]), vload_ptr(q), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } n7 = vshadow(r.vf[7]); }
L_0298: { ++fl.t; const v4u uv = vaddd(n3, vsplat(n3[1])); { const std::uint8_t *q = qword(mem, 0u + 143u); std::memcpy(&r.vf[4], q, 16); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n4 = vshadow(r.vf[4]); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_02A0: { ++fl.t; const v4u uv = vmaddd(nacc, n17, vsplat(n3[2])); { const std::uint8_t *q = qword(mem, i13 + 1u); std::memcpy(&r.vf[11], q, 16); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n11 = vshadow(r.vf[11]); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_02A8: { ++fl.t; const v4u uv = vaddd(n2, vsplat(n2[0])); { const std::uint8_t *q = qword(mem, 0u + 138u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n3 = vshadow(r.vf[3]); nacc = vsel(nacc, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_02B0: { ++fl.t; const v4u uv = vmaddd(nacc, n17, vsplat(n2[2])); { const std::uint8_t *q = qword(mem, 0u + 142u); std::memcpy(&r.vf[2], q, 16); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n2 = vshadow(r.vf[2]); n6 = vsel(n6, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_02B8: { ++fl.t; const v4u uv = vaddd(n1, vsplat(n1[0])); { const std::uint8_t *q = qword(mem, 0u + 33u); std::memcpy(&r.vf[8], q, 16); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.stick<2u, kSticky>(uv); n8 = vshadow(r.vf[8]); nacc = vsel(nacc, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_02C0: { ++fl.t; const v4u uv = vmaddd(nacc, n17, vsplat(n1[1])); { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = 0u; std::memcpy(q + 8, &v, 4); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.stick<2u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_02C8: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vqd(r.q)); { const std::uint8_t *q = qword(mem, 0u + 137u); vstore(r.vf[27], vsel(vload(r.vf[27]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[1], uv); fl.stick<15u, kSticky>(uv); n27 = vshadow(r.vf[27]); n1 = uv; }
L_02D0: { ++fl.t; const v4u uv = vmuld(n27, n24); { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 132u) + 12, 2); set_vi(i4, v); } vstore(r.vf[24], vsel(vload(r.vf[24]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.stick<12u, kSticky>(uv); n24 = vsel(n24, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_02D8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 135u); std::memcpy(&r.vf[10], q, 16); } n10 = vshadow(r.vf[10]); }
L_02E0: { ++fl.t; vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vmax(vload(r.vf[6]), v4u{0u, 0u, 0u, 0x3F800000u}); { const std::uint8_t *q = qword(mem, 0u + 134u); std::memcpy(&r.vf[9], q, 16); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n9 = vshadow(r.vf[9]); n5 = vshadow(r.vf[5]); }
L_02E8: { ++fl.t; vflushd(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); const v4u uv = vmax(vload(r.vf[1]), vsplat(r.vf[24].w[3])); { const std::uint8_t *q = qword(mem, 0u + 136u); vstore(r.vf[6], vsel(vload(r.vf[6]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n6 = vshadow(r.vf[6]); n1 = vshadow(r.vf[1]); }
L_02F0: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vsplat(n8[2])); { std::uint8_t *q = qword(mem, 0u + 112u); std::memcpy(q + 0, &r.vf[11].w[0], 4); std::memcpy(q + 4, &r.vf[11].w[1], 4); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_02F8: { ++fl.t; const v4u uv = vmaddd(nacc, n8, vsplat(n27[2])); { const std::uint8_t *q = qword(mem, 0u + 41u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[24], vsel(vload(r.vf[24]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n3 = vshadow(r.vf[3]); n24 = vsel(n24, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0300: { ++fl.t; const v4u uv = vmuld(n19, vsplat(n5[0])); { const std::uint8_t *q = qword(mem, 0u + 44u); vstore(r.vf[13], vsel(vload(r.vf[13]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n13 = vshadow(r.vf[13]); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0308: { ++fl.t; const v4u uv = vmaddd(nacc, n21, vsplat(n5[1])); set_vi(i6, 0u + 16u); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0310: { ++fl.t; const v4u uv = vmaddd(nacc, n23, vsplat(n5[2])); { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 114u) + 0, 2); set_vi(i3, v); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0318: { ++fl.t; const v4u uv = vmuld(n24, n1); set_vi(i7, 0u + 14u); vstore(r.vf[24], vsel(vload(r.vf[24]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n24 = vsel(n24, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0320: { ++fl.t; vflushd(r.vf[24], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); const v4u uv = vmax(vload(r.vf[24]), vsplat(r.vf[8].w[1])); set_vi(i2, i8 & i6); vstore(r.vf[24], vsel(vload(r.vf[24]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n24 = vshadow(r.vf[24]); }
L_0328: { ++fl.t; const v4u uv = vmuld(n26, n10); set_vi(i5, 0u + 16u); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.stick<12u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_0330: { ++fl.t; vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vmax(vload(r.vf[5]), vsplat(r.vf[7].w[0])); set_vi(i3, i3 + i3); vstore(r.vf[5], uv); n5 = vshadow(r.vf[5]); }
L_0338: { ++fl.t; const v4u uv = vaddd(nacc, (v4u)((v4f)n9 * (v4f)vsplat(0x3F800000u))); { const std::uint8_t *q = qword(mem, i2 + 15u); vstore(r.vf[17], vsel(vload(r.vf[17]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.stick<12u, kSticky>(uv); n17 = vshadow(r.vf[17]); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_0340: { ++fl.t; const v4u uv = vmin(vload(r.vf[24]), vsplat(r.vf[8].w[0])); set_vi(i3, i3 & i7); vstore(r.vf[24], vsel(vload(r.vf[24]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n24 = vshadow(r.vf[24]); }
L_0348: { ++fl.t; const v4u uv = vmuld(vswz<1, 2, 0, 3>(n13), vswz<2, 0, 1, 3>(n25)); { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 114u) + 4, 2); set_vi(i2, v); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0350: { ++fl.t; const v4u uv = vmuld(n4, n5); r.clip = 0u; fl.set_clip(r.clip, fl.t - 4u); vstore(r.vf[5], uv); fl.stick<15u, kSticky>(uv); n5 = uv; }
L_0358: { ++fl.t; vflushd(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); const v4u uv = vmsubd(nacc, vswz<1, 2, 0, 3>(n25), vswz<2, 0, 1, 3>(n13)); { std::uint8_t *q = qword(mem, 0u + 113u); std::memcpy(q + 0, &r.vf[26].w[0], 4); std::memcpy(q + 4, &r.vf[26].w[1], 4); } vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0360: { ++fl.t; const v4u uv = vsubd(n3, vsplat(n27[2])); { const std::uint8_t *q = qword(mem, i4 + 112u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.push<1u, kSticky>(uv); n4 = vshadow(r.vf[4]); n3 = vsel(n3, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0368: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[24], r.vf[13].w[3]); set_vi(i4, i2 + i2); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_0370: { ++fl.t; const v4u uv = vmuld(n5, n16); set_vi(i4, i4 & i7); vstore(r.acc, uv); fl.push<15u, kSticky>(uv); nacc = uv; }
L_0378: { ++fl.t; const v4u uv = vmaddd(nacc, n3, n16); { const std::uint8_t *q = qword(mem, 0u + 133u); std::memcpy(&r.vf[13], q, 16); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n13 = vshadow(r.vf[13]); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0380: { ++fl.t; const v4u uv = vaddd(nacc, (v4u)((v4f)n2 * (v4f)vsplat(0x3F800000u))); set_vi(i5, (fl.mac() & 0xFFFFu) == i5 ? 1u : 0u); vstore(r.vf[2], uv); fl.stick<15u, kSticky>(uv); n2 = uv; }
L_0388: { ++fl.t; const v4u uv = vaddd(n4, n6); set_vi(i5, i3 + i5); vstore(r.vf[16], vsel(vload(r.vf[16]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.stick<12u, kSticky>(uv); n16 = vsel(n16, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_0390: { ++fl.t; const v4u uv = vmuld(n26, n27); { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = i5; std::memcpy(q + 0, &v, 4); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n4 = vsel(n4, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0398: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n1[0])); set_vi(i1, (fl.clip() & 15u) ? 1u : 0u); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.stick<2u, kSticky>(uv); n26 = vsel(n26, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_03A0: { ++fl.t; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vmin(vload(r.vf[2]), vsplat(r.vf[27].w[3])); set_vi(i4, i4 + i1); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n2 = vshadow(r.vf[2]); }
L_03A8: { ++fl.t; const v4u uv = vmuld(n16, vsplat(n1[0])); { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = i4; std::memcpy(q + 4, &v, 4); } vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.stick<12u, kSticky>(uv); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_03B0: { ++fl.t; const v4u uv = vaddd(n4, vsplat(n4[1])); set_vi(i3, 0u + 16384u); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_03B8: { ++fl.t; const v4u uv = vmaddd(nacc, n17, vsplat(n4[2])); set_vi(i7, i12 + 0u); vstore(r.vf[17], vsel(vload(r.vf[17]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n17 = vsel(n17, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_03C0: { ++fl.t; const v4u uv = vmuld(n2, n13); { const std::uint8_t *q = qword(mem, 0u + 39u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[13], uv); fl.stick<15u, kSticky>(uv); n4 = vshadow(r.vf[4]); n13 = uv; }
L_03C8: { ++fl.t; vflushd(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vftoi(vload(r.vf[24]), 4); { std::uint8_t *q = qword(mem, i7 + 0u); std::memcpy(q + 0, &r.vf[26].w[0], 4); std::memcpy(q + 4, &r.vf[26].w[1], 4); std::memcpy(q + 8, &r.vf[26].w[2], 4); } vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n27 = vshadow(r.vf[27]); }
L_03D0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 117u) + 12, 2); set_vi(i4, v); } }
L_03D8: { ++fl.t; const v4u uv = vmuld(n17, vsplat(n17[0])); { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 116u) + 12, 2); set_vi(i5, v); } vstore(r.vf[16], vsel(vload(r.vf[16]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.push<1u, kSticky>(uv); n16 = vsel(n16, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_03E0: { ++fl.t; const v4u uv = vftoi(vload(r.vf[13]), 0); { const std::uint8_t *q = qword(mem, i13 + 3u); std::memcpy(&r.vf[17], q, 16); } vstore(r.vf[13], uv); n17 = vshadow(r.vf[17]); n13 = vshadow(r.vf[13]); }
L_03E8: { ++fl.t; const v4u uv = vaddd(n24, n4); set_vi(i2, r.vf[27].w[3]); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_03F0: { ++fl.t; vflushd(r.vf[2], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i4 + 3u); std::memcpy(q, &r.vf[2], 16); } }
L_03F8: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); set_vi(i6, (fl.mac() & 0xFFFFu) == i6 ? 1u : 0u); vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n27 = vsel(n27, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0400: { ++fl.t; const v4u uv = vmuld(n28, vsplat(n17[0])); { std::uint16_t v; std::memcpy(&v, qword(mem, i6 + 126u) + 12, 2); set_vi(i6, v); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0408: { ++fl.t; const v4u uv = vftoi(vload(r.vf[26]), 4); { std::uint8_t *q = qword(mem, i7 + 1u); std::memcpy(q, &r.vf[13], 16); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n2 = vshadow(r.vf[2]); }
L_0410: { ++fl.t; vflushd(r.vf[24], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vmaddd(nacc, n29, vsplat(n17[1])); { std::uint8_t *q = qword(mem, i4 + 1u); std::memcpy(q, &r.vf[24], 16); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0418: { ++fl.t; vflushd(r.vf[27], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); const v4u uv = vmaddd(nacc, n30, vsplat(n17[2])); { std::uint8_t *q = qword(mem, i4 + 0u); std::memcpy(q, &r.vf[27], 16); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0420: { ++fl.t; set_vi(i8, i8 | i6); }
L_0428: { ++fl.t; set_vi(i6, i3 & i8); }
L_0430: { ++fl.t; set_vi(i6, i6 + i6); }
L_0438: { ++fl.t; { std::uint8_t *q = qword(mem, i7 + 2u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
L_0440: { ++fl.t; set_vi(i6, i2 | i6); }
L_0448: { ++fl.t; { std::uint8_t *q = qword(mem, i7 + 2u); const std::uint32_t v = i6; std::memcpy(q + 12, &v, 4); } }
L_0450: { ++fl.t; set_vi(i12, i12 + 3u); }
L_0458: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 115u) + 12, 2); set_vi(i6, v); } }
L_0460: { ++fl.t; vflushd(r.vf[16], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); { std::uint8_t *q = qword(mem, i4 + 2u); std::memcpy(q + 0, &r.vf[16].w[0], 4); std::memcpy(q + 4, &r.vf[16].w[1], 4); } }
L_0468: { ++fl.t; set_vi(i10, i10 + 1u); }
L_0470: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 114u) + 0, 2); set_vi(i7, v); } }
L_0478: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 116u); const std::uint32_t v = i4; std::memcpy(q + 12, &v, 4); } }
L_0480: { ++fl.t; { const std::uint8_t *q = qword(mem, i13 + 2u); std::memcpy(&r.vf[16], q, 16); } n16 = vshadow(r.vf[16]); }
L_0488: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 114u) + 4, 2); set_vi(i3, v); } }
L_0490: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 115u); const std::uint32_t v = i5; std::memcpy(q + 12, &v, 4); } }
L_0498: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 117u); const std::uint32_t v = i6; std::memcpy(q + 12, &v, 4); } }
L_04A0: { ++fl.t; const v4u uv = vaddd(nacc, (v4u)((v4f)n31 * (v4f)vsplat(0x3F800000u))); vstore(r.vf[24], vsel(vload(r.vf[24]), vload(r.vf[27]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n24 = vshadow(r.vf[24]); n27 = vsel(n27, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_04A8: { ++fl.t; const v4u uv = vmuld(n28, vsplat(n16[0])); set_vi(i2, i7 | i3); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_04B0: { ++fl.t; const v4u uv = vmaddd(nacc, n29, vsplat(n16[1])); { std::uint8_t *q = qword(mem, 0u + 113u); const std::uint32_t v = i2; std::memcpy(q + 12, &v, 4); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_04B8: { ++fl.t; const v4u uv = vmaddd(nacc, n30, vsplat(n16[2])); set_vi(i13, i13 + 4u); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_04C0: { ++fl.t; const v4u uv = vsubd(n27, n24); vstore(r.vf[13], vsel(vload(r.vf[13]), vload(r.vf[25]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); vstore(r.vf[25], uv); fl.push<15u, kSticky>(uv); n13 = vshadow(r.vf[13]); n25 = uv; }
L_04C8: { ++fl.t; pend = 0u == i2; }
L_04D0: { ++fl.t; set_vi(i1, 0u + 157u); }
    if (pend) { pend = false; goto L_04E8; }
L_04D8: { ++fl.t; set_vi(i15, (((1240u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_04E0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 115u); const std::uint32_t v = i1; std::memcpy(q + 4, &v, 4); } }
    if (pend) { pend = false; vflushd(r.vf[1], v4u{0u, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[3], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto L_1AB0; }
L_04E8: { ++fl.t; set_vi(i1, i11 - i12); }
L_04F0: { ++fl.t; set_vi(i6, i8 + 0u); }
L_04F8: { ++fl.t; pend = static_cast<std::int16_t>(i1) > 0; }
L_0500: { ++fl.t; }
    if (pend) { pend = false; vflushd(r.vf[1], v4u{0u, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[3], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto L_0530; }
L_0508: { ++fl.t; set_vi(i15, (((1288u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0510: { ++fl.t; }
    if (pend) { pend = false; vflushd(r.vf[1], v4u{0u, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto L_1820; }
    vflushd(r.vf[1], v4u{0u, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[3], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); 
L_0518: { ++fl.t; set_vi(i10, 0u + 0u); }
L_0520: { ++fl.t; set_vi(i9, 0u + i12); }
L_0528: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_0530: { ++fl.t; pend = static_cast<std::int16_t>(i6) >= 0; }
L_0538: { ++fl.t; set_vi(i8, r.vf[16].w[3]); }
    if (pend) { pend = false; goto L_0270; }
L_0540: { ++fl.t; set_vi(i5, 0u + 171u); }
L_0548: { ++fl.t; pend = true; }
L_0550: { ++fl.t; set_vi(i4, 0u + 78u); }
    if (pend) { pend = false; goto L_19C0; }
    fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[14] = i14; r.vi[15] = i15; vhop(hop, ((1368u + sh) & 16383u));
    return;
L_1820: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 114u) + 12, 2); set_vi(i3, v); } }
L_1828: { ++fl.t; set_vi(i2, 0u + 32767u); }
L_1830: { ++fl.t; set_vi(i2, i2 + 1u); }
L_1838: { ++fl.t; set_vi(i2, i10 | i2); }
L_1840: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 0u) + 12, 2); set_vi(i1, v); } }
L_1848: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i2; std::memcpy(q + 0, &v, 4); } }
L_1850: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 2u) + 12, 2); set_vi(i3, v); } }
L_1858: { ++fl.t; }
L_1860: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_1868: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 2u) + 12, 2); set_vi(i12, v); } }
L_1870: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 4u) + 12, 2); set_vi(i11, v); } }
L_1878: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1880: { ++fl.t; vkick_last(daz, 1, i3); }
    if (pendj) { pendj = false; vflush(r.vf[3], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); goto dispatch; }
    vflush(r.vf[3], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); 
L_1888: { ++fl.t; ending = true; }
L_1890: { ++fl.t; }
    if (ending) { fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[14] = i14; r.vi[15] = i15; r.tpc = ((6296u + sh) & 16383u); return; }
    fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[14] = i14; r.vi[15] = i15; vhop(hop, ((6296u + sh) & 16383u));
    return;
L_18C0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 31u); std::memcpy(&r.vf[1], q, 16); } n1 = vshadow(r.vf[1]); }
L_18C8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 26u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); } n2 = vshadow(r.vf[2]); }
L_18D0: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_18D8: { ++fl.t; set_vi(i10, 0u + 0u); }
L_18E0: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); std::memcpy(q, &r.vf[1], 16); } }
L_18E8: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 1u); const std::uint32_t v = i1; std::memcpy(q + 0, &v, 4); } }
L_18F0: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 2u); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); std::memcpy(q + 12, &r.vf[2].w[3], 4); } }
L_18F8: { ++fl.t; set_vi(i9, i12 + 2u); }
L_1900: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1908: { ++fl.t; set_vi(i12, i12 + 3u); }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[14] = i14; r.vi[15] = i15; vhop(hop, ((6416u + sh) & 16383u));
    return;
L_19C0: { ++fl.t; set_vi(i6, i6 + i6); }
L_19C8: { ++fl.t; set_vi(i6, i6 + i6); }
L_19D0: { ++fl.t; set_vi(i3, 0u + 4096u); }
L_19D8: { ++fl.t; pend = static_cast<std::int16_t>(i6) >= 0; }
L_19E0: { ++fl.t; set_vi(i6, i6 + i6); }
    if (pend) { pend = false; goto L_1A18; }
L_19E8: { ++fl.t; set_vi(i15, (((6632u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_19F0: { ++fl.t; set_vi(i1, 0u + 4u); }
    if (pend) { pend = false; goto L_18C0; }
L_19F8: { ++fl.t; set_vi(i1, 0u + 1u); }
L_1A00: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = i1; std::memcpy(q + 8, &v, 4); } }
L_1A08: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = 0u; std::memcpy(q + 0, &v, 4); } }
L_1A10: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = 0u; std::memcpy(q + 4, &v, 4); } }
L_1A18: { ++fl.t; set_vi(i3, i6 & i3); }
L_1A20: { ++fl.t; pend = static_cast<std::int16_t>(i6) >= 0; }
L_1A28: { ++fl.t; set_vi(i6, i6 + i6); bi = 6u; }
    if (pend) { pend = false; goto L_1A40; }
L_1A30: { ++fl.t; set_vi(i15, (((6704u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1A38: { ++fl.t; next_bk = i3; set_vi(i3, 0u + 512u); bk = next_bk; bi = 3u; }
    if (pend) { pend = false; goto L_1888; }
L_1A40: { ++fl.t; pend = 0u == (bi == 3 ? bk : i3); }
L_1A48: { ++fl.t; { const std::uint8_t *q = qword(mem, i13 + 0u); std::memcpy(&r.vf[14], q, 16); } }
    if (pend) { pend = false; goto L_1A80; }
L_1A50: { ++fl.t; pend = static_cast<std::int16_t>(i6) < 0; }
L_1A58: { ++fl.t; set_vi(i7, r.vf[17].w[3]); }
    if (pend) { pend = false; goto L_1AA0; }
L_1A60: { ++fl.t; jpc = (static_cast<std::uint32_t>(i5) * 8u) & 16383u; set_vi(i15, (((6752u + sh) & 16383u) + 16u) / 8u); pendj = true; }
L_1A68: { ++fl.t; set_vi(i6, i4 + 0u); }
    if (pendj) { pendj = false; goto dispatch; }
L_1A70: { ++fl.t; jpc = (static_cast<std::uint32_t>(i6) * 8u) & 16383u; pendj = true; }
L_1A78: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_1A80: { ++fl.t; pend = static_cast<std::int16_t>(i6) < 0; }
L_1A88: { ++fl.t; }
    if (pend) { pend = false; goto L_1AA0; }
L_1A90: { ++fl.t; jpc = (static_cast<std::uint32_t>(i4) * 8u) & 16383u; pendj = true; }
L_1A98: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_1AA0: { ++fl.t; pend = true; }
L_1AA8: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
    if (pend) { pend = false; goto L_01F8; }
L_1AB0: { ++fl.t; set_vi(i12, i12 - 3u); }
L_1AB8: { ++fl.t; pend = 0u == i7; }
L_1AC0: { ++fl.t; set_vi(i10, i10 - 1u); }
    if (pend) { pend = false; goto L_1BF0; }
L_1AC8: { ++fl.t; set_vi(i1, 0u + 7u); }
L_1AD0: { ++fl.t; set_vi(i7, i7 & i1); }
L_1AD8: { ++fl.t; set_vi(i1, i1 & i3); }
L_1AE0: { ++fl.t; pend = 0u != i7; }
L_1AE8: { ++fl.t; }
    if (pend) { pend = false; goto L_1B58; }
L_1AF0: { ++fl.t; pend = 0u == i1; }
L_1AF8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 133u); std::memcpy(&r.vf[1], q, 16); } n1 = vshadow(r.vf[1]); }
    if (pend) { pend = false; goto L_1B10; }
L_1B00: { ++fl.t; pend = true; }
L_1B08: { ++fl.t; }
    if (pend) { pend = false; goto L_1BF0; }
L_1B10: { ++fl.t; set_vi(i15, (((6928u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1B18: { ++fl.t; set_vi(i7, i6 + 0u); }
    if (pend) { pend = false; goto L_1E18; }
L_1B20: { ++fl.t; set_vi(i15, (((6944u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1B28: { ++fl.t; set_vi(i7, i5 + 0u); }
    if (pend) { pend = false; goto L_1E18; }
L_1B30: { ++fl.t; set_vi(i15, (((6960u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1B38: { ++fl.t; set_vi(i7, i4 + 0u); }
    if (pend) { pend = false; goto L_1E18; }
L_1B40: { ++fl.t; set_vi(i12, i12 - 3u); }
L_1B48: { ++fl.t; pend = true; }
L_1B50: { ++fl.t; set_vi(i10, i10 - 1u); }
    if (pend) { pend = false; goto L_1D40; }
L_1B58: { ++fl.t; set_vi(i2, 0u + 16384u); }
L_1B60: { ++fl.t; set_vi(i2, i8 & i2); }
L_1B68: { ++fl.t; }
L_1B70: { ++fl.t; pend = 0u == i2; }
L_1B78: { ++fl.t; }
    if (pend) { pend = false; goto L_1B98; }
L_1B80: { ++fl.t; set_vi(i1, 0u + 4u); }
L_1B88: { ++fl.t; pend = true; }
L_1B90: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 115u) + 4, 2); set_vi(i15, v); } }
    if (pend) { pend = false; goto L_18C0; }
L_1B98: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 5u) + 12, 2); set_vi(i2, v); } }
L_1BA0: { ++fl.t; set_vi(i15, (((7072u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1BA8: { ++fl.t; set_vi(i1, 0u + 3u); }
    if (pend) { pend = false; goto L_18C0; }
L_1BB0: { ++fl.t; { set_vi(i14, i14 - 1u); std::uint8_t *q = qword(mem, i14); std::memcpy(q, &r.vf[23], 16); } }
L_1BB8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; set_vi(i15, (((7096u + sh) & 16383u) + 16u) / 8u); pendj = true; }
L_1BC0: { ++fl.t; { set_vi(i14, i14 - 1u); std::uint8_t *q = qword(mem, i14); std::memcpy(q, &r.vf[24], 16); } }
    if (pendj) { pendj = false; goto dispatch; }
L_1BC8: { ++fl.t; { const std::uint8_t *q = qword(mem, i14); std::memcpy(&r.vf[24], q, 16); set_vi(i14, i14 + 1u); } n24 = vshadow(r.vf[24]); }
L_1BD0: { ++fl.t; { const std::uint8_t *q = qword(mem, i14); std::memcpy(&r.vf[23], q, 16); set_vi(i14, i14 + 1u); } n23 = vshadow(r.vf[23]); }
L_1BD8: { ++fl.t; set_vi(i1, 0u + 4u); }
L_1BE0: { ++fl.t; pend = true; }
L_1BE8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 115u) + 4, 2); set_vi(i15, v); } }
    if (pend) { pend = false; goto L_18C0; }
L_1BF0: { ++fl.t; pend = 0u == i3; }
L_1BF8: { ++fl.t; set_vi(i2, 0u + 16384u); }
    if (pend) { pend = false; goto L_1D40; }
L_1C00: { ++fl.t; set_vi(i2, i8 & i2); }
L_1C08: { ++fl.t; set_vi(i1, 0u + 7u); }
L_1C10: { ++fl.t; set_vi(i3, i3 & i1); }
L_1C18: { ++fl.t; pend = 0u != i2; }
L_1C20: { ++fl.t; }
    if (pend) { pend = false; goto L_1D40; }
L_1C28: { ++fl.t; pend = 0u != i3; }
L_1C30: { ++fl.t; }
    if (pend) { pend = false; goto L_1C98; }
L_1C38: { ++fl.t; set_vi(i15, (((7224u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1C40: { ++fl.t; set_vi(i1, 0u + 4u); }
    if (pend) { pend = false; goto L_18C0; }
L_1C48: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 133u); std::memcpy(&r.vf[1], q, 16); } n1 = vshadow(r.vf[1]); }
L_1C50: { ++fl.t; set_vi(i15, (((7248u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1C58: { ++fl.t; set_vi(i7, i6 + 0u); }
    if (pend) { pend = false; goto L_1E18; }
L_1C60: { ++fl.t; set_vi(i15, (((7264u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1C68: { ++fl.t; set_vi(i7, i5 + 0u); }
    if (pend) { pend = false; goto L_1E18; }
L_1C70: { ++fl.t; set_vi(i15, (((7280u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1C78: { ++fl.t; set_vi(i7, i4 + 0u); }
    if (pend) { pend = false; goto L_1E18; }
L_1C80: { ++fl.t; set_vi(i12, i12 - 3u); }
L_1C88: { ++fl.t; pend = true; }
L_1C90: { ++fl.t; set_vi(i10, i10 - 1u); }
    if (pend) { pend = false; goto L_1D40; }
L_1C98: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 1u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } n4 = vshadow(r.vf[4]); }
L_1CA0: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 1u); vstore(r.vf[5], vsel(vload(r.vf[5]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } n5 = vshadow(r.vf[5]); }
L_1CA8: { ++fl.t; set_vi(i3, 0u + i15); }
L_1CB0: { ++fl.t; set_vi(i15, (((7344u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1CB8: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); vstore(r.vf[6], vsel(vload(r.vf[6]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } n6 = vshadow(r.vf[6]); }
    if (pend) { pend = false; goto L_1D60; }
L_1CC0: { ++fl.t; pend = 0u != i1; }
L_1CC8: { ++fl.t; set_vi(i15, 0u + i3); }
    if (pend) { pend = false; goto L_1D08; }
L_1CD0: { ++fl.t; set_vi(i15, (((7376u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1CD8: { ++fl.t; set_vi(i1, 0u + 5u); }
    if (pend) { pend = false; goto L_18C0; }
L_1CE0: { ++fl.t; set_vi(i15, (((7392u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1CE8: { ++fl.t; }
    if (pend) { pend = false; goto L_1F58; }
L_1CF0: { ++fl.t; set_vi(i1, 0u + 4u); }
L_1CF8: { ++fl.t; pend = true; }
L_1D00: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 115u) + 4, 2); set_vi(i15, v); } }
    if (pend) { pend = false; goto L_18C0; }
L_1D08: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 133u); std::memcpy(&r.vf[1], q, 16); } n1 = vshadow(r.vf[1]); }
L_1D10: { ++fl.t; set_vi(i1, 0u + 16384u); }
L_1D18: { ++fl.t; set_vi(i8, i8 | i1); }
L_1D20: { ++fl.t; set_vi(i15, (((7456u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1D28: { ++fl.t; set_vi(i7, i4 + 0u); }
    if (pend) { pend = false; goto L_1E18; }
L_1D30: { ++fl.t; set_vi(i12, i12 - 3u); }
L_1D38: { ++fl.t; set_vi(i10, i10 - 1u); }
L_1D40: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 115u) + 4, 2); set_vi(i15, v); } }
L_1D48: { ++fl.t; set_vi(i12, i12 + 3u); }
L_1D50: { fl.t += 3u; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1D58: { ++fl.t; set_vi(i10, i10 + 1u); }
    if (pendj) { pendj = false; goto dispatch; }
L_1D60: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n4[1])); vstore(r.vf[1], vsel(vload(r.vf[1]), vload(r.vf[4]), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vshadow(r.vf[1]); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_1D68: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n5[0])); vstore(r.vf[2], vsel(vload(r.vf[2]), vload(r.vf[5]), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n2 = vshadow(r.vf[2]); n1 = vsel(n1, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_1D70: { fl.t += 2u; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n6[1])); { const std::uint8_t *q = qword(mem, 0u + 39u); vstore(r.vf[7], vsel(vload(r.vf[7]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.stick<2u, kSticky>(uv); n7 = vshadow(r.vf[7]); n2 = vsel(n2, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_1D78: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n6[0])); { const std::uint8_t *q = qword(mem, 0u + 40u); vstore(r.vf[8], vsel(vload(r.vf[8]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.push<2u, kSticky>(uv); n8 = vshadow(r.vf[8]); n1 = vsel(n1, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_1D80: { fl.t += 4u; const std::uint32_t uclip = vclip_value(r, r.vf[1], r.vf[7].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_1D88: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[8].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_1D90: { ++fl.t; }
L_1D98: { ++fl.t; }
L_1DA0: { ++fl.t; }
L_1DA8: { ++fl.t; set_vi(i1, ((fl.clip() | 16774527u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); }
L_1DB0: { ++fl.t; pend = 0u != i1; }
L_1DB8: { ++fl.t; set_vi(i1, ((fl.clip() | 16775871u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); }
    if (pend) { pend = false; goto L_1E00; }
L_1DC0: { ++fl.t; pend = 0u != i1; }
L_1DC8: { ++fl.t; set_vi(i1, ((fl.clip() | 16777173u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); }
    if (pend) { pend = false; goto L_1E00; }
L_1DD0: { ++fl.t; pend = 0u != i1; }
L_1DD8: { ++fl.t; set_vi(i1, ((fl.clip() | 16777194u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); }
    if (pend) { pend = false; goto L_1E00; }
L_1DE0: { ++fl.t; pend = 0u != i1; }
L_1DE8: { ++fl.t; set_vi(i1, 0u + 0u); }
    if (pend) { pend = false; goto L_1E00; }
L_1DF0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1DF8: { ++fl.t; }
    if (pendj) { pendj = false; vflushd(r.vf[1], v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0u}); goto dispatch; }
L_1E00: { ++fl.t; set_vi(i1, 0u + 1u); }
L_1E08: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1E10: { ++fl.t; }
    if (pendj) { pendj = false; vflushd(r.vf[1], v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0u}); goto dispatch; }
    vflushd(r.vf[1], v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); 
L_1E18: { ++fl.t; set_vi(i14, i14 - 1u); }
L_1E20: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i3; std::memcpy(q + 0, &v, 4); } }
L_1E28: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i2; std::memcpy(q + 4, &v, 4); } }
L_1E30: { ++fl.t; { const std::uint8_t *q = qword(mem, i7 + 0u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } n3 = vshadow(r.vf[3]); }
L_1E38: { ++fl.t; { const std::uint8_t *q = qword(mem, i7 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_1E40: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 39u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n4 = vshadow(r.vf[4]); }
L_1E48: { ++fl.t; { const std::uint8_t *q = qword(mem, i7 + 3u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
L_1E50: { ++fl.t; { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[15].w[0], r.vf[3].w[2]); fl.end_q(r, qb, 7u); } }
L_1E58: { ++fl.t; }
L_1E60: { ++fl.t; const v4u uv = vaddd(n2, n4); set_vi(i2, 0u + 16384u); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1E68: { ++fl.t; const v4u uv = vmuld(n5, n1); set_vi(i2, i2 & i8); vstore(r.vf[5], uv); fl.stick<15u, kSticky>(uv); n5 = uv; }
L_1E70: { ++fl.t; set_vi(i2, i2 + i2); }
L_1E78: { ++fl.t; }
L_1E80: { ++fl.t; const v4u uv = vftoi(vload(r.vf[2]), 4); vstore(r.vf[4], uv); n4 = vshadow(r.vf[4]); }
L_1E88: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { const std::uint8_t *q = qword(mem, i7 + 2u); std::memcpy(&r.vf[2], q, 16); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n2 = vshadow(r.vf[2]); n3 = vsel(n3, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_1E90: { ++fl.t; const v4u uv = vftoi(vload(r.vf[5]), 0); vstore(r.vf[5], uv); n5 = vshadow(r.vf[5]); }
L_1E98: { ++fl.t; }
L_1EA0: { ++fl.t; set_vi(i3, r.vf[4].w[3]); }
L_1EA8: { ++fl.t; const v4u uv = vmuld(n2, vsplat(n3[3])); { std::uint8_t *q = qword(mem, i12 + 2u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); std::memcpy(q + 8, &r.vf[4].w[2], 4); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.stick<12u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_1EB0: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n3[3])); { std::uint8_t *q = qword(mem, i12 + 1u); std::memcpy(q, &r.vf[5], 16); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.push<2u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_1EB8: { ++fl.t; }
L_1EC0: { ++fl.t; set_vi(i2, i3 | i2); }
L_1EC8: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 2u); const std::uint32_t v = i2; std::memcpy(q + 12, &v, 4); } }
L_1ED0: { ++fl.t; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); { std::uint8_t *q = qword(mem, i12 + 0u); std::memcpy(q, &r.vf[2], 16); } }
L_1ED8: { ++fl.t; set_vi(i3, i11 - i12); }
L_1EE0: { ++fl.t; set_vi(i12, i12 + 3u); }
L_1EE8: { ++fl.t; pend = static_cast<std::int16_t>(i3) > 0; }
L_1EF0: { ++fl.t; set_vi(i10, i10 + 1u); }
    if (pend) { pend = false; goto L_1F38; }
L_1EF8: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i15; std::memcpy(q + 12, &v, 4); } }
L_1F00: { ++fl.t; set_vi(i15, (((7936u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1F08: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i1; std::memcpy(q + 8, &v, 4); } }
    if (pend) { pend = false; goto L_1820; }
L_1F10: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 8, 2); set_vi(i1, v); } }
L_1F18: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 12, 2); set_vi(i15, v); } }
L_1F20: { ++fl.t; set_vi(i10, 0u + 0u); }
L_1F28: { ++fl.t; set_vi(i9, 0u + i12); }
L_1F30: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_1F38: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 4, 2); set_vi(i2, v); } }
L_1F40: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 0, 2); set_vi(i3, v); } }
L_1F48: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1F50: { ++fl.t; set_vi(i14, i14 + 1u); }
    if (pendj) { pendj = false; vflushd(r.vf[3], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); goto dispatch; }
    vflushd(r.vf[3], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); 
L_1F58: { ++fl.t; { set_vi(i14, i14 - 1u); std::uint8_t *q = qword(mem, i14); std::memcpy(q, &r.vf[13], 16); } }
L_1F60: { ++fl.t; { set_vi(i14, i14 - 1u); std::uint8_t *q = qword(mem, i14); std::memcpy(q, &r.vf[18], 16); } }
L_1F68: { ++fl.t; { set_vi(i14, i14 - 1u); std::uint8_t *q = qword(mem, i14); std::memcpy(q, &r.vf[19], 16); } }
L_1F70: { ++fl.t; { set_vi(i14, i14 - 1u); std::uint8_t *q = qword(mem, i14); std::memcpy(q, &r.vf[23], 16); } }
L_1F78: { ++fl.t; set_vi(i14, i14 - 1u); }
L_1F80: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i15; std::memcpy(q + 12, &v, 4); } }
L_1F88: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i8; std::memcpy(q + 8, &v, 4); } }
L_1F90: { ++fl.t; set_vi(i14, i14 - 1u); }
L_1F98: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i9; std::memcpy(q + 12, &v, 4); } }
L_1FA0: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i10; std::memcpy(q + 8, &v, 4); } }
L_1FA8: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i11; std::memcpy(q + 4, &v, 4); } }
L_1FB0: { ++fl.t; set_vi(i15, (((8112u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1FB8: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i12; std::memcpy(q + 0, &v, 4); } }
    if (pend) { pend = false; goto L_2418; }
L_1FC0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 0, 2); set_vi(i12, v); } }
L_1FC8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 4, 2); set_vi(i11, v); } }
L_1FD0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 8, 2); set_vi(i10, v); } }
L_1FD8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 12, 2); set_vi(i9, v); } }
L_1FE0: { ++fl.t; pend = 0u == i3; }
L_1FE8: { ++fl.t; set_vi(i14, i14 + 1u); }
    if (pend) { pend = false; goto L_2038; }
L_1FF0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 133u); std::memcpy(&r.vf[1], q, 16); } n1 = vshadow(r.vf[1]); }
L_1FF8: { ++fl.t; set_vi(i4, 0u + i2); }
L_2000: { ++fl.t; set_vi(i5, 0u + i3); }
L_2008: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4) + 8, 2); set_vi(i7, v); } }
L_2010: { ++fl.t; set_vi(i5, i5 - 1u); }
L_2018: { ++fl.t; set_vi(i15, (((8216u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_2020: { ++fl.t; set_vi(i4, i4 + 1u); }
    if (pend) { pend = false; goto L_1E18; }
L_2028: { ++fl.t; pend = 0u != i5; }
L_2030: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4) + 8, 2); set_vi(i7, v); } }
    if (pend) { pend = false; goto L_2010; }
L_2038: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 8, 2); set_vi(i8, v); } }
L_2040: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 12, 2); set_vi(i15, v); } }
L_2048: { ++fl.t; set_vi(i14, i14 + 1u); }
L_2050: { ++fl.t; { const std::uint8_t *q = qword(mem, i14); std::memcpy(&r.vf[23], q, 16); set_vi(i14, i14 + 1u); } n23 = vshadow(r.vf[23]); }
L_2058: { ++fl.t; { const std::uint8_t *q = qword(mem, i14); std::memcpy(&r.vf[19], q, 16); set_vi(i14, i14 + 1u); } n19 = vshadow(r.vf[19]); }
L_2060: { ++fl.t; { const std::uint8_t *q = qword(mem, i14); std::memcpy(&r.vf[18], q, 16); set_vi(i14, i14 + 1u); } n18 = vshadow(r.vf[18]); }
L_2068: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_2070: { ++fl.t; { const std::uint8_t *q = qword(mem, i14); std::memcpy(&r.vf[13], q, 16); set_vi(i14, i14 + 1u); } n13 = vshadow(r.vf[13]); }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[14] = i14; r.vi[15] = i15; vhop(hop, ((8312u + sh) & 16383u));
    return;
L_2418: { ++fl.t; r.i = 3212836864u; }
L_2420: { ++fl.t; set_vi(i7, 0u + 0u); }
L_2428: { ++fl.t; set_vi(i8, 0u + 180u); }
L_2430: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 0u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_2438: { ++fl.t; set_vi(i12, 0u + 3u); }
L_2440: { ++fl.t; set_vi(i2, 0u + 7u); }
L_2448: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 1u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
L_2450: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 2u); std::memcpy(&r.vf[4], q, 16); } n4 = vshadow(r.vf[4]); }
L_2458: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 3u); std::memcpy(&r.vf[3], q, 16); } n3 = vshadow(r.vf[3]); }
L_2460: { ++fl.t; set_vi(i9, i8 + 4u); }
L_2468: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 0u); std::memcpy(q, &r.vf[2], 16); } }
L_2470: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 1u); std::memcpy(q, &r.vf[5], 16); } }
L_2478: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 2u); std::memcpy(q, &r.vf[4], 16); } }
L_2480: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 3u); std::memcpy(q, &r.vf[3], 16); } }
L_2488: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 0u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
L_2490: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 1u); std::memcpy(&r.vf[4], q, 16); } n4 = vshadow(r.vf[4]); }
L_2498: { ++fl.t; { std::uint8_t *q = qword(mem, i7 + 0u); const std::uint32_t v = i8; std::memcpy(q + 8, &v, 4); } }
L_24A0: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 2u); std::memcpy(&r.vf[3], q, 16); } n3 = vshadow(r.vf[3]); }
L_24A8: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 3u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_24B0: { ++fl.t; { std::uint8_t *q = qword(mem, i9 + 0u); std::memcpy(q, &r.vf[5], 16); } }
L_24B8: { ++fl.t; { std::uint8_t *q = qword(mem, i9 + 1u); std::memcpy(q, &r.vf[4], 16); } }
L_24C0: { ++fl.t; set_vi(i5, i9 + 4u); }
L_24C8: { ++fl.t; { std::uint8_t *q = qword(mem, i9 + 2u); std::memcpy(q, &r.vf[3], 16); } }
L_24D0: { ++fl.t; { std::uint8_t *q = qword(mem, i9 + 3u); std::memcpy(q, &r.vf[2], 16); } }
L_24D8: { ++fl.t; set_vi(i4, 0u + i7); }
L_24E0: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 0u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_24E8: { ++fl.t; { std::uint8_t *q = qword(mem, i7 + 1u); const std::uint32_t v = i9; std::memcpy(q + 8, &v, 4); } }
L_24F0: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
L_24F8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i9, v); } }
L_2500: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(&r.vf[4], q, 16); } n4 = vshadow(r.vf[4]); }
L_2508: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(&r.vf[3], q, 16); } n3 = vshadow(r.vf[3]); }
L_2510: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 44u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } n1 = vshadow(r.vf[1]); }
L_2518: { ++fl.t; { std::uint8_t *q = qword(mem, i5 + 0u); std::memcpy(q, &r.vf[2], 16); } }
L_2520: { ++fl.t; { const std::uint8_t *q = qword(mem, i9 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_2528: { ++fl.t; { std::uint8_t *q = qword(mem, i5 + 1u); std::memcpy(q, &r.vf[5], 16); } }
L_2530: { ++fl.t; r.clip = 0u; fl.set_clip(r.clip, fl.t - 4u); }
L_2538: { ++fl.t; { std::uint8_t *q = qword(mem, i5 + 2u); std::memcpy(q, &r.vf[4], 16); } }
L_2540: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); { std::uint8_t *q = qword(mem, i5 + 3u); std::memcpy(q, &r.vf[3], 16); } r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2548: { ++fl.t; { std::uint8_t *q = qword(mem, i7 + 2u); const std::uint32_t v = i5; std::memcpy(q + 8, &v, 4); } }
L_2550: { ++fl.t; set_vi(i8, i5 + 4u); }
L_2558: { ++fl.t; set_vi(i5, i4 + 1u); }
L_2560: { ++fl.t; set_vi(i3, 0u + 0u); }
L_2568: { ++fl.t; set_vi(i1, (fl.clip() & 1u) ? 1u : 0u); }
L_2570: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i5 + 0u) + 8, 2); set_vi(i10, v); } }
L_2578: { ++fl.t; set_vi(i11, i5 + 1u); }
L_2580: { ++fl.t; pend = 0u == i1; }
L_2588: { ++fl.t; set_vi(i12, i12 - 1u); }
    if (pend) { pend = false; goto L_2758; }
L_2590: { ++fl.t; { const std::uint8_t *q = qword(mem, i9 + 2u); std::memcpy(&r.vf[4], q, 16); } n4 = vshadow(r.vf[4]); }
L_2598: { ++fl.t; vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_25A0: { ++fl.t; { const std::uint8_t *q = qword(mem, i9 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_25A8: { ++fl.t; { const std::uint8_t *q = qword(mem, i9 + 3u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
L_25B0: { ++fl.t; { const std::uint8_t *q = qword(mem, i10 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_25B8: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_25C0: { ++fl.t; }
L_25C8: { ++fl.t; }
L_25D0: { ++fl.t; }
L_25D8: { ++fl.t; set_vi(i1, (fl.clip() & 1u) ? 1u : 0u); }
L_25E0: { ++fl.t; pend = 0u != i1; }
L_25E8: { ++fl.t; }
    if (pend) { pend = false; goto L_2700; }
L_25F0: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n1[3])); { const std::uint8_t *q = qword(mem, i10 + 0u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n2 = vshadow(r.vf[2]); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_25F8: { ++fl.t; { const std::uint8_t *q = qword(mem, i10 + 1u); std::memcpy(&r.vf[7], q, 16); } n7 = vshadow(r.vf[7]); }
L_2600: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 38u); vstore(r.vf[10], vsel(vload(r.vf[10]), vload_ptr(q), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } n10 = vshadow(r.vf[10]); }
L_2608: { ++fl.t; vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); const v4u uv = vsubd(n2, n1); vstore(r.vf[6], vsel(vload(r.vf[6]), vload(r.vf[9]), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n6 = vshadow(r.vf[6]); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2610: { ++fl.t; const v4u uv = vsubd(n7, n3); { const std::uint8_t *q = qword(mem, i10 + 2u); std::memcpy(&r.vf[7], q, 16); } vstore(r.vf[8], uv); fl.stick<15u, kSticky>(uv); n7 = vshadow(r.vf[7]); n8 = uv; }
L_2618: { ++fl.t; const v4u uv = vsubd(n9, n3); { const std::uint8_t *q = qword(mem, i10 + 3u); std::memcpy(&r.vf[9], q, 16); } vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n9 = vshadow(r.vf[9]); n12 = vsel(n12, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2620: { ++fl.t; const v4u uv = vmuld(n10, n1); set_vi(i1, 0u + i8); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2628: { ++fl.t; const v4u uv = vmuld(n6, vsplat(n1[2])); set_vi(i8, i8 + 4u); vstore(r.vf[11], vsel(vload(r.vf[11]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n11 = vsel(n11, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2630: { ++fl.t; const v4u uv = vmuld(n10, n2); set_vi(i4, i2 + i3); vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n10 = vsel(n10, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2638: { ++fl.t; const v4u uv = vmuld(n6, vsplat(n2[2])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[12].w[0], r.vf[8].w[0]); fl.end_q(r, qb, 7u); } vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n8 = vsel(n8, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2640: { ++fl.t; const v4u uv = vsubd(n7, n4); { std::uint8_t *q = qword(mem, i4 + 0u); const std::uint32_t v = i1; std::memcpy(q + 8, &v, 4); } vstore(r.vf[7], uv); fl.stick<15u, kSticky>(uv); n7 = uv; }
L_2648: { ++fl.t; const v4u uv = vmuld(n11, vfix(vsplat(r.i))); set_vi(i3, i3 + 1u); vstore(r.vf[11], vsel(vload(r.vf[11]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n11 = vsel(n11, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2650: { ++fl.t; const v4u uv = vsubd(n9, n5); vstore(r.vf[9], uv); fl.stick<15u, kSticky>(uv); n9 = uv; }
L_2658: { ++fl.t; const v4u uv = vaddd(n10, n8); vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n8 = vsel(n8, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2660: { ++fl.t; const v4u uv = vsubd(n11, n3); fl.flush_q(r); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2668: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[3].w[0], r.vf[8].w[0]); fl.end_q(r, qb, 7u); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_2670: { ++fl.t; const v4u uv = vmuld(n8, vsplat(n2[3])); vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<7u, kSticky>(uv); n8 = vsel(n8, uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_2678: { ++fl.t; const v4u uv = vmuld(n9, vsplat(n2[3])); vstore(r.vf[9], uv); fl.stick<15u, kSticky>(uv); n9 = uv; }
L_2680: { ++fl.t; const v4u uv = vaddd(n3, n8); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<7u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_2688: { ++fl.t; const v4u uv = vaddd(n5, n9); fl.flush_q(r); vstore(r.vf[3], uv); fl.stick<15u, kSticky>(uv); n3 = uv; }
L_2690: { ++fl.t; fl.flush_q(r); vflushd(r.vf[6], v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { std::uint8_t *q = qword(mem, i1 + 1u); std::memcpy(q, &r.vf[6], 16); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_2698: { ++fl.t; vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vmuld(n2, vsplat(n5[3])); { std::uint8_t *q = qword(mem, i1 + 3u); std::memcpy(q, &r.vf[3], 16); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_26A0: { ++fl.t; const v4u uv = vmuld(n7, vsplat(n5[3])); vstore(r.vf[5], uv); fl.push<15u, kSticky>(uv); n5 = uv; }
L_26A8: { ++fl.t; const v4u uv = vaddd(n1, n3); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_26B0: { ++fl.t; vflushd(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vaddd(n4, n5); { std::uint8_t *q = qword(mem, i1 + 0u); std::memcpy(q + 0, &r.vf[1].w[0], 4); std::memcpy(q + 4, &r.vf[1].w[1], 4); std::memcpy(q + 8, &r.vf[1].w[2], 4); } vstore(r.vf[4], uv); fl.push<15u, kSticky>(uv); n4 = uv; }
L_26B8: { ++fl.t; pend = 0u == i12; }
L_26C0: { ++fl.t; vflushd(r.vf[4], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i1 + 2u); std::memcpy(q, &r.vf[4], 16); } }
    if (pend) { pend = false; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_2900; }
L_26C8: { ++fl.t; set_vi(i12, i12 - 1u); }
L_26D0: { ++fl.t; set_vi(i9, 0u + i10); }
L_26D8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i11 + 0u) + 8, 2); set_vi(i10, v); } }
L_26E0: { ++fl.t; pend = 0u != i12; }
L_26E8: { ++fl.t; set_vi(i11, i11 + 1u); }
    if (pend) { pend = false; vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_2758; }
L_26F0: { ++fl.t; pend = true; }
L_26F8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i10, v); } }
    if (pend) { pend = false; vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_2758; }
    vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); 
L_2700: { ++fl.t; { const std::uint8_t *q = qword(mem, i10 + 2u); std::memcpy(&r.vf[4], q, 16); } n4 = vshadow(r.vf[4]); }
L_2708: { ++fl.t; vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_2710: { ++fl.t; { const std::uint8_t *q = qword(mem, i10 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_2718: { ++fl.t; pend = 0u == i12; }
L_2720: { ++fl.t; { const std::uint8_t *q = qword(mem, i10 + 3u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
    if (pend) { pend = false; goto L_2900; }
L_2728: { ++fl.t; set_vi(i12, i12 - 1u); }
L_2730: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i11 + 0u) + 8, 2); set_vi(i10, v); } }
L_2738: { ++fl.t; pend = 0u != i12; }
L_2740: { ++fl.t; set_vi(i11, i11 + 1u); }
    if (pend) { pend = false; goto L_25B0; }
L_2748: { ++fl.t; pend = true; }
L_2750: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i10, v); } }
    if (pend) { pend = false; goto L_25B0; }
L_2758: { ++fl.t; { const std::uint8_t *q = qword(mem, i10 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_2760: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2768: { ++fl.t; }
L_2770: { ++fl.t; }
L_2778: { ++fl.t; }
L_2780: { ++fl.t; set_vi(i1, (fl.clip() & 1u) ? 1u : 0u); }
L_2788: { ++fl.t; pend = 0u != i1; }
L_2790: { ++fl.t; }
    if (pend) { pend = false; goto L_27F0; }
L_2798: { ++fl.t; set_vi(i1, i2 + i3); }
L_27A0: { ++fl.t; set_vi(i3, i3 + 1u); }
L_27A8: { ++fl.t; pend = 0u == i12; }
L_27B0: { ++fl.t; { std::uint8_t *q = qword(mem, i1 + 0u); const std::uint32_t v = i9; std::memcpy(q + 8, &v, 4); } }
    if (pend) { pend = false; goto L_2900; }
L_27B8: { ++fl.t; set_vi(i12, i12 - 1u); }
L_27C0: { ++fl.t; set_vi(i9, 0u + i10); }
L_27C8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i11 + 0u) + 8, 2); set_vi(i10, v); } }
L_27D0: { ++fl.t; pend = 0u != i12; }
L_27D8: { ++fl.t; set_vi(i11, i11 + 1u); }
    if (pend) { pend = false; goto L_2758; }
L_27E0: { ++fl.t; pend = true; }
L_27E8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i10, v); } }
    if (pend) { pend = false; goto L_2758; }
L_27F0: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n1[3])); { const std::uint8_t *q = qword(mem, i9 + 0u); vstore(r.vf[6], vsel(vload(r.vf[6]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n6 = vshadow(r.vf[6]); n4 = vsel(n4, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_27F8: { ++fl.t; { const std::uint8_t *q = qword(mem, i10 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_2800: { ++fl.t; { const std::uint8_t *q = qword(mem, i9 + 1u); std::memcpy(&r.vf[9], q, 16); } n9 = vshadow(r.vf[9]); }
L_2808: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 38u); vstore(r.vf[5], vsel(vload(r.vf[5]), vload_ptr(q), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } n5 = vshadow(r.vf[5]); }
L_2810: { ++fl.t; vflushd(r.vf[4], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); const v4u uv = vsubd(n1, n6); vstore(r.vf[7], vsel(vload(r.vf[7]), vload(r.vf[4]), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n7 = vshadow(r.vf[7]); n8 = vsel(n8, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2818: { ++fl.t; const v4u uv = vsubd(n4, n9); vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); vstore(r.vf[11], vsel(vload(r.vf[11]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vshadow(r.vf[3]); n11 = vsel(n11, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2820: { ++fl.t; const v4u uv = vmuld(n5, n6); { const std::uint8_t *q = qword(mem, i9 + 3u); std::memcpy(&r.vf[10], q, 16); } vstore(r.vf[18], vsel(vload(r.vf[18]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n10 = vshadow(r.vf[10]); n18 = vsel(n18, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2828: { ++fl.t; const v4u uv = vmuld(n7, vsplat(n6[2])); { const std::uint8_t *q = qword(mem, i9 + 2u); std::memcpy(&r.vf[2], q, 16); } vstore(r.vf[13], vsel(vload(r.vf[13]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n2 = vshadow(r.vf[2]); n13 = vsel(n13, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2830: { ++fl.t; const v4u uv = vsubd(n3, n9); { const std::uint8_t *q = qword(mem, i10 + 2u); std::memcpy(&r.vf[4], q, 16); } vstore(r.vf[12], uv); fl.stick<15u, kSticky>(uv); n4 = vshadow(r.vf[4]); n12 = uv; }
L_2838: { ++fl.t; const v4u uv = vmuld(n5, n8); { const std::uint8_t *q = qword(mem, i10 + 3u); std::memcpy(&r.vf[5], q, 16); } vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n5 = vshadow(r.vf[5]); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2840: { ++fl.t; const v4u uv = vmuld(n7, vsplat(n8[2])); set_vi(i1, i2 + i3); vstore(r.vf[23], vsel(vload(r.vf[23]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n23 = vsel(n23, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2848: { ++fl.t; const v4u uv = vmuld(n13, vfix(vsplat(r.i))); { std::uint8_t *q = qword(mem, i1 + 1u); const std::uint32_t v = i10; std::memcpy(q + 8, &v, 4); } vstore(r.vf[19], vsel(vload(r.vf[19]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n19 = vsel(n19, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2850: { ++fl.t; const v4u uv = vsubd(n4, n2); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[11].w[0], r.vf[12].w[0]); fl.end_q(r, qb, 7u); } vstore(r.vf[11], uv); fl.stick<15u, kSticky>(uv); n11 = uv; }
L_2858: { ++fl.t; const v4u uv = vsubd(n5, n10); { std::uint8_t *q = qword(mem, i1 + 0u); const std::uint32_t v = i9; std::memcpy(q + 8, &v, 4); } vstore(r.vf[13], uv); fl.stick<15u, kSticky>(uv); n13 = uv; }
L_2860: { ++fl.t; const v4u uv = vaddd(n9, n23); set_vi(i3, i3 + 2u); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2868: { ++fl.t; const v4u uv = vsubd(n19, n18); fl.flush_q(r); vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n12 = vsel(n12, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2870: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[12].w[0], r.vf[9].w[0]); fl.end_q(r, qb, 7u); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_2878: { ++fl.t; const v4u uv = vmuld(n12, vsplat(n6[3])); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<7u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_2880: { ++fl.t; const v4u uv = vmuld(n13, vsplat(n6[3])); fl.flush_q(r); vstore(r.vf[12], uv); fl.stick<15u, kSticky>(uv); n12 = uv; }
L_2888: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_2890: { ++fl.t; const v4u uv = vaddd(n9, n7); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<7u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_2898: { ++fl.t; const v4u uv = vaddd(n10, n12); vstore(r.vf[12], uv); fl.stick<15u, kSticky>(uv); n12 = uv; }
L_28A0: { ++fl.t; const v4u uv = vmuld(n8, vsplat(n6[3])); vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n10 = vsel(n10, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_28A8: { ++fl.t; vflushd(r.vf[7], v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vmuld(n11, vsplat(n6[3])); { std::uint8_t *q = qword(mem, i10 + 1u); std::memcpy(q, &r.vf[7], 16); } vstore(r.vf[9], uv); fl.push<15u, kSticky>(uv); n9 = uv; }
L_28B0: { ++fl.t; vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vaddd(n6, n10); { std::uint8_t *q = qword(mem, i10 + 3u); std::memcpy(q, &r.vf[12], 16); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_28B8: { ++fl.t; vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vaddd(n2, n9); { std::uint8_t *q = qword(mem, i10 + 0u); std::memcpy(q + 0, &r.vf[6].w[0], 4); std::memcpy(q + 4, &r.vf[6].w[1], 4); std::memcpy(q + 8, &r.vf[6].w[2], 4); } vstore(r.vf[2], uv); fl.push<15u, kSticky>(uv); n2 = uv; }
L_28C0: { ++fl.t; pend = 0u == i12; }
L_28C8: { ++fl.t; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i10 + 2u); std::memcpy(q, &r.vf[2], 16); } }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[19], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[23], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_2900; }
L_28D0: { ++fl.t; set_vi(i12, i12 - 1u); }
L_28D8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i11 + 0u) + 8, 2); set_vi(i10, v); } }
L_28E0: { ++fl.t; pend = 0u != i12; }
L_28E8: { ++fl.t; set_vi(i11, i11 + 1u); }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[19], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[23], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_25B0; }
L_28F0: { ++fl.t; pend = true; }
L_28F8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i10, v); } }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[19], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[23], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_25B0; }
    vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[19], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[23], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); 
L_2900: { ++fl.t; pend = 0u == i3; }
L_2908: { ++fl.t; }
    if (pend) { pend = false; goto L_3568; }
L_2910: { ++fl.t; set_vi(i4, 0u + 7u); }
L_2918: { ++fl.t; set_vi(i6, 0u + i4); }
L_2920: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i6 + 0u) + 8, 2); set_vi(i5, v); } }
L_2928: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 44u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } n1 = vshadow(r.vf[1]); }
L_2930: { ++fl.t; set_vi(i6, i6 + 1u); }
L_2938: { ++fl.t; set_vi(i9, 0u + i3); }
L_2940: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_2948: { ++fl.t; set_vi(i7, i6 + 1u); }
L_2950: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i6 + 0u) + 8, 2); set_vi(i6, v); } }
L_2958: { ++fl.t; set_vi(i3, 0u + 0u); }
L_2960: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); set_vi(i2, 0u + 0u); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2968: { ++fl.t; set_vi(i9, i9 - 1u); }
L_2970: { ++fl.t; }
L_2978: { ++fl.t; }
L_2980: { ++fl.t; set_vi(i1, (fl.clip() & 2u) ? 1u : 0u); }
L_2988: { ++fl.t; pend = 0u == i1; }
L_2990: { ++fl.t; }
    if (pend) { pend = false; goto L_2B78; }
L_2998: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 2u); std::memcpy(&r.vf[4], q, 16); } n4 = vshadow(r.vf[4]); }
L_29A0: { ++fl.t; vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_29A8: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_29B0: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 3u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
L_29B8: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_29C0: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_29C8: { ++fl.t; }
L_29D0: { ++fl.t; }
L_29D8: { ++fl.t; }
L_29E0: { ++fl.t; set_vi(i1, (fl.clip() & 2u) ? 1u : 0u); }
L_29E8: { ++fl.t; pend = 0u != i1; }
L_29F0: { ++fl.t; }
    if (pend) { pend = false; goto L_2B20; }
L_29F8: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n1[3])); { const std::uint8_t *q = qword(mem, i6 + 0u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n2 = vshadow(r.vf[2]); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2A00: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(&r.vf[7], q, 16); } n7 = vshadow(r.vf[7]); }
L_2A08: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 38u); vstore(r.vf[9], vsel(vload(r.vf[9]), vload_ptr(q), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } n9 = vshadow(r.vf[9]); }
L_2A10: { ++fl.t; const v4u uv = vmuld(n6, vfix(vsplat(r.i))); { const std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(&r.vf[6], q, 16); } vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n6 = vshadow(r.vf[6]); n10 = vsel(n10, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2A18: { ++fl.t; const v4u uv = vsubd(n2, n1); { const std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(&r.vf[8], q, 16); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n8 = vshadow(r.vf[8]); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2A20: { ++fl.t; const v4u uv = vsubd(n7, n3); set_vi(i1, 0u + i8); vstore(r.vf[7], uv); fl.stick<15u, kSticky>(uv); n7 = uv; }
L_2A28: { ++fl.t; set_vi(i8, i8 + 4u); }
L_2A30: { ++fl.t; vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); const v4u uv = vsubd(n10, n3); vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[10]), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vshadow(r.vf[3]); n10 = vsel(n10, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2A38: { ++fl.t; set_vi(i5, i2 + i3); }
L_2A40: { ++fl.t; const v4u uv = vsubd(n6, n4); { std::uint8_t *q = qword(mem, i5 + 0u); const std::uint32_t v = i1; std::memcpy(q + 8, &v, 4); } vstore(r.vf[6], uv); fl.stick<15u, kSticky>(uv); n6 = uv; }
L_2A48: { ++fl.t; const v4u uv = vsubd(n8, n5); set_vi(i3, i3 + 1u); vstore(r.vf[8], uv); fl.stick<15u, kSticky>(uv); n8 = uv; }
L_2A50: { ++fl.t; const v4u uv = vmuld(n3, vsplat(n1[2])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[10].w[0], r.vf[7].w[0]); fl.end_q(r, qb, 7u); } vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n10 = vsel(n10, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2A58: { ++fl.t; const v4u uv = vmuld(n3, vsplat(n2[2])); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2A60: { ++fl.t; const v4u uv = vmuld(n9, n2); vstore(r.vf[11], vsel(vload(r.vf[11]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n11 = vsel(n11, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2A68: { ++fl.t; const v4u uv = vmuld(n9, n1); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2A70: { ++fl.t; const v4u uv = vmuld(n10, vfix(vsplat(r.i))); vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n10 = vsel(n10, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2A78: { ++fl.t; const v4u uv = vaddd(n11, n7); fl.flush_q(r); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2A80: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_2A88: { ++fl.t; const v4u uv = vsubd(n10, n9); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2A90: { ++fl.t; const v4u uv = vmuld(n7, vsplat(n2[3])); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<7u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_2A98: { ++fl.t; const v4u uv = vmuld(n8, vsplat(n2[3])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[9].w[0], r.vf[7].w[0]); fl.end_q(r, qb, 7u); } vstore(r.vf[8], uv); fl.stick<15u, kSticky>(uv); n8 = uv; }
L_2AA0: { ++fl.t; const v4u uv = vaddd(n3, n7); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<7u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_2AA8: { ++fl.t; const v4u uv = vaddd(n5, n8); fl.flush_q(r); vstore(r.vf[5], uv); fl.stick<15u, kSticky>(uv); n5 = uv; }
L_2AB0: { ++fl.t; fl.flush_q(r); vflushd(r.vf[3], v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { std::uint8_t *q = qword(mem, i1 + 1u); std::memcpy(q, &r.vf[3], 16); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_2AB8: { ++fl.t; vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vmuld(n2, vsplat(n3[3])); { std::uint8_t *q = qword(mem, i1 + 3u); std::memcpy(q, &r.vf[5], 16); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2AC0: { ++fl.t; const v4u uv = vmuld(n6, vsplat(n3[3])); vstore(r.vf[3], uv); fl.push<15u, kSticky>(uv); n3 = uv; }
L_2AC8: { ++fl.t; const v4u uv = vaddd(n1, n5); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2AD0: { ++fl.t; vflushd(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vaddd(n4, n3); { std::uint8_t *q = qword(mem, i1 + 0u); std::memcpy(q + 0, &r.vf[1].w[0], 4); std::memcpy(q + 4, &r.vf[1].w[1], 4); std::memcpy(q + 8, &r.vf[1].w[2], 4); } vstore(r.vf[4], uv); fl.push<15u, kSticky>(uv); n4 = uv; }
L_2AD8: { ++fl.t; pend = 0u == i9; }
L_2AE0: { ++fl.t; vflushd(r.vf[4], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i1 + 2u); std::memcpy(q, &r.vf[4], 16); } }
    if (pend) { pend = false; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_2D30; }
L_2AE8: { ++fl.t; set_vi(i9, i9 - 1u); }
L_2AF0: { ++fl.t; set_vi(i5, 0u + i6); }
L_2AF8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_2B00: { ++fl.t; pend = 0u != i9; }
L_2B08: { ++fl.t; set_vi(i7, i7 + 1u); }
    if (pend) { pend = false; vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_2B78; }
L_2B10: { ++fl.t; pend = true; }
L_2B18: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_2B78; }
    vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); 
L_2B20: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(&r.vf[4], q, 16); } n4 = vshadow(r.vf[4]); }
L_2B28: { ++fl.t; vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_2B30: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_2B38: { ++fl.t; pend = 0u == i9; }
L_2B40: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
    if (pend) { pend = false; goto L_2D30; }
L_2B48: { ++fl.t; set_vi(i9, i9 - 1u); }
L_2B50: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_2B58: { ++fl.t; pend = 0u != i9; }
L_2B60: { ++fl.t; set_vi(i7, i7 + 1u); }
    if (pend) { pend = false; goto L_29B8; }
L_2B68: { ++fl.t; pend = true; }
L_2B70: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; goto L_29B8; }
L_2B78: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_2B80: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2B88: { ++fl.t; }
L_2B90: { ++fl.t; }
L_2B98: { ++fl.t; }
L_2BA0: { ++fl.t; set_vi(i1, (fl.clip() & 2u) ? 1u : 0u); }
L_2BA8: { ++fl.t; pend = 0u != i1; }
L_2BB0: { ++fl.t; }
    if (pend) { pend = false; goto L_2C10; }
L_2BB8: { ++fl.t; set_vi(i1, i2 + i3); }
L_2BC0: { ++fl.t; set_vi(i3, i3 + 1u); }
L_2BC8: { ++fl.t; pend = 0u == i9; }
L_2BD0: { ++fl.t; { std::uint8_t *q = qword(mem, i1 + 0u); const std::uint32_t v = i5; std::memcpy(q + 8, &v, 4); } }
    if (pend) { pend = false; goto L_2D30; }
L_2BD8: { ++fl.t; set_vi(i9, i9 - 1u); }
L_2BE0: { ++fl.t; set_vi(i5, 0u + i6); }
L_2BE8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_2BF0: { ++fl.t; pend = 0u != i9; }
L_2BF8: { ++fl.t; set_vi(i7, i7 + 1u); }
    if (pend) { pend = false; goto L_2B78; }
L_2C00: { ++fl.t; pend = true; }
L_2C08: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; goto L_2B78; }
L_2C10: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n1[3])); { const std::uint8_t *q = qword(mem, i5 + 0u); vstore(r.vf[6], vsel(vload(r.vf[6]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n6 = vshadow(r.vf[6]); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2C18: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_2C20: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 38u); vstore(r.vf[11], vsel(vload(r.vf[11]), vload_ptr(q), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } n11 = vshadow(r.vf[11]); }
L_2C28: { ++fl.t; const v4u uv = vmuld(n3, vfix(vsplat(r.i))); { const std::uint8_t *q = qword(mem, i5 + 1u); std::memcpy(&r.vf[9], q, 16); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n9 = vshadow(r.vf[9]); n4 = vsel(n4, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2C30: { ++fl.t; vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_2C38: { ++fl.t; const v4u uv = vsubd(n1, n6); { const std::uint8_t *q = qword(mem, i5 + 2u); std::memcpy(&r.vf[2], q, 16); } vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n2 = vshadow(r.vf[2]); n7 = vsel(n7, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2C40: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 3u); std::memcpy(&r.vf[10], q, 16); } n10 = vshadow(r.vf[10]); }
L_2C48: { ++fl.t; vflushd(r.vf[4], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); const v4u uv = vsubd(n4, n9); vstore(r.vf[8], vsel(vload(r.vf[8]), vload(r.vf[4]), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); vstore(r.vf[13], vsel(vload(r.vf[13]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n8 = vshadow(r.vf[8]); n13 = vsel(n13, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2C50: { ++fl.t; const v4u uv = vsubd(n3, n9); { const std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(&r.vf[4], q, 16); } vstore(r.vf[12], uv); fl.stick<15u, kSticky>(uv); n4 = vshadow(r.vf[4]); n12 = uv; }
L_2C58: { ++fl.t; const v4u uv = vmuld(n11, n7); { const std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(&r.vf[5], q, 16); } vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n5 = vshadow(r.vf[5]); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2C60: { ++fl.t; const v4u uv = vmuld(n11, n6); set_vi(i1, i2 + i3); vstore(r.vf[18], vsel(vload(r.vf[18]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n18 = vsel(n18, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2C68: { ++fl.t; const v4u uv = vmuld(n8, vsplat(n6[2])); { std::uint8_t *q = qword(mem, i1 + 1u); const std::uint32_t v = i6; std::memcpy(q + 8, &v, 4); } vstore(r.vf[19], vsel(vload(r.vf[19]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n19 = vsel(n19, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2C70: { ++fl.t; const v4u uv = vmuld(n8, vsplat(n7[2])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[13].w[0], r.vf[12].w[0]); fl.end_q(r, qb, 7u); } vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n12 = vsel(n12, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2C78: { ++fl.t; const v4u uv = vsubd(n4, n2); { std::uint8_t *q = qword(mem, i1 + 0u); const std::uint32_t v = i5; std::memcpy(q + 8, &v, 4); } vstore(r.vf[11], uv); fl.stick<15u, kSticky>(uv); n11 = uv; }
L_2C80: { ++fl.t; const v4u uv = vsubd(n5, n10); set_vi(i3, i3 + 2u); vstore(r.vf[13], uv); fl.stick<15u, kSticky>(uv); n13 = uv; }
L_2C88: { ++fl.t; const v4u uv = vmuld(n19, vfix(vsplat(r.i))); vstore(r.vf[19], vsel(vload(r.vf[19]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n19 = vsel(n19, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2C90: { ++fl.t; const v4u uv = vaddd(n9, n12); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2C98: { ++fl.t; const v4u uv = vsubd(n19, n18); fl.flush_q(r); vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n12 = vsel(n12, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2CA0: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[12].w[0], r.vf[9].w[0]); fl.end_q(r, qb, 7u); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_2CA8: { ++fl.t; const v4u uv = vmuld(n12, vsplat(n6[3])); vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<7u, kSticky>(uv); n8 = vsel(n8, uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_2CB0: { ++fl.t; const v4u uv = vmuld(n13, vsplat(n6[3])); vstore(r.vf[12], uv); fl.stick<15u, kSticky>(uv); n12 = uv; }
L_2CB8: { ++fl.t; const v4u uv = vaddd(n9, n8); vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<7u, kSticky>(uv); n8 = vsel(n8, uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_2CC0: { ++fl.t; const v4u uv = vaddd(n10, n12); fl.flush_q(r); vstore(r.vf[9], uv); fl.stick<15u, kSticky>(uv); n9 = uv; }
L_2CC8: { ++fl.t; fl.flush_q(r); vflushd(r.vf[8], v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(q, &r.vf[8], 16); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_2CD0: { ++fl.t; vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vmuld(n7, vsplat(n6[3])); { std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(q, &r.vf[9], 16); } vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2CD8: { ++fl.t; const v4u uv = vmuld(n11, vsplat(n6[3])); vstore(r.vf[11], uv); fl.push<15u, kSticky>(uv); n11 = uv; }
L_2CE0: { ++fl.t; const v4u uv = vaddd(n6, n9); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2CE8: { ++fl.t; vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vaddd(n2, n11); { std::uint8_t *q = qword(mem, i6 + 0u); std::memcpy(q + 0, &r.vf[6].w[0], 4); std::memcpy(q + 4, &r.vf[6].w[1], 4); std::memcpy(q + 8, &r.vf[6].w[2], 4); } vstore(r.vf[2], uv); fl.push<15u, kSticky>(uv); n2 = uv; }
L_2CF0: { ++fl.t; pend = 0u == i9; }
L_2CF8: { ++fl.t; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(q, &r.vf[2], 16); } }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[19], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_2D30; }
L_2D00: { ++fl.t; set_vi(i9, i9 - 1u); }
L_2D08: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_2D10: { ++fl.t; pend = 0u != i9; }
L_2D18: { ++fl.t; set_vi(i7, i7 + 1u); }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[19], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_29B8; }
L_2D20: { ++fl.t; pend = true; }
L_2D28: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[19], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_29B8; }
    vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[19], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); 
L_2D30: { ++fl.t; pend = 0u == i3; }
L_2D38: { ++fl.t; }
    if (pend) { pend = false; goto L_3568; }
L_2D40: { ++fl.t; set_vi(i4, 0u + 0u); }
L_2D48: { ++fl.t; set_vi(i6, 0u + i4); }
L_2D50: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i6 + 0u) + 8, 2); set_vi(i5, v); } }
L_2D58: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 44u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } n1 = vshadow(r.vf[1]); }
L_2D60: { ++fl.t; set_vi(i6, i6 + 1u); }
L_2D68: { ++fl.t; set_vi(i9, 0u + i3); }
L_2D70: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_2D78: { ++fl.t; set_vi(i7, i6 + 1u); }
L_2D80: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i6 + 0u) + 8, 2); set_vi(i6, v); } }
L_2D88: { ++fl.t; set_vi(i3, 0u + 0u); }
L_2D90: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); set_vi(i2, 0u + 7u); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2D98: { ++fl.t; set_vi(i9, i9 - 1u); }
L_2DA0: { ++fl.t; }
L_2DA8: { ++fl.t; }
L_2DB0: { ++fl.t; set_vi(i1, (fl.clip() & 4u) ? 1u : 0u); }
L_2DB8: { ++fl.t; pend = 0u == i1; }
L_2DC0: { ++fl.t; }
    if (pend) { pend = false; goto L_2F90; }
L_2DC8: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 2u); std::memcpy(&r.vf[4], q, 16); } n4 = vshadow(r.vf[4]); }
L_2DD0: { ++fl.t; vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_2DD8: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_2DE0: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 3u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
L_2DE8: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_2DF0: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2DF8: { ++fl.t; }
L_2E00: { ++fl.t; }
L_2E08: { ++fl.t; }
L_2E10: { ++fl.t; set_vi(i1, (fl.clip() & 4u) ? 1u : 0u); }
L_2E18: { ++fl.t; pend = 0u != i1; }
L_2E20: { ++fl.t; }
    if (pend) { pend = false; goto L_2F38; }
L_2E28: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n1[3])); { const std::uint8_t *q = qword(mem, i6 + 0u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n2 = vshadow(r.vf[2]); n9 = vsel(n9, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2E30: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(&r.vf[7], q, 16); } n7 = vshadow(r.vf[7]); }
L_2E38: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 38u); vstore(r.vf[10], vsel(vload(r.vf[10]), vload_ptr(q), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); } n10 = vshadow(r.vf[10]); }
L_2E40: { ++fl.t; vflushd(r.vf[9], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); const v4u uv = vsubd(n2, n1); vstore(r.vf[6], vsel(vload(r.vf[6]), vload(r.vf[9]), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n6 = vshadow(r.vf[6]); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2E48: { ++fl.t; const v4u uv = vsubd(n7, n3); { const std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(&r.vf[7], q, 16); } vstore(r.vf[8], uv); fl.stick<15u, kSticky>(uv); n7 = vshadow(r.vf[7]); n8 = uv; }
L_2E50: { ++fl.t; const v4u uv = vsubd(n9, n3); { const std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(&r.vf[9], q, 16); } vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n9 = vshadow(r.vf[9]); n12 = vsel(n12, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2E58: { ++fl.t; const v4u uv = vmuld(n10, n1); set_vi(i1, 0u + i8); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2E60: { ++fl.t; const v4u uv = vmuld(n6, vsplat(n1[2])); set_vi(i8, i8 + 4u); vstore(r.vf[11], vsel(vload(r.vf[11]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n11 = vsel(n11, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2E68: { ++fl.t; const v4u uv = vmuld(n10, n2); set_vi(i5, i2 + i3); vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n10 = vsel(n10, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2E70: { ++fl.t; const v4u uv = vmuld(n6, vsplat(n2[2])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[12].w[1], r.vf[8].w[1]); fl.end_q(r, qb, 7u); } vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n8 = vsel(n8, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2E78: { ++fl.t; const v4u uv = vsubd(n7, n4); { std::uint8_t *q = qword(mem, i5 + 0u); const std::uint32_t v = i1; std::memcpy(q + 8, &v, 4); } vstore(r.vf[7], uv); fl.stick<15u, kSticky>(uv); n7 = uv; }
L_2E80: { ++fl.t; const v4u uv = vmuld(n11, vfix(vsplat(r.i))); set_vi(i3, i3 + 1u); vstore(r.vf[11], vsel(vload(r.vf[11]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n11 = vsel(n11, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2E88: { ++fl.t; const v4u uv = vsubd(n9, n5); vstore(r.vf[9], uv); fl.stick<15u, kSticky>(uv); n9 = uv; }
L_2E90: { ++fl.t; const v4u uv = vaddd(n10, n8); vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n8 = vsel(n8, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2E98: { ++fl.t; const v4u uv = vsubd(n11, n3); fl.flush_q(r); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2EA0: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[3].w[1], r.vf[8].w[1]); fl.end_q(r, qb, 7u); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_2EA8: { ++fl.t; const v4u uv = vmuld(n8, vsplat(n2[3])); vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<11u, kSticky>(uv); n8 = vsel(n8, uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_2EB0: { ++fl.t; const v4u uv = vmuld(n9, vsplat(n2[3])); vstore(r.vf[9], uv); fl.stick<15u, kSticky>(uv); n9 = uv; }
L_2EB8: { ++fl.t; const v4u uv = vaddd(n3, n8); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<11u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_2EC0: { ++fl.t; const v4u uv = vaddd(n5, n9); fl.flush_q(r); vstore(r.vf[3], uv); fl.stick<15u, kSticky>(uv); n3 = uv; }
L_2EC8: { ++fl.t; fl.flush_q(r); vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { std::uint8_t *q = qword(mem, i1 + 1u); std::memcpy(q, &r.vf[6], 16); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_2ED0: { ++fl.t; vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vmuld(n2, vsplat(n5[3])); { std::uint8_t *q = qword(mem, i1 + 3u); std::memcpy(q, &r.vf[3], 16); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2ED8: { ++fl.t; const v4u uv = vmuld(n7, vsplat(n5[3])); vstore(r.vf[5], uv); fl.push<15u, kSticky>(uv); n5 = uv; }
L_2EE0: { ++fl.t; const v4u uv = vaddd(n1, n3); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2EE8: { ++fl.t; vflushd(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vaddd(n4, n5); { std::uint8_t *q = qword(mem, i1 + 0u); std::memcpy(q + 0, &r.vf[1].w[0], 4); std::memcpy(q + 4, &r.vf[1].w[1], 4); std::memcpy(q + 8, &r.vf[1].w[2], 4); } vstore(r.vf[4], uv); fl.push<15u, kSticky>(uv); n4 = uv; }
L_2EF0: { ++fl.t; pend = 0u == i9; }
L_2EF8: { ++fl.t; vflushd(r.vf[4], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i1 + 2u); std::memcpy(q, &r.vf[4], 16); } }
    if (pend) { pend = false; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[11], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[12], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_3138; }
L_2F00: { ++fl.t; set_vi(i9, i9 - 1u); }
L_2F08: { ++fl.t; set_vi(i5, 0u + i6); }
L_2F10: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_2F18: { ++fl.t; pend = 0u != i9; }
L_2F20: { ++fl.t; set_vi(i7, i7 + 1u); }
    if (pend) { pend = false; vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[11], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[12], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_2F90; }
L_2F28: { ++fl.t; pend = true; }
L_2F30: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[11], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[12], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_2F90; }
    vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[11], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[12], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); 
L_2F38: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(&r.vf[4], q, 16); } n4 = vshadow(r.vf[4]); }
L_2F40: { ++fl.t; vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_2F48: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_2F50: { ++fl.t; pend = 0u == i9; }
L_2F58: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
    if (pend) { pend = false; goto L_3138; }
L_2F60: { ++fl.t; set_vi(i9, i9 - 1u); }
L_2F68: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_2F70: { ++fl.t; pend = 0u != i9; }
L_2F78: { ++fl.t; set_vi(i7, i7 + 1u); }
    if (pend) { pend = false; goto L_2DE8; }
L_2F80: { ++fl.t; pend = true; }
L_2F88: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; goto L_2DE8; }
L_2F90: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_2F98: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2FA0: { ++fl.t; }
L_2FA8: { ++fl.t; }
L_2FB0: { ++fl.t; }
L_2FB8: { ++fl.t; set_vi(i1, (fl.clip() & 4u) ? 1u : 0u); }
L_2FC0: { ++fl.t; pend = 0u != i1; }
L_2FC8: { ++fl.t; }
    if (pend) { pend = false; goto L_3028; }
L_2FD0: { ++fl.t; set_vi(i1, i2 + i3); }
L_2FD8: { ++fl.t; set_vi(i3, i3 + 1u); }
L_2FE0: { ++fl.t; pend = 0u == i9; }
L_2FE8: { ++fl.t; { std::uint8_t *q = qword(mem, i1 + 0u); const std::uint32_t v = i5; std::memcpy(q + 8, &v, 4); } }
    if (pend) { pend = false; goto L_3138; }
L_2FF0: { ++fl.t; set_vi(i9, i9 - 1u); }
L_2FF8: { ++fl.t; set_vi(i5, 0u + i6); }
L_3000: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_3008: { ++fl.t; pend = 0u != i9; }
L_3010: { ++fl.t; set_vi(i7, i7 + 1u); }
    if (pend) { pend = false; goto L_2F90; }
L_3018: { ++fl.t; pend = true; }
L_3020: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; goto L_2F90; }
L_3028: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n1[3])); { const std::uint8_t *q = qword(mem, i5 + 0u); vstore(r.vf[6], vsel(vload(r.vf[6]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n6 = vshadow(r.vf[6]); n4 = vsel(n4, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3030: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_3038: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 1u); std::memcpy(&r.vf[9], q, 16); } n9 = vshadow(r.vf[9]); }
L_3040: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 38u); vstore(r.vf[5], vsel(vload(r.vf[5]), vload_ptr(q), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); } n5 = vshadow(r.vf[5]); }
L_3048: { ++fl.t; vflushd(r.vf[4], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); const v4u uv = vsubd(n1, n6); vstore(r.vf[7], vsel(vload(r.vf[7]), vload(r.vf[4]), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n7 = vshadow(r.vf[7]); n8 = vsel(n8, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3050: { ++fl.t; const v4u uv = vsubd(n4, n9); vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); vstore(r.vf[11], vsel(vload(r.vf[11]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n3 = vshadow(r.vf[3]); n11 = vsel(n11, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3058: { ++fl.t; const v4u uv = vmuld(n5, n6); { const std::uint8_t *q = qword(mem, i5 + 3u); std::memcpy(&r.vf[10], q, 16); } vstore(r.vf[18], vsel(vload(r.vf[18]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n10 = vshadow(r.vf[10]); n18 = vsel(n18, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3060: { ++fl.t; const v4u uv = vmuld(n7, vsplat(n6[2])); { const std::uint8_t *q = qword(mem, i5 + 2u); std::memcpy(&r.vf[2], q, 16); } vstore(r.vf[13], vsel(vload(r.vf[13]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n2 = vshadow(r.vf[2]); n13 = vsel(n13, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3068: { ++fl.t; const v4u uv = vsubd(n3, n9); { const std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(&r.vf[4], q, 16); } vstore(r.vf[12], uv); fl.stick<15u, kSticky>(uv); n4 = vshadow(r.vf[4]); n12 = uv; }
L_3070: { ++fl.t; const v4u uv = vmuld(n5, n8); { const std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(&r.vf[5], q, 16); } vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n5 = vshadow(r.vf[5]); n9 = vsel(n9, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3078: { ++fl.t; const v4u uv = vmuld(n7, vsplat(n8[2])); set_vi(i1, i2 + i3); vstore(r.vf[23], vsel(vload(r.vf[23]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n23 = vsel(n23, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3080: { ++fl.t; const v4u uv = vmuld(n13, vfix(vsplat(r.i))); { std::uint8_t *q = qword(mem, i1 + 1u); const std::uint32_t v = i6; std::memcpy(q + 8, &v, 4); } vstore(r.vf[19], vsel(vload(r.vf[19]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n19 = vsel(n19, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3088: { ++fl.t; const v4u uv = vsubd(n4, n2); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[11].w[1], r.vf[12].w[1]); fl.end_q(r, qb, 7u); } vstore(r.vf[11], uv); fl.stick<15u, kSticky>(uv); n11 = uv; }
L_3090: { ++fl.t; const v4u uv = vsubd(n5, n10); { std::uint8_t *q = qword(mem, i1 + 0u); const std::uint32_t v = i5; std::memcpy(q + 8, &v, 4); } vstore(r.vf[13], uv); fl.stick<15u, kSticky>(uv); n13 = uv; }
L_3098: { ++fl.t; const v4u uv = vaddd(n9, n23); set_vi(i3, i3 + 2u); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_30A0: { ++fl.t; const v4u uv = vsubd(n19, n18); fl.flush_q(r); vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n12 = vsel(n12, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_30A8: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[12].w[1], r.vf[9].w[1]); fl.end_q(r, qb, 7u); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_30B0: { ++fl.t; const v4u uv = vmuld(n12, vsplat(n6[3])); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<11u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_30B8: { ++fl.t; const v4u uv = vmuld(n13, vsplat(n6[3])); fl.flush_q(r); vstore(r.vf[12], uv); fl.stick<15u, kSticky>(uv); n12 = uv; }
L_30C0: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_30C8: { ++fl.t; const v4u uv = vaddd(n9, n7); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<11u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_30D0: { ++fl.t; const v4u uv = vaddd(n10, n12); vstore(r.vf[12], uv); fl.stick<15u, kSticky>(uv); n12 = uv; }
L_30D8: { ++fl.t; const v4u uv = vmuld(n8, vsplat(n6[3])); vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n10 = vsel(n10, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_30E0: { ++fl.t; vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vmuld(n11, vsplat(n6[3])); { std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(q, &r.vf[7], 16); } vstore(r.vf[9], uv); fl.push<15u, kSticky>(uv); n9 = uv; }
L_30E8: { ++fl.t; vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vaddd(n6, n10); { std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(q, &r.vf[12], 16); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_30F0: { ++fl.t; vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vaddd(n2, n9); { std::uint8_t *q = qword(mem, i6 + 0u); std::memcpy(q + 0, &r.vf[6].w[0], 4); std::memcpy(q + 4, &r.vf[6].w[1], 4); std::memcpy(q + 8, &r.vf[6].w[2], 4); } vstore(r.vf[2], uv); fl.push<15u, kSticky>(uv); n2 = uv; }
L_30F8: { ++fl.t; pend = 0u == i9; }
L_3100: { ++fl.t; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(q, &r.vf[2], 16); } }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[19], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[23], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_3138; }
L_3108: { ++fl.t; set_vi(i9, i9 - 1u); }
L_3110: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_3118: { ++fl.t; pend = 0u != i9; }
L_3120: { ++fl.t; set_vi(i7, i7 + 1u); }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[19], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[23], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_2DE8; }
L_3128: { ++fl.t; pend = true; }
L_3130: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[19], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[23], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_2DE8; }
    vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[19], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[23], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); 
L_3138: { ++fl.t; pend = 0u == i3; }
L_3140: { ++fl.t; }
    if (pend) { pend = false; goto L_3568; }
L_3148: { ++fl.t; set_vi(i4, 0u + 7u); }
L_3150: { ++fl.t; set_vi(i6, 0u + i4); }
L_3158: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i6 + 0u) + 8, 2); set_vi(i5, v); } }
L_3160: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 44u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } n1 = vshadow(r.vf[1]); }
L_3168: { ++fl.t; set_vi(i6, i6 + 1u); }
L_3170: { ++fl.t; set_vi(i9, 0u + i3); }
L_3178: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_3180: { ++fl.t; set_vi(i7, i6 + 1u); }
L_3188: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i6 + 0u) + 8, 2); set_vi(i6, v); } }
L_3190: { ++fl.t; set_vi(i3, 0u + 0u); }
L_3198: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); set_vi(i2, 0u + 0u); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_31A0: { ++fl.t; set_vi(i9, i9 - 1u); }
L_31A8: { ++fl.t; }
L_31B0: { ++fl.t; }
L_31B8: { ++fl.t; set_vi(i1, (fl.clip() & 8u) ? 1u : 0u); }
L_31C0: { ++fl.t; pend = 0u == i1; }
L_31C8: { ++fl.t; }
    if (pend) { pend = false; goto L_33B0; }
L_31D0: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 2u); std::memcpy(&r.vf[4], q, 16); } n4 = vshadow(r.vf[4]); }
L_31D8: { ++fl.t; vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_31E0: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_31E8: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 3u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
L_31F0: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_31F8: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_3200: { ++fl.t; }
L_3208: { ++fl.t; }
L_3210: { ++fl.t; }
L_3218: { ++fl.t; set_vi(i1, (fl.clip() & 8u) ? 1u : 0u); }
L_3220: { ++fl.t; pend = 0u != i1; }
L_3228: { ++fl.t; }
    if (pend) { pend = false; goto L_3358; }
L_3230: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n1[3])); { const std::uint8_t *q = qword(mem, i6 + 0u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n2 = vshadow(r.vf[2]); n6 = vsel(n6, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3238: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(&r.vf[7], q, 16); } n7 = vshadow(r.vf[7]); }
L_3240: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 38u); vstore(r.vf[9], vsel(vload(r.vf[9]), vload_ptr(q), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); } n9 = vshadow(r.vf[9]); }
L_3248: { ++fl.t; const v4u uv = vmuld(n6, vfix(vsplat(r.i))); { const std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(&r.vf[6], q, 16); } vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n6 = vshadow(r.vf[6]); n10 = vsel(n10, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3250: { ++fl.t; const v4u uv = vsubd(n2, n1); { const std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(&r.vf[8], q, 16); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n8 = vshadow(r.vf[8]); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3258: { ++fl.t; const v4u uv = vsubd(n7, n3); set_vi(i1, 0u + i8); vstore(r.vf[7], uv); fl.stick<15u, kSticky>(uv); n7 = uv; }
L_3260: { ++fl.t; set_vi(i8, i8 + 4u); }
L_3268: { ++fl.t; vflushd(r.vf[10], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); const v4u uv = vsubd(n10, n3); vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[10]), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n3 = vshadow(r.vf[3]); n10 = vsel(n10, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3270: { ++fl.t; set_vi(i5, i2 + i3); }
L_3278: { ++fl.t; const v4u uv = vsubd(n6, n4); { std::uint8_t *q = qword(mem, i5 + 0u); const std::uint32_t v = i1; std::memcpy(q + 8, &v, 4); } vstore(r.vf[6], uv); fl.stick<15u, kSticky>(uv); n6 = uv; }
L_3280: { ++fl.t; const v4u uv = vsubd(n8, n5); set_vi(i3, i3 + 1u); vstore(r.vf[8], uv); fl.stick<15u, kSticky>(uv); n8 = uv; }
L_3288: { ++fl.t; const v4u uv = vmuld(n3, vsplat(n1[2])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[10].w[1], r.vf[7].w[1]); fl.end_q(r, qb, 7u); } vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n10 = vsel(n10, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3290: { ++fl.t; const v4u uv = vmuld(n3, vsplat(n2[2])); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3298: { ++fl.t; const v4u uv = vmuld(n9, n2); vstore(r.vf[11], vsel(vload(r.vf[11]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n11 = vsel(n11, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_32A0: { ++fl.t; const v4u uv = vmuld(n9, n1); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_32A8: { ++fl.t; const v4u uv = vmuld(n10, vfix(vsplat(r.i))); vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n10 = vsel(n10, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_32B0: { ++fl.t; const v4u uv = vaddd(n11, n7); fl.flush_q(r); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_32B8: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_32C0: { ++fl.t; const v4u uv = vsubd(n10, n9); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_32C8: { ++fl.t; const v4u uv = vmuld(n7, vsplat(n2[3])); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<11u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_32D0: { ++fl.t; const v4u uv = vmuld(n8, vsplat(n2[3])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[9].w[1], r.vf[7].w[1]); fl.end_q(r, qb, 7u); } vstore(r.vf[8], uv); fl.stick<15u, kSticky>(uv); n8 = uv; }
L_32D8: { ++fl.t; const v4u uv = vaddd(n3, n7); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<11u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_32E0: { ++fl.t; const v4u uv = vaddd(n5, n8); fl.flush_q(r); vstore(r.vf[5], uv); fl.stick<15u, kSticky>(uv); n5 = uv; }
L_32E8: { ++fl.t; fl.flush_q(r); vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { std::uint8_t *q = qword(mem, i1 + 1u); std::memcpy(q, &r.vf[3], 16); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_32F0: { ++fl.t; vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vmuld(n2, vsplat(n3[3])); { std::uint8_t *q = qword(mem, i1 + 3u); std::memcpy(q, &r.vf[5], 16); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_32F8: { ++fl.t; const v4u uv = vmuld(n6, vsplat(n3[3])); vstore(r.vf[3], uv); fl.push<15u, kSticky>(uv); n3 = uv; }
L_3300: { ++fl.t; const v4u uv = vaddd(n1, n5); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3308: { ++fl.t; vflushd(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vaddd(n4, n3); { std::uint8_t *q = qword(mem, i1 + 0u); std::memcpy(q + 0, &r.vf[1].w[0], 4); std::memcpy(q + 4, &r.vf[1].w[1], 4); std::memcpy(q + 8, &r.vf[1].w[2], 4); } vstore(r.vf[4], uv); fl.push<15u, kSticky>(uv); n4 = uv; }
L_3310: { ++fl.t; pend = 0u == i9; }
L_3318: { ++fl.t; vflushd(r.vf[4], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i1 + 2u); std::memcpy(q, &r.vf[4], 16); } }
    if (pend) { pend = false; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[10], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[11], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_3568; }
L_3320: { ++fl.t; set_vi(i9, i9 - 1u); }
L_3328: { ++fl.t; set_vi(i5, 0u + i6); }
L_3330: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_3338: { ++fl.t; pend = 0u != i9; }
L_3340: { ++fl.t; set_vi(i7, i7 + 1u); }
    if (pend) { pend = false; vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[10], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[11], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_33B0; }
L_3348: { ++fl.t; pend = true; }
L_3350: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[10], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[11], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_33B0; }
    vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[10], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[11], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); 
L_3358: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(&r.vf[4], q, 16); } n4 = vshadow(r.vf[4]); }
L_3360: { ++fl.t; vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_3368: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_3370: { ++fl.t; pend = 0u == i9; }
L_3378: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
    if (pend) { pend = false; goto L_3568; }
L_3380: { ++fl.t; set_vi(i9, i9 - 1u); }
L_3388: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_3390: { ++fl.t; pend = 0u != i9; }
L_3398: { ++fl.t; set_vi(i7, i7 + 1u); }
    if (pend) { pend = false; goto L_31F0; }
L_33A0: { ++fl.t; pend = true; }
L_33A8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; goto L_31F0; }
L_33B0: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_33B8: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_33C0: { ++fl.t; }
L_33C8: { ++fl.t; }
L_33D0: { ++fl.t; }
L_33D8: { ++fl.t; set_vi(i1, (fl.clip() & 8u) ? 1u : 0u); }
L_33E0: { ++fl.t; pend = 0u != i1; }
L_33E8: { ++fl.t; }
    if (pend) { pend = false; goto L_3448; }
L_33F0: { ++fl.t; set_vi(i1, i2 + i3); }
L_33F8: { ++fl.t; set_vi(i3, i3 + 1u); }
L_3400: { ++fl.t; pend = 0u == i9; }
L_3408: { ++fl.t; { std::uint8_t *q = qword(mem, i1 + 0u); const std::uint32_t v = i5; std::memcpy(q + 8, &v, 4); } }
    if (pend) { pend = false; goto L_3568; }
L_3410: { ++fl.t; set_vi(i9, i9 - 1u); }
L_3418: { ++fl.t; set_vi(i5, 0u + i6); }
L_3420: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_3428: { ++fl.t; pend = 0u != i9; }
L_3430: { ++fl.t; set_vi(i7, i7 + 1u); }
    if (pend) { pend = false; goto L_33B0; }
L_3438: { ++fl.t; pend = true; }
L_3440: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; goto L_33B0; }
L_3448: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n1[3])); { const std::uint8_t *q = qword(mem, i5 + 0u); vstore(r.vf[6], vsel(vload(r.vf[6]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n6 = vshadow(r.vf[6]); n3 = vsel(n3, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3450: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_3458: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 38u); vstore(r.vf[11], vsel(vload(r.vf[11]), vload_ptr(q), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); } n11 = vshadow(r.vf[11]); }
L_3460: { ++fl.t; const v4u uv = vmuld(n3, vfix(vsplat(r.i))); { const std::uint8_t *q = qword(mem, i5 + 1u); std::memcpy(&r.vf[9], q, 16); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n9 = vshadow(r.vf[9]); n4 = vsel(n4, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3468: { ++fl.t; vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_3470: { ++fl.t; const v4u uv = vsubd(n1, n6); { const std::uint8_t *q = qword(mem, i5 + 2u); std::memcpy(&r.vf[2], q, 16); } vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n2 = vshadow(r.vf[2]); n7 = vsel(n7, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3478: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 3u); std::memcpy(&r.vf[10], q, 16); } n10 = vshadow(r.vf[10]); }
L_3480: { ++fl.t; vflushd(r.vf[4], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); const v4u uv = vsubd(n4, n9); vstore(r.vf[8], vsel(vload(r.vf[8]), vload(r.vf[4]), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); vstore(r.vf[13], vsel(vload(r.vf[13]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n8 = vshadow(r.vf[8]); n13 = vsel(n13, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3488: { ++fl.t; const v4u uv = vsubd(n3, n9); { const std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(&r.vf[4], q, 16); } vstore(r.vf[12], uv); fl.stick<15u, kSticky>(uv); n4 = vshadow(r.vf[4]); n12 = uv; }
L_3490: { ++fl.t; const v4u uv = vmuld(n11, n7); { const std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(&r.vf[5], q, 16); } vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n5 = vshadow(r.vf[5]); n9 = vsel(n9, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3498: { ++fl.t; const v4u uv = vmuld(n11, n6); set_vi(i1, i2 + i3); vstore(r.vf[18], vsel(vload(r.vf[18]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n18 = vsel(n18, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_34A0: { ++fl.t; const v4u uv = vmuld(n8, vsplat(n6[2])); { std::uint8_t *q = qword(mem, i1 + 1u); const std::uint32_t v = i6; std::memcpy(q + 8, &v, 4); } vstore(r.vf[19], vsel(vload(r.vf[19]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n19 = vsel(n19, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_34A8: { ++fl.t; const v4u uv = vmuld(n8, vsplat(n7[2])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[13].w[1], r.vf[12].w[1]); fl.end_q(r, qb, 7u); } vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n12 = vsel(n12, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_34B0: { ++fl.t; const v4u uv = vsubd(n4, n2); { std::uint8_t *q = qword(mem, i1 + 0u); const std::uint32_t v = i5; std::memcpy(q + 8, &v, 4); } vstore(r.vf[11], uv); fl.stick<15u, kSticky>(uv); n11 = uv; }
L_34B8: { ++fl.t; const v4u uv = vsubd(n5, n10); set_vi(i3, i3 + 2u); vstore(r.vf[13], uv); fl.stick<15u, kSticky>(uv); n13 = uv; }
L_34C0: { ++fl.t; const v4u uv = vmuld(n19, vfix(vsplat(r.i))); vstore(r.vf[19], vsel(vload(r.vf[19]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n19 = vsel(n19, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_34C8: { ++fl.t; const v4u uv = vaddd(n9, n12); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_34D0: { ++fl.t; const v4u uv = vsubd(n19, n18); fl.flush_q(r); vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n12 = vsel(n12, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_34D8: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[12].w[1], r.vf[9].w[1]); fl.end_q(r, qb, 7u); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_34E0: { ++fl.t; const v4u uv = vmuld(n12, vsplat(n6[3])); vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<11u, kSticky>(uv); n8 = vsel(n8, uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_34E8: { ++fl.t; const v4u uv = vmuld(n13, vsplat(n6[3])); vstore(r.vf[12], uv); fl.stick<15u, kSticky>(uv); n12 = uv; }
L_34F0: { ++fl.t; const v4u uv = vaddd(n9, n8); vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<11u, kSticky>(uv); n8 = vsel(n8, uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_34F8: { ++fl.t; const v4u uv = vaddd(n10, n12); fl.flush_q(r); vstore(r.vf[9], uv); fl.stick<15u, kSticky>(uv); n9 = uv; }
L_3500: { ++fl.t; fl.flush_q(r); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(q, &r.vf[8], 16); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_3508: { ++fl.t; vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vmuld(n7, vsplat(n6[3])); { std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(q, &r.vf[9], 16); } vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3510: { ++fl.t; const v4u uv = vmuld(n11, vsplat(n6[3])); vstore(r.vf[11], uv); fl.push<15u, kSticky>(uv); n11 = uv; }
L_3518: { ++fl.t; const v4u uv = vaddd(n6, n9); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3520: { ++fl.t; vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vaddd(n2, n11); { std::uint8_t *q = qword(mem, i6 + 0u); std::memcpy(q + 0, &r.vf[6].w[0], 4); std::memcpy(q + 4, &r.vf[6].w[1], 4); std::memcpy(q + 8, &r.vf[6].w[2], 4); } vstore(r.vf[2], uv); fl.push<15u, kSticky>(uv); n2 = uv; }
L_3528: { ++fl.t; pend = 0u == i9; }
L_3530: { ++fl.t; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(q, &r.vf[2], 16); } }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[19], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_3568; }
L_3538: { ++fl.t; set_vi(i9, i9 - 1u); }
L_3540: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_3548: { ++fl.t; pend = 0u != i9; }
L_3550: { ++fl.t; set_vi(i7, i7 + 1u); }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[19], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_31F0; }
L_3558: { ++fl.t; pend = true; }
L_3560: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[19], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_31F0; }
    vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[19], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); 
L_3568: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_3570: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[14] = i14; r.vi[15] = i15; vhop(hop, ((13688u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[14] = i14; r.vi[15] = i15; vhop(hop, jpc);
    return;
}
static __attribute__((noinline, cold)) void vu1_FCB564FBA4B71498_c(Vu0Regs &r, std::uint8_t *mem, VuDaz &daz, std::uint32_t &hop) { vu1_FCB564FBA4B71498_b<true>(r, mem, daz, hop); }
void vu1_FCB564FBA4B71498(Vu0Regs &r, std::uint8_t *mem) {
    std::uint32_t hop = kNoHop;
    {
        VuDaz daz;
        if ((r.status & 0xC0u) == 0xC0u) vu1_FCB564FBA4B71498_b<false>(r, mem, daz, hop);
        else vu1_FCB564FBA4B71498_c(r, mem, daz, hop);
    }
    if (hop != kNoHop) vu::interpret(1, hop);
}

void vu1_C9DD93DB7E7F13FE(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 5504u) & 16383u;
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
    goto L_1580;
L_01F8: { ++fl.t; set_vi(i1, 0u + 15u); }
L_0200: { ++fl.t; set_vi(i1, i8 & i1); }
L_0208: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1) + 4, 2); set_vi(i2, v); } }
L_0210: { fl.t += 4u; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; pendj = true; }
L_0218: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((544u + sh) & 16383u));
    return;
L_1580: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 24u); vstore(r.vf[15], vsel(vload(r.vf[15]), vload_ptr(q), v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); } }
L_1588: { ++fl.t; set_vi(i6, r.vf[16].w[0]); }
L_1590: { ++fl.t; set_vi(i10, 0u + 0u); }
L_1598: { ++fl.t; set_vi(i9, 0u + i12); }
L_15A0: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_15A8: { ++fl.t; vstore(r.vf[16], vsel(vload(r.vf[16]), vload(r.vf[17]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); }
L_15B0: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[17], q, 16); set_vi(i13, i13 + 1u); } }
L_15B8: { ++fl.t; pend = static_cast<std::int16_t>(i6) <= 0; }
L_15C0: { ++fl.t; set_vi(i7, i8 + 0u); }
    if (pend) { pend = false; goto L_1600; }
L_15C8: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q, &r.vf[16], 16); set_vi(i12, i12 + 1u); } }
L_15D0: { ++fl.t; set_vi(i1, i11 - i12); }
L_15D8: { ++fl.t; set_vi(i10, i10 + 1u); }
L_15E0: { ++fl.t; pend = static_cast<std::int16_t>(i1) > 0; }
L_15E8: { ++fl.t; set_vi(i6, i6 - 1u); }
    if (pend) { pend = false; goto L_15A8; }
L_15F0: { ++fl.t; pend = true; }
L_15F8: { ++fl.t; set_vi(i15, 0u + 690u); }
    if (pend) { pend = false; goto L_1820; }
L_1600: { ++fl.t; set_vi(i6, r.vf[16].w[0]); }
L_1608: { ++fl.t; pend = static_cast<std::int16_t>(i8) >= 0; }
L_1610: { ++fl.t; set_vi(i8, r.vf[16].w[3]); }
    if (pend) { pend = false; goto L_15A8; }
L_1618: { ++fl.t; set_vi(i4, 0u + 4096u); }
L_1620: { ++fl.t; set_vi(i1, i7 & i4); }
L_1628: { ++fl.t; set_vi(i4, 0u + 2048u); }
L_1630: { ++fl.t; pend = 0u == i1; }
L_1638: { ++fl.t; }
    if (pend) { pend = false; goto L_1658; }
L_1640: { ++fl.t; set_vi(i15, (((5696u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1648: { ++fl.t; }
    if (pend) { pend = false; goto L_1888; }
L_1650: { ++fl.t; set_vi(i6, r.vf[16].w[0]); }
L_1658: { ++fl.t; set_vi(i1, i7 & i4); }
L_1660: { ++fl.t; }
L_1668: { ++fl.t; pend = 0u == i1; }
L_1670: { ++fl.t; }
    if (pend) { pend = false; goto L_15A8; }
L_1678: { ++fl.t; pend = true; }
L_1680: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
    if (pend) { pend = false; goto L_01F8; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((5768u + sh) & 16383u));
    return;
L_1820: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 114u) + 12, 2); set_vi(i3, v); } }
L_1828: { ++fl.t; set_vi(i2, 0u + 32767u); }
L_1830: { ++fl.t; set_vi(i2, i2 + 1u); }
L_1838: { ++fl.t; set_vi(i2, i10 | i2); }
L_1840: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 0u) + 12, 2); set_vi(i1, v); } }
L_1848: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i2; std::memcpy(q + 0, &v, 4); } }
L_1850: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 2u) + 12, 2); set_vi(i3, v); } }
L_1858: { ++fl.t; }
L_1860: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_1868: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 2u) + 12, 2); set_vi(i12, v); } }
L_1870: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 4u) + 12, 2); set_vi(i11, v); } }
L_1878: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1880: { ++fl.t; vu::kick(1, i3); }
    if (pendj) { pendj = false; goto dispatch; }
L_1888: { ++fl.t; ending = true; }
L_1890: { ++fl.t; }
    if (ending) { fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; r.tpc = ((6296u + sh) & 16383u); return; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((6296u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

void vu1_0A1BA83CF9C1A335(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 5520u) & 16383u;
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
    goto L_1590;
L_01F8: { ++fl.t; set_vi(i1, 0u + 15u); }
L_0200: { ++fl.t; set_vi(i1, i8 & i1); }
L_0208: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1) + 4, 2); set_vi(i2, v); } }
L_0210: { fl.t += 4u; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; pendj = true; }
L_0218: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((544u + sh) & 16383u));
    return;
L_1590: { ++fl.t; set_vi(i10, 0u + 0u); }
L_1598: { ++fl.t; set_vi(i9, 0u + i12); }
L_15A0: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_15A8: { ++fl.t; vstore(r.vf[16], vsel(vload(r.vf[16]), vload(r.vf[17]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); }
L_15B0: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[17], q, 16); set_vi(i13, i13 + 1u); } }
L_15B8: { ++fl.t; pend = static_cast<std::int16_t>(i6) <= 0; }
L_15C0: { ++fl.t; set_vi(i7, i8 + 0u); }
    if (pend) { pend = false; goto L_1600; }
L_15C8: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q, &r.vf[16], 16); set_vi(i12, i12 + 1u); } }
L_15D0: { ++fl.t; set_vi(i1, i11 - i12); }
L_15D8: { ++fl.t; set_vi(i10, i10 + 1u); }
L_15E0: { ++fl.t; pend = static_cast<std::int16_t>(i1) > 0; }
L_15E8: { ++fl.t; set_vi(i6, i6 - 1u); }
    if (pend) { pend = false; goto L_15A8; }
L_15F0: { ++fl.t; pend = true; }
L_15F8: { ++fl.t; set_vi(i15, 0u + 690u); }
    if (pend) { pend = false; goto L_1820; }
L_1600: { ++fl.t; set_vi(i6, r.vf[16].w[0]); }
L_1608: { ++fl.t; pend = static_cast<std::int16_t>(i8) >= 0; }
L_1610: { ++fl.t; set_vi(i8, r.vf[16].w[3]); }
    if (pend) { pend = false; goto L_15A8; }
L_1618: { ++fl.t; set_vi(i4, 0u + 4096u); }
L_1620: { ++fl.t; set_vi(i1, i7 & i4); }
L_1628: { ++fl.t; set_vi(i4, 0u + 2048u); }
L_1630: { ++fl.t; pend = 0u == i1; }
L_1638: { ++fl.t; }
    if (pend) { pend = false; goto L_1658; }
L_1640: { ++fl.t; set_vi(i15, (((5696u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1648: { ++fl.t; }
    if (pend) { pend = false; goto L_1888; }
L_1650: { ++fl.t; set_vi(i6, r.vf[16].w[0]); }
L_1658: { ++fl.t; set_vi(i1, i7 & i4); }
L_1660: { ++fl.t; }
L_1668: { ++fl.t; pend = 0u == i1; }
L_1670: { ++fl.t; }
    if (pend) { pend = false; goto L_15A8; }
L_1678: { ++fl.t; pend = true; }
L_1680: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
    if (pend) { pend = false; goto L_01F8; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((5768u + sh) & 16383u));
    return;
L_1820: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 114u) + 12, 2); set_vi(i3, v); } }
L_1828: { ++fl.t; set_vi(i2, 0u + 32767u); }
L_1830: { ++fl.t; set_vi(i2, i2 + 1u); }
L_1838: { ++fl.t; set_vi(i2, i10 | i2); }
L_1840: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 0u) + 12, 2); set_vi(i1, v); } }
L_1848: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i2; std::memcpy(q + 0, &v, 4); } }
L_1850: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 2u) + 12, 2); set_vi(i3, v); } }
L_1858: { ++fl.t; }
L_1860: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_1868: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 2u) + 12, 2); set_vi(i12, v); } }
L_1870: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 4u) + 12, 2); set_vi(i11, v); } }
L_1878: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1880: { ++fl.t; vu::kick(1, i3); }
    if (pendj) { pendj = false; goto dispatch; }
L_1888: { ++fl.t; ending = true; }
L_1890: { ++fl.t; }
    if (ending) { fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; r.tpc = ((6296u + sh) & 16383u); return; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((6296u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

void vu1_CD246535C7EC5C21(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 5712u) & 16383u;
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
    goto L_1650;
L_01F8: { ++fl.t; set_vi(i1, 0u + 15u); }
L_0200: { ++fl.t; set_vi(i1, i8 & i1); }
L_0208: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1) + 4, 2); set_vi(i2, v); } }
L_0210: { fl.t += 4u; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; pendj = true; }
L_0218: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((544u + sh) & 16383u));
    return;
L_15A8: { ++fl.t; vstore(r.vf[16], vsel(vload(r.vf[16]), vload(r.vf[17]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); }
L_15B0: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[17], q, 16); set_vi(i13, i13 + 1u); } }
L_15B8: { ++fl.t; pend = static_cast<std::int16_t>(i6) <= 0; }
L_15C0: { ++fl.t; set_vi(i7, i8 + 0u); }
    if (pend) { pend = false; goto L_1600; }
L_15C8: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q, &r.vf[16], 16); set_vi(i12, i12 + 1u); } }
L_15D0: { ++fl.t; set_vi(i1, i11 - i12); }
L_15D8: { ++fl.t; set_vi(i10, i10 + 1u); }
L_15E0: { ++fl.t; pend = static_cast<std::int16_t>(i1) > 0; }
L_15E8: { ++fl.t; set_vi(i6, i6 - 1u); }
    if (pend) { pend = false; goto L_15A8; }
L_15F0: { ++fl.t; pend = true; }
L_15F8: { ++fl.t; set_vi(i15, 0u + 690u); }
    if (pend) { pend = false; goto L_1820; }
L_1600: { ++fl.t; set_vi(i6, r.vf[16].w[0]); }
L_1608: { ++fl.t; pend = static_cast<std::int16_t>(i8) >= 0; }
L_1610: { ++fl.t; set_vi(i8, r.vf[16].w[3]); }
    if (pend) { pend = false; goto L_15A8; }
L_1618: { ++fl.t; set_vi(i4, 0u + 4096u); }
L_1620: { ++fl.t; set_vi(i1, i7 & i4); }
L_1628: { ++fl.t; set_vi(i4, 0u + 2048u); }
L_1630: { ++fl.t; pend = 0u == i1; }
L_1638: { ++fl.t; }
    if (pend) { pend = false; goto L_1658; }
L_1640: { ++fl.t; set_vi(i15, (((5696u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1648: { ++fl.t; }
    if (pend) { pend = false; goto L_1888; }
L_1650: { ++fl.t; set_vi(i6, r.vf[16].w[0]); }
L_1658: { ++fl.t; set_vi(i1, i7 & i4); }
L_1660: { ++fl.t; }
L_1668: { ++fl.t; pend = 0u == i1; }
L_1670: { ++fl.t; }
    if (pend) { pend = false; goto L_15A8; }
L_1678: { ++fl.t; pend = true; }
L_1680: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
    if (pend) { pend = false; goto L_01F8; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((5768u + sh) & 16383u));
    return;
L_1820: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 114u) + 12, 2); set_vi(i3, v); } }
L_1828: { ++fl.t; set_vi(i2, 0u + 32767u); }
L_1830: { ++fl.t; set_vi(i2, i2 + 1u); }
L_1838: { ++fl.t; set_vi(i2, i10 | i2); }
L_1840: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 0u) + 12, 2); set_vi(i1, v); } }
L_1848: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i2; std::memcpy(q + 0, &v, 4); } }
L_1850: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 2u) + 12, 2); set_vi(i3, v); } }
L_1858: { ++fl.t; }
L_1860: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_1868: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 2u) + 12, 2); set_vi(i12, v); } }
L_1870: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 4u) + 12, 2); set_vi(i11, v); } }
L_1878: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1880: { ++fl.t; vu::kick(1, i3); }
    if (pendj) { pendj = false; goto dispatch; }
L_1888: { ++fl.t; ending = true; }
L_1890: { ++fl.t; }
    if (ending) { fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; r.tpc = ((6296u + sh) & 16383u); return; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((6296u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

template <bool kSticky>
PS2_VU_BODY void vu1_E58872FCAF6B3241_b(Vu0Regs &r, std::uint8_t *mem, VuDaz &daz, std::uint32_t &hop) {
    (void)daz;
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 1256u) & 16383u;
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
    std::uint16_t i14 = r.vi[14];
    std::uint16_t i15 = r.vi[15];
    goto L_04E8;
L_01F8: { ++fl.t; set_vi(i1, 0u + 15u); }
L_0200: { ++fl.t; set_vi(i1, i8 & i1); }
L_0208: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1) + 4, 2); set_vi(i2, v); } }
L_0210: { fl.t += 4u; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; pendj = true; }
L_0218: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[14] = i14; r.vi[15] = i15; vhop(hop, ((544u + sh) & 16383u));
    return;
L_0270: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[15].w[0], r.vf[27].w[2]); fl.end_q(r, qb, 7u); } vstore(r.vf[17], uv); n17 = vshadow(r.vf[17]); }
L_0278: { ++fl.t; const v4u uv = vmuld(n18, n26); { const std::uint8_t *q = qword(mem, i13 + 0u); std::memcpy(&r.vf[16], q, 16); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n16 = vshadow(r.vf[16]); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0280: { ++fl.t; const v4u uv = vmuld(n20, n26); { const std::uint8_t *q = qword(mem, 0u + 38u); std::memcpy(&r.vf[24], q, 16); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n24 = vshadow(r.vf[24]); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0288: { ++fl.t; const v4u uv = vmuld(n22, n26); vstore(r.vf[5], vsel(vload(r.vf[5]), vload(r.vf[0]), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n5 = vshadow(r.vf[5]); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0290: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 145u); vstore(r.vf[7], vsel(vload(r.vf[7]), vload_ptr(q), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } n7 = vshadow(r.vf[7]); }
L_0298: { ++fl.t; const v4u uv = vaddd(n3, vsplat(n3[1])); { const std::uint8_t *q = qword(mem, 0u + 143u); std::memcpy(&r.vf[4], q, 16); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n4 = vshadow(r.vf[4]); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_02A0: { ++fl.t; const v4u uv = vmaddd(nacc, n17, vsplat(n3[2])); { const std::uint8_t *q = qword(mem, i13 + 1u); std::memcpy(&r.vf[11], q, 16); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n11 = vshadow(r.vf[11]); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_02A8: { ++fl.t; const v4u uv = vaddd(n2, vsplat(n2[0])); { const std::uint8_t *q = qword(mem, 0u + 138u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n3 = vshadow(r.vf[3]); nacc = vsel(nacc, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_02B0: { ++fl.t; const v4u uv = vmaddd(nacc, n17, vsplat(n2[2])); { const std::uint8_t *q = qword(mem, 0u + 142u); std::memcpy(&r.vf[2], q, 16); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n2 = vshadow(r.vf[2]); n6 = vsel(n6, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_02B8: { ++fl.t; const v4u uv = vaddd(n1, vsplat(n1[0])); { const std::uint8_t *q = qword(mem, 0u + 33u); std::memcpy(&r.vf[8], q, 16); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.stick<2u, kSticky>(uv); n8 = vshadow(r.vf[8]); nacc = vsel(nacc, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_02C0: { ++fl.t; const v4u uv = vmaddd(nacc, n17, vsplat(n1[1])); { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = 0u; std::memcpy(q + 8, &v, 4); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.stick<2u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_02C8: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vqd(r.q)); { const std::uint8_t *q = qword(mem, 0u + 137u); vstore(r.vf[27], vsel(vload(r.vf[27]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[1], uv); fl.stick<15u, kSticky>(uv); n27 = vshadow(r.vf[27]); n1 = uv; }
L_02D0: { ++fl.t; const v4u uv = vmuld(n27, n24); { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 132u) + 12, 2); set_vi(i4, v); } vstore(r.vf[24], vsel(vload(r.vf[24]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.stick<12u, kSticky>(uv); n24 = vsel(n24, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_02D8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 135u); std::memcpy(&r.vf[10], q, 16); } n10 = vshadow(r.vf[10]); }
L_02E0: { ++fl.t; vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vmax(vload(r.vf[6]), v4u{0u, 0u, 0u, 0x3F800000u}); { const std::uint8_t *q = qword(mem, 0u + 134u); std::memcpy(&r.vf[9], q, 16); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n9 = vshadow(r.vf[9]); n5 = vshadow(r.vf[5]); }
L_02E8: { ++fl.t; vflushd(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); const v4u uv = vmax(vload(r.vf[1]), vsplat(r.vf[24].w[3])); { const std::uint8_t *q = qword(mem, 0u + 136u); vstore(r.vf[6], vsel(vload(r.vf[6]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n6 = vshadow(r.vf[6]); n1 = vshadow(r.vf[1]); }
L_02F0: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vsplat(n8[2])); { std::uint8_t *q = qword(mem, 0u + 112u); std::memcpy(q + 0, &r.vf[11].w[0], 4); std::memcpy(q + 4, &r.vf[11].w[1], 4); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_02F8: { ++fl.t; const v4u uv = vmaddd(nacc, n8, vsplat(n27[2])); { const std::uint8_t *q = qword(mem, 0u + 41u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[24], vsel(vload(r.vf[24]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n3 = vshadow(r.vf[3]); n24 = vsel(n24, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0300: { ++fl.t; const v4u uv = vmuld(n19, vsplat(n5[0])); { const std::uint8_t *q = qword(mem, 0u + 44u); vstore(r.vf[13], vsel(vload(r.vf[13]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n13 = vshadow(r.vf[13]); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0308: { ++fl.t; const v4u uv = vmaddd(nacc, n21, vsplat(n5[1])); set_vi(i6, 0u + 16u); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0310: { ++fl.t; const v4u uv = vmaddd(nacc, n23, vsplat(n5[2])); { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 114u) + 0, 2); set_vi(i3, v); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0318: { ++fl.t; const v4u uv = vmuld(n24, n1); set_vi(i7, 0u + 14u); vstore(r.vf[24], vsel(vload(r.vf[24]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n24 = vsel(n24, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0320: { ++fl.t; vflushd(r.vf[24], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); const v4u uv = vmax(vload(r.vf[24]), vsplat(r.vf[8].w[1])); set_vi(i2, i8 & i6); vstore(r.vf[24], vsel(vload(r.vf[24]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n24 = vshadow(r.vf[24]); }
L_0328: { ++fl.t; const v4u uv = vmuld(n26, n10); set_vi(i5, 0u + 16u); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.stick<12u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_0330: { ++fl.t; vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vmax(vload(r.vf[5]), vsplat(r.vf[7].w[0])); set_vi(i3, i3 + i3); vstore(r.vf[5], uv); n5 = vshadow(r.vf[5]); }
L_0338: { ++fl.t; const v4u uv = vaddd(nacc, (v4u)((v4f)n9 * (v4f)vsplat(0x3F800000u))); { const std::uint8_t *q = qword(mem, i2 + 15u); vstore(r.vf[17], vsel(vload(r.vf[17]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.stick<12u, kSticky>(uv); n17 = vshadow(r.vf[17]); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_0340: { ++fl.t; const v4u uv = vmin(vload(r.vf[24]), vsplat(r.vf[8].w[0])); set_vi(i3, i3 & i7); vstore(r.vf[24], vsel(vload(r.vf[24]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n24 = vshadow(r.vf[24]); }
L_0348: { ++fl.t; const v4u uv = vmuld(vswz<1, 2, 0, 3>(n13), vswz<2, 0, 1, 3>(n25)); { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 114u) + 4, 2); set_vi(i2, v); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0350: { ++fl.t; const v4u uv = vmuld(n4, n5); r.clip = 0u; fl.set_clip(r.clip, fl.t - 4u); vstore(r.vf[5], uv); fl.stick<15u, kSticky>(uv); n5 = uv; }
L_0358: { ++fl.t; vflushd(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); const v4u uv = vmsubd(nacc, vswz<1, 2, 0, 3>(n25), vswz<2, 0, 1, 3>(n13)); { std::uint8_t *q = qword(mem, 0u + 113u); std::memcpy(q + 0, &r.vf[26].w[0], 4); std::memcpy(q + 4, &r.vf[26].w[1], 4); } vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0360: { ++fl.t; const v4u uv = vsubd(n3, vsplat(n27[2])); { const std::uint8_t *q = qword(mem, i4 + 112u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.push<1u, kSticky>(uv); n4 = vshadow(r.vf[4]); n3 = vsel(n3, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0368: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[24], r.vf[13].w[3]); set_vi(i4, i2 + i2); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_0370: { ++fl.t; const v4u uv = vmuld(n5, n16); set_vi(i4, i4 & i7); vstore(r.acc, uv); fl.push<15u, kSticky>(uv); nacc = uv; }
L_0378: { ++fl.t; const v4u uv = vmaddd(nacc, n3, n16); { const std::uint8_t *q = qword(mem, 0u + 133u); std::memcpy(&r.vf[13], q, 16); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n13 = vshadow(r.vf[13]); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0380: { ++fl.t; const v4u uv = vaddd(nacc, (v4u)((v4f)n2 * (v4f)vsplat(0x3F800000u))); set_vi(i5, (fl.mac() & 0xFFFFu) == i5 ? 1u : 0u); vstore(r.vf[2], uv); fl.stick<15u, kSticky>(uv); n2 = uv; }
L_0388: { ++fl.t; const v4u uv = vaddd(n4, n6); set_vi(i5, i3 + i5); vstore(r.vf[16], vsel(vload(r.vf[16]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.stick<12u, kSticky>(uv); n16 = vsel(n16, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_0390: { ++fl.t; const v4u uv = vmuld(n26, n27); { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = i5; std::memcpy(q + 0, &v, 4); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n4 = vsel(n4, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0398: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n1[0])); set_vi(i1, (fl.clip() & 15u) ? 1u : 0u); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.stick<2u, kSticky>(uv); n26 = vsel(n26, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_03A0: { ++fl.t; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vmin(vload(r.vf[2]), vsplat(r.vf[27].w[3])); set_vi(i4, i4 + i1); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n2 = vshadow(r.vf[2]); }
L_03A8: { ++fl.t; const v4u uv = vmuld(n16, vsplat(n1[0])); { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = i4; std::memcpy(q + 4, &v, 4); } vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.stick<12u, kSticky>(uv); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_03B0: { ++fl.t; const v4u uv = vaddd(n4, vsplat(n4[1])); set_vi(i3, 0u + 16384u); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_03B8: { ++fl.t; const v4u uv = vmaddd(nacc, n17, vsplat(n4[2])); set_vi(i7, i12 + 0u); vstore(r.vf[17], vsel(vload(r.vf[17]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n17 = vsel(n17, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_03C0: { ++fl.t; const v4u uv = vmuld(n2, n13); { const std::uint8_t *q = qword(mem, 0u + 39u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[13], uv); fl.stick<15u, kSticky>(uv); n4 = vshadow(r.vf[4]); n13 = uv; }
L_03C8: { ++fl.t; vflushd(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vftoi(vload(r.vf[24]), 4); { std::uint8_t *q = qword(mem, i7 + 0u); std::memcpy(q + 0, &r.vf[26].w[0], 4); std::memcpy(q + 4, &r.vf[26].w[1], 4); std::memcpy(q + 8, &r.vf[26].w[2], 4); } vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n27 = vshadow(r.vf[27]); }
L_03D0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 117u) + 12, 2); set_vi(i4, v); } }
L_03D8: { ++fl.t; const v4u uv = vmuld(n17, vsplat(n17[0])); { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 116u) + 12, 2); set_vi(i5, v); } vstore(r.vf[16], vsel(vload(r.vf[16]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.push<1u, kSticky>(uv); n16 = vsel(n16, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_03E0: { ++fl.t; const v4u uv = vftoi(vload(r.vf[13]), 0); { const std::uint8_t *q = qword(mem, i13 + 3u); std::memcpy(&r.vf[17], q, 16); } vstore(r.vf[13], uv); n17 = vshadow(r.vf[17]); n13 = vshadow(r.vf[13]); }
L_03E8: { ++fl.t; const v4u uv = vaddd(n24, n4); set_vi(i2, r.vf[27].w[3]); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_03F0: { ++fl.t; vflushd(r.vf[2], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i4 + 3u); std::memcpy(q, &r.vf[2], 16); } }
L_03F8: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); set_vi(i6, (fl.mac() & 0xFFFFu) == i6 ? 1u : 0u); vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n27 = vsel(n27, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0400: { ++fl.t; const v4u uv = vmuld(n28, vsplat(n17[0])); { std::uint16_t v; std::memcpy(&v, qword(mem, i6 + 126u) + 12, 2); set_vi(i6, v); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0408: { ++fl.t; const v4u uv = vftoi(vload(r.vf[26]), 4); { std::uint8_t *q = qword(mem, i7 + 1u); std::memcpy(q, &r.vf[13], 16); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n2 = vshadow(r.vf[2]); }
L_0410: { ++fl.t; vflushd(r.vf[24], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vmaddd(nacc, n29, vsplat(n17[1])); { std::uint8_t *q = qword(mem, i4 + 1u); std::memcpy(q, &r.vf[24], 16); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0418: { ++fl.t; vflushd(r.vf[27], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); const v4u uv = vmaddd(nacc, n30, vsplat(n17[2])); { std::uint8_t *q = qword(mem, i4 + 0u); std::memcpy(q, &r.vf[27], 16); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0420: { ++fl.t; set_vi(i8, i8 | i6); }
L_0428: { ++fl.t; set_vi(i6, i3 & i8); }
L_0430: { ++fl.t; set_vi(i6, i6 + i6); }
L_0438: { ++fl.t; { std::uint8_t *q = qword(mem, i7 + 2u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
L_0440: { ++fl.t; set_vi(i6, i2 | i6); }
L_0448: { ++fl.t; { std::uint8_t *q = qword(mem, i7 + 2u); const std::uint32_t v = i6; std::memcpy(q + 12, &v, 4); } }
L_0450: { ++fl.t; set_vi(i12, i12 + 3u); }
L_0458: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 115u) + 12, 2); set_vi(i6, v); } }
L_0460: { ++fl.t; vflushd(r.vf[16], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); { std::uint8_t *q = qword(mem, i4 + 2u); std::memcpy(q + 0, &r.vf[16].w[0], 4); std::memcpy(q + 4, &r.vf[16].w[1], 4); } }
L_0468: { ++fl.t; set_vi(i10, i10 + 1u); }
L_0470: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 114u) + 0, 2); set_vi(i7, v); } }
L_0478: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 116u); const std::uint32_t v = i4; std::memcpy(q + 12, &v, 4); } }
L_0480: { ++fl.t; { const std::uint8_t *q = qword(mem, i13 + 2u); std::memcpy(&r.vf[16], q, 16); } n16 = vshadow(r.vf[16]); }
L_0488: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 114u) + 4, 2); set_vi(i3, v); } }
L_0490: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 115u); const std::uint32_t v = i5; std::memcpy(q + 12, &v, 4); } }
L_0498: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 117u); const std::uint32_t v = i6; std::memcpy(q + 12, &v, 4); } }
L_04A0: { ++fl.t; const v4u uv = vaddd(nacc, (v4u)((v4f)n31 * (v4f)vsplat(0x3F800000u))); vstore(r.vf[24], vsel(vload(r.vf[24]), vload(r.vf[27]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n24 = vshadow(r.vf[24]); n27 = vsel(n27, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_04A8: { ++fl.t; const v4u uv = vmuld(n28, vsplat(n16[0])); set_vi(i2, i7 | i3); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_04B0: { ++fl.t; const v4u uv = vmaddd(nacc, n29, vsplat(n16[1])); { std::uint8_t *q = qword(mem, 0u + 113u); const std::uint32_t v = i2; std::memcpy(q + 12, &v, 4); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_04B8: { ++fl.t; const v4u uv = vmaddd(nacc, n30, vsplat(n16[2])); set_vi(i13, i13 + 4u); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_04C0: { ++fl.t; const v4u uv = vsubd(n27, n24); vstore(r.vf[13], vsel(vload(r.vf[13]), vload(r.vf[25]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); vstore(r.vf[25], uv); fl.push<15u, kSticky>(uv); n13 = vshadow(r.vf[13]); n25 = uv; }
L_04C8: { ++fl.t; pend = 0u == i2; }
L_04D0: { ++fl.t; set_vi(i1, 0u + 157u); }
    if (pend) { pend = false; vflushd(r.vf[1], v4u{0u, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[3], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto L_04E8; }
L_04D8: { ++fl.t; set_vi(i15, (((1240u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_04E0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 115u); const std::uint32_t v = i1; std::memcpy(q + 4, &v, 4); } }
    if (pend) { pend = false; vflushd(r.vf[1], v4u{0u, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[3], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto L_1AB0; }
    vflushd(r.vf[1], v4u{0u, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[3], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); 
L_04E8: { ++fl.t; set_vi(i1, i11 - i12); }
L_04F0: { ++fl.t; set_vi(i6, i8 + 0u); }
L_04F8: { ++fl.t; pend = static_cast<std::int16_t>(i1) > 0; }
L_0500: { ++fl.t; }
    if (pend) { pend = false; goto L_0530; }
L_0508: { ++fl.t; set_vi(i15, (((1288u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0510: { ++fl.t; }
    if (pend) { pend = false; goto L_1820; }
L_0518: { ++fl.t; set_vi(i10, 0u + 0u); }
L_0520: { ++fl.t; set_vi(i9, 0u + i12); }
L_0528: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_0530: { ++fl.t; pend = static_cast<std::int16_t>(i6) >= 0; }
L_0538: { ++fl.t; set_vi(i8, r.vf[16].w[3]); }
    if (pend) { pend = false; goto L_0270; }
L_0540: { ++fl.t; set_vi(i5, 0u + 171u); }
L_0548: { ++fl.t; pend = true; }
L_0550: { ++fl.t; set_vi(i4, 0u + 78u); }
    if (pend) { pend = false; goto L_19C0; }
    fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[14] = i14; r.vi[15] = i15; vhop(hop, ((1368u + sh) & 16383u));
    return;
L_1820: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 114u) + 12, 2); set_vi(i3, v); } }
L_1828: { ++fl.t; set_vi(i2, 0u + 32767u); }
L_1830: { ++fl.t; set_vi(i2, i2 + 1u); }
L_1838: { ++fl.t; set_vi(i2, i10 | i2); }
L_1840: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 0u) + 12, 2); set_vi(i1, v); } }
L_1848: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i2; std::memcpy(q + 0, &v, 4); } }
L_1850: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 2u) + 12, 2); set_vi(i3, v); } }
L_1858: { ++fl.t; }
L_1860: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_1868: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 2u) + 12, 2); set_vi(i12, v); } }
L_1870: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 4u) + 12, 2); set_vi(i11, v); } }
L_1878: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1880: { ++fl.t; vkick_last(daz, 1, i3); }
    if (pendj) { pendj = false; goto dispatch; }
L_1888: { ++fl.t; ending = true; }
L_1890: { ++fl.t; }
    if (ending) { fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[14] = i14; r.vi[15] = i15; r.tpc = ((6296u + sh) & 16383u); return; }
    fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[14] = i14; r.vi[15] = i15; vhop(hop, ((6296u + sh) & 16383u));
    return;
L_18C0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 31u); std::memcpy(&r.vf[1], q, 16); } n1 = vshadow(r.vf[1]); }
L_18C8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 26u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); } n2 = vshadow(r.vf[2]); }
L_18D0: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_18D8: { ++fl.t; set_vi(i10, 0u + 0u); }
L_18E0: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); std::memcpy(q, &r.vf[1], 16); } }
L_18E8: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 1u); const std::uint32_t v = i1; std::memcpy(q + 0, &v, 4); } }
L_18F0: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 2u); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); std::memcpy(q + 12, &r.vf[2].w[3], 4); } }
L_18F8: { ++fl.t; set_vi(i9, i12 + 2u); }
L_1900: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1908: { ++fl.t; set_vi(i12, i12 + 3u); }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[14] = i14; r.vi[15] = i15; vhop(hop, ((6416u + sh) & 16383u));
    return;
L_19C0: { ++fl.t; set_vi(i6, i6 + i6); }
L_19C8: { ++fl.t; set_vi(i6, i6 + i6); }
L_19D0: { ++fl.t; set_vi(i3, 0u + 4096u); }
L_19D8: { ++fl.t; pend = static_cast<std::int16_t>(i6) >= 0; }
L_19E0: { ++fl.t; set_vi(i6, i6 + i6); }
    if (pend) { pend = false; goto L_1A18; }
L_19E8: { ++fl.t; set_vi(i15, (((6632u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_19F0: { ++fl.t; set_vi(i1, 0u + 4u); }
    if (pend) { pend = false; goto L_18C0; }
L_19F8: { ++fl.t; set_vi(i1, 0u + 1u); }
L_1A00: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = i1; std::memcpy(q + 8, &v, 4); } }
L_1A08: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = 0u; std::memcpy(q + 0, &v, 4); } }
L_1A10: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = 0u; std::memcpy(q + 4, &v, 4); } }
L_1A18: { ++fl.t; set_vi(i3, i6 & i3); }
L_1A20: { ++fl.t; pend = static_cast<std::int16_t>(i6) >= 0; }
L_1A28: { ++fl.t; set_vi(i6, i6 + i6); bi = 6u; }
    if (pend) { pend = false; goto L_1A40; }
L_1A30: { ++fl.t; set_vi(i15, (((6704u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1A38: { ++fl.t; next_bk = i3; set_vi(i3, 0u + 512u); bk = next_bk; bi = 3u; }
    if (pend) { pend = false; goto L_1888; }
L_1A40: { ++fl.t; pend = 0u == (bi == 3 ? bk : i3); }
L_1A48: { ++fl.t; { const std::uint8_t *q = qword(mem, i13 + 0u); std::memcpy(&r.vf[14], q, 16); } }
    if (pend) { pend = false; goto L_1A80; }
L_1A50: { ++fl.t; pend = static_cast<std::int16_t>(i6) < 0; }
L_1A58: { ++fl.t; set_vi(i7, r.vf[17].w[3]); }
    if (pend) { pend = false; goto L_1AA0; }
L_1A60: { ++fl.t; jpc = (static_cast<std::uint32_t>(i5) * 8u) & 16383u; set_vi(i15, (((6752u + sh) & 16383u) + 16u) / 8u); pendj = true; }
L_1A68: { ++fl.t; set_vi(i6, i4 + 0u); }
    if (pendj) { pendj = false; goto dispatch; }
L_1A70: { ++fl.t; jpc = (static_cast<std::uint32_t>(i6) * 8u) & 16383u; pendj = true; }
L_1A78: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_1A80: { ++fl.t; pend = static_cast<std::int16_t>(i6) < 0; }
L_1A88: { ++fl.t; }
    if (pend) { pend = false; goto L_1AA0; }
L_1A90: { ++fl.t; jpc = (static_cast<std::uint32_t>(i4) * 8u) & 16383u; pendj = true; }
L_1A98: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_1AA0: { ++fl.t; pend = true; }
L_1AA8: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
    if (pend) { pend = false; goto L_01F8; }
L_1AB0: { ++fl.t; set_vi(i12, i12 - 3u); }
L_1AB8: { ++fl.t; pend = 0u == i7; }
L_1AC0: { ++fl.t; set_vi(i10, i10 - 1u); }
    if (pend) { pend = false; goto L_1BF0; }
L_1AC8: { ++fl.t; set_vi(i1, 0u + 7u); }
L_1AD0: { ++fl.t; set_vi(i7, i7 & i1); }
L_1AD8: { ++fl.t; set_vi(i1, i1 & i3); }
L_1AE0: { ++fl.t; pend = 0u != i7; }
L_1AE8: { ++fl.t; }
    if (pend) { pend = false; goto L_1B58; }
L_1AF0: { ++fl.t; pend = 0u == i1; }
L_1AF8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 133u); std::memcpy(&r.vf[1], q, 16); } n1 = vshadow(r.vf[1]); }
    if (pend) { pend = false; goto L_1B10; }
L_1B00: { ++fl.t; pend = true; }
L_1B08: { ++fl.t; }
    if (pend) { pend = false; goto L_1BF0; }
L_1B10: { ++fl.t; set_vi(i15, (((6928u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1B18: { ++fl.t; set_vi(i7, i6 + 0u); }
    if (pend) { pend = false; goto L_1E18; }
L_1B20: { ++fl.t; set_vi(i15, (((6944u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1B28: { ++fl.t; set_vi(i7, i5 + 0u); }
    if (pend) { pend = false; goto L_1E18; }
L_1B30: { ++fl.t; set_vi(i15, (((6960u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1B38: { ++fl.t; set_vi(i7, i4 + 0u); }
    if (pend) { pend = false; goto L_1E18; }
L_1B40: { ++fl.t; set_vi(i12, i12 - 3u); }
L_1B48: { ++fl.t; pend = true; }
L_1B50: { ++fl.t; set_vi(i10, i10 - 1u); }
    if (pend) { pend = false; goto L_1D40; }
L_1B58: { ++fl.t; set_vi(i2, 0u + 16384u); }
L_1B60: { ++fl.t; set_vi(i2, i8 & i2); }
L_1B68: { ++fl.t; }
L_1B70: { ++fl.t; pend = 0u == i2; }
L_1B78: { ++fl.t; }
    if (pend) { pend = false; goto L_1B98; }
L_1B80: { ++fl.t; set_vi(i1, 0u + 4u); }
L_1B88: { ++fl.t; pend = true; }
L_1B90: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 115u) + 4, 2); set_vi(i15, v); } }
    if (pend) { pend = false; goto L_18C0; }
L_1B98: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 5u) + 12, 2); set_vi(i2, v); } }
L_1BA0: { ++fl.t; set_vi(i15, (((7072u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1BA8: { ++fl.t; set_vi(i1, 0u + 3u); }
    if (pend) { pend = false; goto L_18C0; }
L_1BB0: { ++fl.t; { set_vi(i14, i14 - 1u); std::uint8_t *q = qword(mem, i14); std::memcpy(q, &r.vf[23], 16); } }
L_1BB8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; set_vi(i15, (((7096u + sh) & 16383u) + 16u) / 8u); pendj = true; }
L_1BC0: { ++fl.t; { set_vi(i14, i14 - 1u); std::uint8_t *q = qword(mem, i14); std::memcpy(q, &r.vf[24], 16); } }
    if (pendj) { pendj = false; goto dispatch; }
L_1BC8: { ++fl.t; { const std::uint8_t *q = qword(mem, i14); std::memcpy(&r.vf[24], q, 16); set_vi(i14, i14 + 1u); } n24 = vshadow(r.vf[24]); }
L_1BD0: { ++fl.t; { const std::uint8_t *q = qword(mem, i14); std::memcpy(&r.vf[23], q, 16); set_vi(i14, i14 + 1u); } n23 = vshadow(r.vf[23]); }
L_1BD8: { ++fl.t; set_vi(i1, 0u + 4u); }
L_1BE0: { ++fl.t; pend = true; }
L_1BE8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 115u) + 4, 2); set_vi(i15, v); } }
    if (pend) { pend = false; goto L_18C0; }
L_1BF0: { ++fl.t; pend = 0u == i3; }
L_1BF8: { ++fl.t; set_vi(i2, 0u + 16384u); }
    if (pend) { pend = false; goto L_1D40; }
L_1C00: { ++fl.t; set_vi(i2, i8 & i2); }
L_1C08: { ++fl.t; set_vi(i1, 0u + 7u); }
L_1C10: { ++fl.t; set_vi(i3, i3 & i1); }
L_1C18: { ++fl.t; pend = 0u != i2; }
L_1C20: { ++fl.t; }
    if (pend) { pend = false; goto L_1D40; }
L_1C28: { ++fl.t; pend = 0u != i3; }
L_1C30: { ++fl.t; }
    if (pend) { pend = false; goto L_1C98; }
L_1C38: { ++fl.t; set_vi(i15, (((7224u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1C40: { ++fl.t; set_vi(i1, 0u + 4u); }
    if (pend) { pend = false; goto L_18C0; }
L_1C48: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 133u); std::memcpy(&r.vf[1], q, 16); } n1 = vshadow(r.vf[1]); }
L_1C50: { ++fl.t; set_vi(i15, (((7248u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1C58: { ++fl.t; set_vi(i7, i6 + 0u); }
    if (pend) { pend = false; goto L_1E18; }
L_1C60: { ++fl.t; set_vi(i15, (((7264u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1C68: { ++fl.t; set_vi(i7, i5 + 0u); }
    if (pend) { pend = false; goto L_1E18; }
L_1C70: { ++fl.t; set_vi(i15, (((7280u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1C78: { ++fl.t; set_vi(i7, i4 + 0u); }
    if (pend) { pend = false; goto L_1E18; }
L_1C80: { ++fl.t; set_vi(i12, i12 - 3u); }
L_1C88: { ++fl.t; pend = true; }
L_1C90: { ++fl.t; set_vi(i10, i10 - 1u); }
    if (pend) { pend = false; goto L_1D40; }
L_1C98: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 1u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } n4 = vshadow(r.vf[4]); }
L_1CA0: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 1u); vstore(r.vf[5], vsel(vload(r.vf[5]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } n5 = vshadow(r.vf[5]); }
L_1CA8: { ++fl.t; set_vi(i3, 0u + i15); }
L_1CB0: { ++fl.t; set_vi(i15, (((7344u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1CB8: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); vstore(r.vf[6], vsel(vload(r.vf[6]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } n6 = vshadow(r.vf[6]); }
    if (pend) { pend = false; goto L_1D60; }
L_1CC0: { ++fl.t; pend = 0u != i1; }
L_1CC8: { ++fl.t; set_vi(i15, 0u + i3); }
    if (pend) { pend = false; goto L_1D08; }
L_1CD0: { ++fl.t; set_vi(i15, (((7376u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1CD8: { ++fl.t; set_vi(i1, 0u + 5u); }
    if (pend) { pend = false; goto L_18C0; }
L_1CE0: { ++fl.t; set_vi(i15, (((7392u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1CE8: { ++fl.t; }
    if (pend) { pend = false; goto L_1F58; }
L_1CF0: { ++fl.t; set_vi(i1, 0u + 4u); }
L_1CF8: { ++fl.t; pend = true; }
L_1D00: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 115u) + 4, 2); set_vi(i15, v); } }
    if (pend) { pend = false; goto L_18C0; }
L_1D08: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 133u); std::memcpy(&r.vf[1], q, 16); } n1 = vshadow(r.vf[1]); }
L_1D10: { ++fl.t; set_vi(i1, 0u + 16384u); }
L_1D18: { ++fl.t; set_vi(i8, i8 | i1); }
L_1D20: { ++fl.t; set_vi(i15, (((7456u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1D28: { ++fl.t; set_vi(i7, i4 + 0u); }
    if (pend) { pend = false; goto L_1E18; }
L_1D30: { ++fl.t; set_vi(i12, i12 - 3u); }
L_1D38: { ++fl.t; set_vi(i10, i10 - 1u); }
L_1D40: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 115u) + 4, 2); set_vi(i15, v); } }
L_1D48: { ++fl.t; set_vi(i12, i12 + 3u); }
L_1D50: { fl.t += 3u; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1D58: { ++fl.t; set_vi(i10, i10 + 1u); }
    if (pendj) { pendj = false; goto dispatch; }
L_1D60: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n4[1])); vstore(r.vf[1], vsel(vload(r.vf[1]), vload(r.vf[4]), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vshadow(r.vf[1]); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_1D68: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n5[0])); vstore(r.vf[2], vsel(vload(r.vf[2]), vload(r.vf[5]), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n2 = vshadow(r.vf[2]); n1 = vsel(n1, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_1D70: { fl.t += 2u; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n6[1])); { const std::uint8_t *q = qword(mem, 0u + 39u); vstore(r.vf[7], vsel(vload(r.vf[7]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.stick<2u, kSticky>(uv); n7 = vshadow(r.vf[7]); n2 = vsel(n2, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_1D78: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n6[0])); { const std::uint8_t *q = qword(mem, 0u + 40u); vstore(r.vf[8], vsel(vload(r.vf[8]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.push<2u, kSticky>(uv); n8 = vshadow(r.vf[8]); n1 = vsel(n1, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_1D80: { fl.t += 4u; const std::uint32_t uclip = vclip_value(r, r.vf[1], r.vf[7].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_1D88: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[8].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_1D90: { ++fl.t; }
L_1D98: { ++fl.t; }
L_1DA0: { ++fl.t; }
L_1DA8: { ++fl.t; set_vi(i1, ((fl.clip() | 16774527u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); }
L_1DB0: { ++fl.t; pend = 0u != i1; }
L_1DB8: { ++fl.t; set_vi(i1, ((fl.clip() | 16775871u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); }
    if (pend) { pend = false; goto L_1E00; }
L_1DC0: { ++fl.t; pend = 0u != i1; }
L_1DC8: { ++fl.t; set_vi(i1, ((fl.clip() | 16777173u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); }
    if (pend) { pend = false; goto L_1E00; }
L_1DD0: { ++fl.t; pend = 0u != i1; }
L_1DD8: { ++fl.t; set_vi(i1, ((fl.clip() | 16777194u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); }
    if (pend) { pend = false; goto L_1E00; }
L_1DE0: { ++fl.t; pend = 0u != i1; }
L_1DE8: { ++fl.t; set_vi(i1, 0u + 0u); }
    if (pend) { pend = false; goto L_1E00; }
L_1DF0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1DF8: { ++fl.t; }
    if (pendj) { pendj = false; vflushd(r.vf[1], v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0u}); goto dispatch; }
L_1E00: { ++fl.t; set_vi(i1, 0u + 1u); }
L_1E08: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1E10: { ++fl.t; }
    if (pendj) { pendj = false; vflushd(r.vf[1], v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0u}); goto dispatch; }
    vflushd(r.vf[1], v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); 
L_1E18: { ++fl.t; set_vi(i14, i14 - 1u); }
L_1E20: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i3; std::memcpy(q + 0, &v, 4); } }
L_1E28: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i2; std::memcpy(q + 4, &v, 4); } }
L_1E30: { ++fl.t; { const std::uint8_t *q = qword(mem, i7 + 0u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } n3 = vshadow(r.vf[3]); }
L_1E38: { ++fl.t; { const std::uint8_t *q = qword(mem, i7 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_1E40: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 39u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n4 = vshadow(r.vf[4]); }
L_1E48: { ++fl.t; { const std::uint8_t *q = qword(mem, i7 + 3u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
L_1E50: { ++fl.t; { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[15].w[0], r.vf[3].w[2]); fl.end_q(r, qb, 7u); } }
L_1E58: { ++fl.t; }
L_1E60: { ++fl.t; const v4u uv = vaddd(n2, n4); set_vi(i2, 0u + 16384u); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1E68: { ++fl.t; const v4u uv = vmuld(n5, n1); set_vi(i2, i2 & i8); vstore(r.vf[5], uv); fl.stick<15u, kSticky>(uv); n5 = uv; }
L_1E70: { ++fl.t; set_vi(i2, i2 + i2); }
L_1E78: { ++fl.t; }
L_1E80: { ++fl.t; const v4u uv = vftoi(vload(r.vf[2]), 4); vstore(r.vf[4], uv); n4 = vshadow(r.vf[4]); }
L_1E88: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { const std::uint8_t *q = qword(mem, i7 + 2u); std::memcpy(&r.vf[2], q, 16); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n2 = vshadow(r.vf[2]); n3 = vsel(n3, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_1E90: { ++fl.t; const v4u uv = vftoi(vload(r.vf[5]), 0); vstore(r.vf[5], uv); n5 = vshadow(r.vf[5]); }
L_1E98: { ++fl.t; }
L_1EA0: { ++fl.t; set_vi(i3, r.vf[4].w[3]); }
L_1EA8: { ++fl.t; const v4u uv = vmuld(n2, vsplat(n3[3])); { std::uint8_t *q = qword(mem, i12 + 2u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); std::memcpy(q + 8, &r.vf[4].w[2], 4); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.stick<12u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_1EB0: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n3[3])); { std::uint8_t *q = qword(mem, i12 + 1u); std::memcpy(q, &r.vf[5], 16); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.push<2u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_1EB8: { ++fl.t; }
L_1EC0: { ++fl.t; set_vi(i2, i3 | i2); }
L_1EC8: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 2u); const std::uint32_t v = i2; std::memcpy(q + 12, &v, 4); } }
L_1ED0: { ++fl.t; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); { std::uint8_t *q = qword(mem, i12 + 0u); std::memcpy(q, &r.vf[2], 16); } }
L_1ED8: { ++fl.t; set_vi(i3, i11 - i12); }
L_1EE0: { ++fl.t; set_vi(i12, i12 + 3u); }
L_1EE8: { ++fl.t; pend = static_cast<std::int16_t>(i3) > 0; }
L_1EF0: { ++fl.t; set_vi(i10, i10 + 1u); }
    if (pend) { pend = false; goto L_1F38; }
L_1EF8: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i15; std::memcpy(q + 12, &v, 4); } }
L_1F00: { ++fl.t; set_vi(i15, (((7936u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1F08: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i1; std::memcpy(q + 8, &v, 4); } }
    if (pend) { pend = false; vflushd(r.vf[3], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); goto L_1820; }
L_1F10: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 8, 2); set_vi(i1, v); } }
L_1F18: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 12, 2); set_vi(i15, v); } }
L_1F20: { ++fl.t; set_vi(i10, 0u + 0u); }
L_1F28: { ++fl.t; set_vi(i9, 0u + i12); }
L_1F30: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_1F38: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 4, 2); set_vi(i2, v); } }
L_1F40: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 0, 2); set_vi(i3, v); } }
L_1F48: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1F50: { ++fl.t; set_vi(i14, i14 + 1u); }
    if (pendj) { pendj = false; vflushd(r.vf[3], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); goto dispatch; }
    vflushd(r.vf[3], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); 
L_1F58: { ++fl.t; { set_vi(i14, i14 - 1u); std::uint8_t *q = qword(mem, i14); std::memcpy(q, &r.vf[13], 16); } }
L_1F60: { ++fl.t; { set_vi(i14, i14 - 1u); std::uint8_t *q = qword(mem, i14); std::memcpy(q, &r.vf[18], 16); } }
L_1F68: { ++fl.t; { set_vi(i14, i14 - 1u); std::uint8_t *q = qword(mem, i14); std::memcpy(q, &r.vf[19], 16); } }
L_1F70: { ++fl.t; { set_vi(i14, i14 - 1u); std::uint8_t *q = qword(mem, i14); std::memcpy(q, &r.vf[23], 16); } }
L_1F78: { ++fl.t; set_vi(i14, i14 - 1u); }
L_1F80: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i15; std::memcpy(q + 12, &v, 4); } }
L_1F88: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i8; std::memcpy(q + 8, &v, 4); } }
L_1F90: { ++fl.t; set_vi(i14, i14 - 1u); }
L_1F98: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i9; std::memcpy(q + 12, &v, 4); } }
L_1FA0: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i10; std::memcpy(q + 8, &v, 4); } }
L_1FA8: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i11; std::memcpy(q + 4, &v, 4); } }
L_1FB0: { ++fl.t; set_vi(i15, (((8112u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1FB8: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i12; std::memcpy(q + 0, &v, 4); } }
    if (pend) { pend = false; goto L_2418; }
L_1FC0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 0, 2); set_vi(i12, v); } }
L_1FC8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 4, 2); set_vi(i11, v); } }
L_1FD0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 8, 2); set_vi(i10, v); } }
L_1FD8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 12, 2); set_vi(i9, v); } }
L_1FE0: { ++fl.t; pend = 0u == i3; }
L_1FE8: { ++fl.t; set_vi(i14, i14 + 1u); }
    if (pend) { pend = false; goto L_2038; }
L_1FF0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 133u); std::memcpy(&r.vf[1], q, 16); } n1 = vshadow(r.vf[1]); }
L_1FF8: { ++fl.t; set_vi(i4, 0u + i2); }
L_2000: { ++fl.t; set_vi(i5, 0u + i3); }
L_2008: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4) + 8, 2); set_vi(i7, v); } }
L_2010: { ++fl.t; set_vi(i5, i5 - 1u); }
L_2018: { ++fl.t; set_vi(i15, (((8216u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_2020: { ++fl.t; set_vi(i4, i4 + 1u); }
    if (pend) { pend = false; goto L_1E18; }
L_2028: { ++fl.t; pend = 0u != i5; }
L_2030: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4) + 8, 2); set_vi(i7, v); } }
    if (pend) { pend = false; goto L_2010; }
L_2038: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 8, 2); set_vi(i8, v); } }
L_2040: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 12, 2); set_vi(i15, v); } }
L_2048: { ++fl.t; set_vi(i14, i14 + 1u); }
L_2050: { ++fl.t; { const std::uint8_t *q = qword(mem, i14); std::memcpy(&r.vf[23], q, 16); set_vi(i14, i14 + 1u); } n23 = vshadow(r.vf[23]); }
L_2058: { ++fl.t; { const std::uint8_t *q = qword(mem, i14); std::memcpy(&r.vf[19], q, 16); set_vi(i14, i14 + 1u); } n19 = vshadow(r.vf[19]); }
L_2060: { ++fl.t; { const std::uint8_t *q = qword(mem, i14); std::memcpy(&r.vf[18], q, 16); set_vi(i14, i14 + 1u); } n18 = vshadow(r.vf[18]); }
L_2068: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_2070: { ++fl.t; { const std::uint8_t *q = qword(mem, i14); std::memcpy(&r.vf[13], q, 16); set_vi(i14, i14 + 1u); } n13 = vshadow(r.vf[13]); }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[14] = i14; r.vi[15] = i15; vhop(hop, ((8312u + sh) & 16383u));
    return;
L_2418: { ++fl.t; r.i = 3212836864u; }
L_2420: { ++fl.t; set_vi(i7, 0u + 0u); }
L_2428: { ++fl.t; set_vi(i8, 0u + 180u); }
L_2430: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 0u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_2438: { ++fl.t; set_vi(i12, 0u + 3u); }
L_2440: { ++fl.t; set_vi(i2, 0u + 7u); }
L_2448: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 1u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
L_2450: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 2u); std::memcpy(&r.vf[4], q, 16); } n4 = vshadow(r.vf[4]); }
L_2458: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 3u); std::memcpy(&r.vf[3], q, 16); } n3 = vshadow(r.vf[3]); }
L_2460: { ++fl.t; set_vi(i9, i8 + 4u); }
L_2468: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 0u); std::memcpy(q, &r.vf[2], 16); } }
L_2470: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 1u); std::memcpy(q, &r.vf[5], 16); } }
L_2478: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 2u); std::memcpy(q, &r.vf[4], 16); } }
L_2480: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 3u); std::memcpy(q, &r.vf[3], 16); } }
L_2488: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 0u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
L_2490: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 1u); std::memcpy(&r.vf[4], q, 16); } n4 = vshadow(r.vf[4]); }
L_2498: { ++fl.t; { std::uint8_t *q = qword(mem, i7 + 0u); const std::uint32_t v = i8; std::memcpy(q + 8, &v, 4); } }
L_24A0: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 2u); std::memcpy(&r.vf[3], q, 16); } n3 = vshadow(r.vf[3]); }
L_24A8: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 3u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_24B0: { ++fl.t; { std::uint8_t *q = qword(mem, i9 + 0u); std::memcpy(q, &r.vf[5], 16); } }
L_24B8: { ++fl.t; { std::uint8_t *q = qword(mem, i9 + 1u); std::memcpy(q, &r.vf[4], 16); } }
L_24C0: { ++fl.t; set_vi(i5, i9 + 4u); }
L_24C8: { ++fl.t; { std::uint8_t *q = qword(mem, i9 + 2u); std::memcpy(q, &r.vf[3], 16); } }
L_24D0: { ++fl.t; { std::uint8_t *q = qword(mem, i9 + 3u); std::memcpy(q, &r.vf[2], 16); } }
L_24D8: { ++fl.t; set_vi(i4, 0u + i7); }
L_24E0: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 0u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_24E8: { ++fl.t; { std::uint8_t *q = qword(mem, i7 + 1u); const std::uint32_t v = i9; std::memcpy(q + 8, &v, 4); } }
L_24F0: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
L_24F8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i9, v); } }
L_2500: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(&r.vf[4], q, 16); } n4 = vshadow(r.vf[4]); }
L_2508: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(&r.vf[3], q, 16); } n3 = vshadow(r.vf[3]); }
L_2510: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 44u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } n1 = vshadow(r.vf[1]); }
L_2518: { ++fl.t; { std::uint8_t *q = qword(mem, i5 + 0u); std::memcpy(q, &r.vf[2], 16); } }
L_2520: { ++fl.t; { const std::uint8_t *q = qword(mem, i9 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_2528: { ++fl.t; { std::uint8_t *q = qword(mem, i5 + 1u); std::memcpy(q, &r.vf[5], 16); } }
L_2530: { ++fl.t; r.clip = 0u; fl.set_clip(r.clip, fl.t - 4u); }
L_2538: { ++fl.t; { std::uint8_t *q = qword(mem, i5 + 2u); std::memcpy(q, &r.vf[4], 16); } }
L_2540: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); { std::uint8_t *q = qword(mem, i5 + 3u); std::memcpy(q, &r.vf[3], 16); } r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2548: { ++fl.t; { std::uint8_t *q = qword(mem, i7 + 2u); const std::uint32_t v = i5; std::memcpy(q + 8, &v, 4); } }
L_2550: { ++fl.t; set_vi(i8, i5 + 4u); }
L_2558: { ++fl.t; set_vi(i5, i4 + 1u); }
L_2560: { ++fl.t; set_vi(i3, 0u + 0u); }
L_2568: { ++fl.t; set_vi(i1, (fl.clip() & 1u) ? 1u : 0u); }
L_2570: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i5 + 0u) + 8, 2); set_vi(i10, v); } }
L_2578: { ++fl.t; set_vi(i11, i5 + 1u); }
L_2580: { ++fl.t; pend = 0u == i1; }
L_2588: { ++fl.t; set_vi(i12, i12 - 1u); }
    if (pend) { pend = false; goto L_2758; }
L_2590: { ++fl.t; { const std::uint8_t *q = qword(mem, i9 + 2u); std::memcpy(&r.vf[4], q, 16); } n4 = vshadow(r.vf[4]); }
L_2598: { ++fl.t; vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_25A0: { ++fl.t; { const std::uint8_t *q = qword(mem, i9 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_25A8: { ++fl.t; { const std::uint8_t *q = qword(mem, i9 + 3u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
L_25B0: { ++fl.t; { const std::uint8_t *q = qword(mem, i10 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_25B8: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_25C0: { ++fl.t; }
L_25C8: { ++fl.t; }
L_25D0: { ++fl.t; }
L_25D8: { ++fl.t; set_vi(i1, (fl.clip() & 1u) ? 1u : 0u); }
L_25E0: { ++fl.t; pend = 0u != i1; }
L_25E8: { ++fl.t; }
    if (pend) { pend = false; goto L_2700; }
L_25F0: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n1[3])); { const std::uint8_t *q = qword(mem, i10 + 0u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n2 = vshadow(r.vf[2]); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_25F8: { ++fl.t; { const std::uint8_t *q = qword(mem, i10 + 1u); std::memcpy(&r.vf[7], q, 16); } n7 = vshadow(r.vf[7]); }
L_2600: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 38u); vstore(r.vf[10], vsel(vload(r.vf[10]), vload_ptr(q), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } n10 = vshadow(r.vf[10]); }
L_2608: { ++fl.t; vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); const v4u uv = vsubd(n2, n1); vstore(r.vf[6], vsel(vload(r.vf[6]), vload(r.vf[9]), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n6 = vshadow(r.vf[6]); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2610: { ++fl.t; const v4u uv = vsubd(n7, n3); { const std::uint8_t *q = qword(mem, i10 + 2u); std::memcpy(&r.vf[7], q, 16); } vstore(r.vf[8], uv); fl.stick<15u, kSticky>(uv); n7 = vshadow(r.vf[7]); n8 = uv; }
L_2618: { ++fl.t; const v4u uv = vsubd(n9, n3); { const std::uint8_t *q = qword(mem, i10 + 3u); std::memcpy(&r.vf[9], q, 16); } vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n9 = vshadow(r.vf[9]); n12 = vsel(n12, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2620: { ++fl.t; const v4u uv = vmuld(n10, n1); set_vi(i1, 0u + i8); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2628: { ++fl.t; const v4u uv = vmuld(n6, vsplat(n1[2])); set_vi(i8, i8 + 4u); vstore(r.vf[11], vsel(vload(r.vf[11]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n11 = vsel(n11, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2630: { ++fl.t; const v4u uv = vmuld(n10, n2); set_vi(i4, i2 + i3); vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n10 = vsel(n10, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2638: { ++fl.t; const v4u uv = vmuld(n6, vsplat(n2[2])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[12].w[0], r.vf[8].w[0]); fl.end_q(r, qb, 7u); } vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n8 = vsel(n8, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2640: { ++fl.t; const v4u uv = vsubd(n7, n4); { std::uint8_t *q = qword(mem, i4 + 0u); const std::uint32_t v = i1; std::memcpy(q + 8, &v, 4); } vstore(r.vf[7], uv); fl.stick<15u, kSticky>(uv); n7 = uv; }
L_2648: { ++fl.t; const v4u uv = vmuld(n11, vfix(vsplat(r.i))); set_vi(i3, i3 + 1u); vstore(r.vf[11], vsel(vload(r.vf[11]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n11 = vsel(n11, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2650: { ++fl.t; const v4u uv = vsubd(n9, n5); vstore(r.vf[9], uv); fl.stick<15u, kSticky>(uv); n9 = uv; }
L_2658: { ++fl.t; const v4u uv = vaddd(n10, n8); vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n8 = vsel(n8, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2660: { ++fl.t; const v4u uv = vsubd(n11, n3); fl.flush_q(r); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2668: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[3].w[0], r.vf[8].w[0]); fl.end_q(r, qb, 7u); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_2670: { ++fl.t; const v4u uv = vmuld(n8, vsplat(n2[3])); vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<7u, kSticky>(uv); n8 = vsel(n8, uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_2678: { ++fl.t; const v4u uv = vmuld(n9, vsplat(n2[3])); vstore(r.vf[9], uv); fl.stick<15u, kSticky>(uv); n9 = uv; }
L_2680: { ++fl.t; const v4u uv = vaddd(n3, n8); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<7u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_2688: { ++fl.t; const v4u uv = vaddd(n5, n9); fl.flush_q(r); vstore(r.vf[3], uv); fl.stick<15u, kSticky>(uv); n3 = uv; }
L_2690: { ++fl.t; fl.flush_q(r); vflushd(r.vf[6], v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { std::uint8_t *q = qword(mem, i1 + 1u); std::memcpy(q, &r.vf[6], 16); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_2698: { ++fl.t; vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vmuld(n2, vsplat(n5[3])); { std::uint8_t *q = qword(mem, i1 + 3u); std::memcpy(q, &r.vf[3], 16); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_26A0: { ++fl.t; const v4u uv = vmuld(n7, vsplat(n5[3])); vstore(r.vf[5], uv); fl.push<15u, kSticky>(uv); n5 = uv; }
L_26A8: { ++fl.t; const v4u uv = vaddd(n1, n3); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_26B0: { ++fl.t; vflushd(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vaddd(n4, n5); { std::uint8_t *q = qword(mem, i1 + 0u); std::memcpy(q + 0, &r.vf[1].w[0], 4); std::memcpy(q + 4, &r.vf[1].w[1], 4); std::memcpy(q + 8, &r.vf[1].w[2], 4); } vstore(r.vf[4], uv); fl.push<15u, kSticky>(uv); n4 = uv; }
L_26B8: { ++fl.t; pend = 0u == i12; }
L_26C0: { ++fl.t; vflushd(r.vf[4], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i1 + 2u); std::memcpy(q, &r.vf[4], 16); } }
    if (pend) { pend = false; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_2900; }
L_26C8: { ++fl.t; set_vi(i12, i12 - 1u); }
L_26D0: { ++fl.t; set_vi(i9, 0u + i10); }
L_26D8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i11 + 0u) + 8, 2); set_vi(i10, v); } }
L_26E0: { ++fl.t; pend = 0u != i12; }
L_26E8: { ++fl.t; set_vi(i11, i11 + 1u); }
    if (pend) { pend = false; vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_2758; }
L_26F0: { ++fl.t; pend = true; }
L_26F8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i10, v); } }
    if (pend) { pend = false; vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_2758; }
    vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); 
L_2700: { ++fl.t; { const std::uint8_t *q = qword(mem, i10 + 2u); std::memcpy(&r.vf[4], q, 16); } n4 = vshadow(r.vf[4]); }
L_2708: { ++fl.t; vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_2710: { ++fl.t; { const std::uint8_t *q = qword(mem, i10 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_2718: { ++fl.t; pend = 0u == i12; }
L_2720: { ++fl.t; { const std::uint8_t *q = qword(mem, i10 + 3u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
    if (pend) { pend = false; goto L_2900; }
L_2728: { ++fl.t; set_vi(i12, i12 - 1u); }
L_2730: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i11 + 0u) + 8, 2); set_vi(i10, v); } }
L_2738: { ++fl.t; pend = 0u != i12; }
L_2740: { ++fl.t; set_vi(i11, i11 + 1u); }
    if (pend) { pend = false; goto L_25B0; }
L_2748: { ++fl.t; pend = true; }
L_2750: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i10, v); } }
    if (pend) { pend = false; goto L_25B0; }
L_2758: { ++fl.t; { const std::uint8_t *q = qword(mem, i10 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_2760: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2768: { ++fl.t; }
L_2770: { ++fl.t; }
L_2778: { ++fl.t; }
L_2780: { ++fl.t; set_vi(i1, (fl.clip() & 1u) ? 1u : 0u); }
L_2788: { ++fl.t; pend = 0u != i1; }
L_2790: { ++fl.t; }
    if (pend) { pend = false; goto L_27F0; }
L_2798: { ++fl.t; set_vi(i1, i2 + i3); }
L_27A0: { ++fl.t; set_vi(i3, i3 + 1u); }
L_27A8: { ++fl.t; pend = 0u == i12; }
L_27B0: { ++fl.t; { std::uint8_t *q = qword(mem, i1 + 0u); const std::uint32_t v = i9; std::memcpy(q + 8, &v, 4); } }
    if (pend) { pend = false; goto L_2900; }
L_27B8: { ++fl.t; set_vi(i12, i12 - 1u); }
L_27C0: { ++fl.t; set_vi(i9, 0u + i10); }
L_27C8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i11 + 0u) + 8, 2); set_vi(i10, v); } }
L_27D0: { ++fl.t; pend = 0u != i12; }
L_27D8: { ++fl.t; set_vi(i11, i11 + 1u); }
    if (pend) { pend = false; goto L_2758; }
L_27E0: { ++fl.t; pend = true; }
L_27E8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i10, v); } }
    if (pend) { pend = false; goto L_2758; }
L_27F0: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n1[3])); { const std::uint8_t *q = qword(mem, i9 + 0u); vstore(r.vf[6], vsel(vload(r.vf[6]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n6 = vshadow(r.vf[6]); n4 = vsel(n4, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_27F8: { ++fl.t; { const std::uint8_t *q = qword(mem, i10 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_2800: { ++fl.t; { const std::uint8_t *q = qword(mem, i9 + 1u); std::memcpy(&r.vf[9], q, 16); } n9 = vshadow(r.vf[9]); }
L_2808: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 38u); vstore(r.vf[5], vsel(vload(r.vf[5]), vload_ptr(q), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } n5 = vshadow(r.vf[5]); }
L_2810: { ++fl.t; vflushd(r.vf[4], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); const v4u uv = vsubd(n1, n6); vstore(r.vf[7], vsel(vload(r.vf[7]), vload(r.vf[4]), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n7 = vshadow(r.vf[7]); n8 = vsel(n8, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2818: { ++fl.t; const v4u uv = vsubd(n4, n9); vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); vstore(r.vf[11], vsel(vload(r.vf[11]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vshadow(r.vf[3]); n11 = vsel(n11, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2820: { ++fl.t; const v4u uv = vmuld(n5, n6); { const std::uint8_t *q = qword(mem, i9 + 3u); std::memcpy(&r.vf[10], q, 16); } vstore(r.vf[18], vsel(vload(r.vf[18]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n10 = vshadow(r.vf[10]); n18 = vsel(n18, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2828: { ++fl.t; const v4u uv = vmuld(n7, vsplat(n6[2])); { const std::uint8_t *q = qword(mem, i9 + 2u); std::memcpy(&r.vf[2], q, 16); } vstore(r.vf[13], vsel(vload(r.vf[13]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n2 = vshadow(r.vf[2]); n13 = vsel(n13, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2830: { ++fl.t; const v4u uv = vsubd(n3, n9); { const std::uint8_t *q = qword(mem, i10 + 2u); std::memcpy(&r.vf[4], q, 16); } vstore(r.vf[12], uv); fl.stick<15u, kSticky>(uv); n4 = vshadow(r.vf[4]); n12 = uv; }
L_2838: { ++fl.t; const v4u uv = vmuld(n5, n8); { const std::uint8_t *q = qword(mem, i10 + 3u); std::memcpy(&r.vf[5], q, 16); } vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n5 = vshadow(r.vf[5]); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2840: { ++fl.t; const v4u uv = vmuld(n7, vsplat(n8[2])); set_vi(i1, i2 + i3); vstore(r.vf[23], vsel(vload(r.vf[23]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n23 = vsel(n23, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2848: { ++fl.t; const v4u uv = vmuld(n13, vfix(vsplat(r.i))); { std::uint8_t *q = qword(mem, i1 + 1u); const std::uint32_t v = i10; std::memcpy(q + 8, &v, 4); } vstore(r.vf[19], vsel(vload(r.vf[19]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n19 = vsel(n19, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2850: { ++fl.t; const v4u uv = vsubd(n4, n2); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[11].w[0], r.vf[12].w[0]); fl.end_q(r, qb, 7u); } vstore(r.vf[11], uv); fl.stick<15u, kSticky>(uv); n11 = uv; }
L_2858: { ++fl.t; const v4u uv = vsubd(n5, n10); { std::uint8_t *q = qword(mem, i1 + 0u); const std::uint32_t v = i9; std::memcpy(q + 8, &v, 4); } vstore(r.vf[13], uv); fl.stick<15u, kSticky>(uv); n13 = uv; }
L_2860: { ++fl.t; const v4u uv = vaddd(n9, n23); set_vi(i3, i3 + 2u); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2868: { ++fl.t; const v4u uv = vsubd(n19, n18); fl.flush_q(r); vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n12 = vsel(n12, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2870: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[12].w[0], r.vf[9].w[0]); fl.end_q(r, qb, 7u); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_2878: { ++fl.t; const v4u uv = vmuld(n12, vsplat(n6[3])); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<7u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_2880: { ++fl.t; const v4u uv = vmuld(n13, vsplat(n6[3])); fl.flush_q(r); vstore(r.vf[12], uv); fl.stick<15u, kSticky>(uv); n12 = uv; }
L_2888: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_2890: { ++fl.t; const v4u uv = vaddd(n9, n7); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<7u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_2898: { ++fl.t; const v4u uv = vaddd(n10, n12); vstore(r.vf[12], uv); fl.stick<15u, kSticky>(uv); n12 = uv; }
L_28A0: { ++fl.t; const v4u uv = vmuld(n8, vsplat(n6[3])); vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n10 = vsel(n10, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_28A8: { ++fl.t; vflushd(r.vf[7], v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vmuld(n11, vsplat(n6[3])); { std::uint8_t *q = qword(mem, i10 + 1u); std::memcpy(q, &r.vf[7], 16); } vstore(r.vf[9], uv); fl.push<15u, kSticky>(uv); n9 = uv; }
L_28B0: { ++fl.t; vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vaddd(n6, n10); { std::uint8_t *q = qword(mem, i10 + 3u); std::memcpy(q, &r.vf[12], 16); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_28B8: { ++fl.t; vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vaddd(n2, n9); { std::uint8_t *q = qword(mem, i10 + 0u); std::memcpy(q + 0, &r.vf[6].w[0], 4); std::memcpy(q + 4, &r.vf[6].w[1], 4); std::memcpy(q + 8, &r.vf[6].w[2], 4); } vstore(r.vf[2], uv); fl.push<15u, kSticky>(uv); n2 = uv; }
L_28C0: { ++fl.t; pend = 0u == i12; }
L_28C8: { ++fl.t; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i10 + 2u); std::memcpy(q, &r.vf[2], 16); } }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[19], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[23], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_2900; }
L_28D0: { ++fl.t; set_vi(i12, i12 - 1u); }
L_28D8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i11 + 0u) + 8, 2); set_vi(i10, v); } }
L_28E0: { ++fl.t; pend = 0u != i12; }
L_28E8: { ++fl.t; set_vi(i11, i11 + 1u); }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[19], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[23], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_25B0; }
L_28F0: { ++fl.t; pend = true; }
L_28F8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i10, v); } }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[19], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[23], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_25B0; }
    vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[19], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[23], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); 
L_2900: { ++fl.t; pend = 0u == i3; }
L_2908: { ++fl.t; }
    if (pend) { pend = false; goto L_3568; }
L_2910: { ++fl.t; set_vi(i4, 0u + 7u); }
L_2918: { ++fl.t; set_vi(i6, 0u + i4); }
L_2920: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i6 + 0u) + 8, 2); set_vi(i5, v); } }
L_2928: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 44u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } n1 = vshadow(r.vf[1]); }
L_2930: { ++fl.t; set_vi(i6, i6 + 1u); }
L_2938: { ++fl.t; set_vi(i9, 0u + i3); }
L_2940: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_2948: { ++fl.t; set_vi(i7, i6 + 1u); }
L_2950: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i6 + 0u) + 8, 2); set_vi(i6, v); } }
L_2958: { ++fl.t; set_vi(i3, 0u + 0u); }
L_2960: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); set_vi(i2, 0u + 0u); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2968: { ++fl.t; set_vi(i9, i9 - 1u); }
L_2970: { ++fl.t; }
L_2978: { ++fl.t; }
L_2980: { ++fl.t; set_vi(i1, (fl.clip() & 2u) ? 1u : 0u); }
L_2988: { ++fl.t; pend = 0u == i1; }
L_2990: { ++fl.t; }
    if (pend) { pend = false; goto L_2B78; }
L_2998: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 2u); std::memcpy(&r.vf[4], q, 16); } n4 = vshadow(r.vf[4]); }
L_29A0: { ++fl.t; vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_29A8: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_29B0: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 3u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
L_29B8: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_29C0: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_29C8: { ++fl.t; }
L_29D0: { ++fl.t; }
L_29D8: { ++fl.t; }
L_29E0: { ++fl.t; set_vi(i1, (fl.clip() & 2u) ? 1u : 0u); }
L_29E8: { ++fl.t; pend = 0u != i1; }
L_29F0: { ++fl.t; }
    if (pend) { pend = false; goto L_2B20; }
L_29F8: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n1[3])); { const std::uint8_t *q = qword(mem, i6 + 0u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n2 = vshadow(r.vf[2]); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2A00: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(&r.vf[7], q, 16); } n7 = vshadow(r.vf[7]); }
L_2A08: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 38u); vstore(r.vf[9], vsel(vload(r.vf[9]), vload_ptr(q), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } n9 = vshadow(r.vf[9]); }
L_2A10: { ++fl.t; const v4u uv = vmuld(n6, vfix(vsplat(r.i))); { const std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(&r.vf[6], q, 16); } vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n6 = vshadow(r.vf[6]); n10 = vsel(n10, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2A18: { ++fl.t; const v4u uv = vsubd(n2, n1); { const std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(&r.vf[8], q, 16); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n8 = vshadow(r.vf[8]); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2A20: { ++fl.t; const v4u uv = vsubd(n7, n3); set_vi(i1, 0u + i8); vstore(r.vf[7], uv); fl.stick<15u, kSticky>(uv); n7 = uv; }
L_2A28: { ++fl.t; set_vi(i8, i8 + 4u); }
L_2A30: { ++fl.t; vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); const v4u uv = vsubd(n10, n3); vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[10]), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vshadow(r.vf[3]); n10 = vsel(n10, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2A38: { ++fl.t; set_vi(i5, i2 + i3); }
L_2A40: { ++fl.t; const v4u uv = vsubd(n6, n4); { std::uint8_t *q = qword(mem, i5 + 0u); const std::uint32_t v = i1; std::memcpy(q + 8, &v, 4); } vstore(r.vf[6], uv); fl.stick<15u, kSticky>(uv); n6 = uv; }
L_2A48: { ++fl.t; const v4u uv = vsubd(n8, n5); set_vi(i3, i3 + 1u); vstore(r.vf[8], uv); fl.stick<15u, kSticky>(uv); n8 = uv; }
L_2A50: { ++fl.t; const v4u uv = vmuld(n3, vsplat(n1[2])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[10].w[0], r.vf[7].w[0]); fl.end_q(r, qb, 7u); } vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n10 = vsel(n10, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2A58: { ++fl.t; const v4u uv = vmuld(n3, vsplat(n2[2])); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2A60: { ++fl.t; const v4u uv = vmuld(n9, n2); vstore(r.vf[11], vsel(vload(r.vf[11]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n11 = vsel(n11, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2A68: { ++fl.t; const v4u uv = vmuld(n9, n1); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2A70: { ++fl.t; const v4u uv = vmuld(n10, vfix(vsplat(r.i))); vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n10 = vsel(n10, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2A78: { ++fl.t; const v4u uv = vaddd(n11, n7); fl.flush_q(r); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2A80: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_2A88: { ++fl.t; const v4u uv = vsubd(n10, n9); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2A90: { ++fl.t; const v4u uv = vmuld(n7, vsplat(n2[3])); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<7u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_2A98: { ++fl.t; const v4u uv = vmuld(n8, vsplat(n2[3])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[9].w[0], r.vf[7].w[0]); fl.end_q(r, qb, 7u); } vstore(r.vf[8], uv); fl.stick<15u, kSticky>(uv); n8 = uv; }
L_2AA0: { ++fl.t; const v4u uv = vaddd(n3, n7); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<7u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_2AA8: { ++fl.t; const v4u uv = vaddd(n5, n8); fl.flush_q(r); vstore(r.vf[5], uv); fl.stick<15u, kSticky>(uv); n5 = uv; }
L_2AB0: { ++fl.t; fl.flush_q(r); vflushd(r.vf[3], v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { std::uint8_t *q = qword(mem, i1 + 1u); std::memcpy(q, &r.vf[3], 16); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_2AB8: { ++fl.t; vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vmuld(n2, vsplat(n3[3])); { std::uint8_t *q = qword(mem, i1 + 3u); std::memcpy(q, &r.vf[5], 16); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2AC0: { ++fl.t; const v4u uv = vmuld(n6, vsplat(n3[3])); vstore(r.vf[3], uv); fl.push<15u, kSticky>(uv); n3 = uv; }
L_2AC8: { ++fl.t; const v4u uv = vaddd(n1, n5); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2AD0: { ++fl.t; vflushd(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vaddd(n4, n3); { std::uint8_t *q = qword(mem, i1 + 0u); std::memcpy(q + 0, &r.vf[1].w[0], 4); std::memcpy(q + 4, &r.vf[1].w[1], 4); std::memcpy(q + 8, &r.vf[1].w[2], 4); } vstore(r.vf[4], uv); fl.push<15u, kSticky>(uv); n4 = uv; }
L_2AD8: { ++fl.t; pend = 0u == i9; }
L_2AE0: { ++fl.t; vflushd(r.vf[4], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i1 + 2u); std::memcpy(q, &r.vf[4], 16); } }
    if (pend) { pend = false; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_2D30; }
L_2AE8: { ++fl.t; set_vi(i9, i9 - 1u); }
L_2AF0: { ++fl.t; set_vi(i5, 0u + i6); }
L_2AF8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_2B00: { ++fl.t; pend = 0u != i9; }
L_2B08: { ++fl.t; set_vi(i7, i7 + 1u); }
    if (pend) { pend = false; vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_2B78; }
L_2B10: { ++fl.t; pend = true; }
L_2B18: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_2B78; }
    vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); 
L_2B20: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(&r.vf[4], q, 16); } n4 = vshadow(r.vf[4]); }
L_2B28: { ++fl.t; vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_2B30: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_2B38: { ++fl.t; pend = 0u == i9; }
L_2B40: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
    if (pend) { pend = false; goto L_2D30; }
L_2B48: { ++fl.t; set_vi(i9, i9 - 1u); }
L_2B50: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_2B58: { ++fl.t; pend = 0u != i9; }
L_2B60: { ++fl.t; set_vi(i7, i7 + 1u); }
    if (pend) { pend = false; goto L_29B8; }
L_2B68: { ++fl.t; pend = true; }
L_2B70: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; goto L_29B8; }
L_2B78: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_2B80: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2B88: { ++fl.t; }
L_2B90: { ++fl.t; }
L_2B98: { ++fl.t; }
L_2BA0: { ++fl.t; set_vi(i1, (fl.clip() & 2u) ? 1u : 0u); }
L_2BA8: { ++fl.t; pend = 0u != i1; }
L_2BB0: { ++fl.t; }
    if (pend) { pend = false; goto L_2C10; }
L_2BB8: { ++fl.t; set_vi(i1, i2 + i3); }
L_2BC0: { ++fl.t; set_vi(i3, i3 + 1u); }
L_2BC8: { ++fl.t; pend = 0u == i9; }
L_2BD0: { ++fl.t; { std::uint8_t *q = qword(mem, i1 + 0u); const std::uint32_t v = i5; std::memcpy(q + 8, &v, 4); } }
    if (pend) { pend = false; goto L_2D30; }
L_2BD8: { ++fl.t; set_vi(i9, i9 - 1u); }
L_2BE0: { ++fl.t; set_vi(i5, 0u + i6); }
L_2BE8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_2BF0: { ++fl.t; pend = 0u != i9; }
L_2BF8: { ++fl.t; set_vi(i7, i7 + 1u); }
    if (pend) { pend = false; goto L_2B78; }
L_2C00: { ++fl.t; pend = true; }
L_2C08: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; goto L_2B78; }
L_2C10: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n1[3])); { const std::uint8_t *q = qword(mem, i5 + 0u); vstore(r.vf[6], vsel(vload(r.vf[6]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n6 = vshadow(r.vf[6]); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2C18: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_2C20: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 38u); vstore(r.vf[11], vsel(vload(r.vf[11]), vload_ptr(q), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } n11 = vshadow(r.vf[11]); }
L_2C28: { ++fl.t; const v4u uv = vmuld(n3, vfix(vsplat(r.i))); { const std::uint8_t *q = qword(mem, i5 + 1u); std::memcpy(&r.vf[9], q, 16); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n9 = vshadow(r.vf[9]); n4 = vsel(n4, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2C30: { ++fl.t; vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_2C38: { ++fl.t; const v4u uv = vsubd(n1, n6); { const std::uint8_t *q = qword(mem, i5 + 2u); std::memcpy(&r.vf[2], q, 16); } vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n2 = vshadow(r.vf[2]); n7 = vsel(n7, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2C40: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 3u); std::memcpy(&r.vf[10], q, 16); } n10 = vshadow(r.vf[10]); }
L_2C48: { ++fl.t; vflushd(r.vf[4], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); const v4u uv = vsubd(n4, n9); vstore(r.vf[8], vsel(vload(r.vf[8]), vload(r.vf[4]), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); vstore(r.vf[13], vsel(vload(r.vf[13]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n8 = vshadow(r.vf[8]); n13 = vsel(n13, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2C50: { ++fl.t; const v4u uv = vsubd(n3, n9); { const std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(&r.vf[4], q, 16); } vstore(r.vf[12], uv); fl.stick<15u, kSticky>(uv); n4 = vshadow(r.vf[4]); n12 = uv; }
L_2C58: { ++fl.t; const v4u uv = vmuld(n11, n7); { const std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(&r.vf[5], q, 16); } vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n5 = vshadow(r.vf[5]); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2C60: { ++fl.t; const v4u uv = vmuld(n11, n6); set_vi(i1, i2 + i3); vstore(r.vf[18], vsel(vload(r.vf[18]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n18 = vsel(n18, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2C68: { ++fl.t; const v4u uv = vmuld(n8, vsplat(n6[2])); { std::uint8_t *q = qword(mem, i1 + 1u); const std::uint32_t v = i6; std::memcpy(q + 8, &v, 4); } vstore(r.vf[19], vsel(vload(r.vf[19]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n19 = vsel(n19, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2C70: { ++fl.t; const v4u uv = vmuld(n8, vsplat(n7[2])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[13].w[0], r.vf[12].w[0]); fl.end_q(r, qb, 7u); } vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n12 = vsel(n12, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2C78: { ++fl.t; const v4u uv = vsubd(n4, n2); { std::uint8_t *q = qword(mem, i1 + 0u); const std::uint32_t v = i5; std::memcpy(q + 8, &v, 4); } vstore(r.vf[11], uv); fl.stick<15u, kSticky>(uv); n11 = uv; }
L_2C80: { ++fl.t; const v4u uv = vsubd(n5, n10); set_vi(i3, i3 + 2u); vstore(r.vf[13], uv); fl.stick<15u, kSticky>(uv); n13 = uv; }
L_2C88: { ++fl.t; const v4u uv = vmuld(n19, vfix(vsplat(r.i))); vstore(r.vf[19], vsel(vload(r.vf[19]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n19 = vsel(n19, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2C90: { ++fl.t; const v4u uv = vaddd(n9, n12); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2C98: { ++fl.t; const v4u uv = vsubd(n19, n18); fl.flush_q(r); vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n12 = vsel(n12, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2CA0: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[12].w[0], r.vf[9].w[0]); fl.end_q(r, qb, 7u); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_2CA8: { ++fl.t; const v4u uv = vmuld(n12, vsplat(n6[3])); vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<7u, kSticky>(uv); n8 = vsel(n8, uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_2CB0: { ++fl.t; const v4u uv = vmuld(n13, vsplat(n6[3])); vstore(r.vf[12], uv); fl.stick<15u, kSticky>(uv); n12 = uv; }
L_2CB8: { ++fl.t; const v4u uv = vaddd(n9, n8); vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<7u, kSticky>(uv); n8 = vsel(n8, uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_2CC0: { ++fl.t; const v4u uv = vaddd(n10, n12); fl.flush_q(r); vstore(r.vf[9], uv); fl.stick<15u, kSticky>(uv); n9 = uv; }
L_2CC8: { ++fl.t; fl.flush_q(r); vflushd(r.vf[8], v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(q, &r.vf[8], 16); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_2CD0: { ++fl.t; vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vmuld(n7, vsplat(n6[3])); { std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(q, &r.vf[9], 16); } vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2CD8: { ++fl.t; const v4u uv = vmuld(n11, vsplat(n6[3])); vstore(r.vf[11], uv); fl.push<15u, kSticky>(uv); n11 = uv; }
L_2CE0: { ++fl.t; const v4u uv = vaddd(n6, n9); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2CE8: { ++fl.t; vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vaddd(n2, n11); { std::uint8_t *q = qword(mem, i6 + 0u); std::memcpy(q + 0, &r.vf[6].w[0], 4); std::memcpy(q + 4, &r.vf[6].w[1], 4); std::memcpy(q + 8, &r.vf[6].w[2], 4); } vstore(r.vf[2], uv); fl.push<15u, kSticky>(uv); n2 = uv; }
L_2CF0: { ++fl.t; pend = 0u == i9; }
L_2CF8: { ++fl.t; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(q, &r.vf[2], 16); } }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[19], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_2D30; }
L_2D00: { ++fl.t; set_vi(i9, i9 - 1u); }
L_2D08: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_2D10: { ++fl.t; pend = 0u != i9; }
L_2D18: { ++fl.t; set_vi(i7, i7 + 1u); }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[19], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_29B8; }
L_2D20: { ++fl.t; pend = true; }
L_2D28: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[19], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_29B8; }
    vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[19], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); 
L_2D30: { ++fl.t; pend = 0u == i3; }
L_2D38: { ++fl.t; }
    if (pend) { pend = false; goto L_3568; }
L_2D40: { ++fl.t; set_vi(i4, 0u + 0u); }
L_2D48: { ++fl.t; set_vi(i6, 0u + i4); }
L_2D50: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i6 + 0u) + 8, 2); set_vi(i5, v); } }
L_2D58: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 44u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } n1 = vshadow(r.vf[1]); }
L_2D60: { ++fl.t; set_vi(i6, i6 + 1u); }
L_2D68: { ++fl.t; set_vi(i9, 0u + i3); }
L_2D70: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_2D78: { ++fl.t; set_vi(i7, i6 + 1u); }
L_2D80: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i6 + 0u) + 8, 2); set_vi(i6, v); } }
L_2D88: { ++fl.t; set_vi(i3, 0u + 0u); }
L_2D90: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); set_vi(i2, 0u + 7u); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2D98: { ++fl.t; set_vi(i9, i9 - 1u); }
L_2DA0: { ++fl.t; }
L_2DA8: { ++fl.t; }
L_2DB0: { ++fl.t; set_vi(i1, (fl.clip() & 4u) ? 1u : 0u); }
L_2DB8: { ++fl.t; pend = 0u == i1; }
L_2DC0: { ++fl.t; }
    if (pend) { pend = false; goto L_2F90; }
L_2DC8: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 2u); std::memcpy(&r.vf[4], q, 16); } n4 = vshadow(r.vf[4]); }
L_2DD0: { ++fl.t; vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_2DD8: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_2DE0: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 3u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
L_2DE8: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_2DF0: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2DF8: { ++fl.t; }
L_2E00: { ++fl.t; }
L_2E08: { ++fl.t; }
L_2E10: { ++fl.t; set_vi(i1, (fl.clip() & 4u) ? 1u : 0u); }
L_2E18: { ++fl.t; pend = 0u != i1; }
L_2E20: { ++fl.t; }
    if (pend) { pend = false; goto L_2F38; }
L_2E28: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n1[3])); { const std::uint8_t *q = qword(mem, i6 + 0u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n2 = vshadow(r.vf[2]); n9 = vsel(n9, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2E30: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(&r.vf[7], q, 16); } n7 = vshadow(r.vf[7]); }
L_2E38: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 38u); vstore(r.vf[10], vsel(vload(r.vf[10]), vload_ptr(q), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); } n10 = vshadow(r.vf[10]); }
L_2E40: { ++fl.t; vflushd(r.vf[9], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); const v4u uv = vsubd(n2, n1); vstore(r.vf[6], vsel(vload(r.vf[6]), vload(r.vf[9]), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n6 = vshadow(r.vf[6]); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2E48: { ++fl.t; const v4u uv = vsubd(n7, n3); { const std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(&r.vf[7], q, 16); } vstore(r.vf[8], uv); fl.stick<15u, kSticky>(uv); n7 = vshadow(r.vf[7]); n8 = uv; }
L_2E50: { ++fl.t; const v4u uv = vsubd(n9, n3); { const std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(&r.vf[9], q, 16); } vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n9 = vshadow(r.vf[9]); n12 = vsel(n12, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2E58: { ++fl.t; const v4u uv = vmuld(n10, n1); set_vi(i1, 0u + i8); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2E60: { ++fl.t; const v4u uv = vmuld(n6, vsplat(n1[2])); set_vi(i8, i8 + 4u); vstore(r.vf[11], vsel(vload(r.vf[11]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n11 = vsel(n11, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2E68: { ++fl.t; const v4u uv = vmuld(n10, n2); set_vi(i5, i2 + i3); vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n10 = vsel(n10, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2E70: { ++fl.t; const v4u uv = vmuld(n6, vsplat(n2[2])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[12].w[1], r.vf[8].w[1]); fl.end_q(r, qb, 7u); } vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n8 = vsel(n8, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2E78: { ++fl.t; const v4u uv = vsubd(n7, n4); { std::uint8_t *q = qword(mem, i5 + 0u); const std::uint32_t v = i1; std::memcpy(q + 8, &v, 4); } vstore(r.vf[7], uv); fl.stick<15u, kSticky>(uv); n7 = uv; }
L_2E80: { ++fl.t; const v4u uv = vmuld(n11, vfix(vsplat(r.i))); set_vi(i3, i3 + 1u); vstore(r.vf[11], vsel(vload(r.vf[11]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n11 = vsel(n11, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2E88: { ++fl.t; const v4u uv = vsubd(n9, n5); vstore(r.vf[9], uv); fl.stick<15u, kSticky>(uv); n9 = uv; }
L_2E90: { ++fl.t; const v4u uv = vaddd(n10, n8); vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n8 = vsel(n8, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2E98: { ++fl.t; const v4u uv = vsubd(n11, n3); fl.flush_q(r); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2EA0: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[3].w[1], r.vf[8].w[1]); fl.end_q(r, qb, 7u); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_2EA8: { ++fl.t; const v4u uv = vmuld(n8, vsplat(n2[3])); vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<11u, kSticky>(uv); n8 = vsel(n8, uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_2EB0: { ++fl.t; const v4u uv = vmuld(n9, vsplat(n2[3])); vstore(r.vf[9], uv); fl.stick<15u, kSticky>(uv); n9 = uv; }
L_2EB8: { ++fl.t; const v4u uv = vaddd(n3, n8); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<11u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_2EC0: { ++fl.t; const v4u uv = vaddd(n5, n9); fl.flush_q(r); vstore(r.vf[3], uv); fl.stick<15u, kSticky>(uv); n3 = uv; }
L_2EC8: { ++fl.t; fl.flush_q(r); vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { std::uint8_t *q = qword(mem, i1 + 1u); std::memcpy(q, &r.vf[6], 16); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_2ED0: { ++fl.t; vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vmuld(n2, vsplat(n5[3])); { std::uint8_t *q = qword(mem, i1 + 3u); std::memcpy(q, &r.vf[3], 16); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2ED8: { ++fl.t; const v4u uv = vmuld(n7, vsplat(n5[3])); vstore(r.vf[5], uv); fl.push<15u, kSticky>(uv); n5 = uv; }
L_2EE0: { ++fl.t; const v4u uv = vaddd(n1, n3); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2EE8: { ++fl.t; vflushd(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vaddd(n4, n5); { std::uint8_t *q = qword(mem, i1 + 0u); std::memcpy(q + 0, &r.vf[1].w[0], 4); std::memcpy(q + 4, &r.vf[1].w[1], 4); std::memcpy(q + 8, &r.vf[1].w[2], 4); } vstore(r.vf[4], uv); fl.push<15u, kSticky>(uv); n4 = uv; }
L_2EF0: { ++fl.t; pend = 0u == i9; }
L_2EF8: { ++fl.t; vflushd(r.vf[4], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i1 + 2u); std::memcpy(q, &r.vf[4], 16); } }
    if (pend) { pend = false; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[11], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[12], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_3138; }
L_2F00: { ++fl.t; set_vi(i9, i9 - 1u); }
L_2F08: { ++fl.t; set_vi(i5, 0u + i6); }
L_2F10: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_2F18: { ++fl.t; pend = 0u != i9; }
L_2F20: { ++fl.t; set_vi(i7, i7 + 1u); }
    if (pend) { pend = false; vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[11], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[12], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_2F90; }
L_2F28: { ++fl.t; pend = true; }
L_2F30: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[11], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[12], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_2F90; }
    vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[11], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[12], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); 
L_2F38: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(&r.vf[4], q, 16); } n4 = vshadow(r.vf[4]); }
L_2F40: { ++fl.t; vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_2F48: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_2F50: { ++fl.t; pend = 0u == i9; }
L_2F58: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
    if (pend) { pend = false; goto L_3138; }
L_2F60: { ++fl.t; set_vi(i9, i9 - 1u); }
L_2F68: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_2F70: { ++fl.t; pend = 0u != i9; }
L_2F78: { ++fl.t; set_vi(i7, i7 + 1u); }
    if (pend) { pend = false; goto L_2DE8; }
L_2F80: { ++fl.t; pend = true; }
L_2F88: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; goto L_2DE8; }
L_2F90: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_2F98: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2FA0: { ++fl.t; }
L_2FA8: { ++fl.t; }
L_2FB0: { ++fl.t; }
L_2FB8: { ++fl.t; set_vi(i1, (fl.clip() & 4u) ? 1u : 0u); }
L_2FC0: { ++fl.t; pend = 0u != i1; }
L_2FC8: { ++fl.t; }
    if (pend) { pend = false; goto L_3028; }
L_2FD0: { ++fl.t; set_vi(i1, i2 + i3); }
L_2FD8: { ++fl.t; set_vi(i3, i3 + 1u); }
L_2FE0: { ++fl.t; pend = 0u == i9; }
L_2FE8: { ++fl.t; { std::uint8_t *q = qword(mem, i1 + 0u); const std::uint32_t v = i5; std::memcpy(q + 8, &v, 4); } }
    if (pend) { pend = false; goto L_3138; }
L_2FF0: { ++fl.t; set_vi(i9, i9 - 1u); }
L_2FF8: { ++fl.t; set_vi(i5, 0u + i6); }
L_3000: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_3008: { ++fl.t; pend = 0u != i9; }
L_3010: { ++fl.t; set_vi(i7, i7 + 1u); }
    if (pend) { pend = false; goto L_2F90; }
L_3018: { ++fl.t; pend = true; }
L_3020: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; goto L_2F90; }
L_3028: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n1[3])); { const std::uint8_t *q = qword(mem, i5 + 0u); vstore(r.vf[6], vsel(vload(r.vf[6]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n6 = vshadow(r.vf[6]); n4 = vsel(n4, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3030: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_3038: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 1u); std::memcpy(&r.vf[9], q, 16); } n9 = vshadow(r.vf[9]); }
L_3040: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 38u); vstore(r.vf[5], vsel(vload(r.vf[5]), vload_ptr(q), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); } n5 = vshadow(r.vf[5]); }
L_3048: { ++fl.t; vflushd(r.vf[4], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); const v4u uv = vsubd(n1, n6); vstore(r.vf[7], vsel(vload(r.vf[7]), vload(r.vf[4]), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n7 = vshadow(r.vf[7]); n8 = vsel(n8, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3050: { ++fl.t; const v4u uv = vsubd(n4, n9); vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); vstore(r.vf[11], vsel(vload(r.vf[11]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n3 = vshadow(r.vf[3]); n11 = vsel(n11, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3058: { ++fl.t; const v4u uv = vmuld(n5, n6); { const std::uint8_t *q = qword(mem, i5 + 3u); std::memcpy(&r.vf[10], q, 16); } vstore(r.vf[18], vsel(vload(r.vf[18]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n10 = vshadow(r.vf[10]); n18 = vsel(n18, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3060: { ++fl.t; const v4u uv = vmuld(n7, vsplat(n6[2])); { const std::uint8_t *q = qword(mem, i5 + 2u); std::memcpy(&r.vf[2], q, 16); } vstore(r.vf[13], vsel(vload(r.vf[13]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n2 = vshadow(r.vf[2]); n13 = vsel(n13, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3068: { ++fl.t; const v4u uv = vsubd(n3, n9); { const std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(&r.vf[4], q, 16); } vstore(r.vf[12], uv); fl.stick<15u, kSticky>(uv); n4 = vshadow(r.vf[4]); n12 = uv; }
L_3070: { ++fl.t; const v4u uv = vmuld(n5, n8); { const std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(&r.vf[5], q, 16); } vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n5 = vshadow(r.vf[5]); n9 = vsel(n9, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3078: { ++fl.t; const v4u uv = vmuld(n7, vsplat(n8[2])); set_vi(i1, i2 + i3); vstore(r.vf[23], vsel(vload(r.vf[23]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n23 = vsel(n23, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3080: { ++fl.t; const v4u uv = vmuld(n13, vfix(vsplat(r.i))); { std::uint8_t *q = qword(mem, i1 + 1u); const std::uint32_t v = i6; std::memcpy(q + 8, &v, 4); } vstore(r.vf[19], vsel(vload(r.vf[19]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n19 = vsel(n19, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3088: { ++fl.t; const v4u uv = vsubd(n4, n2); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[11].w[1], r.vf[12].w[1]); fl.end_q(r, qb, 7u); } vstore(r.vf[11], uv); fl.stick<15u, kSticky>(uv); n11 = uv; }
L_3090: { ++fl.t; const v4u uv = vsubd(n5, n10); { std::uint8_t *q = qword(mem, i1 + 0u); const std::uint32_t v = i5; std::memcpy(q + 8, &v, 4); } vstore(r.vf[13], uv); fl.stick<15u, kSticky>(uv); n13 = uv; }
L_3098: { ++fl.t; const v4u uv = vaddd(n9, n23); set_vi(i3, i3 + 2u); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_30A0: { ++fl.t; const v4u uv = vsubd(n19, n18); fl.flush_q(r); vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n12 = vsel(n12, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_30A8: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[12].w[1], r.vf[9].w[1]); fl.end_q(r, qb, 7u); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_30B0: { ++fl.t; const v4u uv = vmuld(n12, vsplat(n6[3])); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<11u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_30B8: { ++fl.t; const v4u uv = vmuld(n13, vsplat(n6[3])); fl.flush_q(r); vstore(r.vf[12], uv); fl.stick<15u, kSticky>(uv); n12 = uv; }
L_30C0: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_30C8: { ++fl.t; const v4u uv = vaddd(n9, n7); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<11u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_30D0: { ++fl.t; const v4u uv = vaddd(n10, n12); vstore(r.vf[12], uv); fl.stick<15u, kSticky>(uv); n12 = uv; }
L_30D8: { ++fl.t; const v4u uv = vmuld(n8, vsplat(n6[3])); vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n10 = vsel(n10, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_30E0: { ++fl.t; vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vmuld(n11, vsplat(n6[3])); { std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(q, &r.vf[7], 16); } vstore(r.vf[9], uv); fl.push<15u, kSticky>(uv); n9 = uv; }
L_30E8: { ++fl.t; vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vaddd(n6, n10); { std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(q, &r.vf[12], 16); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_30F0: { ++fl.t; vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vaddd(n2, n9); { std::uint8_t *q = qword(mem, i6 + 0u); std::memcpy(q + 0, &r.vf[6].w[0], 4); std::memcpy(q + 4, &r.vf[6].w[1], 4); std::memcpy(q + 8, &r.vf[6].w[2], 4); } vstore(r.vf[2], uv); fl.push<15u, kSticky>(uv); n2 = uv; }
L_30F8: { ++fl.t; pend = 0u == i9; }
L_3100: { ++fl.t; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(q, &r.vf[2], 16); } }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[19], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[23], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_3138; }
L_3108: { ++fl.t; set_vi(i9, i9 - 1u); }
L_3110: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_3118: { ++fl.t; pend = 0u != i9; }
L_3120: { ++fl.t; set_vi(i7, i7 + 1u); }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[19], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[23], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_2DE8; }
L_3128: { ++fl.t; pend = true; }
L_3130: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[19], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[23], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_2DE8; }
    vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[19], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[23], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); 
L_3138: { ++fl.t; pend = 0u == i3; }
L_3140: { ++fl.t; }
    if (pend) { pend = false; goto L_3568; }
L_3148: { ++fl.t; set_vi(i4, 0u + 7u); }
L_3150: { ++fl.t; set_vi(i6, 0u + i4); }
L_3158: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i6 + 0u) + 8, 2); set_vi(i5, v); } }
L_3160: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 44u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } n1 = vshadow(r.vf[1]); }
L_3168: { ++fl.t; set_vi(i6, i6 + 1u); }
L_3170: { ++fl.t; set_vi(i9, 0u + i3); }
L_3178: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_3180: { ++fl.t; set_vi(i7, i6 + 1u); }
L_3188: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i6 + 0u) + 8, 2); set_vi(i6, v); } }
L_3190: { ++fl.t; set_vi(i3, 0u + 0u); }
L_3198: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); set_vi(i2, 0u + 0u); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_31A0: { ++fl.t; set_vi(i9, i9 - 1u); }
L_31A8: { ++fl.t; }
L_31B0: { ++fl.t; }
L_31B8: { ++fl.t; set_vi(i1, (fl.clip() & 8u) ? 1u : 0u); }
L_31C0: { ++fl.t; pend = 0u == i1; }
L_31C8: { ++fl.t; }
    if (pend) { pend = false; goto L_33B0; }
L_31D0: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 2u); std::memcpy(&r.vf[4], q, 16); } n4 = vshadow(r.vf[4]); }
L_31D8: { ++fl.t; vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_31E0: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_31E8: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 3u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
L_31F0: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_31F8: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_3200: { ++fl.t; }
L_3208: { ++fl.t; }
L_3210: { ++fl.t; }
L_3218: { ++fl.t; set_vi(i1, (fl.clip() & 8u) ? 1u : 0u); }
L_3220: { ++fl.t; pend = 0u != i1; }
L_3228: { ++fl.t; }
    if (pend) { pend = false; goto L_3358; }
L_3230: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n1[3])); { const std::uint8_t *q = qword(mem, i6 + 0u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n2 = vshadow(r.vf[2]); n6 = vsel(n6, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3238: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(&r.vf[7], q, 16); } n7 = vshadow(r.vf[7]); }
L_3240: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 38u); vstore(r.vf[9], vsel(vload(r.vf[9]), vload_ptr(q), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); } n9 = vshadow(r.vf[9]); }
L_3248: { ++fl.t; const v4u uv = vmuld(n6, vfix(vsplat(r.i))); { const std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(&r.vf[6], q, 16); } vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n6 = vshadow(r.vf[6]); n10 = vsel(n10, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3250: { ++fl.t; const v4u uv = vsubd(n2, n1); { const std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(&r.vf[8], q, 16); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n8 = vshadow(r.vf[8]); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3258: { ++fl.t; const v4u uv = vsubd(n7, n3); set_vi(i1, 0u + i8); vstore(r.vf[7], uv); fl.stick<15u, kSticky>(uv); n7 = uv; }
L_3260: { ++fl.t; set_vi(i8, i8 + 4u); }
L_3268: { ++fl.t; vflushd(r.vf[10], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); const v4u uv = vsubd(n10, n3); vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[10]), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n3 = vshadow(r.vf[3]); n10 = vsel(n10, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3270: { ++fl.t; set_vi(i5, i2 + i3); }
L_3278: { ++fl.t; const v4u uv = vsubd(n6, n4); { std::uint8_t *q = qword(mem, i5 + 0u); const std::uint32_t v = i1; std::memcpy(q + 8, &v, 4); } vstore(r.vf[6], uv); fl.stick<15u, kSticky>(uv); n6 = uv; }
L_3280: { ++fl.t; const v4u uv = vsubd(n8, n5); set_vi(i3, i3 + 1u); vstore(r.vf[8], uv); fl.stick<15u, kSticky>(uv); n8 = uv; }
L_3288: { ++fl.t; const v4u uv = vmuld(n3, vsplat(n1[2])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[10].w[1], r.vf[7].w[1]); fl.end_q(r, qb, 7u); } vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n10 = vsel(n10, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3290: { ++fl.t; const v4u uv = vmuld(n3, vsplat(n2[2])); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3298: { ++fl.t; const v4u uv = vmuld(n9, n2); vstore(r.vf[11], vsel(vload(r.vf[11]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n11 = vsel(n11, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_32A0: { ++fl.t; const v4u uv = vmuld(n9, n1); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_32A8: { ++fl.t; const v4u uv = vmuld(n10, vfix(vsplat(r.i))); vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n10 = vsel(n10, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_32B0: { ++fl.t; const v4u uv = vaddd(n11, n7); fl.flush_q(r); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_32B8: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_32C0: { ++fl.t; const v4u uv = vsubd(n10, n9); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_32C8: { ++fl.t; const v4u uv = vmuld(n7, vsplat(n2[3])); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<11u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_32D0: { ++fl.t; const v4u uv = vmuld(n8, vsplat(n2[3])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[9].w[1], r.vf[7].w[1]); fl.end_q(r, qb, 7u); } vstore(r.vf[8], uv); fl.stick<15u, kSticky>(uv); n8 = uv; }
L_32D8: { ++fl.t; const v4u uv = vaddd(n3, n7); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<11u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_32E0: { ++fl.t; const v4u uv = vaddd(n5, n8); fl.flush_q(r); vstore(r.vf[5], uv); fl.stick<15u, kSticky>(uv); n5 = uv; }
L_32E8: { ++fl.t; fl.flush_q(r); vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { std::uint8_t *q = qword(mem, i1 + 1u); std::memcpy(q, &r.vf[3], 16); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_32F0: { ++fl.t; vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vmuld(n2, vsplat(n3[3])); { std::uint8_t *q = qword(mem, i1 + 3u); std::memcpy(q, &r.vf[5], 16); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_32F8: { ++fl.t; const v4u uv = vmuld(n6, vsplat(n3[3])); vstore(r.vf[3], uv); fl.push<15u, kSticky>(uv); n3 = uv; }
L_3300: { ++fl.t; const v4u uv = vaddd(n1, n5); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3308: { ++fl.t; vflushd(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vaddd(n4, n3); { std::uint8_t *q = qword(mem, i1 + 0u); std::memcpy(q + 0, &r.vf[1].w[0], 4); std::memcpy(q + 4, &r.vf[1].w[1], 4); std::memcpy(q + 8, &r.vf[1].w[2], 4); } vstore(r.vf[4], uv); fl.push<15u, kSticky>(uv); n4 = uv; }
L_3310: { ++fl.t; pend = 0u == i9; }
L_3318: { ++fl.t; vflushd(r.vf[4], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i1 + 2u); std::memcpy(q, &r.vf[4], 16); } }
    if (pend) { pend = false; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[10], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[11], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_3568; }
L_3320: { ++fl.t; set_vi(i9, i9 - 1u); }
L_3328: { ++fl.t; set_vi(i5, 0u + i6); }
L_3330: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_3338: { ++fl.t; pend = 0u != i9; }
L_3340: { ++fl.t; set_vi(i7, i7 + 1u); }
    if (pend) { pend = false; vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[10], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[11], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_33B0; }
L_3348: { ++fl.t; pend = true; }
L_3350: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[10], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[11], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_33B0; }
    vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[10], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[11], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); 
L_3358: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(&r.vf[4], q, 16); } n4 = vshadow(r.vf[4]); }
L_3360: { ++fl.t; vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_3368: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_3370: { ++fl.t; pend = 0u == i9; }
L_3378: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
    if (pend) { pend = false; goto L_3568; }
L_3380: { ++fl.t; set_vi(i9, i9 - 1u); }
L_3388: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_3390: { ++fl.t; pend = 0u != i9; }
L_3398: { ++fl.t; set_vi(i7, i7 + 1u); }
    if (pend) { pend = false; goto L_31F0; }
L_33A0: { ++fl.t; pend = true; }
L_33A8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; goto L_31F0; }
L_33B0: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_33B8: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_33C0: { ++fl.t; }
L_33C8: { ++fl.t; }
L_33D0: { ++fl.t; }
L_33D8: { ++fl.t; set_vi(i1, (fl.clip() & 8u) ? 1u : 0u); }
L_33E0: { ++fl.t; pend = 0u != i1; }
L_33E8: { ++fl.t; }
    if (pend) { pend = false; goto L_3448; }
L_33F0: { ++fl.t; set_vi(i1, i2 + i3); }
L_33F8: { ++fl.t; set_vi(i3, i3 + 1u); }
L_3400: { ++fl.t; pend = 0u == i9; }
L_3408: { ++fl.t; { std::uint8_t *q = qword(mem, i1 + 0u); const std::uint32_t v = i5; std::memcpy(q + 8, &v, 4); } }
    if (pend) { pend = false; goto L_3568; }
L_3410: { ++fl.t; set_vi(i9, i9 - 1u); }
L_3418: { ++fl.t; set_vi(i5, 0u + i6); }
L_3420: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_3428: { ++fl.t; pend = 0u != i9; }
L_3430: { ++fl.t; set_vi(i7, i7 + 1u); }
    if (pend) { pend = false; goto L_33B0; }
L_3438: { ++fl.t; pend = true; }
L_3440: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; goto L_33B0; }
L_3448: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n1[3])); { const std::uint8_t *q = qword(mem, i5 + 0u); vstore(r.vf[6], vsel(vload(r.vf[6]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n6 = vshadow(r.vf[6]); n3 = vsel(n3, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3450: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_3458: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 38u); vstore(r.vf[11], vsel(vload(r.vf[11]), vload_ptr(q), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); } n11 = vshadow(r.vf[11]); }
L_3460: { ++fl.t; const v4u uv = vmuld(n3, vfix(vsplat(r.i))); { const std::uint8_t *q = qword(mem, i5 + 1u); std::memcpy(&r.vf[9], q, 16); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n9 = vshadow(r.vf[9]); n4 = vsel(n4, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3468: { ++fl.t; vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_3470: { ++fl.t; const v4u uv = vsubd(n1, n6); { const std::uint8_t *q = qword(mem, i5 + 2u); std::memcpy(&r.vf[2], q, 16); } vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n2 = vshadow(r.vf[2]); n7 = vsel(n7, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3478: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 3u); std::memcpy(&r.vf[10], q, 16); } n10 = vshadow(r.vf[10]); }
L_3480: { ++fl.t; vflushd(r.vf[4], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); const v4u uv = vsubd(n4, n9); vstore(r.vf[8], vsel(vload(r.vf[8]), vload(r.vf[4]), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); vstore(r.vf[13], vsel(vload(r.vf[13]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n8 = vshadow(r.vf[8]); n13 = vsel(n13, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3488: { ++fl.t; const v4u uv = vsubd(n3, n9); { const std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(&r.vf[4], q, 16); } vstore(r.vf[12], uv); fl.stick<15u, kSticky>(uv); n4 = vshadow(r.vf[4]); n12 = uv; }
L_3490: { ++fl.t; const v4u uv = vmuld(n11, n7); { const std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(&r.vf[5], q, 16); } vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n5 = vshadow(r.vf[5]); n9 = vsel(n9, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3498: { ++fl.t; const v4u uv = vmuld(n11, n6); set_vi(i1, i2 + i3); vstore(r.vf[18], vsel(vload(r.vf[18]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n18 = vsel(n18, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_34A0: { ++fl.t; const v4u uv = vmuld(n8, vsplat(n6[2])); { std::uint8_t *q = qword(mem, i1 + 1u); const std::uint32_t v = i6; std::memcpy(q + 8, &v, 4); } vstore(r.vf[19], vsel(vload(r.vf[19]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n19 = vsel(n19, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_34A8: { ++fl.t; const v4u uv = vmuld(n8, vsplat(n7[2])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[13].w[1], r.vf[12].w[1]); fl.end_q(r, qb, 7u); } vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n12 = vsel(n12, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_34B0: { ++fl.t; const v4u uv = vsubd(n4, n2); { std::uint8_t *q = qword(mem, i1 + 0u); const std::uint32_t v = i5; std::memcpy(q + 8, &v, 4); } vstore(r.vf[11], uv); fl.stick<15u, kSticky>(uv); n11 = uv; }
L_34B8: { ++fl.t; const v4u uv = vsubd(n5, n10); set_vi(i3, i3 + 2u); vstore(r.vf[13], uv); fl.stick<15u, kSticky>(uv); n13 = uv; }
L_34C0: { ++fl.t; const v4u uv = vmuld(n19, vfix(vsplat(r.i))); vstore(r.vf[19], vsel(vload(r.vf[19]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n19 = vsel(n19, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_34C8: { ++fl.t; const v4u uv = vaddd(n9, n12); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_34D0: { ++fl.t; const v4u uv = vsubd(n19, n18); fl.flush_q(r); vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n12 = vsel(n12, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_34D8: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[12].w[1], r.vf[9].w[1]); fl.end_q(r, qb, 7u); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_34E0: { ++fl.t; const v4u uv = vmuld(n12, vsplat(n6[3])); vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<11u, kSticky>(uv); n8 = vsel(n8, uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_34E8: { ++fl.t; const v4u uv = vmuld(n13, vsplat(n6[3])); vstore(r.vf[12], uv); fl.stick<15u, kSticky>(uv); n12 = uv; }
L_34F0: { ++fl.t; const v4u uv = vaddd(n9, n8); vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<11u, kSticky>(uv); n8 = vsel(n8, uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_34F8: { ++fl.t; const v4u uv = vaddd(n10, n12); fl.flush_q(r); vstore(r.vf[9], uv); fl.stick<15u, kSticky>(uv); n9 = uv; }
L_3500: { ++fl.t; fl.flush_q(r); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(q, &r.vf[8], 16); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_3508: { ++fl.t; vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vmuld(n7, vsplat(n6[3])); { std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(q, &r.vf[9], 16); } vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3510: { ++fl.t; const v4u uv = vmuld(n11, vsplat(n6[3])); vstore(r.vf[11], uv); fl.push<15u, kSticky>(uv); n11 = uv; }
L_3518: { ++fl.t; const v4u uv = vaddd(n6, n9); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3520: { ++fl.t; vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vaddd(n2, n11); { std::uint8_t *q = qword(mem, i6 + 0u); std::memcpy(q + 0, &r.vf[6].w[0], 4); std::memcpy(q + 4, &r.vf[6].w[1], 4); std::memcpy(q + 8, &r.vf[6].w[2], 4); } vstore(r.vf[2], uv); fl.push<15u, kSticky>(uv); n2 = uv; }
L_3528: { ++fl.t; pend = 0u == i9; }
L_3530: { ++fl.t; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(q, &r.vf[2], 16); } }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[19], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_3568; }
L_3538: { ++fl.t; set_vi(i9, i9 - 1u); }
L_3540: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_3548: { ++fl.t; pend = 0u != i9; }
L_3550: { ++fl.t; set_vi(i7, i7 + 1u); }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[19], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_31F0; }
L_3558: { ++fl.t; pend = true; }
L_3560: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[19], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_31F0; }
    vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[19], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); 
L_3568: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_3570: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[14] = i14; r.vi[15] = i15; vhop(hop, ((13688u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[14] = i14; r.vi[15] = i15; vhop(hop, jpc);
    return;
}
static __attribute__((noinline, cold)) void vu1_E58872FCAF6B3241_c(Vu0Regs &r, std::uint8_t *mem, VuDaz &daz, std::uint32_t &hop) { vu1_E58872FCAF6B3241_b<true>(r, mem, daz, hop); }
void vu1_E58872FCAF6B3241(Vu0Regs &r, std::uint8_t *mem) {
    std::uint32_t hop = kNoHop;
    {
        VuDaz daz;
        if ((r.status & 0xC0u) == 0xC0u) vu1_E58872FCAF6B3241_b<false>(r, mem, daz, hop);
        else vu1_E58872FCAF6B3241_c(r, mem, daz, hop);
    }
    if (hop != kNoHop) vu::interpret(1, hop);
}

template <bool kSticky>
PS2_VU_BODY void vu1_C21594883F8680BE_b(Vu0Regs &r, std::uint8_t *mem, VuDaz &daz, std::uint32_t &hop) {
    (void)daz;
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 8424u) & 16383u;
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
    v4u n18 = vshadow(r.vf[18]);
    v4u n19 = vshadow(r.vf[19]);
    v4u n23 = vshadow(r.vf[23]);
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
    goto L_20E8;
L_1820: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 114u) + 12, 2); set_vi(i3, v); } }
L_1828: { ++fl.t; set_vi(i2, 0u + 32767u); }
L_1830: { ++fl.t; set_vi(i2, i2 + 1u); }
L_1838: { ++fl.t; set_vi(i2, i10 | i2); }
L_1840: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 0u) + 12, 2); set_vi(i1, v); } }
L_1848: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i2; std::memcpy(q + 0, &v, 4); } }
L_1850: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 2u) + 12, 2); set_vi(i3, v); } }
L_1858: { ++fl.t; }
L_1860: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_1868: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 2u) + 12, 2); set_vi(i12, v); } }
L_1870: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 4u) + 12, 2); set_vi(i11, v); } }
L_1878: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1880: { ++fl.t; vkick_last(daz, 1, i3); }
    if (pendj) { pendj = false; vflush(r.vf[3], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); goto dispatch; }
    vflush(r.vf[3], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vhop(hop, ((6280u + sh) & 16383u));
    return;
L_18C0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 31u); std::memcpy(&r.vf[1], q, 16); } n1 = vshadow(r.vf[1]); }
L_18C8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 26u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); } n2 = vshadow(r.vf[2]); }
L_18D0: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_18D8: { ++fl.t; set_vi(i10, 0u + 0u); }
L_18E0: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); std::memcpy(q, &r.vf[1], 16); } }
L_18E8: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 1u); const std::uint32_t v = i1; std::memcpy(q + 0, &v, 4); } }
L_18F0: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 2u); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); std::memcpy(q + 12, &r.vf[2].w[3], 4); } }
L_18F8: { ++fl.t; set_vi(i9, i12 + 2u); }
L_1900: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1908: { ++fl.t; set_vi(i12, i12 + 3u); }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vhop(hop, ((6416u + sh) & 16383u));
    return;
L_1D60: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n4[1])); vstore(r.vf[1], vsel(vload(r.vf[1]), vload(r.vf[4]), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vshadow(r.vf[1]); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_1D68: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n5[0])); vstore(r.vf[2], vsel(vload(r.vf[2]), vload(r.vf[5]), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n2 = vshadow(r.vf[2]); n1 = vsel(n1, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_1D70: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n6[1])); { const std::uint8_t *q = qword(mem, 0u + 39u); vstore(r.vf[7], vsel(vload(r.vf[7]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.stick<2u, kSticky>(uv); n7 = vshadow(r.vf[7]); n2 = vsel(n2, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_1D78: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n6[0])); { const std::uint8_t *q = qword(mem, 0u + 40u); vstore(r.vf[8], vsel(vload(r.vf[8]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.push_last<2u, kSticky>(uv); n8 = vshadow(r.vf[8]); n1 = vsel(n1, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_1D80: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[1], r.vf[7].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_1D88: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[8].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_1D90: { ++fl.t; }
L_1D98: { ++fl.t; }
L_1DA0: { ++fl.t; }
L_1DA8: { ++fl.t; set_vi(i1, ((fl.clip() | 16774527u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); }
L_1DB0: { ++fl.t; pend = 0u != i1; }
L_1DB8: { ++fl.t; set_vi(i1, ((fl.clip() | 16775871u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); }
    if (pend) { pend = false; goto L_1E00; }
L_1DC0: { ++fl.t; pend = 0u != i1; }
L_1DC8: { ++fl.t; set_vi(i1, ((fl.clip() | 16777173u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); }
    if (pend) { pend = false; goto L_1E00; }
L_1DD0: { ++fl.t; pend = 0u != i1; }
L_1DD8: { ++fl.t; set_vi(i1, ((fl.clip() | 16777194u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); }
    if (pend) { pend = false; goto L_1E00; }
L_1DE0: { ++fl.t; pend = 0u != i1; }
L_1DE8: { ++fl.t; set_vi(i1, 0u + 0u); }
    if (pend) { pend = false; goto L_1E00; }
L_1DF0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1DF8: { ++fl.t; }
    if (pendj) { pendj = false; vflushd(r.vf[1], v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0u}); goto dispatch; }
L_1E00: { ++fl.t; set_vi(i1, 0u + 1u); }
L_1E08: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1E10: { ++fl.t; }
    if (pendj) { pendj = false; vflushd(r.vf[1], v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0u}); goto dispatch; }
    vflushd(r.vf[1], v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); 
L_1E18: { ++fl.t; set_vi(i14, i14 - 1u); }
L_1E20: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i3; std::memcpy(q + 0, &v, 4); } }
L_1E28: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i2; std::memcpy(q + 4, &v, 4); } }
L_1E30: { ++fl.t; { const std::uint8_t *q = qword(mem, i7 + 0u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } n3 = vshadow(r.vf[3]); }
L_1E38: { ++fl.t; { const std::uint8_t *q = qword(mem, i7 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_1E40: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 39u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n4 = vshadow(r.vf[4]); }
L_1E48: { ++fl.t; { const std::uint8_t *q = qword(mem, i7 + 3u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
L_1E50: { ++fl.t; { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[15].w[0], r.vf[3].w[2]); fl.end_q(r, qb, 7u); } }
L_1E58: { ++fl.t; }
L_1E60: { ++fl.t; const v4u uv = vaddd(n2, n4); set_vi(i2, 0u + 16384u); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1E68: { ++fl.t; const v4u uv = vmuld(n5, n1); set_vi(i2, i2 & i8); vstore(r.vf[5], uv); fl.stick<15u, kSticky>(uv); n5 = uv; }
L_1E70: { ++fl.t; set_vi(i2, i2 + i2); }
L_1E78: { ++fl.t; }
L_1E80: { ++fl.t; const v4u uv = vftoi(vload(r.vf[2]), 4); vstore(r.vf[4], uv); n4 = vshadow(r.vf[4]); }
L_1E88: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { const std::uint8_t *q = qword(mem, i7 + 2u); std::memcpy(&r.vf[2], q, 16); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n2 = vshadow(r.vf[2]); n3 = vsel(n3, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_1E90: { ++fl.t; const v4u uv = vftoi(vload(r.vf[5]), 0); vstore(r.vf[5], uv); n5 = vshadow(r.vf[5]); }
L_1E98: { ++fl.t; }
L_1EA0: { ++fl.t; set_vi(i3, r.vf[4].w[3]); }
L_1EA8: { ++fl.t; const v4u uv = vmuld(n2, vsplat(n3[3])); { std::uint8_t *q = qword(mem, i12 + 2u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); std::memcpy(q + 8, &r.vf[4].w[2], 4); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.stick<12u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_1EB0: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n3[3])); { std::uint8_t *q = qword(mem, i12 + 1u); std::memcpy(q, &r.vf[5], 16); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.push_last<2u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_1EB8: { ++fl.t; }
L_1EC0: { ++fl.t; set_vi(i2, i3 | i2); }
L_1EC8: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 2u); const std::uint32_t v = i2; std::memcpy(q + 12, &v, 4); } }
L_1ED0: { ++fl.t; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); { std::uint8_t *q = qword(mem, i12 + 0u); std::memcpy(q, &r.vf[2], 16); } }
L_1ED8: { ++fl.t; set_vi(i3, i11 - i12); }
L_1EE0: { ++fl.t; set_vi(i12, i12 + 3u); }
L_1EE8: { ++fl.t; pend = static_cast<std::int16_t>(i3) > 0; }
L_1EF0: { ++fl.t; set_vi(i10, i10 + 1u); }
    if (pend) { pend = false; goto L_1F38; }
L_1EF8: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i15; std::memcpy(q + 12, &v, 4); } }
L_1F00: { ++fl.t; set_vi(i15, (((7936u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1F08: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i1; std::memcpy(q + 8, &v, 4); } }
    if (pend) { pend = false; goto L_1820; }
L_1F10: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 8, 2); set_vi(i1, v); } }
L_1F18: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 12, 2); set_vi(i15, v); } }
L_1F20: { ++fl.t; set_vi(i10, 0u + 0u); }
L_1F28: { ++fl.t; set_vi(i9, 0u + i12); }
L_1F30: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_1F38: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 4, 2); set_vi(i2, v); } }
L_1F40: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 0, 2); set_vi(i3, v); } }
L_1F48: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1F50: { ++fl.t; set_vi(i14, i14 + 1u); }
    if (pendj) { pendj = false; vflushd(r.vf[3], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); goto dispatch; }
    vflushd(r.vf[3], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); 
L_1F58: { ++fl.t; { set_vi(i14, i14 - 1u); std::uint8_t *q = qword(mem, i14); std::memcpy(q, &r.vf[13], 16); } }
L_1F60: { ++fl.t; { set_vi(i14, i14 - 1u); std::uint8_t *q = qword(mem, i14); std::memcpy(q, &r.vf[18], 16); } }
L_1F68: { ++fl.t; { set_vi(i14, i14 - 1u); std::uint8_t *q = qword(mem, i14); std::memcpy(q, &r.vf[19], 16); } }
L_1F70: { ++fl.t; { set_vi(i14, i14 - 1u); std::uint8_t *q = qword(mem, i14); std::memcpy(q, &r.vf[23], 16); } }
L_1F78: { ++fl.t; set_vi(i14, i14 - 1u); }
L_1F80: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i15; std::memcpy(q + 12, &v, 4); } }
L_1F88: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i8; std::memcpy(q + 8, &v, 4); } }
L_1F90: { ++fl.t; set_vi(i14, i14 - 1u); }
L_1F98: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i9; std::memcpy(q + 12, &v, 4); } }
L_1FA0: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i10; std::memcpy(q + 8, &v, 4); } }
L_1FA8: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i11; std::memcpy(q + 4, &v, 4); } }
L_1FB0: { ++fl.t; set_vi(i15, (((8112u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1FB8: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i12; std::memcpy(q + 0, &v, 4); } }
    if (pend) { pend = false; goto L_2418; }
L_1FC0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 0, 2); set_vi(i12, v); } }
L_1FC8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 4, 2); set_vi(i11, v); } }
L_1FD0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 8, 2); set_vi(i10, v); } }
L_1FD8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 12, 2); set_vi(i9, v); } }
L_1FE0: { ++fl.t; pend = 0u == i3; }
L_1FE8: { ++fl.t; set_vi(i14, i14 + 1u); }
    if (pend) { pend = false; goto L_2038; }
L_1FF0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 133u); std::memcpy(&r.vf[1], q, 16); } n1 = vshadow(r.vf[1]); }
L_1FF8: { ++fl.t; set_vi(i4, 0u + i2); }
L_2000: { ++fl.t; set_vi(i5, 0u + i3); }
L_2008: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4) + 8, 2); set_vi(i7, v); } }
L_2010: { ++fl.t; set_vi(i5, i5 - 1u); }
L_2018: { ++fl.t; set_vi(i15, (((8216u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_2020: { ++fl.t; set_vi(i4, i4 + 1u); }
    if (pend) { pend = false; goto L_1E18; }
L_2028: { ++fl.t; pend = 0u != i5; }
L_2030: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4) + 8, 2); set_vi(i7, v); } }
    if (pend) { pend = false; goto L_2010; }
L_2038: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 8, 2); set_vi(i8, v); } }
L_2040: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 12, 2); set_vi(i15, v); } }
L_2048: { ++fl.t; set_vi(i14, i14 + 1u); }
L_2050: { ++fl.t; { const std::uint8_t *q = qword(mem, i14); std::memcpy(&r.vf[23], q, 16); set_vi(i14, i14 + 1u); } n23 = vshadow(r.vf[23]); }
L_2058: { ++fl.t; { const std::uint8_t *q = qword(mem, i14); std::memcpy(&r.vf[19], q, 16); set_vi(i14, i14 + 1u); } n19 = vshadow(r.vf[19]); }
L_2060: { ++fl.t; { const std::uint8_t *q = qword(mem, i14); std::memcpy(&r.vf[18], q, 16); set_vi(i14, i14 + 1u); } n18 = vshadow(r.vf[18]); }
L_2068: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_2070: { ++fl.t; { const std::uint8_t *q = qword(mem, i14); std::memcpy(&r.vf[13], q, 16); set_vi(i14, i14 + 1u); } n13 = vshadow(r.vf[13]); }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vhop(hop, ((8312u + sh) & 16383u));
    return;
L_20E8: { ++fl.t; set_vi(i14, i14 - 1u); }
L_20F0: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i15; std::memcpy(q + 12, &v, 4); } }
L_20F8: { ++fl.t; set_vi(i1, 0u + i4); }
L_2100: { ++fl.t; set_vi(i4, 0u + i5); }
L_2108: { ++fl.t; set_vi(i15, (((8456u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_2110: { ++fl.t; set_vi(i5, 0u + i1); }
    if (pend) { pend = false; goto L_3578; }
L_2118: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i2; std::memcpy(q + 0, &v, 4); } }
L_2120: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i6; std::memcpy(q + 4, &v, 4); } }
L_2128: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i5; std::memcpy(q + 8, &v, 4); } }
L_2130: { ++fl.t; set_vi(i4, 0u + i2); }
L_2138: { ++fl.t; set_vi(i15, (((8504u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_2140: { ++fl.t; set_vi(i6, 0u + i1); }
    if (pend) { pend = false; goto L_22D8; }
L_2148: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 0, 2); set_vi(i4, v); } }
L_2150: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 4, 2); set_vi(i5, v); } }
L_2158: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 8, 2); set_vi(i6, v); } }
L_2160: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 12, 2); set_vi(i15, v); } }
L_2168: { ++fl.t; pend = true; }
L_2170: { ++fl.t; set_vi(i14, i14 + 1u); }
    if (pend) { pend = false; goto L_22D8; }
    fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vhop(hop, ((8568u + sh) & 16383u));
    return;
L_22D8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 44u); vstore(r.vf[7], vsel(vload(r.vf[7]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } n7 = vshadow(r.vf[7]); }
L_22E0: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 1u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } n4 = vshadow(r.vf[4]); }
L_22E8: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 1u); vstore(r.vf[5], vsel(vload(r.vf[5]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } n5 = vshadow(r.vf[5]); }
L_22F0: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); vstore(r.vf[6], vsel(vload(r.vf[6]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } n6 = vshadow(r.vf[6]); }
L_22F8: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[4], r.vf[7].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2300: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[5], r.vf[7].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2308: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[6], r.vf[7].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2310: { ++fl.t; }
L_2318: { ++fl.t; }
L_2320: { ++fl.t; }
L_2328: { ++fl.t; set_vi(i1, (fl.clip() & 62415u) ? 1u : 0u); }
L_2330: { ++fl.t; pend = 0u == i1; }
L_2338: { ++fl.t; }
    if (pend) { pend = false; goto L_23B8; }
L_2340: { ++fl.t; set_vi(i3, 0u + i15); }
L_2348: { ++fl.t; set_vi(i15, (((9032u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_2350: { ++fl.t; }
    if (pend) { pend = false; goto L_1D60; }
L_2358: { ++fl.t; pend = 0u != i1; }
L_2360: { ++fl.t; set_vi(i15, 0u + i3); }
    if (pend) { pend = false; goto L_2408; }
L_2368: { ++fl.t; set_vi(i14, i14 - 1u); }
L_2370: { ++fl.t; { std::uint8_t *q = qword(mem, i14); const std::uint32_t v = i15; std::memcpy(q + 12, &v, 4); } }
L_2378: { ++fl.t; set_vi(i15, (((9080u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_2380: { ++fl.t; set_vi(i1, 0u + 5u); }
    if (pend) { pend = false; goto L_18C0; }
L_2388: { ++fl.t; set_vi(i15, (((9096u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_2390: { ++fl.t; }
    if (pend) { pend = false; goto L_1F58; }
L_2398: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i14) + 12, 2); set_vi(i15, v); } }
L_23A0: { ++fl.t; set_vi(i14, i14 + 1u); }
L_23A8: { ++fl.t; pend = true; }
L_23B0: { ++fl.t; set_vi(i1, 0u + 4u); }
    if (pend) { pend = false; goto L_18C0; }
L_23B8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 133u); std::memcpy(&r.vf[1], q, 16); } n1 = vshadow(r.vf[1]); }
L_23C0: { ++fl.t; set_vi(i3, 0u + i15); }
L_23C8: { ++fl.t; set_vi(i15, (((9160u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_23D0: { ++fl.t; set_vi(i7, 0u + i4); }
    if (pend) { pend = false; goto L_1E18; }
L_23D8: { ++fl.t; set_vi(i15, (((9176u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_23E0: { ++fl.t; set_vi(i7, 0u + i5); }
    if (pend) { pend = false; goto L_1E18; }
L_23E8: { ++fl.t; set_vi(i15, (((9192u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_23F0: { ++fl.t; set_vi(i7, 0u + i6); }
    if (pend) { pend = false; goto L_1E18; }
L_23F8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i3) * 8u) & 16383u; pendj = true; }
L_2400: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_2408: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_2410: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_2418: { ++fl.t; r.i = 3212836864u; }
L_2420: { ++fl.t; set_vi(i7, 0u + 0u); }
L_2428: { ++fl.t; set_vi(i8, 0u + 180u); }
L_2430: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 0u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_2438: { ++fl.t; set_vi(i12, 0u + 3u); }
L_2440: { ++fl.t; set_vi(i2, 0u + 7u); }
L_2448: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 1u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
L_2450: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 2u); std::memcpy(&r.vf[4], q, 16); } n4 = vshadow(r.vf[4]); }
L_2458: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 3u); std::memcpy(&r.vf[3], q, 16); } n3 = vshadow(r.vf[3]); }
L_2460: { ++fl.t; set_vi(i9, i8 + 4u); }
L_2468: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 0u); std::memcpy(q, &r.vf[2], 16); } }
L_2470: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 1u); std::memcpy(q, &r.vf[5], 16); } }
L_2478: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 2u); std::memcpy(q, &r.vf[4], 16); } }
L_2480: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 3u); std::memcpy(q, &r.vf[3], 16); } }
L_2488: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 0u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
L_2490: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 1u); std::memcpy(&r.vf[4], q, 16); } n4 = vshadow(r.vf[4]); }
L_2498: { ++fl.t; { std::uint8_t *q = qword(mem, i7 + 0u); const std::uint32_t v = i8; std::memcpy(q + 8, &v, 4); } }
L_24A0: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 2u); std::memcpy(&r.vf[3], q, 16); } n3 = vshadow(r.vf[3]); }
L_24A8: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 3u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_24B0: { ++fl.t; { std::uint8_t *q = qword(mem, i9 + 0u); std::memcpy(q, &r.vf[5], 16); } }
L_24B8: { ++fl.t; { std::uint8_t *q = qword(mem, i9 + 1u); std::memcpy(q, &r.vf[4], 16); } }
L_24C0: { ++fl.t; set_vi(i5, i9 + 4u); }
L_24C8: { ++fl.t; { std::uint8_t *q = qword(mem, i9 + 2u); std::memcpy(q, &r.vf[3], 16); } }
L_24D0: { ++fl.t; { std::uint8_t *q = qword(mem, i9 + 3u); std::memcpy(q, &r.vf[2], 16); } }
L_24D8: { ++fl.t; set_vi(i4, 0u + i7); }
L_24E0: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 0u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_24E8: { ++fl.t; { std::uint8_t *q = qword(mem, i7 + 1u); const std::uint32_t v = i9; std::memcpy(q + 8, &v, 4); } }
L_24F0: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
L_24F8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i9, v); } }
L_2500: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(&r.vf[4], q, 16); } n4 = vshadow(r.vf[4]); }
L_2508: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(&r.vf[3], q, 16); } n3 = vshadow(r.vf[3]); }
L_2510: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 44u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } n1 = vshadow(r.vf[1]); }
L_2518: { ++fl.t; { std::uint8_t *q = qword(mem, i5 + 0u); std::memcpy(q, &r.vf[2], 16); } }
L_2520: { ++fl.t; { const std::uint8_t *q = qword(mem, i9 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_2528: { ++fl.t; { std::uint8_t *q = qword(mem, i5 + 1u); std::memcpy(q, &r.vf[5], 16); } }
L_2530: { ++fl.t; r.clip = 0u; fl.set_clip(r.clip, fl.t - 4u); }
L_2538: { ++fl.t; { std::uint8_t *q = qword(mem, i5 + 2u); std::memcpy(q, &r.vf[4], 16); } }
L_2540: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); { std::uint8_t *q = qword(mem, i5 + 3u); std::memcpy(q, &r.vf[3], 16); } r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2548: { ++fl.t; { std::uint8_t *q = qword(mem, i7 + 2u); const std::uint32_t v = i5; std::memcpy(q + 8, &v, 4); } }
L_2550: { ++fl.t; set_vi(i8, i5 + 4u); }
L_2558: { ++fl.t; set_vi(i5, i4 + 1u); }
L_2560: { ++fl.t; set_vi(i3, 0u + 0u); }
L_2568: { ++fl.t; set_vi(i1, (fl.clip() & 1u) ? 1u : 0u); }
L_2570: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i5 + 0u) + 8, 2); set_vi(i10, v); } }
L_2578: { ++fl.t; set_vi(i11, i5 + 1u); }
L_2580: { ++fl.t; pend = 0u == i1; }
L_2588: { ++fl.t; set_vi(i12, i12 - 1u); }
    if (pend) { pend = false; goto L_2758; }
L_2590: { ++fl.t; { const std::uint8_t *q = qword(mem, i9 + 2u); std::memcpy(&r.vf[4], q, 16); } n4 = vshadow(r.vf[4]); }
L_2598: { ++fl.t; vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_25A0: { ++fl.t; { const std::uint8_t *q = qword(mem, i9 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_25A8: { ++fl.t; { const std::uint8_t *q = qword(mem, i9 + 3u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
L_25B0: { ++fl.t; { const std::uint8_t *q = qword(mem, i10 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_25B8: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_25C0: { ++fl.t; }
L_25C8: { ++fl.t; }
L_25D0: { ++fl.t; }
L_25D8: { ++fl.t; set_vi(i1, (fl.clip() & 1u) ? 1u : 0u); }
L_25E0: { ++fl.t; pend = 0u != i1; }
L_25E8: { ++fl.t; }
    if (pend) { pend = false; goto L_2700; }
L_25F0: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n1[3])); { const std::uint8_t *q = qword(mem, i10 + 0u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n2 = vshadow(r.vf[2]); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_25F8: { ++fl.t; { const std::uint8_t *q = qword(mem, i10 + 1u); std::memcpy(&r.vf[7], q, 16); } n7 = vshadow(r.vf[7]); }
L_2600: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 38u); vstore(r.vf[10], vsel(vload(r.vf[10]), vload_ptr(q), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } n10 = vshadow(r.vf[10]); }
L_2608: { ++fl.t; vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); const v4u uv = vsubd(n2, n1); vstore(r.vf[6], vsel(vload(r.vf[6]), vload(r.vf[9]), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n6 = vshadow(r.vf[6]); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2610: { ++fl.t; const v4u uv = vsubd(n7, n3); { const std::uint8_t *q = qword(mem, i10 + 2u); std::memcpy(&r.vf[7], q, 16); } vstore(r.vf[8], uv); fl.stick<15u, kSticky>(uv); n7 = vshadow(r.vf[7]); n8 = uv; }
L_2618: { ++fl.t; const v4u uv = vsubd(n9, n3); { const std::uint8_t *q = qword(mem, i10 + 3u); std::memcpy(&r.vf[9], q, 16); } vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n9 = vshadow(r.vf[9]); n12 = vsel(n12, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2620: { ++fl.t; const v4u uv = vmuld(n10, n1); set_vi(i1, 0u + i8); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2628: { ++fl.t; const v4u uv = vmuld(n6, vsplat(n1[2])); set_vi(i8, i8 + 4u); vstore(r.vf[11], vsel(vload(r.vf[11]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n11 = vsel(n11, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2630: { ++fl.t; const v4u uv = vmuld(n10, n2); set_vi(i4, i2 + i3); vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n10 = vsel(n10, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2638: { ++fl.t; const v4u uv = vmuld(n6, vsplat(n2[2])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[12].w[0], r.vf[8].w[0]); fl.end_q(r, qb, 7u); } vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n8 = vsel(n8, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2640: { ++fl.t; const v4u uv = vsubd(n7, n4); { std::uint8_t *q = qword(mem, i4 + 0u); const std::uint32_t v = i1; std::memcpy(q + 8, &v, 4); } vstore(r.vf[7], uv); fl.stick<15u, kSticky>(uv); n7 = uv; }
L_2648: { ++fl.t; const v4u uv = vmuld(n11, vfix(vsplat(r.i))); set_vi(i3, i3 + 1u); vstore(r.vf[11], vsel(vload(r.vf[11]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n11 = vsel(n11, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2650: { ++fl.t; const v4u uv = vsubd(n9, n5); vstore(r.vf[9], uv); fl.stick<15u, kSticky>(uv); n9 = uv; }
L_2658: { ++fl.t; const v4u uv = vaddd(n10, n8); vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n8 = vsel(n8, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2660: { ++fl.t; const v4u uv = vsubd(n11, n3); fl.flush_q(r); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2668: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[3].w[0], r.vf[8].w[0]); fl.end_q(r, qb, 7u); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_2670: { ++fl.t; const v4u uv = vmuld(n8, vsplat(n2[3])); vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<7u, kSticky>(uv); n8 = vsel(n8, uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_2678: { ++fl.t; const v4u uv = vmuld(n9, vsplat(n2[3])); vstore(r.vf[9], uv); fl.stick<15u, kSticky>(uv); n9 = uv; }
L_2680: { ++fl.t; const v4u uv = vaddd(n3, n8); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<7u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_2688: { ++fl.t; const v4u uv = vaddd(n5, n9); fl.flush_q(r); vstore(r.vf[3], uv); fl.stick<15u, kSticky>(uv); n3 = uv; }
L_2690: { ++fl.t; fl.flush_q(r); vflushd(r.vf[6], v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { std::uint8_t *q = qword(mem, i1 + 1u); std::memcpy(q, &r.vf[6], 16); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_2698: { ++fl.t; vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vmuld(n2, vsplat(n5[3])); { std::uint8_t *q = qword(mem, i1 + 3u); std::memcpy(q, &r.vf[3], 16); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_26A0: { ++fl.t; const v4u uv = vmuld(n7, vsplat(n5[3])); vstore(r.vf[5], uv); fl.push_last<15u, kSticky>(uv); n5 = uv; }
L_26A8: { ++fl.t; const v4u uv = vaddd(n1, n3); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_26B0: { ++fl.t; vflushd(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vaddd(n4, n5); { std::uint8_t *q = qword(mem, i1 + 0u); std::memcpy(q + 0, &r.vf[1].w[0], 4); std::memcpy(q + 4, &r.vf[1].w[1], 4); std::memcpy(q + 8, &r.vf[1].w[2], 4); } vstore(r.vf[4], uv); fl.push_last<15u, kSticky>(uv); n4 = uv; }
L_26B8: { ++fl.t; pend = 0u == i12; }
L_26C0: { ++fl.t; vflushd(r.vf[4], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i1 + 2u); std::memcpy(q, &r.vf[4], 16); } }
    if (pend) { pend = false; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_2900; }
L_26C8: { ++fl.t; set_vi(i12, i12 - 1u); }
L_26D0: { ++fl.t; set_vi(i9, 0u + i10); }
L_26D8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i11 + 0u) + 8, 2); set_vi(i10, v); } }
L_26E0: { ++fl.t; pend = 0u != i12; }
L_26E8: { ++fl.t; set_vi(i11, i11 + 1u); }
    if (pend) { pend = false; vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_2758; }
L_26F0: { ++fl.t; pend = true; }
L_26F8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i10, v); } }
    if (pend) { pend = false; vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_2758; }
    vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); 
L_2700: { ++fl.t; { const std::uint8_t *q = qword(mem, i10 + 2u); std::memcpy(&r.vf[4], q, 16); } n4 = vshadow(r.vf[4]); }
L_2708: { ++fl.t; vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_2710: { ++fl.t; { const std::uint8_t *q = qword(mem, i10 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_2718: { ++fl.t; pend = 0u == i12; }
L_2720: { ++fl.t; { const std::uint8_t *q = qword(mem, i10 + 3u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
    if (pend) { pend = false; goto L_2900; }
L_2728: { ++fl.t; set_vi(i12, i12 - 1u); }
L_2730: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i11 + 0u) + 8, 2); set_vi(i10, v); } }
L_2738: { ++fl.t; pend = 0u != i12; }
L_2740: { ++fl.t; set_vi(i11, i11 + 1u); }
    if (pend) { pend = false; goto L_25B0; }
L_2748: { ++fl.t; pend = true; }
L_2750: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i10, v); } }
    if (pend) { pend = false; goto L_25B0; }
L_2758: { ++fl.t; { const std::uint8_t *q = qword(mem, i10 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_2760: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2768: { ++fl.t; }
L_2770: { ++fl.t; }
L_2778: { ++fl.t; }
L_2780: { ++fl.t; set_vi(i1, (fl.clip() & 1u) ? 1u : 0u); }
L_2788: { ++fl.t; pend = 0u != i1; }
L_2790: { ++fl.t; }
    if (pend) { pend = false; goto L_27F0; }
L_2798: { ++fl.t; set_vi(i1, i2 + i3); }
L_27A0: { ++fl.t; set_vi(i3, i3 + 1u); }
L_27A8: { ++fl.t; pend = 0u == i12; }
L_27B0: { ++fl.t; { std::uint8_t *q = qword(mem, i1 + 0u); const std::uint32_t v = i9; std::memcpy(q + 8, &v, 4); } }
    if (pend) { pend = false; goto L_2900; }
L_27B8: { ++fl.t; set_vi(i12, i12 - 1u); }
L_27C0: { ++fl.t; set_vi(i9, 0u + i10); }
L_27C8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i11 + 0u) + 8, 2); set_vi(i10, v); } }
L_27D0: { ++fl.t; pend = 0u != i12; }
L_27D8: { ++fl.t; set_vi(i11, i11 + 1u); }
    if (pend) { pend = false; goto L_2758; }
L_27E0: { ++fl.t; pend = true; }
L_27E8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i10, v); } }
    if (pend) { pend = false; goto L_2758; }
L_27F0: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n1[3])); { const std::uint8_t *q = qword(mem, i9 + 0u); vstore(r.vf[6], vsel(vload(r.vf[6]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n6 = vshadow(r.vf[6]); n4 = vsel(n4, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_27F8: { ++fl.t; { const std::uint8_t *q = qword(mem, i10 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_2800: { ++fl.t; { const std::uint8_t *q = qword(mem, i9 + 1u); std::memcpy(&r.vf[9], q, 16); } n9 = vshadow(r.vf[9]); }
L_2808: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 38u); vstore(r.vf[5], vsel(vload(r.vf[5]), vload_ptr(q), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } n5 = vshadow(r.vf[5]); }
L_2810: { ++fl.t; vflushd(r.vf[4], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); const v4u uv = vsubd(n1, n6); vstore(r.vf[7], vsel(vload(r.vf[7]), vload(r.vf[4]), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n7 = vshadow(r.vf[7]); n8 = vsel(n8, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2818: { ++fl.t; const v4u uv = vsubd(n4, n9); vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); vstore(r.vf[11], vsel(vload(r.vf[11]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vshadow(r.vf[3]); n11 = vsel(n11, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2820: { ++fl.t; const v4u uv = vmuld(n5, n6); { const std::uint8_t *q = qword(mem, i9 + 3u); std::memcpy(&r.vf[10], q, 16); } vstore(r.vf[18], vsel(vload(r.vf[18]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n10 = vshadow(r.vf[10]); n18 = vsel(n18, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2828: { ++fl.t; const v4u uv = vmuld(n7, vsplat(n6[2])); { const std::uint8_t *q = qword(mem, i9 + 2u); std::memcpy(&r.vf[2], q, 16); } vstore(r.vf[13], vsel(vload(r.vf[13]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n2 = vshadow(r.vf[2]); n13 = vsel(n13, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2830: { ++fl.t; const v4u uv = vsubd(n3, n9); { const std::uint8_t *q = qword(mem, i10 + 2u); std::memcpy(&r.vf[4], q, 16); } vstore(r.vf[12], uv); fl.stick<15u, kSticky>(uv); n4 = vshadow(r.vf[4]); n12 = uv; }
L_2838: { ++fl.t; const v4u uv = vmuld(n5, n8); { const std::uint8_t *q = qword(mem, i10 + 3u); std::memcpy(&r.vf[5], q, 16); } vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n5 = vshadow(r.vf[5]); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2840: { ++fl.t; const v4u uv = vmuld(n7, vsplat(n8[2])); set_vi(i1, i2 + i3); vstore(r.vf[23], vsel(vload(r.vf[23]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n23 = vsel(n23, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2848: { ++fl.t; const v4u uv = vmuld(n13, vfix(vsplat(r.i))); { std::uint8_t *q = qword(mem, i1 + 1u); const std::uint32_t v = i10; std::memcpy(q + 8, &v, 4); } vstore(r.vf[19], vsel(vload(r.vf[19]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n19 = vsel(n19, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2850: { ++fl.t; const v4u uv = vsubd(n4, n2); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[11].w[0], r.vf[12].w[0]); fl.end_q(r, qb, 7u); } vstore(r.vf[11], uv); fl.stick<15u, kSticky>(uv); n11 = uv; }
L_2858: { ++fl.t; const v4u uv = vsubd(n5, n10); { std::uint8_t *q = qword(mem, i1 + 0u); const std::uint32_t v = i9; std::memcpy(q + 8, &v, 4); } vstore(r.vf[13], uv); fl.stick<15u, kSticky>(uv); n13 = uv; }
L_2860: { ++fl.t; const v4u uv = vaddd(n9, n23); set_vi(i3, i3 + 2u); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2868: { ++fl.t; const v4u uv = vsubd(n19, n18); fl.flush_q(r); vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n12 = vsel(n12, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2870: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[12].w[0], r.vf[9].w[0]); fl.end_q(r, qb, 7u); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_2878: { ++fl.t; const v4u uv = vmuld(n12, vsplat(n6[3])); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<7u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_2880: { ++fl.t; const v4u uv = vmuld(n13, vsplat(n6[3])); fl.flush_q(r); vstore(r.vf[12], uv); fl.stick<15u, kSticky>(uv); n12 = uv; }
L_2888: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_2890: { ++fl.t; const v4u uv = vaddd(n9, n7); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<7u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_2898: { ++fl.t; const v4u uv = vaddd(n10, n12); vstore(r.vf[12], uv); fl.stick<15u, kSticky>(uv); n12 = uv; }
L_28A0: { ++fl.t; const v4u uv = vmuld(n8, vsplat(n6[3])); vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n10 = vsel(n10, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_28A8: { ++fl.t; vflushd(r.vf[7], v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vmuld(n11, vsplat(n6[3])); { std::uint8_t *q = qword(mem, i10 + 1u); std::memcpy(q, &r.vf[7], 16); } vstore(r.vf[9], uv); fl.push_last<15u, kSticky>(uv); n9 = uv; }
L_28B0: { ++fl.t; vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vaddd(n6, n10); { std::uint8_t *q = qword(mem, i10 + 3u); std::memcpy(q, &r.vf[12], 16); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_28B8: { ++fl.t; vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vaddd(n2, n9); { std::uint8_t *q = qword(mem, i10 + 0u); std::memcpy(q + 0, &r.vf[6].w[0], 4); std::memcpy(q + 4, &r.vf[6].w[1], 4); std::memcpy(q + 8, &r.vf[6].w[2], 4); } vstore(r.vf[2], uv); fl.push_last<15u, kSticky>(uv); n2 = uv; }
L_28C0: { ++fl.t; pend = 0u == i12; }
L_28C8: { ++fl.t; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i10 + 2u); std::memcpy(q, &r.vf[2], 16); } }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[19], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[23], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_2900; }
L_28D0: { ++fl.t; set_vi(i12, i12 - 1u); }
L_28D8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i11 + 0u) + 8, 2); set_vi(i10, v); } }
L_28E0: { ++fl.t; pend = 0u != i12; }
L_28E8: { ++fl.t; set_vi(i11, i11 + 1u); }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[19], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[23], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_25B0; }
L_28F0: { ++fl.t; pend = true; }
L_28F8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i10, v); } }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[19], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[23], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_25B0; }
    vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[19], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[23], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); 
L_2900: { ++fl.t; pend = 0u == i3; }
L_2908: { ++fl.t; }
    if (pend) { pend = false; goto L_3568; }
L_2910: { ++fl.t; set_vi(i4, 0u + 7u); }
L_2918: { ++fl.t; set_vi(i6, 0u + i4); }
L_2920: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i6 + 0u) + 8, 2); set_vi(i5, v); } }
L_2928: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 44u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } n1 = vshadow(r.vf[1]); }
L_2930: { ++fl.t; set_vi(i6, i6 + 1u); }
L_2938: { ++fl.t; set_vi(i9, 0u + i3); }
L_2940: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_2948: { ++fl.t; set_vi(i7, i6 + 1u); }
L_2950: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i6 + 0u) + 8, 2); set_vi(i6, v); } }
L_2958: { ++fl.t; set_vi(i3, 0u + 0u); }
L_2960: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); set_vi(i2, 0u + 0u); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2968: { ++fl.t; set_vi(i9, i9 - 1u); }
L_2970: { ++fl.t; }
L_2978: { ++fl.t; }
L_2980: { ++fl.t; set_vi(i1, (fl.clip() & 2u) ? 1u : 0u); }
L_2988: { ++fl.t; pend = 0u == i1; }
L_2990: { ++fl.t; }
    if (pend) { pend = false; goto L_2B78; }
L_2998: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 2u); std::memcpy(&r.vf[4], q, 16); } n4 = vshadow(r.vf[4]); }
L_29A0: { ++fl.t; vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_29A8: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_29B0: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 3u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
L_29B8: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_29C0: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_29C8: { ++fl.t; }
L_29D0: { ++fl.t; }
L_29D8: { ++fl.t; }
L_29E0: { ++fl.t; set_vi(i1, (fl.clip() & 2u) ? 1u : 0u); }
L_29E8: { ++fl.t; pend = 0u != i1; }
L_29F0: { ++fl.t; }
    if (pend) { pend = false; goto L_2B20; }
L_29F8: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n1[3])); { const std::uint8_t *q = qword(mem, i6 + 0u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n2 = vshadow(r.vf[2]); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2A00: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(&r.vf[7], q, 16); } n7 = vshadow(r.vf[7]); }
L_2A08: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 38u); vstore(r.vf[9], vsel(vload(r.vf[9]), vload_ptr(q), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } n9 = vshadow(r.vf[9]); }
L_2A10: { ++fl.t; const v4u uv = vmuld(n6, vfix(vsplat(r.i))); { const std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(&r.vf[6], q, 16); } vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n6 = vshadow(r.vf[6]); n10 = vsel(n10, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2A18: { ++fl.t; const v4u uv = vsubd(n2, n1); { const std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(&r.vf[8], q, 16); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n8 = vshadow(r.vf[8]); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2A20: { ++fl.t; const v4u uv = vsubd(n7, n3); set_vi(i1, 0u + i8); vstore(r.vf[7], uv); fl.stick<15u, kSticky>(uv); n7 = uv; }
L_2A28: { ++fl.t; set_vi(i8, i8 + 4u); }
L_2A30: { ++fl.t; vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); const v4u uv = vsubd(n10, n3); vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[10]), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vshadow(r.vf[3]); n10 = vsel(n10, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2A38: { ++fl.t; set_vi(i5, i2 + i3); }
L_2A40: { ++fl.t; const v4u uv = vsubd(n6, n4); { std::uint8_t *q = qword(mem, i5 + 0u); const std::uint32_t v = i1; std::memcpy(q + 8, &v, 4); } vstore(r.vf[6], uv); fl.stick<15u, kSticky>(uv); n6 = uv; }
L_2A48: { ++fl.t; const v4u uv = vsubd(n8, n5); set_vi(i3, i3 + 1u); vstore(r.vf[8], uv); fl.stick<15u, kSticky>(uv); n8 = uv; }
L_2A50: { ++fl.t; const v4u uv = vmuld(n3, vsplat(n1[2])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[10].w[0], r.vf[7].w[0]); fl.end_q(r, qb, 7u); } vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n10 = vsel(n10, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2A58: { ++fl.t; const v4u uv = vmuld(n3, vsplat(n2[2])); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2A60: { ++fl.t; const v4u uv = vmuld(n9, n2); vstore(r.vf[11], vsel(vload(r.vf[11]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n11 = vsel(n11, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2A68: { ++fl.t; const v4u uv = vmuld(n9, n1); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2A70: { ++fl.t; const v4u uv = vmuld(n10, vfix(vsplat(r.i))); vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n10 = vsel(n10, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2A78: { ++fl.t; const v4u uv = vaddd(n11, n7); fl.flush_q(r); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2A80: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_2A88: { ++fl.t; const v4u uv = vsubd(n10, n9); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2A90: { ++fl.t; const v4u uv = vmuld(n7, vsplat(n2[3])); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<7u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_2A98: { ++fl.t; const v4u uv = vmuld(n8, vsplat(n2[3])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[9].w[0], r.vf[7].w[0]); fl.end_q(r, qb, 7u); } vstore(r.vf[8], uv); fl.stick<15u, kSticky>(uv); n8 = uv; }
L_2AA0: { ++fl.t; const v4u uv = vaddd(n3, n7); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<7u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_2AA8: { ++fl.t; const v4u uv = vaddd(n5, n8); fl.flush_q(r); vstore(r.vf[5], uv); fl.stick<15u, kSticky>(uv); n5 = uv; }
L_2AB0: { ++fl.t; fl.flush_q(r); vflushd(r.vf[3], v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { std::uint8_t *q = qword(mem, i1 + 1u); std::memcpy(q, &r.vf[3], 16); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_2AB8: { ++fl.t; vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vmuld(n2, vsplat(n3[3])); { std::uint8_t *q = qword(mem, i1 + 3u); std::memcpy(q, &r.vf[5], 16); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2AC0: { ++fl.t; const v4u uv = vmuld(n6, vsplat(n3[3])); vstore(r.vf[3], uv); fl.push_last<15u, kSticky>(uv); n3 = uv; }
L_2AC8: { ++fl.t; const v4u uv = vaddd(n1, n5); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2AD0: { ++fl.t; vflushd(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vaddd(n4, n3); { std::uint8_t *q = qword(mem, i1 + 0u); std::memcpy(q + 0, &r.vf[1].w[0], 4); std::memcpy(q + 4, &r.vf[1].w[1], 4); std::memcpy(q + 8, &r.vf[1].w[2], 4); } vstore(r.vf[4], uv); fl.push_last<15u, kSticky>(uv); n4 = uv; }
L_2AD8: { ++fl.t; pend = 0u == i9; }
L_2AE0: { ++fl.t; vflushd(r.vf[4], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i1 + 2u); std::memcpy(q, &r.vf[4], 16); } }
    if (pend) { pend = false; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_2D30; }
L_2AE8: { ++fl.t; set_vi(i9, i9 - 1u); }
L_2AF0: { ++fl.t; set_vi(i5, 0u + i6); }
L_2AF8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_2B00: { ++fl.t; pend = 0u != i9; }
L_2B08: { ++fl.t; set_vi(i7, i7 + 1u); }
    if (pend) { pend = false; vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_2B78; }
L_2B10: { ++fl.t; pend = true; }
L_2B18: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_2B78; }
    vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); 
L_2B20: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(&r.vf[4], q, 16); } n4 = vshadow(r.vf[4]); }
L_2B28: { ++fl.t; vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_2B30: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_2B38: { ++fl.t; pend = 0u == i9; }
L_2B40: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
    if (pend) { pend = false; goto L_2D30; }
L_2B48: { ++fl.t; set_vi(i9, i9 - 1u); }
L_2B50: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_2B58: { ++fl.t; pend = 0u != i9; }
L_2B60: { ++fl.t; set_vi(i7, i7 + 1u); }
    if (pend) { pend = false; goto L_29B8; }
L_2B68: { ++fl.t; pend = true; }
L_2B70: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; goto L_29B8; }
L_2B78: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_2B80: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2B88: { ++fl.t; }
L_2B90: { ++fl.t; }
L_2B98: { ++fl.t; }
L_2BA0: { ++fl.t; set_vi(i1, (fl.clip() & 2u) ? 1u : 0u); }
L_2BA8: { ++fl.t; pend = 0u != i1; }
L_2BB0: { ++fl.t; }
    if (pend) { pend = false; goto L_2C10; }
L_2BB8: { ++fl.t; set_vi(i1, i2 + i3); }
L_2BC0: { ++fl.t; set_vi(i3, i3 + 1u); }
L_2BC8: { ++fl.t; pend = 0u == i9; }
L_2BD0: { ++fl.t; { std::uint8_t *q = qword(mem, i1 + 0u); const std::uint32_t v = i5; std::memcpy(q + 8, &v, 4); } }
    if (pend) { pend = false; goto L_2D30; }
L_2BD8: { ++fl.t; set_vi(i9, i9 - 1u); }
L_2BE0: { ++fl.t; set_vi(i5, 0u + i6); }
L_2BE8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_2BF0: { ++fl.t; pend = 0u != i9; }
L_2BF8: { ++fl.t; set_vi(i7, i7 + 1u); }
    if (pend) { pend = false; goto L_2B78; }
L_2C00: { ++fl.t; pend = true; }
L_2C08: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; goto L_2B78; }
L_2C10: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n1[3])); { const std::uint8_t *q = qword(mem, i5 + 0u); vstore(r.vf[6], vsel(vload(r.vf[6]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n6 = vshadow(r.vf[6]); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2C18: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_2C20: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 38u); vstore(r.vf[11], vsel(vload(r.vf[11]), vload_ptr(q), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } n11 = vshadow(r.vf[11]); }
L_2C28: { ++fl.t; const v4u uv = vmuld(n3, vfix(vsplat(r.i))); { const std::uint8_t *q = qword(mem, i5 + 1u); std::memcpy(&r.vf[9], q, 16); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n9 = vshadow(r.vf[9]); n4 = vsel(n4, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2C30: { ++fl.t; vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_2C38: { ++fl.t; const v4u uv = vsubd(n1, n6); { const std::uint8_t *q = qword(mem, i5 + 2u); std::memcpy(&r.vf[2], q, 16); } vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n2 = vshadow(r.vf[2]); n7 = vsel(n7, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2C40: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 3u); std::memcpy(&r.vf[10], q, 16); } n10 = vshadow(r.vf[10]); }
L_2C48: { ++fl.t; vflushd(r.vf[4], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); const v4u uv = vsubd(n4, n9); vstore(r.vf[8], vsel(vload(r.vf[8]), vload(r.vf[4]), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); vstore(r.vf[13], vsel(vload(r.vf[13]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n8 = vshadow(r.vf[8]); n13 = vsel(n13, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2C50: { ++fl.t; const v4u uv = vsubd(n3, n9); { const std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(&r.vf[4], q, 16); } vstore(r.vf[12], uv); fl.stick<15u, kSticky>(uv); n4 = vshadow(r.vf[4]); n12 = uv; }
L_2C58: { ++fl.t; const v4u uv = vmuld(n11, n7); { const std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(&r.vf[5], q, 16); } vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n5 = vshadow(r.vf[5]); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2C60: { ++fl.t; const v4u uv = vmuld(n11, n6); set_vi(i1, i2 + i3); vstore(r.vf[18], vsel(vload(r.vf[18]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n18 = vsel(n18, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2C68: { ++fl.t; const v4u uv = vmuld(n8, vsplat(n6[2])); { std::uint8_t *q = qword(mem, i1 + 1u); const std::uint32_t v = i6; std::memcpy(q + 8, &v, 4); } vstore(r.vf[19], vsel(vload(r.vf[19]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n19 = vsel(n19, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2C70: { ++fl.t; const v4u uv = vmuld(n8, vsplat(n7[2])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[13].w[0], r.vf[12].w[0]); fl.end_q(r, qb, 7u); } vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n12 = vsel(n12, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2C78: { ++fl.t; const v4u uv = vsubd(n4, n2); { std::uint8_t *q = qword(mem, i1 + 0u); const std::uint32_t v = i5; std::memcpy(q + 8, &v, 4); } vstore(r.vf[11], uv); fl.stick<15u, kSticky>(uv); n11 = uv; }
L_2C80: { ++fl.t; const v4u uv = vsubd(n5, n10); set_vi(i3, i3 + 2u); vstore(r.vf[13], uv); fl.stick<15u, kSticky>(uv); n13 = uv; }
L_2C88: { ++fl.t; const v4u uv = vmuld(n19, vfix(vsplat(r.i))); vstore(r.vf[19], vsel(vload(r.vf[19]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n19 = vsel(n19, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2C90: { ++fl.t; const v4u uv = vaddd(n9, n12); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2C98: { ++fl.t; const v4u uv = vsubd(n19, n18); fl.flush_q(r); vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n12 = vsel(n12, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_2CA0: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[12].w[0], r.vf[9].w[0]); fl.end_q(r, qb, 7u); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_2CA8: { ++fl.t; const v4u uv = vmuld(n12, vsplat(n6[3])); vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<7u, kSticky>(uv); n8 = vsel(n8, uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_2CB0: { ++fl.t; const v4u uv = vmuld(n13, vsplat(n6[3])); vstore(r.vf[12], uv); fl.stick<15u, kSticky>(uv); n12 = uv; }
L_2CB8: { ++fl.t; const v4u uv = vaddd(n9, n8); vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<7u, kSticky>(uv); n8 = vsel(n8, uv, v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_2CC0: { ++fl.t; const v4u uv = vaddd(n10, n12); fl.flush_q(r); vstore(r.vf[9], uv); fl.stick<15u, kSticky>(uv); n9 = uv; }
L_2CC8: { ++fl.t; fl.flush_q(r); vflushd(r.vf[8], v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(q, &r.vf[8], 16); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_2CD0: { ++fl.t; vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vmuld(n7, vsplat(n6[3])); { std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(q, &r.vf[9], 16); } vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2CD8: { ++fl.t; const v4u uv = vmuld(n11, vsplat(n6[3])); vstore(r.vf[11], uv); fl.push_last<15u, kSticky>(uv); n11 = uv; }
L_2CE0: { ++fl.t; const v4u uv = vaddd(n6, n9); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2CE8: { ++fl.t; vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vaddd(n2, n11); { std::uint8_t *q = qword(mem, i6 + 0u); std::memcpy(q + 0, &r.vf[6].w[0], 4); std::memcpy(q + 4, &r.vf[6].w[1], 4); std::memcpy(q + 8, &r.vf[6].w[2], 4); } vstore(r.vf[2], uv); fl.push_last<15u, kSticky>(uv); n2 = uv; }
L_2CF0: { ++fl.t; pend = 0u == i9; }
L_2CF8: { ++fl.t; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(q, &r.vf[2], 16); } }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[19], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_2D30; }
L_2D00: { ++fl.t; set_vi(i9, i9 - 1u); }
L_2D08: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_2D10: { ++fl.t; pend = 0u != i9; }
L_2D18: { ++fl.t; set_vi(i7, i7 + 1u); }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[19], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_29B8; }
L_2D20: { ++fl.t; pend = true; }
L_2D28: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[19], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); goto L_29B8; }
    vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); vflushd(r.vf[19], v4u{0xFFFFFFFFu, 0u, 0u, 0u}); 
L_2D30: { ++fl.t; pend = 0u == i3; }
L_2D38: { ++fl.t; }
    if (pend) { pend = false; goto L_3568; }
L_2D40: { ++fl.t; set_vi(i4, 0u + 0u); }
L_2D48: { ++fl.t; set_vi(i6, 0u + i4); }
L_2D50: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i6 + 0u) + 8, 2); set_vi(i5, v); } }
L_2D58: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 44u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } n1 = vshadow(r.vf[1]); }
L_2D60: { ++fl.t; set_vi(i6, i6 + 1u); }
L_2D68: { ++fl.t; set_vi(i9, 0u + i3); }
L_2D70: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_2D78: { ++fl.t; set_vi(i7, i6 + 1u); }
L_2D80: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i6 + 0u) + 8, 2); set_vi(i6, v); } }
L_2D88: { ++fl.t; set_vi(i3, 0u + 0u); }
L_2D90: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); set_vi(i2, 0u + 7u); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2D98: { ++fl.t; set_vi(i9, i9 - 1u); }
L_2DA0: { ++fl.t; }
L_2DA8: { ++fl.t; }
L_2DB0: { ++fl.t; set_vi(i1, (fl.clip() & 4u) ? 1u : 0u); }
L_2DB8: { ++fl.t; pend = 0u == i1; }
L_2DC0: { ++fl.t; }
    if (pend) { pend = false; goto L_2F90; }
L_2DC8: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 2u); std::memcpy(&r.vf[4], q, 16); } n4 = vshadow(r.vf[4]); }
L_2DD0: { ++fl.t; vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_2DD8: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_2DE0: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 3u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
L_2DE8: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_2DF0: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2DF8: { ++fl.t; }
L_2E00: { ++fl.t; }
L_2E08: { ++fl.t; }
L_2E10: { ++fl.t; set_vi(i1, (fl.clip() & 4u) ? 1u : 0u); }
L_2E18: { ++fl.t; pend = 0u != i1; }
L_2E20: { ++fl.t; }
    if (pend) { pend = false; goto L_2F38; }
L_2E28: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n1[3])); { const std::uint8_t *q = qword(mem, i6 + 0u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n2 = vshadow(r.vf[2]); n9 = vsel(n9, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2E30: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(&r.vf[7], q, 16); } n7 = vshadow(r.vf[7]); }
L_2E38: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 38u); vstore(r.vf[10], vsel(vload(r.vf[10]), vload_ptr(q), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); } n10 = vshadow(r.vf[10]); }
L_2E40: { ++fl.t; vflushd(r.vf[9], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); const v4u uv = vsubd(n2, n1); vstore(r.vf[6], vsel(vload(r.vf[6]), vload(r.vf[9]), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n6 = vshadow(r.vf[6]); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2E48: { ++fl.t; const v4u uv = vsubd(n7, n3); { const std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(&r.vf[7], q, 16); } vstore(r.vf[8], uv); fl.stick<15u, kSticky>(uv); n7 = vshadow(r.vf[7]); n8 = uv; }
L_2E50: { ++fl.t; const v4u uv = vsubd(n9, n3); { const std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(&r.vf[9], q, 16); } vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n9 = vshadow(r.vf[9]); n12 = vsel(n12, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2E58: { ++fl.t; const v4u uv = vmuld(n10, n1); set_vi(i1, 0u + i8); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2E60: { ++fl.t; const v4u uv = vmuld(n6, vsplat(n1[2])); set_vi(i8, i8 + 4u); vstore(r.vf[11], vsel(vload(r.vf[11]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n11 = vsel(n11, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2E68: { ++fl.t; const v4u uv = vmuld(n10, n2); set_vi(i5, i2 + i3); vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n10 = vsel(n10, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2E70: { ++fl.t; const v4u uv = vmuld(n6, vsplat(n2[2])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[12].w[1], r.vf[8].w[1]); fl.end_q(r, qb, 7u); } vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n8 = vsel(n8, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2E78: { ++fl.t; const v4u uv = vsubd(n7, n4); { std::uint8_t *q = qword(mem, i5 + 0u); const std::uint32_t v = i1; std::memcpy(q + 8, &v, 4); } vstore(r.vf[7], uv); fl.stick<15u, kSticky>(uv); n7 = uv; }
L_2E80: { ++fl.t; const v4u uv = vmuld(n11, vfix(vsplat(r.i))); set_vi(i3, i3 + 1u); vstore(r.vf[11], vsel(vload(r.vf[11]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n11 = vsel(n11, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2E88: { ++fl.t; const v4u uv = vsubd(n9, n5); vstore(r.vf[9], uv); fl.stick<15u, kSticky>(uv); n9 = uv; }
L_2E90: { ++fl.t; const v4u uv = vaddd(n10, n8); vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n8 = vsel(n8, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2E98: { ++fl.t; const v4u uv = vsubd(n11, n3); fl.flush_q(r); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_2EA0: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[3].w[1], r.vf[8].w[1]); fl.end_q(r, qb, 7u); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_2EA8: { ++fl.t; const v4u uv = vmuld(n8, vsplat(n2[3])); vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<11u, kSticky>(uv); n8 = vsel(n8, uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_2EB0: { ++fl.t; const v4u uv = vmuld(n9, vsplat(n2[3])); vstore(r.vf[9], uv); fl.stick<15u, kSticky>(uv); n9 = uv; }
L_2EB8: { ++fl.t; const v4u uv = vaddd(n3, n8); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<11u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_2EC0: { ++fl.t; const v4u uv = vaddd(n5, n9); fl.flush_q(r); vstore(r.vf[3], uv); fl.stick<15u, kSticky>(uv); n3 = uv; }
L_2EC8: { ++fl.t; fl.flush_q(r); vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { std::uint8_t *q = qword(mem, i1 + 1u); std::memcpy(q, &r.vf[6], 16); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_2ED0: { ++fl.t; vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vmuld(n2, vsplat(n5[3])); { std::uint8_t *q = qword(mem, i1 + 3u); std::memcpy(q, &r.vf[3], 16); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2ED8: { ++fl.t; const v4u uv = vmuld(n7, vsplat(n5[3])); vstore(r.vf[5], uv); fl.push_last<15u, kSticky>(uv); n5 = uv; }
L_2EE0: { ++fl.t; const v4u uv = vaddd(n1, n3); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_2EE8: { ++fl.t; vflushd(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vaddd(n4, n5); { std::uint8_t *q = qword(mem, i1 + 0u); std::memcpy(q + 0, &r.vf[1].w[0], 4); std::memcpy(q + 4, &r.vf[1].w[1], 4); std::memcpy(q + 8, &r.vf[1].w[2], 4); } vstore(r.vf[4], uv); fl.push_last<15u, kSticky>(uv); n4 = uv; }
L_2EF0: { ++fl.t; pend = 0u == i9; }
L_2EF8: { ++fl.t; vflushd(r.vf[4], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i1 + 2u); std::memcpy(q, &r.vf[4], 16); } }
    if (pend) { pend = false; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[11], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[12], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_3138; }
L_2F00: { ++fl.t; set_vi(i9, i9 - 1u); }
L_2F08: { ++fl.t; set_vi(i5, 0u + i6); }
L_2F10: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_2F18: { ++fl.t; pend = 0u != i9; }
L_2F20: { ++fl.t; set_vi(i7, i7 + 1u); }
    if (pend) { pend = false; vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[11], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[12], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_2F90; }
L_2F28: { ++fl.t; pend = true; }
L_2F30: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[11], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[12], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_2F90; }
    vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[11], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[12], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); 
L_2F38: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(&r.vf[4], q, 16); } n4 = vshadow(r.vf[4]); }
L_2F40: { ++fl.t; vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_2F48: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_2F50: { ++fl.t; pend = 0u == i9; }
L_2F58: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
    if (pend) { pend = false; goto L_3138; }
L_2F60: { ++fl.t; set_vi(i9, i9 - 1u); }
L_2F68: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_2F70: { ++fl.t; pend = 0u != i9; }
L_2F78: { ++fl.t; set_vi(i7, i7 + 1u); }
    if (pend) { pend = false; goto L_2DE8; }
L_2F80: { ++fl.t; pend = true; }
L_2F88: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; goto L_2DE8; }
L_2F90: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_2F98: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_2FA0: { ++fl.t; }
L_2FA8: { ++fl.t; }
L_2FB0: { ++fl.t; }
L_2FB8: { ++fl.t; set_vi(i1, (fl.clip() & 4u) ? 1u : 0u); }
L_2FC0: { ++fl.t; pend = 0u != i1; }
L_2FC8: { ++fl.t; }
    if (pend) { pend = false; goto L_3028; }
L_2FD0: { ++fl.t; set_vi(i1, i2 + i3); }
L_2FD8: { ++fl.t; set_vi(i3, i3 + 1u); }
L_2FE0: { ++fl.t; pend = 0u == i9; }
L_2FE8: { ++fl.t; { std::uint8_t *q = qword(mem, i1 + 0u); const std::uint32_t v = i5; std::memcpy(q + 8, &v, 4); } }
    if (pend) { pend = false; goto L_3138; }
L_2FF0: { ++fl.t; set_vi(i9, i9 - 1u); }
L_2FF8: { ++fl.t; set_vi(i5, 0u + i6); }
L_3000: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_3008: { ++fl.t; pend = 0u != i9; }
L_3010: { ++fl.t; set_vi(i7, i7 + 1u); }
    if (pend) { pend = false; goto L_2F90; }
L_3018: { ++fl.t; pend = true; }
L_3020: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; goto L_2F90; }
L_3028: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n1[3])); { const std::uint8_t *q = qword(mem, i5 + 0u); vstore(r.vf[6], vsel(vload(r.vf[6]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n6 = vshadow(r.vf[6]); n4 = vsel(n4, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3030: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_3038: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 1u); std::memcpy(&r.vf[9], q, 16); } n9 = vshadow(r.vf[9]); }
L_3040: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 38u); vstore(r.vf[5], vsel(vload(r.vf[5]), vload_ptr(q), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); } n5 = vshadow(r.vf[5]); }
L_3048: { ++fl.t; vflushd(r.vf[4], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); const v4u uv = vsubd(n1, n6); vstore(r.vf[7], vsel(vload(r.vf[7]), vload(r.vf[4]), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n7 = vshadow(r.vf[7]); n8 = vsel(n8, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3050: { ++fl.t; const v4u uv = vsubd(n4, n9); vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); vstore(r.vf[11], vsel(vload(r.vf[11]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n3 = vshadow(r.vf[3]); n11 = vsel(n11, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3058: { ++fl.t; const v4u uv = vmuld(n5, n6); { const std::uint8_t *q = qword(mem, i5 + 3u); std::memcpy(&r.vf[10], q, 16); } vstore(r.vf[18], vsel(vload(r.vf[18]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n10 = vshadow(r.vf[10]); n18 = vsel(n18, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3060: { ++fl.t; const v4u uv = vmuld(n7, vsplat(n6[2])); { const std::uint8_t *q = qword(mem, i5 + 2u); std::memcpy(&r.vf[2], q, 16); } vstore(r.vf[13], vsel(vload(r.vf[13]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n2 = vshadow(r.vf[2]); n13 = vsel(n13, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3068: { ++fl.t; const v4u uv = vsubd(n3, n9); { const std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(&r.vf[4], q, 16); } vstore(r.vf[12], uv); fl.stick<15u, kSticky>(uv); n4 = vshadow(r.vf[4]); n12 = uv; }
L_3070: { ++fl.t; const v4u uv = vmuld(n5, n8); { const std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(&r.vf[5], q, 16); } vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n5 = vshadow(r.vf[5]); n9 = vsel(n9, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3078: { ++fl.t; const v4u uv = vmuld(n7, vsplat(n8[2])); set_vi(i1, i2 + i3); vstore(r.vf[23], vsel(vload(r.vf[23]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n23 = vsel(n23, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3080: { ++fl.t; const v4u uv = vmuld(n13, vfix(vsplat(r.i))); { std::uint8_t *q = qword(mem, i1 + 1u); const std::uint32_t v = i6; std::memcpy(q + 8, &v, 4); } vstore(r.vf[19], vsel(vload(r.vf[19]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n19 = vsel(n19, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3088: { ++fl.t; const v4u uv = vsubd(n4, n2); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[11].w[1], r.vf[12].w[1]); fl.end_q(r, qb, 7u); } vstore(r.vf[11], uv); fl.stick<15u, kSticky>(uv); n11 = uv; }
L_3090: { ++fl.t; const v4u uv = vsubd(n5, n10); { std::uint8_t *q = qword(mem, i1 + 0u); const std::uint32_t v = i5; std::memcpy(q + 8, &v, 4); } vstore(r.vf[13], uv); fl.stick<15u, kSticky>(uv); n13 = uv; }
L_3098: { ++fl.t; const v4u uv = vaddd(n9, n23); set_vi(i3, i3 + 2u); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_30A0: { ++fl.t; const v4u uv = vsubd(n19, n18); fl.flush_q(r); vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n12 = vsel(n12, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_30A8: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[12].w[1], r.vf[9].w[1]); fl.end_q(r, qb, 7u); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_30B0: { ++fl.t; const v4u uv = vmuld(n12, vsplat(n6[3])); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<11u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_30B8: { ++fl.t; const v4u uv = vmuld(n13, vsplat(n6[3])); fl.flush_q(r); vstore(r.vf[12], uv); fl.stick<15u, kSticky>(uv); n12 = uv; }
L_30C0: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_30C8: { ++fl.t; const v4u uv = vaddd(n9, n7); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<11u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_30D0: { ++fl.t; const v4u uv = vaddd(n10, n12); vstore(r.vf[12], uv); fl.stick<15u, kSticky>(uv); n12 = uv; }
L_30D8: { ++fl.t; const v4u uv = vmuld(n8, vsplat(n6[3])); vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n10 = vsel(n10, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_30E0: { ++fl.t; vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vmuld(n11, vsplat(n6[3])); { std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(q, &r.vf[7], 16); } vstore(r.vf[9], uv); fl.push_last<15u, kSticky>(uv); n9 = uv; }
L_30E8: { ++fl.t; vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vaddd(n6, n10); { std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(q, &r.vf[12], 16); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_30F0: { ++fl.t; vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vaddd(n2, n9); { std::uint8_t *q = qword(mem, i6 + 0u); std::memcpy(q + 0, &r.vf[6].w[0], 4); std::memcpy(q + 4, &r.vf[6].w[1], 4); std::memcpy(q + 8, &r.vf[6].w[2], 4); } vstore(r.vf[2], uv); fl.push_last<15u, kSticky>(uv); n2 = uv; }
L_30F8: { ++fl.t; pend = 0u == i9; }
L_3100: { ++fl.t; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(q, &r.vf[2], 16); } }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[19], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[23], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_3138; }
L_3108: { ++fl.t; set_vi(i9, i9 - 1u); }
L_3110: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_3118: { ++fl.t; pend = 0u != i9; }
L_3120: { ++fl.t; set_vi(i7, i7 + 1u); }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[19], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[23], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_2DE8; }
L_3128: { ++fl.t; pend = true; }
L_3130: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[19], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[23], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_2DE8; }
    vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[19], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[23], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); 
L_3138: { ++fl.t; pend = 0u == i3; }
L_3140: { ++fl.t; }
    if (pend) { pend = false; goto L_3568; }
L_3148: { ++fl.t; set_vi(i4, 0u + 7u); }
L_3150: { ++fl.t; set_vi(i6, 0u + i4); }
L_3158: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i6 + 0u) + 8, 2); set_vi(i5, v); } }
L_3160: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 44u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } n1 = vshadow(r.vf[1]); }
L_3168: { ++fl.t; set_vi(i6, i6 + 1u); }
L_3170: { ++fl.t; set_vi(i9, 0u + i3); }
L_3178: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_3180: { ++fl.t; set_vi(i7, i6 + 1u); }
L_3188: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i6 + 0u) + 8, 2); set_vi(i6, v); } }
L_3190: { ++fl.t; set_vi(i3, 0u + 0u); }
L_3198: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); set_vi(i2, 0u + 0u); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_31A0: { ++fl.t; set_vi(i9, i9 - 1u); }
L_31A8: { ++fl.t; }
L_31B0: { ++fl.t; }
L_31B8: { ++fl.t; set_vi(i1, (fl.clip() & 8u) ? 1u : 0u); }
L_31C0: { ++fl.t; pend = 0u == i1; }
L_31C8: { ++fl.t; }
    if (pend) { pend = false; goto L_33B0; }
L_31D0: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 2u); std::memcpy(&r.vf[4], q, 16); } n4 = vshadow(r.vf[4]); }
L_31D8: { ++fl.t; vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_31E0: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_31E8: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 3u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
L_31F0: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_31F8: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_3200: { ++fl.t; }
L_3208: { ++fl.t; }
L_3210: { ++fl.t; }
L_3218: { ++fl.t; set_vi(i1, (fl.clip() & 8u) ? 1u : 0u); }
L_3220: { ++fl.t; pend = 0u != i1; }
L_3228: { ++fl.t; }
    if (pend) { pend = false; goto L_3358; }
L_3230: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n1[3])); { const std::uint8_t *q = qword(mem, i6 + 0u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n2 = vshadow(r.vf[2]); n6 = vsel(n6, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3238: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(&r.vf[7], q, 16); } n7 = vshadow(r.vf[7]); }
L_3240: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 38u); vstore(r.vf[9], vsel(vload(r.vf[9]), vload_ptr(q), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); } n9 = vshadow(r.vf[9]); }
L_3248: { ++fl.t; const v4u uv = vmuld(n6, vfix(vsplat(r.i))); { const std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(&r.vf[6], q, 16); } vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n6 = vshadow(r.vf[6]); n10 = vsel(n10, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3250: { ++fl.t; const v4u uv = vsubd(n2, n1); { const std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(&r.vf[8], q, 16); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n8 = vshadow(r.vf[8]); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3258: { ++fl.t; const v4u uv = vsubd(n7, n3); set_vi(i1, 0u + i8); vstore(r.vf[7], uv); fl.stick<15u, kSticky>(uv); n7 = uv; }
L_3260: { ++fl.t; set_vi(i8, i8 + 4u); }
L_3268: { ++fl.t; vflushd(r.vf[10], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); const v4u uv = vsubd(n10, n3); vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[10]), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n3 = vshadow(r.vf[3]); n10 = vsel(n10, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3270: { ++fl.t; set_vi(i5, i2 + i3); }
L_3278: { ++fl.t; const v4u uv = vsubd(n6, n4); { std::uint8_t *q = qword(mem, i5 + 0u); const std::uint32_t v = i1; std::memcpy(q + 8, &v, 4); } vstore(r.vf[6], uv); fl.stick<15u, kSticky>(uv); n6 = uv; }
L_3280: { ++fl.t; const v4u uv = vsubd(n8, n5); set_vi(i3, i3 + 1u); vstore(r.vf[8], uv); fl.stick<15u, kSticky>(uv); n8 = uv; }
L_3288: { ++fl.t; const v4u uv = vmuld(n3, vsplat(n1[2])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[10].w[1], r.vf[7].w[1]); fl.end_q(r, qb, 7u); } vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n10 = vsel(n10, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3290: { ++fl.t; const v4u uv = vmuld(n3, vsplat(n2[2])); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3298: { ++fl.t; const v4u uv = vmuld(n9, n2); vstore(r.vf[11], vsel(vload(r.vf[11]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n11 = vsel(n11, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_32A0: { ++fl.t; const v4u uv = vmuld(n9, n1); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_32A8: { ++fl.t; const v4u uv = vmuld(n10, vfix(vsplat(r.i))); vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n10 = vsel(n10, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_32B0: { ++fl.t; const v4u uv = vaddd(n11, n7); fl.flush_q(r); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_32B8: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_32C0: { ++fl.t; const v4u uv = vsubd(n10, n9); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_32C8: { ++fl.t; const v4u uv = vmuld(n7, vsplat(n2[3])); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<11u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_32D0: { ++fl.t; const v4u uv = vmuld(n8, vsplat(n2[3])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[9].w[1], r.vf[7].w[1]); fl.end_q(r, qb, 7u); } vstore(r.vf[8], uv); fl.stick<15u, kSticky>(uv); n8 = uv; }
L_32D8: { ++fl.t; const v4u uv = vaddd(n3, n7); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<11u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_32E0: { ++fl.t; const v4u uv = vaddd(n5, n8); fl.flush_q(r); vstore(r.vf[5], uv); fl.stick<15u, kSticky>(uv); n5 = uv; }
L_32E8: { ++fl.t; fl.flush_q(r); vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { std::uint8_t *q = qword(mem, i1 + 1u); std::memcpy(q, &r.vf[3], 16); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_32F0: { ++fl.t; vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vmuld(n2, vsplat(n3[3])); { std::uint8_t *q = qword(mem, i1 + 3u); std::memcpy(q, &r.vf[5], 16); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_32F8: { ++fl.t; const v4u uv = vmuld(n6, vsplat(n3[3])); vstore(r.vf[3], uv); fl.push_last<15u, kSticky>(uv); n3 = uv; }
L_3300: { ++fl.t; const v4u uv = vaddd(n1, n5); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3308: { ++fl.t; vflushd(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vaddd(n4, n3); { std::uint8_t *q = qword(mem, i1 + 0u); std::memcpy(q + 0, &r.vf[1].w[0], 4); std::memcpy(q + 4, &r.vf[1].w[1], 4); std::memcpy(q + 8, &r.vf[1].w[2], 4); } vstore(r.vf[4], uv); fl.push_last<15u, kSticky>(uv); n4 = uv; }
L_3310: { ++fl.t; pend = 0u == i9; }
L_3318: { ++fl.t; vflushd(r.vf[4], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i1 + 2u); std::memcpy(q, &r.vf[4], 16); } }
    if (pend) { pend = false; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[10], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[11], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_3568; }
L_3320: { ++fl.t; set_vi(i9, i9 - 1u); }
L_3328: { ++fl.t; set_vi(i5, 0u + i6); }
L_3330: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_3338: { ++fl.t; pend = 0u != i9; }
L_3340: { ++fl.t; set_vi(i7, i7 + 1u); }
    if (pend) { pend = false; vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[10], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[11], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_33B0; }
L_3348: { ++fl.t; pend = true; }
L_3350: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[10], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[11], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_33B0; }
    vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[10], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[11], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); 
L_3358: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(&r.vf[4], q, 16); } n4 = vshadow(r.vf[4]); }
L_3360: { ++fl.t; vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_3368: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_3370: { ++fl.t; pend = 0u == i9; }
L_3378: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow(r.vf[5]); }
    if (pend) { pend = false; goto L_3568; }
L_3380: { ++fl.t; set_vi(i9, i9 - 1u); }
L_3388: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_3390: { ++fl.t; pend = 0u != i9; }
L_3398: { ++fl.t; set_vi(i7, i7 + 1u); }
    if (pend) { pend = false; goto L_31F0; }
L_33A0: { ++fl.t; pend = true; }
L_33A8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; goto L_31F0; }
L_33B0: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow(r.vf[2]); }
L_33B8: { ++fl.t; const std::uint32_t uclip = vclip_value(r, r.vf[2], r.vf[1].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_33C0: { ++fl.t; }
L_33C8: { ++fl.t; }
L_33D0: { ++fl.t; }
L_33D8: { ++fl.t; set_vi(i1, (fl.clip() & 8u) ? 1u : 0u); }
L_33E0: { ++fl.t; pend = 0u != i1; }
L_33E8: { ++fl.t; }
    if (pend) { pend = false; goto L_3448; }
L_33F0: { ++fl.t; set_vi(i1, i2 + i3); }
L_33F8: { ++fl.t; set_vi(i3, i3 + 1u); }
L_3400: { ++fl.t; pend = 0u == i9; }
L_3408: { ++fl.t; { std::uint8_t *q = qword(mem, i1 + 0u); const std::uint32_t v = i5; std::memcpy(q + 8, &v, 4); } }
    if (pend) { pend = false; goto L_3568; }
L_3410: { ++fl.t; set_vi(i9, i9 - 1u); }
L_3418: { ++fl.t; set_vi(i5, 0u + i6); }
L_3420: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_3428: { ++fl.t; pend = 0u != i9; }
L_3430: { ++fl.t; set_vi(i7, i7 + 1u); }
    if (pend) { pend = false; goto L_33B0; }
L_3438: { ++fl.t; pend = true; }
L_3440: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; goto L_33B0; }
L_3448: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n1[3])); { const std::uint8_t *q = qword(mem, i5 + 0u); vstore(r.vf[6], vsel(vload(r.vf[6]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n6 = vshadow(r.vf[6]); n3 = vsel(n3, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3450: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 0u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow(r.vf[1]); }
L_3458: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 38u); vstore(r.vf[11], vsel(vload(r.vf[11]), vload_ptr(q), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); } n11 = vshadow(r.vf[11]); }
L_3460: { ++fl.t; const v4u uv = vmuld(n3, vfix(vsplat(r.i))); { const std::uint8_t *q = qword(mem, i5 + 1u); std::memcpy(&r.vf[9], q, 16); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n9 = vshadow(r.vf[9]); n4 = vsel(n4, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3468: { ++fl.t; vstore(r.vf[3], vsel(vload(r.vf[3]), vload(r.vf[2]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); n3 = vshadow(r.vf[3]); }
L_3470: { ++fl.t; const v4u uv = vsubd(n1, n6); { const std::uint8_t *q = qword(mem, i5 + 2u); std::memcpy(&r.vf[2], q, 16); } vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n2 = vshadow(r.vf[2]); n7 = vsel(n7, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3478: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 3u); std::memcpy(&r.vf[10], q, 16); } n10 = vshadow(r.vf[10]); }
L_3480: { ++fl.t; vflushd(r.vf[4], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); const v4u uv = vsubd(n4, n9); vstore(r.vf[8], vsel(vload(r.vf[8]), vload(r.vf[4]), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); vstore(r.vf[13], vsel(vload(r.vf[13]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n8 = vshadow(r.vf[8]); n13 = vsel(n13, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3488: { ++fl.t; const v4u uv = vsubd(n3, n9); { const std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(&r.vf[4], q, 16); } vstore(r.vf[12], uv); fl.stick<15u, kSticky>(uv); n4 = vshadow(r.vf[4]); n12 = uv; }
L_3490: { ++fl.t; const v4u uv = vmuld(n11, n7); { const std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(&r.vf[5], q, 16); } vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n5 = vshadow(r.vf[5]); n9 = vsel(n9, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3498: { ++fl.t; const v4u uv = vmuld(n11, n6); set_vi(i1, i2 + i3); vstore(r.vf[18], vsel(vload(r.vf[18]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n18 = vsel(n18, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_34A0: { ++fl.t; const v4u uv = vmuld(n8, vsplat(n6[2])); { std::uint8_t *q = qword(mem, i1 + 1u); const std::uint32_t v = i6; std::memcpy(q + 8, &v, 4); } vstore(r.vf[19], vsel(vload(r.vf[19]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n19 = vsel(n19, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_34A8: { ++fl.t; const v4u uv = vmuld(n8, vsplat(n7[2])); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[13].w[1], r.vf[12].w[1]); fl.end_q(r, qb, 7u); } vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n12 = vsel(n12, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_34B0: { ++fl.t; const v4u uv = vsubd(n4, n2); { std::uint8_t *q = qword(mem, i1 + 0u); const std::uint32_t v = i5; std::memcpy(q + 8, &v, 4); } vstore(r.vf[11], uv); fl.stick<15u, kSticky>(uv); n11 = uv; }
L_34B8: { ++fl.t; const v4u uv = vsubd(n5, n10); set_vi(i3, i3 + 2u); vstore(r.vf[13], uv); fl.stick<15u, kSticky>(uv); n13 = uv; }
L_34C0: { ++fl.t; const v4u uv = vmuld(n19, vfix(vsplat(r.i))); vstore(r.vf[19], vsel(vload(r.vf[19]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n19 = vsel(n19, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_34C8: { ++fl.t; const v4u uv = vaddd(n9, n12); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_34D0: { ++fl.t; const v4u uv = vsubd(n19, n18); fl.flush_q(r); vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n12 = vsel(n12, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_34D8: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[12].w[1], r.vf[9].w[1]); fl.end_q(r, qb, 7u); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_34E0: { ++fl.t; const v4u uv = vmuld(n12, vsplat(n6[3])); vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<11u, kSticky>(uv); n8 = vsel(n8, uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_34E8: { ++fl.t; const v4u uv = vmuld(n13, vsplat(n6[3])); vstore(r.vf[12], uv); fl.stick<15u, kSticky>(uv); n12 = uv; }
L_34F0: { ++fl.t; const v4u uv = vaddd(n9, n8); vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu})); fl.stick<11u, kSticky>(uv); n8 = vsel(n8, uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); }
L_34F8: { ++fl.t; const v4u uv = vaddd(n10, n12); fl.flush_q(r); vstore(r.vf[9], uv); fl.stick<15u, kSticky>(uv); n9 = uv; }
L_3500: { ++fl.t; fl.flush_q(r); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { std::uint8_t *q = qword(mem, i6 + 1u); std::memcpy(q, &r.vf[8], 16); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_3508: { ++fl.t; vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vmuld(n7, vsplat(n6[3])); { std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(q, &r.vf[9], 16); } vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3510: { ++fl.t; const v4u uv = vmuld(n11, vsplat(n6[3])); vstore(r.vf[11], uv); fl.push_last<15u, kSticky>(uv); n11 = uv; }
L_3518: { ++fl.t; const v4u uv = vaddd(n6, n9); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3520: { ++fl.t; vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vaddd(n2, n11); { std::uint8_t *q = qword(mem, i6 + 0u); std::memcpy(q + 0, &r.vf[6].w[0], 4); std::memcpy(q + 4, &r.vf[6].w[1], 4); std::memcpy(q + 8, &r.vf[6].w[2], 4); } vstore(r.vf[2], uv); fl.push_last<15u, kSticky>(uv); n2 = uv; }
L_3528: { ++fl.t; pend = 0u == i9; }
L_3530: { ++fl.t; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(q, &r.vf[2], 16); } }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[19], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_3568; }
L_3538: { ++fl.t; set_vi(i9, i9 - 1u); }
L_3540: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i7 + 0u) + 8, 2); set_vi(i6, v); } }
L_3548: { ++fl.t; pend = 0u != i9; }
L_3550: { ++fl.t; set_vi(i7, i7 + 1u); }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[19], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_31F0; }
L_3558: { ++fl.t; pend = true; }
L_3560: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i4 + 0u) + 8, 2); set_vi(i6, v); } }
    if (pend) { pend = false; vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[19], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); goto L_31F0; }
    vflushd(r.vf[6], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[18], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); vflushd(r.vf[19], v4u{0u, 0xFFFFFFFFu, 0u, 0u}); 
L_3568: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_3570: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_3578: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 0u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n2 = vshadow(r.vf[2]); }
L_3580: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 41u); vstore(r.vf[5], vsel(vload(r.vf[5]), vload_ptr(q), v4u{0u, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu})); } n5 = vshadow(r.vf[5]); }
L_3588: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 0u); vstore(r.vf[6], vsel(vload(r.vf[6]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n6 = vshadow(r.vf[6]); }
L_3590: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 0u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n4 = vshadow(r.vf[4]); }
L_3598: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 3u); std::memcpy(&r.vf[3], q, 16); } n3 = vshadow(r.vf[3]); }
L_35A0: { ++fl.t; const v4u uv = vsubd(n5, vsplat(n2[2])); { const std::uint8_t *q = qword(mem, i4 + 2u); std::memcpy(&r.vf[1], q, 16); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n1 = vshadow(r.vf[1]); n5 = vsel(n5, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_35A8: { ++fl.t; const v4u uv = vsubd(n6, n2); { const std::uint8_t *q = qword(mem, i5 + 3u); std::memcpy(&r.vf[6], q, 16); } vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n6 = vshadow(r.vf[6]); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_35B0: { ++fl.t; const v4u uv = vsubd(n4, n2); { const std::uint8_t *q = qword(mem, i6 + 3u); std::memcpy(&r.vf[8], q, 16); } vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n8 = vshadow(r.vf[8]); n7 = vsel(n7, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_35B8: { ++fl.t; { const std::uint8_t *q = qword(mem, i6 + 2u); std::memcpy(&r.vf[11], q, 16); } n11 = vshadow(r.vf[11]); }
L_35C0: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vsplat(n5[2])); { const std::uint8_t *q = qword(mem, i5 + 2u); std::memcpy(&r.vf[4], q, 16); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n4 = vshadow(r.vf[4]); n2 = vsel(n2, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_35C8: { ++fl.t; const v4u uv = vsubd(n6, n3); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[5].w[3], r.vf[9].w[2]); fl.end_q(r, qb, 7u); } vstore(r.vf[6], uv); fl.stick<15u, kSticky>(uv); n6 = uv; }
L_35D0: { ++fl.t; const v4u uv = vsubd(n8, n3); { const std::uint8_t *q = qword(mem, 0u + 38u); vstore(r.vf[23], vsel(vload(r.vf[23]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[10], uv); fl.stick<15u, kSticky>(uv); n23 = vshadow(r.vf[23]); n10 = uv; }
L_35D8: { ++fl.t; const v4u uv = vsubd(n11, n1); vstore(r.vf[11], uv); fl.stick<15u, kSticky>(uv); n11 = uv; }
L_35E0: { ++fl.t; const v4u uv = vsubd(n4, n1); vstore(r.vf[8], uv); fl.stick<15u, kSticky>(uv); n8 = uv; }
L_35E8: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vsplat(n5[2])); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_35F0: { ++fl.t; const v4u uv = vmuld(n23, vsplat(n5[2])); { const std::uint8_t *q = qword(mem, 0u + 33u); vstore(r.vf[12], vsel(vload(r.vf[12]), vload_ptr(q), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n12 = vshadow(r.vf[12]); n4 = vsel(n4, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_35F8: { ++fl.t; const v4u uv = vmuld(n23, vsplat(n5[2])); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3600: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vqd(r.q)); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[5].w[3], r.vf[7].w[2]); fl.end_q(r, qb, 7u); } vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n12 = vsel(n12, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_3608: { ++fl.t; const v4u uv = vmuld(n9, vqd(r.q)); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3610: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vsplat(n12[0])); vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n4 = vsel(n4, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_3618: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vsplat(n12[0])); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_3620: { ++fl.t; const v4u uv = vmuld(n11, vsplat(n12[1])); vstore(r.vf[11], uv); fl.stick<15u, kSticky>(uv); n11 = uv; }
L_3628: { ++fl.t; const v4u uv = vaddd(n9, n2); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3630: { ++fl.t; const v4u uv = vmuld(n10, vsplat(n12[1])); vstore(r.vf[24], uv); fl.stick<15u, kSticky>(uv); n24 = uv; }
L_3638: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vqd(r.q)); vstore(r.vf[10], vsel(vload(r.vf[10]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n10 = vsel(n10, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_3640: { ++fl.t; fl.flush_q(r); const v4u uv = vmuld(n7, vqd(r.q)); set_vi(i2, 0u + 176u); vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n12 = vsel(n12, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3648: { ++fl.t; vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vaddd(n11, n1); { std::uint8_t *q = qword(mem, i2 + 0u); std::memcpy(q, &r.vf[9], 16); } vstore(r.vf[23], uv); fl.stick<15u, kSticky>(uv); n23 = uv; }
L_3650: { ++fl.t; const v4u uv = vaddd(n24, n3); vstore(r.vf[7], uv); fl.stick<15u, kSticky>(uv); n7 = uv; }
L_3658: { ++fl.t; const v4u uv = vmuld(n6, vsplat(n10[0])); vstore(r.vf[11], uv); fl.stick<15u, kSticky>(uv); n11 = uv; }
L_3660: { ++fl.t; const v4u uv = vaddd(n12, n2); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_3668: { ++fl.t; vflushd(r.vf[23], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vmuld(n8, vsplat(n10[0])); { std::uint8_t *q = qword(mem, i2 + 2u); std::memcpy(q, &r.vf[23], 16); } vstore(r.vf[6], uv); fl.stick<15u, kSticky>(uv); n6 = uv; }
L_3670: { ++fl.t; vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vmuld(n5, n9); { std::uint8_t *q = qword(mem, i2 + 3u); std::memcpy(q, &r.vf[7], 16); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.stick<12u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_3678: { ++fl.t; const v4u uv = vaddd(n11, n3); set_vi(i1, 0u + 172u); vstore(r.vf[3], uv); fl.stick<15u, kSticky>(uv); n3 = uv; }
L_3680: { ++fl.t; vflushd(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vmuld(n4, n2); { std::uint8_t *q = qword(mem, i1 + 0u); std::memcpy(q, &r.vf[2], 16); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.stick<12u, kSticky>(uv); n4 = vsel(n4, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_3688: { ++fl.t; const v4u uv = vaddd(n6, n1); vstore(r.vf[2], uv); fl.push_last<15u, kSticky>(uv); n2 = uv; }
L_3690: { ++fl.t; vflush(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i2 + 1u); std::memcpy(q, &r.vf[5], 16); } }
L_3698: { ++fl.t; vflush(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i1 + 3u); std::memcpy(q, &r.vf[3], 16); } }
L_36A0: { ++fl.t; vflush(r.vf[4], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i1 + 1u); std::memcpy(q, &r.vf[4], 16); } }
L_36A8: { ++fl.t; vflush(r.vf[2], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); { std::uint8_t *q = qword(mem, i1 + 2u); std::memcpy(q, &r.vf[2], 16); } }
L_36B0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_36B8: { ++fl.t; }
    if (pendj) { pendj = false; vflush(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[24], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
    vflush(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[11], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[12], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[24], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vhop(hop, ((14016u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vhop(hop, jpc);
    return;
}
static __attribute__((noinline, cold)) void vu1_C21594883F8680BE_c(Vu0Regs &r, std::uint8_t *mem, VuDaz &daz, std::uint32_t &hop) { vu1_C21594883F8680BE_b<true>(r, mem, daz, hop); }
void vu1_C21594883F8680BE(Vu0Regs &r, std::uint8_t *mem) {
    std::uint32_t hop = kNoHop;
    {
        VuDaz daz;
        if ((r.status & 0xC0u) == 0xC0u) vu1_C21594883F8680BE_b<false>(r, mem, daz, hop);
        else vu1_C21594883F8680BE_c(r, mem, daz, hop);
    }
    if (hop != kNoHop) vu::interpret(1, hop);
}

}
