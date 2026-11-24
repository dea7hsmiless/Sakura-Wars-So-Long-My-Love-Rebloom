#include "ps2/vu_ops.hpp"
#include <cstdio>

namespace gen {

using namespace ps2;
using namespace ps2::vuops;

template <bool kSticky>
static void vu1_5932B8031A67438D_s(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 4432u) & 16383u;
    (void)sh;
    v4u n4 = vshadow_eager(r.vf[4]);
    std::uint16_t i8 = r.vi[8];
    std::uint16_t i15 = r.vi[15];
    goto L_1150;
L_1150: { ++fl.t; r.i = 1090519040u; }
L_1158: { ++fl.t; const v4u uv = vmuln(n4, vfix(vsplat(r.i))); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.push_last<8u, kSticky>(uv); }
L_1160: { fl.t += 4u; { const v4u m = vload(r.vf[1]); vstore(r.vf[1], vsel(vload(r.vf[1]), v4u{m[1], m[2], m[3], m[0]}, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } }
L_1168: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1170: { fl.t += 3u; { std::uint8_t *q = qword(mem, i8 + 12u); std::memcpy(q + 12, &r.vf[1].w[3], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); vu::interpret(1, ((4472u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); vu::interpret(1, jpc);
    return;
}

static __attribute__((noinline, cold)) void vu1_5932B8031A67438D_c(Vu0Regs &r, std::uint8_t *mem) { vu1_5932B8031A67438D_s<true>(r, mem); }

void vu1_5932B8031A67438D(Vu0Regs &r, std::uint8_t *mem) {
    if ((r.status & 0xC0u) == 0xC0u) vu1_5932B8031A67438D_s<false>(r, mem);
    else vu1_5932B8031A67438D_c(r, mem);
}

void vu1_6744C7975C6170C5(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 3528u) & 16383u;
    (void)sh;
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i5 = r.vi[5];
    std::uint16_t i8 = r.vi[8];
    std::uint16_t i15 = r.vi[15];
    goto L_0DC8;
L_0DC8: { ++fl.t; set_vi(i1, 0u + 2u); }
L_0DD0: { ++fl.t; set_vi(i1, i5 & i1); }
L_0DD8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 45u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } }
L_0DE0: { ++fl.t; pend = 0u == i1; }
L_0DE8: { ++fl.t; }
    if (pend) { pend = false; goto L_0E00; }
L_0DF0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0DF8: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 24u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0E00: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0E08: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 24u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; vu::interpret(1, ((3600u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; vu::interpret(1, jpc);
    return;
}

void vu1_4CE95B423DFB2BF0(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 3824u) & 16383u;
    (void)sh;
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i5 = r.vi[5];
    std::uint16_t i8 = r.vi[8];
    std::uint16_t i15 = r.vi[15];
    goto L_0EF0;
L_0EF0: { ++fl.t; set_vi(i1, 0u + 16u); }
L_0EF8: { ++fl.t; set_vi(i1, i5 & i1); }
L_0F00: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 12, 2); set_vi(i2, v); } }
L_0F08: { ++fl.t; pend = 0u == i1; }
L_0F10: { ++fl.t; }
    if (pend) { pend = false; goto L_0F28; }
L_0F18: { fl.t += 2u; set_vi(i4, 0u + i2); }
L_0F20: { ++fl.t; }
L_0F28: { ++fl.t; pend = 0u == i4; }
L_0F30: { ++fl.t; set_vi(i4, i4 - 1u); }
    if (pend) { pend = false; goto L_0F80; }
L_0F38: { ++fl.t; set_vi(i1, 0u + 16384u); }
L_0F40: { ++fl.t; pend = 0u == i4; }
L_0F48: { ++fl.t; }
    if (pend) { pend = false; goto L_0F68; }
L_0F50: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 2u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0F58: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0F60: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 3u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0F68: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 2u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0F70: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0F78: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 3u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0F80: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 2u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0F88: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0F90: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 3u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[4] = i4; vu::interpret(1, ((3992u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[4] = i4; vu::interpret(1, jpc);
    return;
}

void vu1_EA0E5A4AF9366EAC(Vu0Regs &r, std::uint8_t *mem) {
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
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i5 = r.vi[5];
    std::uint16_t i8 = r.vi[8];
    std::uint16_t i15 = r.vi[15];
    goto L_1000;
L_1000: { ++fl.t; set_vi(i1, 0u + 1u); }
L_1008: { ++fl.t; set_vi(i1, i5 & i1); }
L_1010: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 0, 2); set_vi(i2, v); } }
L_1018: { ++fl.t; pend = 0u == i1; }
L_1020: { ++fl.t; }
    if (pend) { pend = false; goto L_1030; }
L_1028: { fl.t += 2u; set_vi(i4, 0u + i2); }
L_1030: { ++fl.t; set_vi(i2, 0u + 0u); }
L_1038: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i8 + 0u) + 12, 2); set_vi(i1, v); } }
L_1040: { ++fl.t; pend = 0u != i4; }
L_1048: { ++fl.t; set_vi(i4, i4 - 1u); }
    if (pend) { pend = false; goto L_1068; }
L_1050: { ++fl.t; set_vi(i3, 0u + 32703u); }
L_1058: { ++fl.t; pend = true; }
L_1060: { ++fl.t; set_vi(i1, i1 & i3); }
    if (pend) { pend = false; goto L_1088; }
L_1068: { ++fl.t; set_vi(i3, 0u + 64u); }
L_1070: { ++fl.t; pend = 0u == i4; }
L_1078: { ++fl.t; set_vi(i1, i1 | i3); }
    if (pend) { pend = false; goto L_1088; }
L_1080: { ++fl.t; set_vi(i2, 0u + 1u); }
L_1088: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 6u); const std::uint32_t v = i2; std::memcpy(q + 12, &v, 4); } }
L_1090: { ++fl.t; set_vi(i2, i2 + i8); }
L_1098: { ++fl.t; { const std::uint8_t *q = qword(mem, i2 + 7u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } }
L_10A0: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 0u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_10A8: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 23u); const std::uint32_t v = i1; std::memcpy(q + 0, &v, 4); } }
L_10B0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_10B8: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 25u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; vu::interpret(1, ((4288u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; vu::interpret(1, jpc);
    return;
}

template <bool kSticky>
static void vu1_58327FE4EAB583F0_s(Vu0Regs &r, std::uint8_t *mem) {
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
    unsigned st = 0u;
    static constexpr std::uint8_t ks_0FC0[] = {0, 0};
    static constexpr std::uint8_t ks_0FC8[] = {0, 0};
    static constexpr std::uint8_t ks_0FD0[] = {1, 0};
    static constexpr std::uint8_t ke_0FC0_0FC8[] = {0, 1};
    static constexpr std::uint8_t ke_0FC8_0FD0[] = {0, 1};
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
    std::uint16_t i6 = r.vi[6];
    std::uint16_t i7 = r.vi[7];
    std::uint16_t i8 = r.vi[8];
    std::uint16_t i9 = r.vi[9];
    std::uint16_t i10 = r.vi[10];
    std::uint16_t i14 = r.vi[14];
    std::uint16_t i15 = r.vi[15];
    goto L_3DF8;
L_0000: { ++fl.t; set_vi(i14, 0u + 960u); }
L_0008: { ++fl.t; set_vi(i2, 0u + 272u); }
L_0010: { ++fl.t; set_vi(i3, 0u + 264u); }
L_0018: { ++fl.t; set_vi(i4, 0u + 256u); }
L_0020: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 115u); const std::uint32_t v = i2; std::memcpy(q + 12, &v, 4); } }
L_0028: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 116u); const std::uint32_t v = i3; std::memcpy(q + 12, &v, 4); } }
L_0030: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 117u); const std::uint32_t v = i4; std::memcpy(q + 12, &v, 4); } }
L_0038: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = 0u; std::memcpy(q + 0, &v, 4); } }
L_0040: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = 0u; std::memcpy(q + 4, &v, 4); } }
L_0048: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 115u); const std::uint32_t v = 0u; std::memcpy(q + 0, &v, 4); } }
L_0050: { ++fl.t; r.i = 1124073472u; }
L_0058: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vfix(vsplat(r.i))); { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 37u) + 4, 2); set_vi(i9, v); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.push_last<1u, kSticky>(uv); }
L_0060: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); { const std::uint8_t *q = qword(mem, 0u + 45u); vstore(r.vf[6], vsel(vload(r.vf[6]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } vstore(r.vf[5], uv); n6 = vshadow_eager(r.vf[6]); n5 = vshadow_eager(r.vf[5]); }
L_0068: { ++fl.t; set_vi(i10, 0u + 8u); }
L_0070: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 12, 2); set_vi(i7, v); } }
L_0078: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 19u) + 12, 2); set_vi(i5, v); } }
L_0080: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 37u) + 8, 2); set_vi(i4, v); } }
L_0088: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 27u) + 12, 2); set_vi(i8, v); } }
L_0090: { ++fl.t; set_vi(i6, 0u + 0u); }
L_0098: { fl.t += 2u; { std::uint8_t *q = qword(mem, i5 + 31u); const std::uint32_t v = i4; std::memcpy(q + 0, &v, 4); } }
L_00A0: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 4u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_00A8: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 5u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_00B0: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 6u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_00B8: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 9u); std::memcpy(q + 12, &r.vf[4].w[3], 4); } }
L_00C0: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 15u); std::memcpy(q, &r.vf[5], 16); } }
L_00C8: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 24u); std::memcpy(q + 0, &r.vf[6].w[0], 4); std::memcpy(q + 4, &r.vf[6].w[1], 4); } }
L_00D0: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 7u); const std::uint32_t v = i9; std::memcpy(q + 12, &v, 4); } }
L_00D8: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 0u); const std::uint32_t v = i10; std::memcpy(q + 12, &v, 4); } }
L_00E0: { ++fl.t; set_vi(i5, i7 + 0u); }
L_00E8: { ++fl.t; set_vi(i15, (((232u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_00F0: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_0F98; }
L_00F8: { ++fl.t; set_vi(i5, i7 + 0u); }
L_0100: { ++fl.t; set_vi(i15, (((256u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0108: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 4, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0C28; }
L_0110: { ++fl.t; set_vi(i5, i7 + 0u); }
L_0118: { ++fl.t; set_vi(i15, (((280u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0120: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 37u) + 0, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0EF0; }
L_0128: { ++fl.t; set_vi(i5, i7 + 0u); }
L_0130: { ++fl.t; set_vi(i15, (((304u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0138: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_1328; }
L_0140: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i6 + 26u) + 12, 2); set_vi(i8, v); } }
L_0148: { ++fl.t; pend = 0u != i6; }
L_0150: { ++fl.t; set_vi(i6, i6 - 1u); }
    if (pend) { pend = false; goto L_00A0; }
L_0158: { ++fl.t; set_vi(i3, 0u + 27u); }
L_0160: { ++fl.t; vu::kick(1, i3); }
L_0168: { ++fl.t; ending = true; }
L_0170: { ++fl.t; }
    if (ending) { fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[14] = i14; r.vi[15] = i15; r.tpc = ((376u + sh) & 16383u); return; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, ((376u + sh) & 16383u));
    return;
L_0C28: { ++fl.t; set_vi(i1, 0u + 8u); }
L_0C30: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i1, i5 & i1); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n5 = vshadow_eager(r.vf[5]); }
L_0C38: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, v4u{0u, 0u, 0u, 0x3F800000u}); { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 8, 2); set_vi(i2, v); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n5 = vshadow_eager(r.vf[5]); }
L_0C40: { ++fl.t; pend = 0u == i1; }
L_0C48: { ++fl.t; r.i = 1132396544u; }
    if (pend) { pend = false; goto L_0C58; }
L_0C50: { ++fl.t; set_vi(i4, 0u + i2); }
L_0C58: { ++fl.t; set_vi(i1, 0u + 8u); }
L_0C60: { ++fl.t; set_vi(i1, i4 & i1); }
L_0C68: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 37u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } n1 = vshadow_eager(r.vf[1]); }
L_0C70: { ++fl.t; { const std::uint8_t *q = qword(mem, i8 + 15u); std::memcpy(&r.vf[6], q, 16); } n6 = vshadow_eager(r.vf[6]); }
L_0C78: { ++fl.t; { const std::uint8_t *q = qword(mem, i8 + 16u); std::memcpy(&r.vf[7], q, 16); } n7 = vshadow_eager(r.vf[7]); }
L_0C80: { ++fl.t; pend = 0u == i1; }
L_0C88: { ++fl.t; set_vi(i2, 0u + 4u); }
    if (pend) { pend = false; goto L_0C98; }
L_0C90: { ++fl.t; const v4u uv = vaddn(n1, n1); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0C98: { ++fl.t; set_vi(i3, 0u + 3u); }
L_0CA0: { ++fl.t; set_vi(i5, i4 & i3); }
L_0CA8: { ++fl.t; set_vi(i4, i4 & i2); }
L_0CB0: { ++fl.t; const v4u uv = (v4u)((v4f)n5 + (v4f)vsplat(0x3F800000u)); { std::uint16_t v; std::memcpy(&v, qword(mem, i8 + 0u) + 12, 2); set_vi(i1, v); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0CB8: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 14u); std::memcpy(q + 12, &r.vf[1].w[3], 4); } }
L_0CC0: { ++fl.t; pend = 0u == i5; }
L_0CC8: { ++fl.t; set_vi(i5, i5 - 1u); }
    if (pend) { pend = false; goto L_0D10; }
L_0CD0: { ++fl.t; r.i = 1124073472u; }
L_0CD8: { ++fl.t; pend = 0u == i5; }
L_0CE0: { ++fl.t; { const std::uint8_t *q = qword(mem, i8 + 4u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } n3 = vshadow_eager(r.vf[3]); }
    if (pend) { pend = false; goto L_0D30; }
L_0CE8: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 16u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0CF0: { ++fl.t; set_vi(i2, 0u + 1u); }
L_0CF8: { ++fl.t; set_vi(i1, i1 | i3); }
L_0D00: { ++fl.t; pend = true; }
L_0D08: { ++fl.t; set_vi(i3, 0u + 1u); }
    if (pend) { pend = false; goto L_0D50; }
L_0D10: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 32751u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0D18: { ++fl.t; set_vi(i1, i1 & i3); }
L_0D20: { ++fl.t; pend = true; }
L_0D28: { ++fl.t; set_vi(i3, 0u + 0u); }
    if (pend) { pend = false; goto L_0D50; }
L_0D30: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 16u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0D38: { ++fl.t; set_vi(i2, 0u + 0u); }
L_0D40: { ++fl.t; set_vi(i1, i1 | i3); }
L_0D48: { ++fl.t; set_vi(i3, 0u + 1u); }
L_0D50: { ++fl.t; pend = 0u == i4; }
L_0D58: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 28u); std::memcpy(q + 0, &r.vf[3].w[0], 4); std::memcpy(q + 4, &r.vf[3].w[1], 4); } }
    if (pend) { pend = false; goto L_0D70; }
L_0D60: { ++fl.t; r.i = 1073676288u; }
L_0D68: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vfix(vsplat(r.i))); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0D70: { ++fl.t; const v4u uv = vmuln(n6, vsplat(n1[3])); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0D78: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(r.vf[1].w[0])); r.i = 1124073472u; vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n2 = vshadow_eager(r.vf[2]); }
L_0D80: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vfix(vsplat(r.i))); { std::uint8_t *q = qword(mem, i8 + 10u); const std::uint32_t v = i3; std::memcpy(q + 8, &v, 4); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0D88: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 8u); const std::uint32_t v = i2; std::memcpy(q + 12, &v, 4); } }
L_0D90: { ++fl.t; const v4u uv = vmuln(n7, n6); { std::uint8_t *q = qword(mem, i8 + 0u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } vstore(r.vf[7], uv); fl.push_last<15u, kSticky>(uv); n7 = uv; }
L_0D98: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 23u); const std::uint32_t v = i1; std::memcpy(q + 0, &v, 4); } }
L_0DA0: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 13u); std::memcpy(q + 12, &r.vf[5].w[3], 4); } }
L_0DA8: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 9u); std::memcpy(q, &r.vf[2], 16); } }
L_0DB0: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 19u); std::memcpy(q, &r.vf[7], 16); } }
L_0DB8: { ++fl.t; pend = true; }
L_0DC0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i8 + 1u) + 12, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_10F8; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, ((3528u + sh) & 16383u));
    return;
