#include "ps2/vu_ops.hpp"
#include <cstdio>

namespace gen {

using namespace ps2;
using namespace ps2::vuops;

template <bool kSticky>
static void vu1_B8EF00E96E485140_s(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 4424u) & 16383u;
    (void)sh;
    v4u n4 = vshadow_eager(r.vf[4]);
    v4u n5 = vshadow_eager(r.vf[5]);
    std::uint16_t i5 = r.vi[5];
    std::uint16_t i15 = r.vi[15];
    goto L_1148;
L_1148: { ++fl.t; set_vi(i15, 0u + i5); }
L_1150: { ++fl.t; const v4u uv = vmuln(n4, n5); { std::uint8_t *q = qword(mem, 0u + 140u); std::memcpy(q, &r.vf[4], 16); } vstore(r.vf[5], uv); fl.push_last<15u, kSticky>(uv); n5 = uv; }
L_1158: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1160: { fl.t += 3u; { std::uint8_t *q = qword(mem, 0u + 143u); std::memcpy(q, &r.vf[5], 16); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[15] = i15; vu::interpret(1, ((4456u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

static __attribute__((noinline, cold)) void vu1_B8EF00E96E485140_c(Vu0Regs &r, std::uint8_t *mem) { vu1_B8EF00E96E485140_s<true>(r, mem); }

void vu1_B8EF00E96E485140(Vu0Regs &r, std::uint8_t *mem) {
    if ((r.status & 0xC0u) == 0xC0u) vu1_B8EF00E96E485140_s<false>(r, mem);
    else vu1_B8EF00E96E485140_c(r, mem);
}

template <bool kSticky>
static void vu1_1F40FC19AAF60CA0_s(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 4336u) & 16383u;
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
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i5 = r.vi[5];
    std::uint16_t i15 = r.vi[15];
    goto L_10F0;
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
L_10F0: { ++fl.t; set_vi(i15, 0u + i5); }
L_10F8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 142u); std::memcpy(q, &r.vf[4], 16); } }
L_1100: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 145u); std::memcpy(q + 0, &r.vf[5].w[0], 4); } }
L_1108: { ++fl.t; pend = true; }
L_1110: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 125u) + 12, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0FA8; }
    fl.finish(r); r.vi[4] = i4; r.vi[15] = i15; vu::interpret(1, ((4376u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[4] = i4; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

static __attribute__((noinline, cold)) void vu1_1F40FC19AAF60CA0_c(Vu0Regs &r, std::uint8_t *mem) { vu1_1F40FC19AAF60CA0_s<true>(r, mem); }

void vu1_1F40FC19AAF60CA0(Vu0Regs &r, std::uint8_t *mem) {
    if ((r.status & 0xC0u) == 0xC0u) vu1_1F40FC19AAF60CA0_s<false>(r, mem);
    else vu1_1F40FC19AAF60CA0_c(r, mem);
}

template <bool kSticky>
static void vu1_2AAD265E7B02EAB2_s(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 3952u) & 16383u;
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
    std::uint16_t i15 = r.vi[15];
    goto L_0F70;
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
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[4] = i4; vu::interpret(1, ((4096u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[4] = i4; vu::interpret(1, jpc);
    return;
}

static __attribute__((noinline, cold)) void vu1_2AAD265E7B02EAB2_c(Vu0Regs &r, std::uint8_t *mem) { vu1_2AAD265E7B02EAB2_s<true>(r, mem); }

void vu1_2AAD265E7B02EAB2(Vu0Regs &r, std::uint8_t *mem) {
    if ((r.status & 0xC0u) == 0xC0u) vu1_2AAD265E7B02EAB2_s<false>(r, mem);
    else vu1_2AAD265E7B02EAB2_c(r, mem);
}

void vu1_B33D2E952616962A(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 4912u) & 16383u;
    (void)sh;
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i6 = r.vi[6];
    std::uint16_t i7 = r.vi[7];
    std::uint16_t i8 = r.vi[8];
    std::uint16_t i13 = r.vi[13];
    std::uint16_t i15 = r.vi[15];
    goto L_1330;
L_01F8: { ++fl.t; set_vi(i1, 0u + 15u); }
L_0200: { ++fl.t; set_vi(i1, i8 & i1); }
L_0208: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1) + 4, 2); set_vi(i2, v); } }
L_0210: { fl.t += 4u; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; pendj = true; }
L_0218: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((544u + sh) & 16383u));
    return;
L_1330: { ++fl.t; set_vi(i6, r.vf[16].w[0]); }
L_1338: { ++fl.t; set_vi(i6, i6 - 1u); }
L_1340: { ++fl.t; set_vi(i1, r.vf[17].w[0]); }
L_1348: { ++fl.t; { const v4u m = vload(r.vf[17]); vstore(r.vf[17], vsel(vload(r.vf[17]), v4u{m[1], m[2], m[3], m[0]}, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); } }
L_1350: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[2], q, 16); set_vi(i13, i13 + 1u); } }
L_1358: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[3], q, 16); set_vi(i13, i13 + 1u); } }
L_1360: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[4], q, 16); set_vi(i13, i13 + 1u); } }
L_1368: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[5], q, 16); set_vi(i13, i13 + 1u); } }
L_1370: { ++fl.t; { std::uint8_t *q = qword(mem, i1 + 960u); std::memcpy(q, &r.vf[2], 16); } }
L_1378: { ++fl.t; { std::uint8_t *q = qword(mem, i1 + 961u); std::memcpy(q, &r.vf[3], 16); } }
L_1380: { ++fl.t; { std::uint8_t *q = qword(mem, i1 + 962u); std::memcpy(q, &r.vf[4], 16); } }
L_1388: { ++fl.t; { std::uint8_t *q = qword(mem, i1 + 963u); std::memcpy(q, &r.vf[5], 16); } }
L_1390: { ++fl.t; pend = 0u != i6; }
L_1398: { ++fl.t; set_vi(i6, i6 - 1u); }
    if (pend) { pend = false; goto L_1340; }
L_13A0: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[16], q, 16); set_vi(i13, i13 + 1u); } }
L_13A8: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[17], q, 16); set_vi(i13, i13 + 1u); } }
L_13B0: { ++fl.t; set_vi(i7, i8 + 0u); }
L_13B8: { ++fl.t; pend = true; }
L_13C0: { ++fl.t; set_vi(i15, 0u + 614u); }
    if (pend) { pend = false; goto L_1788; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((5064u + sh) & 16383u));
    return;
L_16D0: { ++fl.t; ending = true; }
L_16D8: { ++fl.t; }
    if (ending) { fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[13] = i13; r.vi[15] = i15; r.tpc = ((5856u + sh) & 16383u); return; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((5856u + sh) & 16383u));
    return;
L_1788: { ++fl.t; pend = static_cast<std::int16_t>(i8) < 0; }
L_1790: { ++fl.t; set_vi(i8, r.vf[16].w[3]); }
    if (pend) { pend = false; goto L_17A8; }