L_0EF0: { ++fl.t; set_vi(i1, 0u + 16u); }
L_0EF8: { ++fl.t; set_vi(i1, i5 & i1); }
L_0F00: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 12, 2); set_vi(i2, v); } }
L_0F08: { ++fl.t; pend = 0u == i1; }
L_0F10: { ++fl.t; }
    if (pend) { pend = false; goto L_0F28; }
L_0F18: { ++fl.t; set_vi(i4, 0u + i2); }
L_0F20: { ++fl.t; }
L_0F28: { ++fl.t; pend = 0u == i4; }
L_0F30: { ++fl.t; set_vi(i4, i4 - 1u); }
    if (pend) { pend = false; goto L_0F80; }
L_0F38: { ++fl.t; set_vi(i1, 0u + 16384u); }
L_0F40: { ++fl.t; pend = 0u == i4; }
L_0F48: { ++fl.t; }
    if (pend) { pend = false; goto L_0F68; }
L_0F50: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 2u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0F58: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0F60: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 3u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0F68: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 2u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0F70: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0F78: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 3u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0F80: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 2u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0F88: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0F90: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 3u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0F98: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 8, 2); set_vi(i3, v); } }
L_0FA0: { ++fl.t; pend = 0u != i4; }
L_0FA8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i8 + 0u) + 12, 2); set_vi(i1, v); } }
    if (pend) { pend = false; st = 0u; goto L_0FC0; }
L_0FB0: { fl.t += 2u; pend = 0u != i3; }
L_0FB8: { ++fl.t; }
    if (pend) { pend = false; goto L_0FD8; }
    st = 1u; 
L_0FC0: { fl.t += 1u + ks_0FC0[st]; set_vi(i3, 0u + 32735u); }
    st = ke_0FC0_0FC8[st]; 
L_0FC8: { fl.t += 1u + ks_0FC8[st]; pend = true; }
    st = ke_0FC8_0FD0[st]; 
L_0FD0: { fl.t += 1u + ks_0FD0[st]; set_vi(i1, i1 & i3); }
    if (pend) { pend = false; goto L_0FE8; }
L_0FD8: { ++fl.t; set_vi(i3, 0u + 32u); }
L_0FE0: { ++fl.t; set_vi(i1, i1 | i3); }
L_0FE8: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 0u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0FF0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0FF8: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 23u); const std::uint32_t v = i1; std::memcpy(q + 0, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, ((4096u + sh) & 16383u));
    return;
L_10F8: { ++fl.t; const v4u uv = vmin(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0u)); { const std::uint8_t *q = qword(mem, i8 + 14u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[4], uv); n3 = vshadow_eager(r.vf[3]); }
L_1100: { ++fl.t; { const std::uint8_t *q = qword(mem, i8 + 17u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n3 = vshadow_eager(r.vf[3]); }
L_1108: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 64u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow_eager(r.vf[1]); }
L_1110: { ++fl.t; pend = 0u != i4; }
L_1118: { ++fl.t; const v4u uv = vmuln(n3, vsplat(n3[3])); { const std::uint8_t *q = qword(mem, i8 + 18u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vshadow_eager(r.vf[2]); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; goto L_1138; }
L_1120: { ++fl.t; const v4u uv = vmuln(n1, n3); { std::uint8_t *q = qword(mem, i8 + 21u); std::memcpy(q + 0, &r.vf[0].w[0], 4); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); }
L_1128: { ++fl.t; const v4u uv = vmuln(n1, n3); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1130: { ++fl.t; const v4u uv = vaddn(nacc, (v4u)((v4f)n2 * (v4f)vsplat(0x3F800000u))); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1138: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 14u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); std::memcpy(q + 8, &r.vf[4].w[2], 4); } }
L_1140: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1148: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 13u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, ((4432u + sh) & 16383u));
    return;
L_1328: { ++fl.t; set_vi(i1, 0u + 32u); }
L_1330: { ++fl.t; set_vi(i1, i5 & i1); }
L_1338: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 47u) + 0, 2); set_vi(i2, v); } }
L_1340: { ++fl.t; pend = 0u == i1; }
L_1348: { ++fl.t; }
    if (pend) { pend = false; goto L_1360; }
L_1350: { ++fl.t; set_vi(i4, 0u + i2); }
L_1358: { ++fl.t; }
L_1360: { ++fl.t; pend = 0u != i4; }
L_1368: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 33u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } }
    if (pend) { pend = false; goto L_1380; }
L_1370: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1378: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 12u); std::memcpy(q + 0, &r.vf[0].w[0], 4); std::memcpy(q + 4, &r.vf[0].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_1380: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1388: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 12u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, ((5008u + sh) & 16383u));
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
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

static __attribute__((noinline, cold)) void vu1_58327FE4EAB583F0_c(Vu0Regs &r, std::uint8_t *mem) { vu1_58327FE4EAB583F0_s<true>(r, mem); }

void vu1_58327FE4EAB583F0(Vu0Regs &r, std::uint8_t *mem) {
    if ((r.status & 0xC0u) == 0xC0u) vu1_58327FE4EAB583F0_s<false>(r, mem);
    else vu1_58327FE4EAB583F0_c(r, mem);
}

template <bool kSticky>
PS2_VU_BODY void vu1_A0D7E1F703D0A622_b(Vu0Regs &r, std::uint8_t *mem, VuDaz &daz, std::uint32_t &hop) {
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
    std::uint16_t bk = 0, next_bk = 0;
    unsigned bi = 0;
    (void)bk;
    (void)next_bk;
    (void)bi;
    unsigned st = 0u;
    static constexpr std::uint8_t ks_0290[] = {2, 0};
    static constexpr std::uint8_t ks_1830[] = {0, 1};
    v4u n1 = vshadow(r.vf[1]);
    v4u n2 = vshadow(r.vf[2]);
    v4u n3 = vshadow(r.vf[3]);
    v4u n5 = vshadow(r.vf[5]);
    v4u n6 = vshadow(r.vf[6]);
    v4u n7 = vshadow(r.vf[7]);
    v4u n8 = vshadow(r.vf[8]);
    v4u n9 = vshadow(r.vf[9]);
    v4u n10 = vshadow(r.vf[10]);
    v4u n12 = vshadow(r.vf[12]);
    v4u n13 = vshadow(r.vf[13]);
    v4u n14 = vshadow(r.vf[14]);
    v4u n15 = vshadow(r.vf[15]);
    v4u n16 = vshadow(r.vf[16]);
    v4u n17 = vshadow(r.vf[17]);
    v4u n18 = vshadow(r.vf[18]);
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
    goto L_0200;
L_0198: { ++fl.t; set_vi(i1, 0u + 15u); }
L_01A0: { ++fl.t; set_vi(i1, i10 & i1); }
L_01A8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1) + 4, 2); set_vi(i2, v); } }
L_01B0: { fl.t += 4u; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; pendj = true; }
L_01B8: { ++fl.t; }
    if (pendj) { pendj = false; vflush(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[5], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[22], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
    vflush(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[5], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[22], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((448u + sh) & 16383u));
    return;
L_0200: { ++fl.t; set_vi(i4, r.vf[29].w[3]); }
L_0208: { ++fl.t; set_vi(i12, i3 + 3u); }
L_0210: { ++fl.t; { std::uint8_t *q = qword(mem, i3 + 1u); const std::uint32_t v = i2; std::memcpy(q + 0, &v, 4); } }
L_0218: { ++fl.t; { std::uint8_t *q = qword(mem, i3 + 0u); std::memcpy(q, &r.vf[28], 16); } }
L_0220: { ++fl.t; set_vi(i2, i4 + i4); }
L_0228: { ++fl.t; set_vi(i11, i2 & i11); }
L_0230: { ++fl.t; { const std::uint8_t *q = qword(mem, i11 + 960u); std::memcpy(&r.vf[28], q, 16); } n28 = vshadow(r.vf[28]); }
L_0238: { ++fl.t; { const std::uint8_t *q = qword(mem, i11 + 961u); std::memcpy(&r.vf[29], q, 16); } n29 = vshadow(r.vf[29]); }
L_0240: { ++fl.t; { const std::uint8_t *q = qword(mem, i11 + 962u); std::memcpy(&r.vf[30], q, 16); } n30 = vshadow(r.vf[30]); }
L_0248: { ++fl.t; const v4u uv = vitof(vload(r.vf[17]), 15); { const std::uint8_t *q = qword(mem, i11 + 963u); std::memcpy(&r.vf[31], q, 16); } vstore(r.vf[1], uv); n31 = vshadow(r.vf[31]); n1 = vshadow(r.vf[1]); }
L_0250: { ++fl.t; const v4u uv = vmuld(n28, vsplat(n16[0])); { const std::uint8_t *q = qword(mem, 0u + 68u); std::memcpy(&r.vf[14], q, 16); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); n14 = vshadow(r.vf[14]); nacc = uv; }
L_0258: { ++fl.t; const v4u uv = vmaddd(nacc, n29, vsplat(n16[1])); { const std::uint8_t *q = qword(mem, 0u + 67u); std::memcpy(&r.vf[24], q, 16); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); n24 = vshadow(r.vf[24]); nacc = uv; }
L_0260: { ++fl.t; const v4u uv = vmaddd(nacc, n30, vsplat(n16[2])); { const std::uint8_t *q = qword(mem, 0u + 66u); std::memcpy(&r.vf[23], q, 16); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); n23 = vshadow(r.vf[23]); nacc = uv; }
L_0268: { ++fl.t; const v4u uv = vaddd(nacc, (v4u)((v4f)n31 * (v4f)vsplat(0x3F800000u))); set_vi(i11, 0u + 0u); vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n27 = vsel(n27, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0270: { ++fl.t; const v4u uv = vmuld(n28, vsplat(n1[0])); { std::uint8_t *q = qword(mem, 0u + 112u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0278: { ++fl.t; const v4u uv = vmaddd(nacc, n29, vsplat(n1[1])); { const std::uint8_t *q = qword(mem, 0u + 71u); std::memcpy(&r.vf[13], q, 16); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n13 = vshadow(r.vf[13]); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0280: { ++fl.t; const v4u uv = vmaddd(nacc, n30, vsplat(n1[2])); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0288: { ++fl.t; const v4u uv = vsubd(n27, n20); vstore(r.vf[22], vsel(vload(r.vf[22]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n22 = vsel(n22, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    st = 0u; 
L_0290: { fl.t += 1u + ks_0290[st]; const v4u uv = vmuld(n23, n26); vstore(r.vf[17], vsel(vload(r.vf[17]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n17 = vsel(n17, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0298: { ++fl.t; const v4u uv = vmuld(n14, n26); vstore(r.vf[16], vsel(vload(r.vf[16]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n16 = vsel(n16, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_02A0: { ++fl.t; const v4u uv = vmuld(n12, n26); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[19].w[0], r.vf[27].w[2]); fl.end_q(r, qb, 7u); } vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_02A8: { ++fl.t; }
L_02B0: { ++fl.t; const v4u uv = vaddd(n17, vsplat(n17[1])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_02B8: { ++fl.t; const v4u uv = vmaddd(nacc, n18, vsplat(n17[2])); { const std::uint8_t *q = qword(mem, i13 + 1u); std::memcpy(&r.vf[2], q, 16); } vstore(r.vf[17], vsel(vload(r.vf[17]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n2 = vshadow(r.vf[2]); n17 = vsel(n17, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_02C0: { ++fl.t; const v4u uv = vaddd(n16, vsplat(n16[0])); set_vi(i3, 0u + 16u); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_02C8: { ++fl.t; const v4u uv = vmaddd(nacc, n18, vsplat(n16[2])); { const std::uint8_t *q = qword(mem, i13 + 2u); std::memcpy(&r.vf[4], q, 16); } vstore(r.vf[17], vsel(vload(r.vf[17]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n17 = vsel(n17, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_02D0: { ++fl.t; const v4u uv = vaddd(n25, vsplat(n25[0])); set_vi(i13, i13 + 4u); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.stick<2u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_02D8: { ++fl.t; const v4u uv = vmaddd(nacc, n18, vsplat(n25[1])); set_vi(i2, i10 & i3); vstore(r.vf[17], vsel(vload(r.vf[17]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.stick<2u, kSticky>(uv); n17 = vsel(n17, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_02E0: { ++fl.t; const v4u uv = vitof(vload(r.vf[2]), 0); vstore(r.vf[16], uv); n16 = vshadow(r.vf[16]); }
L_02E8: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n27 = vsel(n27, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_02F0: { ++fl.t; const v4u uv = vmuld(vswz<1, 2, 0, 3>(n21), vswz<2, 0, 1, 3>(n22)); { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 27u) + 12, 2); set_vi(i1, v); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_02F8: { ++fl.t; vflushd(r.vf[17], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vmax(vload(r.vf[17]), v4u{0u, 0u, 0u, 0x3F800000u}); r.i = 998277251u; vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n25 = vshadow(r.vf[25]); }
L_0300: { ++fl.t; const v4u uv = vmuld(n16, vfix(vsplat(r.i))); { const std::uint8_t *q = qword(mem, 0u + 38u); std::memcpy(&r.vf[17], q, 16); } vstore(r.vf[2], uv); fl.stick<15u, kSticky>(uv); n17 = vshadow(r.vf[17]); n2 = uv; }
L_0308: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n27[3])); { const std::uint8_t *q = qword(mem, 0u + 33u); std::memcpy(&r.vf[1], q, 16); } vstore(r.vf[20], vsel(vload(r.vf[20]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n1 = vshadow(r.vf[1]); n20 = vsel(n20, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0310: { ++fl.t; const v4u uv = vmsubd(nacc, vswz<1, 2, 0, 3>(n22), vswz<2, 0, 1, 3>(n21)); { const std::uint8_t *q = qword(mem, i2 + 15u); vstore(r.vf[21], vsel(vload(r.vf[21]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[16], vsel(vload(r.vf[16]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n21 = vshadow(r.vf[21]); n16 = vsel(n16, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0318: { ++fl.t; const v4u uv = vmuld(n24, vsplat(n25[0])); { const std::uint8_t *q = qword(mem, i1 + 21u); vstore(r.vf[8], vsel(vload(r.vf[8]), vload_ptr(q), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n8 = vshadow(r.vf[8]); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0320: { ++fl.t; const v4u uv = vmaddd(nacc, n15, vsplat(n25[1])); vstore(r.vf[25], vsel(vload(r.vf[25]), vload(r.vf[0]), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n25 = vshadow(r.vf[25]); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0328: { ++fl.t; vflushd(r.vf[20], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); const v4u uv = vmax(vload(r.vf[20]), vsplat(r.vf[17].w[3])); { const std::uint8_t *q = qword(mem, i1 + 11u); std::memcpy(&r.vf[7], q, 16); } vstore(r.vf[20], vsel(vload(r.vf[20]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n7 = vshadow(r.vf[7]); n20 = vshadow(r.vf[20]); }
L_0330: { ++fl.t; const v4u uv = vmuld(n16, n27); { const std::uint8_t *q = qword(mem, i1 + 10u); std::memcpy(&r.vf[6], q, 16); } vstore(r.vf[21], vsel(vload(r.vf[21]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n6 = vshadow(r.vf[6]); n21 = vsel(n21, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0338: { ++fl.t; const v4u uv = vmuld(n27, n17); { const std::uint8_t *q = qword(mem, i1 + 12u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } vstore(r.vf[17], vsel(vload(r.vf[17]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.stick<12u, kSticky>(uv); n3 = vshadow(r.vf[3]); n17 = vsel(n17, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_0340: { ++fl.t; const v4u uv = vmaddd(nacc, n13, vsplat(n25[2])); { const std::uint8_t *q = qword(mem, 0u + 39u); vstore(r.vf[5], vsel(vload(r.vf[5]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n5 = vshadow(r.vf[5]); n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0348: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} - (v4f)vsplat(n8[0])); set_vi(i4, 0u + 16384u); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0350: { ++fl.t; const v4u uv = vaddd(n21, vsplat(n21[1])); { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[16], q, 16); set_vi(i13, i13 + 1u); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n16 = vshadow(r.vf[16]); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0358: { ++fl.t; const v4u uv = vmuld(n17, n20); set_vi(i2, i12 + 0u); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0360: { ++fl.t; const v4u uv = vmaddd(nacc, n18, vsplat(n21[2])); { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[17], q, 16); set_vi(i13, i13 + 1u); } vstore(r.vf[21], vsel(vload(r.vf[21]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n17 = vshadow(r.vf[17]); n21 = vsel(n21, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0368: { ++fl.t; const v4u uv = vmuld(n25, vsplat(n5[3])); { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 8u) + 12, 2); set_vi(i5, v); } vstore(r.vf[10], uv); fl.stick<15u, kSticky>(uv); n10 = uv; }
L_0370: { ++fl.t; const v4u uv = vitof(vload(r.vf[4]), 12); set_vi(i12, i12 + 3u); vstore(r.vf[4], uv); }
L_0378: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vsplat(n1[2])); set_vi(i11, i11 + 1u); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0380: { ++fl.t; vflushd(r.vf[22], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vmuld(n21, vsplat(n21[0])); vstore(r.vf[21], vsel(vload(r.vf[21]), vload(r.vf[22]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); vstore(r.vf[22], vsel(vload(r.vf[22]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.push<1u, kSticky>(uv); n21 = vshadow(r.vf[21]); n22 = vsel(n22, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0388: { ++fl.t; vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vmax(vload(r.vf[10]), vsplat(r.vf[8].w[0])); { const std::uint8_t *q = qword(mem, i1 + 19u); std::memcpy(&r.vf[10], q, 16); } vstore(r.vf[8], uv); n10 = vshadow(r.vf[10]); n8 = vshadow(r.vf[8]); }
L_0390: { ++fl.t; const v4u uv = vmaddd(nacc, n1, vsplat(n27[2])); { std::uint8_t *q = qword(mem, 0u + 112u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.push<1u, kSticky>(uv); }
L_0398: { ++fl.t; const v4u uv = vmuld(n26, n7); { const std::uint8_t *q = qword(mem, i1 + 13u); vstore(r.vf[22], vsel(vload(r.vf[22]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.push<12u, kSticky>(uv); n22 = vshadow(r.vf[22]); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_03A0: { ++fl.t; const v4u uv = vaddd(nacc, (v4u)((v4f)n6 * (v4f)vsplat(0x3F800000u))); set_vi(i3, (fl.mac() & 0xFFFFu) == i3 ? 1u : 0u); vstore(r.vf[22], vsel(vload(r.vf[22]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.stick<12u, kSticky>(uv); n22 = vsel(n22, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_03A8: { ++fl.t; const v4u uv = vmuld(n10, n8); { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 126u) + 12, 2); set_vi(i3, v); } vstore(r.vf[6], uv); fl.stick<15u, kSticky>(uv); n6 = uv; }
L_03B0: { ++fl.t; vflushd(r.vf[4], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); const v4u uv = vmax(vload(r.vf[4]), vsplat(r.vf[1].w[1])); { const std::uint8_t *q = qword(mem, i1 + 14u); vstore(r.vf[26], vsel(vload(r.vf[26]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n26 = vshadow(r.vf[26]); }
L_03B8: { ++fl.t; const v4u uv = vaddd(n9, n5); { const std::uint8_t *q = qword(mem, i1 + 18u); std::memcpy(&r.vf[5], q, 16); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n5 = vshadow(r.vf[5]); }
L_03C0: { ++fl.t; vflushd(r.vf[22], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n20[0])); { std::uint8_t *q = qword(mem, 0u + 113u); std::memcpy(q + 0, &r.vf[22].w[0], 4); std::memcpy(q + 4, &r.vf[22].w[1], 4); } vstore(r.vf[22], vsel(vload(r.vf[22]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.stick<2u, kSticky>(uv); n22 = vsel(n22, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_03C8: { ++fl.t; const v4u uv = vmuld(n6, n2); set_vi(i10, i10 | i3); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_03D0: { ++fl.t; const v4u uv = vmaddd(nacc, n26, n2); { const std::uint8_t *q = qword(mem, i5 + 112u); vstore(r.vf[22], vsel(vload(r.vf[22]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n22 = vshadow(r.vf[22]); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_03D8: { ++fl.t; const v4u uv = vaddd(nacc, (v4u)((v4f)n5 * (v4f)vsplat(0x3F800000u))); set_vi(i3, i4 & i10); vstore(r.vf[5], uv); fl.stick<15u, kSticky>(uv); n5 = uv; }
L_03E0: { ++fl.t; const v4u uv = vmin(vload(r.vf[4]), vsplat(r.vf[1].w[0])); set_vi(i3, i3 + i3); vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); }
L_03E8: { ++fl.t; const v4u uv = vitof(vload(r.vf[17]), 15); vstore(r.vf[2], uv); n2 = vshadow(r.vf[2]); }
L_03F0: { ++fl.t; const v4u uv = vaddd(n22, n3); vstore(r.vf[22], vsel(vload(r.vf[22]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.stick<12u, kSticky>(uv); n22 = vsel(n22, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_03F8: { ++fl.t; vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vmin(vload(r.vf[5]), vsplat(r.vf[22].w[3])); { const std::uint8_t *q = qword(mem, i1 + 9u); std::memcpy(&r.vf[1], q, 16); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n1 = vshadow(r.vf[1]); n5 = vshadow(r.vf[5]); }
L_0400: { ++fl.t; const v4u uv = vftoi(vload(r.vf[4]), 4); vstore(r.vf[4], uv); }
L_0408: { ++fl.t; const v4u uv = vmuld(n28, vsplat(n2[0])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0410: { ++fl.t; const v4u uv = vmuld(n22, vsplat(n20[0])); vstore(r.vf[22], vsel(vload(r.vf[22]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.stick<12u, kSticky>(uv); n22 = vsel(n22, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_0418: { ++fl.t; const v4u uv = vmuld(n5, n1); vstore(r.vf[1], uv); fl.stick<15u, kSticky>(uv); n1 = uv; }
L_0420: { ++fl.t; const v4u uv = vmaddd(nacc, n29, vsplat(n2[1])); set_vi(i1, r.vf[4].w[3]); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0428: { ++fl.t; const v4u uv = vmaddd(nacc, n30, vsplat(n2[2])); { std::uint8_t *q = qword(mem, i2 + 2u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); std::memcpy(q + 8, &r.vf[4].w[2], 4); } vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0430: { ++fl.t; vflushd(r.vf[22], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vmuld(n28, vsplat(n16[0])); { std::uint8_t *q = qword(mem, i2 + 0u); std::memcpy(q + 0, &r.vf[22].w[0], 4); std::memcpy(q + 4, &r.vf[22].w[1], 4); std::memcpy(q + 8, &r.vf[22].w[2], 4); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0438: { ++fl.t; const v4u uv = vftoi(vload(r.vf[1]), 0); vstore(r.vf[22], uv); n22 = vshadow(r.vf[22]); }
L_0440: { ++fl.t; const v4u uv = vmaddd(nacc, n29, vsplat(n16[1])); set_vi(i3, i1 | i3); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0448: { ++fl.t; const v4u uv = vmaddd(nacc, n30, vsplat(n16[2])); { std::uint8_t *q = qword(mem, i2 + 2u); const std::uint32_t v = i3; std::memcpy(q + 12, &v, 4); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0450: { ++fl.t; vflushd(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vaddd(nacc, (v4u)((v4f)n31 * (v4f)vsplat(0x3F800000u))); vstore(r.vf[20], vsel(vload(r.vf[20]), vload(r.vf[27]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n20 = vshadow(r.vf[20]); n27 = vsel(n27, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0458: { ++fl.t; { std::uint8_t *q = qword(mem, i2 + 1u); std::memcpy(q, &r.vf[22], 16); } }
L_0460: { ++fl.t; }
L_0468: { ++fl.t; }
L_0470: { ++fl.t; const v4u uv = vsubd(n27, n20); vstore(r.vf[22], uv); fl.push<15u, kSticky>(uv); n22 = uv; }
L_0478: { ++fl.t; set_vi(i9, i10 + i10); }
L_0480: { ++fl.t; pend = static_cast<std::int16_t>(i10) >= 0; }
L_0488: { ++fl.t; set_vi(i10, r.vf[16].w[3]); }
    if (pend) { pend = false; vflushd(r.vf[22], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); st = 1u; goto L_0290; }
L_0490: { ++fl.t; set_vi(i8, 0u + 149u); }
L_0498: { ++fl.t; pend = true; }
L_04A0: { ++fl.t; set_vi(i7, 0u + 82u); }
    if (pend) { pend = false; goto L_1930; }
    vflush(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[5], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[22], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((1192u + sh) & 16383u));
    return;
L_1768: { ++fl.t; ending = true; }
L_1770: { ++fl.t; }
    if (ending) { vflush(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[5], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[22], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; r.tpc = ((6008u + sh) & 16383u); return; }
    vflush(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[5], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[22], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((6008u + sh) & 16383u));
    return;
L_17D0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 114u) + 12, 2); set_vi(i1, v); } }
L_17D8: { ++fl.t; set_vi(i2, 0u + 32767u); }
L_17E0: { ++fl.t; set_vi(i2, i2 + 1u); }
L_17E8: { ++fl.t; set_vi(i2, i11 | i2); }
L_17F0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 2u) + 12, 2); set_vi(i3, v); } }
L_17F8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 0u) + 12, 2); set_vi(i1, v); } }
L_1800: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i4))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } }
L_1808: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 19u) + 12, 2); set_vi(i4, v); } }
L_1810: { ++fl.t; { std::uint8_t *q = qword(mem, i3 + 2u); const std::uint32_t v = i2; std::memcpy(q + 0, &v, 4); } }
L_1818: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_1820: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 2u) + 12, 2); set_vi(i12, v); } }
L_1828: { ++fl.t; set_vi(i1, 0u + 0u); }
    st = 0u; 
L_1830: { fl.t += 1u + ks_1830[st]; { const std::uint8_t *q = qword(mem, i4 + 21u); std::memcpy(&r.vf[1], q, 16); } n1 = vshadow(r.vf[1]); }
L_1838: { ++fl.t; set_vi(i2, i4 + 22u); }
L_1840: { ++fl.t; vkick_last(daz, 1, i2); }
L_1848: { ++fl.t; }
L_1850: { ++fl.t; { std::uint8_t *q = qword(mem, i3 + 2u); std::memcpy(q + 4, &r.vf[1].w[1], 4); std::memcpy(q + 8, &r.vf[1].w[2], 4); std::memcpy(q + 12, &r.vf[1].w[3], 4); } }
L_1858: { ++fl.t; set_vi(i1, i1 + 1u); }
L_1860: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 19u) + 12, 2); set_vi(i4, v); } }
L_1868: { ++fl.t; pend = i5 != i1; }
L_1870: { ++fl.t; vkick_last(daz, 1, i3); }
    if (pend) { pend = false; st = 1u; goto L_1830; }
L_1878: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 31u); std::memcpy(&r.vf[1], q, 16); } n1 = vshadow(r.vf[1]); }
L_1880: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 1u); std::memcpy(q + 0, &r.vf[4].w[0], 4); } }
L_1888: { fl.t += 3u; { std::uint8_t *q = qword(mem, i12 + 0u); std::memcpy(q, &r.vf[1], 16); } }
L_1890: { ++fl.t; set_vi(i11, 0u + 0u); }
L_1898: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_18A0: { ++fl.t; set_vi(i12, i12 + 3u); }
    if (pendj) { pendj = false; vflush(r.vf[5], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[22], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
    vflush(r.vf[5], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[22], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((6312u + sh) & 16383u));
    return;
L_1930: { ++fl.t; set_vi(i9, i9 + i9); }
L_1938: { ++fl.t; set_vi(i6, 0u + 4096u); }
L_1940: { ++fl.t; pend = static_cast<std::int16_t>(i9) >= 0; }
L_1948: { ++fl.t; set_vi(i9, i9 + i9); }
    if (pend) { pend = false; goto L_1968; }
L_1950: { ++fl.t; set_vi(i4, 0u + 4u); }
L_1958: { ++fl.t; set_vi(i15, (((6488u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1960: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 112u) + 12, 2); set_vi(i5, v); } }
    if (pend) { pend = false; goto L_17D0; }
L_1968: { ++fl.t; set_vi(i6, i9 & i6); }
L_1970: { ++fl.t; pend = static_cast<std::int16_t>(i9) >= 0; }
L_1978: { ++fl.t; set_vi(i9, i9 + i9); bi = 9u; }
    if (pend) { pend = false; goto L_1990; }
L_1980: { ++fl.t; set_vi(i15, (((6528u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1988: { ++fl.t; next_bk = i6; set_vi(i6, 0u + 512u); bk = next_bk; bi = 6u; }
    if (pend) { pend = false; goto L_1768; }
L_1990: { ++fl.t; pend = 0u == (bi == 6 ? bk : i6); }
L_1998: { ++fl.t; }
    if (pend) { pend = false; goto L_19D0; }
L_19A0: { ++fl.t; pend = static_cast<std::int16_t>(i9) < 0; }
L_19A8: { ++fl.t; }
    if (pend) { pend = false; goto L_19F0; }
L_19B0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i8) * 8u) & 16383u; set_vi(i15, (((6576u + sh) & 16383u) + 16u) / 8u); pendj = true; }
L_19B8: { ++fl.t; }
    if (pendj) { pendj = false; vflush(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[5], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[22], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_19C0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i7) * 8u) & 16383u; pendj = true; }
L_19C8: { ++fl.t; }
    if (pendj) { pendj = false; vflush(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[5], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[22], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_19D0: { ++fl.t; pend = static_cast<std::int16_t>(i9) < 0; }
L_19D8: { ++fl.t; }
    if (pend) { pend = false; goto L_19F0; }
L_19E0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i7) * 8u) & 16383u; pendj = true; }
L_19E8: { ++fl.t; }
    if (pendj) { pendj = false; vflush(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[5], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[22], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_19F0: { ++fl.t; pend = true; }
L_19F8: { ++fl.t; }
    if (pend) { pend = false; goto L_0198; }
    vflush(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[5], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflush(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[22], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((6656u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, jpc);
    return;
}
static __attribute__((noinline, cold)) void vu1_A0D7E1F703D0A622_c(Vu0Regs &r, std::uint8_t *mem, VuDaz &daz, std::uint32_t &hop) { vu1_A0D7E1F703D0A622_b<true>(r, mem, daz, hop); }
void vu1_A0D7E1F703D0A622(Vu0Regs &r, std::uint8_t *mem) {
    std::uint32_t hop = kNoHop;
    {
        VuDaz daz;
        if ((r.status & 0xC0u) == 0xC0u) vu1_A0D7E1F703D0A622_b<false>(r, mem, daz, hop);
        else vu1_A0D7E1F703D0A622_c(r, mem, daz, hop);
    }
    if (hop != kNoHop) vu::interpret(1, hop);
}

template <bool kSticky>
static void vu1_6BA34AEE42A80EFD_s(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 5008u) & 16383u;
    (void)sh;
    v4u n1 = vshadow_eager(r.vf[1]);
    v4u n4 = vshadow_eager(r.vf[4]);
    v4u n5 = vshadow_eager(r.vf[5]);
    std::uint16_t i8 = r.vi[8];
    std::uint16_t i15 = r.vi[15];
    goto L_1390;
L_1390: { ++fl.t; { const std::uint8_t *q = qword(mem, i8 + 14u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } n1 = vshadow_eager(r.vf[1]); }
L_1398: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 15u); std::memcpy(q, &r.vf[4], 16); } }
L_13A0: { ++fl.t; const v4u uv = vmuln(n4, n1); { const std::uint8_t *q = qword(mem, i8 + 16u); std::memcpy(&r.vf[5], q, 16); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n5 = vshadow_eager(r.vf[5]); n4 = vsel(n4, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_13A8: { fl.t += 4u; const v4u uv = vmuln(n4, n5); jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; vstore(r.vf[5], uv); fl.push_last<15u, kSticky>(uv); n5 = uv; }
L_13B0: { fl.t += 4u; { std::uint8_t *q = qword(mem, i8 + 19u); std::memcpy(q, &r.vf[5], 16); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); vu::interpret(1, ((5048u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); vu::interpret(1, jpc);
    return;
}

static __attribute__((noinline, cold)) void vu1_6BA34AEE42A80EFD_c(Vu0Regs &r, std::uint8_t *mem) { vu1_6BA34AEE42A80EFD_s<true>(r, mem); }

void vu1_6BA34AEE42A80EFD(Vu0Regs &r, std::uint8_t *mem) {
    if ((r.status & 0xC0u) == 0xC0u) vu1_6BA34AEE42A80EFD_s<false>(r, mem);
    else vu1_6BA34AEE42A80EFD_c(r, mem);
}

void vu1_2DF0EC8A7E72B3F6(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 3600u) & 16383u;
    (void)sh;
    std::uint16_t i8 = r.vi[8];
    std::uint16_t i15 = r.vi[15];
    goto L_0E10;
L_0E10: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0E18: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 26u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); vu::interpret(1, ((3616u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); vu::interpret(1, jpc);
    return;
}

template <bool kSticky>
static void vu1_AC30DBDDB4C51BDF_s(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 3112u) & 16383u;
    (void)sh;
    unsigned st = 0u;
    static constexpr std::uint8_t ks_1138[] = {0, 1};
    static constexpr std::uint8_t ks_1140[] = {0, 0};
    static constexpr std::uint8_t ks_1148[] = {1, 0};
    static constexpr std::uint8_t ke_1138_1140[] = {0, 1};
    static constexpr std::uint8_t ke_1140_1148[] = {0, 1};
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
    std::uint16_t i15 = r.vi[15];
    goto L_0C28;
L_0C28: { ++fl.t; set_vi(i1, 0u + 8u); }
L_0C30: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i1, i5 & i1); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n5 = vshadow_eager(r.vf[5]); }
L_0C38: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, v4u{0u, 0u, 0u, 0x3F800000u}); { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 8, 2); set_vi(i2, v); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n5 = vshadow_eager(r.vf[5]); }
L_0C40: { ++fl.t; pend = 0u == i1; }
L_0C48: { ++fl.t; r.i = 1132396544u; }
    if (pend) { pend = false; goto L_0C58; }
L_0C50: { fl.t += 2u; set_vi(i4, 0u + i2); }
L_0C58: { ++fl.t; set_vi(i1, 0u + 8u); }
L_0C60: { ++fl.t; set_vi(i1, i4 & i1); }
L_0C68: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 37u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } n1 = vshadow_eager(r.vf[1]); }
L_0C70: { ++fl.t; { const std::uint8_t *q = qword(mem, i8 + 15u); std::memcpy(&r.vf[6], q, 16); } n6 = vshadow_eager(r.vf[6]); }
L_0C78: { ++fl.t; { const std::uint8_t *q = qword(mem, i8 + 16u); std::memcpy(&r.vf[7], q, 16); } n7 = vshadow_eager(r.vf[7]); }
L_0C80: { ++fl.t; pend = 0u == i1; }
L_0C88: { ++fl.t; set_vi(i2, 0u + 4u); }
    if (pend) { pend = false; goto L_0C98; }
L_0C90: { ++fl.t; const v4u uv = vaddn(n1, n1); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0C98: { ++fl.t; set_vi(i3, 0u + 3u); }
L_0CA0: { ++fl.t; set_vi(i5, i4 & i3); }
L_0CA8: { ++fl.t; set_vi(i4, i4 & i2); }
L_0CB0: { ++fl.t; const v4u uv = (v4u)((v4f)n5 + (v4f)vsplat(0x3F800000u)); { std::uint16_t v; std::memcpy(&v, qword(mem, i8 + 0u) + 12, 2); set_vi(i1, v); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0CB8: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 14u); std::memcpy(q + 12, &r.vf[1].w[3], 4); } }
L_0CC0: { ++fl.t; pend = 0u == i5; }
L_0CC8: { ++fl.t; set_vi(i5, i5 - 1u); }
    if (pend) { pend = false; goto L_0D10; }
L_0CD0: { ++fl.t; r.i = 1124073472u; }
L_0CD8: { ++fl.t; pend = 0u == i5; }
L_0CE0: { ++fl.t; { const std::uint8_t *q = qword(mem, i8 + 4u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } n3 = vshadow_eager(r.vf[3]); }
    if (pend) { pend = false; goto L_0D30; }
L_0CE8: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 16u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0CF0: { ++fl.t; set_vi(i2, 0u + 1u); }
L_0CF8: { ++fl.t; set_vi(i1, i1 | i3); }
L_0D00: { ++fl.t; pend = true; }
L_0D08: { ++fl.t; set_vi(i3, 0u + 1u); }
    if (pend) { pend = false; goto L_0D50; }
L_0D10: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 32751u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0D18: { ++fl.t; set_vi(i1, i1 & i3); }
L_0D20: { ++fl.t; pend = true; }
L_0D28: { ++fl.t; set_vi(i3, 0u + 0u); }
    if (pend) { pend = false; goto L_0D50; }
L_0D30: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 16u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0D38: { ++fl.t; set_vi(i2, 0u + 0u); }
L_0D40: { ++fl.t; set_vi(i1, i1 | i3); }
L_0D48: { ++fl.t; set_vi(i3, 0u + 1u); }
L_0D50: { ++fl.t; pend = 0u == i4; }
L_0D58: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 28u); std::memcpy(q + 0, &r.vf[3].w[0], 4); std::memcpy(q + 4, &r.vf[3].w[1], 4); } }
    if (pend) { pend = false; goto L_0D70; }
L_0D60: { ++fl.t; r.i = 1073676288u; }
L_0D68: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vfix(vsplat(r.i))); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0D70: { ++fl.t; const v4u uv = vmuln(n6, vsplat(n1[3])); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0D78: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(r.vf[1].w[0])); r.i = 1124073472u; vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n2 = vshadow_eager(r.vf[2]); }
L_0D80: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vfix(vsplat(r.i))); { std::uint8_t *q = qword(mem, i8 + 10u); const std::uint32_t v = i3; std::memcpy(q + 8, &v, 4); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0D88: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 8u); const std::uint32_t v = i2; std::memcpy(q + 12, &v, 4); } }
L_0D90: { ++fl.t; const v4u uv = vmuln(n7, n6); { std::uint8_t *q = qword(mem, i8 + 0u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } vstore(r.vf[7], uv); fl.push_last<15u, kSticky>(uv); n7 = uv; }
L_0D98: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 23u); const std::uint32_t v = i1; std::memcpy(q + 0, &v, 4); } }
L_0DA0: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 13u); std::memcpy(q + 12, &r.vf[5].w[3], 4); } }
L_0DA8: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 9u); std::memcpy(q, &r.vf[2], 16); } }
L_0DB0: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 19u); std::memcpy(q, &r.vf[7], 16); } }
L_0DB8: { ++fl.t; pend = true; }
L_0DC0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i8 + 1u) + 12, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_10F8; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; vu::interpret(1, ((3528u + sh) & 16383u));
    return;
L_10F8: { ++fl.t; const v4u uv = vmin(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0u)); { const std::uint8_t *q = qword(mem, i8 + 14u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[4], uv); n3 = vshadow_eager(r.vf[3]); }
L_1100: { ++fl.t; { const std::uint8_t *q = qword(mem, i8 + 17u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n3 = vshadow_eager(r.vf[3]); }
L_1108: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 64u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow_eager(r.vf[1]); }
L_1110: { ++fl.t; pend = 0u != i4; }
L_1118: { fl.t += 2u; const v4u uv = vmuln(n3, vsplat(n3[3])); { const std::uint8_t *q = qword(mem, i8 + 18u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vshadow_eager(r.vf[2]); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; st = 0u; goto L_1138; }
L_1120: { fl.t += 4u; const v4u uv = vmuln(n1, n3); { std::uint8_t *q = qword(mem, i8 + 21u); std::memcpy(q + 0, &r.vf[0].w[0], 4); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); }
L_1128: { ++fl.t; const v4u uv = vmuln(n1, n3); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1130: { ++fl.t; const v4u uv = vaddn(nacc, (v4u)((v4f)n2 * (v4f)vsplat(0x3F800000u))); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    st = 1u; 
L_1138: { fl.t += 1u + ks_1138[st]; { std::uint8_t *q = qword(mem, i8 + 14u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); std::memcpy(q + 8, &r.vf[4].w[2], 4); } }
    st = ke_1138_1140[st]; 
L_1140: { fl.t += 1u + ks_1140[st]; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
    st = ke_1140_1148[st]; 
L_1148: { fl.t += 1u + ks_1148[st]; { std::uint8_t *q = qword(mem, i8 + 13u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; vu::interpret(1, ((4432u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; vu::interpret(1, jpc);
    return;
}

static __attribute__((noinline, cold)) void vu1_AC30DBDDB4C51BDF_c(Vu0Regs &r, std::uint8_t *mem) { vu1_AC30DBDDB4C51BDF_s<true>(r, mem); }

void vu1_AC30DBDDB4C51BDF(Vu0Regs &r, std::uint8_t *mem) {
    if ((r.status & 0xC0u) == 0xC0u) vu1_AC30DBDDB4C51BDF_s<false>(r, mem);
    else vu1_AC30DBDDB4C51BDF_c(r, mem);
}

template <bool kSticky>
static void vu1_CDEA5A39D3BA18A3_s(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 3712u) & 16383u;
    (void)sh;
    v4u n4 = vshadow_eager(r.vf[4]);
    v4u n5 = vshadow_eager(r.vf[5]);
    v4u n6 = vshadow_eager(r.vf[6]);
    v4u n7 = vshadow_eager(r.vf[7]);
    std::uint16_t i8 = r.vi[8];
    std::uint16_t i15 = r.vi[15];
    goto L_0E80;
L_0E80: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); vstore(r.vf[7], uv); n7 = vshadow_eager(r.vf[7]); }
L_0E88: { ++fl.t; const v4u uv = vsubn(n4, vsplat(n4[0])); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.stick<2u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_0E90: { ++fl.t; const v4u uv = vsubn(n4, vsplat(n4[1])); r.i = 1056964608u; vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0E98: { fl.t += 2u; const v4u uv = vmuln(n7, vfix(vsplat(r.i))); vstore(r.vf[6], uv); fl.stick<15u, kSticky>(uv); n6 = uv; }
L_0EA0: { ++fl.t; const v4u uv = vmuln(n7, vfix(vsplat(r.i))); r.i = 3204448256u; vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0u})); fl.stick<10u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0u}); }
L_0EA8: { ++fl.t; const v4u uv = vmuln(n7, vfix(vsplat(r.i))); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0xFFFFFFFFu})); fl.stick<5u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0xFFFFFFFFu}); }
L_0EB0: { fl.t += 2u; const v4u uv = vmuln(n6, vsplat(n5[2])); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0EB8: { ++fl.t; const v4u uv = vmuln(n6, vsplat(n5[3])); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_0EC0: { ++fl.t; const v4u uv = vmuln(n7, vsplat(n5[2])); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.push_last<8u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0EC8: { ++fl.t; const v4u uv = vmuln(n7, vsplat(n5[3])); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.push_last<4u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_0ED0: { fl.t += 2u; const v4u uv = vaddn(n6, n4); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.push_last<12u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_0ED8: { fl.t += 2u; { std::uint8_t *q = qword(mem, i8 + 11u); std::memcpy(q + 0, &r.vf[7].w[0], 4); std::memcpy(q + 4, &r.vf[7].w[1], 4); } }
L_0EE0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0EE8: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 10u); std::memcpy(q + 0, &r.vf[6].w[0], 4); std::memcpy(q + 4, &r.vf[6].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); vu::interpret(1, ((3824u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); vu::interpret(1, jpc);
    return;
}

static __attribute__((noinline, cold)) void vu1_CDEA5A39D3BA18A3_c(Vu0Regs &r, std::uint8_t *mem) { vu1_CDEA5A39D3BA18A3_s<true>(r, mem); }

void vu1_CDEA5A39D3BA18A3(Vu0Regs &r, std::uint8_t *mem) {
    if ((r.status & 0xC0u) == 0xC0u) vu1_CDEA5A39D3BA18A3_s<false>(r, mem);
    else vu1_CDEA5A39D3BA18A3_c(r, mem);
}

void vu1_78137035F1067385(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 3616u) & 16383u;
    (void)sh;
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i3 = r.vi[3];
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i5 = r.vi[5];
    std::uint16_t i8 = r.vi[8];
    std::uint16_t i15 = r.vi[15];
    goto L_0E20;
L_0E20: { ++fl.t; set_vi(i1, 0u + 128u); }
L_0E28: { ++fl.t; set_vi(i1, i5 & i1); }
L_0E30: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 47u) + 12, 2); set_vi(i2, v); } }
L_0E38: { ++fl.t; pend = 0u == i1; }
L_0E40: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i8 + 7u) + 12, 2); set_vi(i3, v); } }
    if (pend) { pend = false; goto L_0E50; }
L_0E48: { fl.t += 2u; set_vi(i4, 0u + i2); }
L_0E50: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 5u); const std::uint32_t v = i4; std::memcpy(q + 12, &v, 4); } }
L_0E58: { ++fl.t; set_vi(i4, i4 + i8); }
L_0E60: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 0u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } }
L_0E68: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 27u); const std::uint32_t v = i3; std::memcpy(q + 4, &v, 4); } }
L_0E70: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0E78: { fl.t += 2u; { std::uint8_t *q = qword(mem, i8 + 27u); std::memcpy(q + 0, &r.vf[4].w[0], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; vu::interpret(1, ((3712u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; vu::interpret(1, jpc);
    return;
}

template <bool kSticky>
PS2_VU_BODY void vu1_C44960BED086A65F_b(Vu0Regs &r, std::uint8_t *mem, VuDaz &daz, std::uint32_t &hop) {
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
    unsigned st = 0u;
    static constexpr std::uint8_t ks_1830[] = {0, 1};
    v4u n1 = vshadow(r.vf[1]);
    v4u n2 = vshadow(r.vf[2]);
    v4u n3 = vshadow(r.vf[3]);
    v4u n5 = vshadow(r.vf[5]);
    v4u n6 = vshadow(r.vf[6]);
    v4u n7 = vshadow(r.vf[7]);
    v4u n8 = vshadow(r.vf[8]);
    v4u n9 = vshadow(r.vf[9]);
    v4u n10 = vshadow(r.vf[10]);
    v4u n12 = vshadow(r.vf[12]);
    v4u n13 = vshadow(r.vf[13]);
    v4u n14 = vshadow(r.vf[14]);
    v4u n15 = vshadow(r.vf[15]);
    v4u n16 = vshadow(r.vf[16]);
    v4u n17 = vshadow(r.vf[17]);
    v4u n18 = vshadow(r.vf[18]);
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
L_0198: { ++fl.t; set_vi(i1, 0u + 15u); }
L_01A0: { ++fl.t; set_vi(i1, i10 & i1); }
L_01A8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1) + 4, 2); set_vi(i2, v); } }
L_01B0: { fl.t += 4u; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; pendj = true; }
L_01B8: { ++fl.t; }
    if (pendj) { pendj = false; vflush(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[22], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
    vflush(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[22], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((448u + sh) & 16383u));
    return;
L_0290: { ++fl.t; const v4u uv = vmuld(n23, n26); vstore(r.vf[17], vsel(vload(r.vf[17]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n17 = vsel(n17, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0298: { ++fl.t; const v4u uv = vmuld(n14, n26); vstore(r.vf[16], vsel(vload(r.vf[16]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n16 = vsel(n16, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_02A0: { ++fl.t; const v4u uv = vmuld(n12, n26); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[19].w[0], r.vf[27].w[2]); fl.end_q(r, qb, 7u); } vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_02A8: { ++fl.t; }
L_02B0: { ++fl.t; const v4u uv = vaddd(n17, vsplat(n17[1])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_02B8: { ++fl.t; const v4u uv = vmaddd(nacc, n18, vsplat(n17[2])); { const std::uint8_t *q = qword(mem, i13 + 1u); std::memcpy(&r.vf[2], q, 16); } vstore(r.vf[17], vsel(vload(r.vf[17]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n2 = vshadow(r.vf[2]); n17 = vsel(n17, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_02C0: { ++fl.t; const v4u uv = vaddd(n16, vsplat(n16[0])); set_vi(i3, 0u + 16u); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_02C8: { ++fl.t; const v4u uv = vmaddd(nacc, n18, vsplat(n16[2])); { const std::uint8_t *q = qword(mem, i13 + 2u); std::memcpy(&r.vf[4], q, 16); } vstore(r.vf[17], vsel(vload(r.vf[17]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n17 = vsel(n17, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_02D0: { ++fl.t; const v4u uv = vaddd(n25, vsplat(n25[0])); set_vi(i13, i13 + 4u); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.stick<2u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_02D8: { ++fl.t; const v4u uv = vmaddd(nacc, n18, vsplat(n25[1])); set_vi(i2, i10 & i3); vstore(r.vf[17], vsel(vload(r.vf[17]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.stick<2u, kSticky>(uv); n17 = vsel(n17, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_02E0: { ++fl.t; const v4u uv = vitof(vload(r.vf[2]), 0); vstore(r.vf[16], uv); n16 = vshadow(r.vf[16]); }
L_02E8: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n27 = vsel(n27, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_02F0: { ++fl.t; const v4u uv = vmuld(vswz<1, 2, 0, 3>(n21), vswz<2, 0, 1, 3>(n22)); { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 27u) + 12, 2); set_vi(i1, v); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_02F8: { ++fl.t; vflushd(r.vf[17], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vmax(vload(r.vf[17]), v4u{0u, 0u, 0u, 0x3F800000u}); r.i = 998277251u; vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n25 = vshadow(r.vf[25]); }
L_0300: { ++fl.t; const v4u uv = vmuld(n16, vfix(vsplat(r.i))); { const std::uint8_t *q = qword(mem, 0u + 38u); std::memcpy(&r.vf[17], q, 16); } vstore(r.vf[2], uv); fl.stick<15u, kSticky>(uv); n17 = vshadow(r.vf[17]); n2 = uv; }
L_0308: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n27[3])); { const std::uint8_t *q = qword(mem, 0u + 33u); std::memcpy(&r.vf[1], q, 16); } vstore(r.vf[20], vsel(vload(r.vf[20]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n1 = vshadow(r.vf[1]); n20 = vsel(n20, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0310: { ++fl.t; const v4u uv = vmsubd(nacc, vswz<1, 2, 0, 3>(n22), vswz<2, 0, 1, 3>(n21)); { const std::uint8_t *q = qword(mem, i2 + 15u); vstore(r.vf[21], vsel(vload(r.vf[21]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[16], vsel(vload(r.vf[16]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n21 = vshadow(r.vf[21]); n16 = vsel(n16, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0318: { ++fl.t; const v4u uv = vmuld(n24, vsplat(n25[0])); { const std::uint8_t *q = qword(mem, i1 + 21u); vstore(r.vf[8], vsel(vload(r.vf[8]), vload_ptr(q), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n8 = vshadow(r.vf[8]); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0320: { ++fl.t; const v4u uv = vmaddd(nacc, n15, vsplat(n25[1])); vstore(r.vf[25], vsel(vload(r.vf[25]), vload(r.vf[0]), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n25 = vshadow(r.vf[25]); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0328: { ++fl.t; vflushd(r.vf[20], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); const v4u uv = vmax(vload(r.vf[20]), vsplat(r.vf[17].w[3])); { const std::uint8_t *q = qword(mem, i1 + 11u); std::memcpy(&r.vf[7], q, 16); } vstore(r.vf[20], vsel(vload(r.vf[20]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n7 = vshadow(r.vf[7]); n20 = vshadow(r.vf[20]); }
L_0330: { ++fl.t; const v4u uv = vmuld(n16, n27); { const std::uint8_t *q = qword(mem, i1 + 10u); std::memcpy(&r.vf[6], q, 16); } vstore(r.vf[21], vsel(vload(r.vf[21]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n6 = vshadow(r.vf[6]); n21 = vsel(n21, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0338: { ++fl.t; const v4u uv = vmuld(n27, n17); { const std::uint8_t *q = qword(mem, i1 + 12u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } vstore(r.vf[17], vsel(vload(r.vf[17]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.stick<12u, kSticky>(uv); n3 = vshadow(r.vf[3]); n17 = vsel(n17, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_0340: { ++fl.t; const v4u uv = vmaddd(nacc, n13, vsplat(n25[2])); { const std::uint8_t *q = qword(mem, 0u + 39u); vstore(r.vf[5], vsel(vload(r.vf[5]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n5 = vshadow(r.vf[5]); n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0348: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} - (v4f)vsplat(n8[0])); set_vi(i4, 0u + 16384u); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0350: { ++fl.t; const v4u uv = vaddd(n21, vsplat(n21[1])); { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[16], q, 16); set_vi(i13, i13 + 1u); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n16 = vshadow(r.vf[16]); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0358: { ++fl.t; const v4u uv = vmuld(n17, n20); set_vi(i2, i12 + 0u); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0360: { ++fl.t; const v4u uv = vmaddd(nacc, n18, vsplat(n21[2])); { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[17], q, 16); set_vi(i13, i13 + 1u); } vstore(r.vf[21], vsel(vload(r.vf[21]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n17 = vshadow(r.vf[17]); n21 = vsel(n21, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0368: { ++fl.t; const v4u uv = vmuld(n25, vsplat(n5[3])); { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 8u) + 12, 2); set_vi(i5, v); } vstore(r.vf[10], uv); fl.stick<15u, kSticky>(uv); n10 = uv; }
L_0370: { ++fl.t; const v4u uv = vitof(vload(r.vf[4]), 12); set_vi(i12, i12 + 3u); vstore(r.vf[4], uv); }
L_0378: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vsplat(n1[2])); set_vi(i11, i11 + 1u); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0380: { ++fl.t; vflushd(r.vf[22], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vmuld(n21, vsplat(n21[0])); vstore(r.vf[21], vsel(vload(r.vf[21]), vload(r.vf[22]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); vstore(r.vf[22], vsel(vload(r.vf[22]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.push<1u, kSticky>(uv); n21 = vshadow(r.vf[21]); n22 = vsel(n22, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0388: { ++fl.t; vflushd(r.vf[10], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vmax(vload(r.vf[10]), vsplat(r.vf[8].w[0])); { const std::uint8_t *q = qword(mem, i1 + 19u); std::memcpy(&r.vf[10], q, 16); } vstore(r.vf[8], uv); n10 = vshadow(r.vf[10]); n8 = vshadow(r.vf[8]); }
L_0390: { ++fl.t; const v4u uv = vmaddd(nacc, n1, vsplat(n27[2])); { std::uint8_t *q = qword(mem, 0u + 112u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.push<1u, kSticky>(uv); }
L_0398: { ++fl.t; const v4u uv = vmuld(n26, n7); { const std::uint8_t *q = qword(mem, i1 + 13u); vstore(r.vf[22], vsel(vload(r.vf[22]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.push<12u, kSticky>(uv); n22 = vshadow(r.vf[22]); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_03A0: { ++fl.t; const v4u uv = vaddd(nacc, (v4u)((v4f)n6 * (v4f)vsplat(0x3F800000u))); set_vi(i3, (fl.mac() & 0xFFFFu) == i3 ? 1u : 0u); vstore(r.vf[22], vsel(vload(r.vf[22]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.stick<12u, kSticky>(uv); n22 = vsel(n22, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_03A8: { ++fl.t; const v4u uv = vmuld(n10, n8); { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 126u) + 12, 2); set_vi(i3, v); } vstore(r.vf[6], uv); fl.stick<15u, kSticky>(uv); n6 = uv; }
L_03B0: { ++fl.t; vflushd(r.vf[4], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); const v4u uv = vmax(vload(r.vf[4]), vsplat(r.vf[1].w[1])); { const std::uint8_t *q = qword(mem, i1 + 14u); vstore(r.vf[26], vsel(vload(r.vf[26]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n26 = vshadow(r.vf[26]); }
L_03B8: { ++fl.t; const v4u uv = vaddd(n9, n5); { const std::uint8_t *q = qword(mem, i1 + 18u); std::memcpy(&r.vf[5], q, 16); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n5 = vshadow(r.vf[5]); }
L_03C0: { ++fl.t; vflushd(r.vf[22], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n20[0])); { std::uint8_t *q = qword(mem, 0u + 113u); std::memcpy(q + 0, &r.vf[22].w[0], 4); std::memcpy(q + 4, &r.vf[22].w[1], 4); } vstore(r.vf[22], vsel(vload(r.vf[22]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.stick<2u, kSticky>(uv); n22 = vsel(n22, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_03C8: { ++fl.t; const v4u uv = vmuld(n6, n2); set_vi(i10, i10 | i3); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_03D0: { ++fl.t; const v4u uv = vmaddd(nacc, n26, n2); { const std::uint8_t *q = qword(mem, i5 + 112u); vstore(r.vf[22], vsel(vload(r.vf[22]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n22 = vshadow(r.vf[22]); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_03D8: { ++fl.t; const v4u uv = vaddd(nacc, (v4u)((v4f)n5 * (v4f)vsplat(0x3F800000u))); set_vi(i3, i4 & i10); vstore(r.vf[5], uv); fl.stick<15u, kSticky>(uv); n5 = uv; }
L_03E0: { ++fl.t; const v4u uv = vmin(vload(r.vf[4]), vsplat(r.vf[1].w[0])); set_vi(i3, i3 + i3); vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); }
L_03E8: { ++fl.t; const v4u uv = vitof(vload(r.vf[17]), 15); vstore(r.vf[2], uv); n2 = vshadow(r.vf[2]); }
L_03F0: { ++fl.t; const v4u uv = vaddd(n22, n3); vstore(r.vf[22], vsel(vload(r.vf[22]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.stick<12u, kSticky>(uv); n22 = vsel(n22, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_03F8: { ++fl.t; vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vmin(vload(r.vf[5]), vsplat(r.vf[22].w[3])); { const std::uint8_t *q = qword(mem, i1 + 9u); std::memcpy(&r.vf[1], q, 16); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n1 = vshadow(r.vf[1]); n5 = vshadow(r.vf[5]); }
    vflushd(r.vf[5], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); vflushd(r.vf[6], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[22], v4u{0u, 0u, 0xFFFFFFFFu, 0u}); vflushd(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); 
L_0400: { ++fl.t; const v4u uv = vftoi(vload(r.vf[4]), 4); vstore(r.vf[4], uv); }
L_0408: { ++fl.t; const v4u uv = vmuld(n28, vsplat(n2[0])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0410: { ++fl.t; const v4u uv = vmuld(n22, vsplat(n20[0])); vstore(r.vf[22], vsel(vload(r.vf[22]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.stick<12u, kSticky>(uv); n22 = vsel(n22, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_0418: { ++fl.t; const v4u uv = vmuld(n5, n1); vstore(r.vf[1], uv); fl.stick<15u, kSticky>(uv); n1 = uv; }
L_0420: { ++fl.t; const v4u uv = vmaddd(nacc, n29, vsplat(n2[1])); set_vi(i1, r.vf[4].w[3]); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0428: { ++fl.t; const v4u uv = vmaddd(nacc, n30, vsplat(n2[2])); { std::uint8_t *q = qword(mem, i2 + 2u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); std::memcpy(q + 8, &r.vf[4].w[2], 4); } vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0430: { ++fl.t; vflushd(r.vf[22], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); const v4u uv = vmuld(n28, vsplat(n16[0])); { std::uint8_t *q = qword(mem, i2 + 0u); std::memcpy(q + 0, &r.vf[22].w[0], 4); std::memcpy(q + 4, &r.vf[22].w[1], 4); std::memcpy(q + 8, &r.vf[22].w[2], 4); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0438: { ++fl.t; const v4u uv = vftoi(vload(r.vf[1]), 0); vstore(r.vf[22], uv); n22 = vshadow(r.vf[22]); }
L_0440: { ++fl.t; const v4u uv = vmaddd(nacc, n29, vsplat(n16[1])); set_vi(i3, i1 | i3); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0448: { ++fl.t; const v4u uv = vmaddd(nacc, n30, vsplat(n16[2])); { std::uint8_t *q = qword(mem, i2 + 2u); const std::uint32_t v = i3; std::memcpy(q + 12, &v, 4); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0450: { ++fl.t; const v4u uv = vaddd(nacc, (v4u)((v4f)n31 * (v4f)vsplat(0x3F800000u))); vstore(r.vf[20], vsel(vload(r.vf[20]), vload(r.vf[27]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n20 = vshadow(r.vf[20]); n27 = vsel(n27, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0458: { ++fl.t; { std::uint8_t *q = qword(mem, i2 + 1u); std::memcpy(q, &r.vf[22], 16); } }
L_0460: { ++fl.t; }
L_0468: { ++fl.t; }
L_0470: { ++fl.t; const v4u uv = vsubd(n27, n20); vstore(r.vf[22], uv); fl.push<15u, kSticky>(uv); n22 = uv; }
L_0478: { ++fl.t; set_vi(i9, i10 + i10); }
L_0480: { ++fl.t; pend = static_cast<std::int16_t>(i10) >= 0; }
L_0488: { ++fl.t; set_vi(i10, r.vf[16].w[3]); }
    if (pend) { pend = false; goto L_0290; }
L_0490: { ++fl.t; set_vi(i8, 0u + 149u); }
L_0498: { ++fl.t; pend = true; }
L_04A0: { ++fl.t; set_vi(i7, 0u + 82u); }
    if (pend) { pend = false; goto L_1930; }
    vflush(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[22], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((1192u + sh) & 16383u));
    return;
L_1768: { ++fl.t; ending = true; }
L_1770: { ++fl.t; }
    if (ending) { vflush(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[22], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; r.tpc = ((6008u + sh) & 16383u); return; }
    vflush(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[22], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((6008u + sh) & 16383u));
    return;
L_17D0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 114u) + 12, 2); set_vi(i1, v); } }
L_17D8: { ++fl.t; set_vi(i2, 0u + 32767u); }
L_17E0: { ++fl.t; set_vi(i2, i2 + 1u); }
L_17E8: { ++fl.t; set_vi(i2, i11 | i2); }
L_17F0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 2u) + 12, 2); set_vi(i3, v); } }
L_17F8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 0u) + 12, 2); set_vi(i1, v); } }
L_1800: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i4))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } }
L_1808: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 19u) + 12, 2); set_vi(i4, v); } }
L_1810: { ++fl.t; { std::uint8_t *q = qword(mem, i3 + 2u); const std::uint32_t v = i2; std::memcpy(q + 0, &v, 4); } }
L_1818: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_1820: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 2u) + 12, 2); set_vi(i12, v); } }
L_1828: { ++fl.t; set_vi(i1, 0u + 0u); }
    st = 0u; 
L_1830: { fl.t += 1u + ks_1830[st]; { const std::uint8_t *q = qword(mem, i4 + 21u); std::memcpy(&r.vf[1], q, 16); } n1 = vshadow(r.vf[1]); }
L_1838: { ++fl.t; set_vi(i2, i4 + 22u); }
L_1840: { ++fl.t; vkick_last(daz, 1, i2); }
L_1848: { ++fl.t; }
L_1850: { ++fl.t; { std::uint8_t *q = qword(mem, i3 + 2u); std::memcpy(q + 4, &r.vf[1].w[1], 4); std::memcpy(q + 8, &r.vf[1].w[2], 4); std::memcpy(q + 12, &r.vf[1].w[3], 4); } }
L_1858: { ++fl.t; set_vi(i1, i1 + 1u); }
L_1860: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 19u) + 12, 2); set_vi(i4, v); } }
L_1868: { ++fl.t; pend = i5 != i1; }
L_1870: { ++fl.t; vkick_last(daz, 1, i3); }
    if (pend) { pend = false; st = 1u; goto L_1830; }
L_1878: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 31u); std::memcpy(&r.vf[1], q, 16); } n1 = vshadow(r.vf[1]); }
L_1880: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 1u); std::memcpy(q + 0, &r.vf[4].w[0], 4); } }
L_1888: { fl.t += 3u; { std::uint8_t *q = qword(mem, i12 + 0u); std::memcpy(q, &r.vf[1], 16); } }
L_1890: { ++fl.t; set_vi(i11, 0u + 0u); }
L_1898: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_18A0: { ++fl.t; set_vi(i12, i12 + 3u); }
    if (pendj) { pendj = false; vflush(r.vf[22], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
    vflush(r.vf[22], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((6312u + sh) & 16383u));
    return;
L_1930: { ++fl.t; set_vi(i9, i9 + i9); }
L_1938: { ++fl.t; set_vi(i6, 0u + 4096u); }
L_1940: { ++fl.t; pend = static_cast<std::int16_t>(i9) >= 0; }
L_1948: { ++fl.t; set_vi(i9, i9 + i9); }
    if (pend) { pend = false; goto L_1968; }
L_1950: { ++fl.t; set_vi(i4, 0u + 4u); }
L_1958: { ++fl.t; set_vi(i15, (((6488u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1960: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 112u) + 12, 2); set_vi(i5, v); } }
    if (pend) { pend = false; goto L_17D0; }
L_1968: { ++fl.t; set_vi(i6, i9 & i6); }
L_1970: { ++fl.t; pend = static_cast<std::int16_t>(i9) >= 0; }
L_1978: { ++fl.t; set_vi(i9, i9 + i9); bi = 9u; }
    if (pend) { pend = false; goto L_1990; }
L_1980: { ++fl.t; set_vi(i15, (((6528u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1988: { ++fl.t; next_bk = i6; set_vi(i6, 0u + 512u); bk = next_bk; bi = 6u; }
    if (pend) { pend = false; goto L_1768; }
L_1990: { ++fl.t; pend = 0u == (bi == 6 ? bk : i6); }
L_1998: { ++fl.t; }
    if (pend) { pend = false; goto L_19D0; }
L_19A0: { ++fl.t; pend = static_cast<std::int16_t>(i9) < 0; }
L_19A8: { ++fl.t; }
    if (pend) { pend = false; goto L_19F0; }
L_19B0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i8) * 8u) & 16383u; set_vi(i15, (((6576u + sh) & 16383u) + 16u) / 8u); pendj = true; }
L_19B8: { ++fl.t; }
    if (pendj) { pendj = false; vflush(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[22], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_19C0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i7) * 8u) & 16383u; pendj = true; }
L_19C8: { ++fl.t; }
    if (pendj) { pendj = false; vflush(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[22], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_19D0: { ++fl.t; pend = static_cast<std::int16_t>(i9) < 0; }
L_19D8: { ++fl.t; }
    if (pend) { pend = false; goto L_19F0; }
L_19E0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i7) * 8u) & 16383u; pendj = true; }
L_19E8: { ++fl.t; }
    if (pendj) { pendj = false; vflush(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[22], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_19F0: { ++fl.t; pend = true; }
L_19F8: { ++fl.t; }
    if (pend) { pend = false; goto L_0198; }
    vflush(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[22], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((6656u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, jpc);
    return;
}
static __attribute__((noinline, cold)) void vu1_C44960BED086A65F_c(Vu0Regs &r, std::uint8_t *mem, VuDaz &daz, std::uint32_t &hop) { vu1_C44960BED086A65F_b<true>(r, mem, daz, hop); }
void vu1_C44960BED086A65F(Vu0Regs &r, std::uint8_t *mem) {
    std::uint32_t hop = kNoHop;
    {
        VuDaz daz;
        if ((r.status & 0xC0u) == 0xC0u) vu1_C44960BED086A65F_b<false>(r, mem, daz, hop);
        else vu1_C44960BED086A65F_c(r, mem, daz, hop);
    }
    if (hop != kNoHop) vu::interpret(1, hop);
}

void vu1_95DEC5B0A04EB0F6(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 5048u) & 16383u;
    (void)sh;
    unsigned st = 0u;
    static constexpr std::uint8_t ks_1400[] = {0, 3};
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i5 = r.vi[5];
    std::uint16_t i8 = r.vi[8];
    std::uint16_t i15 = r.vi[15];
    goto L_13B8;
L_13B8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i8 + 5u) + 12, 2); set_vi(i2, v); } }
L_13C0: { ++fl.t; set_vi(i1, 0u + 256u); }
L_13C8: { ++fl.t; set_vi(i1, i5 & i1); }
L_13D0: { fl.t += 2u; set_vi(i2, i2 + i8); }
L_13D8: { ++fl.t; pend = 0u != i1; }
L_13E0: { ++fl.t; { const std::uint8_t *q = qword(mem, i2 + 0u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } }
    if (pend) { pend = false; goto L_13F8; }
L_13E8: { ++fl.t; pend = static_cast<std::int16_t>(i4) >= 0; }
L_13F0: { ++fl.t; }
    if (pend) { pend = false; st = 0u; goto L_1400; }
L_13F8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 37u) + 4, 2); set_vi(i4, v); } }
    st = 1u; 
L_1400: { fl.t += 1u + ks_1400[st]; { std::uint8_t *q = qword(mem, i8 + 7u); const std::uint32_t v = i4; std::memcpy(q + 12, &v, 4); } }
L_1408: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1410: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 27u); const std::uint32_t v = i4; std::memcpy(q + 4, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[4] = i4; vu::interpret(1, ((5144u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[4] = i4; vu::interpret(1, jpc);
    return;
}

template <bool kSticky>
static void vu1_01D8B6E54A77F584_s(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 4472u) & 16383u;
    (void)sh;
    v4u n1 = vshadow_eager(r.vf[1]);
    v4u n2 = vshadow_eager(r.vf[2]);
    v4u n3 = vshadow_eager(r.vf[3]);
    v4u n4 = vshadow_eager(r.vf[4]);
    v4u nacc = vshadow_eager(r.acc);
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i3 = r.vi[3];
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i5 = r.vi[5];
    std::uint16_t i8 = r.vi[8];
    std::uint16_t i15 = r.vi[15];
    goto L_1178;
L_10F8: { ++fl.t; const v4u uv = vmin(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0u)); { const std::uint8_t *q = qword(mem, i8 + 14u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[4], uv); n3 = vshadow_eager(r.vf[3]); n4 = vshadow_eager(r.vf[4]); }
L_1100: { ++fl.t; { const std::uint8_t *q = qword(mem, i8 + 17u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n3 = vshadow_eager(r.vf[3]); }
L_1108: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 64u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow_eager(r.vf[1]); }
L_1110: { ++fl.t; pend = 0u != i4; }
L_1118: { ++fl.t; const v4u uv = vmuln(n3, vsplat(n3[3])); { const std::uint8_t *q = qword(mem, i8 + 18u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vshadow_eager(r.vf[2]); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; goto L_1138; }
L_1120: { ++fl.t; const v4u uv = vmuln(n1, n3); { std::uint8_t *q = qword(mem, i8 + 21u); std::memcpy(q + 0, &r.vf[0].w[0], 4); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n4 = vsel(n4, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1128: { ++fl.t; const v4u uv = vmuln(n1, n3); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1130: { ++fl.t; const v4u uv = vaddn(nacc, (v4u)((v4f)n2 * (v4f)vsplat(0x3F800000u))); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1138: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 14u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); std::memcpy(q + 8, &r.vf[4].w[2], 4); } }
L_1140: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1148: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 13u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[15] = i15; vu::interpret(1, ((4432u + sh) & 16383u));
    return;
L_1178: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i3, 0u + 1u); vstore(r.vf[5], uv); }
L_1180: { ++fl.t; set_vi(i5, 0u + i15); }
L_1188: { ++fl.t; set_vi(i15, (((4488u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1190: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_1290; }
L_1198: { ++fl.t; set_vi(i15, 0u + i5); }
L_11A0: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 17u); std::memcpy(q, &r.vf[4], 16); } }
L_11A8: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 21u); std::memcpy(q + 0, &r.vf[5].w[0], 4); } }
L_11B0: { ++fl.t; pend = true; }
L_11B8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i8 + 1u) + 12, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_10F8; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[15] = i15; vu::interpret(1, ((4544u + sh) & 16383u));
    return;
L_1290: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 35u) + 12, 2); set_vi(i1, v); } }
L_1298: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 52u); std::memcpy(&r.vf[3], q, 16); } n3 = vshadow_eager(r.vf[3]); }
L_12A0: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 56u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow_eager(r.vf[2]); }
L_12A8: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 60u); std::memcpy(&r.vf[1], q, 16); } n1 = vshadow_eager(r.vf[1]); }
L_12B0: { ++fl.t; set_vi(i2, i1 & i3); }
L_12B8: { ++fl.t; set_vi(i3, i3 + i3); }
L_12C0: { ++fl.t; pend = 0u == i2; }
L_12C8: { ++fl.t; set_vi(i2, i1 & i3); }
    if (pend) { pend = false; goto L_12D8; }
L_12D0: { ++fl.t; vstore(r.vf[4], vsel(vload(r.vf[4]), vload(r.vf[3]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); n4 = vshadow_eager(r.vf[4]); }
L_12D8: { ++fl.t; set_vi(i3, i3 + i3); }
L_12E0: { ++fl.t; pend = 0u == i2; }
L_12E8: { ++fl.t; set_vi(i2, i1 & i3); }
    if (pend) { pend = false; goto L_12F8; }
L_12F0: { ++fl.t; const v4u uv = vmuln(n4, n2); vstore(r.vf[4], uv); fl.push_last<15u, kSticky>(uv); n4 = uv; }
L_12F8: { ++fl.t; }
L_1300: { ++fl.t; pend = 0u == i2; }
L_1308: { ++fl.t; }
    if (pend) { pend = false; goto L_1318; }
L_1310: { ++fl.t; const v4u uv = vaddn(n4, n1); vstore(r.vf[4], uv); fl.push_last<15u, kSticky>(uv); n4 = uv; }
L_1318: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1320: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[15] = i15; vu::interpret(1, ((4904u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

static __attribute__((noinline, cold)) void vu1_01D8B6E54A77F584_c(Vu0Regs &r, std::uint8_t *mem) { vu1_01D8B6E54A77F584_s<true>(r, mem); }

void vu1_01D8B6E54A77F584(Vu0Regs &r, std::uint8_t *mem) {
    if ((r.status & 0xC0u) == 0xC0u) vu1_01D8B6E54A77F584_s<false>(r, mem);
    else vu1_01D8B6E54A77F584_c(r, mem);
}

template <bool kSticky>
static void vu1_4D4B6B1CAC45F7C7_s(Vu0Regs &r, std::uint8_t *mem) {
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
    unsigned st = 0u;
    static constexpr std::uint8_t ks_0FC0[] = {0, 0};
    static constexpr std::uint8_t ks_0FC8[] = {0, 0};
    static constexpr std::uint8_t ks_0FD0[] = {1, 0};
    static constexpr std::uint8_t ke_0FC0_0FC8[] = {0, 1};
    static constexpr std::uint8_t ke_0FC8_0FD0[] = {0, 1};
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
    std::uint16_t i6 = r.vi[6];
    std::uint16_t i7 = r.vi[7];
    std::uint16_t i8 = r.vi[8];
    std::uint16_t i9 = r.vi[9];
    std::uint16_t i10 = r.vi[10];
    std::uint16_t i15 = r.vi[15];
    goto L_0008;
L_0008: { ++fl.t; set_vi(i2, 0u + 272u); }
L_0010: { ++fl.t; set_vi(i3, 0u + 264u); }
L_0018: { ++fl.t; set_vi(i4, 0u + 256u); }
L_0020: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 115u); const std::uint32_t v = i2; std::memcpy(q + 12, &v, 4); } }
L_0028: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 116u); const std::uint32_t v = i3; std::memcpy(q + 12, &v, 4); } }
L_0030: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 117u); const std::uint32_t v = i4; std::memcpy(q + 12, &v, 4); } }
L_0038: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = 0u; std::memcpy(q + 0, &v, 4); } }
L_0040: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = 0u; std::memcpy(q + 4, &v, 4); } }
L_0048: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 115u); const std::uint32_t v = 0u; std::memcpy(q + 0, &v, 4); } }
L_0050: { ++fl.t; r.i = 1124073472u; }
L_0058: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vfix(vsplat(r.i))); { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 37u) + 4, 2); set_vi(i9, v); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.push_last<1u, kSticky>(uv); }
L_0060: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); { const std::uint8_t *q = qword(mem, 0u + 45u); vstore(r.vf[6], vsel(vload(r.vf[6]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } vstore(r.vf[5], uv); n6 = vshadow_eager(r.vf[6]); n5 = vshadow_eager(r.vf[5]); }
L_0068: { ++fl.t; set_vi(i10, 0u + 8u); }
L_0070: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 12, 2); set_vi(i7, v); } }
L_0078: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 19u) + 12, 2); set_vi(i5, v); } }
L_0080: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 37u) + 8, 2); set_vi(i4, v); } }
L_0088: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 27u) + 12, 2); set_vi(i8, v); } }
L_0090: { ++fl.t; set_vi(i6, 0u + 0u); }
L_0098: { fl.t += 2u; { std::uint8_t *q = qword(mem, i5 + 31u); const std::uint32_t v = i4; std::memcpy(q + 0, &v, 4); } }
L_00A0: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 4u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_00A8: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 5u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_00B0: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 6u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_00B8: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 9u); std::memcpy(q + 12, &r.vf[4].w[3], 4); } }
L_00C0: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 15u); std::memcpy(q, &r.vf[5], 16); } }
L_00C8: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 24u); std::memcpy(q + 0, &r.vf[6].w[0], 4); std::memcpy(q + 4, &r.vf[6].w[1], 4); } }
L_00D0: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 7u); const std::uint32_t v = i9; std::memcpy(q + 12, &v, 4); } }
L_00D8: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 0u); const std::uint32_t v = i10; std::memcpy(q + 12, &v, 4); } }
L_00E0: { ++fl.t; set_vi(i5, i7 + 0u); }
L_00E8: { ++fl.t; set_vi(i15, (((232u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_00F0: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_0F98; }
L_00F8: { ++fl.t; set_vi(i5, i7 + 0u); }
L_0100: { ++fl.t; set_vi(i15, (((256u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0108: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 4, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0C28; }
L_0110: { ++fl.t; set_vi(i5, i7 + 0u); }
L_0118: { ++fl.t; set_vi(i15, (((280u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0120: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 37u) + 0, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0EF0; }
L_0128: { ++fl.t; set_vi(i5, i7 + 0u); }
L_0130: { ++fl.t; set_vi(i15, (((304u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0138: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_1328; }
L_0140: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i6 + 26u) + 12, 2); set_vi(i8, v); } }
L_0148: { ++fl.t; pend = 0u != i6; }
L_0150: { ++fl.t; set_vi(i6, i6 - 1u); }
    if (pend) { pend = false; goto L_00A0; }
L_0158: { ++fl.t; set_vi(i3, 0u + 27u); }
L_0160: { ++fl.t; vu::kick(1, i3); }
L_0168: { ++fl.t; ending = true; }
L_0170: { ++fl.t; }
    if (ending) { fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[15] = i15; r.tpc = ((376u + sh) & 16383u); return; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[15] = i15; vu::interpret(1, ((376u + sh) & 16383u));
    return;
L_0C28: { ++fl.t; set_vi(i1, 0u + 8u); }
L_0C30: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i1, i5 & i1); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n5 = vshadow_eager(r.vf[5]); }
L_0C38: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, v4u{0u, 0u, 0u, 0x3F800000u}); { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 8, 2); set_vi(i2, v); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n5 = vshadow_eager(r.vf[5]); }
L_0C40: { ++fl.t; pend = 0u == i1; }
L_0C48: { ++fl.t; r.i = 1132396544u; }
    if (pend) { pend = false; goto L_0C58; }
L_0C50: { ++fl.t; set_vi(i4, 0u + i2); }
L_0C58: { ++fl.t; set_vi(i1, 0u + 8u); }
L_0C60: { ++fl.t; set_vi(i1, i4 & i1); }
L_0C68: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 37u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } n1 = vshadow_eager(r.vf[1]); }
L_0C70: { ++fl.t; { const std::uint8_t *q = qword(mem, i8 + 15u); std::memcpy(&r.vf[6], q, 16); } n6 = vshadow_eager(r.vf[6]); }
L_0C78: { ++fl.t; { const std::uint8_t *q = qword(mem, i8 + 16u); std::memcpy(&r.vf[7], q, 16); } n7 = vshadow_eager(r.vf[7]); }
L_0C80: { ++fl.t; pend = 0u == i1; }
L_0C88: { ++fl.t; set_vi(i2, 0u + 4u); }
    if (pend) { pend = false; goto L_0C98; }
L_0C90: { ++fl.t; const v4u uv = vaddn(n1, n1); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0C98: { ++fl.t; set_vi(i3, 0u + 3u); }
L_0CA0: { ++fl.t; set_vi(i5, i4 & i3); }
L_0CA8: { ++fl.t; set_vi(i4, i4 & i2); }
L_0CB0: { ++fl.t; const v4u uv = (v4u)((v4f)n5 + (v4f)vsplat(0x3F800000u)); { std::uint16_t v; std::memcpy(&v, qword(mem, i8 + 0u) + 12, 2); set_vi(i1, v); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0CB8: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 14u); std::memcpy(q + 12, &r.vf[1].w[3], 4); } }
L_0CC0: { ++fl.t; pend = 0u == i5; }
L_0CC8: { ++fl.t; set_vi(i5, i5 - 1u); }
    if (pend) { pend = false; goto L_0D10; }
L_0CD0: { ++fl.t; r.i = 1124073472u; }
L_0CD8: { ++fl.t; pend = 0u == i5; }
L_0CE0: { ++fl.t; { const std::uint8_t *q = qword(mem, i8 + 4u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } n3 = vshadow_eager(r.vf[3]); }
    if (pend) { pend = false; goto L_0D30; }
L_0CE8: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 16u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0CF0: { ++fl.t; set_vi(i2, 0u + 1u); }
L_0CF8: { ++fl.t; set_vi(i1, i1 | i3); }
L_0D00: { ++fl.t; pend = true; }
L_0D08: { ++fl.t; set_vi(i3, 0u + 1u); }
    if (pend) { pend = false; goto L_0D50; }
L_0D10: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 32751u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0D18: { ++fl.t; set_vi(i1, i1 & i3); }
L_0D20: { ++fl.t; pend = true; }
L_0D28: { ++fl.t; set_vi(i3, 0u + 0u); }
    if (pend) { pend = false; goto L_0D50; }
L_0D30: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 16u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0D38: { ++fl.t; set_vi(i2, 0u + 0u); }
L_0D40: { ++fl.t; set_vi(i1, i1 | i3); }
L_0D48: { ++fl.t; set_vi(i3, 0u + 1u); }
L_0D50: { ++fl.t; pend = 0u == i4; }
L_0D58: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 28u); std::memcpy(q + 0, &r.vf[3].w[0], 4); std::memcpy(q + 4, &r.vf[3].w[1], 4); } }
    if (pend) { pend = false; goto L_0D70; }
L_0D60: { ++fl.t; r.i = 1073676288u; }
L_0D68: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vfix(vsplat(r.i))); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0D70: { ++fl.t; const v4u uv = vmuln(n6, vsplat(n1[3])); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0D78: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(r.vf[1].w[0])); r.i = 1124073472u; vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n2 = vshadow_eager(r.vf[2]); }
L_0D80: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vfix(vsplat(r.i))); { std::uint8_t *q = qword(mem, i8 + 10u); const std::uint32_t v = i3; std::memcpy(q + 8, &v, 4); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0D88: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 8u); const std::uint32_t v = i2; std::memcpy(q + 12, &v, 4); } }
L_0D90: { ++fl.t; const v4u uv = vmuln(n7, n6); { std::uint8_t *q = qword(mem, i8 + 0u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } vstore(r.vf[7], uv); fl.push_last<15u, kSticky>(uv); n7 = uv; }
L_0D98: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 23u); const std::uint32_t v = i1; std::memcpy(q + 0, &v, 4); } }
L_0DA0: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 13u); std::memcpy(q + 12, &r.vf[5].w[3], 4); } }
L_0DA8: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 9u); std::memcpy(q, &r.vf[2], 16); } }
L_0DB0: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 19u); std::memcpy(q, &r.vf[7], 16); } }
L_0DB8: { ++fl.t; pend = true; }
L_0DC0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i8 + 1u) + 12, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_10F8; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[15] = i15; vu::interpret(1, ((3528u + sh) & 16383u));
    return;
L_0EF0: { ++fl.t; set_vi(i1, 0u + 16u); }
L_0EF8: { ++fl.t; set_vi(i1, i5 & i1); }
L_0F00: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 12, 2); set_vi(i2, v); } }
L_0F08: { ++fl.t; pend = 0u == i1; }
L_0F10: { ++fl.t; }
    if (pend) { pend = false; goto L_0F28; }
L_0F18: { ++fl.t; set_vi(i4, 0u + i2); }
L_0F20: { ++fl.t; }
L_0F28: { ++fl.t; pend = 0u == i4; }
L_0F30: { ++fl.t; set_vi(i4, i4 - 1u); }
    if (pend) { pend = false; goto L_0F80; }
L_0F38: { ++fl.t; set_vi(i1, 0u + 16384u); }
L_0F40: { ++fl.t; pend = 0u == i4; }
L_0F48: { ++fl.t; }
    if (pend) { pend = false; goto L_0F68; }
L_0F50: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 2u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0F58: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0F60: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 3u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0F68: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 2u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0F70: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0F78: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 3u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0F80: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 2u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0F88: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0F90: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 3u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0F98: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 8, 2); set_vi(i3, v); } }
L_0FA0: { ++fl.t; pend = 0u != i4; }
L_0FA8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i8 + 0u) + 12, 2); set_vi(i1, v); } }
    if (pend) { pend = false; st = 0u; goto L_0FC0; }
L_0FB0: { fl.t += 2u; pend = 0u != i3; }
L_0FB8: { ++fl.t; }
    if (pend) { pend = false; goto L_0FD8; }
    st = 1u; 
L_0FC0: { fl.t += 1u + ks_0FC0[st]; set_vi(i3, 0u + 32735u); }
    st = ke_0FC0_0FC8[st]; 
L_0FC8: { fl.t += 1u + ks_0FC8[st]; pend = true; }
    st = ke_0FC8_0FD0[st]; 
L_0FD0: { fl.t += 1u + ks_0FD0[st]; set_vi(i1, i1 & i3); }
    if (pend) { pend = false; goto L_0FE8; }
L_0FD8: { ++fl.t; set_vi(i3, 0u + 32u); }
L_0FE0: { ++fl.t; set_vi(i1, i1 | i3); }
L_0FE8: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 0u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0FF0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0FF8: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 23u); const std::uint32_t v = i1; std::memcpy(q + 0, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[15] = i15; vu::interpret(1, ((4096u + sh) & 16383u));
    return;
L_10F8: { ++fl.t; const v4u uv = vmin(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0u)); { const std::uint8_t *q = qword(mem, i8 + 14u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[4], uv); n3 = vshadow_eager(r.vf[3]); }
L_1100: { ++fl.t; { const std::uint8_t *q = qword(mem, i8 + 17u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n3 = vshadow_eager(r.vf[3]); }
L_1108: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 64u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow_eager(r.vf[1]); }
L_1110: { ++fl.t; pend = 0u != i4; }
L_1118: { ++fl.t; const v4u uv = vmuln(n3, vsplat(n3[3])); { const std::uint8_t *q = qword(mem, i8 + 18u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vshadow_eager(r.vf[2]); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; goto L_1138; }
L_1120: { ++fl.t; const v4u uv = vmuln(n1, n3); { std::uint8_t *q = qword(mem, i8 + 21u); std::memcpy(q + 0, &r.vf[0].w[0], 4); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); }
L_1128: { ++fl.t; const v4u uv = vmuln(n1, n3); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1130: { ++fl.t; const v4u uv = vaddn(nacc, (v4u)((v4f)n2 * (v4f)vsplat(0x3F800000u))); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1138: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 14u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); std::memcpy(q + 8, &r.vf[4].w[2], 4); } }
L_1140: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1148: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 13u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[15] = i15; vu::interpret(1, ((4432u + sh) & 16383u));
    return;
L_1328: { ++fl.t; set_vi(i1, 0u + 32u); }
L_1330: { ++fl.t; set_vi(i1, i5 & i1); }
L_1338: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 47u) + 0, 2); set_vi(i2, v); } }
L_1340: { ++fl.t; pend = 0u == i1; }
L_1348: { ++fl.t; }
    if (pend) { pend = false; goto L_1360; }
L_1350: { ++fl.t; set_vi(i4, 0u + i2); }
L_1358: { ++fl.t; }
L_1360: { ++fl.t; pend = 0u != i4; }
L_1368: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 33u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } }
    if (pend) { pend = false; goto L_1380; }
L_1370: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1378: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 12u); std::memcpy(q + 0, &r.vf[0].w[0], 4); std::memcpy(q + 4, &r.vf[0].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_1380: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1388: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 12u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[15] = i15; vu::interpret(1, ((5008u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

static __attribute__((noinline, cold)) void vu1_4D4B6B1CAC45F7C7_c(Vu0Regs &r, std::uint8_t *mem) { vu1_4D4B6B1CAC45F7C7_s<true>(r, mem); }

void vu1_4D4B6B1CAC45F7C7(Vu0Regs &r, std::uint8_t *mem) {
    if ((r.status & 0xC0u) == 0xC0u) vu1_4D4B6B1CAC45F7C7_s<false>(r, mem);
    else vu1_4D4B6B1CAC45F7C7_c(r, mem);
}

template <bool kSticky>
static void vu1_22994E5D357C78AB_s(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 4504u) & 16383u;
    (void)sh;
    unsigned st = 0u;
    static constexpr std::uint8_t ks_1138[] = {0, 1};
    static constexpr std::uint8_t ks_1140[] = {0, 0};
    static constexpr std::uint8_t ks_1148[] = {1, 0};
    static constexpr std::uint8_t ke_1138_1140[] = {0, 1};
    static constexpr std::uint8_t ke_1140_1148[] = {0, 1};
    v4u n1 = vshadow_eager(r.vf[1]);
    v4u n2 = vshadow_eager(r.vf[2]);
    v4u n3 = vshadow_eager(r.vf[3]);
    v4u nacc = vshadow_eager(r.acc);
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i5 = r.vi[5];
    std::uint16_t i8 = r.vi[8];
    std::uint16_t i15 = r.vi[15];
    goto L_1198;
L_10F8: { ++fl.t; const v4u uv = vmin(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0u)); { const std::uint8_t *q = qword(mem, i8 + 14u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[4], uv); n3 = vshadow_eager(r.vf[3]); }
L_1100: { ++fl.t; { const std::uint8_t *q = qword(mem, i8 + 17u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n3 = vshadow_eager(r.vf[3]); }
L_1108: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 64u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow_eager(r.vf[1]); }
L_1110: { ++fl.t; pend = 0u != i4; }
L_1118: { fl.t += 2u; const v4u uv = vmuln(n3, vsplat(n3[3])); { const std::uint8_t *q = qword(mem, i8 + 18u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vshadow_eager(r.vf[2]); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; st = 0u; goto L_1138; }
L_1120: { fl.t += 4u; const v4u uv = vmuln(n1, n3); { std::uint8_t *q = qword(mem, i8 + 21u); std::memcpy(q + 0, &r.vf[0].w[0], 4); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); }
L_1128: { ++fl.t; const v4u uv = vmuln(n1, n3); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1130: { ++fl.t; const v4u uv = vaddn(nacc, (v4u)((v4f)n2 * (v4f)vsplat(0x3F800000u))); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    st = 1u; 
L_1138: { fl.t += 1u + ks_1138[st]; { std::uint8_t *q = qword(mem, i8 + 14u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); std::memcpy(q + 8, &r.vf[4].w[2], 4); } }
    st = ke_1138_1140[st]; 
L_1140: { fl.t += 1u + ks_1140[st]; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
    st = ke_1140_1148[st]; 
L_1148: { fl.t += 1u + ks_1148[st]; { std::uint8_t *q = qword(mem, i8 + 13u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[4] = i4; r.vi[15] = i15; vu::interpret(1, ((4432u + sh) & 16383u));
    return;
L_1198: { ++fl.t; set_vi(i15, 0u + i5); }
L_11A0: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 17u); std::memcpy(q, &r.vf[4], 16); } }
L_11A8: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 21u); std::memcpy(q + 0, &r.vf[5].w[0], 4); } }
L_11B0: { ++fl.t; pend = true; }
L_11B8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i8 + 1u) + 12, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_10F8; }
    fl.finish(r); r.vi[4] = i4; r.vi[15] = i15; vu::interpret(1, ((4544u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[4] = i4; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

static __attribute__((noinline, cold)) void vu1_22994E5D357C78AB_c(Vu0Regs &r, std::uint8_t *mem) { vu1_22994E5D357C78AB_s<true>(r, mem); }

void vu1_22994E5D357C78AB(Vu0Regs &r, std::uint8_t *mem) {
    if ((r.status & 0xC0u) == 0xC0u) vu1_22994E5D357C78AB_s<false>(r, mem);
    else vu1_22994E5D357C78AB_c(r, mem);
}

template <bool kSticky>
static void vu1_360F229A150B5CA8_s(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 4664u) & 16383u;
    (void)sh;
    v4u n4 = vshadow_eager(r.vf[4]);
    v4u n5 = vshadow_eager(r.vf[5]);
    std::uint16_t i5 = r.vi[5];
    std::uint16_t i8 = r.vi[8];
    std::uint16_t i15 = r.vi[15];
    goto L_1238;
L_1238: { ++fl.t; set_vi(i15, 0u + i5); }
L_1240: { ++fl.t; const v4u uv = vmuln(n4, n5); { std::uint8_t *q = qword(mem, i8 + 16u); std::memcpy(q, &r.vf[4], 16); } vstore(r.vf[5], uv); fl.push_last<15u, kSticky>(uv); n5 = uv; }
L_1248: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1250: { fl.t += 3u; { std::uint8_t *q = qword(mem, i8 + 19u); std::memcpy(q, &r.vf[5], 16); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[15] = i15; vu::interpret(1, ((4696u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

static __attribute__((noinline, cold)) void vu1_360F229A150B5CA8_c(Vu0Regs &r, std::uint8_t *mem) { vu1_360F229A150B5CA8_s<true>(r, mem); }

void vu1_360F229A150B5CA8(Vu0Regs &r, std::uint8_t *mem) {
    if ((r.status & 0xC0u) == 0xC0u) vu1_360F229A150B5CA8_s<false>(r, mem);
    else vu1_360F229A150B5CA8_c(r, mem);
}

template <bool kSticky>
static void vu1_C17E900C8708D8D7_s(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 4616u) & 16383u;
    (void)sh;
    v4u n1 = vshadow_eager(r.vf[1]);
    v4u n2 = vshadow_eager(r.vf[2]);
    v4u n4 = vshadow_eager(r.vf[4]);
    v4u n5 = vshadow_eager(r.vf[5]);
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i3 = r.vi[3];
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i5 = r.vi[5];
    std::uint16_t i8 = r.vi[8];
    std::uint16_t i15 = r.vi[15];
    goto L_1208;
L_1208: { ++fl.t; { const std::uint8_t *q = qword(mem, i8 + 15u); std::memcpy(&r.vf[5], q, 16); } n5 = vshadow_eager(r.vf[5]); }
L_1210: { ++fl.t; { const std::uint8_t *q = qword(mem, i8 + 14u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } n1 = vshadow_eager(r.vf[1]); }
L_1218: { ++fl.t; set_vi(i3, 0u + 256u); }
L_1220: { ++fl.t; set_vi(i5, 0u + i15); }
L_1228: { ++fl.t; set_vi(i15, (((4648u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1230: { ++fl.t; const v4u uv = vmuln(n5, vsplat(n1[3])); set_vi(i4, 0u + 2u); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; goto L_1290; }
L_1238: { ++fl.t; set_vi(i15, 0u + i5); }
L_1240: { ++fl.t; const v4u uv = vmuln(n4, n5); { std::uint8_t *q = qword(mem, i8 + 16u); std::memcpy(q, &r.vf[4], 16); } vstore(r.vf[5], uv); fl.push_last<15u, kSticky>(uv); n5 = uv; }
L_1248: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1250: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 19u); std::memcpy(q, &r.vf[5], 16); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[15] = i15; vu::interpret(1, ((4696u + sh) & 16383u));
    return;
L_1290: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 35u) + 12, 2); set_vi(i1, v); } }
L_1298: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 52u); std::memcpy(&r.vf[3], q, 16); } }
L_12A0: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 56u); std::memcpy(&r.vf[2], q, 16); } n2 = vshadow_eager(r.vf[2]); }
L_12A8: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 60u); std::memcpy(&r.vf[1], q, 16); } n1 = vshadow_eager(r.vf[1]); }
L_12B0: { ++fl.t; set_vi(i2, i1 & i3); }
L_12B8: { ++fl.t; set_vi(i3, i3 + i3); }
L_12C0: { ++fl.t; pend = 0u == i2; }
L_12C8: { ++fl.t; set_vi(i2, i1 & i3); }
    if (pend) { pend = false; goto L_12D8; }
L_12D0: { ++fl.t; vstore(r.vf[4], vsel(vload(r.vf[4]), vload(r.vf[3]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); n4 = vshadow_eager(r.vf[4]); }
L_12D8: { ++fl.t; set_vi(i3, i3 + i3); }
L_12E0: { ++fl.t; pend = 0u == i2; }
L_12E8: { ++fl.t; set_vi(i2, i1 & i3); }
    if (pend) { pend = false; goto L_12F8; }
L_12F0: { ++fl.t; const v4u uv = vmuln(n4, n2); vstore(r.vf[4], uv); fl.push_last<15u, kSticky>(uv); n4 = uv; }
L_12F8: { ++fl.t; }
L_1300: { ++fl.t; pend = 0u == i2; }
L_1308: { ++fl.t; }
    if (pend) { pend = false; goto L_1318; }
L_1310: { ++fl.t; const v4u uv = vaddn(n4, n1); vstore(r.vf[4], uv); fl.push_last<15u, kSticky>(uv); n4 = uv; }
L_1318: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1320: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[15] = i15; vu::interpret(1, ((4904u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

static __attribute__((noinline, cold)) void vu1_C17E900C8708D8D7_c(Vu0Regs &r, std::uint8_t *mem) { vu1_C17E900C8708D8D7_s<true>(r, mem); }

void vu1_C17E900C8708D8D7(Vu0Regs &r, std::uint8_t *mem) {
    if ((r.status & 0xC0u) == 0xC0u) vu1_C17E900C8708D8D7_s<false>(r, mem);
    else vu1_C17E900C8708D8D7_c(r, mem);
}

void vu1_538C9FCB717D29CE(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 4904u) & 16383u;
    (void)sh;
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i5 = r.vi[5];
    std::uint16_t i8 = r.vi[8];
    std::uint16_t i15 = r.vi[15];
    goto L_1328;
L_1328: { ++fl.t; set_vi(i1, 0u + 32u); }
L_1330: { ++fl.t; set_vi(i1, i5 & i1); }
L_1338: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 47u) + 0, 2); set_vi(i2, v); } }
L_1340: { ++fl.t; pend = 0u == i1; }
L_1348: { ++fl.t; }
    if (pend) { pend = false; goto L_1360; }
L_1350: { fl.t += 2u; set_vi(i4, 0u + i2); }
L_1358: { ++fl.t; }
L_1360: { ++fl.t; pend = 0u != i4; }
L_1368: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 33u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } }
    if (pend) { pend = false; goto L_1380; }
L_1370: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1378: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 12u); std::memcpy(q + 0, &r.vf[0].w[0], 4); std::memcpy(q + 4, &r.vf[0].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_1380: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1388: { fl.t += 3u; { std::uint8_t *q = qword(mem, i8 + 12u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[4] = i4; vu::interpret(1, ((5008u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[4] = i4; vu::interpret(1, jpc);
    return;
}

void vu1_8497BA6277A978EF(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 5184u) & 16383u;
    (void)sh;
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i6 = r.vi[6];
    std::uint16_t i9 = r.vi[9];
    std::uint16_t i10 = r.vi[10];
    std::uint16_t i13 = r.vi[13];
    std::uint16_t i15 = r.vi[15];
    goto L_1440;
L_0198: { ++fl.t; set_vi(i1, 0u + 15u); }
L_01A0: { ++fl.t; set_vi(i1, i10 & i1); }
L_01A8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1) + 4, 2); set_vi(i2, v); } }
L_01B0: { fl.t += 4u; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; pendj = true; }
L_01B8: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[6] = i6; r.vi[9] = i9; r.vi[10] = i10; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((448u + sh) & 16383u));
    return;
L_1440: { ++fl.t; set_vi(i6, r.vf[16].w[0]); }
L_1448: { ++fl.t; set_vi(i6, i6 - 1u); }
L_1450: { ++fl.t; set_vi(i1, r.vf[17].w[0]); }
L_1458: { ++fl.t; { const v4u m = vload(r.vf[17]); vstore(r.vf[17], vsel(vload(r.vf[17]), v4u{m[1], m[2], m[3], m[0]}, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); } }
L_1460: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[2], q, 16); set_vi(i13, i13 + 1u); } }
L_1468: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[3], q, 16); set_vi(i13, i13 + 1u); } }
L_1470: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[4], q, 16); set_vi(i13, i13 + 1u); } }
L_1478: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[5], q, 16); set_vi(i13, i13 + 1u); } }
L_1480: { ++fl.t; { std::uint8_t *q = qword(mem, i1 + 960u); std::memcpy(q, &r.vf[2], 16); } }
L_1488: { ++fl.t; { std::uint8_t *q = qword(mem, i1 + 961u); std::memcpy(q, &r.vf[3], 16); } }
L_1490: { ++fl.t; { std::uint8_t *q = qword(mem, i1 + 962u); std::memcpy(q, &r.vf[4], 16); } }
L_1498: { ++fl.t; { std::uint8_t *q = qword(mem, i1 + 963u); std::memcpy(q, &r.vf[5], 16); } }
L_14A0: { ++fl.t; pend = 0u != i6; }
L_14A8: { ++fl.t; set_vi(i6, i6 - 1u); }
    if (pend) { pend = false; goto L_1450; }
L_14B0: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[16], q, 16); set_vi(i13, i13 + 1u); } }
L_14B8: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[17], q, 16); set_vi(i13, i13 + 1u); } }
L_14C0: { ++fl.t; pend = true; }
L_14C8: { ++fl.t; set_vi(i15, 0u + 648u); }
    if (pend) { pend = false; goto L_18A8; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[6] = i6; r.vi[9] = i9; r.vi[10] = i10; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((5328u + sh) & 16383u));
    return;
L_1768: { ++fl.t; ending = true; }
L_1770: { ++fl.t; }
    if (ending) { fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[6] = i6; r.vi[9] = i9; r.vi[10] = i10; r.vi[13] = i13; r.vi[15] = i15; r.tpc = ((6008u + sh) & 16383u); return; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[6] = i6; r.vi[9] = i9; r.vi[10] = i10; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((6008u + sh) & 16383u));
    return;
L_18A8: { ++fl.t; set_vi(i9, i10 + 0u); }
L_18B0: { ++fl.t; pend = static_cast<std::int16_t>(i10) < 0; }
L_18B8: { ++fl.t; set_vi(i10, r.vf[16].w[3]); }
    if (pend) { pend = false; goto L_18D0; }
L_18C0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_18C8: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_18D0: { ++fl.t; set_vi(i6, 0u + 4096u); }
L_18D8: { ++fl.t; set_vi(i1, i9 & i6); }
L_18E0: { ++fl.t; set_vi(i6, 0u + 2048u); }
L_18E8: { ++fl.t; set_vi(i6, i9 & i6); }
L_18F0: { ++fl.t; pend = 0u == i1; }
L_18F8: { ++fl.t; set_vi(i1, 0u + i15); }
    if (pend) { pend = false; goto L_1910; }
L_1900: { ++fl.t; set_vi(i15, (((6400u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1908: { ++fl.t; }
    if (pend) { pend = false; goto L_1768; }
L_1910: { ++fl.t; pend = 0u != i6; }
L_1918: { ++fl.t; set_vi(i15, 0u + i1); }
    if (pend) { pend = false; goto L_0198; }
L_1920: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1928: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[6] = i6; r.vi[9] = i9; r.vi[10] = i10; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((6448u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[6] = i6; r.vi[9] = i9; r.vi[10] = i10; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

}