L_1798: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_17A0: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_17A8: { ++fl.t; set_vi(i6, 0u + 4096u); }
L_17B0: { ++fl.t; set_vi(i1, i7 & i6); }
L_17B8: { ++fl.t; set_vi(i6, 0u + 2048u); }
L_17C0: { ++fl.t; set_vi(i6, i7 & i6); }
L_17C8: { ++fl.t; pend = 0u == i1; }
L_17D0: { ++fl.t; set_vi(i1, 0u + i15); }
    if (pend) { pend = false; goto L_17E8; }
L_17D8: { ++fl.t; set_vi(i15, (((6104u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_17E0: { ++fl.t; }
    if (pend) { pend = false; goto L_16D0; }
L_17E8: { ++fl.t; pend = 0u != i6; }
L_17F0: { ++fl.t; set_vi(i15, 0u + i1); }
    if (pend) { pend = false; goto L_01F8; }
L_17F8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1800: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((6152u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

template <bool kSticky>
PS2_VU_BODY void vu1_3ACC4E3E66750699_b(Vu0Regs &r, std::uint8_t *mem, VuDaz &daz, std::uint32_t &hop) {
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
    goto L_0220;
L_01F8: { ++fl.t; set_vi(i1, 0u + 15u); }
L_0200: { ++fl.t; set_vi(i1, i8 & i1); }
L_0208: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1) + 4, 2); set_vi(i2, v); } }
L_0210: { fl.t += 4u; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; pendj = true; }
L_0218: { ++fl.t; }
    if (pendj) { pendj = false; vflushd(r.vf[1], v4u{0u, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[4], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
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
L_0360: { ++fl.t; vflushd(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n1[0])); vstore(r.vf[13], vsel(vload(r.vf[13]), vload(r.vf[25]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.stick<2u, kSticky>(uv); n13 = vshadow(r.vf[13]); n25 = vsel(n25, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_0368: { ++fl.t; const v4u uv = vmin(vload(r.vf[2]), vsplat(r.vf[2].w[0])); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n25 = vshadow(r.vf[25]); }
L_0370: { ++fl.t; const v4u uv = vmuld(n9, n6); { const std::uint8_t *q = qword(mem, 0u + 137u); vstore(r.vf[24], vsel(vload(r.vf[24]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); n24 = vshadow(r.vf[24]); nacc = uv; }
L_0378: { ++fl.t; vflushd(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); const v4u uv = vmaddd(nacc, n7, n6); { std::uint8_t *q = qword(mem, 0u + 113u); std::memcpy(q + 0, &r.vf[26].w[0], 4); std::memcpy(q + 4, &r.vf[26].w[1], 4); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
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
L_03E0: { ++fl.t; vflushd(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vftoi(vload(r.vf[2]), 0); vstore(r.vf[24], vsel(vload(r.vf[24]), vload(r.vf[27]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); vstore(r.vf[2], uv); n24 = vshadow(r.vf[24]); n2 = vshadow(r.vf[2]); }
L_03E8: { ++fl.t; vflushd(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vmaddd(nacc, n29, vsplat(n17[1])); { std::uint8_t *q = qword(mem, i1 + 0u); std::memcpy(q + 0, &r.vf[25].w[0], 4); std::memcpy(q + 4, &r.vf[25].w[1], 4); std::memcpy(q + 8, &r.vf[25].w[2], 4); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
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
    if (pend) { pend = false; vflushd(r.vf[25], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); goto L_0270; }
L_0488: { ++fl.t; set_vi(i5, 0u + 148u); }
L_0490: { ++fl.t; pend = true; }
L_0498: { ++fl.t; set_vi(i4, 0u + 78u); }
    if (pend) { pend = false; goto L_1808; }
    vflushd(r.vf[1], v4u{0u, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[4], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((1184u + sh) & 16383u));
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
    if (pendj) { pendj = false; vflush(r.vf[1], v4u{0u, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[4], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_16D0: { ++fl.t; ending = true; }
L_16D8: { ++fl.t; }
    if (ending) { vflush(r.vf[1], v4u{0u, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[4], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; r.tpc = ((5856u + sh) & 16383u); return; }
    vflush(r.vf[1], v4u{0u, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[4], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((5856u + sh) & 16383u));
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
    if (pendj) { pendj = false; vflush(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[4], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
    vflush(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[4], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((5976u + sh) & 16383u));
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
    if (pendj) { pendj = false; vflushd(r.vf[1], v4u{0u, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[4], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_18B8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i6) * 8u) & 16383u; pendj = true; }
L_18C0: { ++fl.t; }
    if (pendj) { pendj = false; vflushd(r.vf[1], v4u{0u, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[4], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_18C8: { ++fl.t; pend = static_cast<std::int16_t>(i6) < 0; }
L_18D0: { ++fl.t; }
    if (pend) { pend = false; goto L_18E8; }
L_18D8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i4) * 8u) & 16383u; pendj = true; }
L_18E0: { ++fl.t; }
    if (pendj) { pendj = false; vflushd(r.vf[1], v4u{0u, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[4], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_18E8: { ++fl.t; pend = true; }
L_18F0: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
    if (pend) { pend = false; goto L_01F8; }
    vflushd(r.vf[1], v4u{0u, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[4], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((6392u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, jpc);
    return;
}
static __attribute__((noinline, cold)) void vu1_3ACC4E3E66750699_c(Vu0Regs &r, std::uint8_t *mem, VuDaz &daz, std::uint32_t &hop) { vu1_3ACC4E3E66750699_b<true>(r, mem, daz, hop); }
void vu1_3ACC4E3E66750699(Vu0Regs &r, std::uint8_t *mem) {
    std::uint32_t hop = kNoHop;
    {
        VuDaz daz;
        if ((r.status & 0xC0u) == 0xC0u) vu1_3ACC4E3E66750699_b<false>(r, mem, daz, hop);
        else vu1_3ACC4E3E66750699_c(r, mem, daz, hop);
    }
    if (hop != kNoHop) vu::interpret(1, hop);
}

void vu1_E382730ABF0FD724(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 2624u) & 16383u;
    (void)sh;
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i15 = r.vi[15];
    goto L_0A40;
L_0A40: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 960u); std::memcpy(&r.vf[28], q, 16); } }
L_0A48: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 961u); std::memcpy(&r.vf[29], q, 16); } }
L_0A50: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 962u); std::memcpy(&r.vf[30], q, 16); } }
L_0A58: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0A60: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 963u); std::memcpy(&r.vf[31], q, 16); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); vu::interpret(1, ((2664u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); vu::interpret(1, jpc);
    return;
}

void vu1_A0B27513A36B245A(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 6208u) & 16383u;
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
    goto L_1840;
L_01F8: { ++fl.t; set_vi(i1, 0u + 15u); }
L_0200: { ++fl.t; set_vi(i1, i8 & i1); }
L_0208: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1) + 4, 2); set_vi(i2, v); } }
L_0210: { fl.t += 4u; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; pendj = true; }
L_0218: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[6] = i6; r.vi[7] = i7; r.vi[15] = i15; vu::interpret(1, ((544u + sh) & 16383u));
    return;
L_16D0: { ++fl.t; ending = true; }
L_16D8: { ++fl.t; }
    if (ending) { fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[6] = i6; r.vi[7] = i7; r.vi[15] = i15; r.tpc = ((5856u + sh) & 16383u); return; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[6] = i6; r.vi[7] = i7; r.vi[15] = i15; vu::interpret(1, ((5856u + sh) & 16383u));
    return;
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
    if (pendj) { pendj = false; goto dispatch; }
L_18B8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i6) * 8u) & 16383u; pendj = true; }
L_18C0: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_18C8: { ++fl.t; pend = static_cast<std::int16_t>(i6) < 0; }
L_18D0: { ++fl.t; }
    if (pend) { pend = false; goto L_18E8; }
L_18D8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i4) * 8u) & 16383u; pendj = true; }
L_18E0: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_18E8: { ++fl.t; pend = true; }
L_18F0: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
    if (pend) { pend = false; goto L_01F8; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[6] = i6; r.vi[7] = i7; r.vi[15] = i15; vu::interpret(1, ((6392u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[6] = i6; r.vi[7] = i7; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

template <bool kSticky>
PS2_VU_BODY void vu1_A6231036475AD07A_b(Vu0Regs &r, std::uint8_t *mem, VuDaz &daz, std::uint32_t &hop) {
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
    goto L_0270;
L_01F8: { ++fl.t; set_vi(i1, 0u + 15u); }
L_0200: { ++fl.t; set_vi(i1, i8 & i1); }
L_0208: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1) + 4, 2); set_vi(i2, v); } }
L_0210: { fl.t += 4u; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; pendj = true; }
L_0218: { ++fl.t; }
    if (pendj) { pendj = false; vflush(r.vf[1], v4u{0u, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[4], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
    vflush(r.vf[1], v4u{0u, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[4], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((544u + sh) & 16383u));
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
L_0360: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n1[0])); vstore(r.vf[13], vsel(vload(r.vf[13]), vload(r.vf[25]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.stick<2u, kSticky>(uv); n13 = vshadow(r.vf[13]); n25 = vsel(n25, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_0368: { ++fl.t; const v4u uv = vmin(vload(r.vf[2]), vsplat(r.vf[2].w[0])); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n25 = vshadow(r.vf[25]); }
L_0370: { ++fl.t; const v4u uv = vmuld(n9, n6); { const std::uint8_t *q = qword(mem, 0u + 137u); vstore(r.vf[24], vsel(vload(r.vf[24]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); n24 = vshadow(r.vf[24]); nacc = uv; }
L_0378: { ++fl.t; vflushd(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); const v4u uv = vmaddd(nacc, n7, n6); { std::uint8_t *q = qword(mem, 0u + 113u); std::memcpy(q + 0, &r.vf[26].w[0], 4); std::memcpy(q + 4, &r.vf[26].w[1], 4); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
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
L_03E0: { ++fl.t; vflushd(r.vf[27], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); const v4u uv = vftoi(vload(r.vf[2]), 0); vstore(r.vf[24], vsel(vload(r.vf[24]), vload(r.vf[27]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); vstore(r.vf[2], uv); n24 = vshadow(r.vf[24]); n2 = vshadow(r.vf[2]); }
L_03E8: { ++fl.t; vflushd(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vmaddd(nacc, n29, vsplat(n17[1])); { std::uint8_t *q = qword(mem, i1 + 0u); std::memcpy(q + 0, &r.vf[25].w[0], 4); std::memcpy(q + 4, &r.vf[25].w[1], 4); std::memcpy(q + 8, &r.vf[25].w[2], 4); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
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
    if (pend) { pend = false; vflushd(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); goto L_0270; }
L_0488: { ++fl.t; set_vi(i5, 0u + 148u); }
L_0490: { ++fl.t; pend = true; }
L_0498: { ++fl.t; set_vi(i4, 0u + 78u); }
    if (pend) { pend = false; goto L_1808; }
    vflush(r.vf[1], v4u{0u, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[4], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((1184u + sh) & 16383u));
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
    if (pendj) { pendj = false; vflush(r.vf[1], v4u{0u, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[4], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_16D0: { ++fl.t; ending = true; }
L_16D8: { ++fl.t; }
    if (ending) { vflush(r.vf[1], v4u{0u, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[4], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; r.tpc = ((5856u + sh) & 16383u); return; }
    vflush(r.vf[1], v4u{0u, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[4], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((5856u + sh) & 16383u));
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
    if (pendj) { pendj = false; vflush(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[4], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
    vflush(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[4], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((5976u + sh) & 16383u));
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
    if (pendj) { pendj = false; vflush(r.vf[1], v4u{0u, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[4], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_18B8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i6) * 8u) & 16383u; pendj = true; }
L_18C0: { ++fl.t; }
    if (pendj) { pendj = false; vflush(r.vf[1], v4u{0u, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[4], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_18C8: { ++fl.t; pend = static_cast<std::int16_t>(i6) < 0; }
L_18D0: { ++fl.t; }
    if (pend) { pend = false; goto L_18E8; }
L_18D8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i4) * 8u) & 16383u; pendj = true; }
L_18E0: { ++fl.t; }
    if (pendj) { pendj = false; vflush(r.vf[1], v4u{0u, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[4], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_18E8: { ++fl.t; pend = true; }
L_18F0: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
    if (pend) { pend = false; goto L_01F8; }
    vflush(r.vf[1], v4u{0u, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[4], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((6392u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, jpc);
    return;
}
static __attribute__((noinline, cold)) void vu1_A6231036475AD07A_c(Vu0Regs &r, std::uint8_t *mem, VuDaz &daz, std::uint32_t &hop) { vu1_A6231036475AD07A_b<true>(r, mem, daz, hop); }
void vu1_A6231036475AD07A(Vu0Regs &r, std::uint8_t *mem) {
    std::uint32_t hop = kNoHop;
    {
        VuDaz daz;
        if ((r.status & 0xC0u) == 0xC0u) vu1_A6231036475AD07A_b<false>(r, mem, daz, hop);
        else vu1_A6231036475AD07A_c(r, mem, daz, hop);
    }
    if (hop != kNoHop) vu::interpret(1, hop);
}

template <bool kSticky>
static void vu1_74803DBE20DC28E8_s(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 1184u) & 16383u;
    (void)sh;
    v4u n16 = vshadow_eager(r.vf[16]);
    v4u n17 = vshadow_eager(r.vf[17]);
    v4u n24 = vshadow_eager(r.vf[24]);
    v4u n27 = vshadow_eager(r.vf[27]);
    v4u n28 = vshadow_eager(r.vf[28]);
    v4u n29 = vshadow_eager(r.vf[29]);
    v4u n30 = vshadow_eager(r.vf[30]);
    v4u n31 = vshadow_eager(r.vf[31]);
    v4u nacc = vshadow_eager(r.acc);
    std::uint16_t i15 = r.vi[15];
    goto L_04A0;
L_04A0: { ++fl.t; const v4u uv = vmuln(n28, vsplat(n17[0])); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_04A8: { ++fl.t; const v4u uv = vmaddn(nacc, n29, vsplat(n17[1])); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_04B0: { ++fl.t; const v4u uv = vmaddn(nacc, n30, vsplat(n17[2])); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_04B8: { ++fl.t; const v4u uv = vaddn(nacc, (v4u)((v4f)n31 * (v4f)vsplat(0x3F800000u))); vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n27 = vsel(n27, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_04C0: { ++fl.t; const v4u uv = vmuln(n28, vsplat(n16[0])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_04C8: { ++fl.t; const v4u uv = vmaddn(nacc, n29, vsplat(n16[1])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_04D0: { ++fl.t; const v4u uv = vmaddn(nacc, n30, vsplat(n16[2])); jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); }
L_04D8: { ++fl.t; const v4u uv = vsubn(n27, n24); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); vu::interpret(1, ((1248u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); vu::interpret(1, jpc);
    return;
}

static __attribute__((noinline, cold)) void vu1_74803DBE20DC28E8_c(Vu0Regs &r, std::uint8_t *mem) { vu1_74803DBE20DC28E8_s<true>(r, mem); }

void vu1_74803DBE20DC28E8(Vu0Regs &r, std::uint8_t *mem) {
    if ((r.status & 0xC0u) == 0xC0u) vu1_74803DBE20DC28E8_s<false>(r, mem);
    else vu1_74803DBE20DC28E8_c(r, mem);
}

void vu1_E37343622CB68DED(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 6280u) & 16383u;
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
    goto L_1888;
L_01F8: { ++fl.t; set_vi(i1, 0u + 15u); }
L_0200: { ++fl.t; set_vi(i1, i8 & i1); }
L_0208: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1) + 4, 2); set_vi(i2, v); } }
L_0210: { fl.t += 4u; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; pendj = true; }
L_0218: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[6] = i6; r.vi[7] = i7; r.vi[15] = i15; vu::interpret(1, ((544u + sh) & 16383u));
    return;
L_1888: { ++fl.t; pend = 0u == i3; }
L_1890: { ++fl.t; { const std::uint8_t *q = qword(mem, i13 + 0u); std::memcpy(&r.vf[14], q, 16); } }
    if (pend) { pend = false; goto L_18C8; }
L_1898: { ++fl.t; pend = static_cast<std::int16_t>(i6) < 0; }
L_18A0: { ++fl.t; set_vi(i7, r.vf[17].w[3]); }
    if (pend) { pend = false; goto L_18E8; }
L_18A8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i5) * 8u) & 16383u; set_vi(i15, (((6312u + sh) & 16383u) + 16u) / 8u); pendj = true; }
L_18B0: { ++fl.t; set_vi(i6, i4 + 0u); }
    if (pendj) { pendj = false; goto dispatch; }
L_18B8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i6) * 8u) & 16383u; pendj = true; }
L_18C0: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_18C8: { ++fl.t; pend = static_cast<std::int16_t>(i6) < 0; }
L_18D0: { ++fl.t; }
    if (pend) { pend = false; goto L_18E8; }
L_18D8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i4) * 8u) & 16383u; pendj = true; }
L_18E0: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_18E8: { ++fl.t; pend = true; }
L_18F0: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
    if (pend) { pend = false; goto L_01F8; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[6] = i6; r.vi[7] = i7; r.vi[15] = i15; vu::interpret(1, ((6392u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[6] = i6; r.vi[7] = i7; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

template <bool kSticky>
PS2_VU_BODY void vu1_28DBA9574017D303_b(Vu0Regs &r, std::uint8_t *mem, VuDaz &daz, std::uint32_t &hop) {
    (void)daz;
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 1120u) & 16383u;
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
    goto L_0460;
L_01F8: { ++fl.t; set_vi(i1, 0u + 15u); }
L_0200: { ++fl.t; set_vi(i1, i8 & i1); }
L_0208: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1) + 4, 2); set_vi(i2, v); } }
L_0210: { fl.t += 4u; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; pendj = true; }
L_0218: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((544u + sh) & 16383u));
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
L_0360: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n1[0])); vstore(r.vf[13], vsel(vload(r.vf[13]), vload(r.vf[25]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.stick<2u, kSticky>(uv); n13 = vshadow(r.vf[13]); n25 = vsel(n25, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_0368: { ++fl.t; const v4u uv = vmin(vload(r.vf[2]), vsplat(r.vf[2].w[0])); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n25 = vshadow(r.vf[25]); }
L_0370: { ++fl.t; const v4u uv = vmuld(n9, n6); { const std::uint8_t *q = qword(mem, 0u + 137u); vstore(r.vf[24], vsel(vload(r.vf[24]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); n24 = vshadow(r.vf[24]); nacc = uv; }
L_0378: { ++fl.t; vflushd(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); const v4u uv = vmaddd(nacc, n7, n6); { std::uint8_t *q = qword(mem, 0u + 113u); std::memcpy(q + 0, &r.vf[26].w[0], 4); std::memcpy(q + 4, &r.vf[26].w[1], 4); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
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
L_03E0: { ++fl.t; vflushd(r.vf[27], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); const v4u uv = vftoi(vload(r.vf[2]), 0); vstore(r.vf[24], vsel(vload(r.vf[24]), vload(r.vf[27]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); vstore(r.vf[2], uv); n24 = vshadow(r.vf[24]); n2 = vshadow(r.vf[2]); }
L_03E8: { ++fl.t; vflushd(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vmaddd(nacc, n29, vsplat(n17[1])); { std::uint8_t *q = qword(mem, i1 + 0u); std::memcpy(q + 0, &r.vf[25].w[0], 4); std::memcpy(q + 4, &r.vf[25].w[1], 4); std::memcpy(q + 8, &r.vf[25].w[2], 4); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
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
    if (pend) { pend = false; vflushd(r.vf[1], v4u{0u, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[4], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto L_0478; }
L_0450: { ++fl.t; set_vi(i15, (((1104u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0458: { ++fl.t; }
    if (pend) { pend = false; goto L_1668; }
    vflushd(r.vf[1], v4u{0u, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[4], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); 
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
    fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((1184u + sh) & 16383u));
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
    if (pendj) { pendj = false; vflush(r.vf[1], v4u{0u, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[4], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
    vflush(r.vf[1], v4u{0u, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[4], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); 
L_16D0: { ++fl.t; ending = true; }
L_16D8: { ++fl.t; }
    if (ending) { fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; r.tpc = ((5856u + sh) & 16383u); return; }
    fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((5856u + sh) & 16383u));
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
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((5976u + sh) & 16383u));
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
    if (pendj) { pendj = false; goto dispatch; }
L_18B8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i6) * 8u) & 16383u; pendj = true; }
L_18C0: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_18C8: { ++fl.t; pend = static_cast<std::int16_t>(i6) < 0; }
L_18D0: { ++fl.t; }
    if (pend) { pend = false; goto L_18E8; }
L_18D8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i4) * 8u) & 16383u; pendj = true; }
L_18E0: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_18E8: { ++fl.t; pend = true; }
L_18F0: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
    if (pend) { pend = false; goto L_01F8; }
    fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((6392u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, jpc);
    return;
}
static __attribute__((noinline, cold)) void vu1_28DBA9574017D303_c(Vu0Regs &r, std::uint8_t *mem, VuDaz &daz, std::uint32_t &hop) { vu1_28DBA9574017D303_b<true>(r, mem, daz, hop); }
void vu1_28DBA9574017D303(Vu0Regs &r, std::uint8_t *mem) {
    std::uint32_t hop = kNoHop;
    {
        VuDaz daz;
        if ((r.status & 0xC0u) == 0xC0u) vu1_28DBA9574017D303_b<false>(r, mem, daz, hop);
        else vu1_28DBA9574017D303_c(r, mem, daz, hop);
    }
    if (hop != kNoHop) vu::interpret(1, hop);
}

template <bool kSticky>
static void vu1_63C13CF0B019F058_s(Vu0Regs &r, std::uint8_t *mem) {
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

static __attribute__((noinline, cold)) void vu1_63C13CF0B019F058_c(Vu0Regs &r, std::uint8_t *mem) { vu1_63C13CF0B019F058_s<true>(r, mem); }

void vu1_63C13CF0B019F058(Vu0Regs &r, std::uint8_t *mem) {
    if ((r.status & 0xC0u) == 0xC0u) vu1_63C13CF0B019F058_s<false>(r, mem);
    else vu1_63C13CF0B019F058_c(r, mem);
}

template <bool kSticky>
static void vu1_6A1D68323ED095FE_s(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 8u) & 16383u;
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
    goto L_0008;
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

static __attribute__((noinline, cold)) void vu1_6A1D68323ED095FE_c(Vu0Regs &r, std::uint8_t *mem) { vu1_6A1D68323ED095FE_s<true>(r, mem); }

void vu1_6A1D68323ED095FE(Vu0Regs &r, std::uint8_t *mem) {
    if ((r.status & 0xC0u) == 0xC0u) vu1_6A1D68323ED095FE_s<false>(r, mem);
    else vu1_6A1D68323ED095FE_c(r, mem);
}

template <bool kSticky>
static void vu1_B4886382E76DBC16_s(Vu0Regs &r, std::uint8_t *mem) {
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
    goto L_0020;
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

static __attribute__((noinline, cold)) void vu1_B4886382E76DBC16_c(Vu0Regs &r, std::uint8_t *mem) { vu1_B4886382E76DBC16_s<true>(r, mem); }

void vu1_B4886382E76DBC16(Vu0Regs &r, std::uint8_t *mem) {
    if ((r.status & 0xC0u) == 0xC0u) vu1_B4886382E76DBC16_s<false>(r, mem);
    else vu1_B4886382E76DBC16_c(r, mem);
}

template <bool kSticky>
static void vu1_EF44E6655C0CB180_s(Vu0Regs &r, std::uint8_t *mem) {
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
    v4u n4 = vshadow_eager(r.vf[4]);
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i5 = r.vi[5];
    std::uint16_t i9 = r.vi[9];
    std::uint16_t i10 = r.vi[10];
    std::uint16_t i12 = r.vi[12];
    std::uint16_t i15 = r.vi[15];
    goto L_1000;
L_1000: { ++fl.t; set_vi(i1, 0u + 64u); }
L_1008: { ++fl.t; set_vi(i1, i5 & i1); }
L_1010: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n4[1])); { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 47u) + 4, 2); set_vi(i2, v); } vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.push_last<2u, kSticky>(uv); }
L_1018: { ++fl.t; pend = 0u == i1; }
L_1020: { ++fl.t; }
    if (pend) { pend = false; goto L_1038; }
L_1028: { fl.t += 2u; set_vi(i4, 0u + i2); }
L_1030: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 47u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
L_1038: { ++fl.t; pend = 0u == i4; }
L_1040: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 136u); const std::uint32_t v = i4; std::memcpy(q + 12, &v, 4); } }
    if (pend) { pend = false; goto L_1058; }
L_1048: { ++fl.t; set_vi(i4, 0u + 1u); }
L_1050: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 136u); std::memcpy(q + 8, &r.vf[1].w[2], 4); } }
L_1058: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 135u); const std::uint32_t v = i4; std::memcpy(q + 8, &v, 4); } }
L_1060: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 23u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } }
L_1068: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 128u); const std::uint32_t v = i4; std::memcpy(q + 12, &v, 4); } }
L_1070: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 128u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n4 = vshadow_eager(r.vf[4]); }
L_1078: { ++fl.t; pend = true; }
L_1080: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 133u); std::memcpy(q + 12, &r.vf[1].w[3], 4); } }
    if (pend) { pend = false; goto L_1638; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[4] = i4; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; vu::interpret(1, ((4232u + sh) & 16383u));
    return;
L_1638: { ++fl.t; set_vi(i10, 0u + 1u); }
L_1640: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_1648: { ++fl.t; set_vi(i9, 0u + i12); }
L_1650: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_1658: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1660: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q, &r.vf[4], 16); set_vi(i12, i12 + 1u); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[4] = i4; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; vu::interpret(1, ((5736u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[4] = i4; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; vu::interpret(1, jpc);
    return;
}

static __attribute__((noinline, cold)) void vu1_EF44E6655C0CB180_c(Vu0Regs &r, std::uint8_t *mem) { vu1_EF44E6655C0CB180_s<true>(r, mem); }

void vu1_EF44E6655C0CB180(Vu0Regs &r, std::uint8_t *mem) {
    if ((r.status & 0xC0u) == 0xC0u) vu1_EF44E6655C0CB180_s<false>(r, mem);
    else vu1_EF44E6655C0CB180_c(r, mem);
}

void vu1_6B06B1A8148A1EE3(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 6328u) & 16383u;
    (void)sh;
    std::uint16_t i6 = r.vi[6];
    goto L_18B8;
L_18B8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i6) * 8u) & 16383u; pendj = true; }
L_18C0: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); vu::interpret(1, ((6344u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); vu::interpret(1, jpc);
    return;
}

void vu1_1F9ABEA4816D8000(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 5064u) & 16383u;
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
    goto L_13C8;
L_01F8: { ++fl.t; set_vi(i1, 0u + 15u); }
L_0200: { ++fl.t; set_vi(i1, i8 & i1); }
L_0208: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1) + 4, 2); set_vi(i2, v); } }
L_0210: { fl.t += 4u; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; pendj = true; }
L_0218: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((544u + sh) & 16383u));
    return;
L_13C8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 24u); vstore(r.vf[15], vsel(vload(r.vf[15]), vload_ptr(q), v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); } }
L_13D0: { ++fl.t; set_vi(i6, r.vf[16].w[0]); }
L_13D8: { ++fl.t; set_vi(i10, 0u + 0u); }
L_13E0: { ++fl.t; set_vi(i9, 0u + i12); }
L_13E8: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_13F0: { ++fl.t; vstore(r.vf[16], vsel(vload(r.vf[16]), vload(r.vf[17]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); }
L_13F8: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[17], q, 16); set_vi(i13, i13 + 1u); } }
L_1400: { ++fl.t; pend = static_cast<std::int16_t>(i6) <= 0; }
L_1408: { ++fl.t; set_vi(i7, i8 + 0u); }
    if (pend) { pend = false; goto L_1448; }
L_1410: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q, &r.vf[16], 16); set_vi(i12, i12 + 1u); } }
L_1418: { ++fl.t; set_vi(i1, i11 - i12); }
L_1420: { ++fl.t; set_vi(i10, i10 + 1u); }
L_1428: { ++fl.t; pend = static_cast<std::int16_t>(i1) > 0; }
L_1430: { ++fl.t; set_vi(i6, i6 - 1u); }
    if (pend) { pend = false; goto L_13F0; }
L_1438: { ++fl.t; pend = true; }
L_1440: { ++fl.t; set_vi(i15, 0u + 635u); }
    if (pend) { pend = false; goto L_1668; }
L_1448: { ++fl.t; set_vi(i6, r.vf[16].w[0]); }
L_1450: { ++fl.t; pend = static_cast<std::int16_t>(i8) >= 0; }
L_1458: { ++fl.t; set_vi(i8, r.vf[16].w[3]); }
    if (pend) { pend = false; goto L_13F0; }
L_1460: { ++fl.t; set_vi(i4, 0u + 4096u); }
L_1468: { ++fl.t; set_vi(i1, i7 & i4); }
L_1470: { ++fl.t; set_vi(i4, 0u + 2048u); }
L_1478: { ++fl.t; pend = 0u == i1; }
L_1480: { ++fl.t; }
    if (pend) { pend = false; goto L_14A0; }
L_1488: { ++fl.t; set_vi(i15, (((5256u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1490: { ++fl.t; }
    if (pend) { pend = false; goto L_16D0; }
L_1498: { ++fl.t; set_vi(i6, r.vf[16].w[0]); }
L_14A0: { ++fl.t; set_vi(i1, i7 & i4); }
L_14A8: { ++fl.t; }
L_14B0: { ++fl.t; pend = 0u == i1; }
L_14B8: { ++fl.t; }
    if (pend) { pend = false; goto L_13F0; }
L_14C0: { ++fl.t; pend = true; }
L_14C8: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
    if (pend) { pend = false; goto L_01F8; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((5328u + sh) & 16383u));
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
L_16C8: { ++fl.t; vu::kick(1, i3); }
    if (pendj) { pendj = false; goto dispatch; }
L_16D0: { ++fl.t; ending = true; }
L_16D8: { ++fl.t; }
    if (ending) { fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; r.tpc = ((5856u + sh) & 16383u); return; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((5856u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

template <bool kSticky>
static void vu1_03DA0B20DE799E00_s(Vu0Regs &r, std::uint8_t *mem) {
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

static __attribute__((noinline, cold)) void vu1_03DA0B20DE799E00_c(Vu0Regs &r, std::uint8_t *mem) { vu1_03DA0B20DE799E00_s<true>(r, mem); }

void vu1_03DA0B20DE799E00(Vu0Regs &r, std::uint8_t *mem) {
    if ((r.status & 0xC0u) == 0xC0u) vu1_03DA0B20DE799E00_s<false>(r, mem);
    else vu1_03DA0B20DE799E00_c(r, mem);
}

void vu1_415AE93DE97BC717(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 5080u) & 16383u;
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
    goto L_13D8;
L_01F8: { ++fl.t; set_vi(i1, 0u + 15u); }
L_0200: { ++fl.t; set_vi(i1, i8 & i1); }
L_0208: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1) + 4, 2); set_vi(i2, v); } }
L_0210: { fl.t += 4u; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; pendj = true; }
L_0218: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((544u + sh) & 16383u));
    return;
L_13D8: { ++fl.t; set_vi(i10, 0u + 0u); }
L_13E0: { ++fl.t; set_vi(i9, 0u + i12); }
L_13E8: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_13F0: { ++fl.t; vstore(r.vf[16], vsel(vload(r.vf[16]), vload(r.vf[17]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); }
L_13F8: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[17], q, 16); set_vi(i13, i13 + 1u); } }
L_1400: { ++fl.t; pend = static_cast<std::int16_t>(i6) <= 0; }
L_1408: { ++fl.t; set_vi(i7, i8 + 0u); }
    if (pend) { pend = false; goto L_1448; }
L_1410: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q, &r.vf[16], 16); set_vi(i12, i12 + 1u); } }
L_1418: { ++fl.t; set_vi(i1, i11 - i12); }
L_1420: { ++fl.t; set_vi(i10, i10 + 1u); }
L_1428: { ++fl.t; pend = static_cast<std::int16_t>(i1) > 0; }
L_1430: { ++fl.t; set_vi(i6, i6 - 1u); }
    if (pend) { pend = false; goto L_13F0; }
L_1438: { ++fl.t; pend = true; }
L_1440: { ++fl.t; set_vi(i15, 0u + 635u); }
    if (pend) { pend = false; goto L_1668; }
L_1448: { ++fl.t; set_vi(i6, r.vf[16].w[0]); }
L_1450: { ++fl.t; pend = static_cast<std::int16_t>(i8) >= 0; }
L_1458: { ++fl.t; set_vi(i8, r.vf[16].w[3]); }
    if (pend) { pend = false; goto L_13F0; }
L_1460: { ++fl.t; set_vi(i4, 0u + 4096u); }
L_1468: { ++fl.t; set_vi(i1, i7 & i4); }
L_1470: { ++fl.t; set_vi(i4, 0u + 2048u); }
L_1478: { ++fl.t; pend = 0u == i1; }
L_1480: { ++fl.t; }
    if (pend) { pend = false; goto L_14A0; }
L_1488: { ++fl.t; set_vi(i15, (((5256u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1490: { ++fl.t; }
    if (pend) { pend = false; goto L_16D0; }
L_1498: { ++fl.t; set_vi(i6, r.vf[16].w[0]); }
L_14A0: { ++fl.t; set_vi(i1, i7 & i4); }
L_14A8: { ++fl.t; }
L_14B0: { ++fl.t; pend = 0u == i1; }
L_14B8: { ++fl.t; }
    if (pend) { pend = false; goto L_13F0; }
L_14C0: { ++fl.t; pend = true; }
L_14C8: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
    if (pend) { pend = false; goto L_01F8; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((5328u + sh) & 16383u));
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
L_16C8: { ++fl.t; vu::kick(1, i3); }
    if (pendj) { pendj = false; goto dispatch; }
L_16D0: { ++fl.t; ending = true; }
L_16D8: { ++fl.t; }
    if (ending) { fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; r.tpc = ((5856u + sh) & 16383u); return; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((5856u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

void vu1_71B596F06E928113(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 5272u) & 16383u;
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
    goto L_1498;
L_01F8: { ++fl.t; set_vi(i1, 0u + 15u); }
L_0200: { ++fl.t; set_vi(i1, i8 & i1); }
L_0208: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1) + 4, 2); set_vi(i2, v); } }
L_0210: { fl.t += 4u; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; pendj = true; }
L_0218: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((544u + sh) & 16383u));
    return;
L_13F0: { ++fl.t; vstore(r.vf[16], vsel(vload(r.vf[16]), vload(r.vf[17]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); }
L_13F8: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[17], q, 16); set_vi(i13, i13 + 1u); } }
L_1400: { ++fl.t; pend = static_cast<std::int16_t>(i6) <= 0; }
L_1408: { ++fl.t; set_vi(i7, i8 + 0u); }
    if (pend) { pend = false; goto L_1448; }
L_1410: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q, &r.vf[16], 16); set_vi(i12, i12 + 1u); } }
L_1418: { ++fl.t; set_vi(i1, i11 - i12); }
L_1420: { ++fl.t; set_vi(i10, i10 + 1u); }
L_1428: { ++fl.t; pend = static_cast<std::int16_t>(i1) > 0; }
L_1430: { ++fl.t; set_vi(i6, i6 - 1u); }
    if (pend) { pend = false; goto L_13F0; }
L_1438: { ++fl.t; pend = true; }
L_1440: { ++fl.t; set_vi(i15, 0u + 635u); }
    if (pend) { pend = false; goto L_1668; }
L_1448: { ++fl.t; set_vi(i6, r.vf[16].w[0]); }
L_1450: { ++fl.t; pend = static_cast<std::int16_t>(i8) >= 0; }
L_1458: { ++fl.t; set_vi(i8, r.vf[16].w[3]); }
    if (pend) { pend = false; goto L_13F0; }
L_1460: { ++fl.t; set_vi(i4, 0u + 4096u); }
L_1468: { ++fl.t; set_vi(i1, i7 & i4); }
L_1470: { ++fl.t; set_vi(i4, 0u + 2048u); }
L_1478: { ++fl.t; pend = 0u == i1; }
L_1480: { ++fl.t; }
    if (pend) { pend = false; goto L_14A0; }
L_1488: { ++fl.t; set_vi(i15, (((5256u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1490: { ++fl.t; }
    if (pend) { pend = false; goto L_16D0; }
L_1498: { ++fl.t; set_vi(i6, r.vf[16].w[0]); }
L_14A0: { ++fl.t; set_vi(i1, i7 & i4); }
L_14A8: { ++fl.t; }
L_14B0: { ++fl.t; pend = 0u == i1; }
L_14B8: { ++fl.t; }
    if (pend) { pend = false; goto L_13F0; }
L_14C0: { ++fl.t; pend = true; }
L_14C8: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
    if (pend) { pend = false; goto L_01F8; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((5328u + sh) & 16383u));
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
L_16C8: { ++fl.t; vu::kick(1, i3); }
    if (pendj) { pendj = false; goto dispatch; }
L_16D0: { ++fl.t; ending = true; }
L_16D8: { ++fl.t; }
    if (ending) { fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; r.tpc = ((5856u + sh) & 16383u); return; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((5856u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

template <bool kSticky>
static void vu1_7671081F82CDB034_s(Vu0Regs &r, std::uint8_t *mem) {
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
    goto L_3FF8;
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
L_3FF8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

static __attribute__((noinline, cold)) void vu1_7671081F82CDB034_c(Vu0Regs &r, std::uint8_t *mem) { vu1_7671081F82CDB034_s<true>(r, mem); }

void vu1_7671081F82CDB034(Vu0Regs &r, std::uint8_t *mem) {
    if ((r.status & 0xC0u) == 0xC0u) vu1_7671081F82CDB034_s<false>(r, mem);
    else vu1_7671081F82CDB034_c(r, mem);
}

template <bool kSticky>
static void vu1_84B3A801C70C905B_s(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 3336u) & 16383u;
    (void)sh;
    v4u n4 = vshadow_eager(r.vf[4]);
    v4u n5 = vshadow_eager(r.vf[5]);
    v4u n6 = vshadow_eager(r.vf[6]);
    v4u n7 = vshadow_eager(r.vf[7]);
    std::uint16_t i15 = r.vi[15];
    goto L_0D08;
L_0D08: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); vstore(r.vf[7], uv); n7 = vshadow_eager(r.vf[7]); }
L_0D10: { ++fl.t; const v4u uv = vsubn(n4, vsplat(n4[0])); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.stick<2u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_0D18: { ++fl.t; const v4u uv = vsubn(n4, vsplat(n4[1])); r.i = 1056964608u; vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0D20: { fl.t += 2u; const v4u uv = vmuln(n7, vfix(vsplat(r.i))); vstore(r.vf[6], uv); fl.stick<15u, kSticky>(uv); n6 = uv; }
L_0D28: { ++fl.t; const v4u uv = vmuln(n7, vfix(vsplat(r.i))); r.i = 3204448256u; vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0u})); fl.stick<10u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0u}); }
L_0D30: { ++fl.t; const v4u uv = vmuln(n7, vfix(vsplat(r.i))); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0xFFFFFFFFu})); fl.stick<5u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0xFFFFFFFFu}); }
L_0D38: { fl.t += 2u; const v4u uv = vmuln(n6, vsplat(n5[2])); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0D40: { ++fl.t; const v4u uv = vmuln(n6, vsplat(n5[3])); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_0D48: { ++fl.t; const v4u uv = vmuln(n7, vsplat(n5[2])); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.push_last<8u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0D50: { ++fl.t; const v4u uv = vmuln(n7, vsplat(n5[3])); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.push_last<4u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_0D58: { fl.t += 2u; const v4u uv = vaddn(n6, n4); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.push_last<12u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_0D60: { fl.t += 2u; { std::uint8_t *q = qword(mem, 0u + 135u); std::memcpy(q + 0, &r.vf[7].w[0], 4); std::memcpy(q + 4, &r.vf[7].w[1], 4); } }
L_0D68: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0D70: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 134u); std::memcpy(q + 0, &r.vf[6].w[0], 4); std::memcpy(q + 4, &r.vf[6].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); vu::interpret(1, ((3448u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); vu::interpret(1, jpc);
    return;
}

static __attribute__((noinline, cold)) void vu1_84B3A801C70C905B_c(Vu0Regs &r, std::uint8_t *mem) { vu1_84B3A801C70C905B_s<true>(r, mem); }

void vu1_84B3A801C70C905B(Vu0Regs &r, std::uint8_t *mem) {
    if ((r.status & 0xC0u) == 0xC0u) vu1_84B3A801C70C905B_s<false>(r, mem);
    else vu1_84B3A801C70C905B_c(r, mem);
}

void vu1_95D5DFB378881F23(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 3192u) & 16383u;
    (void)sh;
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i9 = r.vi[9];
    std::uint16_t i10 = r.vi[10];
    std::uint16_t i12 = r.vi[12];
    std::uint16_t i15 = r.vi[15];
    goto L_0C78;
L_0C78: { ++fl.t; set_vi(i2, i15 + 0u); }
L_0C80: { ++fl.t; set_vi(i1, 0u + 8u); }
L_0C88: { ++fl.t; set_vi(i15, (((3208u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0C90: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
    if (pend) { pend = false; goto L_1638; }
L_0C98: { ++fl.t; set_vi(i15, i2 + 0u); }
L_0CA0: { ++fl.t; set_vi(i1, 0u + 63u); }
L_0CA8: { ++fl.t; pend = true; }
L_0CB0: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
    if (pend) { pend = false; goto L_1638; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((3256u + sh) & 16383u));
    return;
L_1638: { ++fl.t; set_vi(i10, 0u + 1u); }
L_1640: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_1648: { ++fl.t; set_vi(i9, 0u + i12); }
L_1650: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_1658: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1660: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q, &r.vf[4], 16); set_vi(i12, i12 + 1u); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((5736u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

void vu1_2AA957D1AD9FEBE7(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 3256u) & 16383u;
    (void)sh;
    unsigned st = 0u;
    static constexpr std::uint8_t ks_0CE8[] = {0, 0};
    static constexpr std::uint8_t ks_0CF0[] = {2, 0};
    static constexpr std::uint8_t ke_0CE8_0CF0[] = {0, 1};
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i3 = r.vi[3];
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i5 = r.vi[5];
    std::uint16_t i9 = r.vi[9];
    std::uint16_t i10 = r.vi[10];
    std::uint16_t i12 = r.vi[12];
    std::uint16_t i15 = r.vi[15];
    goto L_0CB8;
L_0CB8: { ++fl.t; set_vi(i1, 0u + 128u); }
L_0CC0: { ++fl.t; set_vi(i1, i5 & i1); }
L_0CC8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 47u) + 12, 2); set_vi(i2, v); } }
L_0CD0: { ++fl.t; pend = 0u == i1; }
L_0CD8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 131u) + 12, 2); set_vi(i3, v); } }
    if (pend) { pend = false; st = 0u; goto L_0CE8; }
L_0CE0: { fl.t += 2u; set_vi(i4, 0u + i2); }
    st = 1u; 
L_0CE8: { fl.t += 1u + ks_0CE8[st]; { const std::uint8_t *q = qword(mem, i4 + 124u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0u})); } }
    st = ke_0CE8_0CF0[st]; 
L_0CF0: { fl.t += 1u + ks_0CF0[st]; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i3))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); } }
L_0CF8: { ++fl.t; pend = true; }
L_0D00: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 129u); const std::uint32_t v = i4; std::memcpy(q + 12, &v, 4); } }
    if (pend) { pend = false; goto L_1638; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; vu::interpret(1, ((3336u + sh) & 16383u));
    return;
L_1638: { ++fl.t; set_vi(i10, 0u + 1u); }
L_1640: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_1648: { ++fl.t; set_vi(i9, 0u + i12); }
L_1650: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_1658: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1660: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q, &r.vf[4], 16); set_vi(i12, i12 + 1u); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; vu::interpret(1, ((5736u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; vu::interpret(1, jpc);
    return;
}

template <bool kSticky>
PS2_VU_BODY void vu1_F16630F1420CA7EE_b(Vu0Regs &r, std::uint8_t *mem, VuDaz &daz, std::uint32_t &hop) {
    (void)daz;
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 1024u) & 16383u;
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
    goto L_0400;
L_01F8: { ++fl.t; set_vi(i1, 0u + 15u); }
L_0200: { ++fl.t; set_vi(i1, i8 & i1); }
L_0208: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1) + 4, 2); set_vi(i2, v); } }
L_0210: { fl.t += 4u; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; pendj = true; }
L_0218: { ++fl.t; }
    if (pendj) { pendj = false; vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); goto dispatch; }
    vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((544u + sh) & 16383u));
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
L_03E0: { ++fl.t; vflushd(r.vf[27], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); const v4u uv = vftoi(vload(r.vf[2]), 0); vstore(r.vf[24], vsel(vload(r.vf[24]), vload(r.vf[27]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); vstore(r.vf[2], uv); n24 = vshadow(r.vf[24]); n2 = vshadow(r.vf[2]); }
L_03E8: { ++fl.t; vflushd(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vmaddd(nacc, n29, vsplat(n17[1])); { std::uint8_t *q = qword(mem, i1 + 0u); std::memcpy(q + 0, &r.vf[25].w[0], 4); std::memcpy(q + 4, &r.vf[25].w[1], 4); std::memcpy(q + 8, &r.vf[25].w[2], 4); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_03F0: { ++fl.t; const v4u uv = vmaddd(nacc, n30, vsplat(n17[2])); set_vi(i4, 0u + 16384u); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_03F8: { ++fl.t; const v4u uv = vaddd(nacc, (v4u)((v4f)n31 * (v4f)vsplat(0x3F800000u))); set_vi(i8, i8 | i2); vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n27 = vsel(n27, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    vflushd(r.vf[1], v4u{0u, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[3], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[4], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.acc, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); 
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
    vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((1184u + sh) & 16383u));
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
    if (pendj) { pendj = false; vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); goto dispatch; }
L_16D0: { ++fl.t; ending = true; }
L_16D8: { ++fl.t; }
    if (ending) { vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; r.tpc = ((5856u + sh) & 16383u); return; }
    vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((5856u + sh) & 16383u));
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
    if (pendj) { pendj = false; vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); goto dispatch; }
    vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((5976u + sh) & 16383u));
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
    if (pendj) { pendj = false; vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); goto dispatch; }
L_18B8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i6) * 8u) & 16383u; pendj = true; }
L_18C0: { ++fl.t; }
    if (pendj) { pendj = false; vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); goto dispatch; }
L_18C8: { ++fl.t; pend = static_cast<std::int16_t>(i6) < 0; }
L_18D0: { ++fl.t; }
    if (pend) { pend = false; goto L_18E8; }
L_18D8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i4) * 8u) & 16383u; pendj = true; }
L_18E0: { ++fl.t; }
    if (pendj) { pendj = false; vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); goto dispatch; }
L_18E8: { ++fl.t; pend = true; }
L_18F0: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
    if (pend) { pend = false; goto L_01F8; }
    vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((6392u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, jpc);
    return;
}
static __attribute__((noinline, cold)) void vu1_F16630F1420CA7EE_c(Vu0Regs &r, std::uint8_t *mem, VuDaz &daz, std::uint32_t &hop) { vu1_F16630F1420CA7EE_b<true>(r, mem, daz, hop); }
void vu1_F16630F1420CA7EE(Vu0Regs &r, std::uint8_t *mem) {
    std::uint32_t hop = kNoHop;
    {
        VuDaz daz;
        if ((r.status & 0xC0u) == 0xC0u) vu1_F16630F1420CA7EE_b<false>(r, mem, daz, hop);
        else vu1_F16630F1420CA7EE_c(r, mem, daz, hop);
    }
    if (hop != kNoHop) vu::interpret(1, hop);
}

}
